using System;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Win;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class LevelArbiter : MonoBehaviour
    {
        [SerializeField] private GameStatusHandler gameStatusHandler;
        [SerializeField] private LevelBuilder Builder;
        [SerializeField] private ScoreCalculator ScoreCalculator;

        [Inject] private ImageFader sceneFader;
        [Inject] private WinService winService;
        [Inject] private BankService bankService;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private DataHub dataHub;

        private PlayerProgressData progressData;
        
        public int GetBestScore => progressData.BestScore;
        
        public event Action<int> OnChangeBest;
        
        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");
            OnChangeBest?.Invoke(progressData.BestScore);
            
            gameStatusHandler.OnMissedToHope += ScoreCalculator.ResetData;
            gameStatusHandler.OnTwoPointGoal +=  ScoreCalculator.CalculateForTwo;
            gameStatusHandler.OnThreePointGoal +=  ScoreCalculator.CalculateForThree;
        }

        private void RunAfterInitialize()
        {
        }

        public void BackLobby() => 
            sceneFader.FadeTo(0.8f, () => sceneNavigation.LoadLobby());


        private void CalculateScore()
        {
            
        }
    }
}