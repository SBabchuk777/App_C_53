using System;
using UnityEngine;
using UnityEngine.Advertisements;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class UnityAdsListener : IUnityAdsLoadListener, IUnityAdsShowListener
    {
        public bool IsAdsLoaded { get; private set; }
        public event Action OnShowCompleteAds;

        public void Load(string currentIdShow)
        {
            Advertisement.Load(currentIdShow, this);
        }
        
        public void OnUnityAdsAdLoaded(string placementId)
        {
            IsAdsLoaded = true;
        }

        public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
        {
            Debug.Log($"Failed To Load: [{error}]: {message}");
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

        public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
        {
            if (showCompletionState == UnityAdsShowCompletionState.COMPLETED)
            {
                OnShowCompleteAds?.Invoke();
                OnShowCompleteAds = null;
            }
        }
    }
}