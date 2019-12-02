// Fill out your copyright notice in the Description page of Project Settings.


#include "Marble.h"

// Sets default values
AMarble::AMarble()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	marbleState = MarbleState::READY;
}
