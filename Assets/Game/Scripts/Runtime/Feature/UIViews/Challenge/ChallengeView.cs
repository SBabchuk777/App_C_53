using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    public class ChallengeView : BaseView
    {
        [SerializeField] private Button closeButton;
        [SerializeField] private ChallengeButton collectionButton;
        
        
        [Inject] private ChallengeController challengeController;
        protected override void Subscribe()
        {
            closeButton.onClick.AddListener(ClosePanel);
            collectionButton.SetActiveButton(challengeController.OpenCollectionView);
        }

        protected override void Initialize()
        {
            collectionButton.SetProgressBar(challengeController.GetProgressValueCollectButton());
        }

        protected override void Open()
        {
            transform.localPosition = new Vector3(1080, 0, transform.localPosition.z);
            transform.DOLocalMoveX(0, 0.5f).SetEase(Ease.OutBounce).Play();
        }

        protected override void Unsubscribe()
        {
            closeButton.onClick.RemoveAllListeners();
            collectionButton.ResetButton();
        }

        private void ClosePanel()
        {
            transform.DOLocalMoveX(-1080, 0.5f).Play().OnComplete(Close);
        }
    }
}