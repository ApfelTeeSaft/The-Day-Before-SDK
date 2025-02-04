#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_inviteHomeOffer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_Offer_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_inviteHomeOffer.WBP_inviteHomeOffer_C
// 0x0050 (0x0360 - 0x0310)
class UWBP_inviteHomeOffer_C final : public UWBP_Offer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_inviteHomeOffer_C;              // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                   Text_Description_WBP_inviteHomeOffer_C;            // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         InviteIndex;                                       // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bAcceptOffer;                                      // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             AcceptInvide;                                      // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DeclineInvide;                                     // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APS_TDB_C*                              NewVar_0;                                          // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void AcceptInvide__DelegateSignature(class APS_TDB_C* NewParam);
	void AcceptOffer();
	void Construct();
	void DeclineInvide__DelegateSignature();
	void DeclineOffer();
	void ExecuteUbergraph_WBP_inviteHomeOffer(int32 EntryPoint);
	void GetFocused(bool* Focused);
	void SetFocused(bool NewFocus, bool* Success);
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_inviteHomeOffer_C">();
	}
	static class UWBP_inviteHomeOffer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_inviteHomeOffer_C>();
	}
};
static_assert(alignof(UWBP_inviteHomeOffer_C) == 0x000008, "Wrong alignment on UWBP_inviteHomeOffer_C");
static_assert(sizeof(UWBP_inviteHomeOffer_C) == 0x000360, "Wrong size on UWBP_inviteHomeOffer_C");
static_assert(offsetof(UWBP_inviteHomeOffer_C, UberGraphFrame_WBP_inviteHomeOffer_C) == 0x000310, "Member 'UWBP_inviteHomeOffer_C::UberGraphFrame_WBP_inviteHomeOffer_C' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, Text_Description_WBP_inviteHomeOffer_C) == 0x000318, "Member 'UWBP_inviteHomeOffer_C::Text_Description_WBP_inviteHomeOffer_C' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, InviteIndex) == 0x000330, "Member 'UWBP_inviteHomeOffer_C::InviteIndex' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, bAcceptOffer) == 0x000334, "Member 'UWBP_inviteHomeOffer_C::bAcceptOffer' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, AcceptInvide) == 0x000338, "Member 'UWBP_inviteHomeOffer_C::AcceptInvide' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, DeclineInvide) == 0x000348, "Member 'UWBP_inviteHomeOffer_C::DeclineInvide' has a wrong offset!");
static_assert(offsetof(UWBP_inviteHomeOffer_C, NewVar_0) == 0x000358, "Member 'UWBP_inviteHomeOffer_C::NewVar_0' has a wrong offset!");

}

