
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyAudioSubsystem.generated.h"


UCLASS(Blueprintable, Abstract)
class MYUEPROJECT_API UMyAudioSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	// This string is filled-up on the BP version of this subsystem but can be accessed in both C++ and BP
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString MyTestString;

	/**
	 * This is only a function declaration. The implementation must be done in Blueprint
	 * This function can be called both in C++ and in BP
	 */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void BlueprintImplementableFunction(UObject* WorldContextObject);

	/**
	* This function requires implementation in C++ but can be extended or overriden in Blueprint.
	* Its implementation requires the suffix _Implementation in the .cpp file
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BlueprintExtendableFunction(UObject* WorldContextObject);
};
