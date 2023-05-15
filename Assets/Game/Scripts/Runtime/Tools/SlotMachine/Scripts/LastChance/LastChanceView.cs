using Game.Scripts.Runtime.Feature.UIViews.LastChance;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Tools.SlotMachine.Scripts.LastChance
{
    public class LastChanceView : MonoBehaviour
    {
        public LastChanceService Service;
        public GameObject BonusPanel;
        public GameObject CoinPanel;

        public Button SpinButton;

        private void Awake()
        {
            Service.OnAddBonus += ActiveBonusPanel;
            Service.OnAddCoin += ActiveCoinPanel;
            
            SpinButton.onClick.AddListener(Service.Spin);
        }

        private void OnDestroy()
        {
            Service.OnAddBonus -= ActiveBonusPanel;
            Service.OnAddCoin -= ActiveCoinPanel;
            
            SpinButton.onClick.RemoveAllListeners();
        }

        private void ActiveBonusPanel() => BonusPanel.SetActive(true);

        private void ActiveCoinPanel() => CoinPanel.SetActive(true);
    }
}