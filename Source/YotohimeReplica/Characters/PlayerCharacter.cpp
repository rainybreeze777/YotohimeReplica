// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

APlayerCharacter::APlayerCharacter()
{
  CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
  CameraBoom->SetupAttachment(RootComponent);

  Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
  Camera->SetupAttachment(CameraBoom);
}