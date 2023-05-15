using System;
using System.Linq;
using Game.Scripts.Runtime.Tools.AspectPresets.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.AspectPresets
{
    public class AspectRatioCalculator
    {
        private AspectsRangesData aspectsRangesData;

        public AspectRatioCalculator(AspectsRangesData aspectsRangesData) => 
            this.aspectsRangesData = aspectsRangesData;

        public AspectRatioType GetAspectRatio()
        {
            var deviceAspect = (float)Screen.width/ Screen.height;

            var aspectType = aspectsRangesData.Aspects
                .OrderBy(x => Math.Abs(x.Aspect - deviceAspect))
                .First()
                .AspectType;

            return aspectType;
        }
    }
}