using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    public class BallDetector : MonoBehaviour
    {
        public event Action OnBallInArea; 
        private void OnTriggerEnter2D(Collider2D col)
        {
            if (col.GetComponent<Ball>()) 
                OnBallInArea?.Invoke();
        }
    }
}