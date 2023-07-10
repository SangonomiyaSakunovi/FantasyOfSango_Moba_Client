using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class BaseSystem : MonoBehaviour
{
    protected HotFixRoot _hotFixRoot;
    protected AudioService _audioService;
    protected ResourceService _resourceService;
    protected NetService _netService;

    public virtual void InitSystem() 
    {
        _hotFixRoot = HotFixRoot.Instance;
        _audioService = AudioService.Instance;
        _resourceService = ResourceService.Instance;
        _netService = NetService.Instance;
    }
}
