using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Collection;
using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using Game.Scripts.Runtime.Feature.UIViews.ShopCollection.PopUp;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.ShopCollection
{
    public class ShopCollectionController : MonoBehaviour,IProjectInitializable
    {
        [SerializeField] private CollectionElementsInfoData collectionElementsInfoData;

        private PlayerProgressData playerProgressData;
        
        [Inject] private BankService bankService;
        [Inject] private UIViewService uiViewService;
        [Inject] private DataHub dataHub;
        [Inject] private CollectionController collectionController;

        public PanelPopUpInfo PanelPopUpInfo { get; private set; }
        
        private int GetRandomRegularElementID => 
            Random.Range(0, collectionElementsInfoData.RegularElementsMap.Count);
        
        private int GetRandomRareElementID => 
            Random.Range(0, collectionElementsInfoData.RareElementsPathMap.Count);

        public void Initialize()
        {
            playerProgressData = dataHub.LoadData<PlayerProgressData>("Progress");
        }

        public void AddCoin()
        {
            bankService.AddCoin(10);
        } 
        public void AddCoinForAds()
        {
            bankService.AddCoin(20);
        }
        public bool IsTryBuy(int value)
        {
            return bankService.IsEnoughCoins(value);
        }

        public void BuyRegularElement()
        {
            bankService.SpendCoins(100);
            SetPopUpPanelInfoForRegular();
            uiViewService.Instantiate(UIViewType.ShopCollectionPopUp);
        }

        public void BuyRareElement()
        {
            bankService.SpendCoins(250);
            SetPopUpPanelInfoForRare();
            uiViewService.Instantiate(UIViewType.ShopCollectionPopUp);
        }

        private void SetPopUpPanelInfoForRegular()
        {
            PanelPopUpInfo = new PanelPopUpInfo();
            var elementID = GetRandomRegularElementID;
            
            PanelPopUpInfo.IconSprite = collectionElementsInfoData.RegularElementsMap[elementID].ActiveElementImage;
            PanelPopUpInfo.CurrentElementType = ElementType.Regular;
            
            if (playerProgressData.AvailableRegularColection.Contains(elementID))
            {
                PanelPopUpInfo.IsActiveBuyButton = true;
            }
            else
            {
                PanelPopUpInfo.IsActiveBacklight = true;
                playerProgressData.AvailableRegularColection.Add(elementID);
                
                collectionController.UpdateView();
                SaveProgress();
            }
        }


        private void SetPopUpPanelInfoForRare()
        {
            PanelPopUpInfo = new PanelPopUpInfo();
            
            if (Random.Range(0,100) < 40)
            {
                var elementID = GetRandomRareElementID;
                PanelPopUpInfo.IconSprite = collectionElementsInfoData.RareElementsPathMap[elementID].ActiveElementImage;
                
                PanelPopUpInfo.CurrentElementType = ElementType.Rare;
            
                if (playerProgressData.AvailableRareColection.Contains(elementID))
                {
                    PanelPopUpInfo.IsActiveBuyButton = true;
                }
                else
                {
                    PanelPopUpInfo.IsActiveBacklight = true;
                    playerProgressData.AvailableRareColection.Add(elementID);
                    collectionController.UpdateView();
                    SaveProgress();
                }
            }
            else
            {
                SetPopUpPanelInfoForRegular();
            }
        }

        private void SaveProgress() => dataHub.SaveData("Progress", playerProgressData);
    }
}