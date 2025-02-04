#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CarBoost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CarBoost.W_CarBoost_C
// 0x0020 (0x02A0 - 0x0280)
class UW_CarBoost_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Boosting;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Boost;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_CarBoost(int32 EntryPoint);
	void PlayBoosting(double Time);
	void PlayCooldown(double Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CarBoost_C">();
	}
	static class UW_CarBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CarBoost_C>();
	}
};
static_assert(alignof(UW_CarBoost_C) == 0x000008, "Wrong alignment on UW_CarBoost_C");
static_assert(sizeof(UW_CarBoost_C) == 0x0002A0, "Wrong size on UW_CarBoost_C");
static_assert(offsetof(UW_CarBoost_C, UberGraphFrame) == 0x000280, "Member 'UW_CarBoost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CarBoost_C, Boosting) == 0x000288, "Member 'UW_CarBoost_C::Boosting' has a wrong offset!");
static_assert(offsetof(UW_CarBoost_C, BG) == 0x000290, "Member 'UW_CarBoost_C::BG' has a wrong offset!");
static_assert(offsetof(UW_CarBoost_C, ProgressBar_Boost) == 0x000298, "Member 'UW_CarBoost_C::ProgressBar_Boost' has a wrong offset!");

}

