using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.UIViewService
{
    public class UIViewFactory
    {
        private UIViewData ViewData { get; }

        public UIViewFactory(UIViewData viewData) => 
            ViewData = viewData;

        private Injector Injector => ProjectContext.Instance.Injector;

        public BaseView InstantiatePrefab(UIViewType type, Transform transform)
        {
            var instance = Object
                .Instantiate(ViewData.ViewDataMap[type].gameObject, Vector3.zero, Quaternion.identity, transform)
                .GetComponent<BaseView>();
            
            instance.transform.localPosition = Vector3.zero;
            
            Injector.InjectDependenciesInObject(instance);


            return instance;
        }
    }
}