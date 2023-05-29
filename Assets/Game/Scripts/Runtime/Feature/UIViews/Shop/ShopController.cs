using System;
using System.Collections.Generic;
using System.Linq;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SceneLoaderService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    public class ShopController : MonoBehaviour, IProjectInitializable
    {
        public SkinBallInfoData SkinInfoData;

        [Inject] private DataHub dataHub;
        [Inject] private BankService bank;
        [Inject] private SceneNavigation sceneNavigation;
        [Inject] private ProjectAudioPlayer projectAudioPlayer;

        private PlayerProgressData progressData;
        private Dictionary<int, SkinInfo> currentSkinInfo;
        private int currentId;

        public SkinInfo GetFirstSkinIfo => currentSkinInfo[0];
        public event Action<SkinInfo> OnChangeSkin;
        public event Action<int> OnHideArrow;
        public event Action OnShowArrow;

        public void Initialize()
        {
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");
        }

        public void Reset() => currentId = 0;

        public void GetNextIcon(int value)
        {
            if (currentId + value < 0 || currentId + value > currentSkinInfo.Count - 1)
                return;

            currentId += value;

            NotifyHideOrShowArrow();

            OnChangeSkin?.Invoke(currentSkinInfo[currentId]);
        }


        public void StartLevel()
        {
            var skinInfo = currentSkinInfo[currentId];

            if (skinInfo.IsPurchased)
                SetCurrentSkin(skinInfo.ID);
            else
            {
                PurchaseSkin(skinInfo.ID, skinInfo.Count);
                SetCurrentSkin(skinInfo.ID);
            }

            

            sceneNavigation.LoadLevel();
        }

        public void UpdateView()
        {
            GetCurrentSkinInfo();
        }
        private void NotifyHideOrShowArrow()
        {
            if (currentId == 0)
                OnHideArrow?.Invoke(-1);

            if (currentId == currentSkinInfo.Count - 1)
                OnHideArrow?.Invoke(1);

            if (currentId > 0 && currentId < currentSkinInfo.Count - 2)
            {
                OnShowArrow?.Invoke();
            }
        }

        private void GetCurrentSkinInfo()
        {
            currentSkinInfo = new Dictionary<int, SkinInfo>();

            foreach (var skinInfo in SkinInfoData.PathMap)
            {
                currentSkinInfo.Add(skinInfo.Key, new SkinInfo()
                {
                    Skin = skinInfo.Value.Skin,
                    Count = skinInfo.Value.Count,
                    ID = skinInfo.Key
                });
            }

            foreach (var skinID in progressData.AvailableSkins)
                currentSkinInfo[skinID].IsPurchased = true;

            var tempID = 1;

            var sortedSkinInfo = currentSkinInfo
                .Where(i => i.Key != progressData.CurrentIDBallSkin)
                .OrderByDescending(skin => skin.Value.IsPurchased)
                .ThenBy(skin => skin.Value.Count)
                .ToDictionary(_ => tempID++, skin => skin.Value);

            sortedSkinInfo.Add(0, currentSkinInfo[progressData.CurrentIDBallSkin]);

            foreach (var skinInfo in sortedSkinInfo
                         .Where(i => !i.Value.IsPurchased && bank.IsEnoughCoins(i.Value.Count)))
            {
                skinInfo.Value.IsCanPurchased = true;
            }

            currentSkinInfo = sortedSkinInfo;
        }

        private void PurchaseSkin(int skinID, int count)
        {
            progressData.AvailableSkins.Add(skinID);
            bank.SpendCoins(count);
            projectAudioPlayer.PlayAudioSfx(ProjectAudioType.BuyBall);
            dataHub.SaveData("Progress", progressData);
        }

        private void SetCurrentSkin(int skinID)
        {
            progressData.CurrentIDBallSkin = skinID;
            dataHub.SaveData("Progress", progressData);
            
        }
    }
}