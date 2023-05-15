using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class WatchView : BaseView
    {
        public int CountCoinForWatch;
        public Button WatchButton;
        
        [Inject] private UnityADSManager unityAdsManager;
        [Inject] private BankService bankService;

        private void Start()
        {
            TurnOffButton();
            
            unityAdsManager.LoadRewardedAd();
            WatchButton.onClick.AddListener(unityAdsManager.ShowRewardedAd);
            unityAdsManager.OnShowCompleteAds += AddGemForWatch;

            if (unityAdsManager.IsAdsLoaded)
                TurnOnButton();
            else
                unityAdsManager.OnAdsLoaded += TurnOnButton;
        }

        private void OnDisable()
        {
            unityAdsManager.OnShowCompleteAds -= AddGemForWatch;
            unityAdsManager.OnAdsLoaded -= TurnOnButton;
        }

        private void AddGemForWatch()
        {
            TurnOffButton();
            bankService.AddCoin(CountCoinForWatch);
        }

        private void TurnOnButton() => 
            WatchButton.interactable = true;
        private void TurnOffButton() => 
            WatchButton.interactable = false;
    }
}