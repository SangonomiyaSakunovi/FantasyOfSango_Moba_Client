using TMPro;
using UnityEngine;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class HotFixWindow : MonoBehaviour
{
    public GameObject hotfixPanel;
    public TMP_Text Tips;
    public TMP_Text HotfixInfo;
    public Image loadingProgressFG;
    public Image loadingProgressPoint;
    public TMP_Text loadingProgressText;

    private float loadingProgressFGWidth;
    private float loadingProgressPointYPos;

    public void OpenHotFixPanel()
    {
        InitWindow();
        hotfixPanel.SetActive(true);
    }

    private void InitWindow()
    {
        loadingProgressFGWidth = loadingProgressFG.GetComponent<RectTransform>().sizeDelta.x;
        loadingProgressPointYPos = loadingProgressPoint.GetComponent<RectTransform>().sizeDelta.y;
        loadingProgressText.text = "0%";
        loadingProgressFG.fillAmount = 0;
        loadingProgressPoint.transform.localPosition = new Vector3(-loadingProgressFGWidth / 2, loadingProgressPointYPos, 0);
    }

    public void OnConfirmButtonClick()
    {
        SetTips("正在下载更新");
        HotFixService.Instance.RunHotFix();
    }

    public void OnCancelButtonClick()
    {
        SetTips("在测试服中，取消会无法进入游戏的哦");
    }

    public void SetHotFixInfoText(long totalDownloadBytes)
    {
        long totalUploadMB = totalDownloadBytes / 1048576;
        string text = "当前需要下载更新" + totalUploadMB + "MB左右，\n是否继续？\n（建议在Wifi环境下进行）";
        HotfixInfo.text = text;
    }

    public void SetTips(string text)
    {
        Tips.text = text;
    }

    public void SetLoadingProgress(float loadingProgress)
    {
        loadingProgressText.text = (int)(loadingProgress * 100) + "%";
        loadingProgressFG.fillAmount = loadingProgress;
        float positionLoadingProgressPoint = loadingProgress * loadingProgressFGWidth - loadingProgressFGWidth / 2;
        loadingProgressPoint.transform.localPosition = new Vector3(positionLoadingProgressPoint, loadingProgressPointYPos, 0);
    }
}
