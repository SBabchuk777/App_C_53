using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Lobby
{
    public class LobbyArbiter : MonoBehaviour
    {
        [Inject] private ImageFader sceneFader;
        [Inject] private SceneNavigation sceneNavigation ;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        
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

        public void StartGame() => sceneNavigation.LoadLevel();

        public void OnDestroy() => 
            projectAudioPlayer.StopAudioAmbientOnLobby();
    }
}