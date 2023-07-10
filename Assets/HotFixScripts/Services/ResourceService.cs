using System.Collections.Generic;
using UnityEngine;
using YooAsset;

//Developer: SangonomiyaSakunovi

public class ResourceService : MonoBehaviour
{
    public static ResourceService Instance;

    private ResourcePackage _yooAssetResourcePackge;

    private Dictionary<string, AudioClip> _audioClipDict;

    public void InitService()
    {
        Instance = this;
        _yooAssetResourcePackge = YooAssets.GetPackage("DefaultPackage");
        _audioClipDict = new Dictionary<string, AudioClip>();
    }

    public AudioClip LoadAudioClip(string path, bool isCache)
    {
        AudioClip audioClip = null;
        if (!_audioClipDict.TryGetValue(path, out audioClip))
        {
            AssetOperationHandle handle = _yooAssetResourcePackge.LoadAssetSync<AudioClip>(path);
            audioClip = handle.AssetObject as AudioClip;
            if (isCache)
            {
                _audioClipDict.Add(path, audioClip);
            }
        }
        return audioClip;
    }

    //public AudioClip TestLoadAudioClip(string path, bool isCache)
    //{
    //    AudioClip audioClip = null;
    //    if (!audioClipDict.TryGetValue(path, out audioClip))
    //    {
    //        AssetOperationHandle handle = yooAssetResourcePackge.LoadAssetAsync<AudioClip>(path);
    //        handle.Completed += Handle_Completed;
            
    //        if (isCache)
    //        {
    //            audioClipDict.Add(path, audioClip);
    //        }
    //    }
    //    return audioClip;
    //}

    //private float currentAudioTimeStamp;

    //private void Handle_Completed(AssetOperationHandle handle, bool isCache, float audioTimeStamp)
    //{
    //    AudioClip audioClip = handle.AssetObject as AudioClip;
    //    //�������audioClip��һ�����У�Ȼ���������߳�ȥ��ȡ
    //    if (isCache)
    //    {
    //        //�������audioClip��һ���ֵ䣬������ȡ���ֵ��ȡ
    //    }

    //    if (audioTimeStamp < currentAudioTimeStamp)
    //    {
    //        //���ּ���̫���ˣ���һ�������ˣ�����ż��س�����ֱ��return����������Դ
    //    }


    //    handle.Release();
    //}
}
