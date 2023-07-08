using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class TipsWindow : BaseWindow
{
    public Image tipsBG;
    public TMP_Text tipsText;
    public Animator tipsAnimator;

    private float tipsTime = 1.5f;
    private int fontSize = 40;
    private int tipsBGHeight = 80;
    private bool isTipsShow = false;
    private float tipsShowEndTime;
    private Queue<string> tipsQueue = new Queue<string>();

    public override void InitWindow()
    {
        base.InitWindow();
        SetActive(tipsBG, false);
        tipsQueue.Clear();
    }

    private void Update()
    {
        if (Time.time - tipsShowEndTime > 0)
        {
            OnTipsShowDone();
        }
        if (tipsQueue.Count > 0 && !isTipsShow)
        {
            string tips = tipsQueue.Dequeue();
            isTipsShow = true;
            SetTips(tips);
        }
    }

    private void SetTips(string tips)
    {
        int length = tips.Length;
        SetActive(tipsBG);
        SetText(tipsText, tips);
        tipsBG.GetComponent<RectTransform>().sizeDelta = new Vector2(fontSize * (length + 2), tipsBGHeight);
        tipsAnimator.Play("TipsWindowAnimation", 0, 0);
        tipsShowEndTime = Time.time + tipsTime;
    }

    public void AddTips(string tips)
    {
        tipsQueue.Enqueue(tips);
    }

    public void OnTipsShowDone()
    {
        SetActive(tipsBG, false);
        isTipsShow = false;
    }
}
