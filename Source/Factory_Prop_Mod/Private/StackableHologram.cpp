// Fill out your copyright notice in the Description page of Project Settings.


#include "StackableHologram.h"

AStackableHologram::AStackableHologram()
{

}

bool AStackableHologram::IsValidHitResult(const FHitResult& hitResult) const {
	return Cast<AFGBuildable>(hitResult.GetActor()) != nullptr;
}

