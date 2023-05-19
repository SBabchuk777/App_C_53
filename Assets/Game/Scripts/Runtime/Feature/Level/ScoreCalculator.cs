using System;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class ScoreCalculator : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler statusHandler;
        
        private const int ThreePointShot = 3;
        private const int TwoPointShot = 2;

        private int multiplierScore = 1;
        private int lastScore;

        [Inject] private DataHub dataHub;
        private PlayerProgressData progressData;
        public int CurrentScore { get;  private set; }
        public int BestScore => progressData.BestScore;

        public void Initialize()
        {
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");
            statusHandler.NotifyChangeBestScore(progressData.BestScore);
        }

        public void CalculateForTwo()
        {
            lastScore = TwoPointShot;
            CurrentScore += TwoPointShot;

            CheckBestScore();
            
            statusHandler.NotifyAddScore(TwoPointShot);
            statusHandler.NotifyChangeScore(CurrentScore);
        }

        public void CalculateForThree()
        {
            SetMultiplayerScore();
            
            var score = ThreePointShot * multiplierScore;
            lastScore = ThreePointShot;

            CurrentScore += score;
            CheckBestScore();
            
            statusHandler.NotifyAddScore(score);
            statusHandler.NotifyChangeScore(CurrentScore);
        }

        private void SetMultiplayerScore()
        {
            if (lastScore == 3 && multiplierScore < 3)
            {
                multiplierScore++;
            }
            
            statusHandler.NotifyChangeMultiplayerScore(multiplierScore);
        }

        public void ResetData()
        {
            lastScore = 0;
            multiplierScore = 1;
            CurrentScore = 0;
            
            statusHandler.NotifyChangeScore(CurrentScore);
        }

        private void CheckBestScore()
        {
            if (CurrentScore > progressData.BestScore)
            {
                progressData.BestScore = CurrentScore;
                statusHandler.NotifyChangeBestScore(CurrentScore);
                
                dataHub.SaveData("Progress" ,progressData);
            }
        }
    }
}