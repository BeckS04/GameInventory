// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MainMenuBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class AGP_ASSIGNMENT1_API UMainMenuBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyBlueprintFunctionLibrary")
	static FString GetVersionNumber();
	
};
