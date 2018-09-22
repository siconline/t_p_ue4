// Fill out your copyright notice in the Description page of Project Settings.

#include "block_Grid.h"
#include "block.h"
#include "Engine/World.h"


// Sets default values
Ablock_Grid::Ablock_Grid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set defaults
	size = 3;
	x_offset = (70.f);
	y_offset = (120.f);
	position_old = FVector(0.f, 0.f, 0.f);
}

// Called when the game starts or when spawned
void Ablock_Grid::BeginPlay()
{
	Super::BeginPlay();

	// Loop to spawn each block
	for (int32 i = 0; i < 7; i++) {

		// Make position vector, offset from Grid location
		const FVector blockLocation = position_old + GetActorLocation();
		// Spawn a block
		Ablock* NewBlock = GetWorld()->SpawnActor<Ablock>(blockLocation, FRotator(0, 0, 0));

		UE_LOG(LogActor, Warning, TEXT("new Block"))

		// Tell the block about its owner
		if (NewBlock != nullptr)
		{
			NewBlock->OwningGrid = this;
		}

		position_old.Y = position_old.Y + y_offset;

		if (position_old.X > 0.f) {
			position_old.X = position_old.X - x_offset;
		}
		else
		{
			position_old.X = position_old.X + x_offset;
		}
		
	}
	
}

// Called every frame
void Ablock_Grid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

