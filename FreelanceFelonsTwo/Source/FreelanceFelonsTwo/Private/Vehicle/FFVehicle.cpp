// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle/FFVehicle.h"

#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Controller/FFPlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AFFVehicle::AFFVehicle()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm);

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(GetRootComponent());

	CharacterSocket = CreateDefaultSubobject<USceneComponent>(TEXT("CharacterSocket"));
	CharacterSocket->SetupAttachment(GetRootComponent());

	//
	//Doors
	//
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(Body);
	LeftDoorTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoorTracePoint"));
	LeftDoorTracePoint->SetupAttachment(LeftDoor);
	DriversDoorData.DoorMesh = LeftDoor;
	DriversDoorData.TracePoint = LeftDoorTracePoint;
	DriversDoorData.DoorSide = EDoorSide::EDS_LeftSide;
	Doors.Add(DriversDoorData);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(Body);
	RightDoorTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoorTracePoint"));
	RightDoorTracePoint->SetupAttachment(RightDoor);
	FDoorData RightDoorData;
	RightDoorData.DoorMesh = RightDoor;
	RightDoorData.TracePoint = RightDoorTracePoint;
	RightDoorData.DoorSide = EDoorSide::EDS_RightSide;
	Doors.Add(RightDoorData);
	
	//
	//Wheels
	//
	FrontLeftWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLeftWheel"));
	FrontLeftWheel->SetupAttachment(Body);

	FrontRightWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRightWheel"));
	FrontRightWheel->SetupAttachment(Body);

	RearLeftWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearLeftWheel"));
	RearLeftWheel->SetupAttachment(Body);

	RearRightWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearRightWheel"));
	RearRightWheel->SetupAttachment(Body);

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
			FVector(10.f, 75.f, 50.f),
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
	//does an NPC need spawning
	//transfer controller
	//vehicle state to transition
	
	PlayerController = PlayerController == nullptr ? UGameplayStatics::GetPlayerController(this, 0) : PlayerController;
	if (PlayerController == nullptr) return;
	
	switch (VehicleState)
	{
	case EVehicleState::EVS_Parked:
		//which door is the player at
		//what length of time before drivable
		
		VehicleState = EVehicleState::EVS_Transition;
		PossessVehicle();
		
		if (Door.DoorSide == EDoorSide::EDS_LeftSide) //Getting in Drivers Side
		{
		
		}
		else //Passenger Side
		{
		
		}
		
		break;
	case EVehicleState::EVS_Traffic:
		//spawn NPC - animate getting out drivers side
		//Which side is the player getting in from
		
		VehicleState = EVehicleState::EVS_Transition;
		PossessVehicle();
		
		if (Door.DoorSide == EDoorSide::EDS_LeftSide) //Getting in Drivers Side
		{
		
		}
		else //Passenger Side
		{
		
		}
		
		break;
	}
}

void AFFVehicle::PossessVehicle()
{
	//Player Controller Checked before Function call to ensure state not preemptivly changed.
	PlayerController->Possess(this);
	AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(PlayerController);
	if (FFPlayerController)
	{
		FFPlayerController->SetVehicleInput();
	}
	
	VehicleState = EVehicleState::EVS_Player;
	
	if (InstigatorCharacter && CharacterSocket)
	{
		InstigatorCharacter->AttachToComponent(CharacterSocket, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		InstigatorCharacter->SetActorEnableCollision(false);
		InstigatorCharacter->SetActorHiddenInGame(true);
	}
}

void AFFVehicle::Exit()
{
	if (!NoDoorObstacles(DriversDoorData)) return; //Door Blocked - Exit Cancelled
	
	//Get player - ensure can be possessed
	VehicleState = EVehicleState::EVS_Transition;
	PlayerController = PlayerController == nullptr ? UGameplayStatics::GetPlayerController(this, 0) : PlayerController;

	if (InstigatorCharacter && PlayerController)
	{
		PlayerController->Possess(InstigatorCharacter);
		AFFPlayerController* FFPlayerController = Cast<AFFPlayerController>(PlayerController);
		if (FFPlayerController)
		{
			FFPlayerController->SetWalkInput();
		}
		VehicleState = EVehicleState::EVS_Parked;
		
		InstigatorCharacter->SetActorEnableCollision(true);
		InstigatorCharacter->SetActorHiddenInGame(false);
		InstigatorCharacter->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		
	}
}
