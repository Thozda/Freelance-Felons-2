// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FFPlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class FREELANCEFELONSTWO_API AFFPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	//
	//Input
	//
	void SetWalkInput();
	void SetVehicleInput();

protected:
	virtual void BeginPlay() override;

private:
	//
	//Input
	//
	UPROPERTY(EditAnywhere, Category="Input")
	float MouseSensitivity = 5.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* BaseInputContext;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* WalkInputContext;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* VehicleInputContext;

public:
	FORCEINLINE float GetMouseSensitivity() const { return MouseSensitivity; }
	
};
