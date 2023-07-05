using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class WatchView : BaseView
    {
        [SerializeField] private ImageFader _fader;
        [SerializeField] private Transform _view;
        [SerializeField] private Button _watchButton;
        [SerializeField] private Button _closeButton;
        
        [SerializeField] private Text _currentText;
        [SerializeField] private Text _maxCountText;

        private int currentCountAd;
        private int maxCountAd;
        
        [Inject] private UnityAdsService unityAdsService;
        [Inject] private BankService bankService;
        public event Action OnCanGetReward;

        protected override void Subscribe()
        {
            _watchButton.onClick.AddListener(WatchADS);
            _closeButton.onClick.AddListener(ClosePanel);
        }

        private void WatchADS()
        {
            var listener = unityAdsService.ShowRewardedAd();
            listener.OnShowCompleteAds += CheckGetReward;
        }

        protected override void Initialize()
        {
            _currentText.text = currentCountAd.ToString();
            _maxCountText.text = $"/{maxCountAd}";
            
            _view.transform.localScale = Vector3.zero;
        }

        protected override void Unsubscribe()
        {
            _watchButton.onClick.RemoveAllListeners();
            _closeButton.onClick.RemoveAllListeners();
        }

        protected override void Open()
        {
            _fader.FadeTo(.3f, () => _view.DOScale(Vector3.one, 0.3f).Play());
        }


        private void CheckGetReward()
        {
            if (currentCountAd < maxCountAd -1)
            {
                currentCountAd++;
                _currentText.text = currentCountAd.ToString();
            }
            else
            {
                ClosePanel();
                OnCanGetReward?.Invoke();
                OnCanGetReward = null;
            }
        }

        private void ClosePanel()
        {
            _view.DOScale(Vector3.zero, 0.3f)
                .OnComplete(()=> _fader.FadeOut(0.3f, Close))
                .Play();
        }

        public void Set(int maxCountAd)
        {
            this.maxCountAd = maxCountAd;
        }
    }
}