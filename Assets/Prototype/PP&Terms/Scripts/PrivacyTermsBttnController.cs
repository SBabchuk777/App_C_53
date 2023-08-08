using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class PrivacyTermsBttnController : MonoBehaviour
{
    public string url;
    
    private Button bttn;
    
    private void Awake()
    {
        bttn = GetComponent<Button>();
            
        bttn.onClick.AddListener(() => WebviewShowPage.Instance.LoadUrl(url));
    }
}
