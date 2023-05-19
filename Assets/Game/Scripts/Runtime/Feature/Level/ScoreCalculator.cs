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
        
        private int currentScore;
        private int multiplierScore = 1;
        private int lastScore;
        
        [Inject] private DataHub dataHub;
        private PlayerProgressData progressData;
        
        public void Initialize()
        {
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");
            statusHandler.NotifyChangeBestScore(progressData.BestScore);
        }

        public void CalculateForTwo()
        {
            lastScore = TwoPointShot;
            currentScore += TwoPointShot;

            CheckBestScore();
            
            statusHandler.NotifyAddScore(TwoPointShot);
            statusHandler.NotifyChangeScore(currentScore);
        }

        public void CalculateForThree()
        {
            SetMultiplayerScore();
            
            var score = ThreePointShot * multiplierScore;
            lastScore = ThreePointShot;

            currentScore += score;
            CheckBestScore();
            
            statusHandler.NotifyAddScore(score);
            statusHandler.NotifyChangeScore(currentScore);
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
            currentScore = 0;
            
            statusHandler.NotifyChangeScore(currentScore);
        }

        private void CheckBestScore()
        {
            if (currentScore > progressData.BestScore)
            {
                progressData.BestScore = currentScore;
                statusHandler.NotifyChangeBestScore(currentScore);
                
                dataHub.SaveData("Progress" ,progressData);
            }
        }
    }
}