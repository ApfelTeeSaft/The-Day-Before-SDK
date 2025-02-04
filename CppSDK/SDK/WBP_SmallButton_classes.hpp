#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SmallButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SmallButton.WBP_SmallButton_C
// 0x0038 (0x02B8 - 0x0280)
class UWBP_SmallButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover_Anim;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Enter;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedEnter;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPaperSprite*                           DefaultIcon;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)

public:
	void BndEvt__WBP_SmallButton_Button_Enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SmallButton_Button_Enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SmallButton_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SmallButton(int32 EntryPoint);
	void OnClickedEnter__DelegateSignature();
	void OnRefreshIcon();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SmallButton_C">();
	}
	static class UWBP_SmallButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SmallButton_C>();
	}
};
static_assert(alignof(UWBP_SmallButton_C) == 0x000008, "Wrong alignment on UWBP_SmallButton_C");
static_assert(sizeof(UWBP_SmallButton_C) == 0x0002B8, "Wrong size on UWBP_SmallButton_C");
static_assert(offsetof(UWBP_SmallButton_C, UberGraphFrame) == 0x000280, "Member 'UWBP_SmallButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SmallButton_C, Hover_Anim) == 0x000288, "Member 'UWBP_SmallButton_C::Hover_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_SmallButton_C, Button_Enter) == 0x000290, "Member 'UWBP_SmallButton_C::Button_Enter' has a wrong offset!");
static_assert(offsetof(UWBP_SmallButton_C, Image_Icon) == 0x000298, "Member 'UWBP_SmallButton_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_SmallButton_C, OnClickedEnter) == 0x0002A0, "Member 'UWBP_SmallButton_C::OnClickedEnter' has a wrong offset!");
static_assert(offsetof(UWBP_SmallButton_C, DefaultIcon) == 0x0002B0, "Member 'UWBP_SmallButton_C::DefaultIcon' has a wrong offset!");

}

