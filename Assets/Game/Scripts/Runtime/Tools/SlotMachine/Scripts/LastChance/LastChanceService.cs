using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.SlotEngine;
using Game.Scripts.Runtime.Feature.SlotEngine.Bet;
using Game.Scripts.Runtime.Feature.UIViews.Win;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.Bonus;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.LastChance
{
    public class LastChanceService : MonoBehaviour
    {
        public SlotHandler SlotHandler;
        
        [Inject] private BankService bankService;
        [Inject] private BonusService bonusService;

        public event Action OnAddCoin;
        public event Action OnAddBonus;

        private bool isSpin;

        private void OnEnable()
        {
            SlotHandler.WinStatus.OnFinishAnimation += NotifyFinishSpin;
        }

        private void NotifyFinishSpin(float value)
        {
            if (value == 1)
            {
                bonusService.AddHelp(2);
                OnAddBonus?.Invoke();
            }

            if (value == 50)
            {
                bankService.AddCoin(50);
                OnAddCoin?.Invoke();
            }

            if (value == 5)
            {
                
            }

            SlotHandler.NotifyFinishSpin();
            GetComponent<BaseView>().Close();
        }

        public void Start()
        {
            SlotHandler.CreateSlotMachine(new BetData(1, 1));
        }

        public void Spin()
        {
            if (isSpin)
                return;

            SlotHandler.NotifyStartSpin();
            isSpin = true;
        }
    }
}