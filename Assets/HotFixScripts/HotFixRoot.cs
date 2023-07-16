using UnityEngine;

//Developer: SangonomiyaSakunovi

public class HotFixRoot : MonoBehaviour
{
    public static HotFixRoot Instance;

    public GameObject _windowRoot;
    public GameObject _servicesRoot;
    public GameObject _systemsRoot;

    public TipsWindow _tipsWindow;


    private void Start()
    {
        Instance = this;
        InitServices();
        InitSystems();

        InitHotFixRoot();
        LoginSystem.Instance.OpenLoginWindow();
    }

    private void Update()
    {
        EventService.Instance.OnUpdate();
        //NetService.Instance.IsGetReceivedMessage();
    }

    private void InitHotFixRoot()
    {
        for (int index = 0; index < _windowRoot.transform.childCount; index++)
        {
            Transform transform = _windowRoot.transform.GetChild(index);
            transform.gameObject.SetActive(false);
        }
        _tipsWindow.SetWindowState();
    }



    private void InitServices()
    {
        ResourceService resourceService = _servicesRoot.GetComponent<ResourceService>();
        resourceService.InitService();
        NetService netService = _servicesRoot.GetComponent<NetService>();
        netService.InitService();
        AudioService audioService = _servicesRoot.GetComponent<AudioService>();
        audioService.InitService();
        EventService eventService = _servicesRoot.GetComponent<EventService>();
        eventService.InitService();
    }

    private void InitSystems()
    {
        LoginSystem loginSystem = _systemsRoot.GetComponent<LoginSystem>();
        loginSystem.InitSystem();
        RegistSystem registSystem = _systemsRoot.GetComponent<RegistSystem>();
        registSystem.InitSystem();
        LobbySystem lobbySystem = _systemsRoot.GetComponent<LobbySystem>();
        lobbySystem.InitSystem();
    }

    public void AddTips(string tips)
    {
        _tipsWindow.AddTips(tips);
    }
}
