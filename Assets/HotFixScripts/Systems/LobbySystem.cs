//Developer: SangonomiyaSakunovi

public class LobbySystem : BaseSystem
{
    public static LobbySystem Instance;

    public override void InitSystem()
    {
        Instance = this;
        base.InitSystem();
    }
}
