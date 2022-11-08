// Copyright Epic Games, Inc. All Rights Reserved.

#include "Slime_warGameMode.h"
#include "Slime_warCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASlime_warGameMode::ASlime_warGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
