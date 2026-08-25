// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FFCharacter.generated.h"

class UFFAnimInstance;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UFFCombatComponent;

UENUM()
enum class ELocomotionState : uint8
{
	ELS_Sneak,
	ELS_Walk,
	ELS_Sprint,
	ELS_Jump,

	ELS_MAX
};

UENUM()
enum class ETurningState : uint8
{
	ETS_NotTurning,
	ETS_TurningLeft,
	ETS_TurningRight,

	ETS_MAX
};

UCLASS()
class FREELANCEFELONSTWO_API AFFCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFFCharacter();
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	virtual void BeginPlay() override;
	virtual void Landed(const FHitResult& Hit) override;

	UPROPERTY(EditAnywhere)
	UFFCombatComponent* CombatComponent;
	
private:
	//
	//Components
	//
	UPROPERTY()
	UCameraComponent* Camera;

	UPROPERTY()
	USpringArmComponent* CameraArm;

	UPROPERTY()
	USkeletalMeshComponent* MetahumanBody;

	//
	//Input
	//
	void SetLocomotionState(ELocomotionState NewState);
	void SwitchLocomotion();
	void FFWalk();
	void FFSprint();
	void FFSneak();
	void FFJump();
	void FFInteract();
	void FFVehicleInteract();
	void FFWeaponSelectMenu(bool bOpen);

	void AutoCancelSprint();
	void CalculateWalkSpeed();
	
	UFUNCTION()
	void FFLook(const FInputActionValue& Value);

	UFUNCTION()
	void FFMove(const FInputActionValue& Value);

	UFUNCTION()
	void SprintPressed(const FInputActionValue& Value);

	UFUNCTION()
	void SneakPressed(const FInputActionValue& Value);

	UFUNCTION()
	void JumpPressed(const FInputActionValue& Value);

	UFUNCTION()
	void WeaponSelectPressed(const FInputActionValue& Value);

	UFUNCTION()
	void WeaponSelectReleased(const FInputActionValue& Value);

	UFUNCTION()
	void WeaponSelect(const FInputActionValue& Value);

	UFUNCTION()
	void AimPressed(const FInputActionValue& Value);

	UFUNCTION()
	void AimReleased(const FInputActionValue& Value);

	UFUNCTION()
	void FirePressed(const FInputActionValue& Value);

	UFUNCTION()
	void FireReleased(const FInputActionValue& Value);
	
	bool bCanEquippedSprint = false;

	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	ELocomotionState LocomotionState = ELocomotionState::ELS_Walk;
	ELocomotionState PreJumpLocomotionState = ELocomotionState::ELS_Walk;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float WalkSpeed = 600.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float SprintSpeed = 900.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float SneakSpeed = 400.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* SneakAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* VehicleInteractAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* WeaponSelectOpenAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* WeaponSelectCloseAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* WeaponSelectAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* AimPressedAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* AimReleasedAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* FirePressedAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* FireReleasedAction;

	//
	//Animation
	//
	void CheckIsFalling();
	void CharacterRotation(float DeltaTime);

	ETurningState TurningState = ETurningState::ETS_NotTurning;
	float TurningTargetYaw;

	UPROPERTY(EditAnywhere)
	UAnimMontage* TurningMontage;

	//
	//Interact
	//
	TArray<AActor*> GetInteractableActorsInRange();
	float InteractRadius = 100;

	UPROPERTY()
	AActor* LatestVehicleInteraction;

	//
	//Utility
	//
	AActor* GetClosestActorInArray(TArray<AActor*> Actors);
	
public:
	float GetSpeed() const;
	FRotator GetLookDelta() const;
	bool GetIsSneaking() const;
	bool GetIsJumping() const;
	bool GetIsFalling();
	bool GetIsUnequipped() const;
	bool GetIsAiming() const;
	
	FORCEINLINE AActor* GetLatestVehicleInteraction() const { return LatestVehicleInteraction; }

};
