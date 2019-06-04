// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	ATank* ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No AI to possess."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s possessed by AI."), *ControlledTank->GetName());
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}