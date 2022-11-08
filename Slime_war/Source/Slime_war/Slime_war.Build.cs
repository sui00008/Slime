// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Slime_war : ModuleRules
{
	public Slime_war(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
