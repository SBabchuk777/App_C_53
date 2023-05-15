using System;
using System.Collections;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    public class WheelOfFortune : MonoBehaviour
    {
        public Transform Wheel;
        public float SpinDuration; 
        public float MaxSpinSpeed;
        
        public AnimationCurve SpinCurve; 

        public bool IsSpinning { get; set; }
        
        public event Action OnStop;
        
        public void SpinWheel(Action callback)
        {
            if (IsSpinning) 
                return;
            
            StartCoroutine(SpinCoroutine());
            
            callback?.Invoke();
        }

        IEnumerator SpinCoroutine()
        {
            IsSpinning = true;
            
            var totalSpinCount = SpinDuration / Time.deltaTime;
            var currentSpinCount = 0f;
            
            while (currentSpinCount < totalSpinCount)
            {
                var spinProgress = currentSpinCount / totalSpinCount;
                var spinCurveValue = SpinCurve.Evaluate(spinProgress);
                var currentSpinSpeed = Mathf.Lerp(MaxSpinSpeed, 0f, spinCurveValue);
                
                Wheel.Rotate(0f, 0f, -currentSpinSpeed * Time.deltaTime);

                currentSpinCount += 1f;
                yield return null;
            }
            
            OnStop?.Invoke();
            IsSpinning = false;
        }
    }
}