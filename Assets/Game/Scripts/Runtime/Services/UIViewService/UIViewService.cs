using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.UIViewService
{
    public class UIViewService : MonoBehaviour, IProjectInitializable
    {
        [SerializeField] private UIViewData ViewData;
        private UIViewFactory factory;

        public void Initialize() => 
            factory = new UIViewFactory(ViewData);

        public BaseView Instantiate(UIViewType type) => 
            factory.InstantiatePrefab(type, transform);
    }
}