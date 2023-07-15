using UnityEngine;

//Developer: SangonomiyaSakunovi

public class EventService : MonoBehaviour
{
    public static EventService Instance;

    public void InitService()
    {
        Instance = this;
    }


}
