
#include "MyAudioSubsystem.h"


void UMyAudioSubsystem::BlueprintExtendableFunction_Implementation(UObject* WorldContextObject)
{
	GEditor->AddOnScreenDebugMessage(-1, 10.f, FColor::Red,
		FString::Printf(TEXT("From BlueprintExtendableFunction in C++: %s"), *MyTestString));
}
