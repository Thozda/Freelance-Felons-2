// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FFCombatComponent.generated.h"


class AFFWeapon;
class UFFWeaponSelect;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FREELANCEFELONSTWO_API UFFCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFFCombatComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void OpenWeaponSelection();
	void CloseWeaponSelection();
	void SelectWeapon();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AFFWeapon>> UnlockedWeapons;

	UPROPERTY(VisibleAnywhere)
	TSubclassOf<AFFWeapon> EquippedWeapon;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UFFWeaponSelect> WeaponSelectionWidgetClass;

	UPROPERTY()
	UFFWeaponSelect* WeaponSelectionWidget;

private:	
	void CreateWeaponSelectionWidget();
		
};
