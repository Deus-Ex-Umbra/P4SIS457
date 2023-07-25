#include "EstrategiaMoverCanoa.h"
#include "Canoa.h"

AEstrategiaMoverCanoa::AEstrategiaMoverCanoa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaMoverCanoa::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaMoverCanoa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaMoverCanoa::ManiobrarCanoa(ACanoa* _Canoa)
{
	auto NuevaPosicion = _Canoa->GetActorLocation() + FVector(0.0f, FMath::RandRange(-2, 2) * 10 + 10, 0.0f);
	_Canoa->SetActorLocation(NuevaPosicion);
}

