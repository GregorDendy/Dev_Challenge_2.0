// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoundController.generated.h"

UCLASS()
class DEV_CHALLENGE_2_API ARoundController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoundController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTimerHandle RoundTimerHandle;

	UPROPERTY(EditAnywhere)
	int32 RoundTimer{ 30 };
	UPROPERTY(BlueprintReadOnly)
	int32 CurrentScore;
	
	UFUNCTION()
	void EndRound();

	UFUNCTION(BlueprintCallable)
	int32 GetRemainingRoundTime();

	void IncreaseScore(int32 Value);

	void StartTimer();
};
