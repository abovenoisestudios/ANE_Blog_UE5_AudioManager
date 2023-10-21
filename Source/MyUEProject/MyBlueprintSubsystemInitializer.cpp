

#include "MyBlueprintSubsystemInitializer.h"

void UMyGameInstanceSubsystemInitializer::Initialize(FSubsystemCollectionBase& Collection)
{
	const UMyBlueprintSubsystemInitializer* BlueprintSubsystemInitializer = GetDefault<UMyBlueprintSubsystemInitializer>();

	// Check if the array is empty
	if (BlueprintSubsystemInitializer->GameInstanceSubsystems.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("UMyGameInstanceSubsystemInitializer::Initialize - Empty GameInstanceSubsystem array"))
		return;
	}

	// Initialize each subsystem in the array
	for (TSubclassOf<UGameInstanceSubsystem> Subsystem : BlueprintSubsystemInitializer->GameInstanceSubsystems)
	{
		Collection.InitializeDependency(Subsystem);
	}
}
