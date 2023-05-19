using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class ResultController : MonoBehaviour
    {
        [Inject] private SceneNavigation sceneNavigation;

        public int BestScoreCount { get; set; }
        public int ScoreCount { get; set; }
        
        public void PrepareView(int scoreCount, int bestScoreCount)
        {
            ScoreCount = scoreCount;
            BestScoreCount = bestScoreCount;
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
    }
}