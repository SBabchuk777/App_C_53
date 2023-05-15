using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.SaveLoadService;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.Bonus
{
    public class BonusService : MonoBehaviour, IProjectInitializable
    {
        public BonusData BonusData { get; set; }

        public event Action<int> OnChangeBonus;
        
        [Inject] private DataHub dataHub;

        public void Initialize() => 
            BonusData = dataHub.LoadData<BonusData>("Bonus", new BonusData());

        public bool IsEnoughHelps(int value) =>
            BonusData.Help >= value;
    
        public void AddHelp(int value)
        {
            BonusData.Help += value;
            SaveData();

            OnChangeBonus?.Invoke(BonusData.Help);
        }
    
        public void SpendHelp(int value)
        {
            if (!IsEnoughHelps(value))
                return;

            BonusData.Help -= value;
            SaveData();

            OnChangeBonus?.Invoke(BonusData.Help);
        }
    
        private void SaveData() =>
            dataHub.SaveData("Bonus", BonusData);
    }
}