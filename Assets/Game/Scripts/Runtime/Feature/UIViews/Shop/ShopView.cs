using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using Tools.UnityAdsService.Scripts.Common;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    public class ShopView : BaseView
    {
        public Button CloseButton;
        public Button StartButton;
        public ImageFader Fader;
        public GameObject Panel;

        [Space] 
        public ChoosePanelShop ActiveBackground;
        public ChoosePanelShop InactiveBackground;

        [Space] 
        public Button LeftArrow;
        public Button RightArrow;

        [Inject] private ShopController shopController;

        protected override void Subscribe()
        {
            CloseButton.onClick.AddListener(ClosePanel);
            StartButton.onClick.AddListener(StartGame);
            InactiveBackground.BuyButton.onClick.AddListener(shopController.BuySkin);
            
            LeftArrow.onClick.AddListener(() => shopController.GetNextIcon(-1));
            RightArrow.onClick.AddListener(() => shopController.GetNextIcon(1));
            
            shopController.OnHideArrow += HideArrow;
            shopController.OnShowArrow += ShowArrow;
            shopController.OnChangeSkin += ChangeSkin;
        }

        private void StartGame()
        {
            shopController.StartLevel();
            shopController.Reset();

            DOTween.Sequence().Append(DOVirtual.DelayedCall(.8f, Close)).Play();
        }

        private void ChangeSkin(SkinInfo info)
        {
        
            if (info.IsPurchased)
            {
                SetChoosePanel(info);
            }
            else
            {
                InactiveBackground.BuyButton.interactable = info.IsCanPurchased;
                SetClosePanel(info);
            }
        }

        private void HideArrow(int value)
        {
            if (value == -1) 
                LeftArrow.gameObject.SetActive(false);
            else
                RightArrow.gameObject.SetActive(false);
        }

        private void ShowArrow()
        {
            LeftArrow.gameObject.SetActive(true);
            RightArrow.gameObject.SetActive(true);
        }

        protected override void Initialize()
        {
            shopController.UpdateView();
            ChangeSkin(shopController.GetFirstSkinIfo);
        }

        protected override void Open()
        {
            Panel.transform.localScale = Vector3.zero;
            Fader.FadeTo(0.3f, () => Panel.transform.DOScale(Vector3.one, .3f).SetEase(Ease.OutBounce).Play());
        }

        protected override void Unsubscribe()
        {
            CloseButton.onClick.RemoveAllListeners();
            StartButton.onClick.RemoveAllListeners();
            
            LeftArrow.onClick.RemoveAllListeners();
            RightArrow.onClick.RemoveAllListeners();
            InactiveBackground.BuyButton.onClick.RemoveAllListeners();
            
            shopController.OnHideArrow -= HideArrow;
            shopController.OnShowArrow -= ShowArrow;
            shopController.OnChangeSkin -= ChangeSkin;
        }

        private void ClosePanel()
        {
            shopController.Reset();
            Panel.transform.DOScale(Vector3.zero, .3f)
                .OnComplete(() => Fader.FadeOut(0.3f, Close))
                .Play();
        }

        private void SetChoosePanel(SkinInfo skinInfo)
        {
            ActiveBackground.gameObject.SetActive(true);
            ActiveBackground.BuyButton.gameObject.SetActive(false);
            ActiveBackground.BallIcon.sprite = skinInfo.Skin;
            
            InactiveBackground.gameObject.SetActive(false);
        }
        
        private void SetClosePanel(SkinInfo skinInfo)
        {
            InactiveBackground.gameObject.SetActive(true);
            InactiveBackground.BallIcon.sprite = skinInfo.Skin;
            InactiveBackground.BallCountText.text = skinInfo.Count.ToString();
            
            ActiveBackground.gameObject.SetActive(false);
        }
    }
}