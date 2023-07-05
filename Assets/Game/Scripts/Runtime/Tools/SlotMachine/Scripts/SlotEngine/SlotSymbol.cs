using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotSymbol : MonoBehaviour
    {
        public SlotSymbolLevelType SymbolID;
        public SlotSymbolPayType PaySymbolID;

        public SpriteRenderer spriteLight;
        public SpriteRenderer spriteSymbol;

        public void TurnOnLight()
        {
            if (spriteLight != null)
                spriteLight.gameObject.SetActive(true);
        }

        public void TurnOffLight()
        {
            if (spriteLight != null)
                spriteLight.gameObject.SetActive(false);
        }

        public void PlayWinAnimation(float timeAnimation, Action callback = null)
        {
            var localScale = spriteSymbol.transform.localScale;

            DOTween.Sequence()
                .Append(spriteSymbol.transform.DOScale(localScale + new Vector3(0.1f, 0.1f, 0), timeAnimation / 2))
                .Append(spriteSymbol.transform.DOScale(localScale - new Vector3(0.1f, 0.1f, 0), timeAnimation / 2))
                .OnComplete(() =>
                {
                    spriteSymbol.transform.localScale = localScale;
                    callback?.Invoke();
                })
                .Play();
        }
    }
}