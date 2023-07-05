using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine.Data
{
    [CreateAssetMenu(menuName = "Slot Machine/Path/" + nameof(SlotSymbolPath), fileName = nameof(SlotSymbolPath))]
    public class SlotSymbolPath : ScriptableObject
    {
        public SerializableDictionary<SlotSymbolLevelType, SlotSymbol> PathMap;
    }
}