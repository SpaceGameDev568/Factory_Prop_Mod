// Copyright 2024 Jesse Hodgson


#include "FPMMenuModule.h"

#include "Factory_Prop_Mod.h"
#include "ModLoading/ModLoadingLibrary.h"

void UFPMMenuModule::Init()
{
	// Get an instance of the ModLoadingLibrary to use for retrieving mod info
	UModLoadingLibrary *ModLoadingLibrary = GetWorld()->GetGameInstance()->GetSubsystem<UModLoadingLibrary>();

	// Log metadata from ModUpdateNotifier for debug purposes
	UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("Loaded Factory Props Menu Module."));

	FModInfo ModMetaInfo;
	ModLoadingLibrary->GetLoadedModInfo("Factory_Prop_Mod", ModMetaInfo);
	UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("%s"), *ModMetaInfo.FriendlyName.Append(", " + ModMetaInfo.Version.ToString()));
	UE_LOG(LogFactory_Prop_Mod, Display, TEXT("Build Date: %s %s"), ANSI_TO_TCHAR(__DATE__), ANSI_TO_TCHAR(__TIME__));
}