// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickUp.h"

// Set default value
ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickUp::WasCollected_Implementation()
{
	// Use the base pickup behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}