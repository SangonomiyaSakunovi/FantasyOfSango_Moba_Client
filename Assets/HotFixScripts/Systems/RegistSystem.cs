//Developer: SangonomiyaSakunovi

public class RegistSystem : BaseSystem
{
    public static RegistSystem Instance;

    public override void InitSystem()
    {
        Instance = this;
        base.InitSystem();
    }
}
