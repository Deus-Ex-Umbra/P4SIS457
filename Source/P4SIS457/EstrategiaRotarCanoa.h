#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaCanoa.h"
#include "EstrategiaRotarCanoa.generated.h"

UCLASS()
class P4SIS457_API AEstrategiaRotarCanoa : public AActor, public IEstrategiaCanoa
{
	GENERATED_BODY()
public:	
	AEstrategiaRotarCanoa();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void ManiobrarCanoa(class ACanoa* _Canoa) override;
};
