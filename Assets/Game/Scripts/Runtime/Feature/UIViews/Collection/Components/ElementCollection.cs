using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews.LastChance
{
    public class ElementCollection : MonoBehaviour
    {
        [SerializeField] private Image backgroundImage;
        [SerializeField] private Image elementImage;
        
        [SerializeField] private Text elementText;
        [SerializeField] private Outline elementTextOutline;

        public void SetElement(ElementPanelInfo panelInfo)
        {
            backgroundImage.sprite = panelInfo.Background;
            elementImage.sprite = panelInfo.Element;
            elementText.text = panelInfo.NameElement;
            elementTextOutline.effectColor = panelInfo.ColorOutline;
        }
    }
}