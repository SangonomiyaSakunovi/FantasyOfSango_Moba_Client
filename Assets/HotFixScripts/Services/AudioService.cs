using System.Runtime.CompilerServices;
using UnityEngine;

//Developer: SangonomiyaSakunovi

public class AudioService : BaseService
{
    public static AudioService Instance;

    public bool isTurnOnAudio;
    public AudioSource bgAudioSource;
    public AudioSource uiAudioSource;

    public override void InitService()
    {
        Instance = this;
        base.InitService();
    }

    public void PlayBGAudio(string name, bool isLoop = true, bool isCache = true)
    {
        if (!isTurnOnAudio) { return; }
        string path = ResourcePath.BGAudioPath + name;
        AudioClip audioClip = ResourceService.Instance.LoadAudioClip(path, isCache);
        if (bgAudioSource.clip == null || bgAudioSource.clip.name != audioClip.name)
        {
            bgAudioSource.clip = audioClip;
            bgAudioSource.loop = isLoop;
            bgAudioSource.Play();
        }
    }

    public void PlayUIAudio(string name, bool isCache = true)
    {
        if (!isTurnOnAudio) { return; }
        string path = ResourcePath.UIAudioPath + name;
        AudioClip audioClip = ResourceService.Instance.LoadAudioClip(path, isCache);
        uiAudioSource.clip = audioClip;
        uiAudioSource.Play();
    }
}
