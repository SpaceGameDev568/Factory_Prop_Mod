// Copyright 2024 Jesse Hodgson

#pragma once

#include "CoreMinimal.h"
#include "FPM_ModConfigStruct.h"
#include "Module/GameWorldModule.h"
#include "FPMGameWorldModule.generated.h"

/**
 * 
 */
 UCLASS()
 class FACTORY_PROP_MOD_API UFPMGameWorldModule : public UGameWorldModule
 {
 	GENERATED_BODY()

  public:

  	UFPMGameWorldModule();

  	UFUNCTION(BlueprintCallable, Category = "Factory Props")
 	void Init(TArray<TSubclassOf<UFGSchematic>> InSchematics); // Function called manually by subclasses to initialize the module

 	FFPM_ModConfigStruct FPMConfig;

 	bool bDisableAll; // Boolean that is true when the user needs to disable all schematics in case of a catastrophic failure
 };
