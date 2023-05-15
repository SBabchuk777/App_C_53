using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.Bank
{
    public class BankView : MonoBehaviour
    {
        public Text CoinText;
        public Text GemText;

        private BankService Bank => ProjectContext.Instance.GetDependence<BankService>();

        private void Start()
        {
            Subscribe();

            CoinChange(Bank.BankData.Coin);
            GemChange(Bank.BankData.Gem);
        }

        private void OnDisable()
        {
            Unsubscribe();
        }

        private void CoinChange(int value)
        {
            if (CoinText == null)
                return;
            
            CoinText.text = value.ToString();
        }

        private void GemChange(int value)
        {
            if (GemText == null)
                return;
            
            GemText.text = value.ToString();
        }

        private void Subscribe()
        {
            Bank.OnChangeCoin += CoinChange;
            Bank.OnChangeGem += GemChange;
        }

        private void Unsubscribe()
        {
            Bank.OnChangeCoin -= CoinChange;
            Bank.OnChangeGem -= GemChange;
        }
    }
}