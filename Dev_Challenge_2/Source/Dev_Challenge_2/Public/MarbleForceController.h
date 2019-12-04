// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Marble.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarbleForceController.generated.h"

UCLASS()
class DEV_CHALLENGE_2_API AMarbleForceController : public AActor
{
	GENERATED_BODY()

public:
	AMarbleForceController();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime);

public:
	UFUNCTION(BlueprintCallable, Category = "Ball")
		void HitBall();

	UFUNCTION(BlueprintCallable, Category = "Ball")
		bool CheckIfClickingMarble();

	UFUNCTION(BlueprintCallable, Category = "Ball")
		void SetFireAngle(float value);

	void SetCurrentMarble(AMarble *newMarble);

private:
	UPROPERTY(EditAnywhere, Category = Marble)
	AMarble* marble;
	//UPROPERTY(EditAnywhere, Category = Marble)
	//AMarbleSpawnController* SpawnController;

	UPROPERTY(EditAnywhere, Category = Marble)
		float PowerMultiplier = 1.0f;


	UStaticMeshComponent *meshComp;
	FVector cameraLocation;
	FVector FireDirection;


	FVector GetMousePosition();
	FVector CalculateDirection();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)// Category = Marble)
	int32 FireAngle = 35;
	UPROPERTY(BlueprintReadOnly)
	float FirePower;
};
