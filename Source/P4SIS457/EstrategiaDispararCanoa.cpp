#include "EstrategiaDispararCanoa.h"
#include "Bala.h"
#include "Canoa.h"

AEstrategiaDispararCanoa::AEstrategiaDispararCanoa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaDispararCanoa::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaDispararCanoa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaDispararCanoa::ManiobrarCanoa(ACanoa* _Canoa)
{
	Bala = GetWorld()->SpawnActor<ABala>();
	Bala->SetActorLocation(_Canoa->GetActorLocation());
	Bala->SetActorRotation(FRotator(0.0f, 0.0f, 90.0f));
}

