using System;
using System.Collections.Generic;
using Game.Scripts.Runtime.Feature.Level;
using Game.Scripts.Runtime.Services.Bank;
using Game.Scripts.Runtime.Services.SaveLoadService;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    public class DataHub : MonoBehaviour, IProjectInitializable
    {
        private readonly Dictionary<string, DataPayload> allData = new Dictionary<string, DataPayload>();

        public DataDefault DataDefault;
        public LevelGameData LevelGameData { get; set; }
        private ISaveLoadService<DataKey> saveLoadService;

        [Inject] private BankService bankService;
        
        public void Initialize()
        {
            saveLoadService = new PlayerPrefsSaveLoadService();
            LevelGameData = new LevelGameData();
            
            InitializeDefaultData();
        }
        
        private void InitializeDefaultData()
        {
            if (PlayerPrefs.GetInt("IsFirstRun") == 1)
                return;
            
            foreach (var data in DataDefault.DatesMap())
            {
                data.Value.InitializeDefault();
                SaveData(data.Key, data.Value);
            }

            PlayerPrefs.SetInt("IsFirstRun", 1);
        }

        public void SaveData<T>(string key, T data) where T : DataPayload
        {
            saveLoadService.Save(new DataKey(key, "Data"), data);
            allData[key] = data;
        }

        public T LoadData<T>(string key) where T : DataPayload
        {
            if (allData.ContainsKey(key))
            {
                return (T)allData[key];
            }

            var loadedData = saveLoadService.Load<T>(new DataKey(key, "Data"));
            allData[key] = loadedData;
            return loadedData;
        }
        public T LoadData<T>(string key, T defaultData) where T : DataPayload
        {
            if (allData.ContainsKey(key))
            {
                return (T)allData[key];
            }

            var loadedData = saveLoadService.Load<T>(new DataKey(key, "Data"), defaultData);
            allData[key] = loadedData;
            return loadedData;
        }
    }
}