namespace Game.Scripts.Runtime.Services.SaveLoadService
{
    public struct DataKey
    {
        public string Key => $"{Prefix}_{Name}";

        private string Prefix { get; } 
        private string Name { get; }

        public DataKey(string prefix, string name)
        {
            Prefix = prefix;
            Name = name;
        }
    }
}