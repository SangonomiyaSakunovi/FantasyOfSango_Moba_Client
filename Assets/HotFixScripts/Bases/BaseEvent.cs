using SangoMobaNetProtocol;
using System.Text.Json;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public abstract class BaseEvent
{
    protected NetService _netService = null;
    protected ResourceService _resourceService = null;
    protected AudioService _audioService = null;

    [HideInInspector]
    public OperationCode NetOpCode;
    public abstract void OnEvent(SangoNetMessage sangoNetMessage);

    public virtual void InitEvent()
    {
        _netService = NetService.Instance;
        _netService.AddEvent(this);
        _resourceService = ResourceService.Instance;
        _audioService = AudioService.Instance;
    }

    protected virtual string SetJsonString(object ob)
    {
        string jsonString = JsonSerializer.Serialize(ob);
        return jsonString;
    }

    protected T_obj DeJsonString<T_obj>(string str)
    {
        T_obj obj = JsonSerializer.Deserialize<T_obj>(str);
        return obj;
    }
}
