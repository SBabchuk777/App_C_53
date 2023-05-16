using System;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelView : MonoBehaviour
    {
        public Text BestScoreText;
        public Text CurrentScoreText;

        public Button HomeButton;
        
        public LevelArbiter LevelArbiter;

        public void Start()
        {
            HomeButton.onClick.AddListener(LevelArbiter.BackLobby);
            //ChangeBestText(LevelArbiter.GetBestScore);
            
            LevelArbiter.OnChangeCurrent += ChangeCurrenText;
            LevelArbiter.OnChangeBest += ChangeBestText;
        }

        private void ChangeBestText(int value) => 
            BestScoreText.text = value.ToString();

        private void ChangeCurrenText(int value) => 
            CurrentScoreText.text = value.ToString();

        public void OnDestroy()
        {
            HomeButton.onClick.RemoveAllListeners();
            LevelArbiter.OnChangeCurrent -= ChangeCurrenText;
        }
    }
}