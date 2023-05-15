using System.Collections.Generic;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.AspectPresets.Data
{
    [CreateAssetMenu(fileName = "AspectsRangesData", menuName = "Game/Tools/AspectPresets/AspectsRangesData")]
    public class AspectsRangesData : ScriptableObject
    {
        [field: SerializeField] public List<AspectData> Aspects { get; private set; }
        [field: SerializeField] public List<AspectRatioType> TabletsGroup { get; private set; }
        [field: SerializeField] public List<AspectRatioType> PhonesGroup { get; private set; }
    }
}
