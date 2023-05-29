using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Collection;
using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.Lobby
{
    public class LobbyArbiter : MonoBehaviour
    {
        
        [Inject] private ImageFader sceneFader;
        [Inject] private SceneNavigation sceneNavigation ;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        [Inject] private CollectionController collectionController;
        [Inject] private ChallengeController challengeController;

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
            projectAudioPlayer.PlayAudioAmbientOnLobby();
        }

        public void OpenCollectionView()
        {
            collectionController.PrepareView();
            uiViewService.Instantiate(UIViewType.Collection);
        }
        public void OpenChallengeView()
        {
            challengeController.PrepareView();
            uiViewService.Instantiate(UIViewType.Challenge);
        }
        
        public void StartGame()
        {
            LevelGameData.GameModeType = GameModeType.Default;
            sceneNavigation.LoadLevel();
        }

        public void OnDestroy()
        {
           // projectAudioPlayer.StopAudioAmbientOnLobby();
        }
    }
}