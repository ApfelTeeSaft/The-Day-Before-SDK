#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RepairWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RepairWeapon.WBP_RepairWeapon_C
// 0x0350 (0x05D0 - 0x0280)
class UWBP_RepairWeapon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DeselectAnim;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectAnim;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimFill;                                          // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Default;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Hovered;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG_Selected;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Button;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Progress;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Item;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     HandleAnim;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FailRepair;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvPC_C*                              ControllerRef;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      PlayerRef;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         RepairPlayerNeedResource;                          // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Counter;                                           // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ResourceName;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         PlayerRags;                                        // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerMetal;                                       // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerChemical;                                    // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ResourceArray;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 RemoveItems;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFItemInfo                             Weapon_Info;                                       // 0x0348(0x0220)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         NeedsResource;                                     // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeResource;                                  // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_WorkbenchRepairTab_C*              ParentRef;                                         // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_RepairRow_C*                       PapaRef;                                           // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_RepairWeapon_C*                    SelectCurrent;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNoResource;                                      // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          RepairAccept;                                      // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRepairingStarted;                                // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRepairingDone;                                   // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_RepairWeapon_Button_69_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_RepairWeapon_Button_69_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__WBP_RepairWeapon_Button_69_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_RepairWeapon_Button_69_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_RepairWeapon_Button_69_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	int32 Calculate_Repair_Weapon();
	int32 Calculate_Repair_Weapon_Tier_1();
	int32 Calculate_Repair_Weapon_Tier_2();
	int32 Calculate_Repair_Weapon_Tier_3();
	int32 Calculate_Repair_Weapon_Tier_4();
	int32 Calculate_Repair_Weapon_Tier_5();
	void Click();
	void Construct();
	void Deselect();
	void DeselectInstantly();
	void ExecuteUbergraph_WBP_RepairWeapon(int32 EntryPoint);
	void FailedRepair();
	void InitInfo(const struct FFItemInfo& WeaponInfo);
	void KeyRepair();
	void OnChangeResource__DelegateSignature();
	void OnNoResource__DelegateSignature();
	void OnRepairingDone__DelegateSignature();
	void OnRepairingStarted__DelegateSignature();
	void RemoveLocalResourcePlayer();
	void RemoveResource(const struct FFItemInfo& Item, int32 ItemUID1, class FName RowName, int32 Count);
	void RemoveResourceCountZero();
	void Repair();
	void RepairPressed(bool Cant);
	void RepairWeapon();
	int32 Update_Repair_Data();
	void UpdateCounterPlayers(const class FString& Resource);
	void UpdateInfo(const struct FFItemInfo& WeaponInfo);
	void UpdateResource(int32 CounterResource);
	int32 UpdateResourceBeforeRepairPlayers(int32 CounterResource, class FName NameResource, int32* UniqueServerID, struct FFItemInfo* StructOut);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RepairWeapon_C">();
	}
	static class UWBP_RepairWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RepairWeapon_C>();
	}
};
static_assert(alignof(UWBP_RepairWeapon_C) == 0x000008, "Wrong alignment on UWBP_RepairWeapon_C");
static_assert(sizeof(UWBP_RepairWeapon_C) == 0x0005D0, "Wrong size on UWBP_RepairWeapon_C");
static_assert(offsetof(UWBP_RepairWeapon_C, UberGraphFrame) == 0x000280, "Member 'UWBP_RepairWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, DeselectAnim) == 0x000288, "Member 'UWBP_RepairWeapon_C::DeselectAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, SelectAnim) == 0x000290, "Member 'UWBP_RepairWeapon_C::SelectAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, HoverAnim) == 0x000298, "Member 'UWBP_RepairWeapon_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, AnimFill) == 0x0002A0, "Member 'UWBP_RepairWeapon_C::AnimFill' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Button) == 0x0002A8, "Member 'UWBP_RepairWeapon_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Image_ItemBG_Default) == 0x0002B0, "Member 'UWBP_RepairWeapon_C::Image_ItemBG_Default' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Image_ItemBG_Hovered) == 0x0002B8, "Member 'UWBP_RepairWeapon_C::Image_ItemBG_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Image_ItemBG_Selected) == 0x0002C0, "Member 'UWBP_RepairWeapon_C::Image_ItemBG_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Overlay_Button) == 0x0002C8, "Member 'UWBP_RepairWeapon_C::Overlay_Button' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, ProgressBar_Progress) == 0x0002D0, "Member 'UWBP_RepairWeapon_C::ProgressBar_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, TextBlock_Item) == 0x0002D8, "Member 'UWBP_RepairWeapon_C::TextBlock_Item' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, HandleAnim) == 0x0002E0, "Member 'UWBP_RepairWeapon_C::HandleAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, FailRepair) == 0x0002E8, "Member 'UWBP_RepairWeapon_C::FailRepair' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, ControllerRef) == 0x0002F0, "Member 'UWBP_RepairWeapon_C::ControllerRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, PlayerRef) == 0x0002F8, "Member 'UWBP_RepairWeapon_C::PlayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, RepairPlayerNeedResource) == 0x000300, "Member 'UWBP_RepairWeapon_C::RepairPlayerNeedResource' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Counter) == 0x000304, "Member 'UWBP_RepairWeapon_C::Counter' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, ResourceName) == 0x000308, "Member 'UWBP_RepairWeapon_C::ResourceName' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, PlayerRags) == 0x000318, "Member 'UWBP_RepairWeapon_C::PlayerRags' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, PlayerMetal) == 0x00031C, "Member 'UWBP_RepairWeapon_C::PlayerMetal' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, PlayerChemical) == 0x000320, "Member 'UWBP_RepairWeapon_C::PlayerChemical' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, ResourceArray) == 0x000328, "Member 'UWBP_RepairWeapon_C::ResourceArray' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, RemoveItems) == 0x000338, "Member 'UWBP_RepairWeapon_C::RemoveItems' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, Weapon_Info) == 0x000348, "Member 'UWBP_RepairWeapon_C::Weapon_Info' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, NeedsResource) == 0x000568, "Member 'UWBP_RepairWeapon_C::NeedsResource' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, OnChangeResource) == 0x000570, "Member 'UWBP_RepairWeapon_C::OnChangeResource' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, ParentRef) == 0x000580, "Member 'UWBP_RepairWeapon_C::ParentRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, PapaRef) == 0x000588, "Member 'UWBP_RepairWeapon_C::PapaRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, SelectCurrent) == 0x000590, "Member 'UWBP_RepairWeapon_C::SelectCurrent' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, OnNoResource) == 0x000598, "Member 'UWBP_RepairWeapon_C::OnNoResource' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, RepairAccept) == 0x0005A8, "Member 'UWBP_RepairWeapon_C::RepairAccept' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, OnRepairingStarted) == 0x0005B0, "Member 'UWBP_RepairWeapon_C::OnRepairingStarted' has a wrong offset!");
static_assert(offsetof(UWBP_RepairWeapon_C, OnRepairingDone) == 0x0005C0, "Member 'UWBP_RepairWeapon_C::OnRepairingDone' has a wrong offset!");

}
