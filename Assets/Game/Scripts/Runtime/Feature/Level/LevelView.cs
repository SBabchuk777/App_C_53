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
        [SerializeField] private GameObject scorePanel;
        
        [SerializeField] private LevelArbiter levelArbiter;
        [SerializeField] private GameStatusHandler gameStatusHandler;

        public void Start()
        {
            homeButton.onClick.AddListener(levelArbiter.BackLobby);

            gameStatusHandler.OnChangeScore += ChangeCurrenText;
            gameStatusHandler.OnChangeBestScore += ChangeBestText;

            if (levelArbiter.IsActiveScorePanel)
            {
                scorePanel.SetActive(true);
            }
        }

        private void ChangeBestText(int value) => 
            bestScoreText.text = value.ToString();

        private void ChangeCurrenText(int value) => 
            currentScoreText.text = value.ToString();

        public void OnDestroy()
        {
            homeButton.onClick.RemoveAllListeners();
            gameStatusHandler.OnChangeScore -= ChangeCurrenText;
            gameStatusHandler.OnChangeBestScore -= ChangeBestText;
        }
    }
}