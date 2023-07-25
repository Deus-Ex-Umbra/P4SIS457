#include "Canoa.h"

ACanoa::ACanoa()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Canoa(TEXT("StaticMesh'/Game/StarterContent/Shapes/Cannoe.Cannoe'"));
	CanoaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanoaMesh"));
	CanoaMesh->SetStaticMesh(Canoa.Object);
}

void ACanoa::BeginPlay()
{
	Super::BeginPlay();
	CanoaMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
	CanoaMesh->SetMaterial(0, CanoaMaterial);
	CanoaMesh->SetMaterial(1, CanoaMaterial);
	CanoaMesh->SetMaterial(2, CanoaMaterial);
	CanoaMesh->SetMaterial(3, CanoaMaterial);
	CanoaMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	CanoaMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	CanoaMesh->SetRelativeScale3D(FVector(10.0f, 10.0f, 10.0f));
}

void ACanoa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACanoa::EstablecerEstrategiaCanoa(IEstrategiaCanoa* _EstrategiaCanoa)
{
	EstrategiaCanoa = _EstrategiaCanoa;
}

void ACanoa::AccionarCanoa()
{
	EstrategiaCanoa->ManiobrarCanoa(this);
}

