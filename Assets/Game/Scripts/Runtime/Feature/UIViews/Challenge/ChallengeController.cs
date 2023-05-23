using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Collection;
using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    public class ChallengeController : MonoBehaviour,IProjectInitializable
    {
        [SerializeField] private CollectionElementsInfoData collectionElementsInfoData;
        [Inject] private CollectionController collectionController;
        [Inject] private UIViewService uiViewService;
        [Inject] private DataHub dataHub;
        
        public void OpenCollectionView()
        {
            collectionController.PrepareView();
            uiViewService.Instantiate(UIViewType.Collection);
        }

        public int GetProgressValueCollectButton()
        {
            var progressData = dataHub.LoadData<PlayerProgressData>("Progress");
            float allAvailableCount = progressData.AvailableRareColection.Count + progressData.AvailableRegularColection.Count;
            var value = allAvailableCount / collectionElementsInfoData.AllElementsCount * 100;
            
            return Mathf.FloorToInt(value);
        }

        public void Initialize()
        {
            
        }
    }
}