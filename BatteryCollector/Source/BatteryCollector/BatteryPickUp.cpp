// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickUp.h"

// Set default value
ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);

	// Base power level of the batery
	BatteryPower = 150.0f;
}

void ABatteryPickUp::WasCollected_Implementation()
{
	// Use the base pickup behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

float  ABatteryPickUp::GetPower()
{
	return BatteryPower;
}