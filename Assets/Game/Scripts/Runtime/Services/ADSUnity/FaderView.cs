using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class FaderView : BaseView
    {
        [SerializeField] private ImageFader _fader;

        protected override void Open()
        {
            _fader.FadeTo(.3f);
        }

        public void CloseView()
        {
            _fader.FadeOut(.3f, Close);
        }
    }
}