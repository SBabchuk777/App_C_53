using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class ProjectContext : MonoBehaviour
    {
        [SerializeField] private ProjectInstaller installer;
        
        public Injector Injector { get; private set; }
        public static ProjectContext Instance { get; private set; }
        
        private void Awake()
        {
            RunInjector();
            CreateSingleton();
            NotifyIInitializable();
        }

        private void RunInjector()
        {
            Injector = new Injector(installer);
            Injector.Inject();
        }


        private void CreateSingleton()
        {
            if (Instance != null && Instance != this)
                Destroy(gameObject);
            else
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
        }

        private void NotifyIInitializable()
        {
            var initializableComponents = GetComponentsInChildren<IProjectInitializable>(true);

            foreach (var initializable in initializableComponents)
                initializable.Initialize();
        }

        public TDependency GetDependence<TDependency>() => 
            Injector.Container.Resolve<TDependency>();
    }
}