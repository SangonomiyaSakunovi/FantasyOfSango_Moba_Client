using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class BaseSystem : MonoBehaviour
{
    protected HotFixRoot hotFixRoot;
    protected AudioService audioService;
    protected ResourceService resourceService;
    protected NetService netService;

    public virtual void InitSystem() 
    {
        hotFixRoot = HotFixRoot.Instance;
        audioService = AudioService.Instance;
        resourceService = ResourceService.Instance;
        netService = NetService.Instance;
    }
}
