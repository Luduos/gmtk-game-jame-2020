// Fill out your copyright notice in the Description page of Project Settings.


#include "TurningEnvironment.h"

// Sets default values
ATurningEnvironment::ATurningEnvironment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	LeftMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Mesh"));
	LeftMesh->SetupAttachment(RootComponent);

	RightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Mesh"));
	RightMesh->SetupAttachment(RootComponent);

	BottomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Mesh"));
	BottomMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATurningEnvironment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurningEnvironment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ATurningEnvironment::GetCenterOfMeshes()
{
	FBox bounds = LeftMesh->Bounds.GetBox();
	bounds += RightMesh->Bounds.GetBox();
	bounds += BottomMesh->Bounds.GetBox();

	return bounds.GetCenter();
}

