#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_StatsInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_WeakeningEffect_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_StatsInterface.I_StatsInterface_C
// 0x0000 (0x0028 - 0x0028)
class II_StatsInterface_C final : public IInterface
{
public:
	void BeginOverlap();
	void EndOverlap();
	void GetStatsComponent(class UBPC_PlayerStatsComponent_C** PlayerStats);
	void StopEffectByName(TArray<class FText>& EffectName, E_WeakeningEffect WeakeningEffects, bool RemoveAll, bool* Return);
	void StopEffectByRef(class UEffectMain_C* NewParam, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_StatsInterface_C">();
	}
	static class II_StatsInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_StatsInterface_C>();
	}
};
static_assert(alignof(II_StatsInterface_C) == 0x000008, "Wrong alignment on II_StatsInterface_C");
static_assert(sizeof(II_StatsInterface_C) == 0x000028, "Wrong size on II_StatsInterface_C");

}
