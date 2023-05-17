using System;
using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Player
{
    [Serializable]
    public class PlayerProgressData : DataPayload
    {
        public int BestScore;
        public int CurrentIDBallSkin;

        public List<int> AvailableSkins;
    }
}