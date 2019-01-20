// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectBGameMode.h"
#include "ProjectBPlayerController.h"
#include "ProjectBPawn.h"

AProjectBGameMode::AProjectBGameMode()
{
	// no pawn by default
	DefaultPawnClass = AProjectBPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AProjectBPlayerController::StaticClass();
}
