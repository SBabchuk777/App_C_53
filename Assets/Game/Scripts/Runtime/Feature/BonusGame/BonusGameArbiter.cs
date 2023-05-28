using System;
using System.Threading;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Services.Timer;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class BonusGameArbiter : MonoBehaviour
    {
        [SerializeField] private RectTransform spawnArea;
        [SerializeField] private RectTransform parent;
        [SerializeField] private SkinBallInfoData skinBallInfoData;
        
        [SerializeField] private BonusGameIcon starPrefab;
        [SerializeField] private BonusGameIcon ballPrefab;

        private Injector injector => ProjectContext.Instance.Injector;
        [Inject] private ChallengeController challengeController;

        private ITimer bonusTimer;
        private ITimer inactiveTimer;
        private TimeConverter converter;
        private Sequence createIconSequence;

        public event Action<string> OnBonusTimerTick;
        public event Action OnFinishBonusTimer;
        private Vector3 RandomPositionInChipArea => new Vector3(
            Random.Range(spawnArea.rect.min.x, spawnArea.rect.max.x),
            Random.Range(spawnArea.rect.min.y, spawnArea.rect.max.y),
            0
        );

        public void StartBonusTimer()
        {
            bonusTimer = new TimerService();
            converter = new TimeConverter();
            bonusTimer.StartCountdown(30, CancellationToken.None);
            bonusTimer.OnSecondPassed += NotifyBonusTimerTick;
            bonusTimer.OnTimerFinished += NotifyFinishBonusTimer;
            
            CreateIcons();
        }
        
        public void CloseView()
        {
            bonusTimer?.Stop();
            inactiveTimer?.Stop();
            createIconSequence?.Kill();
        }

        public void ActivatePanel()
        {
            parent.gameObject.SetActive(true);
        }
        private void CreateIcons()
        {
            createIconSequence = DOTween.Sequence();

            float RandomTime() => Random.Range(0.25f, 0.55f);

            for (int i = 0; i < 75; i++)
            {
                if (Random.Range(0,100) < 62)
                {
                    createIconSequence.Append(DOVirtual.DelayedCall(RandomTime(), CreateStar));
                }
                else
                {
                    createIconSequence.Append(DOVirtual.DelayedCall(RandomTime(), CreateBall));
                }
            }
            
            createIconSequence.Play();
        }


        private void CreateStar()
        {
            var instance = Instantiate(starPrefab, RandomPositionInChipArea, Quaternion.identity).gameObject;
            instance.transform.SetParent(parent, false);
            
            injector.InjectDependenciesInObject(instance.GetComponent<StarBonus>());
        }

        private void CreateBall()
        {
            var randomSprite = skinBallInfoData.PathMap[Random.Range(0, skinBallInfoData.PathMap.Count)].Skin;
            
            var instance = Instantiate(ballPrefab, RandomPositionInChipArea, Quaternion.identity).gameObject;

            var ballIcon = instance.GetComponent<BallBonus>();
            ballIcon.SetIcon(randomSprite);
            
            instance.transform.SetParent(parent, false);
        }

        private void NotifyBonusTimerTick(float value)
        {
            OnBonusTimerTick?.Invoke(converter.FormatSecondsToMMSS(value));
        }
        
        private void NotifyFinishBonusTimer()
        {
            challengeController.NotifyCompleteBonusGame(2);
            challengeController.PrepareView();
           
            parent.gameObject.SetActive(false);
            OnFinishBonusTimer?.Invoke();
        }
    }
}