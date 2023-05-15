using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine.Data
{
    [CreateAssetMenu(menuName = "Slot Machine/Path/" + nameof(LevelPayInfo), fileName = nameof(LevelPayInfo))]
    public class LevelPayInfo : ScriptableObject
    {
        public SerializableDictionary<LineCombination, float> PayTableMap;
    }
}