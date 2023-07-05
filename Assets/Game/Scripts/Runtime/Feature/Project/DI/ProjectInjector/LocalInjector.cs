using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class LocalInjector : MonoBehaviour
    {
        private Injector Injector => ProjectContext.Instance.Injector;
        

        private void Start()
        {
            GetInitializeObjects();
        }

        private void GetInitializeObjects()
        {
            var allBehaviours = GetComponentsInChildren<MonoBehaviour>();

            foreach (var behaviour in allBehaviours)
                Injector.InjectDependenciesInObject(behaviour);
        }
    }
}