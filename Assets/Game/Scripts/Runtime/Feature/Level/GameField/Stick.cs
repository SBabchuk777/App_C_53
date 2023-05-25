using System;
using DG.Tweening;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    public class Stick : MonoBehaviour
    {
        [SerializeField] private BallDetector ballDetector;
        
        public bool IsTouch { get; set; }
        public void SetStick(Transform anchor)
        {
            transform.position = anchor.position;
            transform.rotation = anchor.rotation;
            
            ballDetector.OnBallInArea += SetTouch;
        }

        public void MoveTo(Transform anchor)
        {
            DOTween.Sequence()
                .Append(transform.DOMove(anchor.position, 1f))
                .Join(transform.DORotate(anchor.rotation.eulerAngles, 1f))
                .Play();
        }

        public void ResetStick()
        {
            IsTouch = false;
        }
        private void SetTouch()
        {
            IsTouch = true;
        }

        private void OnDestroy()
        {
            ballDetector.OnBallInArea -= SetTouch;
        }
    }
}