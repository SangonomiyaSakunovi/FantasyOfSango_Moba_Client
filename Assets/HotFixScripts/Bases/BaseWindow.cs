using System;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class BaseWindow : MonoBehaviour
{
    protected HotFixRoot _hotFixRoot;
    protected AudioService _audioService;
    protected ResourceService _resourceService;
    protected NetService _netService;
    protected EventService _eventService;

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
        _hotFixRoot = HotFixRoot.Instance;
        _audioService = AudioService.Instance;
        _resourceService = ResourceService.Instance;
        _netService = NetService.Instance;
        _eventService = EventService.Instance;
    }

    public virtual void UpdateWindow() { }

    public virtual void UnInitWindow()
    {
        _hotFixRoot = null;
        _audioService = null;
        _resourceService = null;
        _netService = null;
        _eventService = null;
    }

    #region PointerListener
    protected void AddClickListener(GameObject gameObject, Action<PointerEventData, object[]> clickCallBack, params object[] args)
    {
        PointerListener listener = GetOrAddComponent<PointerListener>(gameObject);
        listener._onClick = clickCallBack;
        if (args != null)
        {
            listener._args = args;
        }
    }

    protected void AddClickDownListener(GameObject gameObject, Action<PointerEventData, object[]> clickDownCallBack, params object[] args)
    {
        PointerListener listener = GetOrAddComponent<PointerListener>(gameObject);
        listener._onClickDown = clickDownCallBack;
        if (args != null)
        {
            listener._args = args;
        }
    }

    protected void AddClickUpListener(GameObject gameObject, Action<PointerEventData, object[]> clickUpCallBack, params object[] args)
    {
        PointerListener listener = GetOrAddComponent<PointerListener>(gameObject);
        listener._onClickUp = clickUpCallBack;
        if (args != null)
        {
            listener._args = args;
        }
    }

    protected void AddDragListener(GameObject gameObject, Action<PointerEventData, object[]> dragCallBack, params object[] args)
    {
        PointerListener listener = GetOrAddComponent<PointerListener>(gameObject);
        listener._onDrag = dragCallBack;
        if (args != null)
        {
            listener._args = args;
        }
    }
    #endregion

    #region AddComponent
    protected T GetOrAddComponent<T>(GameObject gameObject) where T : Component
    {
        T component = gameObject.GetComponent<T>();
        if (component == null)
        {
            component = gameObject.AddComponent<T>();
        }
        return component;
    }

    protected void RemovedComponent<T>(GameObject gameObject) where T : Component
    {
        T component = gameObject.GetComponent<T>();
        if (component == null)
        {
            Destroy(component);
        }
    }
    #endregion

    #region SetActive
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
    #endregion

    #region SetText
    protected void SetText(TMP_Text text, string strs)
    {
        text.text = strs;
    }
    #endregion
}

