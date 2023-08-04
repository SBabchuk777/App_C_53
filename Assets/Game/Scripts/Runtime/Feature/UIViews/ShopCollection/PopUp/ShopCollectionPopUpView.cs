using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using Tools.UnityAdsService.Scripts.Common;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.ShopCollection.PopUp
{
    public class ShopCollectionPopUpView : BaseView
    {
        [SerializeField] private ImageFader fader;
        [SerializeField] private GameObject panel;

        [SerializeField] private Button coolButton;

        [SerializeField] private PanelPopUp regularPanel;
        [SerializeField] private PanelPopUp rarePanel;

        [Inject] private ShopCollectionController controller;

        protected override void Subscribe()
        {
            coolButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
            SetPanel(controller.PanelPopUpInfo.CurrentElementType == ElementType.Regular ? regularPanel : rarePanel);
        }

        private void SetPanel(PanelPopUp panelPopUp)
        {
            panelPopUp.SetIcon(controller.PanelPopUpInfo.IconSprite);

            if (controller.PanelPopUpInfo.IsActiveBacklight)
            {
                panelPopUp.ActivateBacklighting();
            }

            if (controller.PanelPopUpInfo.IsActiveBuyButton)
            {
                panelPopUp.ActivateBuyButton();
            }
        }

        protected override void Open()
        {
            panel.transform.localScale = Vector3.zero;
            fader.FadeTo(0.3f, () => panel.transform.DOScale(Vector3.one, .3f).Play());
        }

        protected override void Unsubscribe()
        {
            coolButton.onClick.RemoveAllListeners();
        }

        private void ClosePanel()
        {
            panel.transform.DOScale(Vector3.zero, .3f)
                .OnComplete(() => fader.FadeOut(0.3f, Close))
                .Play();

            if (controller.PanelPopUpInfo.IsActiveBuyButton)
            {
                controller.AddCoin();
            }
        }
    }
}