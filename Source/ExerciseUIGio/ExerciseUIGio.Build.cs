// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExerciseUIGio : ModuleRules
{
	public ExerciseUIGio(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
