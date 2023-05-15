using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    [CreateAssetMenu(menuName = "WeeleOfFortune/Path/" + nameof(WheelOfFortuneAudioPath), fileName = "WheelOfFortuneAudioPath", order = 0)]
    public class WheelOfFortuneAudioPath : ScriptableObject
    {
        public SerializableDictionary<string, AudioClip> AudioPathMap;
    }
}