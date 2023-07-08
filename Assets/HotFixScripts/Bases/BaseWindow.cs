using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

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

    protected void SetActive(GameObject gameObject, bool isActive = true)
    {
        gameObject.SetActive(isActive);
    }

    protected void SetActive(Transform transform, bool isActive = true)
    {
        transform.gameObject.SetActive(isActive);
    }

    protected void SetActive(RectTransform rectTransform, bool isActive = true)
    {
        rectTransform.gameObject.SetActive(isActive);
    }

    protected void SetActive(Image image, bool isActive = true)
    {
        image.gameObject.SetActive(isActive);
    }

    protected void SetActive(TMP_Text text, bool isActive = true)
    {
        text.gameObject.SetActive(isActive);
    }

    protected void SetActive(TMP_InputField inputField, bool isActive = true)
    {
        inputField.gameObject.SetActive(isActive);
    }

    protected void SetText(TMP_Text text, string strs)
    {
        text.text = strs;
    }
}

