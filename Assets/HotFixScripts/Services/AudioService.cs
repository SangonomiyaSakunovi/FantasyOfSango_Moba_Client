using System.Runtime.CompilerServices;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class AudioService : MonoBehaviour
{
    public static AudioService Instance;

    public bool _isTurnOnAudio;
    public AudioSource _bgAudioSource;
    public AudioSource _uiAudioSource;

    public void InitService()
    {
        Instance = this;
    }

    public void PlayBGAudio(string name, bool isLoop = true, bool isCache = true)
    {
        if (!_isTurnOnAudio) { return; }
        string path = ResourcePath.BGAudioPath + name;
        AudioClip audioClip = ResourceService.Instance.LoadAudioClip(path, isCache);
        if (_bgAudioSource.clip == null || _bgAudioSource.clip.name != audioClip.name)
        {
            _bgAudioSource.clip = audioClip;
            _bgAudioSource.loop = isLoop;
            _bgAudioSource.Play();
        }
    }

    public void PlayUIAudio(string name, bool isCache = true)
    {
        if (!_isTurnOnAudio) { return; }
        string path = ResourcePath.UIAudioPath + name;
        AudioClip audioClip = ResourceService.Instance.LoadAudioClip(path, isCache);
        _uiAudioSource.clip = audioClip;
        _uiAudioSource.Play();
    }
}
