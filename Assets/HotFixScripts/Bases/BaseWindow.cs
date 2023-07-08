using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class BaseWindow : MonoBehaviour
{
    protected HotFixRoot hotFixRoot;
    protected AudioService audioService;
    protected ResourceService resourceService;
    protected NetService netService;

    public virtual void SetWindowState(bool isActive = true)
    {
        if (gameObject.activeSelf != isActive)
        {
            gameObject.SetActive(isActive);
        }
        if (isActive)
        {
            InitWindow();
        }
        else
        {
            UnInitWindow();
        }
    }

    public virtual void InitWindow()
    {
        hotFixRoot = HotFixRoot.Instance;
        audioService = AudioService.Instance;
        resourceService = ResourceService.Instance;
        netService = NetService.Instance;
    }

    public virtual void UnInitWindow()
    {
        hotFixRoot = null;
        audioService = null;
        resourceService = null;
        netService = null;
    }
}

