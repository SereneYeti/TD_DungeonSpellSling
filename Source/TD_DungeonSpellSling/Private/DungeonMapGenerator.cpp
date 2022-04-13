// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonMapGenerator.h"

// Sets default values
ADungeonMapGenerator::ADungeonMapGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADungeonMapGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADungeonMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("It's Working!"));
}

