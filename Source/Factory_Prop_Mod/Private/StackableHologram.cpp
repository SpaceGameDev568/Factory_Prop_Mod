// Copyright 2023 - 2024 Jesse Hodgson

#include "StackableHologram.h"

bool AStackableHologram::IsValidHitResult(const FHitResult& hitResult) const {
	// Always return a valid result if we hit something
	return hitResult.bBlockingHit;
}

