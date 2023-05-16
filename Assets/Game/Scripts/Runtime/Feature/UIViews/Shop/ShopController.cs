using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.UIViews.Shop
{
    public class ShopController : MonoBehaviour
    {
        public SkinBallDataPath SkinData;

        public void Start()
        {
            Debug.Log(SkinData.PathMap[0].Count);
            Debug.Log(SkinData.PathMap[0].Skin);
        }
    }
}