using SangoMobaNetProtocol;

//Developer: SangonomiyaSakunovi

public class LoginRequst : BaseRequest
{
    private string _account;
    private string _password;

    public override void InitRequset()
    {
        NetOpCode = OperationCode.Login;
        base.InitRequset();
    }

    public override void DefaultRequest()
    {
        LoginReq loginReq = new()
        {
            Account = _account,
            Password = _password
        };
        string loginReqJson = SetJsonString(loginReq);
        _clientPeer.SendOperationRequest(NetOpCode, loginReqJson);
    }

    public override void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        ReturnCode returnCode = sangoNetMessage.MessageBody.ReturnCode;
        //LoginSystem.Instance.OnLoginResponse(returnCode);
    }
    public void SetAccount(string acc, string pass)
    {
        _account = acc;
        _password = pass;
    }
}
