#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemInteractionActionButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.ExecuteUbergraph_WBP_ItemInteractionActionButton
// 0x0030 (0x0030 - 0x0000)
struct WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0018(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0020(0x0008)(NoDestructor)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton) == 0x000008, "Wrong alignment on WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton) == 0x000030, "Wrong size on WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, EntryPoint) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, K2Node_Event_InFocusEvent_1) == 0x000018, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, K2Node_Event_InFocusEvent) == 0x000020, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000028, "Member 'WBP_ItemInteractionActionButton_C_ExecuteUbergraph_WBP_ItemInteractionActionButton::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.GetEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemInteractionActionButton_C_GetEnabled final
{
public:
	bool                                          Param_Enabled;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_GetEnabled) == 0x000001, "Wrong alignment on WBP_ItemInteractionActionButton_C_GetEnabled");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_GetEnabled) == 0x000001, "Wrong size on WBP_ItemInteractionActionButton_C_GetEnabled");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_GetEnabled, Param_Enabled) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_GetEnabled::Param_Enabled' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemInteractionActionButton_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_ItemInteractionActionButton_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_ItemInteractionActionButton_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.SetButtonEnable
// 0x0028 (0x0028 - 0x0000)
struct WBP_ItemInteractionActionButton_C_SetButtonEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_SetButtonEnable) == 0x000008, "Wrong alignment on WBP_ItemInteractionActionButton_C_SetButtonEnable");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_SetButtonEnable) == 0x000028, "Wrong size on WBP_ItemInteractionActionButton_C_SetButtonEnable");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, Enable) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::Enable' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, Temp_byte_Variable) == 0x000001, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, CallFunc_SelectFloat_ReturnValue_1) == 0x000010, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, Temp_bool_Variable) == 0x000018, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, K2Node_Select_Default) == 0x000019, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x00001C, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetButtonEnable, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x000020, "Member 'WBP_ItemInteractionActionButton_C_SetButtonEnable::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.SetEnoughResouces
// 0x0018 (0x0018 - 0x0000)
struct WBP_ItemInteractionActionButton_C_SetEnoughResouces final
{
public:
	bool                                          bEnough;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_SetEnoughResouces) == 0x000008, "Wrong alignment on WBP_ItemInteractionActionButton_C_SetEnoughResouces");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_SetEnoughResouces) == 0x000018, "Wrong size on WBP_ItemInteractionActionButton_C_SetEnoughResouces");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetEnoughResouces, bEnough) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_SetEnoughResouces::bEnough' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetEnoughResouces, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_ItemInteractionActionButton_C_SetEnoughResouces::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetEnoughResouces, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000010, "Member 'WBP_ItemInteractionActionButton_C_SetEnoughResouces::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_ItemInteractionActionButton.WBP_ItemInteractionActionButton_C.SetText
// 0x0060 (0x0060 - 0x0000)
struct WBP_ItemInteractionActionButton_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bDisabledText;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CraftButtonTextColor_Error;                        // 0x001C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CraftButtonTextColor_Normal;                       // 0x002C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x004C(0x0014)()
};
static_assert(alignof(WBP_ItemInteractionActionButton_C_SetText) == 0x000008, "Wrong alignment on WBP_ItemInteractionActionButton_C_SetText");
static_assert(sizeof(WBP_ItemInteractionActionButton_C_SetText) == 0x000060, "Wrong size on WBP_ItemInteractionActionButton_C_SetText");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, Text) == 0x000000, "Member 'WBP_ItemInteractionActionButton_C_SetText::Text' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, bDisabledText) == 0x000018, "Member 'WBP_ItemInteractionActionButton_C_SetText::bDisabledText' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, CraftButtonTextColor_Error) == 0x00001C, "Member 'WBP_ItemInteractionActionButton_C_SetText::CraftButtonTextColor_Error' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, CraftButtonTextColor_Normal) == 0x00002C, "Member 'WBP_ItemInteractionActionButton_C_SetText::CraftButtonTextColor_Normal' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, CallFunc_SelectColor_ReturnValue) == 0x00003C, "Member 'WBP_ItemInteractionActionButton_C_SetText::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemInteractionActionButton_C_SetText, K2Node_MakeStruct_SlateColor) == 0x00004C, "Member 'WBP_ItemInteractionActionButton_C_SetText::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}
