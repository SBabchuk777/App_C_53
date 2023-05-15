using System;
using Game.Scripts.Runtime.Feature.Project.DI;

namespace Game.Scripts.Runtime.Feature.UIViews.Settings
{
    [Serializable]
    public class SettingsData : DataPayload
    {
        public bool IsSound;
        public bool IsMusic;

        public bool IsSliderActive;
        public float SoundVolumeCount;
        public float MusicVolumeCount;
    }
}