using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class TipsWindow : BaseWindow
{
    public Image _tipsBG;
    public TMP_Text _tipsText;
    public Animator _tipsAnimator;

    private float _tipsTime = 1.5f;
    private int _fontSize = 40;
    private int _tipsBGHeight = 80;
    private bool _isTipsShow = false;
    private float _tipsShowEndTime;
    private Queue<string> _tipsQueue = new Queue<string>();

    public override void InitWindow()
    {
        base.InitWindow();
        SetActive(_tipsBG, false);
        _tipsQueue.Clear();
    }

    private void Update()
    {
        if (_isTipsShow && Time.time > _tipsShowEndTime)
        {
            OnTipsShowDone();
        }
        if (_tipsQueue.Count > 0 && !_isTipsShow)
        {
            string tips = _tipsQueue.Dequeue();
            _isTipsShow = true;
            SetTips(tips);
        }
    }

    private void SetTips(string tips)
    {
        int length = tips.Length;
        SetActive(_tipsBG);
        SetText(_tipsText, tips);
        _tipsBG.GetComponent<RectTransform>().sizeDelta = new Vector2(_fontSize * (length + 2), _tipsBGHeight);
        _tipsAnimator.Play("TipsWindowAnimation", 0, 0);
        _tipsShowEndTime = Time.time + _tipsTime;
    }

    public void AddTips(string tips)
    {
        _tipsQueue.Enqueue(tips);
    }

    public void OnTipsShowDone()
    {
        SetActive(_tipsBG, false);
        _isTipsShow = false;
    }
}
