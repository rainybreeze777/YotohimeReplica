// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

class APlayerCameraManager;

/**
 * 
 */
UCLASS()
class YOTOHIMEREPLICA_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
private:
	APlayerCameraManager* CameraManager;
	APawn* PlayerPawn;

public:
	APlayerControllerBase();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	void MoveForward(float axisValue);

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	void MoveSideways(float axisValue);

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	void LookUp(float Value);

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	void LookSideways(float Value);
};
