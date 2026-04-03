// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FFCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

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
	UFUNCTION()
	void Look(const FInputActionValue& Value);

	UFUNCTION()
	void Move(const FInputActionValue& Value);

	UFUNCTION()
	void JumpPressed(const FInputActionValue& Value);

	UFUNCTION()
	void SprintPressed(const FInputActionValue& Value);

	UFUNCTION()
	void SneakPressed(const FInputActionValue& Value);

	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	UPROPERTY(EditAnywhere, Category="Input")
	float MouseSensitivity = 5.f;
	
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
