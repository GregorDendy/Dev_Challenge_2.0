// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
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

//Get round controller from the 
void AMarble::SetRoundControl(ARoundController *roundControl)
{
	RoundControl = roundControl;
}

void AMarble::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	FName PositiveTag = FName("Green");
	if (OtherActor!=nullptr && OtherActor->ActorHasTag(PositiveTag))
	{
		for (auto tag : OtherActor->Tags)
		{
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Yellow, tag.ToString());
		}
		RoundControl->IncreaseScore(5);
	}
	FName NegativeTag = FName("Red");
	if (OtherActor != nullptr && OtherActor->ActorHasTag(NegativeTag))
	{
		for (auto tag : OtherActor->Tags)
		{
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Yellow, tag.ToString());
		}
		RoundControl->IncreaseScore(-2);
	}

}
