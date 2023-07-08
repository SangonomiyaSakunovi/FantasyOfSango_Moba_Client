using TMPro;

//Developer: SangonomiyaSakunovi

public class LoginWindow : BaseWindow
{
    public TMP_InputField accountInput;
    public TMP_InputField passwordInput;

    public override void InitWindow()
    {
        base.InitWindow();
    }

    public void OnLoginButtonClick()
    {
        audioService.PlayUIAudio(AudioUIConstant.LoginButtonClick);
        if (accountInput.text.Length > 0 && passwordInput.text.Length > 0)
        {

        }
        else
        {
            hotFixRoot.AddTips("账号或密码为空，请重新输入");
        }
    }

    public void OnRegistButtonClick()
    {

    }
}
