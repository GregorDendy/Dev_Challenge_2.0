// Fill out your copyright notice in the Description page of Project Settings.

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

//To display on UI
int32 ARoundController::GetRemainingRoundTime()
{
	return StaticCast<int>(GetWorldTimerManager().GetTimerRemaining(RoundTimerHandle) + 1);//add one so number shows correctly
}

void ARoundController::IncreaseScore(int32 Value)
{
	if (RoundRunning)
	{
		CurrentScore += Value;
	}
}

void ARoundController::StartTimer()
{
	RoundRunning = true;
	GetWorldTimerManager().SetTimer(RoundTimerHandle, this, &ARoundController::EndRound, RoundTimer, false);
}

void ARoundController::EndRound()
{
	//Bool controls end screen UI
	RoundRunning = false;
}



