using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Level.GameField;
using Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelBuilder : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;
        [SerializeField] private ScoreCalculator scoreCalculator;
        [SerializeField] private NewBallChallengeSettings newBallChallengeSettings;

        [Inject] private DataHub dataHub;
        public BallFactory BallFactory;

        public Hoop Hoop;
        public Transform BallAnchor;
        public Transform InstanceParent;

        public BallDetector BallDetector;

        [Header("Factory")] public Star StarPrefab;
        public Stick SticPrefab;

        private Ball ball;
        private Stick stick;

        private Injector Injector => ProjectContext.Instance.Injector;

        public void Initialize()
        {
            BallFactory.Initialize();
            BallDetector.OnBallInArea += CreateGameField;

            if (dataHub.LevelGameData.GameModeType == GameModeType.NewBall)
            {
                CreateStick();
            }
        }

        public void CreateGameField()
        {
            if (dataHub.LevelGameData.GameModeType == GameModeType.NewBall)
            {
                CreateFieldForNewBallGame();
            }
            else
            {
                CreateFieldForDefaultGame();
            }
        }

        public void ResetNewBallGame()
        {
            newBallChallengeSettings.Reset();

            stick.MoveTo(newBallChallengeSettings.GetStickPosition);
            Hoop.MoveTo(newBallChallengeSettings.GetHoopPosition);
        }

        private void CreateFieldForDefaultGame()
        {
            DestroyBall();
            Hoop.Reset();

            CreateBall();
            CreateStar();
            MoveHoop();
            Hoop.DeactivateAllCollider();
        }

        private void CreateFieldForNewBallGame()
        {
            DestroyBall();
            Hoop.Reset();

            CreateBall();
            MoveComponentsForNewBallGame();
            Hoop.DeactivateAllCollider();
        }

        private void MoveComponentsForNewBallGame()
        {
            if (newBallChallengeSettings.CountAnchor == 0)
            {
                newBallChallengeSettings.CountAnchor++;
                return;
            }

            if (stick.IsTouch)
            {
                stick.ResetStick();
            }
            else
            {
                gameStatusHandler.NotifyFinishBallGame(GameStatusType.Lose);
                return;
            }

            if (newBallChallengeSettings.CountAnchor > 4)
            {
                gameStatusHandler.NotifyFinishBallGame(GameStatusType.Win);
                return;
            }

            stick.MoveTo(newBallChallengeSettings.GetStickPosition);
            Hoop.MoveTo(newBallChallengeSettings.GetHoopPosition);
            newBallChallengeSettings.CountAnchor++;
        }

        private void MoveHoop()
        {
            if (scoreCalculator.CurrentScore >= 10)
            {
                Hoop.MoveToRandomAnchor();
            }
            else
            {
                Hoop.MoveToDefaultAnchor();
            }
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

        private void CreateStick()
        {
            stick = Instantiate(SticPrefab, Vector3.zero, Quaternion.identity, InstanceParent);
            stick.SetStick(newBallChallengeSettings.GetStickPosition);

            Injector.InjectDependenciesInObject(stick);
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