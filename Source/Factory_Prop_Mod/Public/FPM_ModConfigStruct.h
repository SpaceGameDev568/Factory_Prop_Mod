#pragma once
#include "CoreMinimal.h"
#include "Configuration/ConfigManager.h"
#include "Engine/Engine.h"
#include "FPM_ModConfigStruct.generated.h"

/* Struct generated from Mod Configuration Asset '/Factory_Prop_Mod/FPM_ModConfig' */
USTRUCT(BlueprintType)
struct FFPM_ModConfigStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bDisableAll{};

    /* Retrieves active configuration value and returns object of this struct containing it */
    static FFPM_ModConfigStruct GetActiveConfig(UObject* WorldContext) {
        FFPM_ModConfigStruct ConfigStruct{};
        FConfigId ConfigId{"Factory_Prop_Mod", ""};
        if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::ReturnNull)) {
            UConfigManager* ConfigManager = World->GetGameInstance()->GetSubsystem<UConfigManager>();
            ConfigManager->FillConfigurationStruct(ConfigId, FDynamicStructInfo{FFPM_ModConfigStruct::StaticStruct(), &ConfigStruct});
        }
        return ConfigStruct;
    }
};

