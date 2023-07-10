using System.Collections.Concurrent;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class MobaNetProxy : MonoBehaviour
{
    public static MobaNetProxy Instance;

    private ConcurrentQueue<byte[]> _sendBytesQueue;
    private ConcurrentQueue<byte[]> _receiveBytesQueue;

    public void InitProxy()
    {
        Instance = this;
        _sendBytesQueue = new ConcurrentQueue<byte[]>();
        _receiveBytesQueue = new ConcurrentQueue<byte[]>();
    }

    public void AddSendBytes(byte[] bytes)
    {
        _sendBytesQueue.Enqueue(bytes);
    }

    public void AddReceiveBytes(byte[] bytes)
    {
        _receiveBytesQueue.Enqueue(bytes);
    }

    public bool IsSendBytesQueueNotEmpty()
    {
        return _sendBytesQueue.Count > 0;
    }

    public bool IsReceiveBytesQueueNotEmpty()
    {
        return _receiveBytesQueue.Count > 0;
    }

    public byte[] TryGetSendBytes()
    {
        byte[] res = null;
        _sendBytesQueue.TryDequeue(out res);
        return res;
    }

    public byte[] TryGetReceiveBytes()
    {
        byte[] res = null;
        _receiveBytesQueue.TryDequeue(out res);
        return res;
    }
}
