// Fill out your copyright notice in the Description page of Project Settings.

#include "block.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
Ablock::Ablock()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> cubeMesh;
		FConstructorStatics()
			: cubeMesh(TEXT("/Game/Shapes/Sh_Cube.Sh_Cube"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create root scene component
	
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root0"));
	RootComponent = root;

	// Create static mesh component
	blockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	blockMesh->SetupAttachment(root);

	blockMesh->SetStaticMesh(ConstructorStatics.cubeMesh.Get());
	blockMesh->SetRelativeRotation(FRotator(45.f, -90.f, 45.f));
	blockMesh->SetRelativeLocation(FVector(-35.f, -25.f, 0.f));
	

}

// Called when the game starts or when spawned
void Ablock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

