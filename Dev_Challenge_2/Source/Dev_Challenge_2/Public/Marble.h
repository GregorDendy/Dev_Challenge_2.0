// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Marble.generated.h"

UCLASS()
class DEV_CHALLENGE_2_API AMarble : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMarble();

public:
	//Ball can only be fired when in Ready state
	enum MarbleState
	{
		READY,
		CHARGING,
		FIRED,
	};

	MarbleState marbleState;
};