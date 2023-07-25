#include "EstrategiaRotarCanoa.h"
#include "Canoa.h"

AEstrategiaRotarCanoa::AEstrategiaRotarCanoa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaRotarCanoa::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaRotarCanoa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaRotarCanoa::ManiobrarCanoa(ACanoa* _Canoa)
{
	auto NuevaRotacion = _Canoa->GetActorRotation() + FRotator(0.0f, 0.0f, 30.0f);
	_Canoa->SetActorRotation(NuevaRotacion);
}

