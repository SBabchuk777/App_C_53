using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews
{
    [RequireComponent(typeof(Button))]
    public class UIViewCreatorButton : MonoBehaviour
    {
        public UIViewType UIViewType;
        
        private UIViewService UIViewService => ProjectContext.Instance.GetDependence<UIViewService>();

        private void Awake()
        {
            GetComponent<Button>().onClick.AddListener(Open);
        }

        private void Open()
        {
            UIViewService.Instantiate(UIViewType);
        }
    }
}