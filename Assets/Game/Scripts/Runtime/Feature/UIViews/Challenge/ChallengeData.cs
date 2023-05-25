using System;
using Game.Scripts.Runtime.Feature.Project.DI;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    [Serializable]
    public class ChallengeData : DataPayload
    {
        public bool[] IsActiveButtons;

        public DateTime LastDateTime;

        public float[] CountLastTime;
    }
}