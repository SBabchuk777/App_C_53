using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class ProjectContext : MonoBehaviour
    {
        public static ProjectContext Instance { get; private set; }
        public ProjectInstaller Installer => GetComponentInChildren<ProjectInstaller>();
        public Injector Injector;

        private void Awake()
        {
            RunInjector();
            CreateSingleton();
            NotifyIInitializable();
        }

        private void RunInjector()
        {
            Injector = new Injector(Installer);
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