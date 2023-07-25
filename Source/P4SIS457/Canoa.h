#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaCanoa.h"
#include "Canoa.generated.h"

UCLASS()
class P4SIS457_API ACanoa : public AActor
{
	GENERATED_BODY()
public:	
	ACanoa();
	UPROPERTY()
		class UStaticMeshComponent* CanoaMesh;
	UPROPERTY()
		class UMaterial* CanoaMaterial;
	IEstrategiaCanoa* EstrategiaCanoa;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	void EstablecerEstrategiaCanoa(IEstrategiaCanoa* _EstrategiaCanoa);
	void AccionarCanoa();
};
