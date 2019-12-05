// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RoundController.h"
#include "MarbleForceController.h"
#include "Marble.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarbleSpawnController.generated.h"

UCLASS()
class DEV_CHALLENGE_2_API AMarbleSpawnController : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	AMarbleSpawnController();
	UPROPERTY(EditDefaultsOnly, Category = "SpawnObject")
	TSubclassOf<AMarble> ActorToSpawn;

	UPROPERTY(EditDefaultsOnly)
	FVector SpawnLocation;

	UFUNCTION(BlueprintCallable, Category = "MarbleSpawn")
	void GetNewMarble();

	UPROPERTY(EditAnywhere)
	AMarbleForceController *forceController;

	UPROPERTY(EditAnywhere)
	ARoundController *roundControl;

	UFUNCTION(BlueprintCallable)
	void StartMarbleTimer();
private:
	void SpawnMarble();

	void DestroyMarble();

	AMarble *currentMarble;

	FTimerHandle MarbleTimerHandle;
};
