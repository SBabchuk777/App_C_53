using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    [RequireComponent(typeof(Button))]
    public class UnityAdsButtonListener : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
    {
        [Inject] private UnityADSManager unityAdsManager;
        private Button WatchButton => GetComponent<Button>();

        private bool isAdsLoaded;
        
        private event Action OnAdsLoaded;
        public event Action OnShowCompleteAds;

        private void Start()
        {
            LoadRewardedAd();
            TurnOffButton();

            WatchButton.onClick.AddListener(ShowRewardedAd);

            if (isAdsLoaded)
                TurnOnButton();
            else
                OnAdsLoaded += TurnOnButton;

            OnShowCompleteAds += TurnOffButton;
        }

        private void OnDestroy()
        {
            UnsubscribeAllEvent();
        }

        private void ShowRewardedAd()
        {
            Advertisement.Show(unityAdsManager.CurrentIdShow, this);
        }

        private void UnsubscribeAllEvent()
        {
            OnShowCompleteAds = null;
            OnAdsLoaded = null;
        }

        private void LoadRewardedAd()
        {
            isAdsLoaded = false;
            Advertisement.Load(unityAdsManager.CurrentIdShow, this);
        }

        private void TurnOnButton() =>
            WatchButton.interactable = true;

        private void TurnOffButton() =>
            WatchButton.interactable = false;

        #region Interface Implementations

        public void OnUnityAdsAdLoaded(string placementId)
        {
            isAdsLoaded = true;
            OnAdsLoaded?.Invoke();
        }

        public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
        {
            if (showCompletionState == UnityAdsShowCompletionState.COMPLETED)
            {
                OnShowCompleteAds?.Invoke();
            }
        }

        public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
        {
        }

        public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
        {
        }

        public void OnUnityAdsShowStart(string placementId)
        {
        }

        public void OnUnityAdsShowClick(string placementId)
        {
        }

        #endregion
    }
}