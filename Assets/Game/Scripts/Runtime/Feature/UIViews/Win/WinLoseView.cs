using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Win
{
    public class WinLoseView : BaseView
    {
        [Inject] private WinService winService;
        
        [Header("Animation Component")] public Transform Panel;
        public ImageFader Fader;

        protected override void Subscribe()
        {
        }

        protected override void Open()
        {
            Panel.localScale = Vector3.zero;
            Fader.FadeTo(0.5f, () =>
            {
                Panel.DOScale(Vector3.one, .3f)
                    .Play();
            });
        }

        protected override void Unsubscribe()
        {
        }
        
        private void ClosePanel() => 
            DOTween.Sequence().Append(DOVirtual.DelayedCall(1f, Close)).Play();
    }
}