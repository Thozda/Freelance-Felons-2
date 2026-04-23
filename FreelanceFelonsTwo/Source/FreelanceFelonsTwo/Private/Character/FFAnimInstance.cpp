// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/FFAnimInstance.h"

#include "Character/FFCharacter.h"

void UFFAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	FFCharacter = Cast<AFFCharacter>(TryGetPawnOwner());
}

void UFFAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (FFCharacter == nullptr) return;

	Speed = FFCharacter->GetSpeed();
	IsSneaking = FFCharacter->GetIsSneaking();
	IsJumping = FFCharacter->GetIsJumping();
	IsFalling = FFCharacter->GetIsFalling();
}
