using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class StarBonus : BonusGameIcon, IPointerDownHandler
    {
        [SerializeField] private TextMeshProUGUI addScoreTMP;
        
        [Inject] private BankService bankService;
        

        public void OnPointerDown(PointerEventData eventData)
        {
            if (!isCanClick) 
                return;
            
            Hide();
            HideTMP();
            bankService.AddCoin(1);
            audioPlayer.PlayAudioSfx(ProjectAudioType.ClickStar);
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