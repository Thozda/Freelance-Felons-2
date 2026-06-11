// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/FFPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Character/FFCharacter.h"
#include "Vehicle/FFVehicle.h"

void AFFPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->AddMappingContext(BaseInputContext, 0);
		Subsystem->AddMappingContext(WalkInputContext, 0);
		Subsystem->AddMappingContext(WeaponSelectToggleInputContext, 0);
	}
}

void AFFPlayerController::SetWalkInput()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->RemoveMappingContext(VehicleInputContext);
		Subsystem->RemoveMappingContext(WeaponSelectInputContext);
		Subsystem->AddMappingContext(WalkInputContext, 0);
		Subsystem->AddMappingContext(WeaponSelectToggleInputContext, 0);
		bVehicleInput = false;
	}
}

void AFFPlayerController::SetVehicleInput()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->RemoveMappingContext(WalkInputContext);
		Subsystem->RemoveMappingContext(WeaponSelectToggleInputContext);
		Subsystem->AddMappingContext(VehicleInputContext, 0);
		bVehicleInput = true;
	}
}

void AFFPlayerController::SetWeaponSelectInput()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->RemoveMappingContext(WalkInputContext);
		Subsystem->AddMappingContext(WeaponSelectInputContext, 0);
		bVehicleInput = false;
	}
}

void AFFPlayerController::CloseDoor()
{
	AFFCharacter* FFCharacter = Cast<AFFCharacter>(GetPawn());
	if (FFCharacter)
	{
		AFFVehicle* FFVehicle = Cast<AFFVehicle>(FFCharacter->GetLatestVehicleInteraction());
		if (FFVehicle)
		{
			FFVehicle->CloseDoor();
		}
	}
}

void AFFPlayerController::VehiclePossess()
{
	AFFCharacter* FFCharacter = Cast<AFFCharacter>(GetPawn());
	if (FFCharacter)
	{
		AFFVehicle* FFVehicle = Cast<AFFVehicle>(FFCharacter->GetLatestVehicleInteraction());
		if (FFVehicle)
		{
			FFVehicle->PossessVehicle();
		}
	}
	AFFVehicle* FFVehicle = Cast<AFFVehicle>(GetPawn());
	if (FFVehicle)
	{
		FFVehicle->PossessVehicle();
	}
}

void AFFPlayerController::EntryAnimationDoor()
{
	AFFCharacter* FFCharacter = Cast<AFFCharacter>(GetPawn());
	if (FFCharacter)
	{
		AFFVehicle* FFVehicle = Cast<AFFVehicle>(FFCharacter->GetLatestVehicleInteraction());
		if (FFVehicle)
		{
			FFVehicle->AnimateDoorEntry();
		}
	}
}

void AFFPlayerController::ExitAnimationDoor()
{
	AFFCharacter* FFCharacter = Cast<AFFCharacter>(GetPawn());
	if (FFCharacter)
	{
		AFFVehicle* FFVehicle = Cast<AFFVehicle>(FFCharacter->GetLatestVehicleInteraction());
		if (FFVehicle)
		{
			FFVehicle->AnimateDoorEntryClose();
		}
	}
}
