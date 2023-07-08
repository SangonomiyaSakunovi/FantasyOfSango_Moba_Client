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
}
