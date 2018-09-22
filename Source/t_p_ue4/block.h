// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "block.generated.h"

UCLASS()
class T_P_UE4_API Ablock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ablock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	/** Dummy root component */
	UPROPERTY(EditAnywhere)
		class USceneComponent* root;

	/** StaticMesh component for the clickable block */
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* blockMesh;
	
};