using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Win;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelArbiter : MonoBehaviour
    {
        public LevelBuilder Builder;

        [Inject] private ImageFader sceneFader;
        [Inject] private WinService winService;
        [Inject] private BankService bankService;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        [Inject] private SceneNavigation sceneNavigation;

        private LevelGameData LevelGameData =>
            ProjectContext.Instance.GetDependence<DataHub>().LevelGameData;
        
        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            
        }

        private void RunAfterInitialize()
        {
        }
    }
}