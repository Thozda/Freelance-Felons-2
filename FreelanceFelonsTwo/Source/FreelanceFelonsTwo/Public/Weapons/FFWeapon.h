// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FFWeapon.generated.h"

class UImage;

UCLASS()
class FREELANCEFELONSTWO_API AFFWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	AFFWeapon();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UMaterialInstance* WeaponIcon;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* WeaponMesh;

public:	

};
