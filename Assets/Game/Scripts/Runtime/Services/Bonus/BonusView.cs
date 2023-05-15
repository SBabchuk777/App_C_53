using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Services.Bonus
{
    public class BonusView : MonoBehaviour
    {
        public Text HelpText;
        
        private BonusService BonusService => ProjectContext.Instance.GetDependence<BonusService>();

        private void Start()
        {
            Subscribe();

            CoinChange(BonusService.BonusData.Help);
        }

        private void OnDisable()
        {
            Unsubscribe();
        }

        private void CoinChange(int value)
        {
            if (HelpText == null)
                return;
            
            HelpText.text = value.ToString();
        }
        

        private void Subscribe()
        {
            BonusService.OnChangeBonus += CoinChange;
           
        }

        private void Unsubscribe()
        {
            BonusService.OnChangeBonus -= CoinChange;
        }
    }
}