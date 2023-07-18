using SangoMobaNetProtocol;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class ProxyService : MonoBehaviour
{
    public static ProxyService Instance;

    private Queue<SangoNetMessage> _netProxyQueue = new Queue<SangoNetMessage>();

    private string _proxyQueueLock = "_proxyQueueLock";

    public void InitService()
    {
        Instance = this;
    }

    private void Update()
    {
        if (_netProxyQueue.Count > 0)
        {
            SangoNetMessage sangoNetMessage = _netProxyQueue.Dequeue();
            OnRecieveNetProxyMessage(sangoNetMessage);
        }
    }

    public void AddNetProxy(SangoNetMessage sangoNetMessage)
    {
        lock (_netProxyQueue)
        {
            _netProxyQueue.Enqueue(sangoNetMessage);
        }
    }

    private void OnRecieveNetProxyMessage(SangoNetMessage sangoNetMessage)
    {
        switch (sangoNetMessage.MessageHead.MessageCommand)
        {
            case MessageCommand.OperationResponse:
                {
                    NetService.Instance.OnOperationResponseDistribute(sangoNetMessage);
                }
                break;
            case MessageCommand.EventData:
                {
                    NetService.Instance.OnEventDataDistribute(sangoNetMessage);
                }
                break;
        }
    }
}
