// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Module/MenuWorldModule.h"
#include "FPMMenuModule.generated.h"

UCLASS()
class FACTORY_PROP_MOD_API UFPMMenuModule : public UMenuWorldModule
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UFPMMenuModule();

	UFUNCTION(BlueprintCallable)
	void Init();

};
