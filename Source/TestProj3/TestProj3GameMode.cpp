// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProj3GameMode.h"
#include "TestProj3Character.h"
#include "UObject/ConstructorHelpers.h"

ATestProj3GameMode::ATestProj3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
