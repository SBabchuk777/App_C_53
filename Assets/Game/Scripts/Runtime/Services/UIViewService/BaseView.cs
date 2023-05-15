using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.UIViewService
{
    public class BaseView : MonoBehaviour
    {
        private void Start()
        {
            Subscribe();
            Initialize();
            Open();
        }

        protected virtual void Subscribe() { }
        protected virtual void Initialize() { }
        protected virtual void Unsubscribe() { }
        protected virtual void Open() { }
       
        public void Close()
        {
            Unsubscribe();
            Destroy(gameObject);
        }
    }
}