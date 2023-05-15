using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Settings
{
    public class SettingWithToggleView : MonoBehaviour
    {
        [SerializeField] private Toggle MusicToggle;
        [SerializeField] private Toggle SoundToggle;

         [Inject] private SettingService settingService;
         [Inject] private UIViewService uiViewService;
       
        public void Awake()
        {
            MusicToggle.isOn = settingService.SettingsData.IsMusic;
            SoundToggle.isOn = settingService.SettingsData.IsSound;

            MusicToggle.onValueChanged.AddListener(ChangeMusic);
            SoundToggle.onValueChanged.AddListener(ChangeSound);
        }

        public void ClosePanel()
        {
            GetComponent<BaseView>().Close();
            
            settingService.SaveData();
        }

        private void ChangeSound(bool isActive) => 
            settingService.TurnSound(isActive);

        private void ChangeMusic(bool isActive) => 
            settingService.TurnMusic(isActive);

        public void OpenPrivacy() => 
            uiViewService.Instantiate(UIViewType.PrivacyPolicy);

        public void OpenTerms() => 
            uiViewService.Instantiate(UIViewType.TermsOfUse);
    }
}