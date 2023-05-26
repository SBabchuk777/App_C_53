using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class ResultController : MonoBehaviour
    {
        [SerializeField] private SkinBallInfoData skinBallInfoData;
        
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private DataHub dataHub;

        public int BestScoreCount { get; private set; }
        public int ScoreCount { get; private set; }
        
        public GameStatusType GameStatusType { get; set; }
        public void PrepareView(int scoreCount, int bestScoreCount)
        {
            ScoreCount = scoreCount;
            BestScoreCount = bestScoreCount;
        }
        
        public void PrepareNewBallView(GameStatusType statusType)
        {
            GameStatusType = statusType;
            //logic get new ball
        }
        public void BackToMenu()
        {
            sceneNavigation.LoadLobby();
        }

        public void LoadBonusGame()
        {
            
        }

        public void ReloadGame()
        {
            
        }

        public Sprite GetRandomSkin()
        {
            var randomID = 0;
            var countMap = skinBallInfoData.PathMap.Count;
            randomID = Random.Range(0, 100) < 70 ? Random.Range(0, countMap/2) : Random.Range(countMap/2, countMap);

            var progress = dataHub.LoadData<PlayerProgressData>("Progress");
            progress.AddSkin(randomID);
            dataHub.SaveData("Progress", progress);
            
            return skinBallInfoData.PathMap[randomID].Skin;
        }
    }
}