using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine.Audio
{
    [CreateAssetMenu(menuName = "Slot Machine/Path/" + nameof(SlotAudioPath), fileName = "SlotAudioPath", order = 0)]
    public class SlotAudioPath : ScriptableObject
    {
        public SerializableDictionary<string, AudioClip> SlotAudioPathMap;
    }
}