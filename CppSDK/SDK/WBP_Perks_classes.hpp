#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Perks

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Perks.WBP_Perks_C
// 0x0040 (0x02C0 - 0x0280)
class UWBP_Perks_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_87;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PerkName;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PerkNameText;                                      // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClickPerk;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_Perks(int32 EntryPoint);
	void OnClickPerk__DelegateSignature(const class FText& Param_PerkName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Perks_C">();
	}
	static class UWBP_Perks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Perks_C>();
	}
};
static_assert(alignof(UWBP_Perks_C) == 0x000008, "Wrong alignment on UWBP_Perks_C");
static_assert(sizeof(UWBP_Perks_C) == 0x0002C0, "Wrong size on UWBP_Perks_C");
static_assert(offsetof(UWBP_Perks_C, UberGraphFrame) == 0x000280, "Member 'UWBP_Perks_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Perks_C, Button_87) == 0x000288, "Member 'UWBP_Perks_C::Button_87' has a wrong offset!");
static_assert(offsetof(UWBP_Perks_C, PerkName) == 0x000290, "Member 'UWBP_Perks_C::PerkName' has a wrong offset!");
static_assert(offsetof(UWBP_Perks_C, PerkNameText) == 0x000298, "Member 'UWBP_Perks_C::PerkNameText' has a wrong offset!");
static_assert(offsetof(UWBP_Perks_C, OnClickPerk) == 0x0002B0, "Member 'UWBP_Perks_C::OnClickPerk' has a wrong offset!");

}
