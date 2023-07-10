using UnityEngine;

//Developer: SangonomiyaSakunovi

public class AOTNetService : MonoBehaviour
{
    public static AOTNetService Instance;

    private MobaNetProxy _netProxy;

    public void InitService()
    {
        Instance = this;
        _netProxy = MobaNetProxy.Instance;
    }

    public void IsGetSendMessage()
    {
        if (_netProxy.IsSendBytesQueueNotEmpty())
        {
            byte[] bytes = _netProxy.TryGetSendBytes();
            if (bytes != null)
            {
                //TODO
            }
        }
    }

    public void OnReceivedMessage(byte[] bytes)
    {
        _netProxy.AddReceiveBytes(bytes);
    }
}
