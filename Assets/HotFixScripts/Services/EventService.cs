using System;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class EventService : MonoBehaviour
{
    public static EventService Instance;

    private EventMessage<EventCode> _eventMessage = new EventMessage<EventCode>();


    public void InitService()
    {
        Instance = this;
        _eventMessage.InitMessage();
    }

    public void OnUpdate()
    {
        _eventMessage.UpdateMessage();
    }

    public void UnInitService()
    {
        _eventMessage.UnInitMessage();
    }

    public void AddEventListener(EventCode eventId, Action<object,object> callBack)
    {
        _eventMessage.AddMessageHandler(eventId, callBack);
    }

    public void RemoveEventListenerByEventId(EventCode eventId)
    {
        _eventMessage.RemoveMessageHandlerByEventId(eventId);
    }

    public void RemoveEventListenerByTarget(object target)
    {
        _eventMessage.RemoveMessageHandlerByTarget(target);
    }

    public void SendEventASync(EventCode eventId, object param1 = null, object param2 = null)
    {
        _eventMessage.InvokeMessageHandlerASync(eventId, param1, param2);
    }

    public void SendEventSync(EventCode eventId, object param1 = null, object param2 = null)
    {
        _eventMessage.InvokeMessageHandlerSync(eventId, param1, param2);
    }
}
