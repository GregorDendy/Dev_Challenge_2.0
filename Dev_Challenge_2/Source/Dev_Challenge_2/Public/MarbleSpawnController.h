// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MarbleForceController.h"
#include "Marble.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarbleSpawnController.generated.h"

UCLASS()
class DEV_CHALLENGE_2_API AMarbleSpawnController : public AActor
{
	GENERATED_BODY()
	
public:
	AMarbleSpawnController();
	UPROPERTY(EditDefaultsOnly, Category = "SpawnObject")
		TSubclassOf<AMarble> ActorToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		FVector SpawnLocation;

	UFUNCTION(BlueprintCallable, Category = "MarbleSpawn")
		void GetNewMarble();

	UPROPERTY(EditAnywhere)
		AMarbleForceController *forceController;

	AMarble * currentMarble;

	void SpawnMarble();
	void DestroyMarble();
};
