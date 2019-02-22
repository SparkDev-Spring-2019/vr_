

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SD_GameManager.generated.h"

/**
 * This is the component of the gameplay framework that starts first. It is the only component that retains
 * its data between level changes.
 *
 * Networking: NonReplicating_HostOnly
 */
UCLASS()
class SPARKDEV_VR2019_API USD_GameManager : public UGameInstance
{
	GENERATED_BODY()
};
