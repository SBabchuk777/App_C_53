using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Level.GameField;
using Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelBuilder : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;
        public BallFactory BallFactory;

        public Hoop Hoop;
        public Transform BallAnchor;
        public Transform InstanceParent;

        public BallDetector BallDetector;

        private Ball Ball;

        public void Start()
        {
            BallFactory.Initialize();
            CreateBall();
            BallDetector.OnBallInArea += () =>
            {
                DestroyBall();
                CreateBall();
                Hoop.Reset();
            };
        }
        
        public void CreateBall()
        {
            Ball = BallFactory.InstantiateBall(BallAnchor.position, InstanceParent);
            Hoop.DeactivateAllCollider();
        }

        public void DestroyBall()
        {
            Destroy(Ball.gameObject);
        }
    }
}