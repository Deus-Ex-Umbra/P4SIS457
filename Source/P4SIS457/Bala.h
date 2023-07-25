#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class P4SIS457_API ABala : public AActor
{
	GENERATED_BODY()
public:	
	ABala();
	UPROPERTY()
		class UStaticMeshComponent* BalaMesh;
	UPROPERTY()
		class UMaterial* BalaMaterial;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
private:
	void Volar();
};
