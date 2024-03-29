// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObject.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InteractableMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	InteractableMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	InteractableMeshComponent->SetStaticMesh(InteractableMesh);
	RootComponent = InteractableMeshComponent;

}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableObject::Interact_Implementation()
{
	GLog->Log("Interact base class: Interact_Implementation()");
}