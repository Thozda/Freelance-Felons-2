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
class UBoxComponent;
class UInputAction;
class UAnimMontage;

UENUM()
enum class EVehicleState : uint8
{
	EVS_Parked,
	EVS_Traffic,
	EVS_Transition,
	EVS_Player,

	EVS_MAX
};

UENUM(BlueprintType)
enum class EDriveTrain : uint8
{
	EDT_FrontWheelDrive UMETA(DisplayName = "FWD"),
	EDT_RearWheelDrive UMETA(DisplayName = "RWD"),
	EDT_FourWheelDrive UMETA(DisplayName = "4WD"),
	
	EDT_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT()
struct FDoorData
{
	GENERATED_BODY()

	UPROPERTY()
	UStaticMeshComponent* DoorMesh;
	
	UPROPERTY()
	USceneComponent* TracePoint;

};

USTRUCT()
struct FWheelData
{
	GENERATED_BODY()

	UPROPERTY()
	UStaticMeshComponent* WheelMesh;
	
	UPROPERTY()
	USceneComponent* TracePoint;

	UPROPERTY()
	FHitResult WheelGroundedTrace;

	bool bRearWheel;
	
};

UCLASS()
class FREELANCEFELONSTWO_API AFFVehicle : public APawn, public IInteractInterface
{
	GENERATED_BODY()

public:
	AFFVehicle();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void VehicleInteract(APawn* Instigator) override;
	
	void PossessVehicle();

	UFUNCTION(BlueprintCallable)
	void CharacterExit();

	UFUNCTION(BlueprintImplementableEvent)
	void AnimateDoorEntry();

	UFUNCTION(BlueprintImplementableEvent)
	void AnimateDoorEntryClose();

	UFUNCTION(BlueprintImplementableEvent)
	void AnimateDoorExitOpen();

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

	float MaxEntryDistance = 150.f;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UAnimMontage* EnterMontage;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UAnimMontage* ExitAnim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* CurrentDoor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool EnteringDriversDoor;

	//
	//Movement
	//
	void ApplyVehicleForwardInput(float Input);
	void ApplyForceAtWheel(const FWheelData& WheelData, float Input);
	void ApplyVehicleSteeringInput(float DeltaTime);
	void RotateWheelMesh(const FWheelData& Wheel, float Input);
	void ApplyHandbrake(const FWheelData& Wheel);

	TArray<FWheelData> Wheels;
	float TargetSteerAngle = 0.f;
	float CurrentSteerAngle = 0.f;
	bool bHandbrakeActive = false;

	UPROPERTY(EditAnywhere)
	EDriveTrain DriveTrain = EDriveTrain::EDT_RearWheelDrive;
	
	UPROPERTY(EditAnywhere)
	float MaxWheelHeight = 50.f;

	UPROPERTY(EditAnywhere)
	float EngineForce = 1000000.f;
	
	UPROPERTY(EditAnywhere)
	float MaxSpeed = 4470.f;
	
	UPROPERTY(EditAnywhere)
	float MinLateralFriction = 1.f;
	
	UPROPERTY(EditAnywhere)
	float MaxLateralFriction = 1.f;
	
	UPROPERTY(EditAnywhere)
	float MaxSteeringAngle = 30.f;
	
	UPROPERTY(EditAnywhere)
	float MinSteeringAngle = 5.f;
	
	UPROPERTY(EditAnywhere)
	float MaxSteeringInterpSpeed = 2.f;

	UPROPERTY(EditAnywhere)
	float HandbrakeForce = 2.f;

	UPROPERTY(EditAnywhere)
	float HandbrakeGripMultiplier = 0.5f;

	//
	//Suspension
	//
	UPROPERTY(EditAnywhere)
	float SpringStrength = 150000.f;
	
	UPROPERTY(EditAnywhere)
	float SpringDampening = 8000.f;

	//Radius
	UPROPERTY(EditAnywhere)
	float WheelGroundOffset = 30.f;
	
private:
	//
	//Player
	//
	UPROPERTY()
	APawn* InstigatorCharacter = nullptr;

	UPROPERTY()
	APlayerController* PlayerController;
	
	//
	//Components
	//
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Root;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* CharacterSocketLeft;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* CharacterSocketRight;

	//Doors
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LeftDoor;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* LeftDoorTracePoint;
	
	FDoorData DriversDoorData;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RightDoor;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RightDoorTracePoint;
	
	UPROPERTY()
	TArray<FDoorData> Doors;

	//Wheels
	float FrontLeftWheelData = 0;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontLeftWheel;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* FrontLeftWheelTracePoint;
	
	float FrontRightWheelData = 1;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontRightWheel;
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* FrontRightWheelTracePoint;
	
	float RearLeftWheelData = 2;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RearLeftWheel;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RearLeftWheelTracePoint;
	
	float RearRightWheelData = 3;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RearRightWheel;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RearRightWheelTracePoint;
	
	//
	//Input
	//
	void FFInteract();
	void FFVehicleInteract();
	void FFHandbreak();
	void FFHandbreakReleased();
	
	UFUNCTION()
	void FFLook(const FInputActionValue& Value);

	UFUNCTION()
	void FFMove(const FInputActionValue& Value);

	UFUNCTION()
	void FFMoveReset(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* VehicleInteractAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* HandbreakAction;

	//
	//Movement
	//
	void UpdateWheelGroundedTrace();
	FHitResult WheelGroundedCheck(const FWheelData& WheelData);
	float CalculateForcePerWheel();
	void LateralWheelFriction();

	//
	//Suspension
	//
	void ApplySuspension();
	void PositionWheelMesh(const FWheelData& Wheel);

public:
	
};
