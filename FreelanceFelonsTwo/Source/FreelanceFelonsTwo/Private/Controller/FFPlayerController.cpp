// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/FFPlayerController.h"

#include "EnhancedInputSubsystems.h"

void AFFPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->AddMappingContext(BaseInputContext, 0);
		Subsystem->AddMappingContext(WalkInputContext, 0);
	}
}

void AFFPlayerController::SetWalkInput()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->RemoveMappingContext(VehicleInputContext);
		Subsystem->AddMappingContext(WalkInputContext, 0);
	}
}

void AFFPlayerController::SetVehicleInput()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->RemoveMappingContext(WalkInputContext);
		Subsystem->AddMappingContext(VehicleInputContext, 0);
	}
}
