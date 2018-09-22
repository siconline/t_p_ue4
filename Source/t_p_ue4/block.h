// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "block.generated.h"

UCLASS()
class Ablock : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Dummy root component */
	UPROPERTY(EditAnywhere)
		class USceneComponent* root;

	/** StaticMesh component for the clickable block */
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* blockMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	Ablock();
	/** Are we currently active? */
	bool bIsActive;
	void HandleClicked();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Pointer to white material used on the focused block */
	UPROPERTY()
		class UMaterial* m_Base;

	/** Pointer to blue material used on inactive blocks */
	UPROPERTY()
		class UMaterialInstance* m_Blue;

	/** Pointer to green material used on active blocks */
	UPROPERTY()
		class UMaterialInstance* m_Green;

	/** Pointer to orange material used on active blocks */
	UPROPERTY()
		class UMaterialInstance* m_Orange;

	/** Pointer to red material used on active blocks */
	UPROPERTY()
		class UMaterialInstance* m_Red;

	/** Handle the block being clicked */
	UFUNCTION()
		void BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);

	TArray<Ablock*> blockArray;
};
