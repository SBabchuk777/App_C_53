using System;
using System.Threading;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Collection;
using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.Timer;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    public class ChallengeController : MonoBehaviour, IProjectInitializable
    {
        [SerializeField] private CollectionElementsInfoData collectionElementsInfoData;
        [SerializeField] private float[] maxGetTime;
        
        [Inject] private CollectionController collectionController;
        [Inject] private UIViewService uiViewService;
        [Inject] private DataHub dataHub;
        [Inject] private SceneNavigation sceneNavigation;

        public Action<string>[] OnTimerTick = new Action<string>[2];
        public Action[] OnTimerFinish = new Action[2];
        
        private ITimer[] timers = new ITimer[] { new TimerService(), new TimerService() };
        private TimeConverter timeConverter = new();

        public ChallengeData ChallengeData { get; private set; }

        public event Action OnClosePanel;

        public void Initialize()
        {
            ChallengeData = dataHub.LoadData<ChallengeData>("Challenge");
        }

        public void OpenCollectionView()
        {
            collectionController.PrepareView();
            uiViewService.Instantiate(UIViewType.Collection);
        }
        public void OpenNewBallGame()
        {
            dataHub.LevelGameData.GameModeType = GameModeType.NewBall;
            sceneNavigation.LoadLevel();
            OnClosePanel?.Invoke();
        }

        public int GetProgressValueCollectButton()
        {
            var progressData = dataHub.LoadData<PlayerProgressData>("Progress");
            float allAvailableCount = progressData.AvailableRareColection.Count + progressData.AvailableRegularColection.Count;
            var value = allAvailableCount / collectionElementsInfoData.AllElementsCount * 100;
            
            return Mathf.FloorToInt(value);
        }
        public int GetProgressValueNewBallButton()
        {
            var value = ChallengeData.CountPlayGameInNewBall / 5f * 100;
            
            return Mathf.FloorToInt(value);
        }
        public void PrepareView()
        {
            var elapsedTime = (float)(DateTime.Now - ChallengeData.LastDateTime).TotalSeconds;

            for (var i = 0; i < maxGetTime.Length; i++)
            {
                var currentTime = Mathf.Clamp(ChallengeData.CountLastTime[i] - elapsedTime, 0.0f, maxGetTime[i]);

                if (currentTime > 0)
                    StartTimer(Mathf.Ceil(currentTime), i);
                else
                    ResetDataForTimer(i);
            }
        }

        private void ResetDataForTimer(int i)
        {
            ChallengeData.IsActiveButtons[i] = true;
            ChallengeData.CountLastTime[i] = 0;

            SaveData();
        }

        public void NotifyCompleteBonusGame(int indexGame)
        {
            ChallengeData.IsActiveButtons[indexGame] = false;
            ChallengeData.LastDateTime = DateTime.Now;
            ChallengeData.CountLastTime[indexGame] = maxGetTime[indexGame];

            SaveData();
        }

        private void StartTimer(float time, int index)
        {
            var timer = timers[index];
            timer.StartCountdown(time, CancellationToken.None);
            
            OnTimerTick[index]?.Invoke(timeConverter.FormatSecondsToHHMMSS(time));
            
            SubscribeTimer(timer, index);
        }

        private void SubscribeTimer(ITimer timer, int index)
        {
            timer.OnSecondPassed += seconds => OnTimerTick[index]?.Invoke(timeConverter.FormatSecondsToHHMMSS(seconds));
            
            timer.OnTimerFinished += () =>
            {
                ResetDataForTimer(index);
                OnTimerFinish[index]?.Invoke();
            };
        }

        private void SaveTimeData()
        {
            ChallengeData.LastDateTime = DateTime.Now;

            for (var i = 0; i < timers.Length; i++)
            {
                var timer = timers[i];

                if (timer.CurrentSeconds > 0)
                    ChallengeData.CountLastTime[i] = timer.CurrentSeconds;
            }

            SaveData();
        }
        
        private void SaveData()
        {
            dataHub.SaveData("Challenge", ChallengeData);
        }
    }
}