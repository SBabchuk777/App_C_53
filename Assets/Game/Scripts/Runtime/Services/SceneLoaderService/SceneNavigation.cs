using Game.Scripts.Runtime.Feature.Project.DI;
using Tools.UnityAdsService.Scripts.Common;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.SceneLoaderService
{
    public class SceneNavigation : MonoBehaviour
    {
        [SerializeField] private ImageFader Fader;
        
        private SceneLoader sceneLoader = new SceneLoader();

        public void LoadLobby()
        {
            Fader.FadeTo(0.8f, () => sceneLoader.LoadScene(SceneType.Lobby.ToString()));
        }

        public void LoadLevel()
        {
            Fader.FadeTo(0.8f, () => sceneLoader.LoadScene(SceneType.Level.ToString()));
        }
        public void LoadSlots()
        {
            Fader.FadeTo(0.8f, () => sceneLoader.LoadScene(SceneType.BonusGame.ToString()));
        }

    }
}