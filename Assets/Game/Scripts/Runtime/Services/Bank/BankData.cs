using System;
using Game.Scripts.Runtime.Feature.Project.DI;

namespace Game.Scripts.Runtime.Services.Bank
{
    [Serializable]
    public class BankData : DataPayload
    {
        public int Coin;
        public int Gem;
    }
}