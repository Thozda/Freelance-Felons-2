// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/FFWeapon.h"

AFFWeapon::AFFWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
	SetRootComponent(WeaponMesh);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AFFWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFFWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
