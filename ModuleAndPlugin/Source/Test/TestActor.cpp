#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("TestActor BeginPlay"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Green,
			TEXT("Test Module Actor Spawned!")
		);
	}
}