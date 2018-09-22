// Fill out your copyright notice in the Description page of Project Settings.

#include "block_Grid.h"
#include "block.h"
#include "Engine/World.h"


// Sets default values
Ablock_Grid::Ablock_Grid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Ablock_Grid::BeginPlay()
{
	Super::BeginPlay();

	// Make position vector, offset from Grid location
	const FVector blockLocation = FVector(0.f, 0.f, 0.f) + GetActorLocation();
	// Spawn a block
	Ablock* NewBlock = GetWorld()->SpawnActor<Ablock>(blockLocation, FRotator(0, 0, 0));
	
}

// Called every frame
void Ablock_Grid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

