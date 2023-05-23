using System;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Result;
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
        [SerializeField] private LevelBuilder builder;
        [SerializeField] private ScoreCalculator scoreCalculator;

        [Inject] private ImageFader sceneFader;
        [Inject] private BankService bankService;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private ResultController resultController;

        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            scoreCalculator.Initialize();
            gameStatusHandler.OnMissedToHope += FinishGame;
            gameStatusHandler.OnTwoPointGoal +=  scoreCalculator.CalculateForTwo;
            gameStatusHandler.OnThreePointGoal +=  scoreCalculator.CalculateForThree;
            
            builder.Initialize();
            builder.CreateGameField();
        }

        private void FinishGame()
        {
            resultController.PrepareView(scoreCalculator.CurrentScore, scoreCalculator.BestScore);
            uiViewService.Instantiate(UIViewType.Result);
            scoreCalculator.ResetData();
        }

        private void RunAfterInitialize()
        {
        }

        public void BackLobby() => 
            sceneFader.FadeTo(0.8f, () => sceneNavigation.LoadLobby());
        
    }
}