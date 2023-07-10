using UnityEngine;
using YooAsset;

//Developer: SangonomiyaSakunovi

public class HotFixConfig : MonoBehaviour
{
    private EPlayMode _ePlayMode = EPlayMode.HostPlayMode;
    private CDNServerModeCode _cndServerMode = CDNServerModeCode.Local;
    private SangoApplicationCode _sangoApplication = SangoApplicationCode.FOS_Moba;

    #region CDNServerConfig
    public string GetCNDServerAddress()
    {
        string cndAddress = "";
        switch (_cndServerMode)
        {
            case CDNServerModeCode.Local:
                switch (_sangoApplication)
                {
                    case SangoApplicationCode.FOS_MMO:
                        cndAddress = "http://127.0.0.1/CNDServer_MMO";
                        break;
                    case SangoApplicationCode.FOS_AR:
                        cndAddress = "http://127.0.0.1/CDNServer_AR";
                        break;
                    case SangoApplicationCode.FOS_Moba:
                        cndAddress = "http://127.0.0.1/CNDServer_Moba";
                        break;
                }
                break;
            case CDNServerModeCode.Remote:
                //TODO
                break;
        }
        return cndAddress;
    }

    public EPlayMode GetEPlayMode()
    {
        return _ePlayMode;
    }

    public enum CDNServerModeCode
    {
        Local,
        Remote
    }

    public enum SangoApplicationCode
    {
        FOS_MMO,
        FOS_AR,
        FOS_Moba
    }
    #endregion
}
