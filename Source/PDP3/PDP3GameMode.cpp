// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDP3GameMode.h"
#include "PDP3Character.h"
#include "UObject/ConstructorHelpers.h"

APDP3GameMode::APDP3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
