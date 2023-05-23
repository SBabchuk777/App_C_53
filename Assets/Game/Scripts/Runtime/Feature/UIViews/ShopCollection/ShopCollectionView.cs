using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
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

        [Inject] private ShopCollectionController controller;

        protected override void Subscribe()
        {
            regularBuyButton.onClick.AddListener(controller.BuyRegularElement);
            rareBuyButton.onClick.AddListener(controller.BuyRareElement);
            closeButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
            if (controller.IsTryBuy(100))
            {
                regularBuyButton.interactable = true;
            }

            if (controller.IsTryBuy(250))
            {
                rareBuyButton.interactable = true;
            }
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
        }
        public void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
    }
}