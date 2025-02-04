#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerCell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "S_ServerInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ServerCell.WBP_ServerCell_C
// 0x0120 (0x03A0 - 0x0280)
class UWBP_ServerCell_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectFromHover;                                   // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_184;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Favorite;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ServerType;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AfterCell;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Ping;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Population;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RealmName;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Content;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Fovorite;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FavoriteServer;                                    // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ServerInfo                          ServerInfo;                                        // 0x02F0(0x0040)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnServerSelected;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEmpty;                                            // 0x0340(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDoubleClick;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 ServerName;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   TURR;                                              // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ServerFull;                                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_DialoguePerks_C*                     WidgetServerFull;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_ServerCell_Button_Favorite_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_ServerCell(int32 EntryPoint);
	void GetSelected(bool* Param_bSelected);
	void GetServerName(class FString* Param_ServerName);
	void HoverButton(bool Param_Hover);
	void Init();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnDoubleClick__DelegateSignature(class UWBP_ServerCell_C* ServerCell);
	void OnFocused__DelegateSignature(class UWBP_ServerCell_C* Widget);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnServerSelected__DelegateSignature(const struct FS_ServerInfo& Param_ServerInfo, class UWBP_ServerCell_C* Widget);
	void PreConstruct(bool IsDesignTime);
	void ReportConnect(const class FText& Region, const class FText& Ping, const class FText& Status);
	void SelectServer();
	void Set_Population_Range(int32 NumberOfPlayers, class FText* Text);
	void SetFavorite(bool Favorite);
	void SetSelected(bool Param_bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ServerCell_C">();
	}
	static class UWBP_ServerCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ServerCell_C>();
	}
};
static_assert(alignof(UWBP_ServerCell_C) == 0x000008, "Wrong alignment on UWBP_ServerCell_C");
static_assert(sizeof(UWBP_ServerCell_C) == 0x0003A0, "Wrong size on UWBP_ServerCell_C");
static_assert(offsetof(UWBP_ServerCell_C, UberGraphFrame) == 0x000280, "Member 'UWBP_ServerCell_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Select) == 0x000288, "Member 'UWBP_ServerCell_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, SelectFromHover) == 0x000290, "Member 'UWBP_ServerCell_C::SelectFromHover' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Hover) == 0x000298, "Member 'UWBP_ServerCell_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Border_184) == 0x0002A0, "Member 'UWBP_ServerCell_C::Border_184' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Button_Favorite) == 0x0002A8, "Member 'UWBP_ServerCell_C::Button_Favorite' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Button_ServerType) == 0x0002B0, "Member 'UWBP_ServerCell_C::Button_ServerType' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, SizeBox_AfterCell) == 0x0002B8, "Member 'UWBP_ServerCell_C::SizeBox_AfterCell' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Text_Ping) == 0x0002C0, "Member 'UWBP_ServerCell_C::Text_Ping' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Text_Population) == 0x0002C8, "Member 'UWBP_ServerCell_C::Text_Population' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, Text_RealmName) == 0x0002D0, "Member 'UWBP_ServerCell_C::Text_RealmName' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, WidgetSwitcher_Content) == 0x0002D8, "Member 'UWBP_ServerCell_C::WidgetSwitcher_Content' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, WidgetSwitcher_Fovorite) == 0x0002E0, "Member 'UWBP_ServerCell_C::WidgetSwitcher_Fovorite' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, FavoriteServer) == 0x0002E8, "Member 'UWBP_ServerCell_C::FavoriteServer' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, ServerInfo) == 0x0002F0, "Member 'UWBP_ServerCell_C::ServerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, OnServerSelected) == 0x000330, "Member 'UWBP_ServerCell_C::OnServerSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, bEmpty) == 0x000340, "Member 'UWBP_ServerCell_C::bEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, bSelected) == 0x000341, "Member 'UWBP_ServerCell_C::bSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, OnFocused) == 0x000348, "Member 'UWBP_ServerCell_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, OnDoubleClick) == 0x000358, "Member 'UWBP_ServerCell_C::OnDoubleClick' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, ServerName) == 0x000368, "Member 'UWBP_ServerCell_C::ServerName' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, TURR) == 0x000378, "Member 'UWBP_ServerCell_C::TURR' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, ServerFull) == 0x000390, "Member 'UWBP_ServerCell_C::ServerFull' has a wrong offset!");
static_assert(offsetof(UWBP_ServerCell_C, WidgetServerFull) == 0x000398, "Member 'UWBP_ServerCell_C::WidgetServerFull' has a wrong offset!");

}

