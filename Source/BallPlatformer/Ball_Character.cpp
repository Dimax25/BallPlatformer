// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball_Character.h"

// Sets default values
ABall_Character::ABall_Character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SceneComponent = CreateDefaultSubobject<USceneComponent>
}

// Called when the game starts or when spawned
void ABall_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABall_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

