// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "PickUp.h"


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	// All pickups start active
	bIsActive = true;

	// Create a Static Mesh component
	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickUpMesh;

}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

/* Returns actors state */
bool APickUp::IsActive()
{
	return bIsActive;
}

/* Sets the actors state */
void APickUp::SetActive(bool NewPickUpState)
{
	bIsActive = NewPickUpState;
}

void APickUp::WasCollected_Implementation()
{
	// Log a debug message
	FString PickUpDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickUpDebugString);

}

