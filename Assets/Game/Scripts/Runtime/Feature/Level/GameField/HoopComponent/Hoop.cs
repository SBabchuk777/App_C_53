using System.Collections.Generic;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent
{
    public class Hoop : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;

        [SerializeField] private List<Collider2D> collider2DForActivate;
        [SerializeField] private List<Transform> hoopAnchors;

        [SerializeField] private BallDetector detector;
        [SerializeField] private BallDetector goalDetector;
        [SerializeField] private BallDetector missDetector;
        [SerializeField] private BallDetector leftDetector;
        [SerializeField] private BallDetector rightDetector;

        [SerializeField] private SpriteRenderer circleRenderer;

        [Inject] private DataHub dataHub; 
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

        public void MoveToRandomAnchor()
        {
            var randomAnchor = hoopAnchors[Random.Range(0, hoopAnchors.Count)];
            transform.DOMove(randomAnchor.position, 1f).Play();
        }
        public void MoveToDefaultAnchor()
        {
            if (transform.position != Vector3.zero)
            {
                transform.DOMove(Vector3.zero, 1f).Play();
            }
        }

        public void MoveTo(Transform anchor)
        {
            transform.DOMove(anchor.position, 1f).Play();
        }
        private void NotifyMiss()
        {
            if (!isGoal)
            {
                gameStatusHandler.NotifyMissedToHope(dataHub.LevelGameData.GameModeType);
                gameStatusHandler.NotifyFinishBallGame(GameStatusType.Lose);
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
            circleRenderer.sortingOrder = 3;

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