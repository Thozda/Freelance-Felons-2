// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FFAnimInstance.generated.h"

class AFFCharacter;
/**
 * 
 */
UCLASS()
class FREELANCEFELONSTWO_API UFFAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void CloseDoor();
	
	UFUNCTION(BlueprintCallable)
	void VehiclePossess();
	
	UFUNCTION(BlueprintCallable)
	void DoorEnterAnimation();
	
	UFUNCTION(BlueprintCallable)
	void DoorExitAnimation();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MoveYaw = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LookYaw = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LookPitch = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsSneaking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsJumping = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsFalling = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsUnequipped = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsAiming = false;

private:
	UPROPERTY()
	AFFCharacter* FFCharacter;

};
