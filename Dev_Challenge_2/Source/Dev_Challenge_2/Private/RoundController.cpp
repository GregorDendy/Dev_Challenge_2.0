// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"//remove with print 
#include "TimerManager.h"
#include "RoundController.h"

// Sets default values
ARoundController::ARoundController() : CurrentScore(0), RoundRunning(false)//change to false if starting with ui
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoundController::BeginPlay()
{
	Super::BeginPlay();
	StartTimer();
}

// Called every frame
void ARoundController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GetWorldTimerManager().GetTimerRemaining(RoundTimerHandle);
	GEngine->AddOnScreenDebugMessage(1, 1, FColor::Cyan, FString::FromInt(StaticCast<int>(GetWorldTimerManager().GetTimerRemaining(RoundTimerHandle)+1)));
}

int32 ARoundController::GetRemainingRoundTime()
{
	return StaticCast<int>(GetWorldTimerManager().GetTimerRemaining(RoundTimerHandle) + 1);
}

void ARoundController::IncreaseScore(int32 Value)
{
		CurrentScore += Value;
}

void ARoundController::StartTimer()
{
	RoundRunning = true;
	GetWorldTimerManager().SetTimer(RoundTimerHandle, this, &ARoundController::EndRound, RoundTimer, false);
	GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Red, "Timer Started");
}

void ARoundController::EndRound()
{
	GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Red, "Timer Ended");
	RoundRunning = false;
}



