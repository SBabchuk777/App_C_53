using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Settings
{
    public class SettingWithToggleView : BaseView
    {
        [SerializeField] private Toggle VibrationToggle;
        [SerializeField] private Toggle SoundToggle;
        [SerializeField] private Button CloseButton;

        [Inject] private SettingService settingService;

        protected override void Subscribe()
        {
            VibrationToggle.onValueChanged.AddListener(ChangeVibro);
            SoundToggle.onValueChanged.AddListener(ChangeSound);
            CloseButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
            VibrationToggle.isOn = settingService.SettingsData.IsVibro;
            SoundToggle.isOn = settingService.SettingsData.IsSound;
        }

        protected override void Open()
        {
            transform.localPosition = new Vector3(1080, 0, transform.localPosition.z);
            transform.DOLocalMoveX(0, 0.5f).SetEase(Ease.OutBounce).Play();
        }

        protected override void Unsubscribe()
        {
            VibrationToggle.onValueChanged.RemoveAllListeners();
            SoundToggle.onValueChanged.RemoveAllListeners();
            CloseButton.onClick.RemoveAllListeners();
        }

        public void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);

            settingService.SaveData();
        }

        private void ChangeSound(bool isActive) =>
            settingService.TurnSound(isActive);

        private void ChangeVibro(bool isActive) => 
            settingService.TurnVibro(isActive);
    }
}