// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Gamemode.generated.h"

/**
 * 
 */
UCLASS()
class SLASHABASHA_API AGM_Gamemode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
	
};
