// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UE4WinterJamGameMode.h"
#include "UE4WinterJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4WinterJamGameMode::AUE4WinterJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
