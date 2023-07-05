using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    [RequireComponent(typeof(Button))]
    public class UnityAdsButton : MonoBehaviour
    {
        [Inject] private UnityAdsService unityAdsService;
        private Button WatchButton => GetComponent<Button>();
        
        public event Action OnCanGetReward;

        private void Start()
        {
            WatchButton.onClick.AddListener(ShowRewardedAd);
        }

        public void Deactivate()
        {
            gameObject.SetActive(false);
        }

        public void Activate()
        {
            gameObject.SetActive(true);
        }

        private void OnDestroy()
        {
            UnsubscribeAllEvent();
        }

        private void ShowRewardedAd()
        {
            var listener = unityAdsService.ShowRewardedAd();
            listener.OnShowCompleteAds += NotifyGetRewarded;
        }

        private void NotifyGetRewarded()
        {
            OnCanGetReward?.Invoke();
        }

        private void UnsubscribeAllEvent()
        {
            OnCanGetReward = null;
        }
    }
}