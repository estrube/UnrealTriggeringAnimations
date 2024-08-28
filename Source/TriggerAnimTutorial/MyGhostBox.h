// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerAnimTutorialCharacter.h"
#include "LevelSequence/Public/LevelSequenceActor.h"
#include "LevelSequence/Public/LevelSequencePlayer.h"
#include "Engine/TriggerBox.h"
#include "MyGhostBox.generated.h"

/**
 * 
 */
UCLASS()
class TRIGGERANIMTUTORIAL_API AMyGhostBox : public ATriggerBox
{
	GENERATED_BODY()
	

protected:
	virtual void BeginPlay() override;

public:
	AMyGhostBox();

	UFUNCTION()
		void PlayAnimation(class AActor* overlappedActor, class AActor* otherActor);

	UPROPERTY(EditAnywhere)
		ALevelSequenceActor* ghost;
};
