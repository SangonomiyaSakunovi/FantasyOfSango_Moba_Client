using SangoKCPNet;
using SangoMobaNetProtocol;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class NetService : MonoBehaviour
{
    public static NetService Instance;
    public KCPPeer<ClientPeer> _client = new KCPPeer<ClientPeer>();

    private Dictionary<OperationCode, BaseRequest> _requestDict = new Dictionary<OperationCode, BaseRequest>();
    private Dictionary<OperationCode, BaseEvent> _eventDict = new Dictionary<OperationCode, BaseEvent>();
    private Task<bool> _checkTask;

    public void InitService()
    {
        Instance = this;
        KCPLog.LogInfoCallBack = Debug.Log;
        KCPLog.LogErrorCallBack = Debug.LogError;
        KCPLog.LogWarningCallBack = Debug.LogWarning;
        _client.StartAsClient(ClientConfig.LocalIpAddress, ClientConfig.port);
        _checkTask = _client.ConnectServer(100);
        Debug.Log("NetService Init Done.");
    }
    
    private void Update()
    {
        ReConnectToServer();
    }

    private int connectToServerCounter = 0;
    private void ReConnectToServer()
    {
        if (_checkTask != null && _checkTask.IsCompleted)
        {
            if (_checkTask.Result)
            {
                HotFixRoot.Instance.AddTips("连接服务器成功");
                _checkTask = null;
            }
            else
            {
                connectToServerCounter++;
                if (connectToServerCounter > 4)
                {
                    HotFixRoot.Instance.AddTips("与服务器断开连接");
                    _checkTask = null;
                }
                else
                {
                    HotFixRoot.Instance.AddTips("网络情况较差，正在尝试重新连接");
                    _checkTask = _client.ConnectServer(100);
                }
            }
        }
    }

    public void CloseClientInstance()
    {
        _client.CloseClient();
    }

    private void InitRequest()
    {

    }

    public void OnOperationResponseDistribute(SangoNetMessage sangoNetMessage)
    {
        _requestDict.TryGetValue(sangoNetMessage.MessageHead.OperationCode, out BaseRequest request);
        if (request != null)
        {
            request.OnOperationResponse(sangoNetMessage);
        }
        else
        {
            Debug.Log("There is no Request in RequestDict, the OperationCode is: [ " + sangoNetMessage.MessageHead.OperationCode + " ]");
        }
    }

    public void OnEventDataDistribute(SangoNetMessage sangoNetMessage)
    {
        _eventDict.TryGetValue(sangoNetMessage.MessageHead.OperationCode, out BaseEvent evt);
        if (evt != null)
        {
            evt.OnEvent(sangoNetMessage);
        }
        else
        {
            Debug.Log("There is no Event in EventDict, the EventCode is: [ " + sangoNetMessage.MessageHead.OperationCode + " ]");
        }
    }

    public void AddRequest(BaseRequest req)
    {
        _requestDict.Add(req.NetOpCode, req);
    }

    public void AddEvent(BaseEvent evt)
    {
        _eventDict.Add(evt.NetOpCode, evt);
    }

    public BaseRequest GetRequest(OperationCode opCode)
    {
        _requestDict.TryGetValue(opCode, out BaseRequest request);
        return request;
    }

    public BaseEvent GetEvent(OperationCode opCode)
    {
        _eventDict.TryGetValue(opCode, out BaseEvent evt);
        return evt;
    }
}
