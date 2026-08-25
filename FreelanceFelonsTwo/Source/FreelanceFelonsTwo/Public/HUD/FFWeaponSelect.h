// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FFWeaponSelect.generated.h"

class UCanvasPanel;
class UImage;
/**
 * 
 */
UCLASS()
class FREELANCEFELONSTWO_API UFFWeaponSelect : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 SectionCount = 6;

	UPROPERTY(VisibleAnywhere)
	int32 SectionSize = 60;

	UPROPERTY(VisibleAnywhere)
	float WeaponIconDistance = 260.f;

	UPROPERTY(EditAnywhere)
	UMaterialInstance* WeaponWheelMaterialClass;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCanvasPanel* CanvasPanel;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponWheel;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon0;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon2;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon3;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon4;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon5;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon6;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon7;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon8;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* WeaponIcon9;

private:
	float GetMouseRotation();
	void WheelUpdate();
	void PositionWeaponIcons();

	int32 SelectedSection = 0;

	UPROPERTY()
	UMaterialInstanceDynamic* WeaponWheelMaterial;

	UPROPERTY()
	TArray<UImage*> WeaponIcons;

public:
	int32 GetSelection();
	void SetEquippedWeapon(int32 Section);
	void SetSectionCount(int32 Count);
	void SetWeaponIcon(int32 Weapon, UMaterialInstance* WeaponIcon);
	
};
