// Copyright 2024 Jesse Hodgson

#include "FPMGameWorldModule.h"

#include "Factory_Prop_Mod.h"

UFPMGameWorldModule::UFPMGameWorldModule()
{
	{
	#if WITH_EDITOR
			UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("Shipping env not detected, avoiding crash"));
	#else
			FPMConfig = FFactory_Prop_ModModule::GetActiveConfig(GetWorld());
	#endif
	}

	bDisableAll = FPMConfig.bDisableAll;
}


void UFPMGameWorldModule::Init(TArray<TSubclassOf<UFGSchematic>> InSchematics)
{
	if (!bDisableAll)
	{
		UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("Factory Props beginning construction..."));
	}
	else
	{
		UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("Schematic loading disabled to prevent crashes"));
	}
}
