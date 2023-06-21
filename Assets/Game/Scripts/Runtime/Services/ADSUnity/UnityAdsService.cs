using System.Collections;
using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
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

        [Inject] private UIViewService.UIViewService uiViewService;
        
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
                Debug.Log(Application.platform + " supported by Advertisement");
            }

            Advertisement.Initialize(currentIdInitialize, TestMode, this);
        }

        public UnityAdsListener ShowRewardedAd()
        {
            var listener = AdsListenersPool.Dequeue();
            Advertisement.Show(CurrentIdShow, listener);
            Destroy(listener.gameObject);

            StartCoroutine(LoadRewardsCoroutine());
            StartCoroutine(CheckStartAds(listener));
            
            return listener;
        }

        private UnityAdsListener CreateUnityAdsListener()
        {
            var newGameObject = new GameObject($"ADS_{AdsListenersPool.Count}");
            newGameObject.transform.SetParent(transform);
            newGameObject.AddComponent<UnityAdsListener>().GetComponent<UnityAdsListener>();
            
            var listener = newGameObject.GetComponent<UnityAdsListener>();
            listener.Load(CurrentIdShow);
            AdsListenersPool.Enqueue(listener);
            
            return listener;
        }

        #region Interface Implementations

        public void OnInitializationComplete()
        {
            Debug.Log("Init Success");
            StartCoroutine(LoadRewardsCoroutine());
        }

        public void OnInitializationFailed(UnityAdsInitializationError error, string message)
        {
            Debug.Log($"Init Failed: [{error}]: {message}");
        }

        #endregion


        //wrapper around debug.log to allow broadcasting log strings to the UI
        

        private IEnumerator LoadRewardsCoroutine()
        {
            AdsListenersPool ??= new Queue<UnityAdsListener>();
            
            while (AdsListenersPool.Count <= ADLoadMaxCount)
            {
                var listener = CreateUnityAdsListener();
                
                yield return new WaitUntil(() => listener.IsAdsLoaded);

                Debug.Log($"ADS add to Pool {AdsListenersPool.Count}");
            }
            
            Debug.Log($"All ADS load in pool");
            yield break;
        }

        private IEnumerator CheckStartAds(UnityAdsListener listener)
        {
            var faderView = uiViewService.Instantiate(UIViewType.FaderView).GetComponent<FaderView>();
            
            listener.OnShowCompleteAds += faderView.CloseView;
            listener.OnShowFailedAds += faderView.ShowError;
            
            yield return new WaitForSeconds(1f); 

            if (!listener.IsAdsStarted)
            {
                Advertisement.Show(CurrentIdShow, listener);
                yield return new WaitForSeconds(2f); 

                if (!listener.IsAdsStarted)
                {
                    Debug.Log("ADS don't start, hide Fader");
                    faderView.ShowError();
                    yield break;
                }
            }
        }
    }
}