// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Interface/InteractInterface.h"
#include "FFVehicle.generated.h"

class USceneComponent;
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;

UENUM()
enum class EVehicleState : uint8
{
	EVS_Parked,
	EVS_Traffic,
	EVS_Transition,
	EVS_Player,

	EVS_MAX
};

UENUM()
enum class EDoorSide : uint8
{
	EDS_LeftSide,
	EDS_RightSide,

	EDS_MAX
};

USTRUCT()
struct FDoorData
{
	GENERATED_BODY()

	UPROPERTY()
	UStaticMeshComponent* DoorMesh;
	
	UPROPERTY()
	USceneComponent* TracePoint;

	EDoorSide DoorSide;
};

UCLASS()
class FREELANCEFELONSTWO_API AFFVehicle : public APawn, public IInteractInterface
{
	GENERATED_BODY()

public:
	AFFVehicle();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void VehicleInteract(AActor* Instigator) override;

protected:
	virtual void BeginPlay() override;

	EVehicleState VehicleState = EVehicleState::EVS_Parked;

	//
	//Entry / Exit
	//
	void VerifyEntry();
	void Enter(const FDoorData& Door);
	TOptional<FDoorData> SelectDoor();
	bool NoDoorObstacles(const FDoorData& Door);
	void Exit();

	float MaxEntryDistance = 130.f;

private:
	UPROPERTY()
	AActor* InstigatorCharacter = nullptr;
	
	//
	//Components
	//
	UPROPERTY()
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LeftDoor;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* LeftDoorTracePoint;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RightDoor;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RightDoorTracePoint;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontLeftWheel;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontRightWheel;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RearLeftWheel;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RearRightWheel;

	UPROPERTY()
	TArray<FDoorData> Doors;


public:
	
};
