using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Level.GameField;
using Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelBuilder : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;
        public BallFactory BallFactory;
        public Star StarPrefab;

        public Hoop Hoop;
        public Transform BallAnchor;
        public Transform InstanceParent;

        public BallDetector BallDetector;

        private Ball ball;
        
        private Injector Injector => ProjectContext.Instance.Injector;

        public void Initialize()
        {
            BallFactory.Initialize();
            BallDetector.OnBallInArea += CreateGameField;
        }

        public void CreateGameField()
        {
            DestroyBall();
            Hoop.Reset();
            Hoop.DeactivateAllCollider();
            
            CreateBall();
            CreateStar();
        }
        
        private void CreateBall()
        {
            ball = BallFactory.InstantiateBall(BallAnchor.position, InstanceParent);
        }

        private void CreateStar()
        {
            if (Random.Range(0, 100) < 30)
                return;
            
            var instance = Instantiate(StarPrefab, Hoop.StarAnchor.position, Quaternion.identity, InstanceParent);
            Hoop.SetStar(instance);
            Injector.InjectDependenciesInObject(instance);
        }

        private void DestroyBall()
        {
            if (ball != null)
            {
                Destroy(ball.gameObject);
            }
        }
    }
}