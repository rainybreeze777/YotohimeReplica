// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

class UGameplayStatics;
class UKismetMathLibrary;

APlayerControllerBase::APlayerControllerBase()
{
}

void APlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();
	CameraManager = UGameplayStatics::GetPlayerCameraManager(this, 0);
	PlayerPawn = K2_GetPawn();
}

void APlayerControllerBase::MoveForward(float axisValue)
{
	FRotator CameraRotation = CameraManager->GetCameraRotation();
	FVector Forward = UKismetMathLibrary::GetForwardVector(CameraRotation);
	PlayerPawn->AddMovementInput(Forward, axisValue, false);
}

void APlayerControllerBase::MoveSideways(float axisValue)
{
	FRotator CameraRotation = CameraManager->GetCameraRotation();
	FVector Sideways = UKismetMathLibrary::GetRightVector(CameraRotation);
	PlayerPawn->AddMovementInput(Sideways, axisValue, false);
}

void APlayerControllerBase::LookUp(float Value)
{
	AddPitchInput(Value);
}

void APlayerControllerBase::LookSideways(float Value)
{
	AddYawInput(Value);
}