using System;
using System.Collections.Generic;

//Developer: SangonomiyaSakunovi

public class EventMessageMap<T>
{
    private Dictionary<T, LinkedList<Action<object, object>>> _messageHandlerDict = new Dictionary<T, LinkedList<Action<object, object>>>();
    private Dictionary<object, LinkedList<T>> _messageTargetDict = new Dictionary<object, LinkedList<T>>();

    public void AddMessageHandler(T eventId, Action<object, object> eventCallBack)
    {
        if (!_messageHandlerDict.ContainsKey(eventId))
        {
            _messageHandlerDict.Add(eventId, new LinkedList<Action<object, object>>());
        }
        LinkedList<Action<object, object>> eventCallBackList = _messageHandlerDict[eventId];
        foreach (Action<object, object> action in eventCallBackList)
        {
            if (action.Equals(eventCallBack))
            {
                return;
            }
        }
        eventCallBackList.AddLast(eventCallBack);

        if (eventCallBack != null && eventCallBack.Target != null)
        {
            if (!_messageTargetDict.ContainsKey(eventCallBack.Target))
            {
                _messageTargetDict.Add(eventCallBack.Target, new LinkedList<T>());
            }
            LinkedList<T> eventTargetList = _messageTargetDict[eventCallBack.Target];
            eventTargetList.AddLast(eventId);
        }
    }

    public void RemoveMessageHandler(T eventId)
    {
        if (_messageHandlerDict.ContainsKey(eventId))
        {
            LinkedList<Action<object, object>> handlerList = _messageHandlerDict[eventId];
            foreach (Action<object, object> action in handlerList)
            {
                if (action != null && action.Target != null && _messageTargetDict.ContainsKey(action.Target))
                {
                    LinkedList<T> eventIdList = _messageTargetDict[action.Target];
                    foreach (T eventItem in eventIdList)
                    {
                        if (eventItem.Equals(eventId))
                        {
                            eventIdList.Remove(eventItem);
                        }
                    }
                    if (eventIdList.Count == 0)
                    {
                        _messageTargetDict.Remove(action.Target);
                    }
                }
            }
            _messageHandlerDict.Remove(eventId);
        }
    }

    public void RemoveTargetHandler(object target)
    {
        if (_messageTargetDict.ContainsKey(target))
        {
            LinkedList<T> eventIdList = _messageTargetDict[target];
            foreach (T eventItem in eventIdList)
            {
                if (_messageHandlerDict.ContainsKey(eventItem))
                {
                    LinkedList<Action<object, object>> callBackList = _messageHandlerDict[eventItem];
                    foreach (Action<object, object> action in callBackList)
                    {
                        if (action.Target.Equals(target))
                        {
                            callBackList.Remove(action);
                        }
                    }
                    if (callBackList.Count == 0)
                    {
                        _messageHandlerDict.Remove(eventItem);
                    }
                }
            }
            _messageTargetDict.Remove(target);
        }
    }

    public LinkedList<Action<object,object>> GetAllMessageHandler(T eventId)
    {
        _messageHandlerDict.TryGetValue(eventId, out LinkedList<Action<object,object>> list);
        return list;
    }
}
