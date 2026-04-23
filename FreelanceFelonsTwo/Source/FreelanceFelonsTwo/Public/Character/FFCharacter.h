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

UENUM()
enum class ELocomotionState : uint8
{
	ELS_Sneak,
	ELS_Walk,
	ELS_Sprint,
	ELS_Jump,

	ELS_MAX
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

	void AutoCancelSprint();
	
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

	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	ELocomotionState LocomotionState = ELocomotionState::ELS_Walk;
	ELocomotionState PreJumpLocomotionState = ELocomotionState::ELS_Walk;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float MouseSensitivity = 5.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float WalkSpeed = 600.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float SprintSpeed = 900.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	float SneakSpeed = 400.f;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* BaseInputContext;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* WalkInputContext;
	
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

	//
	//Animation
	//
	void CheckIsFalling();

	//
	//Interact
	//
	TArray<AActor*> GetInteractableActorsInRange();
	float InteractRadius = 100;

	//
	//Utility
	//
	AActor* GetClosestActorInArray(TArray<AActor*> Actors);
	
public:
	float GetSpeed() const;
	bool GetIsSneaking() const;
	bool GetIsJumping() const;
	bool GetIsFalling();

};
