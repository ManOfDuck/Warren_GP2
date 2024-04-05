// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleCPPActor.generated.h"

UCLASS()
class AExampleCPPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExampleCPPActor();

#pragma region unreal Functions
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
#pragma

private:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 100.f;

public:
	UFUNCTION(BlueprintCallable)
	void DoThing();

	UFUNCTION(BlueprintPure)
	int32 ReturnThing(int32 A, int32 B);
};
