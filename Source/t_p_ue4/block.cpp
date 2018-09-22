// Fill out your copyright notice in the Description page of Project Settings.

#include "block.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstance.h"


// Sets default values
Ablock::Ablock()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> cubeMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> m_Base;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> m_Blue;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> m_Green;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> m_Orange;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> m_Red;
		FConstructorStatics()
			: cubeMesh(TEXT("/Game/Shapes/Sh_Cube.Sh_Cube"))
			, m_Base(TEXT("/Game/Materials/M_BasicWall.M_BasicWall"))
			, m_Blue(TEXT("/Game/Materials/M_Blue.M_Blue"))
			, m_Green(TEXT("/Game/Materials/M_Blue.M_Green"))
			, m_Orange(TEXT("/Game/Materials/M_Blue.M_Orange"))
			, m_Red(TEXT("/Game/Materials/M_Blue.M_Red"))
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
	// Set start parameter
	blockMesh->SetStaticMesh(ConstructorStatics.cubeMesh.Get());
	blockMesh->SetRelativeRotation(FRotator(45.f, -90.f, 45.f));
	blockMesh->SetRelativeLocation(FVector(-35.f, -25.f, 0.f));

	blockMesh->SetMaterial(0, ConstructorStatics.m_Blue.Get());

	// Save a pointer to the materials
	m_Base = ConstructorStatics.m_Base.Get();
	m_Blue = ConstructorStatics.m_Blue.Get();
	m_Green = ConstructorStatics.m_Green.Get();
	m_Orange = ConstructorStatics.m_Orange.Get();
	m_Red = ConstructorStatics.m_Red.Get();
	

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

