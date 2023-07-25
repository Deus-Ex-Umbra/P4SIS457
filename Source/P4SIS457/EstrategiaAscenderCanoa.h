#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaCanoa.h"
#include "EstrategiaAscenderCanoa.generated.h"

UCLASS()
class P4SIS457_API AEstrategiaAscenderCanoa : public AActor, public IEstrategiaCanoa
{
	GENERATED_BODY()
public:	
	AEstrategiaAscenderCanoa();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void ManiobrarCanoa(class ACanoa* _Canoa) override;
};
