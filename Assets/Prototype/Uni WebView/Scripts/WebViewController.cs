using System;
using DG.Tweening;
using Prototype.Logger;
using UnityEngine;
using UnityEngine.Events;

public class WebViewController : MonoBehaviour
{
    private const string AGREE_TERMS = "Agree_Terms";
 
    [SerializeField, Header("Remote Config")] private FirebaseRemoteConfig firebaseRemoteConfig;

    [SerializeField, Header("Reference RectTransform")] private RectTransform _referenceRectTransform;
    
    [SerializeField, Header("Reference RectTransform")] private RectTransform _referenceRectTransform2;

    [SerializeField, Header("Webview Background")] private GameObject _bgWebView;
    
    [SerializeField, Header("Button Agree Terms")] private GameObject _bttnAgreeTerms;
    
    [Space(10)]
    
    [SerializeField] private UnityEvent WebViewLoadingError;

    [SerializeField] private UnityEvent WebViewLoadingCompleted;
    
    [SerializeField] private UnityEvent DefaultBinomLoadingCompleted;

    private bool isOffer = false;
    
    private UniWebView _webView;

    private string urlBinom;

    private bool isVisible;
    
    public void Initialize()
    {
        DLogger.Log("@@@ WebView Initialize");
        
        if (_webView)
        {
            DLogger.Log("@@@ WebView Initialize -> LoadUrl");
            LoadUrl();
        }
        else
        {
#if UNITY_EDITOR
            DefaultBinomLoadingCompleted?.Invoke();
#else
                if (firebaseRemoteConfig != null)
                {
                    firebaseRemoteConfig.InitRemoveConfig(CheckUrl);
                }
                else
                {
                    DefaultBinomLoadingCompleted?.Invoke();
                }
#endif
        }
    }
    
    public void Back()
    {
        if(_webView)
        {
            _webView.GoBack();
        }
    }
    
    private void CheckUrl()
    {
        DLogger.Log("@@@ CheckUrl");
        
        urlBinom = firebaseRemoteConfig.GetURL();
        
        DLogger.Log($"@@@ urlBinom: {urlBinom}");
        
        if (String.IsNullOrEmpty(urlBinom))
        {
            DefaultBinomLoadingCompleted?.Invoke();

            return;
        }

        DLogger.Log("@@@ CheckUrl -> LoadUrl");
        LoadUrl();
    }

    private void CreateWebView()
    {
        var webViewGameObject = new GameObject("UniWebView");
        
        _webView = webViewGameObject.AddComponent<UniWebView>();
        
        _webView.BackgroundColor = Color.white;
        
        _webView.OnShouldClose += (view) => false;
    }

    private void SetRectWebView()
    {
        if(_referenceRectTransform)
        {
            _webView.ReferenceRectTransform = isOffer? _referenceRectTransform2 : _referenceRectTransform;
        }
        else
        {
            _webView.Frame = new Rect(0, 0, Screen.width, Screen.height);
        }
    }

    private void LoadUrl()
    {
        DLogger.Log($"@@@ LoadUrl:: _webView ?= null:{_webView == null}");
        if (_webView == null)
        {
            CreateWebView();
        }

        _webView.Load(urlBinom);
        
        _webView.OnPageFinished += OnPageFinished;
        _webView.OnPageErrorReceived += OnPageErrorReceived;
    }

    private void OnPageErrorReceived(UniWebView view, int statusCode, string url)
    {
        DLogger.Log(" ----- Hide WebView in WebView");
        HideWebView();
        
        _webView.OnPageFinished -= OnPageFinished;
        _webView.OnPageErrorReceived -= OnPageErrorReceived;
    }

    private void OnPageFinished(UniWebView view, int statusCode, string url)
    {
        DLogger.Log($"@@@ OnPageFinished: {url}");
        
        if(url != "about:blank")
        {
            urlBinom = _webView.Url;
        }
            
        if(firebaseRemoteConfig.isUrlDefaultBinom(url))
        {
            DLogger.Log($"@@@ isUrlDefaultBinom: {url}");
            CheckAgreeTerms();
        }
        else
        {
            DLogger.Log($"@@@ NO isUrlDefaultBinom: {url}");
            
            isOffer = true;
            
            ShowWebView();
        }
    }

    private void CheckAgreeTerms()
    {
        DLogger.Log($"@@@ HasKey: {PlayerPrefs.HasKey(AGREE_TERMS)}");
        if (PlayerPrefs.HasKey(AGREE_TERMS))
        {
            RemoveWebView();
        }
        else
        {
            isOffer = false;
            
            ShowWebView();
        }
    }
    
    public void SetAgreeTerms()
    {
        _bttnAgreeTerms.SetActive(false);
        
        RemoveWebView();
        
        PlayerPrefs.SetInt(AGREE_TERMS, 1);
        PlayerPrefs.Save();
    }

    private void RemoveWebView()
    {
        ShowBackgroundWebView(false);
        
        DefaultBinomLoadingCompleted?.Invoke();

        Destroy(_webView);
        
        _webView = null;
    }
    
    public void HideWebView()
    {
        if(_webView == null)
        {
            return;
        }
        
        if (!isVisible)
        {
            return;
        }

        isVisible = false;
        
        DLogger.Log(" --- Hided");

        ShowBackgroundWebView(false);

        _webView.Hide();
        
        WebViewLoadingError?.Invoke();
    }

    private void ShowWebView()
    {
        Debug.Log($"isOffer: {isOffer}");
        if(_webView == null)
        {
            return;
        }
        
        if (isVisible)
        {
            return;
        }

        isVisible = true;
        
        ShowBackgroundWebView(true);
        
        if(!isOffer)
            _bttnAgreeTerms.SetActive(!PlayerPrefs.HasKey(AGREE_TERMS));

        DOVirtual.DelayedCall(1, () =>
        {
            SetRectWebView();
        
            _webView.Show();
        
            WebViewLoadingCompleted?.Invoke();

            if(isOffer)
                EnableAutoRotation();
        });
    }
    
    private void ShowBackgroundWebView(bool value)
    {
        if(_bgWebView)
        {
            _bgWebView.SetActive(value);
        }
    }
    
    private void EnableAutoRotation()
    {
        Screen.autorotateToLandscapeLeft = true;
        Screen.autorotateToLandscapeRight = true;
        Screen.autorotateToPortrait = true;
        Screen.autorotateToPortraitUpsideDown = true;
        Screen.orientation = ScreenOrientation.AutoRotation;
    }
}
