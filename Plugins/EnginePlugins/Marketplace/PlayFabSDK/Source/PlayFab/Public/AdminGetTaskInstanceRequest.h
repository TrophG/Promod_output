#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetTaskInstanceRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetTaskInstanceRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskInstanceId;
    
    FAdminGetTaskInstanceRequest();
};
