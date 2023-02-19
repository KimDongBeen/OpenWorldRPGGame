// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Hitinterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHitinterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SLASH_API IHitinterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	void GetHit(const FVector& InpactPoint, AActor* Hitter);
};
