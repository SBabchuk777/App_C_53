using System.Collections;
using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.Advertisements;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class UnityAdsService : MonoBehaviour, IUnityAdsInitializationListener , IProjectInitializable
    {
        private const int ADLoadMaxCount = 3;
        
        private const string RewardedVideoPlacementAndroid = "Rewarded_Android";
        private const string RewardedVideoPlacementIOS = "Rewarded_iOS";

        [SerializeField] private string GameIDAndroid;
        [SerializeField] private string GameIDIOS;
        [SerializeField] private bool TestMode;


        public delegate void DebugEvent(string msg);

        public static event DebugEvent OnDebugLog;

        private string currentIdInitialize;
        public string CurrentIdShow { get; private set; }

        private Queue<UnityAdsListener> AdsListenersPool { get; set; }


        public void Initialize()
        {
#if UNITY_IOS
            currentIdInitialize = GameIDIOS;
            CurrentIdShow = RewardedVideoPlacementIOS;
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

        private IEnumerator LoadRewardsCoroutine()
        {
            AdsListenersPool ??= new Queue<UnityAdsListener>();
            
            while (AdsListenersPool.Count <= ADLoadMaxCount)
            {
                var listener = new UnityAdsListener();/*CreateUnityAdsListener();*/
                listener.Load(CurrentIdShow);
                AdsListenersPool.Enqueue(listener);

                yield return new WaitUntil(() => listener.IsAdsLoaded);

                Debug.Log($"ADS add to Pool {AdsListenersPool.Count}");
            }
            
            Debug.Log($"All ADS load in pool");
            yield break;
        }
        
        public UnityAdsListener ShowRewardedAd()
        {
            var listener = AdsListenersPool.Dequeue();
            Advertisement.Show(CurrentIdShow, listener);

            StartCoroutine(LoadRewardsCoroutine());
            
            return listener;
        }
        
        #region Interface Implementations

        public void OnInitializationComplete()
        {
            DebugLog("Init Success");
            StartCoroutine(LoadRewardsCoroutine());
        }

        public void OnInitializationFailed(UnityAdsInitializationError error, string message)
        {
            DebugLog($"Init Failed: [{error}]: {message}");
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