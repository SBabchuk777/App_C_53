using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    public class ChallengeView : BaseView
    {
        [SerializeField] private Button closeButton;
        [SerializeField] private SerializableDictionary<ChallengeType, ChallengeButton> challengeButtons;
        
        [Inject] private ChallengeController challengeController;
        protected override void Subscribe()
        {
            closeButton.onClick.AddListener(ClosePanel);
            challengeButtons[ChallengeType.Collect].SetActiveButton(challengeController.OpenCollectionView);
            
            challengeController.OnTimerTick[0] += challengeButtons[ChallengeType.NewBall].SetTimerText;
            challengeController.OnTimerTick[1] += challengeButtons[ChallengeType.Time].SetTimerText;
        }

        protected override void Initialize()
        {
            challengeButtons[ChallengeType.Collect].SetProgressBar(challengeController.GetProgressValueCollectButton());

            for (var i = 0; i < 2; i++)
            {
                if (challengeController.ChallengeData.IsActiveButtons[i])
                {
                    ActivateButton((ChallengeType)i);
                }
                else
                {
                    InactivateButton((ChallengeType)i);
                }
            }
        }

        protected override void Open()
        {
            transform.localPosition = new Vector3(1080, 0, transform.localPosition.z);
            transform.DOLocalMoveX(0, 0.5f).SetEase(Ease.OutBounce).Play();
        }

        protected override void Unsubscribe()
        {
            closeButton.onClick.RemoveAllListeners();
            challengeButtons[ChallengeType.Collect].ResetButton();
            
            challengeController.OnTimerTick[0] -= challengeButtons[ChallengeType.NewBall].SetTimerText;
            challengeController.OnTimerTick[1] -= challengeButtons[ChallengeType.Time].SetTimerText;
        }

        private void ActivateButton(ChallengeType type)
        {
            challengeButtons[type].SetActive();
            //challengeButtons[type].SetActiveButton();
        }

        private void InactivateButton(ChallengeType type)
        {
            challengeButtons[type].SetInactive();
        }
        private void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
    }

    public enum ChallengeType
    {
        NewBall,
        Time,
        Collect
    }
}