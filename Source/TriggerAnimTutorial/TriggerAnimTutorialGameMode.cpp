// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TriggerAnimTutorialGameMode.h"
#include "TriggerAnimTutorialHUD.h"
#include "TriggerAnimTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATriggerAnimTutorialGameMode::ATriggerAnimTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATriggerAnimTutorialHUD::StaticClass();
}
