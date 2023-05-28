using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Level.GameField;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.BonusGame
{
    public class BonusGameIcon : MonoBehaviour
    {
        public Image iconImage;
        protected bool isCanClick;

        private void Start()
        {
            Show();
        }

        protected void Hide()
        {
            isCanClick = false;
            
            iconImage
                .DOFade(0, 0.2f).OnComplete(()=> { Destroy(gameObject, 1f); })
                .Play();
        }
        
        private void Show()
        {
            iconImage
                .DOFade(1, 0.3f).OnComplete(()=> { isCanClick = true; })
                .Play();
        }
    }
}