using Cysharp.Threading.Tasks;
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

    public async UniTask<AudioClip> LoadAudioClipAsync(string path, bool isCache)
    {
        AudioClip audioClip = null;
        if (!_audioClipDict.TryGetValue(path, out audioClip))
        {
            AssetOperationHandle handle = _yooAssetResourcePackge.LoadAssetAsync<AudioClip>(path);
            await handle.Task;
            audioClip = handle.AssetObject as AudioClip;
            if (isCache)
            {
                _audioClipDict.Add(path, audioClip);
            }
        }
        return audioClip;
    }
}
