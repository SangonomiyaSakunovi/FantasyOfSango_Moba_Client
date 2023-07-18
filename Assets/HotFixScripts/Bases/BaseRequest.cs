using SangoMobaNetProtocol;
using System.Text.Json;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public abstract class BaseRequest
{
    protected NetService _netService;
    protected ResourceService _resourceService;
    protected AudioService _audioService;
    protected ClientPeer _clientPeer;

    [HideInInspector]
    public OperationCode NetOpCode;
    public abstract void DefaultRequest();
    public abstract void OnOperationResponse(SangoNetMessage sangoNetMessage);

    public virtual void InitRequset()
    {
        _netService = NetService.Instance;
        _resourceService = ResourceService.Instance;
        _audioService = AudioService.Instance;
        _clientPeer = _netService._client.ClientPeer;
        _netService.AddRequest(this);
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
