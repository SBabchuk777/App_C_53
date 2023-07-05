using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotsLine : MonoBehaviour
    {
        public Transform StartAnchore;

        public List<SlotSymbol> SlotSymbols { get; } = new();

        public SlotsLine CreateGroupLine(SlotFactory factory, IEnumerable<SlotSymbolLevelType> SlotsInGroup, float CreateStep)
        {
            var position = StartAnchore.transform.position;

            foreach (var id in SlotsInGroup)
            {
                var instance = factory.InstantiateSlotSymbol(id, position, transform);
                position = new Vector3(position.x, position.y + CreateStep, position.z);
                SlotSymbols.Add(instance);
            }

            return this;
        }
    }
}