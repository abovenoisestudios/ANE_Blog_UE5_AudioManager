// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyUEProjectGameMode.h"
#include "MyUEProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyUEProjectGameMode::AMyUEProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
