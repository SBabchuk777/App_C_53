using System.Collections.Generic;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Shop;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.LastChance
{
    public class CollectionView : BaseView
    {
        [SerializeField] private Button closeButton;
        
        [SerializeField] private List<ElementCollection> regularElementCollections;
        [SerializeField] private List<ElementCollection> rareElementCollections;

        [Inject] private CollectionController collectionController;
        protected override void Subscribe()
        {
            closeButton.onClick.AddListener(ClosePanel);
        }

        protected override void Initialize()
        {
            for (var i = 0; i < collectionController.RegularElementCollections.Count; i++)
            {
                regularElementCollections[i].SetElement(collectionController.RegularElementCollections[i]);
            }
            for (var i = 0; i < collectionController.RareElementCollections.Count; i++)
            {
                rareElementCollections[i].SetElement(collectionController.RareElementCollections[i]);
            }
        }

        protected override void Open()
        {
            transform.localPosition = new Vector3(1080, 0, transform.localPosition.z);
            transform.DOLocalMoveX(0, 0.5f).SetEase(Ease.OutBounce).Play();
        }

        protected override void Unsubscribe()
        {
            closeButton.onClick.RemoveAllListeners();
        }

        public void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
    }
}