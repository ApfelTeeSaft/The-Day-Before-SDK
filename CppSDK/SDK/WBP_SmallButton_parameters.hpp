#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SmallButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_SmallButton.WBP_SmallButton_C.ExecuteUbergraph_WBP_SmallButton
// 0x0028 (0x0028 - 0x0000)
struct WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton) == 0x000008, "Wrong alignment on WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton");
static_assert(sizeof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton) == 0x000028, "Wrong size on WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton");
static_assert(offsetof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton, EntryPoint) == 0x000000, "Member 'WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_SmallButton_C_ExecuteUbergraph_WBP_SmallButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_SmallButton.WBP_SmallButton_C.OnRefreshIcon
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_SmallButton_C_OnRefreshIcon final
{
public:
	float                                         Temp_real_Variable;                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0010(0x00D0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SmallButton_C_OnRefreshIcon) == 0x000010, "Wrong alignment on WBP_SmallButton_C_OnRefreshIcon");
static_assert(sizeof(WBP_SmallButton_C_OnRefreshIcon) == 0x0000F0, "Wrong size on WBP_SmallButton_C_OnRefreshIcon");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, Temp_real_Variable) == 0x000000, "Member 'WBP_SmallButton_C_OnRefreshIcon::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, Temp_real_Variable_1) == 0x000004, "Member 'WBP_SmallButton_C_OnRefreshIcon::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, Temp_bool_Variable) == 0x000008, "Member 'WBP_SmallButton_C_OnRefreshIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000010, "Member 'WBP_SmallButton_C_OnRefreshIcon::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'WBP_SmallButton_C_OnRefreshIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallButton_C_OnRefreshIcon, K2Node_Select_Default) == 0x0000E4, "Member 'WBP_SmallButton_C_OnRefreshIcon::K2Node_Select_Default' has a wrong offset!");

// Function WBP_SmallButton.WBP_SmallButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SmallButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SmallButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SmallButton_C_PreConstruct");
static_assert(sizeof(WBP_SmallButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_SmallButton_C_PreConstruct");
static_assert(offsetof(WBP_SmallButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SmallButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
