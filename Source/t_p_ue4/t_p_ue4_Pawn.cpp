// Fill out your copyright notice in the Description page of Project Settings.

#include "t_p_ue4_Pawn.h"


// Sets default values
At_p_ue4_Pawn::At_p_ue4_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void At_p_ue4_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void At_p_ue4_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void At_p_ue4_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

