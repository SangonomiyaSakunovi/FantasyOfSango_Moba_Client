using System;
using System.Collections.Generic;

//Developer: SangonomiyaSakunovi

public class EventMessage<T>
{
    private static string _lock = "EventMessageLock";
    private Queue<EventMessageParams> _eventMessageQueue = new Queue<EventMessageParams>();
    private EventMessageMap<T> _eventMessageMap = new EventMessageMap<T>();

    public void InitMessage()
    {
        _eventMessageQueue.Clear();
    }

    public void UpdateMessage()
    {
        lock (_lock)
        {
            while (_eventMessageQueue.Count > 0)
            {
                EventMessageParams data = _eventMessageQueue.Dequeue();
                TriggerMessageHandler(data.GetEventMessageId(), data.GetParam1(), data.GetParam2());
            }
        }
    }

    public void UnInitMessage()
    {

    }

    public void AddMessageHandler(T eventId, Action<object, object> callBack)
    {
        lock (_lock)
        {
            _eventMessageMap.AddMessageHandler(eventId, callBack);
        }
    }

    public void RemoveMessageHandlerByEventId(T eventId)
    {
        lock (_lock)
        {
            _eventMessageMap.RemoveMessageHandler(eventId);
        }
    }

    public void RemoveMessageHandlerByTarget(object target)
    {
        lock (_lock)
        {
            _eventMessageMap.RemoveTargetHandler(target);
        }
    }

    public void InvokeMessageHandlerASync(T eventId, object param1 = null, object param2 = null)
    {
        lock (_lock)
        {
            _eventMessageQueue.Enqueue(new EventMessageParams(eventId, param1, param2));
        }
    }

    public void InvokeMessageHandlerSync(T eventId, object param1 = null, object param2 = null)
    {
        TriggerMessageHandler(eventId, param1, param2);
    }

    private void TriggerMessageHandler(T eventId, object param1, object param2)
    {
        LinkedList<Action<object, object>> actionList = _eventMessageMap.GetAllMessageHandler(eventId);
        if (actionList != null)
        {
            foreach (Action<object, object> action in actionList)
            {
                action(param1, param2);
            }
        }
    }

    private class EventMessageParams
    {
        private T _eventId = default(T);
        private object _param1 = null;
        private object _param2 = null;

        public EventMessageParams(T eventId, object param1, object param2)
        {
            _eventId = eventId;
            _param1 = param1;
            _param2 = param2;
        }

        public T GetEventMessageId()
        {
            return _eventId;
        }

        public object GetParam1()
        {
            return _param1;
        }

        public object GetParam2()
        {
            return _param2;
        }
    }
}
