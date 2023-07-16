using System;
using UnityEngine;
using UnityEngine.EventSystems;

//Developer: SangonomiyaSakunovi

public class PointerListener : MonoBehaviour, IPointerClickHandler, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    public Action<PointerEventData, object[]> _onClick;
    public Action<PointerEventData, object[]> _onClickDown;
    public Action<PointerEventData, object[]> _onClickUp;
    public Action<PointerEventData, object[]> _onDrag;

    public object[] _args = null;

    public void OnPointerClick(PointerEventData eventData)
    {
        _onClick?.Invoke(eventData, _args);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        _onClickDown?.Invoke(eventData, _args);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        _onClickUp?.Invoke(eventData, _args);
    }

    public void OnDrag(PointerEventData eventData)
    {
        _onDrag?.Invoke(eventData, _args);
    }
}
