#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Group

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Group.WBP_Group_C
// 0x0190 (0x0410 - 0x0280)
class UWBP_Group_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Expand_Hover;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Options_Hover;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Expand;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_CallOptions;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Exit;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_InviteHome;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Kick;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_MakeLeader;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Nickname;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Nickname_1;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_332;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Default;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EmptyBG;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlayerIcon;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OptionsSquadLeader;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OptionsSquadMember;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Role;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Box_Nickname_1;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_138;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Options;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PlayerIcon;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Nickname;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Nickname_1;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_BG;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Options;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CallRefreshList;                                   // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedKick;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APS_TDB_C*                              PlayerState;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedExit;                                     // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMakeLeader;                                      // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          OptionsShowed;                                     // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Solo;                                              // 0x03BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BB[0x5];                                      // 0x03BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickOptions;                                    // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickInviteHome;                                 // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Nickname_Showed;                                   // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_PauseMenu_C*                         PauseMenu;                                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BindEmptyClick(class UW_PauseMenu_C* PauseWidget);
	void BndEvt__WBP_Group_Button_177_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Group_Button_243_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Group_Button_CallOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Group_Button_InviteHome_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Group_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void CallRefreshList__DelegateSignature();
	void CloseCustom();
	void Destruct();
	void ExecuteUbergraph_WBP_Group(int32 EntryPoint);
	void ExpandHover(bool Show);
	void ExpandOption(bool Show);
	void GetEmpty(bool* Param_IsEmpty);
	void GetIsOptionShowed(bool* Param_OptionsShowed);
	void GetPlayerState(class APS_TDB_C** Param_PlayerState);
	void GetSolo(bool* Param_Solo);
	void Init(class APS_TDB_C* Param_PlayerState, bool bSolo, bool bEmpty);
	void InitOptionsButtons();
	void OnClickedExit__DelegateSignature(class APS_TDB_C* Param_PlayerState);
	void OnClickedKick__DelegateSignature(class APS_TDB_C* Param_PlayerState);
	void OnClickInviteHome__DelegateSignature();
	void OnClickOptions__DelegateSignature(class UWBP_Group_C* GroupEntry);
	void OnHovered__DelegateSignature(class UWBP_Group_C* Ref);
	void OnMakeLeader__DelegateSignature(class APS_TDB_C* Param_PlayerState);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnUnhovered__DelegateSignature(class UWBP_Group_C* Ref);
	void PreConstruct(bool IsDesignTime);
	void SetOwner();
	void ShowNickName(bool Show);
	void ShowOptions(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Group_C">();
	}
	static class UWBP_Group_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Group_C>();
	}
};
static_assert(alignof(UWBP_Group_C) == 0x000008, "Wrong alignment on UWBP_Group_C");
static_assert(sizeof(UWBP_Group_C) == 0x000410, "Wrong size on UWBP_Group_C");
static_assert(offsetof(UWBP_Group_C, UberGraphFrame) == 0x000280, "Member 'UWBP_Group_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Expand_Hover) == 0x000288, "Member 'UWBP_Group_C::Expand_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Options_Hover) == 0x000290, "Member 'UWBP_Group_C::Options_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Expand) == 0x000298, "Member 'UWBP_Group_C::Expand' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_CallOptions) == 0x0002A0, "Member 'UWBP_Group_C::Button_CallOptions' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_Exit) == 0x0002A8, "Member 'UWBP_Group_C::Button_Exit' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_InviteHome) == 0x0002B0, "Member 'UWBP_Group_C::Button_InviteHome' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_Kick) == 0x0002B8, "Member 'UWBP_Group_C::Button_Kick' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_MakeLeader) == 0x0002C0, "Member 'UWBP_Group_C::Button_MakeLeader' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_Nickname) == 0x0002C8, "Member 'UWBP_Group_C::Button_Nickname' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Button_Nickname_1) == 0x0002D0, "Member 'UWBP_Group_C::Button_Nickname_1' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_332) == 0x0002D8, "Member 'UWBP_Group_C::Image_332' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_BG) == 0x0002E0, "Member 'UWBP_Group_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_Default) == 0x0002E8, "Member 'UWBP_Group_C::Image_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_EmptyBG) == 0x0002F0, "Member 'UWBP_Group_C::Image_EmptyBG' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_Hovered) == 0x0002F8, "Member 'UWBP_Group_C::Image_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_PlayerIcon) == 0x000300, "Member 'UWBP_Group_C::Image_PlayerIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Image_Selected) == 0x000308, "Member 'UWBP_Group_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OptionsSquadLeader) == 0x000310, "Member 'UWBP_Group_C::OptionsSquadLeader' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OptionsSquadMember) == 0x000318, "Member 'UWBP_Group_C::OptionsSquadMember' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, PlayerName) == 0x000320, "Member 'UWBP_Group_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Role) == 0x000328, "Member 'UWBP_Group_C::Role' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Size_Box_Nickname_1) == 0x000330, "Member 'UWBP_Group_C::Size_Box_Nickname_1' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, SizeBox_138) == 0x000338, "Member 'UWBP_Group_C::SizeBox_138' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, SizeBox_Options) == 0x000340, "Member 'UWBP_Group_C::SizeBox_Options' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, SizeBox_PlayerIcon) == 0x000348, "Member 'UWBP_Group_C::SizeBox_PlayerIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, TextBlock_Nickname) == 0x000350, "Member 'UWBP_Group_C::TextBlock_Nickname' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, TextBlock_Nickname_1) == 0x000358, "Member 'UWBP_Group_C::TextBlock_Nickname_1' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, WidgetSwitcher_BG) == 0x000360, "Member 'UWBP_Group_C::WidgetSwitcher_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, WidgetSwitcher_Options) == 0x000368, "Member 'UWBP_Group_C::WidgetSwitcher_Options' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, CallRefreshList) == 0x000370, "Member 'UWBP_Group_C::CallRefreshList' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnClickedKick) == 0x000380, "Member 'UWBP_Group_C::OnClickedKick' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, PlayerState) == 0x000390, "Member 'UWBP_Group_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnClickedExit) == 0x000398, "Member 'UWBP_Group_C::OnClickedExit' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnMakeLeader) == 0x0003A8, "Member 'UWBP_Group_C::OnMakeLeader' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OptionsShowed) == 0x0003B8, "Member 'UWBP_Group_C::OptionsShowed' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, IsEmpty) == 0x0003B9, "Member 'UWBP_Group_C::IsEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Solo) == 0x0003BA, "Member 'UWBP_Group_C::Solo' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnClickOptions) == 0x0003C0, "Member 'UWBP_Group_C::OnClickOptions' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnClickInviteHome) == 0x0003D0, "Member 'UWBP_Group_C::OnClickInviteHome' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, Nickname_Showed) == 0x0003E0, "Member 'UWBP_Group_C::Nickname_Showed' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnHovered) == 0x0003E8, "Member 'UWBP_Group_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, OnUnhovered) == 0x0003F8, "Member 'UWBP_Group_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_Group_C, PauseMenu) == 0x000408, "Member 'UWBP_Group_C::PauseMenu' has a wrong offset!");

}

