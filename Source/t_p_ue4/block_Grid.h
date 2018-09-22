// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "block_Grid.generated.h"

UCLASS()
class T_P_UE4_API Ablock_Grid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ablock_Grid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Number of blocks along each side of grid */
	UPROPERTY(EditAnywhere)
		int32 size;

	UPROPERTY()
		FVector position_old;

	UPROPERTY()
		float x_offset;

	UPROPERTY()
		float y_offset;

};
