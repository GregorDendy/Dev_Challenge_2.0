// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerManager.h"
#include "Engine/World.h"
#include "MarbleSpawnController.h"

// Sets default values
AMarbleSpawnController::AMarbleSpawnController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMarbleSpawnController::BeginPlay()
{
	Super::BeginPlay();
	SpawnMarble();
}

void AMarbleSpawnController::SpawnMarble()
{
	FActorSpawnParameters SpawnParams;
	FRotator rot{ 0 };
	currentMarble = GetWorld()->SpawnActor<AMarble>(ActorToSpawn, SpawnLocation, rot, SpawnParams);
	if (currentMarble != nullptr && forceController != nullptr)
	{
		forceController->SetCurrentMarble(currentMarble);
		currentMarble->SetRoundControl(roundControl);
	}
}

void AMarbleSpawnController::DestroyMarble()
{
	if (currentMarble != nullptr)
	{
		currentMarble->Destroy();
	}
}

//Timer that spawns new marble
void AMarbleSpawnController::StartMarbleTimer()
{
	GetWorldTimerManager().SetTimer(MarbleTimerHandle, this, &AMarbleSpawnController::GetNewMarble, 5.0f, false);
}

//Remove old marble and get new one
void AMarbleSpawnController::GetNewMarble()
{
	if (currentMarble->marbleState == currentMarble->FIRED)
	{
		DestroyMarble();
		SpawnMarble();
	}
}
