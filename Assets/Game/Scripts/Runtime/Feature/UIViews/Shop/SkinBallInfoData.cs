using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    [CreateAssetMenu(menuName = "Game/Path/SkinBallInfoData", fileName = "SkinBallInfoData")]
    public class SkinBallInfoData : ScriptableObject
    {
        public SerializableDictionary<int, SkinInfo> PathMap;
    }
}