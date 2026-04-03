// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/FFCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

AFFCharacter::AFFCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm);

}

void AFFCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController()))
	{
		Subsystem->AddMappingContext(BaseInputContext, 0);
		Subsystem->AddMappingContext(WalkInputContext, 0);
	}
}

void AFFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//
//Input
//
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
	if (Controller)
	{
		//Current pitch plus pitch input, clamped and scaled by sensitivity
		float Pitch = FMath::Clamp(GetControlRotation().Pitch + (Value.Get<FVector2D>().Y * MouseSensitivity), -89.f, 89.f);
		//Current yaw plus input, scaled by sensitivity
		float Yaw = GetControlRotation().Yaw + (Value.Get<FVector2D>().X * MouseSensitivity);
		//Combined rotator of Pitch and Yaw
		FRotator Direction = FRotator(Pitch, Yaw, 0.f);
		Controller->SetControlRotation(Direction);
	}
}

void AFFCharacter::Move(const FInputActionValue& Value)
{
	//these are the magnitude of the controllers direction
	float ForwardInput = -Value.Get<FVector2D>().X;
	float RightInput = Value.Get<FVector2D>().Y;

	//This is the controllers direction
	FRotator CameraRotation = GetControlRotation();
	FVector CameraForward = UKismetMathLibrary::GetForwardVector(CameraRotation);
	FVector CameraRight = UKismetMathLibrary::GetRightVector(CameraRotation);

	//This is the final movement vector
	FVector Direction = CameraForward * ForwardInput + CameraRight * RightInput;
	AddMovementInput(Direction.GetSafeNormal());
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
