#include "Bala.h"

ABala::ABala()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/bullet.bullet'"));
	BalaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalaMesh"));
	BalaMesh->SetStaticMesh(Mesh.Object);
}

void ABala::BeginPlay()
{
	Super::BeginPlay();
	BalaMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	BalaMesh->SetMaterial(0, BalaMaterial);
	BalaMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BalaMesh->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
	BalaMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
}

void ABala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Volar();
	if (GetActorLocation().Z >= 300.0f) {
		this->Destroy();
	}
}

void ABala::Volar()
{
	auto PosicionNueva = this->GetActorLocation() + FVector(0.0f, 0.0f, 0.5f);
	this->SetActorLocation(PosicionNueva);
}

