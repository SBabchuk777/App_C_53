using System;
using System.Collections.Generic;
using System.Linq;
using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotGroup : MonoBehaviour
    {
        public List<SlotsLine> Lines;
        public float CreateStep;

        public List<SlotSymbolLevelType> SlotsInGroup;
        public List<SlotLineMover> LineMovers;
        
        public Transform StopAnchor;

        private SlotFactory factory;
        
        private float moveSpeed;
        private float increaseRate;
        private bool isMove;
        private int countCheck;
        
        private float StepForNextLine
            =>  CreateStep * SlotsInGroup.Count;

        public event Action OnStopGroup;
        
        public void Init(SlotSymbolPath slotSymbolPath, SlotControllerSettings settings)
        {
            moveSpeed = settings.MoveSpeed;
            increaseRate = settings.StepIncreaseRate;
            
            InitFactory(slotSymbolPath);
            CreateLine();
        }

        public void MoveGroup() => 
            isMove = true;

        public void StopGroup()
        {
            isMove = false;
            MoveToCell();
        }

        private void CreateLine()
        {
            var createPosition = Vector3.zero;

            foreach (var line in Lines)
            {
                line.CreateGroupLine(factory, SlotsInGroup, CreateStep);
                line.transform.SetPositionAndRotation(line.transform.position + createPosition, Quaternion.identity);
                createPosition += new Vector3(0, StepForNextLine, 0);
            }
        }

        private void FixedUpdate()
        {
            if (!isMove)
                return;
            
            foreach (var mover in LineMovers)
            {
                mover.Move(moveSpeed, increaseRate);

                if (mover.transform.position.y <= -StepForNextLine)
                {
                    var linePosition = mover.transform.position;
                    mover.transform.position = new Vector3(linePosition.x, StepForNextLine, linePosition.z);
                }
            }
        }

        private void MoveToCell()
        {
            var slotsSymbol = new List<SlotSymbol>();

            foreach (var line in Lines) 
                slotsSymbol.AddRange(line.SlotSymbols);
            
            var nearestSlotSymbol = slotsSymbol
                .Where(s => s.transform.position.y - StopAnchor.position.y < 0)
                .OrderBy(s => Vector3.Distance(s.transform.position, StopAnchor.position))
                .First();

            FitLineGroup();

            foreach (var mover in LineMovers)
                mover.MoveTo(Vector3.Distance(nearestSlotSymbol.transform.position, StopAnchor.position), CheckOnStop);

        }

        private void FitLineGroup()
        {
            var a = LineMovers.First(l => l.transform.position.y > 0);
            var b = LineMovers.First(l => l.transform.position.y < 0);

            a.transform.position = b.transform.position + new Vector3(0, StepForNextLine, 0);
        }

        private void CheckOnStop()
        {
            
            if (countCheck++ < LineMovers.Count-1)
                return;
            countCheck = 0;
            
            OnStopGroup?.Invoke();
        }

        private void InitFactory(SlotSymbolPath slotSymbolPath)
        {
            factory = new SlotFactory();
            factory.Init(slotSymbolPath);
        }
    }
}