#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModeCategoryRow

#include "Basic.hpp"

#include "E_TypesOfModes_structs.hpp"
#include "Engine_structs.hpp"
#include "BPS_SupportedAttachments_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModeCategoryRow.WBP_ModeCategoryRow_C
// 0x0348 (0x05C8 - 0x0280)
class UWBP_ModeCategoryRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DeselectAnim;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectAnim;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_ModeCategory;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Attachment;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Default;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Hovered;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Selected;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ModeCategory;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ModeList;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Modes;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_NoneMode;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModeRow_C*                         WBP_WeaponMode;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModeRow_C*                         WBP_WeaponMode_1;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModeRow_C*                         WBP_WeaponMode_2;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBPS_SupportedAttachments              SupportedModeInfo;                                 // 0x0300(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player_Ref;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFItemInfo                             Wepon_Info;                                        // 0x0320(0x0220)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsExpanded;                                       // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHaveModes;                                        // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542[0x6];                                      // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WeaponRow_C*                       Parent_Ref;                                        // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnActiveModeChanged;                               // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_ModeCategoryRow_C*                 SelectMode;                                        // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ModeRow_C*>                 AllRows;                                           // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class UPaperSprite*>      ImageAttachments;                                  // 0x0578(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ActiveModeCategoryChanged(class UWBP_ModeCategoryRow_C* NewActiveModeCategory);
	void AddAttachmentByModeName(class FName NewModeName, struct FFItemInfo& WeaponInfo, class ASurvivalPlayer_C* Player);
	void BndEvt__WBP_ModeCategoryComboBox_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void CheckMode(const struct FFItemInfo& Weapon_Info, bool* Result);
	void CollapseCombobox();
	void Construct();
	void Create_Mode_Rows(bool* HasSupportModes);
	void Deselect();
	void ExecuteUbergraph_WBP_ModeCategoryRow(int32 EntryPoint);
	void ExpandCombobox();
	void GetDefaultModeName(const struct FFItemInfo& WeaponInfo, E_TypesOfModes ModeType, class FName* Param_Name, bool* Result);
	void GetInventoryItemInfoByModeName(class FName ModeName, class ASurvivalPlayer_C* Player, bool* WasFound, struct FFItemInfo* Mode_Info);
	void GetNameAttacmentsByModeType(E_TypesOfModes ModeType, const struct FFItemInfo& Weapon_Info, bool* IsFound, class FName* ModeName);
	void OnActiveModeChanged__DelegateSignature(class UWBP_ModeRow_C* ModeWidgetRef, const struct FFItemInfo& ModeInfo);
	void OnActiveModeChanged_Event(class UWBP_ModeRow_C* ModeWidgetRef, const struct FFItemInfo& ModeInfo);
	void OnWeaponRowCollapsed_Event_0();
	void PrintCurrentModeName(const struct FFItemInfo& Param_Wepon_Info);
	void PrintModeNames(const struct FFItemInfo& Param_Wepon_Info);
	void RemoveAttachmentByModeName(class FName ModeName, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player);
	void RemoveAttachmentByModeType(E_TypesOfModes ModeType, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player);
	void Set_Default_Mode(E_TypesOfModes ModeType, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player);
	void Switch_Mode(class FName NewModeName, E_TypesOfModes ModeType, struct FFItemInfo& WeaponInfo, class ASurvivalPlayer_C* Player);
	void UpdateInfo(struct FFItemInfo& ItemInfo, bool* Result);
	void UpdateWeaponInfo(const struct FFItemInfo& Param_Wepon_Info);

	void HaveSupportModsBeenFound_(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModeCategoryRow_C">();
	}
	static class UWBP_ModeCategoryRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModeCategoryRow_C>();
	}
};
static_assert(alignof(UWBP_ModeCategoryRow_C) == 0x000008, "Wrong alignment on UWBP_ModeCategoryRow_C");
static_assert(sizeof(UWBP_ModeCategoryRow_C) == 0x0005C8, "Wrong size on UWBP_ModeCategoryRow_C");
static_assert(offsetof(UWBP_ModeCategoryRow_C, UberGraphFrame) == 0x000280, "Member 'UWBP_ModeCategoryRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, DeselectAnim) == 0x000288, "Member 'UWBP_ModeCategoryRow_C::DeselectAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, SelectAnim) == 0x000290, "Member 'UWBP_ModeCategoryRow_C::SelectAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, HoverAnim) == 0x000298, "Member 'UWBP_ModeCategoryRow_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Button_ModeCategory) == 0x0002A0, "Member 'UWBP_ModeCategoryRow_C::Button_ModeCategory' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Image_Attachment) == 0x0002A8, "Member 'UWBP_ModeCategoryRow_C::Image_Attachment' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Image_ItemBG_Default) == 0x0002B0, "Member 'UWBP_ModeCategoryRow_C::Image_ItemBG_Default' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Image_ItemBG_Hovered) == 0x0002B8, "Member 'UWBP_ModeCategoryRow_C::Image_ItemBG_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Image_ItemBG_Selected) == 0x0002C0, "Member 'UWBP_ModeCategoryRow_C::Image_ItemBG_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Text_ModeCategory) == 0x0002C8, "Member 'UWBP_ModeCategoryRow_C::Text_ModeCategory' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, VerticalBox_ModeList) == 0x0002D0, "Member 'UWBP_ModeCategoryRow_C::VerticalBox_ModeList' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, VerticalBox_Modes) == 0x0002D8, "Member 'UWBP_ModeCategoryRow_C::VerticalBox_Modes' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, VerticalBox_NoneMode) == 0x0002E0, "Member 'UWBP_ModeCategoryRow_C::VerticalBox_NoneMode' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, WBP_WeaponMode) == 0x0002E8, "Member 'UWBP_ModeCategoryRow_C::WBP_WeaponMode' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, WBP_WeaponMode_1) == 0x0002F0, "Member 'UWBP_ModeCategoryRow_C::WBP_WeaponMode_1' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, WBP_WeaponMode_2) == 0x0002F8, "Member 'UWBP_ModeCategoryRow_C::WBP_WeaponMode_2' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, SupportedModeInfo) == 0x000300, "Member 'UWBP_ModeCategoryRow_C::SupportedModeInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Player_Ref) == 0x000318, "Member 'UWBP_ModeCategoryRow_C::Player_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Wepon_Info) == 0x000320, "Member 'UWBP_ModeCategoryRow_C::Wepon_Info' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, bIsExpanded) == 0x000540, "Member 'UWBP_ModeCategoryRow_C::bIsExpanded' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, bHaveModes) == 0x000541, "Member 'UWBP_ModeCategoryRow_C::bHaveModes' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, Parent_Ref) == 0x000548, "Member 'UWBP_ModeCategoryRow_C::Parent_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, OnActiveModeChanged) == 0x000550, "Member 'UWBP_ModeCategoryRow_C::OnActiveModeChanged' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, SelectMode) == 0x000560, "Member 'UWBP_ModeCategoryRow_C::SelectMode' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, AllRows) == 0x000568, "Member 'UWBP_ModeCategoryRow_C::AllRows' has a wrong offset!");
static_assert(offsetof(UWBP_ModeCategoryRow_C, ImageAttachments) == 0x000578, "Member 'UWBP_ModeCategoryRow_C::ImageAttachments' has a wrong offset!");

}
