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

        public BaseView Instantiate(UIViewType type, Transform transform)
        {
            var view = Object.Instantiate(ViewData.ViewDataMap[type].gameObject, Vector3.zero, Quaternion.identity,
                transform);
            
            view.transform.localPosition = Vector3.zero;
            Injector.InjectDependenciesInObject(view.GetComponent<BaseView>());


            return view.GetComponent<BaseView>();
        }
    }
}