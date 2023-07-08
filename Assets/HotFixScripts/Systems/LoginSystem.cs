//Developer: SangonomiyaSakunovi

public class LoginSystem : BaseSystem
{
    public static LoginSystem Instance;

    public LoginWindow loginWindow;

    public override void InitSystem()
    {
        Instance = this;
        base.InitSystem();
    }

    public void OpenLoginWindow()
    {
        loginWindow.SetWindowState();
        audioService.PlayBGAudio(AudioConstant.MainCityBGMusic);
    }
}
