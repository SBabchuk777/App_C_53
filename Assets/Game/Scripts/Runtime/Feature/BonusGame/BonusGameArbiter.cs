using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class BonusGameArbiter : MonoBehaviour
    {
        [Inject] private ImageFader sceneFader;
        [Inject] private SceneNavigation sceneNavigation;
        private Injector Injector => ProjectContext.Instance.Injector;
        
        public void Start()
        {
            Injector.InjectDependenciesInObject(this);
            sceneFader.FadeOut(1f);
        }

        public void BackMenu()
        {
            sceneNavigation.LoadLobby();
        }
    }
}