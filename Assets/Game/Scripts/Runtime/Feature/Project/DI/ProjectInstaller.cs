using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using Game.Scripts.Runtime.Feature.UIViews.Settings;
using Game.Scripts.Runtime.Feature.UIViews.Win;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.ADSUnity;
using Game.Scripts.Runtime.Services.Audio;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.Bonus;
using Game.Scripts.Runtime.Services.Pause;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class ProjectInstaller : MonoBehaviour
    {
        public ImageFader SceneFader;
        public BankService BankService;
        public BonusService BonusService;
        public AudioService AudioService;
        public SettingService SettingService;
        public SceneNavigation SceneNavigation;
        public PauseService PauseService;
        public ProjectAudioPlayer ProjectAudioPlayer;
        public UIViewService UIViewService;
        public UnityADSManager UnityAdsManager;
        public DataHub DataHub;

        [Header("Controllers in MVC")]
        public WinService WinService;
        public LastChanceController LastChanceController;

        private DIContainer container;

        public DIContainer RegisterDependencies()
        {
            container = new DIContainer();
            container.Register(container);
            
            RegisterServices();
            RegisterControllers();

            return container;
        }

        private void RegisterControllers()
        {
            container.Register(WinService);
            container.Register(LastChanceController);
        }

        private void RegisterServices()
        {
            container.Register(SceneFader);
            container.Register(BankService);
            container.Register(BonusService);
            container.Register(AudioService);
            container.Register(SettingService);
            container.Register(SceneNavigation);
            container.Register(ProjectAudioPlayer);
            container.Register(UIViewService);
            container.Register(UnityAdsManager);
            container.Register(PauseService);
            container.Register(DataHub);
        }
    }
}