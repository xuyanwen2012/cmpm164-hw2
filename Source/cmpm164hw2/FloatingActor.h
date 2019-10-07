// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class CMPM164HW2_API AFloatingActor : public AActor
{
   GENERATED_BODY()

public:
   AFloatingActor();

protected:
   void BeginPlay() override;

   UPROPERTY(EditAnywhere)
   UStaticMeshComponent* VisualMesh;

   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
   float FloatSpeed = 20.0f;

public:
   void Tick(float DeltaTime) override;
};
