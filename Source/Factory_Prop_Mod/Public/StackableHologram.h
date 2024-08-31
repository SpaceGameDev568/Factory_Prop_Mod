// Copyright 2023 - 2024 Jesse Hodgson

#pragma once

#include "CoreMinimal.h"
#include "FGGenericBuildableHologram.h"
#include "StackableHologram.generated.h"

UCLASS()
class FACTORY_PROP_MOD_API AStackableHologram : public AFGGenericBuildableHologram
{
	GENERATED_BODY()

public:

	virtual bool IsValidHitResult(const FHitResult& hitResult) const override;
};
