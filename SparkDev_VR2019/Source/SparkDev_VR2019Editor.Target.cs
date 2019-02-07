

using UnrealBuildTool;
using System.Collections.Generic;

public class SparkDev_VR2019EditorTarget : TargetRules
{
	public SparkDev_VR2019EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "SparkDev_VR2019" } );
	}
}
