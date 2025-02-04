#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CarUpgradeElement

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.ChangeSelection
// 0x0001 (0x0001 - 0x0000)
struct W_CarUpgradeElement_C_ChangeSelection final
{
public:
	bool                                          NewSelection;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_ChangeSelection) == 0x000001, "Wrong alignment on W_CarUpgradeElement_C_ChangeSelection");
static_assert(sizeof(W_CarUpgradeElement_C_ChangeSelection) == 0x000001, "Wrong size on W_CarUpgradeElement_C_ChangeSelection");
static_assert(offsetof(W_CarUpgradeElement_C_ChangeSelection, NewSelection) == 0x000000, "Member 'W_CarUpgradeElement_C_ChangeSelection::NewSelection' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.ExecuteUbergraph_W_CarUpgradeElement
// 0x0150 (0x0150 - 0x0000)
struct W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0xF];                                       // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0020(0x00D0)()
	bool                                          K2Node_CustomEvent_NewSelection;                   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_PlayTime;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewEnabled;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default_1;                           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement) == 0x000010, "Wrong alignment on W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement");
static_assert(sizeof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement) == 0x000150, "Wrong size on W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, EntryPoint) == 0x000000, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, Temp_bool_Variable) == 0x000004, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, Temp_byte_Variable) == 0x000005, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, Temp_byte_Variable_1) == 0x000006, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, Temp_bool_Variable_1) == 0x000007, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, Temp_real_Variable) == 0x000008, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_Event_IsDesignTime) == 0x000010, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000020, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_CustomEvent_NewSelection) == 0x0000F0, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_CustomEvent_NewSelection' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_Select_Default) == 0x0000F1, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_CustomEvent_PlayTime) == 0x0000F8, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_CustomEvent_PlayTime' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000100, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000108, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_PlayAnimation_ReturnValue) == 0x000110, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_PlayAnimation_ReturnValue_1) == 0x000118, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_PlayAnimation_ReturnValue_2) == 0x000120, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_CustomEvent_NewEnabled) == 0x000128, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_CustomEvent_NewEnabled' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, K2Node_Select_Default_1) == 0x000130, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x000138, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x00013C, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000140, "Member 'W_CarUpgradeElement_C_ExecuteUbergraph_W_CarUpgradeElement::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_CarUpgradeElement_C_OnClicked__DelegateSignature final
{
public:
	class UW_CarUpgradeElement_C*                 ClickedWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_CarUpgradeElement_C_OnClicked__DelegateSignature");
static_assert(sizeof(W_CarUpgradeElement_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on W_CarUpgradeElement_C_OnClicked__DelegateSignature");
static_assert(offsetof(W_CarUpgradeElement_C_OnClicked__DelegateSignature, ClickedWidget) == 0x000000, "Member 'W_CarUpgradeElement_C_OnClicked__DelegateSignature::ClickedWidget' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_CarUpgradeElement_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_PreConstruct) == 0x000001, "Wrong alignment on W_CarUpgradeElement_C_PreConstruct");
static_assert(sizeof(W_CarUpgradeElement_C_PreConstruct) == 0x000001, "Wrong size on W_CarUpgradeElement_C_PreConstruct");
static_assert(offsetof(W_CarUpgradeElement_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_CarUpgradeElement_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.SetCost
// 0x0028 (0x0028 - 0x0000)
struct W_CarUpgradeElement_C_SetCost final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_SetCost) == 0x000008, "Wrong alignment on W_CarUpgradeElement_C_SetCost");
static_assert(sizeof(W_CarUpgradeElement_C_SetCost) == 0x000028, "Wrong size on W_CarUpgradeElement_C_SetCost");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, Cost) == 0x000000, "Member 'W_CarUpgradeElement_C_SetCost::Cost' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, Temp_bool_Variable) == 0x000004, "Member 'W_CarUpgradeElement_C_SetCost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'W_CarUpgradeElement_C_SetCost::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, Temp_byte_Variable) == 0x000020, "Member 'W_CarUpgradeElement_C_SetCost::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, Temp_byte_Variable_1) == 0x000021, "Member 'W_CarUpgradeElement_C_SetCost::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCost, K2Node_Select_Default) == 0x000022, "Member 'W_CarUpgradeElement_C_SetCost::K2Node_Select_Default' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.SetCurrentLevel
// 0x0120 (0x0120 - 0x0000)
struct W_CarUpgradeElement_C_SetCurrentLevel final
{
public:
	int32                                         CurrentLevel;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0xB];                                       // 0x0015(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0020(0x00D0)(ConstParm)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_SetCurrentLevel) == 0x000010, "Wrong alignment on W_CarUpgradeElement_C_SetCurrentLevel");
static_assert(sizeof(W_CarUpgradeElement_C_SetCurrentLevel) == 0x000120, "Wrong size on W_CarUpgradeElement_C_SetCurrentLevel");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CurrentLevel) == 0x000000, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CurrentLevel' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, Temp_bool_Variable) == 0x000004, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, Temp_int_Array_Index_Variable) == 0x000008, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, K2Node_Select_Default) == 0x000020, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, K2Node_MakeArray_Array) == 0x0000F0, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CallFunc_Array_Get_Item) == 0x000108, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_SetCurrentLevel, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'W_CarUpgradeElement_C_SetCurrentLevel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct W_CarUpgradeElement_C_SetEnabled final
{
public:
	bool                                          NewEnabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_SetEnabled) == 0x000001, "Wrong alignment on W_CarUpgradeElement_C_SetEnabled");
static_assert(sizeof(W_CarUpgradeElement_C_SetEnabled) == 0x000001, "Wrong size on W_CarUpgradeElement_C_SetEnabled");
static_assert(offsetof(W_CarUpgradeElement_C_SetEnabled, NewEnabled) == 0x000000, "Member 'W_CarUpgradeElement_C_SetEnabled::NewEnabled' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.SetLabel
// 0x0018 (0x0018 - 0x0000)
struct W_CarUpgradeElement_C_SetLabel final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_CarUpgradeElement_C_SetLabel) == 0x000008, "Wrong alignment on W_CarUpgradeElement_C_SetLabel");
static_assert(sizeof(W_CarUpgradeElement_C_SetLabel) == 0x000018, "Wrong size on W_CarUpgradeElement_C_SetLabel");
static_assert(offsetof(W_CarUpgradeElement_C_SetLabel, Text) == 0x000000, "Member 'W_CarUpgradeElement_C_SetLabel::Text' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.UpdateMaxLevels
// 0x0038 (0x0038 - 0x0000)
struct W_CarUpgradeElement_C_UpdateMaxLevels final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_UpdateMaxLevels) == 0x000008, "Wrong alignment on W_CarUpgradeElement_C_UpdateMaxLevels");
static_assert(sizeof(W_CarUpgradeElement_C_UpdateMaxLevels) == 0x000038, "Wrong size on W_CarUpgradeElement_C_UpdateMaxLevels");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, Temp_int_Array_Index_Variable) == 0x000000, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, K2Node_MakeArray_Array) == 0x000010, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_CarUpgradeElement_C_UpdateMaxLevels, CallFunc_Less_IntInt_ReturnValue_1) == 0x000030, "Member 'W_CarUpgradeElement_C_UpdateMaxLevels::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function W_CarUpgradeElement.W_CarUpgradeElement_C.UpgradingAnimationStart
// 0x0008 (0x0008 - 0x0000)
struct W_CarUpgradeElement_C_UpgradingAnimationStart final
{
public:
	double                                        PlayTime;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CarUpgradeElement_C_UpgradingAnimationStart) == 0x000008, "Wrong alignment on W_CarUpgradeElement_C_UpgradingAnimationStart");
static_assert(sizeof(W_CarUpgradeElement_C_UpgradingAnimationStart) == 0x000008, "Wrong size on W_CarUpgradeElement_C_UpgradingAnimationStart");
static_assert(offsetof(W_CarUpgradeElement_C_UpgradingAnimationStart, PlayTime) == 0x000000, "Member 'W_CarUpgradeElement_C_UpgradingAnimationStart::PlayTime' has a wrong offset!");

}

