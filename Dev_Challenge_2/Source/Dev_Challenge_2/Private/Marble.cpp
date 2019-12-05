// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "Marble.h"

// Sets default values
AMarble::AMarble()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	marbleState = MarbleState::READY;

	staticMeshComp = FindComponentByClass<UStaticMeshComponent>();
}

void AMarble::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AMarble::OnHit);
}

//Get round controller from the marble spawner so can change score
void AMarble::SetRoundControl(ARoundController *roundControl)
{
	RoundControl = roundControl;
}

//Score changes based on object hit
void AMarble::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor!=nullptr && OtherActor->ActorHasTag("Green"))
	{
		RoundControl->IncreaseScore(1);
		OtherActor->Destroy();
	}
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Blue"))
	{
		RoundControl->IncreaseScore(5);
		OtherActor->Destroy();
	}
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Red"))
	{
		RoundControl->IncreaseScore(-2);
		OtherActor->Destroy();
	}

}
