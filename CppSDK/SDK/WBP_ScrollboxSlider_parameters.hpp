#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScrollboxSlider

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_ScrollboxSlider_C_BndEvt__WBP_ScrollboxSlider_Slider_Loot_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.ChangeStyleOnDrag
// 0x0028 (0x0028 - 0x0000)
struct WBP_ScrollboxSlider_C_ChangeStyleOnDrag final
{
public:
	bool                                          bDrag;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
};
static_assert(alignof(WBP_ScrollboxSlider_C_ChangeStyleOnDrag) == 0x000004, "Wrong alignment on WBP_ScrollboxSlider_C_ChangeStyleOnDrag");
static_assert(sizeof(WBP_ScrollboxSlider_C_ChangeStyleOnDrag) == 0x000028, "Wrong size on WBP_ScrollboxSlider_C_ChangeStyleOnDrag");
static_assert(offsetof(WBP_ScrollboxSlider_C_ChangeStyleOnDrag, bDrag) == 0x000000, "Member 'WBP_ScrollboxSlider_C_ChangeStyleOnDrag::bDrag' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ChangeStyleOnDrag, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'WBP_ScrollboxSlider_C_ChangeStyleOnDrag::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ChangeStyleOnDrag, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'WBP_ScrollboxSlider_C_ChangeStyleOnDrag::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetSliderValue_Value_ImplicitCast;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000010, "Wrong size on WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0, CurrentOffset) == 0x000000, "Member 'WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0::CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0, CallFunc_SetSliderValue_Value_ImplicitCast) == 0x000008, "Member 'WBP_ScrollboxSlider_C_CREATEDELEGATE_PROXYFUNCTION_0::CallFunc_SetSliderValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.ExecuteUbergraph_WBP_ScrollboxSlider
// 0x0058 (0x0058 - 0x0000)
struct WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float CurrentOffset)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeA_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider) == 0x000008, "Wrong alignment on WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider");
static_assert(sizeof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider) == 0x000058, "Wrong size on WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, EntryPoint) == 0x000000, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_IsValid_ReturnValue_1) == 0x00000C, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000010, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, K2Node_Event_IsDesignTime) == 0x000014, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_MapRangeClamped_ReturnValue) == 0x000018, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x000030, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_MapRangeClamped_InRangeB_ImplicitCast) == 0x000038, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_MapRangeClamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_MapRangeClamped_OutRangeB_ImplicitCast) == 0x000040, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_MapRangeClamped_OutRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_MapRangeClamped_InRangeA_ImplicitCast) == 0x000048, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_MapRangeClamped_InRangeA_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x000050, "Member 'WBP_ScrollboxSlider_C_ExecuteUbergraph_WBP_ScrollboxSlider::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.OnMouseWheel
// 0x0280 (0x0280 - 0x0000)
struct WBP_ScrollboxSlider_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0188(0x00B8)()
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Max_ImplicitCast;                  // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_OnMouseWheel) == 0x000008, "Wrong alignment on WBP_ScrollboxSlider_C_OnMouseWheel");
static_assert(sizeof(WBP_ScrollboxSlider_C_OnMouseWheel) == 0x000280, "Wrong size on WBP_ScrollboxSlider_C_OnMouseWheel");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, MouseEvent) == 0x000038, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, ReturnValue) == 0x0000B0, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000168, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_IsValid_ReturnValue) == 0x00016C, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000170, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000178, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_GetScrollOffset_ReturnValue) == 0x00017C, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000180, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue) == 0x000188, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000240, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000248, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_FClamp_ReturnValue) == 0x000250, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_FClamp_Max_ImplicitCast) == 0x000260, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_FClamp_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000268, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000270, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_OnMouseWheel, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x000278, "Member 'WBP_ScrollboxSlider_C_OnMouseWheel::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ScrollboxSlider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ScrollboxSlider_C_PreConstruct");
static_assert(sizeof(WBP_ScrollboxSlider_C_PreConstruct) == 0x000001, "Wrong size on WBP_ScrollboxSlider_C_PreConstruct");
static_assert(offsetof(WBP_ScrollboxSlider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ScrollboxSlider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ScrollboxSlider.WBP_ScrollboxSlider_C.SetSliderValue
// 0x0058 (0x0058 - 0x0000)
struct WBP_ScrollboxSlider_C_SetSliderValue final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_B_ImplicitCast;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScrollboxSlider_C_SetSliderValue) == 0x000008, "Wrong alignment on WBP_ScrollboxSlider_C_SetSliderValue");
static_assert(sizeof(WBP_ScrollboxSlider_C_SetSliderValue) == 0x000058, "Wrong size on WBP_ScrollboxSlider_C_SetSliderValue");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, Value) == 0x000000, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::Value' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x00000C, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_MapRangeClamped_ReturnValue) == 0x000018, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_MapRangeClamped_OutRangeB_ImplicitCast) == 0x000028, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_MapRangeClamped_OutRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_MapRangeClamped_InRangeB_ImplicitCast) == 0x000030, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_MapRangeClamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_MapRangeClamped_OutRangeA_ImplicitCast) == 0x000040, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_MapRangeClamped_OutRangeA_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_SelectFloat_B_ImplicitCast) == 0x000048, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ScrollboxSlider_C_SetSliderValue, CallFunc_SetValue_InValue_ImplicitCast) == 0x000050, "Member 'WBP_ScrollboxSlider_C_SetSliderValue::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");

}

