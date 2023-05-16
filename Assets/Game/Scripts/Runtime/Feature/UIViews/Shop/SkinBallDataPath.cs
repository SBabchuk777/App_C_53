using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    [CreateAssetMenu(menuName = "Game/Path/SkinBallDataPath", fileName = "SkinBallDataPath")]
    public class SkinBallDataPath : ScriptableObject
    {
        public SerializableDictionary<int, SkinInfo> PathMap;
    }
}