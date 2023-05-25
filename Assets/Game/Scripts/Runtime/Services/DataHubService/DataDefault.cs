using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Player;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Feature.UIViews.Settings;
using Game.Scripts.Runtime.Services.Bank;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    [CreateAssetMenu(menuName = "Core/Services/DataHub", fileName = "DataDefault")]
    public class DataDefault : ScriptableObject
    {
        public BankData Bank;
        public SettingsData Settings;
        public PlayerProgressData Progress;
        public ChallengeData Challenge;

        public Dictionary<string, DataPayload> DatesMap()
        {
            var datesMap = new Dictionary<string, DataPayload>();

            datesMap.Add("Bank", Bank);
            datesMap.Add("Settings", Settings);
            datesMap.Add("Progress", Progress);
            datesMap.Add("Challenge", Challenge);
            
            return datesMap;
        }
    }
}