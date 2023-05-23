using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent
{
    public class Hoop : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;

        [SerializeField] private List<Collider2D> collider2DForActivate;

        [SerializeField] private BallDetector detector;
        [SerializeField] private BallDetector goalDetector;
        [SerializeField] private BallDetector missDetector;
        [SerializeField] private BallDetector leftDetector;
        [SerializeField] private BallDetector rightDetector;

        [SerializeField] private SpriteRenderer circleRenderer;

        public Transform StarAnchor;

        private Star Star { get; set; }

        private bool isTouchHoop;
        private bool isGoal;

        private void Awake()
        {
            detector.OnBallInArea += ActivateAllCollider;
            goalDetector.OnBallInArea += NotifyGoal;
            missDetector.OnBallInArea += NotifyMiss;

            leftDetector.OnBallInArea += SetIsTouch;
            rightDetector.OnBallInArea += SetIsTouch;
        }

        private void NotifyMiss()
        {
            if (!isGoal)
            {
                gameStatusHandler.NotifyMissedToHope();
            }
        }

        public void SetStar(Star star)
        {
            Star = star;
        }

        public void Reset()
        {
            isTouchHoop = false;
            isGoal = false;

            if (Star != null)
            {
                Destroy(Star.gameObject);
            }
            
            gameStatusHandler.NotifyChangeMultiplayerScore(1);
        }

        private void SetIsTouch() =>
            isTouchHoop = true;

        private void ActivateAllCollider()
        {
            foreach (var collider2D1 in collider2DForActivate)
                collider2D1.gameObject.SetActive(true);

            goalDetector.ActivateCollider();
            missDetector.ActivateCollider();
            circleRenderer.sortingOrder = 5;

            if (Star != null)
            {
                Star.Activate();
            }
        }

        public void DeactivateAllCollider()
        {
            foreach (var collider2D1 in collider2DForActivate)
                collider2D1.gameObject.SetActive(false);

            goalDetector.DeactivateCollider();
            missDetector.DeactivateCollider();
            circleRenderer.sortingOrder = 4;

            if (Star != null)
            {
                Star.Deactivate();
            }
        }

        private void NotifyGoal()
        {
            isGoal = true;

            if (isTouchHoop)
            {
                gameStatusHandler.NotifyTwoPointGoal();
            }
            else
            {
                gameStatusHandler.NotifyThreePointGoal();
            }
        }
    }
}