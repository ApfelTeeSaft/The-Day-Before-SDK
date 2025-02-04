#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BaseDialogueButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_BaseDialogueButton.W_BaseDialogueButton_C.ExecuteUbergraph_W_BaseDialogueButton
// 0x0008 (0x0008 - 0x0000)
struct W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton) == 0x000004, "Wrong alignment on W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton");
static_assert(sizeof(W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton) == 0x000008, "Wrong size on W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton");
static_assert(offsetof(W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton, EntryPoint) == 0x000000, "Member 'W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_BaseDialogueButton_C_ExecuteUbergraph_W_BaseDialogueButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_BaseDialogueButton.W_BaseDialogueButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_BaseDialogueButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BaseDialogueButton_C_PreConstruct) == 0x000001, "Wrong alignment on W_BaseDialogueButton_C_PreConstruct");
static_assert(sizeof(W_BaseDialogueButton_C_PreConstruct) == 0x000001, "Wrong size on W_BaseDialogueButton_C_PreConstruct");
static_assert(offsetof(W_BaseDialogueButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_BaseDialogueButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_BaseDialogueButton.W_BaseDialogueButton_C.SetButtonText
// 0x0018 (0x0018 - 0x0000)
struct W_BaseDialogueButton_C_SetButtonText final
{
public:
	class FText                                   Param_ButtonText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_BaseDialogueButton_C_SetButtonText) == 0x000008, "Wrong alignment on W_BaseDialogueButton_C_SetButtonText");
static_assert(sizeof(W_BaseDialogueButton_C_SetButtonText) == 0x000018, "Wrong size on W_BaseDialogueButton_C_SetButtonText");
static_assert(offsetof(W_BaseDialogueButton_C_SetButtonText, Param_ButtonText) == 0x000000, "Member 'W_BaseDialogueButton_C_SetButtonText::Param_ButtonText' has a wrong offset!");

}

