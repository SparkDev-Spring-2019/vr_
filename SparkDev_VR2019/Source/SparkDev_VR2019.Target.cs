

using UnrealBuildTool;
using System.Collections.Generic;

public class SparkDev_VR2019Target : TargetRules
{
	public SparkDev_VR2019Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SparkDev_VR2019" } );
	}
}
