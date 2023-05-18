using System;
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
    }
}