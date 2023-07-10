using TMPro;

//Developer: SangonomiyaSakunovi

public class LoginWindow : BaseWindow
{
    public TMP_InputField _accountInput;
    public TMP_InputField _passwordInput;

    public override void InitWindow()
    {
        base.InitWindow();
    }

    public void OnLoginButtonClick()
    {
        _audioService.PlayUIAudio(AudioUIConstant.LoginButtonClick);
        if (_accountInput.text.Length > 0 && _passwordInput.text.Length > 0)
        {

        }
        else
        {
            _hotFixRoot.AddTips("账号或密码为空，请重新输入");
        }
    }

    public void OnRegistButtonClick()
    {

    }
}
