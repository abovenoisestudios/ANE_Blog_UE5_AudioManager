
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MyBlueprintSubsystemInitializer.generated.h"

/**
 * The config and DefaultConfig specifiers define that the members of this class can be saved in a .ini configuration file
 * On this case it is essential to save these on DefaultGame.ini
 */

UCLASS(config = Game, DefaultConfig, meta = (DisplayName = "Blueprint Subsystems"))
class MYUEPROJECT_API UMyBlueprintSubsystemInitializer : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	/**
	 * The Config specifier defines that this subsystem array is saved in the .ini config file defined on this class
	 * The BlueprintBaseOnly specifier defines that only Blueprint type children can be assigned here.
	 */

	// Array of Blueprint Game Instance Subsystems to be loaded by the world.
	UPROPERTY(Config, EditAnywhere, Meta = (BlueprintBaseOnly))
	TArray<TSubclassOf<UGameInstanceSubsystem>> GameInstanceSubsystems;
};

 /**
  * This is a new Game Instance Subsystem created for the only purpose of initializing the Blueprint Subsystems
  * Its Initialize() function is overriden and extended on the .cpp file
  */
UCLASS()
class MYUEPROJECT_API UMyGameInstanceSubsystemInitializer : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override final;
};