// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestProj3 : ModuleRules
{
	public TestProj3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ProceduralMeshComponent" });
	}
}
