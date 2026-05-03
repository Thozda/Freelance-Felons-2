// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle/FFVehicle.h"

#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Controller/FFPlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AFFVehicle::AFFVehicle()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	SetRootComponent(Root);
	Root->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Root->SetCollisionResponseToAllChannels(ECR_Ignore);
	Root->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	Root->SetSimulatePhysics(true);
	
	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm);

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(GetRootComponent());
	Body->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	CharacterSocketLeft = CreateDefaultSubobject<USceneComponent>(TEXT("CharacterSocketLeft"));
	CharacterSocketLeft->SetupAttachment(GetRootComponent());

	CharacterSocketRight = CreateDefaultSubobject<USceneComponent>(TEXT("CharacterSocketRight"));
	CharacterSocketRight->SetupAttachment(GetRootComponent());

	//
	//Doors
	//
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(Body);
	LeftDoorTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoorTracePoint"));
	LeftDoorTracePoint->SetupAttachment(LeftDoor);
	DriversDoorData.DoorMesh = LeftDoor;
	DriversDoorData.TracePoint = LeftDoorTracePoint;
	Doors.Add(DriversDoorData);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(Body);
	RightDoorTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoorTracePoint"));
	RightDoorTracePoint->SetupAttachment(RightDoor);
	FDoorData RightDoorData;
	RightDoorData.DoorMesh = RightDoor;
	RightDoorData.TracePoint = RightDoorTracePoint;
	Doors.Add(RightDoorData);
	
	//
	//Wheels
	//
	FrontLeftWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLeftWheel"));
	FrontLeftWheel->SetupAttachment(Body);
	FrontLeftWheelData.WheelMesh = FrontLeftWheel;
	FrontLeftWheelTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("FrontLeftWheelTracePoint"));
	FrontLeftWheelTracePoint->SetupAttachment(Body);
	FrontLeftWheelTracePoint->SetRelativeLocation(FrontLeftWheel->GetRelativeLocation());
	FrontLeftWheelData.TracePoint = FrontLeftWheelTracePoint;

	FrontRightWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRightWheel"));
	FrontRightWheel->SetupAttachment(Body);
	FrontRightWheelData.WheelMesh = FrontRightWheel;
	FrontRightWheelTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("FrontRightWheelTracePoint"));
	FrontRightWheelTracePoint->SetupAttachment(Body);
	FrontRightWheelTracePoint->SetRelativeLocation(FrontRightWheel->GetRelativeLocation());
	FrontRightWheelData.TracePoint = FrontRightWheelTracePoint;

	RearLeftWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearLeftWheel"));
	RearLeftWheel->SetupAttachment(Body);
	RearLeftWheelData.WheelMesh = RearLeftWheel;
	RearLeftWheelTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RearLeftWheelTracePoint"));
	RearLeftWheelTracePoint->SetupAttachment(Body);
	RearLeftWheelTracePoint->SetRelativeLocation(RearLeftWheel->GetRelativeLocation());
	RearLeftWheelData.TracePoint = RearLeftWheelTracePoint;

	RearRightWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearRightWheel"));
	RearRightWheel->SetupAttachment(Body);
	RearRightWheelData.WheelMesh = RearRightWheel;
	RearRightWheelTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RearRightWheelTracePoint"));
	RearRightWheelTracePoint->SetupAttachment(Body);
	RearRightWheelTracePoint->SetRelativeLocation(RearRightWheel->GetRelativeLocation());
	RearRightWheelData.TracePoint = RearRightWheelTracePoint;

}

void AFFVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFFVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//
//Input
//
void AFFVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::FFLook);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::FFMove);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ThisClass::FFInteract);
		EnhancedInputComponent->BindAction(VehicleInteractAction, ETriggerEvent::Triggered, this, &ThisClass::FFVehicleInteract);
		EnhancedInputComponent->BindAction(HandbreakAction, ETriggerEvent::Triggered, this, &ThisClass::FFHandbreak);
	}
}

void AFFVehicle::FFLook(const FInputActionValue& Value)
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

void AFFVehicle::FFMove(const FInputActionValue& Value)
{
	//these are the magnitude of the controllers direction
	float ForwardInput = -Value.Get<FVector2D>().X;
	float RightInput = Value.Get<FVector2D>().Y;

	ApplyForceAtWheel(RearLeftWheelData, ForwardInput);
	ApplyForceAtWheel(RearRightWheelData, ForwardInput);

	//This is the controllers direction
	FRotator CameraRotation = GetControlRotation();
	CameraRotation.Pitch = 0.f;
	FVector CameraForward = UKismetMathLibrary::GetForwardVector(CameraRotation);
	FVector CameraRight = UKismetMathLibrary::GetRightVector(CameraRotation);

	//This is the final movement vector
	FVector Direction = CameraForward * ForwardInput + CameraRight * RightInput;
	AddMovementInput(Direction.GetSafeNormal());
}

void AFFVehicle::FFInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"))
}

void AFFVehicle::FFVehicleInteract()
{
	VehicleInteract(InstigatorCharacter);
}

void AFFVehicle::FFHandbreak()
{
	UE_LOG(LogTemp, Warning, TEXT("Handbreak"))
}

//
//Entry / Exit
//
void AFFVehicle::VehicleInteract(APawn* InteractInstigator)
{
	IInteractInterface::VehicleInteract(InteractInstigator);

	//Early Bail Out
	bool bReturn = VehicleState == EVehicleState::EVS_Transition;
	if (bReturn) return;

	InstigatorCharacter = InteractInstigator;
		
	//if player in car - exit
	//else verify entry
	if (VehicleState == EVehicleState::EVS_Player)
	{
		Exit();
	}
	else
	{
		VerifyEntry();
	}
}

void AFFVehicle::VerifyEntry()
{
	//measures distance between door and player
	//performs trace to check for obstacles
	
	FDoorData DoorInRange;
	TOptional<FDoorData> DoorSelection = SelectDoor();
	if (DoorSelection.IsSet())
	{
		DoorInRange = DoorSelection.GetValue();
	}
	else
	{
		return;
	}
	
	if (NoDoorObstacles(DoorInRange))
	{
		Enter(DoorInRange);
	}
}

TOptional<FDoorData> AFFVehicle::SelectDoor()
{
	//checks distance between each door and the instigator until it finds a door less than the max entry distance
	//ensures the player is actually stood by a door not at the bonnet
	if (InstigatorCharacter == nullptr) return TOptional<FDoorData>();
	
	FVector CharacterLocation = InstigatorCharacter->GetActorLocation();
	for (FDoorData Door : Doors)
	{
		if (Door.TracePoint)
		{
			FVector DoorLocation = Door.TracePoint->GetComponentLocation();
			if (FVector::DistSquared(DoorLocation, CharacterLocation) <= (MaxEntryDistance * MaxEntryDistance))
			{
				return Door;
			}
		}
	}

	return TOptional<FDoorData>();
}

bool AFFVehicle::NoDoorObstacles(const FDoorData& Door)
{
	//Uses a box trace to check for obstacles in fron of the door, especially that would block animations
	if (InstigatorCharacter == nullptr) return false;
	if (Door.TracePoint)
	{
		FVector Start = Door.TracePoint->GetComponentLocation();
		FVector End = Start + Door.TracePoint->GetForwardVector() * MaxEntryDistance;
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.AddUnique(this);
		ActorsToIgnore.AddUnique(InstigatorCharacter);
		FHitResult OutHit;
		return !UKismetSystemLibrary::BoxTraceSingle(
			this,
			Start,
			End,
			FVector(10.f, 100.f, 50.f),
			Door.TracePoint->GetComponentRotation(),
			TraceTypeQuery1,
			false,
			ActorsToIgnore,
			EDrawDebugTrace::ForDuration,
			OutHit,
			true)
		;
	}
	return false;
}

void AFFVehicle::Enter(const FDoorData& Door)
{
	//Check if vehicle is parked or has NPC to take care of
	//work out animations depending on door player is using
	//To enable timing control, NPC spawning and PossessVehicle() handles by notifies on car enter animations
	//vehicle state to transition

	bool bShouldReturn = EnterMontage == nullptr ||
		Cast<ACharacter>(InstigatorCharacter) == nullptr ||
		Cast<ACharacter>(InstigatorCharacter)->GetMesh() == nullptr ||
		Cast<ACharacter>(InstigatorCharacter)->GetCapsuleComponent() == nullptr ||
		LeftDoor == nullptr;
	if (bShouldReturn) return;

	CurrentDoor = Door.DoorMesh;
	EnteringDriversDoor = CurrentDoor == LeftDoor;
	USkeletalMeshComponent* CharacterMesh = Cast<ACharacter>(InstigatorCharacter)->GetMesh();
	UCapsuleComponent* CharacterCapsule = Cast<ACharacter>(InstigatorCharacter)->GetCapsuleComponent();
	
	switch (VehicleState)
	{
	case EVehicleState::EVS_Parked:
		//which door is the player at - correct animation
		
		VehicleState = EVehicleState::EVS_Transition;
		CharacterMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CharacterCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//PossessVehicle();
		
		if (Door.DoorMesh == LeftDoor) //Getting in Drivers Side
		{
			InstigatorCharacter->AttachToComponent(CharacterSocketLeft, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			CharacterMesh->GetAnimInstance()->Montage_Play(EnterMontage);
			CharacterMesh->GetAnimInstance()->Montage_JumpToSection(FName("DriverParked"), EnterMontage);
		}
		else //Passenger Side
		{
			InstigatorCharacter->AttachToComponent(CharacterSocketRight, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			CharacterMesh->GetAnimInstance()->Montage_Play(EnterMontage);
			CharacterMesh->GetAnimInstance()->Montage_JumpToSection(FName("PassengerParked"), EnterMontage);
		}
		
		break;
	case EVehicleState::EVS_Traffic:
		//Which side is the player getting in from
		
		VehicleState = EVehicleState::EVS_Transition;
		CharacterMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CharacterCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//PossessVehicle();
		
		if (Door.DoorMesh == LeftDoor) //Getting in Drivers Side
		{
			InstigatorCharacter->AttachToComponent(CharacterSocketLeft, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			CharacterMesh->GetAnimInstance()->Montage_Play(EnterMontage);
			CharacterMesh->GetAnimInstance()->Montage_JumpToSection(FName("OpenDriverDoor"), EnterMontage);
		}
		else //Passenger Side
		{
			InstigatorCharacter->AttachToComponent(CharacterSocketRight, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			CharacterMesh->GetAnimInstance()->Montage_Play(EnterMontage);
			CharacterMesh->GetAnimInstance()->Montage_JumpToSection(FName("PassengerParked"), EnterMontage);
		}
		
		break;
	}
}

void AFFVehicle::PossessVehicle()
{
	PlayerController = PlayerController == nullptr ? UGameplayStatics::GetPlayerController(this, 0) : PlayerController;
	if (PlayerController == nullptr) return;

	PlayerController->Possess(this);
	AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(PlayerController);
	if (FFPlayerController)
	{
		FFPlayerController->SetVehicleInput();
	}
	
	VehicleState = EVehicleState::EVS_Player;
	AnimateDoorEntryClose();
	
	if (InstigatorCharacter && CharacterSocketLeft)
	{
		InstigatorCharacter->AttachToComponent(CharacterSocketLeft, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		InstigatorCharacter->SetActorHiddenInGame(true);
	}
}

void AFFVehicle::Exit()
{
	if (!NoDoorObstacles(DriversDoorData)) return; //Door Blocked - Exit Cancelled
	
	//Get player - ensure can be possessed
	PlayerController = PlayerController == nullptr ? UGameplayStatics::GetPlayerController(this, 0) : PlayerController;
	
	if (InstigatorCharacter && PlayerController && Cast<ACharacter>(InstigatorCharacter)->GetMesh() && Cast<ACharacter>(InstigatorCharacter)->GetCapsuleComponent())
	{
		VehicleState = EVehicleState::EVS_Transition;

		//Open door before showing player
		CurrentDoor = DriversDoorData.DoorMesh;
		EnteringDriversDoor = true;
		AnimateDoorExitOpen();
	}
}

void AFFVehicle::CharacterExit()
{
	//Called after the door has been opened for the character to get out
	PlayerController = PlayerController == nullptr ? UGameplayStatics::GetPlayerController(this, 0) : PlayerController;
	USkeletalMeshComponent* CharacterMesh = Cast<ACharacter>(InstigatorCharacter)->GetMesh();
	UCapsuleComponent* CharacterCapsule = Cast<ACharacter>(InstigatorCharacter)->GetCapsuleComponent();
	
	if (InstigatorCharacter && PlayerController && CharacterMesh && CharacterCapsule)
	{
		//Show the character, enable collision and play exit animation
		InstigatorCharacter->SetActorHiddenInGame(false);
		InstigatorCharacter->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		InstigatorCharacter->SetActorRotation(FRotator(0.f, GetActorRotation().Yaw - 90.f, 0.f));
		CharacterCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		CharacterMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		CharacterMesh->GetAnimInstance()->Montage_Play(ExitAnim);
		
		PlayerController->Possess(InstigatorCharacter);
		
		AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(PlayerController);
		if (FFPlayerController)
		{
			FFPlayerController->SetWalkInput();
			FFPlayerController->SetControlRotation(FRotator(0.f, InstigatorCharacter->GetActorRotation().Yaw - 180.f, 0.f));
		}
		
		VehicleState = EVehicleState::EVS_Parked;
	}
}

//
//Movement
//
FHitResult AFFVehicle::WheelGroundedCheck(FWheelData WheelData)
{
	if (WheelData.TracePoint == nullptr) return FHitResult();
	
	FVector Start = WheelData.TracePoint->GetComponentLocation();
	FVector End = Start - WheelData.TracePoint->GetUpVector() * MaxWheelHeight;
	TArray<AActor*> ActorsToIgnore;
	FHitResult OutHit;

	UKismetSystemLibrary::LineTraceSingle(
		this,
		Start,
		End,
		TraceTypeQuery1,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForOneFrame,
		OutHit,
		true
	);

	return OutHit;
}

void AFFVehicle::ApplyForceAtWheel(FWheelData WheelData, float Input)
{
	FHitResult HitResult;
	HitResult = WheelGroundedCheck(WheelData);
	
	if (!HitResult.bBlockingHit) return;

	Root->AddForceAtLocation(GetActorForwardVector() * Input * EngineForce, HitResult.ImpactPoint);
}
