using UnityEngine;

//Developer: SangonomiyaSakunovi

public class NetService : MonoBehaviour
{
    public static NetService Instance;

    private MobaNetProxy _netProxy;

    public void InitService()
    {
        Instance = this;
        _netProxy = MobaNetProxy.Instance;
    }

    public void Test()
    {
        Debug.Log("������仰˵����������");
    }

    public void SendMessage(byte[] bytes)
    {
        _netProxy.AddSendBytes(bytes);
    }

    public void IsGetReceivedMessage()
    {
        if (_netProxy.IsReceiveBytesQueueNotEmpty())
        {
            byte[] bytes = _netProxy.TryGetReceiveBytes();
            if (bytes != null)
            {
                //TODO
            }
        }
    }
}
