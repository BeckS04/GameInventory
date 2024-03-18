// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuBlueprintFunctionLibrary.h"

FString UMainMenuBlueprintFunctionLibrary::GetVersionNumber()
{
	FString VersionNumber;
	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"), VersionNumber, GGameIni);
	return VersionNumber;
}
