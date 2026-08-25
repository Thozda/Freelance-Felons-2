// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/FFCombatComponent.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Character/FFCharacter.h"
#include "HUD/FFWeaponSelect.h"
#include "Kismet/GameplayStatics.h"
#include "Weapons/FFWeapon.h"

UFFCombatComponent::UFFCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UFFCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	CreateWeaponSelectionWidget();
}

void UFFCombatComponent::CreateWeaponSelectionWidget()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		WeaponSelectionWidget = Cast<UFFWeaponSelect>(CreateWidget(PlayerController, WeaponSelectionWidgetClass));
		if (WeaponSelectionWidget == nullptr) return;
		WeaponSelectionWidget->AddToViewport();
		WeaponSelectionWidget->SetVisibility(ESlateVisibility::Hidden);
		WeaponSelectionWidget->SetSectionCount(UnlockedWeapons.Num());
	}
}

void UFFCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UFFCombatComponent::OpenWeaponSelection()
{
	if (WeaponSelectionWidget == nullptr) return;
	WeaponSelectionWidget->SetVisibility(ESlateVisibility::Visible);
	for (int32 i = 0; i < UnlockedWeapons.Num(); i++)
	{
		UMaterialInstance* Icon = UnlockedWeapons[i].GetDefaultObject()->WeaponIcon;
		if (Icon) WeaponSelectionWidget->SetWeaponIcon(i, UnlockedWeapons[i].GetDefaultObject()->WeaponIcon);
	}
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		FInputModeGameAndUI InputMode;
		PlayerController->SetInputMode(InputMode);
		PlayerController->SetShowMouseCursor(true);
	}
}

void UFFCombatComponent::CloseWeaponSelection()
{
	if (WeaponSelectionWidget == nullptr) return;
	WeaponSelectionWidget->SetVisibility(ESlateVisibility::Hidden);
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		FInputModeGameOnly InputMode;
		PlayerController->SetInputMode(InputMode);
		PlayerController->SetShowMouseCursor(false);
		FVector2D Viewport = UWidgetLayoutLibrary::GetViewportSize(this);
		FVector ScreenCenter = FVector(Viewport.X / 2, Viewport.Y / 2, 0.f);
		PlayerController->SetMouseLocation(ScreenCenter.X, ScreenCenter.Y);
	}
}

void UFFCombatComponent::SelectWeapon()
{
	if (WeaponSelectionWidget == nullptr) return;

	if (EquippedWeapon) EquippedWeapon->Destroy();
	
	TSubclassOf<AFFWeapon> WeaponToEquip = UnlockedWeapons[WeaponSelectionWidget->GetSelection()];

	UWorld* World = GetWorld();
	AFFCharacter* FFCharacter = Cast<AFFCharacter>(GetOwner());
	if (FFCharacter == nullptr || FFCharacter->GetMesh() == nullptr || World == nullptr) return;

	EquippedWeapon = World->SpawnActor<AFFWeapon>(WeaponToEquip);
	if (EquippedWeapon == nullptr) return;

	FName MontageSection = GetIsUnequipped() ? FName("Unequip") : FName("Equip");
	UAnimInstance* AnimInstance = FFCharacter->GetMesh()->GetAnimInstance();
	if (AnimInstance && EquipMontage)
	{
		AnimInstance->Montage_Play(EquipMontage);
		AnimInstance->Montage_JumpToSection(MontageSection);
	}
	
	EquippedWeapon->AttachToComponent(FFCharacter->GetMesh(),
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("RightHandSocket"));
	
}

bool UFFCombatComponent::GetIsUnequipped() const
{
	if (EquippedWeapon == nullptr || UnequippedClass == nullptr) return true;
	
	return EquippedWeapon->GetClass() == UnequippedClass;
}

void UFFCombatComponent::SetIsAiming(bool NewValue)
{
	bIsAiming = NewValue;
}

void UFFCombatComponent::SetIsFireButtonPressed(bool NewValue)
{
	bIsFireButtonPressed = NewValue;
}
