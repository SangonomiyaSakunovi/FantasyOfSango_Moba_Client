using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"UnityEngine.CoreModule.dll",
		"YooAsset.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Queue<object>
	// }}

	public void RefMethods()
	{
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// YooAsset.AssetOperationHandle YooAsset.ResourcePackage.LoadAssetSync<object>(string)
	}
}