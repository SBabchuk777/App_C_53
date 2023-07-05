using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.SaveLoadService;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.Bank
{
    public class BankService : MonoBehaviour, IProjectInitializable
    {
        public BankData BankData { get; private set; }
        [Inject] private  DataHub dataHub;

        public event Action<int> OnChangeCoin;
        public event Action<int> OnChangeGem;

        public void Initialize() =>
            BankData = dataHub.LoadData<BankData>("Bank");
        
        public bool IsEnoughCoins(int value) =>
            BankData.Coin >= value;

        public bool IsEnoughGem(int value) =>
            BankData.Gem >= value;

        public void AddCoin(int value)
        {
            BankData.Coin += value;
            SaveData();

            Debug.Log("add coins: " + value);
            OnChangeCoin?.Invoke(BankData.Coin);
        }

        public void AddGem(int value)
        {
            BankData.Gem += value;
            SaveData();

            OnChangeGem?.Invoke(BankData.Gem);
        }
        
        public void SpendCoins(int value)
        {
            if (!IsEnoughCoins(value))
                return;

            BankData.Coin -= value;
            SaveData();

            OnChangeCoin?.Invoke(BankData.Coin);
        }

        public void SpendGem(int value)
        {
            if (!IsEnoughGem(value))
                return;

            BankData.Gem -= value;
            SaveData();

            OnChangeGem?.Invoke(BankData.Gem);
        }
        
        private void SaveData() =>
            dataHub.SaveData("Bank", BankData);
    }
}