using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    [RequireComponent(typeof(Button))]
    public class UnityAdsButton : MonoBehaviour
    {
        [Inject] private UnityADSManager unityAdsManager;
        private Button WatchButton => GetComponent<Button>();
        
        private void Start()
        {
            TurnOffButton();
            
            WatchButton.onClick.AddListener(unityAdsManager.ShowRewardedAd);
            
            if (unityAdsManager.IsAdsLoaded)
                TurnOnButton();
            else
                unityAdsManager.OnAdsLoaded += TurnOnButton;

            unityAdsManager.OnShowCompleteAds += TurnOffButton;
        }

        private void TurnOnButton() => 
            WatchButton.interactable = true;
        private void TurnOffButton() => 
            WatchButton.interactable = false;
    }
}