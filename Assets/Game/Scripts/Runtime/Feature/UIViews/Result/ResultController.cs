using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class ResultController : MonoBehaviour
    {
        public SerializableDictionary<GameStatusType, string> contentTextMap;
        [SerializeField] private SkinBallInfoData skinBallInfoData;
        
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private DataHub dataHub;
        [Inject] private BankService bank;

        public int BestScoreCount { get; private set; }
        public int ScoreCount { get; private set; }
        public bool IsCanResumeNewBallGame { get; private set; }
        public bool IsCanResumeTimeGame { get; private set; }

        public GameStatusType GameStatusType { get; set; }
        public void PrepareView(int scoreCount, int bestScoreCount)
        {
            ScoreCount = scoreCount;
            BestScoreCount = bestScoreCount;
        }
        
        public void PrepareNewBallView(GameStatusType statusType, bool isCanResume)
        {
            GameStatusType = statusType;
            IsCanResumeNewBallGame = isCanResume;
        }
        public void PrepareTimeView(GameStatusType statusType, bool isCanResume)
        {
            GameStatusType = statusType;
            IsCanResumeTimeGame = isCanResume;

            if (statusType == GameStatusType.Win)
            {
                bank.AddCoin(20);
            }
        }
        public void BackToMenu()
        {
            sceneNavigation.LoadLobby();
        }

        public void LoadBonusGame()
        {
            
        }
        
        public Sprite GetRandomSkin()
        {
            if (GameStatusType == GameStatusType.Lose)
            {
                return null;
            }
            
            var randomID = 0;
            var countMap = skinBallInfoData.PathMap.Count;
            randomID = Random.Range(0, 100) < 70 ? Random.Range(1, countMap/2) : Random.Range(countMap/2, countMap);

            var progress = dataHub.LoadData<PlayerProgressData>("Progress");
            progress.AddSkin(randomID);
            dataHub.SaveData("Progress", progress);
            
            return skinBallInfoData.PathMap[randomID].Skin;
        }

        public string GetWinLoseText()
        {
            return contentTextMap[GameStatusType];
        }
    }
}