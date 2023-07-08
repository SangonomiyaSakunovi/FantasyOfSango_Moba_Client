using UnityEngine;

//Developer: SangonomiyaSakunovi

public class HotFixRoot : MonoBehaviour
{
    public static HotFixRoot Instance;

    public GameObject windowRoot;
    public GameObject servicesRoot;
    public GameObject systemsRoot;


    private void Start()
    {
        Instance = this;
        InitServices();
        InitSystems();

        InitHotFixRoot();
        LoginSystem.Instance.OpenLoginWindow();
    }

    private void InitHotFixRoot()
    {
        for (int index = 0; index < windowRoot.transform.childCount; index++)
        {
            Transform transform = windowRoot.transform.GetChild(index);
            transform.gameObject.SetActive(false); 
        }
    }

    private void InitServices()
    {
        ResourceService resourceService = servicesRoot.GetComponent<ResourceService>();
        resourceService.InitService();
        NetService netService = servicesRoot.GetComponent<NetService>();
        netService.InitService();
        AudioService audioService = servicesRoot.GetComponent<AudioService>();
        audioService.InitService();
    }

    private void InitSystems()
    {
        LoginSystem loginSystem = systemsRoot.GetComponent<LoginSystem>();
        loginSystem.InitSystem();
        RegistSystem registSystem = systemsRoot.GetComponent<RegistSystem>();
        registSystem.InitSystem();
        LobbySystem lobbySystem = systemsRoot.GetComponent<LobbySystem>();
        lobbySystem.InitSystem();
    }
}
