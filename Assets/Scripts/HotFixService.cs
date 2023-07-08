using HybridCLR;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using YooAsset;

//Developer: SangonomiyaSakunovi

public class HotFixService : MonoBehaviour
{
    public static List<string> AOTMetaAssemblyNames { get; } = new List<string>()
    {
        "Assets/AssetBundles/ABScripts/UnityEngine.CoreModule.dll.bytes",
        "Assets/AssetBundles/ABScripts/YooAsset.dll.bytes",
        "Assets/AssetBundles/ABScripts/mscorlib.dll.bytes"       
    };

    private static Dictionary<string, byte[]> dllAssetDataDict = new Dictionary<string, byte[]>();

    public static HotFixService Instance;

    public Transform hotFixRootParent;

    private ResourceDownloaderOperation downloaderOperation;
    private ResourcePackage yooAssetResourcePackage;

    public HotFixWindow hotFixWindow;
    private HotFixConfig hotFixConfig;

    public void InitService()
    {
        Instance = this;
        hotFixConfig = GetComponent<HotFixConfig>();
        hotFixWindow.SetTips("���ڼ�����");
        StartCoroutine(PrepareAssets());
    }

    public void RunHotFix()
    {
        StartCoroutine(RunDownloader(downloaderOperation));
    }

    public void EnterSangoGameRoot()
    {
        LoadDll();
        LoadMetadataForAOTAssemblies();

#if !UNITY_EDITOR
        System.Reflection.Assembly.Load(GetAssetData("Assets/AssetBundles/ABScripts/FOSMobaHotFix.dll"));
#endif

        StopAllCoroutines();
        LoadGameRootObject();
    }

    private void LoadDll()
    {
        var dllNameList = new List<string>()
        {
            "Assets/AssetBundles/ABScripts/FOSMobaHotFix.dll",
        }.Concat(AOTMetaAssemblyNames);
        foreach (var dllName in dllNameList)
        {
            var obj = yooAssetResourcePackage.LoadRawFileSync(dllName);
            byte[] fileData = obj.GetRawFileData();
            dllAssetDataDict.Add(dllName, fileData);
        }
    }

    private void LoadGameRootObject()
    {
        var asset1 = yooAssetResourcePackage.LoadAssetSync<GameObject>("Assets/AssetBundles/ABPrefabs/RootPrefabs/HotFixRoot.prefab");
        GameObject hotFixRoot = asset1.InstantiateSync();
        hotFixRoot.transform.SetParent(hotFixRootParent);
        RectTransform rect = hotFixRoot.GetComponent<RectTransform>();
        rect.offsetMax = new Vector2(0, 0);
        hotFixWindow.gameObject.SetActive(false);
    }

    private IEnumerator PrepareAssets()
    {
        //1. InitYooAsset
        YooAssets.Initialize();
        yooAssetResourcePackage = YooAssets.CreatePackage("DefaultPackage");
        YooAssets.SetDefaultPackage(yooAssetResourcePackage);
        EPlayMode PlayMode = hotFixConfig.GetEPlayMode();
        switch (PlayMode)
        {
            case EPlayMode.EditorSimulateMode:
                {
                    var initParameters = new EditorSimulateModeParameters();
                    initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
                    var initOperation = yooAssetResourcePackage.InitializeAsync(initParameters);
                    yield return initOperation;

                    if (initOperation.Status == EOperationStatus.Succeed)
                    {
                        Debug.Log("��Դ����ʼ���ɹ���");
                        EnterSangoGameRoot();
                        yield break;
                    }
                    else
                    {
                        Debug.LogError($"��Դ����ʼ��ʧ�ܣ�{initOperation.Error}");
                        yield break;
                    }
                }
            case EPlayMode.HostPlayMode:
                {
                    var initParameters = new HostPlayModeParameters();
                    initParameters.QueryServices = new GameQueryServices();
                    initParameters.DefaultHostServer = hotFixConfig.GetCNDServerAddress();
                    initParameters.FallbackHostServer = hotFixConfig.GetCNDServerAddress();
                    var initOperation = yooAssetResourcePackage.InitializeAsync(initParameters);
                    yield return initOperation;

                    if (initOperation.Status == EOperationStatus.Succeed)
                    {
                        Debug.Log("��Դ����ʼ���ɹ���");
                    }
                    else
                    {
                        Debug.LogError($"��Դ����ʼ��ʧ�ܣ�{initOperation.Error}");
                        yield break;
                    }
                }
                break;
            case EPlayMode.OfflinePlayMode:
                {
                    var initParameters = new OfflinePlayModeParameters();
                    var initOperation = yooAssetResourcePackage.InitializeAsync(initParameters);
                    yield return initOperation;

                    if (initOperation.Status == EOperationStatus.Succeed)
                    {
                        Debug.Log("��Դ����ʼ���ɹ���");
                        EnterSangoGameRoot();
                        yield break;
                    }
                    else
                    {
                        Debug.LogError($"��Դ����ʼ��ʧ�ܣ�{initOperation.Error}");
                        yield break;
                    }
                }
        }

        //2. UpdatePackageVersion
        var updatePackageVersionOperation = yooAssetResourcePackage.UpdatePackageVersionAsync();
        yield return updatePackageVersionOperation;

        if (updatePackageVersionOperation.Status != EOperationStatus.Succeed)
        {
            Debug.LogError(updatePackageVersionOperation.Error);
            yield break;
        }
        string packageVersion = updatePackageVersionOperation.PackageVersion;

        //3. UpdatePackageManifest
        bool savePackageVersion = true;
        var updatePackageManifestOperation = yooAssetResourcePackage.UpdatePackageManifestAsync(packageVersion, savePackageVersion);
        yield return updatePackageManifestOperation;

        if (updatePackageManifestOperation.Status != EOperationStatus.Succeed)
        {
            Debug.LogError(updatePackageManifestOperation.Error);
            yield break;
        }

        //4. Download
        PrepareDownloader();
        yield break;
    }

    private void PrepareDownloader()
    {
        int downloadingMaxNum = 10;
        int failedTryAgain = 3;
        var downloader = yooAssetResourcePackage.CreateResourceDownloader(downloadingMaxNum, failedTryAgain);

        if (downloader.TotalDownloadCount == 0)
        {
            EnterSangoGameRoot();
            Debug.Log("û���κ�������Ҫ����Ŷ~");
            return;
        }

        int totalDownloadCount = downloader.TotalDownloadCount;
        long totalDownloadBytes = downloader.TotalDownloadBytes;

        downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
        downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
        downloader.OnDownloadOverCallback = OnDownloadOverFunction;
        downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;

        downloaderOperation = downloader;

        hotFixWindow.OpenHotFixPanel();
        hotFixWindow.SetHotFixInfoText(totalDownloadBytes);

        Debug.Log("�����Ѿ�׼������������Ŷ~");
    }

    private IEnumerator RunDownloader(ResourceDownloaderOperation downloader)
    {
        downloader.BeginDownload();
        hotFixWindow.SetTips("�������ظ�����");
        yield return downloader;
        if (downloader.Status == EOperationStatus.Succeed)
        {
            Debug.Log("���سɹ�");
            EnterSangoGameRoot();
        }
        else
        {
            Debug.Log("����ʧ��");
        }
    }

    private void OnDownloadProgressUpdateFunction(int totalDownloadCount, int currentDownloadCount, long totalDownloadBytes, long currentDownloadBytes)
    {
        Debug.Log($"�ļ�����: {totalDownloadCount}, �������ļ����� {currentDownloadCount}, �ܴ�С: {totalDownloadBytes}, �����ش�С: {currentDownloadBytes}");
        float progress = (float)currentDownloadBytes / totalDownloadBytes;
        hotFixWindow.SetLoadingProgress(progress);
    }

    private void OnStartDownloadFileFunction(string fileName, long sizeBytes)
    {
        Debug.Log($"��ʼ����: {fileName}, �ļ���С: {sizeBytes}");
    }

    private void OnDownloadOverFunction(bool isSucceed)
    {
        Debug.Log($"����������: {isSucceed}");
    }

    private void OnDownloadErrorFunction(string fileName, string error)
    {
        Debug.Log($"���س���: {fileName}, ����ԭ��: {error}");
    }

    private static byte[] GetAssetData(string dllName)
    {
        return dllAssetDataDict[dllName];
    }

    private static void LoadMetadataForAOTAssemblies()
    {
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyNames)
        {
            byte[] dllBytes = GetAssetData(aotDllName);
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} return:{err}");
        }
    }
}
