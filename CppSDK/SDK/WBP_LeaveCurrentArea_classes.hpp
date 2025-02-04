#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaveCurrentArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LeaveCurrentArea.WBP_LeaveCurrentArea_C
// 0x0058 (0x02D8 - 0x0280)
class UWBP_LeaveCurrentArea_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           PartyMembersState_Container;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Content;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TeleportLocation;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyIcon_C*                         WBP_KeyIcon_Cancel;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyIcon_C*                         WBP_KeyIcon_Ready;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Showed;                                            // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HideDelay;                                         // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LeadNickname;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Busy_;                                             // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddEntry(int32 PlayerIndex, class APS_TDB_C* PlayerState);
	void BusyCheck(bool Param_Busy_);
	void ClearEntries();
	void ExecuteUbergraph_WBP_LeaveCurrentArea(int32 EntryPoint);
	void GetShowed(bool* Param_Showed);
	void PreConstruct(bool IsDesignTime);
	void SetTextTeleportLocation(bool IsHouse_);
	void ShowCheck(bool Param_Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LeaveCurrentArea_C">();
	}
	static class UWBP_LeaveCurrentArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LeaveCurrentArea_C>();
	}
};
static_assert(alignof(UWBP_LeaveCurrentArea_C) == 0x000008, "Wrong alignment on UWBP_LeaveCurrentArea_C");
static_assert(sizeof(UWBP_LeaveCurrentArea_C) == 0x0002D8, "Wrong size on UWBP_LeaveCurrentArea_C");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, UberGraphFrame) == 0x000280, "Member 'UWBP_LeaveCurrentArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, Show) == 0x000288, "Member 'UWBP_LeaveCurrentArea_C::Show' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, PartyMembersState_Container) == 0x000290, "Member 'UWBP_LeaveCurrentArea_C::PartyMembersState_Container' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, SizeBox_Content) == 0x000298, "Member 'UWBP_LeaveCurrentArea_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, Text_TeleportLocation) == 0x0002A0, "Member 'UWBP_LeaveCurrentArea_C::Text_TeleportLocation' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, WBP_KeyIcon_Cancel) == 0x0002A8, "Member 'UWBP_LeaveCurrentArea_C::WBP_KeyIcon_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, WBP_KeyIcon_Ready) == 0x0002B0, "Member 'UWBP_LeaveCurrentArea_C::WBP_KeyIcon_Ready' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, Showed) == 0x0002B8, "Member 'UWBP_LeaveCurrentArea_C::Showed' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, HideDelay) == 0x0002BC, "Member 'UWBP_LeaveCurrentArea_C::HideDelay' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, LeadNickname) == 0x0002C0, "Member 'UWBP_LeaveCurrentArea_C::LeadNickname' has a wrong offset!");
static_assert(offsetof(UWBP_LeaveCurrentArea_C, Busy_) == 0x0002D0, "Member 'UWBP_LeaveCurrentArea_C::Busy_' has a wrong offset!");

}

