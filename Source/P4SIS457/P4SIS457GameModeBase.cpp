#include "P4SIS457GameModeBase.h"
#include "Canoa.h"
#include "EstrategiaCanoa.h"
#include "EstrategiaAscenderCanoa.h"
#include "EstrategiaMoverCanoa.h"
#include "EstrategiaRotarCanoa.h"
#include "EstrategiaDispararCanoa.h"

AP4SIS457GameModeBase::AP4SIS457GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	TiempoEstrategia = 0.0f;
	Estrategias = {};
	Contador = 0;
}

void AP4SIS457GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	Canoa = GetWorld()->SpawnActor<ACanoa>(ACanoa::StaticClass());
	Canoa->SetActorLocation(FVector(-50.0f, 0.0f, 100.0f));
	Canoa->SetActorRotation(FRotator(0.0f, 0.0f, 90.0f));
	EstrategiaAscender = GetWorld()->SpawnActor<AEstrategiaAscenderCanoa>(AEstrategiaAscenderCanoa::StaticClass());
	EstrategiaMover = GetWorld()->SpawnActor<AEstrategiaMoverCanoa>(AEstrategiaMoverCanoa::StaticClass());
	EstrategiaRotar = GetWorld()->SpawnActor<AEstrategiaRotarCanoa>(AEstrategiaRotarCanoa::StaticClass());
	EstrategiaDisparar = GetWorld()->SpawnActor<AEstrategiaDispararCanoa>(AEstrategiaDispararCanoa::StaticClass());
	Estrategias.Add(EstrategiaAscender);
	Estrategias.Add(EstrategiaMover);
	Estrategias.Add(EstrategiaRotar);
	Estrategias.Add(EstrategiaDisparar);
}

void AP4SIS457GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoEstrategia += DeltaTime;
	if (TiempoEstrategia >= 3.0f) {
		TiempoEstrategia = 0.0f;
		Contador++;
		if (Contador >= Estrategias.Num()) {
			Contador = 0;
		}
		Canoa->EstablecerEstrategiaCanoa(Estrategias[Contador]);
		Canoa->AccionarCanoa();
		TiempoEstrategia = 0.0f;
	}
}
