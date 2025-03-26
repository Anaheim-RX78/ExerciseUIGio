// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExerciseUIGioGameMode.h"
#include "ExerciseUIGioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExerciseUIGioGameMode::AExerciseUIGioGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
