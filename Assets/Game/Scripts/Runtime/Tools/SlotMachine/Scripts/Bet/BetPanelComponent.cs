using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.Lobby;
using Game.Scripts.Runtime.Feature.Project;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine.Bet
{
    public class BetPanelComponent : MonoBehaviour
    {
        private BetData BetData => SlotHandler.WinStatus.BetData;
        public SlotHandler SlotHandler;

        private BankService bank => ProjectContext.Instance.GetDependence<BankService>();

        public void AddBet(int value)
        {
            if (SlotHandler.IsSpin)
                return;

            var newCountBet = BetData.CountBet + BetData.StepBedBet * value;

            if (newCountBet < BetData.MinBet)
                BetData.CountBet = BetData.MinBet;
            else
                BetData.CountBet = newCountBet > BetData.MaxBet ? BetData.MaxBet : newCountBet;

            //notify change Bet
        }
    }
}