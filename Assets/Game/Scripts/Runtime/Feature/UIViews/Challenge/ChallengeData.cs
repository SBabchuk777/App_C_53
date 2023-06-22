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

        public int CountPlayGameInNewBall { get; set; }
        public int CountPlayGameInTime { get; set; }

        public override void InitializeDefault()
        {
            CountPlayGameInNewBall = 0;
            CountPlayGameInTime = 0;
        }
    }
}