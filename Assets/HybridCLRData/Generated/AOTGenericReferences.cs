using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"Kcp.dll",
		"System.dll",
		"UniTask.dll",
		"UnityEngine.CoreModule.dll",
		"YooAsset.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<object>
	// Cysharp.Threading.Tasks.UniTask<object>
	// System.Action<System.Memory<byte>>
	// System.Action<object,object>
	// System.Action<object>
	// System.Action<uint>
	// System.Buffers.IMemoryOwner<byte>
	// System.Collections.Generic.Dictionary<EventCode,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.LinkedList.Enumerator<EventCode>
	// System.Collections.Generic.LinkedList.Enumerator<object>
	// System.Collections.Generic.LinkedList<EventCode>
	// System.Collections.Generic.LinkedList<object>
	// System.Collections.Generic.Queue<object>
	// System.Func<object>
	// System.Memory<byte>
	// System.Net.Sockets.Kcp.Kcp<System.Net.Sockets.Kcp.KcpSegment>
	// System.Net.Sockets.Kcp.KcpCore<System.Net.Sockets.Kcp.KcpSegment>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<byte>
	// System.Runtime.CompilerServices.TaskAwaiter<System.Net.Sockets.UdpReceiveResult>
	// System.Span<byte>
	// System.Threading.Tasks.Task<System.Net.Sockets.UdpReceiveResult>
	// }}

	public void RefMethods()
	{
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ResourceService.<LoadAudioClipAsync>d__4>(System.Runtime.CompilerServices.TaskAwaiter&,ResourceService.<LoadAudioClipAsync>d__4&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<ResourceService.<LoadAudioClipAsync>d__4>(ResourceService.<LoadAudioClipAsync>d__4&)
		// object[] System.Array.Empty<object>()
		// System.Span<byte> System.MemoryExtensions.AsSpan<byte>(byte[])
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,AudioService.<PlayBGAudio>d__5>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,AudioService.<PlayBGAudio>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,AudioService.<PlayUIAudio>d__6>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,AudioService.<PlayUIAudio>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SangoKCPNet.IClientPeer.<Update>d__15>(System.Runtime.CompilerServices.TaskAwaiter&,SangoKCPNet.IClientPeer.<Update>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<AudioService.<PlayBGAudio>d__5>(AudioService.<PlayBGAudio>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<AudioService.<PlayUIAudio>d__6>(AudioService.<PlayUIAudio>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<SangoKCPNet.IClientPeer.<Update>d__15>(SangoKCPNet.IClientPeer.<Update>d__15&)
		// System.Threading.Tasks.Task<byte> System.Threading.Tasks.Task.Run<byte>(System.Func<System.Threading.Tasks.Task<byte>>)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// YooAsset.AssetOperationHandle YooAsset.ResourcePackage.LoadAssetAsync<object>(string)
	}
}