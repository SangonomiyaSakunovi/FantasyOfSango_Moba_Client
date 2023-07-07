using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class HotFixRoot : MonoBehaviour
{
    public TMP_Text text;

    private void Start()
    {
        text.text = "看到这句话说明运行了热更新";
    }
}
