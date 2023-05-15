namespace Game.Scripts.Runtime.Feature.SlotEngine.Bet
{
    public class BetData
    {
        public int MinBet;
        public int MaxBet;
        public int CountBet;
        
        public int StepBedBet;

        public BetData(int stepBed, int countMaxBet)
        {
            CountBet = stepBed;
            MaxBet = countMaxBet;
            MinBet = stepBed;
            StepBedBet = stepBed;
        }
    }
}