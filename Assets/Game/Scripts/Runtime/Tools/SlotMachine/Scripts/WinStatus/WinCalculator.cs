using System;
using System.Collections.Generic;
using System.Linq;
using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Feature.SlotEngine.Bet;
using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine.WinStatus
{
    public class WinCalculator : MonoBehaviour
    {
        private readonly Dictionary<List<SlotSymbolPayType>, float> PayTableMap = new();

        public SlotHandler SlotHandler;
        public WinAnimator WinAnimator;

        public LineRaycaster LineRaycaster;
        public LevelPayInfo LevelPayInfo;
        
        public BetData BetData { get; private set; }

        public event Action<float> OnFinishAnimation;

        public void Init(BetData betData)
        {
            this.BetData = betData;

            SlotHandler.OnStopSpin += Calculate;
            PrepareLevelPayInfo();
        }

        private void PrepareLevelPayInfo()
        {
            foreach (var pair in LevelPayInfo.PayTableMap)
            {
                var list = new List<SlotSymbolPayType>
                {
                    pair.Key.symbolLevelType1,
                    pair.Key.symbolLevelType2,
                    pair.Key.symbolLevelType3,
                    pair.Key.symbolLevelType4,
                    pair.Key.symbolLevelType5
                };
                var filteredList = list
                    .Where(s => s != SlotSymbolPayType.Undefined)
                    .ToList();

                PayTableMap.Add(filteredList, pair.Value);
            }
        }

        private void Calculate()
        {
            var takenSymbol = CheckAllLine();
            if (takenSymbol.Count == 0)
            {
                OnFinishAnimation?.Invoke(0);
                return;
            }

            var winAnimationsList = new List<Tuple<List<SlotSymbol>, LineGroup>>();
            var countWin = 0f;

            foreach (var symbols in takenSymbol)
            {
                var symbolsToType = symbols.Value.Select(s => s.PaySymbolID).ToList();

                if (PayTableMap.Keys.Any(x => x.SequenceEqual(symbolsToType)))
                {
                    var matchedKey = PayTableMap.Keys.FirstOrDefault(x => x.SequenceEqual(symbolsToType));
                    if (matchedKey != null)
                    {
                        countWin += BetData.CountBet * PayTableMap[matchedKey];
                        winAnimationsList.Add(Tuple.Create(new List<SlotSymbol>(symbols.Value), symbols.Key));
                    }
                }
            }

            WinAnimator.PlayWinAnimation(winAnimationsList, 
                () => OnFinishAnimation?.Invoke(countWin),
                SlotHandler.AudioPlayer.PlayAudioWinSpin);
        }


        private Dictionary<LineGroup, List<SlotSymbol>> CheckAllLine()
        {
            var winLine = new Dictionary<LineGroup, List<SlotSymbol>>();

            foreach (var lineGroup in LineRaycaster.Lines)
            {
                var lastSymbol = SlotSymbolLevelType.All;
                var takenSymbols = new List<SlotSymbol>();
                var isNotFirst = false;

                foreach (var caster in lineGroup.RayCasters)
                {
                    var symbol = caster.GetSymbol();

                    if (lastSymbol != symbol.SymbolID && isNotFirst)
                        break;

                    isNotFirst = true;
                    lastSymbol = symbol.SymbolID;

                    takenSymbols.Add(symbol);
                }

                if (takenSymbols.Count < 2)
                    continue;

                winLine.Add(lineGroup, takenSymbols);
            }

            return winLine;
        }
    }
}