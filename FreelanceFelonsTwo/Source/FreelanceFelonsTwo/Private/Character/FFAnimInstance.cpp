// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/FFAnimInstance.h"

#include "KismetAnimationLibrary.h"
#include "Character/FFCharacter.h"
#include "Controller/FFPlayerController.h"
#include "Kismet/GameplayStatics.h"

void UFFAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	FFCharacter = Cast<AFFCharacter>(TryGetPawnOwner());
}

void UFFAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	FFCharacter = FFCharacter == nullptr ? Cast<AFFCharacter>(TryGetPawnOwner()) : FFCharacter;
	if (FFCharacter == nullptr) return;

	Speed = FFCharacter->GetSpeed();
	MoveYaw = UKismetAnimationLibrary::CalculateDirection(FFCharacter->GetVelocity(), FFCharacter->GetActorRotation());
	//UE_LOG(LogTemp, Warning, TEXT("Yaw: %f"), FFCharacter->GetMovementYaw())
	LookPitch = FMath::Clamp(FFCharacter->GetLookDelta().Pitch, -90.f, 90.f);
	LookYaw = FMath::Clamp(FFCharacter->GetLookDelta().Yaw, -90.f, 90.f);
	IsSneaking = FFCharacter->GetIsSneaking();
	IsJumping = FFCharacter->GetIsJumping();
	IsFalling = FFCharacter->GetIsFalling();
	IsUnequipped = FFCharacter->GetIsUnequipped();
	IsAiming = FFCharacter->GetIsAiming();
}

void UFFAnimInstance::CloseDoor()
{
	AFFPlayerController* FFController = Cast<AFFPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (FFController)
	{
		FFController->CloseDoor();
	}
}

void UFFAnimInstance::VehiclePossess()
{
	AFFPlayerController* FFController = Cast<AFFPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (FFController)
	{
		FFController->VehiclePossess();
	}
}

void UFFAnimInstance::DoorEnterAnimation()
{
	AFFPlayerController* FFController = Cast<AFFPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (FFController)
	{
		FFController->EntryAnimationDoor();
	}
}

void UFFAnimInstance::DoorExitAnimation()
{
	AFFPlayerController* FFController = Cast<AFFPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (FFController)
	{
		FFController->ExitAnimationDoor();
	}
}
