// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/FFCombatComponent.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "HUD/FFWeaponSelect.h"
#include "Kismet/GameplayStatics.h"

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
	
	EquippedWeapon = UnlockedWeapons[WeaponSelectionWidget->GetSelection()];
}

