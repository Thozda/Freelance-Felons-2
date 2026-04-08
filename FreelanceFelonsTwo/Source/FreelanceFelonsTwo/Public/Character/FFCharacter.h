// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FFCharacter.generated.h"

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

private:
	//
	//Components
	//
	UPROPERTY()
	UCameraComponent* Camera;

	UPROPERTY()
	USpringArmComponent* CameraArm;
	
	//
	//Input
	//
	void SetLocomotionState(ELocomotionState NewState);
	void SwitchLocomotion();
	void FFWalk();
	void FFSprint();
	void FFSneak();

	UFUNCTION()
	void FFLook(const FInputActionValue& Value);

	UFUNCTION()
	void FFMove(const FInputActionValue& Value);

	UFUNCTION()
	void FFJump(const FInputActionValue& Value);

	UFUNCTION()
	void SprintPressed(const FInputActionValue& Value);

	UFUNCTION()
	void SneakPressed(const FInputActionValue& Value);

	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	ELocomotionState LocomotionState = ELocomotionState::ELS_Walk;
	
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

};
