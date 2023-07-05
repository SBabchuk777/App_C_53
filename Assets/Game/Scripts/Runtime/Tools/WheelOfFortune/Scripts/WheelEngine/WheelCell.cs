using System;
using DG.Tweening;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    public class WheelCell : MonoBehaviour
    {
        public WheelBonusType IDCell;
        public int Count;
        
        public void PlayWinAnimation(float timeAnimation, Action callback = null)
        {
            var localScale = transform.localScale;

            DOTween.Sequence()
                .Append(transform.DOScale(localScale + new Vector3(0.05f, 0.05f, 0), timeAnimation / 2))
                .Append(transform.DOScale(localScale , timeAnimation / 2))
                .OnComplete(() =>
                {
                    transform.localScale = localScale;
                    callback?.Invoke();
                })
                .Play();
        }
    }
}