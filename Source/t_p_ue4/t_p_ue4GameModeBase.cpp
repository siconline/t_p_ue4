// Fill out your copyright notice in the Description page of Project Settings.

#include "t_p_ue4GameModeBase.h"
#include "t_p_ue4_PlayerController.h"
#include "t_p_ue4_Pawn.h"

At_p_ue4GameModeBase::At_p_ue4GameModeBase()
{
	// no pawn by default
	DefaultPawnClass = At_p_ue4_Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = At_p_ue4_PlayerController::StaticClass();
}

