using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    public class ShopView : BaseView
    {
        public Button CloseButton;
        public ImageFader Fader;
        public GameObject Panel;

        [Space] public ChoosePanelShop ActiveBackground;
        public ChoosePanelShop InactiveBackground;

        [Space] public Button LeftArrow;
        public Button RightArrow;

        [Inject] private ShopController shopController;

        protected override void Subscribe()
        {
            CloseButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
        }

        protected override void Open()
        {
            Panel.transform.localScale = Vector3.zero;
            Fader.FadeTo(0.3f, () => Panel.transform.DOScale(Vector3.one, .3f).SetEase(Ease.OutBounce).Play());
        }

        protected override void Unsubscribe()
        {
        }

        private void ClosePanel()
        {
            Panel.transform.DOScale(Vector3.zero, .3f)
                .OnComplete(() => Fader.FadeOut(0.3f, Close))
                .Play();
        }

        public void SetActiveSkinPanel()
        {
            ActiveBackground.gameObject.SetActive(true);
            InactiveBackground.gameObject.SetActive(false);
        }
    }
}