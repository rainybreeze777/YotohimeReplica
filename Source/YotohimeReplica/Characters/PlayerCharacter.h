// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class YOTOHIMEREPLICA_API APlayerCharacter : public ACharacterBase
{
  GENERATED_BODY()

public:
  APlayerCharacter();

private:
  UPROPERTY(EditAnywhere, Category="PlayerCharacter")
  USpringArmComponent* CameraBoom;
  UPROPERTY(EditAnywhere, Category = "PlayerCharacter")
  UCameraComponent* Camera;
};
