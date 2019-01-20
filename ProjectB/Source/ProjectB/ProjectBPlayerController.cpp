// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectBPlayerController.h"

AProjectBPlayerController::AProjectBPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
