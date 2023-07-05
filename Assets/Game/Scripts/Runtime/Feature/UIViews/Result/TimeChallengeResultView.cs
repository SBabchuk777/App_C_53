using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.ADSUnity;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class TimeChallengeResultView : BaseView
    {
        [SerializeField] private Text winLoseText;
        [SerializeField] private GameObject countWinPanel;
        [SerializeField] private UnityAdsButton unityAdsButton;

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
            
            unityAdsButton.OnCanGetReward += AddRewarded;
        }

        protected override void Initialize()
        {
            ChangeWinLoseText(resultController.GetWinLoseText());
            
            if (resultController.GameStatusType == GameStatusType.Win)
            {
                countWinPanel.SetActive(true);
                unityAdsButton.Activate();
            }
            
            if (!resultController.IsCanResumeTimeGame)
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
        
        private void AddRewarded()
        {
            resultController.AddRewardForWatch();
            unityAdsButton.Deactivate();
        }
        
        private void ChangeWinLoseText(string value)
        {
            winLoseText.text = value;
        }

        private void ClosePanelAfterReload()
        {
            view.transform
                .DOScaleX(0, 0.3f)
                .OnComplete(() =>
                {
                    fader.FadeOut(0.3f, () =>
                    {
                        resultController.NotifyReloadTimeGame();
                        Close();
                    });
                    
                })
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