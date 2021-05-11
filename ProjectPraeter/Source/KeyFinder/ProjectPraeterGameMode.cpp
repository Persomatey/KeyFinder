// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPraeterGameMode.h"
#include "ProjectPraeterCharacter.h"

AProjectPraeterGameMode::AProjectPraeterGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AProjectPraeterCharacter::StaticClass();	
}
