// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FGGenericBuildableHologram.h"
#include "StackableHologram.generated.h"

/**
 * 
 */
UCLASS()
class FACTORY_PROP_MOD_API AStackableHologram : public AFGGenericBuildableHologram
{
	GENERATED_BODY()

	AStackableHologram();

public:

	virtual bool IsValidHitResult(const FHitResult& hitResult) const override;
};
