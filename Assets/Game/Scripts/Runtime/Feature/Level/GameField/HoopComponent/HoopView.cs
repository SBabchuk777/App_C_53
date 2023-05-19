using DG.Tweening;
using TMPro;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField.HoopComponent
{
    public class HoopView : MonoBehaviour
    {
        [SerializeField] private TextMeshPro addScoreTMP;
        [SerializeField] private TextMeshPro multiplayerScoreTMP;
        
        [SerializeField] private GameStatusHandler gameStatusHandler;

        private Vector3 startPositionAddScore;
        private void Awake()
        {
            gameStatusHandler.OnAddScore += ActivateAddScore;
            gameStatusHandler.OnChangeMultiplayerScore += ActivateMultiplierScore;
            startPositionAddScore = addScoreTMP.transform.position;
        }

        private void ActivateAddScore(int value)
        {
            addScoreTMP.text = $"+{value}";
            addScoreTMP.gameObject.SetActive(true);

            DOTween.Sequence()
                .Append(addScoreTMP.transform.DOLocalMoveY(addScoreTMP.transform.position.y + 0.3f, 1f))
                .Join(DOTween.To(() => addScoreTMP.alpha, x => addScoreTMP.alpha = x, 0, 1f))
                .AppendCallback(() =>
                {
                    addScoreTMP.gameObject.SetActive(false);
                    addScoreTMP.alpha = 1;
                    addScoreTMP.transform.position = startPositionAddScore;
                })
                .Play();
        }

        private void ActivateMultiplierScore(int value)
        {
            if (value == 1)
            {
                multiplayerScoreTMP.gameObject.SetActive(false);
            }
            else
            {
                multiplayerScoreTMP.text = $"x{value}";
                multiplayerScoreTMP.gameObject.SetActive(true);

                var localScale = multiplayerScoreTMP.transform.localScale;
                var offset = new Vector3(0.1f,0.1f, localScale.z);
                
                DOTween.Sequence()
                    .Append(multiplayerScoreTMP.transform.DOScale(localScale + offset, 0.2f))
                    .Append(multiplayerScoreTMP.transform.DOScale(localScale - offset, 0.2f))
                    .OnComplete(()=> localScale = Vector3.one);
            }
        }
    }
}