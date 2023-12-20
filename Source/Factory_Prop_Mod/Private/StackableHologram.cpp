// Copyright 2023 Jesse Hodgson. All Rights Reserved.


#include "StackableHologram.h"

AStackableHologram::AStackableHologram()
{

}

bool AStackableHologram::IsValidHitResult(const FHitResult& hitResult) const {
	return hitResult.bBlockingHit;
	// Only works if the hit actor is of type `FGBuildable`, but won't work for anything else, such as terrain.
	//return Cast<AFGBuildable>(hitResult.GetActor()) != nullptr;
}

