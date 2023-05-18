using System;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelView : MonoBehaviour
    {
        [SerializeField] private Text bestScoreText;
        [SerializeField] private Text currentScoreText;
        
        [SerializeField] private Button homeButton;
        
        [SerializeField] private LevelArbiter levelArbiter;
        [SerializeField] private GameStatusHandler gameStatusHandler;

        public void Start()
        {
            homeButton.onClick.AddListener(levelArbiter.BackLobby);
            //ChangeBestText(LevelArbiter.GetBestScore);
            
            gameStatusHandler.OnChangeScore += ChangeCurrenText;
            levelArbiter.OnChangeBest += ChangeBestText;
        }

        private void ChangeBestText(int value) => 
            bestScoreText.text = value.ToString();

        private void ChangeCurrenText(int value) => 
            currentScoreText.text = value.ToString();

        public void OnDestroy()
        {
            homeButton.onClick.RemoveAllListeners();
            gameStatusHandler.OnChangeScore -= ChangeCurrenText;
        }
    }
}