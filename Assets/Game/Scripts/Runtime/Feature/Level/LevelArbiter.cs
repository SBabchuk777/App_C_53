using System;
using System.Threading;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Result;
using Game.Scripts.Runtime.Feature.UIViews.Settings;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.Timer;
using Game.Scripts.Runtime.Services.UIViewService;
using MoreMountains.NiceVibrations;
using Tools.UnityAdsService.Scripts.Common;
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
        [Inject] private SettingService settingService;
        
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

        private void OnDestroy()
        {
            resultController.RemoveAllSubscribe();
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
                resultController.OnReloadNewBallGame += () => challengeData.CountPlayGameInNewBall++;
                uiViewService.Instantiate(UIViewType.LevelPreview);
                
                challengeData.CountPlayGameInNewBall++;
            }
            if (dataHub.LevelGameData.GameModeType == GameModeType.Time)
            {
                gameStatusHandler.OnFinishTimeGame += FinishTimeGame;
                gameStatusHandler.OnMissedToHope += scoreCalculator.ResetData;;
                
                resultController.OnReloadTimeGame += StartTimer;
                resultController.OnReloadTimeGame += () => challengeData.CountPlayGameInTime++;
                
                preview = uiViewService.Instantiate(UIViewType.LevelPreview);
                preview.OnCloseView += StartTimer;
                
                challengeData.CountPlayGameInTime++;
            }
            
            gameStatusHandler.OnTwoPointGoal += scoreCalculator.CalculateForTwo;
            gameStatusHandler.OnTwoPointGoal += () => projectAudioPlayer.PlayAudioSfx(ProjectAudioType.GoalHoop);
            
            gameStatusHandler.OnThreePointGoal += scoreCalculator.CalculateForThree;
            gameStatusHandler.OnThreePointGoal += SetThreePointGoal;

            builder.Initialize();
            builder.CreateGameField();
        }

        private void SetThreePointGoal()
        {
            projectAudioPlayer.PlayAudioSfx(ProjectAudioType.Strike);
            projectAudioPlayer.PlayAudioSfx(ProjectAudioType.GoalHoop);
            
            PlayVibration();
        }

        private void PlayVibration()
        {
            if (settingService.SettingsData.IsVibro)
            {
                MMVibrationManager.Haptic(HapticTypes.Success);
            }
        }

        private void StartTimer()
        {
            timer = new TimerService();
            timer.StartCountdown(30, CancellationToken.None);
            
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
            
            PlayVibration();
        }
        
        private void FinishNewBallGame(GameStatusType statusType)
        {
            var isCanResume = true;
            if (challengeData.CountPlayGameInNewBall >= 5)
            {
                challengeController.NotifyCompleteBonusGame(0);
                challengeData.CountPlayGameInNewBall = 0;
                isCanResume = false;
            }
            
            dataHub.SaveData("Challenge", challengeData);
            
            resultController.PrepareNewBallView(statusType, isCanResume);
            var resultNewBall = uiViewService.Instantiate(UIViewType.ResultNewBall);
            scoreCalculator.ResetData();
            builder.ResetNewBallGame();
            
            PlayVibration();
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
            uiViewService.Instantiate(UIViewType.ResultTime);
            
            scoreCalculator.ResetData();
            builder.ResetTimeGame();
            
            PlayVibration();
        }

        private void RunAfterInitialize()
        {
        }

        public void BackLobby()
        {
            gameStatusHandler.UnsubscribeAllEventHandlers();
            sceneFader.FadeTo(0.8f, () => sceneNavigation.LoadLobby());
            
            if (dataHub.LevelGameData.GameModeType == GameModeType.Time)
            {
                StopTimer();
                
                if (challengeData.CountPlayGameInTime == 5)
                {
                    challengeController.NotifyCompleteBonusGame(1);
                    challengeData.CountPlayGameInTime = 0;
                    dataHub.SaveData("Challenge", challengeData);
                }
            }

            if (dataHub.LevelGameData.GameModeType == GameModeType.NewBall)
            {
                if (challengeData.CountPlayGameInNewBall == 5)
                {
                    challengeController.NotifyCompleteBonusGame(0);
                    challengeData.CountPlayGameInNewBall = 0;
                    dataHub.SaveData("Challenge", challengeData);
                }
            }
        }
    }
}