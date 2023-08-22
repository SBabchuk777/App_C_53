using UnityEngine;
using Prototype.SceneLoaderCore.Helpers;
using UnityEngine.UI;

namespace Prototype.Preloader
{
	public class HorizontalLoadingProgress : MonoBehaviour
	{
		[SerializeField] private Slider progress;

		private void Start()
		{
			progress.value = 0.0f;
		}

		private void Update()
		{
			if (progress.value < 0.9f) progress.value += 0.8f * Time.deltaTime;
		}

		public void StopLoading(bool webViewIsLoaded)
		{
			if(!webViewIsLoaded)
			{
				SceneLoader.Instance.SwitchToScene(SceneLoader.Instance.mainScene);
			}
			else
			{
				Screen.autorotateToLandscapeLeft = true;
				Screen.autorotateToLandscapeRight = true;
				Screen.orientation = ScreenOrientation.AutoRotation;
			}
		}
	}
}