// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "TurningEnvironment.generated.h"

UCLASS(Abstract)
class GMTK_GAME_JAM_2020_API ATurningEnvironment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurningEnvironment();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
		FVector GetCenterOfMeshes();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* LeftMesh;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* RightMesh;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BottomMesh;
};
