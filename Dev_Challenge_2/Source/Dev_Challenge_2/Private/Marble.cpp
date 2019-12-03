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

void AMarble::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	FName tagName = FName("AAA");
	if (OtherActor!=nullptr && OtherActor->ActorHasTag(tagName))
	{
		for (auto tag : OtherActor->Tags)
		{
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Yellow, tag.ToString());
		}
	}

}
