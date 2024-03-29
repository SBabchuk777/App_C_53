using System;
using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using Game.Scripts.Runtime.Services.UIViewService;
using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class ResultController : MonoBehaviour
    {
        public SerializableDictionary<GameStatusType, string> contentTextMap;
        [SerializeField] private SkinBallInfoData skinBallInfoData;
        
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private DataHub dataHub;
        [Inject] private BankService bank;
        [Inject] private UIViewService uiViewService;
        [Inject] private ChallengeController challengeController;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;

        public event Action OnReloadNewBallGame;
        public event Action OnReloadTimeGame;

        public int BestScoreCount { get; private set; }
        public int ScoreCount { get; private set; }
        public bool IsCanResumeNewBallGame { get; private set; }
        public bool IsCanResumeTimeGame { get; private set; }

        public GameStatusType GameStatusType { get; set; }
        public void PrepareView(int scoreCount, int bestScoreCount)
        {
            ScoreCount = scoreCount;
            BestScoreCount = bestScoreCount;
            projectAudioPlayer.PlayAudioSfx(ProjectAudioType.Lose);
        }
        
        public void PrepareNewBallView(GameStatusType statusType, bool isCanResume)
        {
            GameStatusType = statusType;
            IsCanResumeNewBallGame = isCanResume;

            projectAudioPlayer.PlayAudioSfx(statusType == GameStatusType.Win
                ? ProjectAudioType.Win
                : ProjectAudioType.Lose);
        }
        public void PrepareTimeView(GameStatusType statusType, bool isCanResume)
        {
            GameStatusType = statusType;
            IsCanResumeTimeGame = isCanResume;

            if (statusType == GameStatusType.Win)
            {
                bank.AddCoin(20);
                projectAudioPlayer.PlayAudioSfx(ProjectAudioType.Win); 
            }
            else
            {
                projectAudioPlayer.PlayAudioSfx(ProjectAudioType.Lose); 
            }
        }
        public void BackToMenu()
        {
            sceneNavigation.LoadLobby();
        }

        public void LoadBonusGame()
        {
            challengeController.PrepareView();
            uiViewService.Instantiate(UIViewType.BonusGame);
        }
        
        public Sprite GetRandomSkin()
        {
            if (GameStatusType == GameStatusType.Lose)
            {
                return null;
            }
            
            var randomID = 0;
            var countMap = skinBallInfoData.PathMap.Count;
            randomID = Random.Range(0, 100) < 70 ? Random.Range(1, countMap/2) : Random.Range(countMap/2, countMap);

            var progress = dataHub.LoadData<PlayerProgressData>("Progress");
            progress.AddSkin(randomID);
            dataHub.SaveData("Progress", progress);
            
            return skinBallInfoData.PathMap[randomID].Skin;
        }

        public string GetWinLoseText()
        {
            return contentTextMap[GameStatusType];
        }

        public void AddRewardForWatch()
        {
            bank.AddCoin(20);
        }

        public void NotifyReloadNewBallGame()
        {
            OnReloadNewBallGame?.Invoke();
        }

        public void NotifyReloadTimeGame()
        {
            OnReloadTimeGame?.Invoke();
        }

        public void RemoveAllSubscribe()
        {
            OnReloadNewBallGame = null;
            OnReloadTimeGame = null;
        }
    }
}