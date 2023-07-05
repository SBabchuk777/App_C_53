using System;
using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    [Serializable]
    public class NewBallChallengeSettings
    {
        [SerializeField] private List<Transform> StickPositions;
        [SerializeField] private List<Transform> NewBallChallengeHoopPositions;

        public int CountAnchor { get; set; }
        public int CountStrikeBall { get; set; }

        public Transform GetHoopPosition => NewBallChallengeHoopPositions[CountAnchor];
        public Transform GetStickPosition => StickPositions[CountAnchor];

        public void ResetForNewBall()
        {
            CountAnchor = 0;
        }

        public void ResetForTime()
        {
            
        }
    }
}