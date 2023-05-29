using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class LocalInjector : MonoBehaviour
    {
        private Injector Injector => ProjectContext.Instance.Injector;
        

        private void Awake()
        {
            if (Injector.IsFinishInject)
            {
                GetInjectObjects();
            }
            else
            {
                Injector.OnFinishInject += GetInjectObjects;
            }
            
        }

        private void GetInjectObjects()
        {
            var allBehaviours = GetComponentsInChildren<MonoBehaviour>();

            foreach (var behaviour in allBehaviours)
                Injector.InjectDependenciesInObject(behaviour);
            
            Injector.OnFinishInject -= GetInjectObjects;
        }
    }
}