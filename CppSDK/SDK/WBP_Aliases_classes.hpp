#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Aliases

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Aliases.WBP_Aliases_C
// 0x02C0 (0x0540 - 0x0280)
class UWBP_Aliases_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Aliases;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Checkbox;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Checkbox_Off;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Default;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Aliases;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Price;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_WCoin;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFItemInfo                             FItemInfo;                                         // 0x02E8(0x0220)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A[0x6];                                      // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Selected_Aliases;                                  // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Name_WBP_Aliases_C;                                // 0x0520(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bPurchased;                                        // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsUsed;                                           // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Aliases_Button_Aliases_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_Aliases_Button_Aliases_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_Aliases_Button_Aliases_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Aliases(int32 EntryPoint);
	void GetName(class FText* Param_Name);
	void Init();
	void PreConstruct(bool IsDesignTime);
	void Selected_Aliases__DelegateSignature(class UWBP_Aliases_C* Ref);
	void SetHovered(bool Param_Hovered, bool WithAnim);
	void SetSelected(bool Param_Selected);
	void SetStatus(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Aliases_C">();
	}
	static class UWBP_Aliases_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Aliases_C>();
	}
};
static_assert(alignof(UWBP_Aliases_C) == 0x000008, "Wrong alignment on UWBP_Aliases_C");
static_assert(sizeof(UWBP_Aliases_C) == 0x000540, "Wrong size on UWBP_Aliases_C");
static_assert(offsetof(UWBP_Aliases_C, UberGraphFrame) == 0x000280, "Member 'UWBP_Aliases_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Selected) == 0x000288, "Member 'UWBP_Aliases_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Hovered) == 0x000290, "Member 'UWBP_Aliases_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Button_Aliases) == 0x000298, "Member 'UWBP_Aliases_C::Button_Aliases' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Image_Checkbox) == 0x0002A0, "Member 'UWBP_Aliases_C::Image_Checkbox' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Image_Checkbox_Off) == 0x0002A8, "Member 'UWBP_Aliases_C::Image_Checkbox_Off' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Image_Default) == 0x0002B0, "Member 'UWBP_Aliases_C::Image_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Image_Hovered) == 0x0002B8, "Member 'UWBP_Aliases_C::Image_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Image_Selected) == 0x0002C0, "Member 'UWBP_Aliases_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Text_Aliases) == 0x0002C8, "Member 'UWBP_Aliases_C::Text_Aliases' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Text_Price) == 0x0002D0, "Member 'UWBP_Aliases_C::Text_Price' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Text_WCoin) == 0x0002D8, "Member 'UWBP_Aliases_C::Text_WCoin' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, WidgetSwitcher_Status) == 0x0002E0, "Member 'UWBP_Aliases_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, FItemInfo) == 0x0002E8, "Member 'UWBP_Aliases_C::FItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, bHovered) == 0x000508, "Member 'UWBP_Aliases_C::bHovered' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, bSelected) == 0x000509, "Member 'UWBP_Aliases_C::bSelected' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Selected_Aliases) == 0x000510, "Member 'UWBP_Aliases_C::Selected_Aliases' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, Name_WBP_Aliases_C) == 0x000520, "Member 'UWBP_Aliases_C::Name_WBP_Aliases_C' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, bPurchased) == 0x000538, "Member 'UWBP_Aliases_C::bPurchased' has a wrong offset!");
static_assert(offsetof(UWBP_Aliases_C, bIsUsed) == 0x000539, "Member 'UWBP_Aliases_C::bIsUsed' has a wrong offset!");

}

