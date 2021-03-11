// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FG19GPDEGREEPROJECT_API AFPSGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	
};