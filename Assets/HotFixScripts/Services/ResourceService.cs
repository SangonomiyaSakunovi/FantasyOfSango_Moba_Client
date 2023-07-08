using System.Collections.Generic;
using UnityEngine;
using YooAsset;

//Developer: SangonomiyaSakunovi

public class ResourceService : BaseService
{
    public static ResourceService Instance;

    private ResourcePackage yooAssetResourcePackge;

    private Dictionary<string, AudioClip> audioClipDict;

    public override void InitService()
    {
        Instance = this;
        base.InitService();
        yooAssetResourcePackge = YooAssets.GetPackage("DefaultPackage");
        audioClipDict = new Dictionary<string, AudioClip>();
    }

    public AudioClip LoadAudioClip(string path, bool isCache)
    {
        AudioClip audioClip = null;
        if (!audioClipDict.TryGetValue(path, out audioClip))
        {
            AssetOperationHandle handle = yooAssetResourcePackge.LoadAssetSync<AudioClip>(path);
            audioClip = handle.AssetObject as AudioClip;
            if (isCache)
            {
                audioClipDict.Add(path, audioClip);
            }
        }
        return audioClip;
    }
}
