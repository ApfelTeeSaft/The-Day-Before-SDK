#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCreate_NavigationButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharacterCreate_NavigationButton.WBP_CharacterCreate_NavigationButton_C.ExecuteUbergraph_WBP_CharacterCreate_NavigationButton
// 0x0040 (0x0040 - 0x0000)
struct WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton) == 0x000008, "Wrong alignment on WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton");
static_assert(sizeof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton) == 0x000040, "Wrong size on WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, EntryPoint) == 0x000000, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_bool_Variable) == 0x000004, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_byte_Variable) == 0x000005, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, K2Node_Event_IsDesignTime) == 0x000007, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, K2Node_Select_Default) == 0x000008, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_byte_Variable_2) == 0x000009, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_byte_Variable_3) == 0x00000A, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, Temp_bool_Variable_1) == 0x000018, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, CallFunc_PlayEvent2D_ReturnValue) == 0x000030, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton, CallFunc_SelectInt_ReturnValue) == 0x000038, "Member 'WBP_CharacterCreate_NavigationButton_C_ExecuteUbergraph_WBP_CharacterCreate_NavigationButton::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function WBP_CharacterCreate_NavigationButton.WBP_CharacterCreate_NavigationButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharacterCreate_NavigationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCreate_NavigationButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CharacterCreate_NavigationButton_C_PreConstruct");
static_assert(sizeof(WBP_CharacterCreate_NavigationButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_CharacterCreate_NavigationButton_C_PreConstruct");
static_assert(offsetof(WBP_CharacterCreate_NavigationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CharacterCreate_NavigationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
