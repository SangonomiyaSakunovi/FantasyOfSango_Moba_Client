//Developer: SangonomiyaSakunovi

public class LoginSystem : BaseSystem
{
    public static LoginSystem Instance;

    public LoginWindow _loginWindow;

    public override void InitSystem()
    {
        Instance = this;
        base.InitSystem();
    }

    public void OpenLoginWindow()
    {
        _loginWindow.SetWindowState();
        _audioService.PlayBGAudio(AudioBGConstant.MainCityBGMusic);
    }
}
