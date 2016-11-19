// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PickUp.h"
#include "BatteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickUp : public APickUp
{
	GENERATED_BODY()

public:

	// Called when the game starts or when spawned
	ABatteryPickUp();

	/* Override was collected function - use Implementation because its a blueprint Native Event */
	void WasCollected_Implementation() override;
};
