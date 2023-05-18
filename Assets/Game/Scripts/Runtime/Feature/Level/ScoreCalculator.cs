using System;
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
        
        public void CalculateForTwo()
        {
            lastScore = TwoPointShot;
            currentScore += TwoPointShot;
            
            statusHandler.NotifyAddScore(TwoPointShot);
            statusHandler.NotifyChangeScore(currentScore);
        }
        public void CalculateForThree()
        {
            SetMultiplayerScore();
            
            var score = ThreePointShot * multiplierScore;
            lastScore = ThreePointShot;

            currentScore += score;
            
            statusHandler.NotifyAddScore(score);
            statusHandler.NotifyChangeScore(currentScore);
        }

        private void SetMultiplayerScore()
        {
            if (lastScore == 3)
            {
                statusHandler.NotifyChangeMultiplayerScore(++multiplierScore);
            }
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
            
        }
    }
}