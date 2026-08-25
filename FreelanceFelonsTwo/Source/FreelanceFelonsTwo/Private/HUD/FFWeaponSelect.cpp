// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/FFWeaponSelect.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetMathLibrary.h"

void UFFWeaponSelect::NativePreConstruct()
{
	Super::NativePreConstruct();
	
	WeaponWheelMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, WeaponWheelMaterialClass);
	
	WeaponWheel->SetBrushFromMaterial(WeaponWheelMaterial);
	WeaponWheelMaterial->SetScalarParameterValue(FName("Sections"), SectionCount);
	WeaponWheelMaterial->SetScalarParameterValue(FName("ActiveRotation"), 0);
	SectionSize = 360 / SectionCount;

	WeaponIcons.AddUnique(WeaponIcon0);
	WeaponIcons.AddUnique(WeaponIcon1);
	WeaponIcons.AddUnique(WeaponIcon2);
	WeaponIcons.AddUnique(WeaponIcon3);
	WeaponIcons.AddUnique(WeaponIcon4);
	WeaponIcons.AddUnique(WeaponIcon5);
	WeaponIcons.AddUnique(WeaponIcon6);
	WeaponIcons.AddUnique(WeaponIcon7);
	WeaponIcons.AddUnique(WeaponIcon8);
	WeaponIcons.AddUnique(WeaponIcon9);
	PositionWeaponIcons();
}

void UFFWeaponSelect::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	WheelUpdate();
}

void UFFWeaponSelect::WheelUpdate()
{
	if (GetVisibility() != ESlateVisibility::Visible) return;
	//checks if mouse is hovering over a different section than last frame
	if (SelectedSection == FMath::Modulo( FMath::RoundToInt32(GetMouseRotation() / SectionSize), SectionCount)) return;

	//Section = rotation (0-360, Top clockwise) divided by size (degrees), rounded to nearest section,
	//using modulo for when it rounds up out of bounds, looping it back to 0
	SelectedSection = FMath::Modulo( FMath::RoundToInt32(GetMouseRotation() / SectionSize), SectionCount);
	float SelectedRotation = SelectedSection * SectionSize;
	WeaponWheelMaterial->SetScalarParameterValue(FName("SelectedRotation"), SelectedRotation);
}

//
//Utility
//
void UFFWeaponSelect::PositionWeaponIcons()
{
	float Iterations = FMath::Min(SectionCount, WeaponIcons.Num());
	for (int32 i = 0; i < Iterations; i++)
	{
		float Yaw = i * SectionSize - 90;
		Yaw = FMath::Fmod(Yaw + 360, 360);
		FRotator Direction = FRotator(0.f, Yaw, 0.f);
		FVector Location = Direction.Vector() * WeaponIconDistance;
		
		UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(WeaponIcons[i]->Slot);
		if (CanvasPanelSlot)
		{
			CanvasPanelSlot->SetPosition(FVector2D(Location.X, Location.Y));
			WeaponIcons[i]->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (SectionCount < WeaponIcons.Num())
	{
		for (int32 i = SectionCount; i < WeaponIcons.Num(); i++)
		{
			WeaponIcons[i]->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

float UFFWeaponSelect::GetMouseRotation()
{
	float MouseX;
	float MouseY;
	FVector MouseLocation;
	if (GetOwningPlayer()->GetMousePosition(MouseX, MouseY))
	{
		MouseLocation = FVector(MouseX, MouseY, 0.f);
	}
	
	FVector2D Viewport = UWidgetLayoutLibrary::GetViewportSize(this);
	FVector ScreenCenter = FVector(Viewport.X / 2, Viewport.Y / 2, 0.f);

	//Ensures return is positive, adding 90 so that 0 is north
	float Rotation = UKismetMathLibrary::FindLookAtRotation(ScreenCenter, MouseLocation).Yaw + 90;
	return FMath::Fmod(Rotation + 360, 360);
}

//
//Getters / Setters
//
int32 UFFWeaponSelect::GetSelection()
{
	SetEquippedWeapon(SelectedSection);
	return SelectedSection;
}

void UFFWeaponSelect::SetEquippedWeapon(int32 Section)
{
	WeaponWheelMaterial->SetScalarParameterValue(FName("ActiveRotation"), Section * SectionSize);
}

void UFFWeaponSelect::SetSectionCount(int32 Count)
{
	SectionCount = Count;
	if (WeaponWheelMaterial) WeaponWheelMaterial->SetScalarParameterValue(FName("Sections"), SectionCount);
	SectionSize = 360 / SectionCount;
	PositionWeaponIcons();
}

void UFFWeaponSelect::SetWeaponIcon(int32 Weapon, UMaterialInstance* WeaponIcon)
{
	if (WeaponIcon == nullptr) return;
	UMaterialInstanceDynamic* Mat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, WeaponIcon);
	
	if (Mat && WeaponIcons[Weapon])
	{
		WeaponIcons[Weapon]->SetBrushFromMaterial(Mat);
	}
}
