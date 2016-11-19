// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	/* Return the mesh for the Pickup */
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickUpMesh; }

	/* Return if the pickup is active*/
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	/* Allows other classes to saftly change whether or not the pickup is active */
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickUpState);


	/*Function to call when the pickup is collected*/
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	virtual void WasCollected_Implementation();

protected:

	/* True when pickup can be used and false when pickup is deactivated*/
	bool bIsActive;

private:

	/* Static Mesh to repesent the pickup in the level */
	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PickUpMesh;
	
};
