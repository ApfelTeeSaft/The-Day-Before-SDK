#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PerkInfo

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PerkInfo.WBP_PerkInfo_C
// 0x0010 (0x0290 - 0x0280)
class UWBP_PerkInfo_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_PerkName;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TraitDescription;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const class FText& TraitName, const class FText& TraitDescription);
	void SetPosition(class UWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PerkInfo_C">();
	}
	static class UWBP_PerkInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PerkInfo_C>();
	}
};
static_assert(alignof(UWBP_PerkInfo_C) == 0x000008, "Wrong alignment on UWBP_PerkInfo_C");
static_assert(sizeof(UWBP_PerkInfo_C) == 0x000290, "Wrong size on UWBP_PerkInfo_C");
static_assert(offsetof(UWBP_PerkInfo_C, TextBlock_PerkName) == 0x000280, "Member 'UWBP_PerkInfo_C::TextBlock_PerkName' has a wrong offset!");
static_assert(offsetof(UWBP_PerkInfo_C, TextBlock_TraitDescription) == 0x000288, "Member 'UWBP_PerkInfo_C::TextBlock_TraitDescription' has a wrong offset!");

}
