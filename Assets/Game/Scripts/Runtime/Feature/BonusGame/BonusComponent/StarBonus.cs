using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class StarBonus : BonusGameIcon, IPointerDownHandler
    {
        [Inject] private BankService bankService;
        [SerializeField] private TextMeshProUGUI addScoreTMP;
        
        public void OnPointerDown(PointerEventData eventData)
        {
            if (!isCanClick) 
                return;
            
            Hide();
            HideTMP();
            bankService.AddCoin(1);
        }

        private void HideTMP()
        {
            addScoreTMP.gameObject.SetActive(true);

            DOTween.Sequence()
                .Append(addScoreTMP.transform.DOMoveY(addScoreTMP.transform.position.y + 0.5f, 1f))
                .Join(DOTween.To(() => addScoreTMP.alpha, x => addScoreTMP.alpha = x, 0, 1f))
                .Play();
        }
    }
}