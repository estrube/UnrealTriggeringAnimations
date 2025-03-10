// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TriggerAnimTutorial : ModuleRules
{
	public TriggerAnimTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "LevelSequence"});

        PrivateDependencyModuleNames.AddRange(new string[] { "MovieScene" });
	}
}
