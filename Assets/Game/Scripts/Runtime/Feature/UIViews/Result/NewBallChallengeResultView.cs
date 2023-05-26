using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class NewBallChallengeResultView : BaseView
    {
        [SerializeField] private Image ballImage;
        [SerializeField] private Text winLoseText;
        
        [SerializeField] private Button closeButton;
        [SerializeField] private Button reloadButton;
        [SerializeField] private Button bonusButton;
        
        [SerializeField] private ImageFader fader;
        [SerializeField] private GameObject view;

        [Inject] private ResultController resultController;

        protected override void Subscribe()
        {
            reloadButton.onClick.AddListener(ClosePanelAfterReload);
            closeButton.onClick.AddListener(BackMenu);
            bonusButton.onClick.AddListener(resultController.LoadBonusGame);
        }

        protected override void Initialize()
        {
            ChangeSkinBall(resultController.GetRandomSkin());
            ChangeWinLoseText(resultController.GetWinLoseText());
            
            if (!resultController.IsCanResumeNewBallGame)
            {
                reloadButton.interactable = false;
            }
        }

        protected override void Open()
        {
            view.transform.localScale = Vector3.up;
            
            fader.FadeTo(0.3f, () => view.transform
                .DOScaleX(1, 0.3f)
                .SetEase(Ease.OutBounce)
                .Play());
        }

        protected override void Unsubscribe()
        {
            reloadButton.onClick.RemoveAllListeners();
            closeButton.onClick.RemoveAllListeners();
            bonusButton.onClick.RemoveAllListeners();
        }

        private void ChangeSkinBall(Sprite sprite)
        {
            if (sprite != null)
            {
                ballImage.sprite = sprite;
                ballImage.transform.parent.gameObject.SetActive(true);
            }
        }

        private void ChangeWinLoseText(string value)
        {
            winLoseText.text = value;
        }

        private void ClosePanelAfterReload()
        {
            view.transform
                .DOScaleX(0, 0.3f)
                .OnComplete(() => fader.FadeOut(0.3f, Close))
                .Play();
        }
        private void BackMenu()
        {
            resultController.BackToMenu();
            DOTween.Sequence().Append(DOVirtual.DelayedCall(0.8f, Close))
                .Play();
        }
    }
}