using UnityEngine;
using DG.Tweening;
using Prototype.SceneLoaderCore.Helpers;

namespace Prototype.Preloader
{
    public class LoadingProgress : MonoBehaviour
    {
        [SerializeField, Header("Progress")] private Transform loadingProgress;

        [SerializeField, Range(1.0f, 100.0f), Header("Angle Rotation")] private float rotationAngle = 100f;
        
        [SerializeField, Range(1.0f, 10.0f), Header("Speed Rotation")] private float rotationSpeed = 3f;

        private Tween _tween;

        private void OnEnable()
        {
            StartLoading();
        }
        
        private void OnDisable()
        {
            FinishActiveTween();
        }

        private void StartLoading()
        {
            _tween = loadingProgress.DORotate(Vector3.back * rotationAngle, rotationSpeed)
                .SetLoops(-1, LoopType.Incremental)
                .SetEase(Ease.Linear);
        }

        public void WebViewLoadingCompleted()
        {
            FinishActiveTween();
        }
        
        public void DefaultBinomLoadingCompleted()
        {
            SceneLoader.Instance.SwitchToScene(SceneLoader.Instance.mainScene);

            FinishActiveTween();
        }

        public void StopLoading(bool webViewIsLoaded)
        {
            if(webViewIsLoaded)
            {
                EnableAutoRotation();
            }
            else
            {
                SceneLoader.Instance.SwitchToScene(SceneLoader.Instance.mainScene);
            }
            
            FinishActiveTween();
        }
        
        private void EnableAutoRotation()
        {
            Screen.autorotateToLandscapeLeft = true;
            Screen.autorotateToLandscapeRight = true;
            Screen.autorotateToPortrait = true;
            Screen.autorotateToPortraitUpsideDown = true;
            Screen.orientation = ScreenOrientation.AutoRotation;
        }
        
        private void FinishActiveTween()
        {
            if (_tween != null && _tween.IsActive() && _tween.IsPlaying())
            {
                _tween.Kill();
            }
        }
    }
}