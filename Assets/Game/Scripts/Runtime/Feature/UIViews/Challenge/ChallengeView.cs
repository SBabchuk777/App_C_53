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
        [SerializeField] private SerializableDictionary<GameModeType, ChallengeButton> challengeButtons;
        
        [Inject] private ChallengeController challengeController;
        protected override void Subscribe()
        {
            closeButton.onClick.AddListener(ClosePanel);
            
            challengeController.OnTimerTick[0] += challengeButtons[GameModeType.NewBall].SetTimerText;
            challengeController.OnTimerTick[1] += challengeButtons[GameModeType.Time].SetTimerText;
            
            challengeController.OnClosePanel += ClosePanelAfterStartGame;
        }
        
        protected override void Initialize()
        {
            challengeButtons[GameModeType.Collect].SetActiveButton(challengeController.OpenCollectionView);
            challengeButtons[GameModeType.NewBall].SetActiveButton(challengeController.OpenNewBallGame);
            
            challengeButtons[GameModeType.Collect].SetProgressBar(challengeController.GetProgressValueCollectButton());
            challengeButtons[GameModeType.NewBall].SetProgressBar(challengeController.GetProgressValueNewBallButton());

            for (var i = 0; i < 2; i++)
            {
                if (challengeController.ChallengeData.IsActiveButtons[i])
                {
                    ActivateButton((GameModeType)i);
                }
                else
                {
                    InactivateButton((GameModeType)i);
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
            challengeButtons[GameModeType.Collect].ResetButton();
            
            challengeController.OnTimerTick[0] -= challengeButtons[GameModeType.NewBall].SetTimerText;
            challengeController.OnTimerTick[1] -= challengeButtons[GameModeType.Time].SetTimerText;
            challengeController.OnClosePanel -= ClosePanelAfterStartGame;
        }

        private void ActivateButton(GameModeType type)
        {
            challengeButtons[type].SetActive();
        }

        private void InactivateButton(GameModeType type)
        {
            challengeButtons[type].SetInactive();
        }
        private void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
        private void ClosePanelAfterStartGame()
        {
            DOTween.Sequence().Append(DOVirtual.DelayedCall(0.8f, Close)).Play();
        }
    }
}