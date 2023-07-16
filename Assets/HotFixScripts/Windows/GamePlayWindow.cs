using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

//Developer: SangonomiyaSakunovi

public class GamePlayWindow : BaseWindow
{
    public Image _touchAreaImage;
    public Image _joyStickAreaImage;
    public Image _joyStickControlPointImage;
    public Transform _joyStickControlArrowTrans;

    private Vector2 _startJoyStickAreaPos = Vector2.zero;
    private Vector2 _defaultJoyStickAreaPos = Vector2.zero;

    private float _joyStickAreaRadius;

    private Color _joyStickControlPointClickDownColor = new Color(1, 1, 1, 1f);
    private Color _joyStickControlPointClickUpColor = new Color(1, 1, 1, 0.5f);

    public override void InitWindow()
    {
        base.InitWindow();
        _joyStickAreaRadius = 1.0f * Screen.height / ClientConfig.ScreenStandardHeight * ClientConfig.JoyStickAreaStandardRadius;
        SetActive(_joyStickControlArrowTrans, false);
        _defaultJoyStickAreaPos = _joyStickAreaImage.transform.position;
        RegistMoveEvents();
    }

    private void RegistMoveEvents()
    {
        AddClickDownListener(_touchAreaImage.gameObject, (PointerEventData eventData, object[] args) =>
        {
            _startJoyStickAreaPos = eventData.position;
            _joyStickControlPointImage.color = _joyStickControlPointClickDownColor;
            _joyStickAreaImage.transform.position = eventData.position;
        });

        AddClickUpListener(_touchAreaImage.gameObject, (PointerEventData eventData, object[] args) =>
        {
            _joyStickAreaImage.transform.position = _defaultJoyStickAreaPos;
            _joyStickControlPointImage.color = _joyStickControlPointClickUpColor;
            _joyStickControlPointImage.transform.localPosition = Vector2.zero;
            SetActive(_joyStickControlArrowTrans, false);
            DragInputMove(Vector2.zero);
        });

        AddDragListener(_touchAreaImage.gameObject, (PointerEventData eventData, object[] args) =>
        {
            Vector2 dir = eventData.position - _startJoyStickAreaPos;
            float len = dir.magnitude;
            if (len > _joyStickAreaRadius)
            {
                Vector2 clampDir = Vector2.ClampMagnitude(dir, _joyStickAreaRadius);
                _joyStickControlPointImage.transform.position = _startJoyStickAreaPos + clampDir;
            }
            else
            {
                _joyStickControlPointImage.transform.position = eventData.position;
            }

            if (dir != Vector2.zero)
            {
                SetActive(_joyStickControlArrowTrans);
                float angle = Vector2.SignedAngle(Vector2.right, dir);
                _joyStickControlArrowTrans.localEulerAngles = new Vector3(0, 0, angle);
            }

            DragInputMove(dir.normalized);
        });
    }

    private void DragInputMove(Vector2 dir)
    {

    }
}
