// Copyright Epic Games, Inc. All Rights Reserved.

#include "Forest_GameGameMode.h"
#include "Forest_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForest_GameGameMode::AForest_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
