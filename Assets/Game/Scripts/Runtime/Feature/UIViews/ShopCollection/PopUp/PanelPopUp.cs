using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.ShopCollection.PopUp
{
    public class PanelPopUp : MonoBehaviour
    {
        [SerializeField] private GameObject backlighting;
        [SerializeField] private Button buyButton;

        [SerializeField] private Image elementImage;

        private Tween backAnimation;
        public void SetIcon(Sprite sprite)
        {
            gameObject.SetActive(true);
            elementImage.sprite = sprite;
        }

        public void ActivateBuyButton(UnityAction call)
        {
            buyButton.gameObject.SetActive(true);
            buyButton.onClick.AddListener(call);
        }

        public void ActivateBacklighting()
        {
            backlighting.SetActive(true);
            
            backAnimation = backlighting.transform.DOLocalRotate(new Vector3(0, 0, 180), 20f)
                .SetEase(Ease.Linear)
                .Play();
        }

        private void OnDestroy() => 
            backAnimation?.Kill();
    }
}