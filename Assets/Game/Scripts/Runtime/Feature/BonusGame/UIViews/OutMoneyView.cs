using DG.Tweening;
using Game.Scripts.Runtime.Services;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.BonusGame.UIViews
{
    public class OutMoneyView : MonoBehaviour
    {
        public ImageFader Fader;
        public Transform Panel;

        public void Show()
        {
            gameObject.SetActive(true);
            Panel.localScale = Vector3.zero;

            Fader.FadeTo(0.2f, () =>
            {
                Panel.DOScale(Vector3.one, .3f)
                    .Play();
            });
        }

        public void Close()
        {
            Panel.DOScale(Vector3.zero, .2f)
                .OnComplete(() => { Fader.FadeOut(0.3f, () => {gameObject.SetActive(false);}); })
                .Play();
        }
    }
}