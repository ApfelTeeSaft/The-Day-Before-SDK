#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPDA_Boost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPDA_BaseUpgrade_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPDA_Boost.BPDA_Boost_C
// 0x0010 (0x0068 - 0x0058)
class UBPDA_Boost_C final : public UBPDA_BaseUpgrade_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BoostCount;                                        // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPDA_Boost(int32 EntryPoint);
	void SetUpgrade(class ABP_RB_Vehicle_C* Vehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPDA_Boost_C">();
	}
	static class UBPDA_Boost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPDA_Boost_C>();
	}
};
static_assert(alignof(UBPDA_Boost_C) == 0x000008, "Wrong alignment on UBPDA_Boost_C");
static_assert(sizeof(UBPDA_Boost_C) == 0x000068, "Wrong size on UBPDA_Boost_C");
static_assert(offsetof(UBPDA_Boost_C, UberGraphFrame) == 0x000058, "Member 'UBPDA_Boost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPDA_Boost_C, BoostCount) == 0x000060, "Member 'UBPDA_Boost_C::BoostCount' has a wrong offset!");

}
