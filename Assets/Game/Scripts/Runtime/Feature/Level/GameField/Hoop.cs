using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    public class Hoop : MonoBehaviour
    {
        public List<Collider2D> Collider2DForActivate;
        public BallDetector Detector;

        private void Awake()
        {
            Detector.OnBallInArea += ActivateAllCollider;
        }

        private void ActivateAllCollider()
        {
            foreach (var collider2D1 in Collider2DForActivate) 
                collider2D1.gameObject.SetActive(true);
        }
    }
}