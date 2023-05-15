using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotFactory
    {
        private SlotSymbolPath slotsSymbolMap;

        public void Init(SlotSymbolPath slotsSymbolMap) => 
            this.slotsSymbolMap = slotsSymbolMap;

        public SlotSymbol InstantiateSlotSymbol(SlotSymbolLevelType idSymbolLevel, Vector3 position, Transform parent)
        {
            return GameObject.Instantiate(slotsSymbolMap.PathMap[idSymbolLevel], position, Quaternion.identity, parent);
        }
    }
}