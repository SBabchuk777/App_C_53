using System;
using System.Threading.Tasks;
using Firebase.Extensions;
using UnityEngine;

public class FirebaseRemoteConfig : MonoBehaviour
{
	[SerializeField, Header("Test mode")] private bool _testMode;
	
	[Header("Print messages")]
	[SerializeField] private bool printDebugMessages;

	[SerializeField, Header("Settings")] private Settings _testSettings;
	[SerializeField] private Settings _iosSettings;
	[SerializeField] private Settings _androidSettings;
	
	private Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;

	private Action _callbackRemoveConfigInitalized;
	
	public void InitRemoveConfig(Action callback)
	{
		Debug.Log("@@@ FirebaseRemoteConfig -> InitRemoveConfig");
		
		Firebase.Analytics.FirebaseAnalytics.LogEvent("start_game_event", "start_game", 1);
		
		_callbackRemoveConfigInitalized = callback;
		
		Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task => {
			dependencyStatus = task.Result;
			if (dependencyStatus == Firebase.DependencyStatus.Available)
			{
				InitializeFirebase();

				FetchFirebase();
			}
			else
			{
				PrintDebugMessage($"@@@ FirebaseRemoteConfig -> dependencyStatus: {dependencyStatus}");
			}
		});
	}
	
	private void FetchFirebase()
	{
		FetchDataAsync();
	}

	private void InitializeFirebase()
	{
		var defaults = new System.Collections.Generic.Dictionary<string, object>();
		
		defaults.Add(GetFirebaseKey(), GetDefaultBinom());

		Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults);
	}

	public string GetURL()
	{
		return Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.GetValue(GetFirebaseKey()).StringValue;
	}
	
	public bool isUrlDefaultBinom(string url)
	{
		Debug.Log($"isUrlDefaultBinom {url} ?= {GetDefaultBinom()}");
		
		var domainUDefaultBinom = new Uri(GetDefaultBinom()).Host;
		
		var domainUrl = new Uri(url).Host;

		return string.CompareOrdinal(domainUrl, domainUDefaultBinom) == 0;
	}

	private string GetDefaultBinom()
	{
#if UNITY_IOS
		return _testMode? _testSettings.defaultBinom : _iosSettings.defaultBinom;
#elif UNITY_ANDROID
		return _testMode? _testSettings.defaultBinom : _androidSettings.defaultBinom;
#endif
		return _testSettings.defaultBinom;
	}
	
	private string GetFirebaseKey()
	{
#if UNITY_IOS
		return _testMode? _testSettings.firebaseKey : _iosSettings.firebaseKey;
#elif UNITY_ANDROID
		return _testMode? _testSettings.firebaseKey : _androidSettings.firebaseKey;
#endif
		return _testSettings.firebaseKey;
	}
	
    private Task FetchDataAsync()
	{
		var fetchTask = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(TimeSpan.Zero);
		
		return fetchTask.ContinueWithOnMainThread(FetchComplete);
	}

    private void FetchComplete(Task fetchTask)
	{
		if (fetchTask.IsCanceled)
		{
			PrintDebugMessage("Fetch canceled.");
		}
		else if (fetchTask.IsFaulted)
		{
			PrintDebugMessage("Fetch encountered an error.");
		}
		else if (fetchTask.IsCompleted)
		{
			PrintDebugMessage("Fetch completed successfully!");
		}

		var info = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.Info;
		
		switch (info.LastFetchStatus)
		{
			case Firebase.RemoteConfig.LastFetchStatus.Success:
				Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.ActivateAsync()
					.ContinueWithOnMainThread(task =>
					{
						PrintDebugMessage(String.Format("Remote data loaded and ready (last fetch time {0}).",
							info.FetchTime));

						_callbackRemoveConfigInitalized?.Invoke();
					});
				break;
			case Firebase.RemoteConfig.LastFetchStatus.Failure:
				switch (info.LastFetchFailureReason)
				{
					case Firebase.RemoteConfig.FetchFailureReason.Error:
						PrintDebugMessage("Fetch failed for unknown reason");
						break;
					case Firebase.RemoteConfig.FetchFailureReason.Throttled:
						PrintDebugMessage("Fetch throttled until " + info.ThrottledEndTime);
						break;
				}
				break;
			case Firebase.RemoteConfig.LastFetchStatus.Pending:
				PrintDebugMessage("Latest Fetch call still pending.");
				break;
		}
	}

    private void PrintDebugMessage(string message)
    {
	    if (printDebugMessages)
	    {
		    Debug.Log($"### FirebaseRemoteConfig -> message: {message}");
	    }
    }
}