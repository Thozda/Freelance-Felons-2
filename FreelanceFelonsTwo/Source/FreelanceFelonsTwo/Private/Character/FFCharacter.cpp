// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/FFCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AFFCharacter::AFFCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFFCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->AddMappingContext(InputMapping, 0);
	}
}

void AFFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ThisClass::JumpPressed);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &ThisClass::SprintPressed);
		EnhancedInputComponent->BindAction(SneakAction, ETriggerEvent::Triggered, this, &ThisClass::SneakPressed);
	}
}


void AFFCharacter::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Looking"))
}

void AFFCharacter::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Moving"))
}

void AFFCharacter::JumpPressed(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Jumping"))
}

void AFFCharacter::SprintPressed(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Sprinting"))
}

void AFFCharacter::SneakPressed(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Sneaking"))
}
