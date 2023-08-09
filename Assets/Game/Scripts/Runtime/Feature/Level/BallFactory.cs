using Game.Scripts.Runtime.Feature.Level.GameField;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class BallFactory : MonoBehaviour
    {
        public Ball BallPrefab;
        public SkinBallInfoData SkinBallInfoData;

        [Inject] private DataHub dataHub;

        private PlayerProgressData progressData;
        
        public void Initialize() => 
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");

        public Ball InstantiateBall(Vector3 position, Transform parent)
        {
            var ballInstance = Instantiate(BallPrefab, position, Quaternion.identity, parent);
            ballInstance.Initialize();
            SetSkin(ballInstance);

            return ballInstance;
        }

        private void SetSkin(Ball ball) => 
            ball.SetSprite(SkinBallInfoData.PathMap[progressData.CurrentIDBallSkin].Skin);
    }
}