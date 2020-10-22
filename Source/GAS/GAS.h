// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/** 
* Abilities will be mapped & bound to these input values
*/
UENUM(BlueprintType)
enum class EGASAbilityInputID : uint8
{
	None,	// Part of the system
	Confirm,// Part of the system
	Cancel,	// Part of the system
	
	Punch	// Custom
};