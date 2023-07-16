using TMPro;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class LoginWindow : BaseWindow
{
    public TMP_InputField _accountInput;
    public TMP_InputField _passwordInput;
    public Button _loginButton;
    public Button _registButton;

    public override void InitWindow()
    {
        base.InitWindow();
        _loginButton.onClick.AddListener(OnLoginButtonClick);
        _registButton.onClick.AddListener(OnRegistButtonClick);
    }

    public override void UnInitWindow()
    {
        base.UnInitWindow();
        _loginButton.onClick.RemoveListener(OnLoginButtonClick);
        _registButton.onClick.RemoveListener(OnRegistButtonClick);
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
