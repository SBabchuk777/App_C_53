using System;
using System.Threading;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Result;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.Timer;
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
        [Inject] private ChallengeController challengeController;
        [Inject] private DataHub dataHub;
        
        private ITimer timer;
        private TimeConverter converter;
        private BaseView preview;
        private ChallengeData challengeData;
        public event Action<string> OnChangeTimer;

        public bool IsActiveScorePanel => dataHub.LevelGameData.GameModeType == GameModeType.Default;
        public bool IsActiveTimerPanel => dataHub.LevelGameData.GameModeType == GameModeType.Time;
        
        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            scoreCalculator.Initialize();
            converter = new TimeConverter();
            challengeData = dataHub.LoadData<ChallengeData>("Challenge");
            if (dataHub.LevelGameData.GameModeType == GameModeType.Default)
            {
                gameStatusHandler.OnMissedToHope += FinishDefaultGame;
            }
            
            if (dataHub.LevelGameData.GameModeType == GameModeType.NewBall)
            {
                gameStatusHandler.OnFinishBallGame += FinishNewBallGame;
                uiViewService.Instantiate(UIViewType.LevelPreview);
            }
            if (dataHub.LevelGameData.GameModeType == GameModeType.Time)
            {
                gameStatusHandler.OnFinishTimeGame += FinishTimeGame;
                gameStatusHandler.OnMissedToHope += scoreCalculator.ResetData;;
                challengeData.CountPlayGameInTime++;
                
                preview = uiViewService.Instantiate(UIViewType.LevelPreview);
                preview.OnCloseView += StartTimer;
            }
            
            gameStatusHandler.OnTwoPointGoal += scoreCalculator.CalculateForTwo;
            gameStatusHandler.OnThreePointGoal += scoreCalculator.CalculateForThree;

            builder.Initialize();
            builder.CreateGameField();
        }

        private void StartTimer()
        {
            timer = new TimerService();
            timer.StartCountdown(61, CancellationToken.None);
            timer.OnSecondPassed += NotifyTimerTick;
            timer.OnTimerFinished += NotifyTimeLose;
        }
        private void StopTimer()
        {
            timer.Stop();
            
            timer.OnSecondPassed -= NotifyTimerTick;
            timer.OnTimerFinished -= NotifyTimeLose;

            timer = null;
        }

        private void NotifyTimeLose()
        {
            gameStatusHandler.NotifyFinishTimeGame(GameStatusType.Lose);
        }

        private void NotifyTimerTick(float value)
        {
            OnChangeTimer?.Invoke(converter.FormatSecondsToMMSS(value));
        }

        private void FinishDefaultGame()
        {
            resultController.PrepareView(scoreCalculator.CurrentScore, scoreCalculator.BestScore);
            uiViewService.Instantiate(UIViewType.Result);
            scoreCalculator.ResetData();
        }
        
        private void FinishNewBallGame(GameStatusType statusType)
        {
            challengeData.CountPlayGameInNewBall++;
            var isCanResume = true;
            if (challengeData.CountPlayGameInNewBall == 5)
            {
                challengeController.NotifyCompleteBonusGame(0);
                challengeData.CountPlayGameInNewBall = 0;
                isCanResume = false;
            }
            
            dataHub.SaveData("Challenge", challengeData);
            
            resultController.PrepareNewBallView(statusType, isCanResume);
            uiViewService.Instantiate(UIViewType.ResultNewBall);
            scoreCalculator.ResetData();
            builder.ResetNewBallGame();
        }
        private void FinishTimeGame(GameStatusType statusType)
        {
            StopTimer();
            var isCanResume = true;
            if (challengeData.CountPlayGameInTime == 5)
            {
                challengeController.NotifyCompleteBonusGame(1);
                challengeData.CountPlayGameInTime = 0;
                isCanResume = false;
            }
            
            dataHub.SaveData("Challenge", challengeData);
            
            resultController.PrepareTimeView(statusType, isCanResume);
            var result = uiViewService.Instantiate(UIViewType.ResultTime) as TimeChallengeResultView;
            
            result.OnCloseAfterReload += StartTimer;
            result.OnCloseView -= StartTimer;

            scoreCalculator.ResetData();
            builder.ResetTimeGame();
        }

        private void RunAfterInitialize()
        {
        }

        public void BackLobby()
        {
            gameStatusHandler.UnsubscribeAllEventHandlers();
            sceneFader.FadeTo(0.8f, () => sceneNavigation.LoadLobby());
        }
    }
}