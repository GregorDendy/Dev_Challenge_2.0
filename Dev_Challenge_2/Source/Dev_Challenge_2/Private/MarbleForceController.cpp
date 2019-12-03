// Fill out your copyright notice in the Description page of Project Settings.

#include "Math/UnrealMathUtility.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"
#include "MarbleForceController.h"

// Sets default values
AMarbleForceController::AMarbleForceController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMarbleForceController::BeginPlay()
{
	Super::BeginPlay();

	//Find camera location to find mouse position in world
	APlayerController *playerController = UGameplayStatics::GetPlayerController(this, 0);
	APlayerCameraManager *CameraManager = playerController->PlayerCameraManager;
	cameraLocation = CameraManager->GetCameraLocation();
}

FVector AMarbleForceController::CalculateDirection()
{
	FVector MousePos = GetMousePosition();
	FVector BallPos = marble->GetActorLocation();

	return BallPos - MousePos;
}

//Find mouse position in the world, at same height as the ball
FVector AMarbleForceController::GetMousePosition()
{
	APlayerController *PlayerController = UGameplayStatics::GetPlayerController(this, 0);

	float X, Y;
	PlayerController->GetMousePosition(X, Y);
	FVector2D MousePosition(X, Y);
	FHitResult HitResult;
	FVector mousePos;
	if (PlayerController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, false, HitResult) == true)
	{
		mousePos = HitResult.ImpactPoint;
	}

	return mousePos;
}

//Add force to the marble based on direction and power
void AMarbleForceController::HitBall()
{
	if (marble->marbleState == marble->CHARGING)
	{
		FVector	direction = CalculateDirection();
		float power = FMath::Clamp<float>(direction.Size()*PowerMultiplier, 1, 1000);
		FVector forceToAdd = direction/*.GetSafeNormal()*/ * power;

		//
		float newHypotenuse = forceToAdd.X;
		forceToAdd.Z = (FMath::Sin(FMath::DegreesToRadians(FireAngle))) * newHypotenuse;
		forceToAdd.X = (FMath::Cos(FMath::DegreesToRadians(FireAngle))) * newHypotenuse;
		
		if (meshComp != nullptr)
		{
			meshComp->AddImpulse(forceToAdd * meshComp->GetMass());
		}
		marble->marbleState = marble->FIRED;
	}
}

//Check if mouse is over the marble and if it's in a state to be fired
bool AMarbleForceController::CheckIfClickingMarble()
{
	APlayerController *PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	float X, Y;
	PlayerController->GetMousePosition(X, Y);
	FVector2D MousePosition(X, Y);
	FHitResult HitResult;
	if (PlayerController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, false, HitResult) == true)
	{
		AActor *hitActor = HitResult.GetActor();
		bool ClickedMarble = hitActor->ActorHasTag("marble");
		if (ClickedMarble && marble != nullptr)
		{
			meshComp = Cast<UStaticMeshComponent>(marble->GetRootComponent());
			if (marble->marbleState == marble->READY)
			{
				marble->marbleState = marble->CHARGING;
				return true;
			}
		}
	}
	return false;
}

void AMarbleForceController::SetPowerMultiplier(float value)
{
	PowerMultiplier = value;
}

void AMarbleForceController::SetFireAngle(float value)
{
	FireAngle = value;
}

//Stores the current marble in scene so it can be interacted with
void AMarbleForceController::SetCurrentMarble(AMarble *newMarble)
{
	if (newMarble != nullptr)
	{
		marble = newMarble;
	}
}