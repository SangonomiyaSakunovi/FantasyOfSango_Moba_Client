using UnityEngine;

//Developer: SangonomiyaSakunovi

public class NetService : BaseService
{
    public static NetService Instance;

    public override void InitService()
    {
        Instance = this;
        base.InitService();
    }

    public void Test()
    {
        Debug.Log("������仰˵����������");
    }
}
