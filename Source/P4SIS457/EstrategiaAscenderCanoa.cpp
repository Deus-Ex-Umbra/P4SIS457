#include "EstrategiaAscenderCanoa.h"
#include "Canoa.h"

AEstrategiaAscenderCanoa::AEstrategiaAscenderCanoa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaAscenderCanoa::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaAscenderCanoa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaAscenderCanoa::ManiobrarCanoa(ACanoa* _Canoa)
{
	auto NuevaPosicion = _Canoa->GetActorLocation() + FVector(0.0f, 0.0f, 20.0f);
	_Canoa->SetActorLocation(NuevaPosicion);
}

