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
        [SerializeField] private LevelBuilder builder;
        [SerializeField] private ScoreCalculator scoreCalculator;

        [Inject] private ImageFader sceneFader;
        [Inject] private WinService winService;
        [Inject] private BankService bankService;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;
        [Inject] private UIViewService uiViewService;
        [Inject] private SceneNavigation sceneNavigation;

        public void Start()
        {
            Initialize();
            sceneFader.FadeOut(1f, RunAfterInitialize);
        }

        private void Initialize()
        {
            scoreCalculator.Initialize();
            gameStatusHandler.OnMissedToHope += scoreCalculator.ResetData;
            gameStatusHandler.OnTwoPointGoal +=  scoreCalculator.CalculateForTwo;
            gameStatusHandler.OnThreePointGoal +=  scoreCalculator.CalculateForThree;
            
            builder.Initialize();
            builder.CreateGameField();
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