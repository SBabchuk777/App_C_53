using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using Tools.UnityAdsService.Scripts.Common;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Settings
{
    public class SettingWithSliderView : BaseView
    {
        [SerializeField] private Slider MusicSlider;
        [SerializeField] private Slider SoundSlider;
        
        [SerializeField] private Button CloseButton;
        [SerializeField] private ImageFader Fader;
        [SerializeField] private Transform Panel;
        
         [Inject] private SettingService settingService ;
         [Inject] private UIViewService uiViewService;

        protected override void Subscribe()
        {
            MusicSlider.onValueChanged.AddListener(settingService.ChangeMusic);
            SoundSlider.onValueChanged.AddListener(settingService.ChangeSound);
            
            CloseButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
            MusicSlider.value = settingService.GetMusicValue;
            SoundSlider.value = settingService.GetSoundValue;
        }

        protected override void Open()
        {
            Panel.localScale = Vector3.zero;

            Fader.FadeTo(0.5f, () => { Panel.DOScale(Vector3.one, .3f)
                .Play(); });
        }

        protected override void Unsubscribe()
        {
            MusicSlider.onValueChanged.RemoveAllListeners();
            SoundSlider.onValueChanged.RemoveAllListeners();
            
            CloseButton.onClick.RemoveAllListeners();
        }

        private void ClosePanel()
        {
            Panel.DOScale(Vector3.zero, .3f)
                .OnComplete(() => { Fader.FadeOut(0.5f, Close); })
                .Play();
            
            settingService.SaveData();
        }
    }
}