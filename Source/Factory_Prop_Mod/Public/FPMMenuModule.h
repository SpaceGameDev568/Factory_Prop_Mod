// Copyright 2024 Jesse Hodgson

#pragma once

#include "CoreMinimal.h"
#include "Module/MenuWorldModule.h"
#include "FPMMenuModule.generated.h"

UCLASS()
class FACTORY_PROP_MOD_API UFPMMenuModule : public UMenuWorldModule
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void Init();

};