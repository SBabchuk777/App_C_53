using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.Challenge
{
    public class ChallengeButton : MonoBehaviour
    {
        [SerializeField] private Button active;
        [SerializeField] private GameObject inactive;
        
        [SerializeField] private Slider progressBar;
        [SerializeField] private Text progressBarText;
        
        [SerializeField] private Text timerText;
        

        public void SetProgressBar(float value)
        {
            progressBarText.text = $"{value}%";
            progressBar.value = value/100;
        }

        public void SetTimerText(string value)
        {
            timerText.text = value;
        }

        public void SetActive()
        {
            inactive.SetActive(false);
            active.gameObject.SetActive(true);
        }

        public void SetInactive()
        {
            active.gameObject.SetActive(false);
            inactive.SetActive(true);
        }

        public void SetActiveButton(UnityAction call)
        {
            active.onClick.AddListener(call);
            active.interactable = true;
        }

        public void ResetButton()
        {
            active.onClick.RemoveAllListeners();
        }
    }
}