// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle/FFVehicle.h"

#include "KismetTraceUtils.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

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

	//
	//Doors
	//
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(Body);
	LeftDoorTracePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoorTracePoint"));
	LeftDoorTracePoint->SetupAttachment(LeftDoor);
	FDoorData LeftDoorData;
	LeftDoorData.DoorMesh = LeftDoor;
	LeftDoorData.TracePoint = LeftDoorTracePoint;
	LeftDoorData.DoorSide = EDoorSide::EDS_LeftSide;
	Doors.Add(LeftDoorData);

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

void AFFVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//
//Entry / Exit
//
void AFFVehicle::VehicleInteract(AActor* InteractInstigator)
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
	UE_LOG(LogTemp, Warning, TEXT("Enter Vehicle"))

	
	
	switch (VehicleState)
	{
	case EVehicleState::EVS_Parked:
		//which door is the player at
		//what length of time before drivable

		break;
	case EVehicleState::EVS_Traffic:
		//spawn NPC - animate getting out drivers side
		//Which side is the player getting in from

		break;
	}
}

void AFFVehicle::Exit()
{
	
}
