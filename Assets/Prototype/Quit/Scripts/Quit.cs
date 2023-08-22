using System.Collections;
using UnityEngine;
using UnityEngine.Events;

namespace Prototype.Quit
{
    public class Quit : MonoBehaviour
    {
        [SerializeField] private UnityEvent OnClickButtonBack;

        private bool clickedBefore;

        private const float timerTime = 0.5f;
        
        private Coroutine quittingCoroutine;

        private void Update()
        {
            if (!Input.GetKeyDown(KeyCode.Escape) || clickedBefore)
            {
                return;
            }
            
            clickedBefore = true;

            OnClickButtonBack?.Invoke();
            
            if (quittingCoroutine != null)
                StopCoroutine(quittingCoroutine);

            quittingCoroutine = StartCoroutine(QuittingTimer());
        }

        private IEnumerator QuittingTimer()
        {
            yield return null;

            float counter = 0;

            while (counter < timerTime)
            {
                counter += Time.deltaTime;

                if (Input.GetKeyDown(KeyCode.Escape))
                {
                    Exit();
                    yield break;
                }

                yield return null;
            }

            clickedBefore = false;
        }

        private void Exit()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit(); //System.Diagnostics.Process.GetCurrentProcess().Kill();
#endif
        }
    }
}