#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "P4SIS457GameModeBase.generated.h"

UCLASS()
class P4SIS457_API AP4SIS457GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AP4SIS457GameModeBase();
	UPROPERTY()
		class ACanoa* Canoa;
	UPROPERTY()
		class AEstrategiaAscenderCanoa* EstrategiaAscender;
	UPROPERTY()
		class AEstrategiaMoverCanoa* EstrategiaMover;
	UPROPERTY()
		class AEstrategiaRotarCanoa* EstrategiaRotar;
	UPROPERTY()
		class AEstrategiaDispararCanoa* EstrategiaDisparar;
	TArray<class IEstrategiaCanoa*> Estrategias;
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
private:
	float TiempoEstrategia;
	int Contador;
};
