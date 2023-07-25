#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstrategiaCanoa.generated.h"

UINTERFACE(MinimalAPI)
class UEstrategiaCanoa : public UInterface
{
	GENERATED_BODY()
};

class P4SIS457_API IEstrategiaCanoa
{
	GENERATED_BODY()
public:
	virtual void ManiobrarCanoa(class ACanoa* _Canoa) = 0;
};
