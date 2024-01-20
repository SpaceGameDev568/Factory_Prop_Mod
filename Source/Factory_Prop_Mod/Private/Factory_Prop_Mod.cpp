// Copyright 2023 - 2024 Jesse Hodgson. All Rights Reserved.

#include "Factory_Prop_Mod.h"

#define LOCTEXT_NAMESPACE "FFactory_Prop_ModModule"

void FFactory_Prop_ModModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFactory_Prop_ModModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFactory_Prop_ModModule, Factory_Prop_Mod)