using System;
using System.Collections.Generic;
using Prototype.MagicApps_Client;
using Prototype.Nointernet;
using Prototype.VerifyInternet;
using UnityEngine;

public class WebViewController : MonoBehaviour
{
    [SerializeField, Header("Reference RectTransform")] private RectTransform _referenceRectTransform;
    
    private UniWebView _webView;

    private string _url;
    
    private bool _isVisible;

    [SerializeField] private List<string> _hosts = new List<string>()
    { "t.me", "instagram.com", "facebook.com", "viber.com" };


    private string UrlBinom
    {
        get
        {
            if(!GameSettings.HasKey(Constants.IsFirstRunWebView))
            {
                GameSettings.SetFirstWebView();
                
                return GameSettings.GetParam(Constants.StartUrl, "");
            }
            else
            {
                return GameSettings.GetParam(Constants.StartNoRestore, "true") == "true"? 
                    GameSettings.GetParam(Constants.StartUrl, "")
                    : GameSettings.GetParam(Constants.LastUrl, "");
            }
        }

        set
        {
            GameSettings.SetParam(Constants.LastUrl, value);
        }
    }
    
    private void Start()
    {
        Initialize();
    }

    private void OnInitialize(bool? isConnection)
    {
        Log("### OnInitialize");
        
        Initialize(isConnection);
    }

    private void Initialize()
    {
        Log("### Initialize Webview");

        LoadUrl();
    }

    private void Initialize(bool? isConnection)
    {
        if (isConnection != true) return;
        
        if(ConnectivityManager.Instance)
            ConnectivityManager.Instance.OnChangedInternetConnection.AddListener(OnInitialize);
            
        Initialize();
    }
    
    private void LoadUrl()
    {
        Log($"LoadUrl: _webView = {_webView}");

        if (_webView == null) CreateWebView();
        
        _webView.Load(_url);

        _webView.OnPageErrorReceived += OnPageErrorReceived;

        _webView.OnPageFinished += OnPageFinished;
        
        _webView.OnPageStarted += OnPageStarted;
    }
    
    private void CreateWebView()
    {
        Log("### Create WebView");
        
        Log("+++++++++++++ Urls +++++++++++++");
        Log($"StartNoRestore :{GameSettings.GetParam(Constants.StartNoRestore, "true")}");
        Log($"StartUrl :{GameSettings.GetParam(Constants.StartUrl, "")}");
        Log($"LastUrl :{GameSettings.GetParam(Constants.LastUrl, "")}");
        Log($"Binom :{GameSettings.GetParam(Constants.Binom, "")}");
        Log("------------- Urls -------------");
        
        _url = UrlBinom;

        var webViewGameObject = new GameObject("UniWebView");
        
        _webView = webViewGameObject.AddComponent<UniWebView>();

        //code is necessary to preventWebView from closing when the back button is pressed
        _webView.OnShouldClose += (view) =>
        {
            if (GameSettings.GetParam(Constants.LastUrl) != GameSettings.GetParam(Constants.StartUrl))
                _webView.Load(GameSettings.GetParam(Constants.StartUrl));
            else
                _webView.Reload();

            return false;
        }; 

        if(_referenceRectTransform)
            _webView.ReferenceRectTransform = _referenceRectTransform;
        else
            _webView.Frame = new Rect(0, 0, Screen.width, Screen.height);
    }
    
    private void OnPageErrorReceived(UniWebView view, int statusCode, string url)
    {
        Log($"### OnPageErrorReceived:  url={url} statusCode={statusCode}");

        switch (statusCode)
        {
            case -10:
            case -1202:
                return;
        }

        _webView.OnPageErrorReceived -= OnPageErrorReceived;
        
       _webView.OnPageFinished -= OnPageFinished;
            
       HideWebView();
    }
    
    private void OnPageStarted(UniWebView view, string url)
    {
        Log($"### OnPageStarted UniWebView: url={url} / _webView.Url={_webView.Url}");

        if (HandleURL(url))
        {
            Log($"GoToOtherApp UrlBinom={UrlBinom}");
            _webView.Load(UrlBinom);
        }
    }

    private void OnPageFinished(UniWebView view, int statusCode, string url)
    {
        if (IsOpeningOtherApp) return;
        
        Log($"### OnPageFinished: url={url} / _webView.Url={_webView.Url}");
        
        GameSettings.CheckBinom(url);

        if(url != "about:blank")
        {
            _url = url;

            UrlBinom = url;
        }
            
        ShowWebView();
    }
    
    public void Back()
    {
        if (!_webView) return;

        if (_webView.CanGoBack)
        {
            Log("^^^^ GoBack");

            _webView.GoBack();
        }
        else
        {
            Log("^^^^ Remove");

            Log($"{GameSettings.GetParam(Constants.LastUrl)} ?= {GameSettings.GetParam(Constants.StartUrl)}");

            if (GameSettings.GetParam(Constants.LastUrl) != GameSettings.GetParam(Constants.StartUrl))
            {
                Log("Не рівні стартова і остання");
                _webView.Load(GameSettings.GetParam(Constants.StartUrl));
            }
            else
            {
                Log("Рівні стартова і остання");
                _webView.Reload();
            }
        }
    }

    private void HideWebView()
    {
        Log("### Hide Webview");
        
        if(_webView == null) return;
        
        if (!_isVisible) return;

        _isVisible = false;
        
        _webView.Hide();
        
        //NoInternet.Instance.Show();
        
        if(ConnectivityManager.Instance)
            ConnectivityManager.Instance.CheckErrorReceived();
        
        if(ConnectivityManager.Instance)
            ConnectivityManager.Instance.OnChangedInternetConnection.AddListener(Initialize);
    }

    private void ShowWebView()
    {
        Log("### Show Webview: urlBinom="+UrlBinom);
        Log($"### _webView: {_webView} // _isVisible: {_isVisible}");
        
        if(_webView == null) return;
        
        if (_isVisible) return;

        _isVisible = true;
        
        _webView.Show();
    }

    private bool _isOpeningOtherApp;

    private bool IsOpeningOtherApp
    {
        get => _isOpeningOtherApp;
        set { Log($"_isOpeningOtherApp={value}");
            _isOpeningOtherApp = value;
        }
    }
    private bool HandleURL(string url)
    {
        var uri = new Uri(url);
        var scheme = uri.Scheme.ToLower();
        var host = uri.Host.ToLower();

        Log($"@@@ scheme={scheme} | url={url}");
        Log($"@@@ host={host} | url={url}");
        
        //if (scheme != "http" && scheme != "https") 
        if (_hosts.Contains(host) && (scheme == "http" || scheme == "https"))
        {
            OpenApplication(url);

            IsOpeningOtherApp = true;
        }
        else
        {
            IsOpeningOtherApp = false;
        }

        return IsOpeningOtherApp;
    }
    
    private void OpenApplication(string url)
    {
        Application.OpenURL(url);
    }
    
    [SerializeField] private bool _isLogging;
    private void Log(string message)
    {
        if(_isLogging)
            Debug.Log(message);
    }
}
