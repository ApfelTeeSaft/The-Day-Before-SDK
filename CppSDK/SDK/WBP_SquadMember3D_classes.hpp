#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SquadMember3D

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SquadMember3D.WBP_SquadMember3D_C
// 0x0008 (0x0288 - 0x0280)
class UWBP_SquadMember3D_C final : public UUserWidget
{
public:
	class UTextBlock*                             Text_PlayerIndex;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetMemberIndex(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SquadMember3D_C">();
	}
	static class UWBP_SquadMember3D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SquadMember3D_C>();
	}
};
static_assert(alignof(UWBP_SquadMember3D_C) == 0x000008, "Wrong alignment on UWBP_SquadMember3D_C");
static_assert(sizeof(UWBP_SquadMember3D_C) == 0x000288, "Wrong size on UWBP_SquadMember3D_C");
static_assert(offsetof(UWBP_SquadMember3D_C, Text_PlayerIndex) == 0x000280, "Member 'UWBP_SquadMember3D_C::Text_PlayerIndex' has a wrong offset!");

}

