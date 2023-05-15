using System;
using Game.Scripts.Runtime.Feature.Project.DI;

namespace Game.Scripts.Runtime.Services.Bonus
{
    [Serializable]
    public class BonusData : DataPayload
    {
        public int Help { get; set; }
    }
}