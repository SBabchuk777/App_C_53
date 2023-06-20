using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.ShopCollection.PopUp
{
    public class PanelPopUp : MonoBehaviour
    {
        [SerializeField] private GameObject _backlighting;
        [SerializeField] private Transform _starInfo;

        [SerializeField] private Image _elementImage;

        private Tween backAnimation;
        public void SetIcon(Sprite sprite)
        {
            gameObject.SetActive(true);
            _elementImage.sprite = sprite;
        }

        public void ActivateBuyButton()
        {
            _starInfo.gameObject.SetActive(true);
        }

        public void ActivateBacklighting()
        {
            _backlighting.SetActive(true);
            
            backAnimation = _backlighting.transform.DOLocalRotate(new Vector3(0, 0, 180), 20f)
                .SetEase(Ease.Linear)
                .Play();
        }

        private void OnDestroy() => 
            backAnimation?.Kill();
    }
}