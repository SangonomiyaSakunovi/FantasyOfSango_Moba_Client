using UnityEngine;

//Developer: SangonomiyaSakunovi

public class AOTRoot : MonoBehaviour
{
    public static AOTRoot Instance;

    public GameObject _proxyRoot;

    private void Start()
    {
        Debug.Log("Æô¶¯³É¹¦");
        Instance = this;
        DontDestroyOnLoad(this);
        InitProxy();
        InitRoot();
    }

    private void Update()
    {
        AOTNetService.Instance.IsGetSendMessage();
    }

    private void InitProxy()
    {
        MobaNetProxy netProxy = _proxyRoot.GetComponent<MobaNetProxy>();
        netProxy.InitProxy();
    }

    private void InitRoot()
    {
        HotFixService hotFixService = GetComponent<HotFixService>();
        hotFixService.InitService();
        AOTNetService aOTNetService = GetComponent<AOTNetService>();
        aOTNetService.InitService();
    }
}
