using DG.Tweening;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.ADSUnity
{
    public class FaderView : BaseView
    {
        [SerializeField] private ImageFader _fader;
        [SerializeField] private Transform _errorText;

        protected override void Open()
        {
            _fader.FadeTo(.5f);
        }

        public void CloseView()
        {
            _fader.FadeOut(.5f, Close);
        }

        public void ShowError()
        {
            _errorText.gameObject.SetActive(true);
            DOVirtual.DelayedCall(1f, () => _errorText.gameObject.SetActive(false)).Play();
            
            _fader.FadeOutAwait(1f, .5f, Close);
        }
    }
}