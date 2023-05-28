using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.BonusGame.UIViews
{
    public class BonusGameView : BaseView
    {
        [SerializeField] private BonusGameArbiter bonusGameArbiter;
        [SerializeField] private ImageFader fader;

        [SerializeField] private Text timerText;
        [SerializeField] private Text inactiveTimerText;

        [SerializeField] private GameObject view;
        [SerializeField] private GameObject activePreview;
        [SerializeField] private GameObject inactivePreview;

        [SerializeField] private Button homeButton;
        [SerializeField] private Button closePreviewButton;

        [Inject] private ChallengeController challengeController;
        
        protected override void Subscribe()
        {
            challengeController.OnTimerTick[2] += ChangeInactiveTimer;
            challengeController.OnTimerFinish[2] += SetActivePreview;

            bonusGameArbiter.OnBonusTimerTick += ChangeBonusTimer;
            bonusGameArbiter.OnFinishBonusTimer += SetInactivePreview;
            
            closePreviewButton.onClick.AddListener(CloseActivePreview);
            homeButton.onClick.AddListener(ClosePanel);
        }

        private void SetInactivePreview()
        {
            timerText.gameObject.SetActive(false);
            inactivePreview.SetActive(true);
        }
        private void SetActivePreview()
        {
            bonusGameArbiter.ActivatePanel();
            inactivePreview.SetActive(false);
            activePreview.SetActive(true);
        }

        private void ClosePanel()
        {
            bonusGameArbiter.CloseView();
            view.SetActive(false);
            fader.FadeOut(0.3f, Close);
        }

        protected override void Initialize()
        {
            view.SetActive(false);
            
            if (challengeController.ChallengeData.IsActiveButtons[2])
            {
                SetActivePreview();
            }
            else
            {
                SetInactivePreview();
            }
        }

        protected override void Open()
        {
            fader.FadeTo(0.3f, () => view.SetActive(true));
        }

        protected override void Unsubscribe()
        {
            challengeController.OnTimerTick[2] -= ChangeInactiveTimer;
            challengeController.OnTimerFinish[2] -= SetActivePreview;

            bonusGameArbiter.OnBonusTimerTick -= ChangeBonusTimer;
            bonusGameArbiter.OnFinishBonusTimer -= SetInactivePreview;
            
            closePreviewButton.onClick.RemoveAllListeners();
            homeButton.onClick.RemoveAllListeners();
        }

        private void ChangeBonusTimer(string value)
        {
            timerText.text = value;
        }
        private void ChangeInactiveTimer(string value)
        {
            inactiveTimerText.text = value;
        }

        private void CloseActivePreview()
        {
            activePreview.gameObject.SetActive(false);
            timerText.gameObject.SetActive(true);
            bonusGameArbiter.StartBonusTimer();
        }
    }
}