using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Collection;
using Game.Scripts.Runtime.Feature.UIViews.Result;
using Game.Scripts.Runtime.Feature.UIViews.Settings;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Feature.UIViews.ShopCollection;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.ADSUnity;
using Game.Scripts.Runtime.Services.Audio;
using Game.Scripts.Runtime.Services.Bank;
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
        public AudioService AudioService;
        public SettingService SettingService;
        public SceneNavigation SceneNavigation;
        public PauseService PauseService;
        public ProjectAudioPlayer ProjectAudioPlayer;
        public UIViewService UIViewService;
        public UnityADSManager UnityAdsManager;
        public DataHub DataHub;

        [Header("Controllers in MVC")]
        public ShopController ShopController;
        public ResultController ResultController;
        public CollectionController CollectionController;
        public ShopCollectionController ShopCollectionController;
        public ChallengeController ChallengeController;

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
            container.Register(ShopController);
            container.Register(ResultController);
            container.Register(CollectionController);
            container.Register(ShopCollectionController);
            container.Register(ChallengeController);
        }

        private void RegisterServices()
        {
            container.Register(SceneFader);
            container.Register(BankService);
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