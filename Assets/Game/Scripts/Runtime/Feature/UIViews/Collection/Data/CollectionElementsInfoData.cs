using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.LastChance
{
    [CreateAssetMenu(menuName = "Game/Path/CollectionElementsInfoData", fileName = "CollectionElementsInfoData")]
    public class CollectionElementsInfoData : ScriptableObject
    {
        public SerializableDictionary<int, ElementInfo> RegularElementsMap;
        public SerializableDictionary<int, ElementInfo> RareElementsPathMap;

        public Sprite ActiveBackground;
        public Sprite ActiveRareBackground;
        public Sprite InactiveBackground;

        public Color ActiveOutlineColor;
        public Color ActiveRareOutlineColor;
        public Color InactiveOutlineColor;

        public float AllElementsCount => RegularElementsMap.Count + RareElementsPathMap.Count;
    }
}