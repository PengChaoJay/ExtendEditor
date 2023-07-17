// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExtendEditorGameMode.h"
#include "ExtendEditorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExtendEditorGameMode::AExtendEditorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
