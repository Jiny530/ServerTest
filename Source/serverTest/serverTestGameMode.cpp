// Copyright Epic Games, Inc. All Rights Reserved.

#include "serverTestGameMode.h"
#include "serverTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AserverTestGameMode::AserverTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
