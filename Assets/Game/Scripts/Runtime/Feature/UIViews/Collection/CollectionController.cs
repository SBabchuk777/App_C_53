using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.LastChance
{
    public class CollectionController : MonoBehaviour, IProjectInitializable
    {
        [SerializeField] private CollectionElementsInfoData collectionElementsInfoData;
        
        [Inject] private DataHub dataHub;
        private PlayerProgressData progressData;
        
        public List<ElementPanelInfo> RegularElementCollections { get; private set; }
        public List<ElementPanelInfo> RareElementCollections { get; private set; }

        public void Initialize()
        {
            progressData = dataHub.LoadData<PlayerProgressData>("Progress");
        }

        public void PrepareView()
        {
            RegularElementCollections = new List<ElementPanelInfo>();
            RareElementCollections = new List<ElementPanelInfo>();

            SetRegular();
            SetRare();
        }

        private void SetRare()
        {
            foreach (var info in collectionElementsInfoData.RareElementsPathMap)
            {
                var panelInfo = new ElementPanelInfo();

                if (progressData.AvailableRareColection.Contains(info.Key))
                {
                    panelInfo.Background = collectionElementsInfoData.ActiveRareBackground;
                    panelInfo.ColorOutline = collectionElementsInfoData.ActiveRareOutlineColor;
                    panelInfo.Element = info.Value.ActiveElementImage;
                }
                else
                {
                    panelInfo.Background = collectionElementsInfoData.InactiveBackground;
                    panelInfo.ColorOutline = collectionElementsInfoData.InactiveOutlineColor;
                    panelInfo.Element = info.Value.InactiveElementImage;
                }

                panelInfo.NameElement = info.Value.ElementText;

                RareElementCollections.Add(panelInfo);
            }
        }

        private void SetRegular()
        {
            foreach (var info in collectionElementsInfoData.RegularElementsMap)
            {
                var panelInfo = new ElementPanelInfo();

                if (progressData.AvailableRegularColection.Contains(info.Key))
                {
                    panelInfo.Background = collectionElementsInfoData.ActiveBackground;
                    panelInfo.ColorOutline = collectionElementsInfoData.ActiveOutlineColor;
                    panelInfo.Element = info.Value.ActiveElementImage;
                }
                else
                {
                    panelInfo.Background = collectionElementsInfoData.InactiveBackground;
                    panelInfo.ColorOutline = collectionElementsInfoData.InactiveOutlineColor;
                    panelInfo.Element = info.Value.InactiveElementImage;
                }

                panelInfo.NameElement = info.Value.ElementText;

                RegularElementCollections.Add(panelInfo);
            }
        }
    }
}