// Fill out your copyright notice in the Description page of Project Settings.

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
	//forceController->SetCurrentMarble(currentMarble);
}

void AMarbleSpawnController::DestroyMarble()
{
	if (currentMarble != nullptr)
	{
		currentMarble->Destroy();
	}
}

//Remove old marble and get new one
void AMarbleSpawnController::GetNewMarble()
{
	//if (currentMarble->marbleState == currentMarble->FIRED)
	{
		DestroyMarble();
		SpawnMarble();
	}
}
