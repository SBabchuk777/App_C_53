using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.UIViewService
{
    public class BaseView : MonoBehaviour
    {
        public event Action OnCloseView;
        public event Action OnOpenView;
        
        private void Start()
        {
            Subscribe();
            Initialize();
            Open();
            
            OnOpenView?.Invoke();
        }

        protected virtual void Subscribe() { }
        protected virtual void Initialize() { }
        protected virtual void Unsubscribe() { }
        protected virtual void Open() { }
       
        public void Close()
        {
            Unsubscribe();
            Destroy(gameObject);
            
            OnCloseView?.Invoke();
        }
    }
}