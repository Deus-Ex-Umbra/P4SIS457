#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaCanoa.h"
#include "EstrategiaDispararCanoa.generated.h"

UCLASS()
class P4SIS457_API AEstrategiaDispararCanoa : public AActor, public IEstrategiaCanoa
{
	GENERATED_BODY()
public:	
	AEstrategiaDispararCanoa();
	UPROPERTY()
		class ABala* Bala;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void ManiobrarCanoa(class ACanoa* _Canoa) override;
};
