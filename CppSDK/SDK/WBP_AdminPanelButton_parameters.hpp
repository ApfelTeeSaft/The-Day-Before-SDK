#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AdminPanelButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_AdminPanelButton.WBP_AdminPanelButton_C.ButtonPushed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature final
{
public:
	class UWBP_AdminPanelButton_C*                TargetButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature");
static_assert(sizeof(WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature) == 0x000008, "Wrong size on WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature");
static_assert(offsetof(WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature, TargetButton) == 0x000000, "Member 'WBP_AdminPanelButton_C_ButtonPushed__DelegateSignature::TargetButton' has a wrong offset!");

// Function WBP_AdminPanelButton.WBP_AdminPanelButton_C.ExecuteUbergraph_WBP_AdminPanelButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton) == 0x000008, "Wrong alignment on WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton");
static_assert(sizeof(WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton) == 0x000010, "Wrong size on WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton");
static_assert(offsetof(WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton, EntryPoint) == 0x000000, "Member 'WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_AdminPanelButton_C_ExecuteUbergraph_WBP_AdminPanelButton::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_AdminPanelButton.WBP_AdminPanelButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_AdminPanelButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AdminPanelButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_AdminPanelButton_C_PreConstruct");
static_assert(sizeof(WBP_AdminPanelButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_AdminPanelButton_C_PreConstruct");
static_assert(offsetof(WBP_AdminPanelButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_AdminPanelButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

