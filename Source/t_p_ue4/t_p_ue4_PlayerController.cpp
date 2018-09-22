// Fill out your copyright notice in the Description page of Project Settings.

#include "t_p_ue4_PlayerController.h"

At_p_ue4_PlayerController::At_p_ue4_PlayerController()
{
	UE_LOG(LogActor, Warning, TEXT("controller"))
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}


