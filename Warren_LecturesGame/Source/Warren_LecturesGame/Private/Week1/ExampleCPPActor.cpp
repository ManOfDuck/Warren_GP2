// Fill out your copyright notice in the Description page of Project Settings.


#include "Week1/ExampleCPPActor.h"
#include "ExampleCPPActor.h"

// Sets default values
AExampleCPPActor::AExampleCPPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleCPPActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Update the actor's location when the game starts
	FVector NewLocation = FVector(500, 500, 200);
	SetActorLocation(NewLocation);
}

// Called every frame
void AExampleCPPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move the actor every frame if we haven't passed 1000 on the x-axis
	if (GetActorLocation().X < 1000)
	{
		FVector Offset = FVector(MoveSpeed * DeltaTime, 0.f, 0.f);
		AddActorLocalOffset(Offset);
	}
}

void AExampleCPPActor::DoThing()
{
    UE_LOG(LogTemp, Display, TEXT("Do a thing!"))
}

int32 AExampleCPPActor::ReturnThing(int32 A, int32 B)
{
    return A + B;
}