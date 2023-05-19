using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services;
using Game.Scripts.Runtime.Services.UIViewService;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Result
{
    public class ResultView : BaseView
    {
        [SerializeField] private Text scoreCountText;
        [SerializeField] private Text bestScoreText;
        
        [SerializeField] private Button closeButton;
        [SerializeField] private Button reloadButton;
        [SerializeField] private Button bonusButton;
        
        [SerializeField] private ImageFader fader;
        [SerializeField] private GameObject view;

        [Inject] private ResultController resultController;

        protected override void Subscribe()
        {
            reloadButton.onClick.AddListener(ClosePanelAfterReload);
        }

        protected override void Initialize()
        {
            ChangeScoreText(resultController.ScoreCount);
            ChangeBestScoreText(resultController.BestScoreCount);
        }

        protected override void Open()
        {
            view.transform.localScale = Vector3.up;
            
            fader.FadeTo(0.3f, () => view.transform
                .DOScaleX(1, 0.3f)
                .SetEase(Ease.OutBounce)
                .Play());
        }

        private void ClosePanelAfterReload()
        {
            view.transform
                .DOScaleX(0, 0.3f)
                .OnComplete(() => fader.FadeOut(0.3f, Close))
                .Play();
        }

        private void ChangeScoreText(int value)
        {
            if (scoreCountText != null)
            {
                scoreCountText.text = value.ToString();
            }
        }
        private void ChangeBestScoreText(int value)
        {
            if (bestScoreText != null)
            {
                bestScoreText.text = value.ToString();
            }
        }
    }
}