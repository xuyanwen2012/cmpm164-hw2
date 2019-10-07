// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"
#include "Classes/Components/StaticMeshComponent.h"

AFloatingActor::AFloatingActor()
{
   PrimaryActorTick.bCanEverTick = true;

   VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

void AFloatingActor::BeginPlay()
{
   Super::BeginPlay();
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
   Super::Tick(DeltaTime);

   auto NewLocation = GetActorLocation();
   const auto RunningTime = GetGameTimeSinceCreation();
   const auto DeltaHeight = FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime);
   NewLocation.Z += DeltaHeight * FloatSpeed;

   SetActorLocation(NewLocation);
}
