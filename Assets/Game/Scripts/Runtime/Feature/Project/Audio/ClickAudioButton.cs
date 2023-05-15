using Game.Scripts.Runtime.Feature.Project.DI;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.Project.Audio
{
    public class ClickAudioButton : MonoBehaviour
    {
        private ProjectAudioPlayer ProjectAudioPlayer => ProjectContext.Instance.GetDependence<ProjectAudioPlayer>();
        private Button Button => gameObject.GetComponent<Button>();

        private void Awake()
        {
            if (Button == null)
                return;
            
            Button.onClick.AddListener(() => ProjectAudioPlayer.PlayAudioClick());
        }
    }
}