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
	FHitResult WheelGroundedCheck(FWheelData WheelData);
	void ApplyForceAtWheel(FWheelData WheelData, float Input);

	UPROPERTY(EditAnywhere)
	float MaxWheelHeight = 50;

	UPROPERTY(EditAnywhere)
	float EngineForce = 500000;
	
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
	FWheelData FrontLeftWheelData;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontLeftWheel;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* FrontLeftWheelTracePoint;
	
	FWheelData FrontRightWheelData;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontRightWheel;
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* FrontRightWheelTracePoint;
	
	FWheelData RearLeftWheelData;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RearLeftWheel;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RearLeftWheelTracePoint;
	
	FWheelData RearRightWheelData;

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
	
	UFUNCTION()
	void FFLook(const FInputActionValue& Value);

	UFUNCTION()
	void FFMove(const FInputActionValue& Value);

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
	//Utility
	//

public:
	
};
