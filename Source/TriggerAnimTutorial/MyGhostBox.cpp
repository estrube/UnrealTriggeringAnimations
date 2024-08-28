// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGhostBox.h"

AMyGhostBox::AMyGhostBox()
{
	OnActorBeginOverlap.AddDynamic(this, &AMyGhostBox::PlayAnimation);
}

void AMyGhostBox::BeginPlay()
{
	Super::BeginPlay();
}

void AMyGhostBox::PlayAnimation(class AActor* overlappedActor, class AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		ATriggerAnimTutorialCharacter* character = Cast<ATriggerAnimTutorialCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
		if (character && ghost)
		{
			if (ghost->SequencePlayer)
			{
				ghost->SequencePlayer->Play();
			}
		}
	}
}
