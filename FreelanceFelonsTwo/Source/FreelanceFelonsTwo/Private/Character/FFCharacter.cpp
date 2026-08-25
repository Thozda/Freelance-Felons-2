// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/FFCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Components/FFCombatComponent.h"
#include "Controller/FFPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interface/InteractInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

AFFCharacter::AFFCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm);

	CombatComponent = CreateDefaultSubobject<UFFCombatComponent>(TEXT("Combat Component"));

}

void AFFCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AFFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AutoCancelSprint();
	CheckIsFalling();
	CharacterRotation(DeltaTime);
}

void AFFCharacter::CharacterRotation(float DeltaTime)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance == nullptr || TurningMontage == nullptr) return;
	
	if (GetCharacterMovement()->Velocity.SizeSquared2D() < 25.f)
	{
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		
		float LookYaw = GetLookDelta().Yaw;
		//abs returns unsigned value
		if (FMath::Abs(LookYaw) > 75.f && TurningState == ETurningState::ETS_NotTurning && CombatComponent && !CombatComponent->GetIsUnequipped())
		{
			AnimInstance->Montage_Play(TurningMontage);
			if (LookYaw > 75.f)
			{
				TurningState = ETurningState::ETS_TurningRight;
				TurningTargetYaw = GetActorRotation().Yaw + 90.f;
				AnimInstance->Montage_JumpToSection(FName("Right"));
			}
			else
			{
				TurningState = ETurningState::ETS_TurningLeft;
				TurningTargetYaw = GetActorRotation().Yaw - 90.f;
				AnimInstance->Montage_JumpToSection(FName("Left"));
			}
		}
	}
	else
	{
		if (CombatComponent && !CombatComponent->GetIsUnequipped())
		{
			bUseControllerRotationYaw = true;
			GetCharacterMovement()->bOrientRotationToMovement = false;
		}
		else
		{
			bUseControllerRotationYaw = false;
			GetCharacterMovement()->bOrientRotationToMovement = true;
		}
	}

	if (TurningState > ETurningState::ETS_NotTurning)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation = FMath::RInterpTo(NewRotation, FRotator(0.f, TurningTargetYaw, 0.f), DeltaTime, 10.f);
		SetActorRotation(NewRotation);
		if (FMath::Abs(FMath::FindDeltaAngleDegrees(NewRotation.Yaw, TurningTargetYaw)) < 5.f)
		{
			TurningState = ETurningState::ETS_NotTurning;
			AnimInstance->Montage_Stop(0.5f, TurningMontage);
		}
	}
}

//
//Input
//
/**
 *	enhanced input callbacks call key pressed or released functions for sprinting and sneaking
 *	these functions call a setter for the locomotion state enum
 *	that setter calls a function containing a switch statement
 *	the switch statement calls the actioning function of the most recent input
 */

void AFFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::FFLook);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::FFMove);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ThisClass::FFJump);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &ThisClass::SprintPressed);
		EnhancedInputComponent->BindAction(SneakAction, ETriggerEvent::Triggered, this, &ThisClass::SneakPressed);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ThisClass::FFInteract);
		EnhancedInputComponent->BindAction(VehicleInteractAction, ETriggerEvent::Triggered, this, &ThisClass::FFVehicleInteract);
		EnhancedInputComponent->BindAction(WeaponSelectOpenAction, ETriggerEvent::Triggered, this, &ThisClass::WeaponSelectPressed);
		EnhancedInputComponent->BindAction(WeaponSelectCloseAction, ETriggerEvent::Triggered, this, &ThisClass::WeaponSelectReleased);
		EnhancedInputComponent->BindAction(WeaponSelectAction, ETriggerEvent::Triggered, this, &ThisClass::WeaponSelect);
		EnhancedInputComponent->BindAction(AimPressedAction, ETriggerEvent::Triggered, this, &ThisClass::AimPressed);
		EnhancedInputComponent->BindAction(AimReleasedAction, ETriggerEvent::Triggered, this, &ThisClass::AimReleased);
		EnhancedInputComponent->BindAction(FirePressedAction, ETriggerEvent::Triggered, this, &ThisClass::FirePressed);
		EnhancedInputComponent->BindAction(FireReleasedAction, ETriggerEvent::Triggered, this, &ThisClass::FireReleased);
	}
}

void AFFCharacter::FFLook(const FInputActionValue& Value)
{
	if (Controller && Cast<AFFPlayerController>(Controller))
	{
		AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(Controller);
		const float MouseSensitivity = FFPlayerController->GetMouseSensitivity();
		
		//Current pitch plus pitch input, clamped and scaled by sensitivity
		float Pitch = FMath::Clamp(GetControlRotation().Pitch + (Value.Get<FVector2D>().Y * MouseSensitivity), -89.f, 89.f);
		//Current yaw plus input, scaled by sensitivity
		float Yaw = GetControlRotation().Yaw + (Value.Get<FVector2D>().X * MouseSensitivity);
		//Combined rotator of Pitch and Yaw
		FRotator Direction = FRotator(Pitch, Yaw, 0.f);
		Controller->SetControlRotation(Direction);
	}
}

void AFFCharacter::FFMove(const FInputActionValue& Value)
{
	//these are the magnitude of the controllers direction
	float ForwardInput = -Value.Get<FVector2D>().X;
	float RightInput = Value.Get<FVector2D>().Y;

	//This is the controllers direction
	FRotator CameraRotation = GetControlRotation();
	CameraRotation.Pitch = 0.f;
	FVector CameraForward = UKismetMathLibrary::GetForwardVector(CameraRotation);
	FVector CameraRight = UKismetMathLibrary::GetRightVector(CameraRotation);

	//This is the final movement vector
	FVector FinalMovementDirection = CameraForward * ForwardInput + CameraRight * RightInput;
	AddMovementInput(FinalMovementDirection.GetSafeNormal());

	bCanEquippedSprint = ForwardInput > 0.9f && FMath::Abs(RightInput) < 0.1f;
}

void AFFCharacter::SprintPressed(const FInputActionValue& Value)
{
	if (LocomotionState != ELocomotionState::ELS_Sprint)
	{
		SetLocomotionState(ELocomotionState::ELS_Sprint);
	}
	else 
	{
		SetLocomotionState(ELocomotionState::ELS_Walk);
	}
}

void AFFCharacter::SneakPressed(const FInputActionValue& Value)
{
	if (LocomotionState != ELocomotionState::ELS_Sneak)
	{
		SetLocomotionState(ELocomotionState::ELS_Sneak);
	}
	else 
	{
		SetLocomotionState(ELocomotionState::ELS_Walk);
	}
}

void AFFCharacter::JumpPressed(const FInputActionValue& Value)
{
	if (LocomotionState != ELocomotionState::ELS_Jump)
	{
		PreJumpLocomotionState = LocomotionState;
	}
	
	SetLocomotionState(ELocomotionState::ELS_Jump);
}

void AFFCharacter::WeaponSelectPressed(const FInputActionValue& Value)
{
	FFWeaponSelectMenu(true);
}

void AFFCharacter::WeaponSelectReleased(const FInputActionValue& Value)
{
	FFWeaponSelectMenu(false);
}

void AFFCharacter::WeaponSelect(const FInputActionValue& Value)
{
	if (CombatComponent)
	{
		CombatComponent->SelectWeapon();
	}
	SwitchLocomotion();
}

void AFFCharacter::AimPressed(const FInputActionValue& Value)
{
	if (CombatComponent)
	{
		CombatComponent->SetIsAiming(true);
	}
	SwitchLocomotion();
}

void AFFCharacter::AimReleased(const FInputActionValue& Value)
{
	if (CombatComponent)
	{
		CombatComponent->SetIsAiming(false);
	}
	SwitchLocomotion();
}

void AFFCharacter::FirePressed(const FInputActionValue& Value)
{
	if (CombatComponent)
	{
		CombatComponent->SetIsFireButtonPressed(true);
	}
}

void AFFCharacter::FireReleased(const FInputActionValue& Value)
{
	if (CombatComponent)
	{
		CombatComponent->SetIsFireButtonPressed(false);
	}
}

void AFFCharacter::SetLocomotionState(ELocomotionState NewState)
{
	ELocomotionState OldState = LocomotionState;
	LocomotionState = NewState;

	if (OldState != NewState)
	{
		SwitchLocomotion();
	}
}

void AFFCharacter::SwitchLocomotion()
{
	switch (LocomotionState)
	{
	case ELocomotionState::ELS_Walk:
		FFWalk();
		break;
	case ELocomotionState::ELS_Sprint:
		FFSprint();
		break;
	case ELocomotionState::ELS_Sneak:
		FFSneak();
		break;
	case ELocomotionState::ELS_Jump:
		FFJump();
		break;
	}
}

void AFFCharacter::FFWalk()
{
	MovementComponent = MovementComponent == nullptr ? GetCharacterMovement() : MovementComponent;
	if (MovementComponent && CombatComponent)
	{
		if (CombatComponent->GetIsUnequipped())
		{
			MovementComponent->MaxWalkSpeed = WalkSpeed;
		}
		else
		{
			MovementComponent->MaxWalkSpeed = CombatComponent->GetIsAiming() ? WalkSpeed - 100 : WalkSpeed;
		}
	}
}

void AFFCharacter::FFSprint()
{
	MovementComponent = MovementComponent == nullptr ? GetCharacterMovement() : MovementComponent;
	if (MovementComponent && CombatComponent)
	{
		MovementComponent->MaxWalkSpeed = CombatComponent->GetIsUnequipped() ? SprintSpeed : SprintSpeed - 100;
	}
}

void AFFCharacter::FFSneak()
{
	MovementComponent = MovementComponent == nullptr ? GetCharacterMovement() : MovementComponent;
	if (MovementComponent)
	{
		MovementComponent->MaxWalkSpeed = SneakSpeed;
	}
}

void AFFCharacter::FFJump()
{
	Jump();
}

void AFFCharacter::CheckIsFalling()
{
	if (GetIsFalling())
	{
		
		if (LocomotionState != ELocomotionState::ELS_Jump)
		{
			PreJumpLocomotionState = LocomotionState;
		}

		SetLocomotionState(ELocomotionState::ELS_Jump);
	}
}

void AFFCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	SetLocomotionState(PreJumpLocomotionState);
}

void AFFCharacter::AutoCancelSprint()
{
	//If the player Stops
	if (GetSpeed() <= 50.f && LocomotionState == ELocomotionState::ELS_Sprint)
	{
		SetLocomotionState(ELocomotionState::ELS_Walk);
	}

	//If the player runs not forward with a weapon or ADS
	bool bEquippedReturn = CombatComponent &&
		!CombatComponent->GetIsUnequipped() &&
		!bCanEquippedSprint;
	if (bEquippedReturn)
	{
		SetLocomotionState(ELocomotionState::ELS_Walk);
	}

	//If the player ADS with weapon
	if (CombatComponent && !CombatComponent->GetIsUnequipped() && CombatComponent->GetIsAiming())
	{
		SetLocomotionState(ELocomotionState::ELS_Walk);
	}
}

//
//Interact
//
void AFFCharacter::FFInteract()
{
	TArray<AActor*> InteractableActors = GetInteractableActorsInRange();
	AActor* ClosestInteractableActor = GetClosestActorInArray(InteractableActors);
	IInteractInterface* InteractTarget = Cast<IInteractInterface>(ClosestInteractableActor);
	if (InteractTarget)
	{
		InteractTarget->Interact(this);
	}
}

void AFFCharacter::FFVehicleInteract()
{
	TArray<AActor*> InteractableActors = GetInteractableActorsInRange();
	AActor* ClosestInteractableActor = GetClosestActorInArray(InteractableActors);
	IInteractInterface* InteractTarget = Cast<IInteractInterface>(ClosestInteractableActor);
	if (InteractTarget)
	{
		LatestVehicleInteraction = ClosestInteractableActor;
		InteractTarget->VehicleInteract(this);
	}
}

TArray<AActor*> AFFCharacter::GetInteractableActorsInRange()
{
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
	UClass* ActorClassFilter = nullptr;
	TArray<AActor*> ActorsToIgnore;
	TArray<AActor*> ActorsInRange;
	UKismetSystemLibrary::SphereOverlapActors(
		this,
		GetActorLocation(),
		InteractRadius,
		ObjectTypeQuery,
		ActorClassFilter,
		ActorsToIgnore,
		ActorsInRange)
	;

	TArray<AActor*> InteractableActors;
	for (AActor* Actor : ActorsInRange)
	{
		if (Cast<IInteractInterface>(Actor))
		{
			InteractableActors.AddUnique(Actor);
		}
	}

	return InteractableActors;
}

//
//Combat
//
void AFFCharacter::FFWeaponSelectMenu(bool bOpen)
{
	AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(Controller);
	if (CombatComponent == nullptr || FFPlayerController == nullptr) return;
	if (bOpen)
	{
		CombatComponent->OpenWeaponSelection();
		FFPlayerController->SetWeaponSelectInput();
	}
	else
	{
		CombatComponent->CloseWeaponSelection();
		FFPlayerController->SetWalkInput();
	}
}

//
//Getters & Setters
//
float AFFCharacter::GetSpeed() const
{
	return GetVelocity().Size2D();
}

FRotator AFFCharacter::GetLookDelta() const
{
	FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(GetControlRotation(), GetActorRotation());
	return TurningState == ETurningState::ETS_NotTurning ? Delta : FRotator(Delta.Pitch, 0.f, Delta.Roll);
}

bool AFFCharacter::GetIsSneaking() const
{
	return LocomotionState == ELocomotionState::ELS_Sneak;
}

bool AFFCharacter::GetIsJumping() const
{
	return LocomotionState == ELocomotionState::ELS_Jump;
}

bool AFFCharacter::GetIsFalling()
{
	MovementComponent = MovementComponent == nullptr ? GetCharacterMovement() : MovementComponent;
	return MovementComponent && MovementComponent->IsFalling();
}

bool AFFCharacter::GetIsUnequipped() const
{
	if (CombatComponent)
	{
		return CombatComponent->GetIsUnequipped();
	}
	return true;
}

bool AFFCharacter::GetIsAiming() const
{
	if (CombatComponent)
	{
		return CombatComponent->GetIsAiming();
	}
	return false;
}

AActor* AFFCharacter::GetClosestActorInArray(TArray<AActor*> Actors)
{
	AActor* Closest = nullptr;
	for (AActor* Actor : Actors)
	{
		if (Actor != nullptr && Closest != nullptr)
		{
			if (GetDistanceTo(Actor) < GetDistanceTo(Closest))
			{
				Closest = Actor;
			}
		}
		else if (Actor != nullptr)
		{
			Closest = Actor;
		}
	}
	return Closest;
}
