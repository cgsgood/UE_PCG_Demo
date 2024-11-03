// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCG_DemoGameMode.h"
#include "PCG_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

APCG_DemoGameMode::APCG_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
