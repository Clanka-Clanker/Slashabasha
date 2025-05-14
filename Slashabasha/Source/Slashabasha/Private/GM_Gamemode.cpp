// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Gamemode.h"

void AGM_Gamemode::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World!"));
}

