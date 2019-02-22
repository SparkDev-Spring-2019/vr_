

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SD_LevelBase.generated.h"



//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestDelegate);


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class SPARKDEV_VR2019_API ASD_LevelBase : public ALevelScriptActor
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Framework")
		void FrameworkInitalized();

		/*UPROPERTY(BlueprintAssignable, Category = "Test")
		FTestDelegate OnTestDelegate;*/
};
