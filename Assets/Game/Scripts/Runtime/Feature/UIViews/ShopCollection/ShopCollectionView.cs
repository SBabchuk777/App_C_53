using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.ADSUnity;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.ShopCollection
{
    public class ShopCollectionView : BaseView
    {
        [SerializeField] private Button closeButton;
        [SerializeField] private Button regularBuyButton;
        [SerializeField] private Button rareBuyButton;
        [SerializeField] private Button adsButton;

        [Inject] private ShopCollectionController controller;
        [Inject] private UnityAdsService unityAds;

        protected override void Subscribe()
        {
            regularBuyButton.onClick.AddListener(controller.BuyRegularElement);
            rareBuyButton.onClick.AddListener(controller.BuyRareElement);
            closeButton.onClick.AddListener(ClosePanel);
            adsButton.onClick.AddListener(ShowRewarded);

            controller.OnUpdateBank += ActivateBuyButton;
        }

        private void ShowRewarded()
        {
            var listener = unityAds.ShowRewardedAd();
            listener.OnShowCompleteAds += controller.AddCoinForAds;
        }

        protected override void Initialize()
        {
            ActivateBuyButton();
        }

        protected override void Open()
        {
            transform.localPosition = new Vector3(1080, 0, transform.localPosition.z);
            transform.DOLocalMoveX(0, 0.5f).SetEase(Ease.OutBounce).Play();
        }

        protected override void Unsubscribe()
        {
            regularBuyButton.onClick.RemoveAllListeners();
            rareBuyButton.onClick.RemoveAllListeners();
            closeButton.onClick.RemoveAllListeners();
            
            controller.OnUpdateBank -= ActivateBuyButton;
        }

        private void ActivateBuyButton()
        {
            regularBuyButton.interactable = controller.IsTryBuy(100);
            rareBuyButton.interactable = controller.IsTryBuy(250);
        }

        private void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
    }
}