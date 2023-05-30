using Game.Scripts.Runtime.Feature.Project.Audio;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class BallBonus : BonusGameIcon, IPointerDownHandler
    {
        public void OnPointerDown(PointerEventData eventData)
        {
            if (isCanClick)
            {
                Hide();
                audioPlayer.PlayAudioSfx(ProjectAudioType.ClickBall);
            }
        }
        
        public void SetIcon(Sprite sprite)
        {
            iconImage.sprite = sprite;
        }
    }
}