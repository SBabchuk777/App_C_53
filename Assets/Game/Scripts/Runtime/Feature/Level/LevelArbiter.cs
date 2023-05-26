using System;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
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
        [Inject] private DataHub dataHub;

        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            scoreCalculator.Initialize();
            if (dataHub.LevelGameData.GameModeType == GameModeType.Default)
            {
                gameStatusHandler.OnMissedToHope += FinishDefaultGame;
            }
            
            if (dataHub.LevelGameData.GameModeType == GameModeType.NewBall)
            {
                gameStatusHandler.OnFinishBallGame += FinishNewBallGame;
                uiViewService.Instantiate(UIViewType.LevelPreview);
            }
            
            gameStatusHandler.OnTwoPointGoal += scoreCalculator.CalculateForTwo;
            gameStatusHandler.OnThreePointGoal += scoreCalculator.CalculateForThree;

            builder.Initialize();
            builder.CreateGameField();
        }

        private void FinishDefaultGame()
        {
            resultController.PrepareView(scoreCalculator.CurrentScore, scoreCalculator.BestScore);
            uiViewService.Instantiate(UIViewType.Result);
            scoreCalculator.ResetData();
        }
        
        private void FinishNewBallGame(GameStatusType statusType)
        {
            resultController.PrepareNewBallView(statusType);
            uiViewService.Instantiate(UIViewType.Result);
            scoreCalculator.ResetData();
            builder.ResetNewBallGame();
        }

        private void RunAfterInitialize()
        {
        }

        public void BackLobby() =>
            sceneFader.FadeTo(0.8f, () => sceneNavigation.LoadLobby());
    }
}