using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Advertisements;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class UnityADSManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener, IProjectInitializable
    {
        [SerializeField] private string GameIDAndroid;
        [SerializeField] private string GameIDIOS;
        [SerializeField] private bool TestMode;

        [SerializeField] private string RewardedVideoPlacementAndroid;
        [SerializeField] private string RewardedVideoPlacementIOS;
        
        public event Action OnShowCompleteAds;
        public event Action OnAdsLoaded;
        public event Action OnAdsFailedLoaded;

        public delegate void DebugEvent(string msg);


        public static event DebugEvent OnDebugLog;

        private string currentIdInitialize;
        public string CurrentIdShow { get; private set; }
        public bool IsAdsLoaded { get; private set; }

        public void Initialize()
        {
#if UNITY_IOS
            currentIdInitialize = GameIDIOS;
            currentIdShow = RewardedVideoPlacementIOS;
#elif UNITY_ANDROID
            currentIdInitialize = GameIDAndroid;
            CurrentIdShow = RewardedVideoPlacementAndroid;
#endif
            if (Advertisement.isSupported)
            {
                DebugLog(Application.platform + " supported by Advertisement");
            }

            Advertisement.Initialize(currentIdInitialize, TestMode, this);
        }

        public void LoadRewardedAd()
        {
            IsAdsLoaded = false;
            Advertisement.Load(CurrentIdShow, this);
        }

        public void UnsubscribeAllEvent()
        {
            OnShowCompleteAds = null; 
            OnAdsLoaded = null;
            OnAdsFailedLoaded = null;
        }

        public void ShowRewardedAd()
        {
            Advertisement.Show(CurrentIdShow, this);
        }

        #region Interface Implementations

        public void OnInitializationComplete()
        {
            DebugLog("Init Success");
        }

        public void OnInitializationFailed(UnityAdsInitializationError error, string message)
        {
            DebugLog($"Init Failed: [{error}]: {message}");
        }

        public void OnUnityAdsAdLoaded(string placementId)
        {
            IsAdsLoaded = true;
            OnAdsLoaded?.Invoke();
            DebugLog($"Load Success: {placementId}");
        }

        public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
        {
            OnAdsFailedLoaded?.Invoke();
            DebugLog($"Load Failed: [{error}:{placementId}] {message}");
        }

        public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
        {
            DebugLog($"OnUnityAdsShowFailure: [{error}]: {message}");
        }

        public void OnUnityAdsShowStart(string placementId)
        {
            DebugLog($"OnUnityAdsShowStart: {placementId}");
        }

        public void OnUnityAdsShowClick(string placementId)
        {
            DebugLog($"OnUnityAdsShowClick: {placementId}");
        }

        public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
        {
            DebugLog($"OnUnityAdsShowComplete: [{showCompletionState}]: {placementId}");

            if (showCompletionState == UnityAdsShowCompletionState.COMPLETED)
            {
                OnShowCompleteAds?.Invoke();
            }
            
        }

        #endregion

        //wrapper around debug.log to allow broadcasting log strings to the UI
        void DebugLog(string msg)
        {
            OnDebugLog?.Invoke(msg);
            Debug.Log(msg);
        }
    }
}