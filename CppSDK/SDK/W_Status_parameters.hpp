#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Status

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Status.W_Status_C.ExecuteUbergraph_W_Status
// 0x04E8 (0x04E8 - 0x0000)
struct W_Status_C_ExecuteUbergraph_W_Status final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0030(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0048(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0068(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0080(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0098(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x00B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x00D0(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry_1;                         // 0x00E8(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0124(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0160(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x01D8(0x0078)(ConstParm)
	bool                                          K2Node_CustomEvent_WeightLowSpeed;                 // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_MaxStamina;                     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_DecreaseStamina;                // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0280(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x02D0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x0320(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x0330(0x0018)()
	int32                                         K2Node_CustomEvent_InInt;                          // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_time;                           // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue;           // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0398(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x03B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x03D8(0x0018)()
	class FString                                 Temp_string_Variable_1;                            // 0x03F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_A_2;                            // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x041B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_3;                            // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_444[0x4];                                      // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0448(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_A_1;                            // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x04A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1[0x7];                                      // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x04B8(0x0018)()
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_A;                              // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_2;         // 0x04E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_3;         // 0x04E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_4;         // 0x04E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_ExecuteUbergraph_W_Status) == 0x000008, "Wrong alignment on W_Status_C_ExecuteUbergraph_W_Status");
static_assert(sizeof(W_Status_C_ExecuteUbergraph_W_Status) == 0x0004E8, "Wrong size on W_Status_C_ExecuteUbergraph_W_Status");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, EntryPoint) == 0x000000, "Member 'W_Status_C_ExecuteUbergraph_W_Status::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, Temp_string_Variable) == 0x000008, "Member 'W_Status_C_ExecuteUbergraph_W_Status::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array) == 0x000020, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue) == 0x000030, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array_1) == 0x000048, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array_2) == 0x000058, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue_1) == 0x000068, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue_2) == 0x000080, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array_3) == 0x000098, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array_4) == 0x0000A8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue_3) == 0x0000B8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue_4) == 0x0000D0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_MyGeometry_1) == 0x0000E8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_MyGeometry_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_InDeltaTime) == 0x000120, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_MyGeometry) == 0x000124, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_MouseEvent_1) == 0x000160, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_MouseEvent) == 0x0001D8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_WeightLowSpeed) == 0x000250, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_WeightLowSpeed' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_MaxStamina) == 0x000258, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_MaxStamina' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_DecreaseStamina) == 0x000260, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_DecreaseStamina' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000268, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000270, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000278, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeStruct_FormatArgumentData) == 0x000280, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002D0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_MakeArray_Array_5) == 0x000320, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Format_ReturnValue_5) == 0x000330, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_InInt) == 0x000348, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_InInt' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_time) == 0x000350, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_time' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000358, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_IntToString_ReturnValue) == 0x000360, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000370, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue) == 0x000378, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000388, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000398, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0003A8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0003B8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0003C8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_StringToText_ReturnValue) == 0x0003D8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, Temp_string_Variable_1) == 0x0003F0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, Temp_string_Variable_2) == 0x000400, "Member 'W_Status_C_ExecuteUbergraph_W_Status::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_A_2) == 0x000410, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_A_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000418, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000419, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00041A, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_BooleanAND_ReturnValue) == 0x00041B, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_PlayAnimation_ReturnValue) == 0x000420, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000428, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, Temp_string_Variable_3) == 0x000430, "Member 'W_Status_C_ExecuteUbergraph_W_Status::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, Temp_int_Variable) == 0x000440, "Member 'W_Status_C_ExecuteUbergraph_W_Status::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Select_Default) == 0x000448, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000458, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_A_1) == 0x000468, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_A_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000470, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000480, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000488, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000498, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Concat_StrStr_ReturnValue_8) == 0x0004A0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_BooleanAND_ReturnValue_1) == 0x0004B0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0004B8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x0004D0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_CustomEvent_A) == 0x0004D8, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_CustomEvent_A' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, K2Node_Event_IsDesignTime) == 0x0004E0, "Member 'W_Status_C_ExecuteUbergraph_W_Status::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_IsAnimationPlaying_ReturnValue_2) == 0x0004E1, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_IsAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_IsAnimationPlaying_ReturnValue_3) == 0x0004E2, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_IsAnimationPlaying_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_Status_C_ExecuteUbergraph_W_Status, CallFunc_IsAnimationPlaying_ReturnValue_4) == 0x0004E3, "Member 'W_Status_C_ExecuteUbergraph_W_Status::CallFunc_IsAnimationPlaying_ReturnValue_4' has a wrong offset!");

// Function W_Status.W_Status_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct W_Status_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_Status_C_OnMouseEnter) == 0x000008, "Wrong alignment on W_Status_C_OnMouseEnter");
static_assert(sizeof(W_Status_C_OnMouseEnter) == 0x0000B0, "Wrong size on W_Status_C_OnMouseEnter");
static_assert(offsetof(W_Status_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'W_Status_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Status_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'W_Status_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function W_Status.W_Status_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct W_Status_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_Status_C_OnMouseLeave) == 0x000008, "Wrong alignment on W_Status_C_OnMouseLeave");
static_assert(sizeof(W_Status_C_OnMouseLeave) == 0x000078, "Wrong size on W_Status_C_OnMouseLeave");
static_assert(offsetof(W_Status_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'W_Status_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function W_Status.W_Status_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Status_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_PreConstruct) == 0x000001, "Wrong alignment on W_Status_C_PreConstruct");
static_assert(sizeof(W_Status_C_PreConstruct) == 0x000001, "Wrong size on W_Status_C_PreConstruct");
static_assert(offsetof(W_Status_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Status_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Status.W_Status_C.SetTextAdrenalin
// 0x0010 (0x0010 - 0x0000)
struct W_Status_C_SetTextAdrenalin final
{
public:
	int32                                         InInt;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Time;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_SetTextAdrenalin) == 0x000008, "Wrong alignment on W_Status_C_SetTextAdrenalin");
static_assert(sizeof(W_Status_C_SetTextAdrenalin) == 0x000010, "Wrong size on W_Status_C_SetTextAdrenalin");
static_assert(offsetof(W_Status_C_SetTextAdrenalin, InInt) == 0x000000, "Member 'W_Status_C_SetTextAdrenalin::InInt' has a wrong offset!");
static_assert(offsetof(W_Status_C_SetTextAdrenalin, Time) == 0x000008, "Member 'W_Status_C_SetTextAdrenalin::Time' has a wrong offset!");

// Function W_Status.W_Status_C.SetTextFood
// 0x0008 (0x0008 - 0x0000)
struct W_Status_C_SetTextFood final
{
public:
	double                                        A;                                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_SetTextFood) == 0x000008, "Wrong alignment on W_Status_C_SetTextFood");
static_assert(sizeof(W_Status_C_SetTextFood) == 0x000008, "Wrong size on W_Status_C_SetTextFood");
static_assert(offsetof(W_Status_C_SetTextFood, A) == 0x000000, "Member 'W_Status_C_SetTextFood::A' has a wrong offset!");

// Function W_Status.W_Status_C.SetTextSatiety
// 0x0008 (0x0008 - 0x0000)
struct W_Status_C_SetTextSatiety final
{
public:
	double                                        A;                                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_SetTextSatiety) == 0x000008, "Wrong alignment on W_Status_C_SetTextSatiety");
static_assert(sizeof(W_Status_C_SetTextSatiety) == 0x000008, "Wrong size on W_Status_C_SetTextSatiety");
static_assert(offsetof(W_Status_C_SetTextSatiety, A) == 0x000000, "Member 'W_Status_C_SetTextSatiety::A' has a wrong offset!");

// Function W_Status.W_Status_C.SetTextWater
// 0x0008 (0x0008 - 0x0000)
struct W_Status_C_SetTextWater final
{
public:
	double                                        A;                                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_SetTextWater) == 0x000008, "Wrong alignment on W_Status_C_SetTextWater");
static_assert(sizeof(W_Status_C_SetTextWater) == 0x000008, "Wrong size on W_Status_C_SetTextWater");
static_assert(offsetof(W_Status_C_SetTextWater, A) == 0x000000, "Member 'W_Status_C_SetTextWater::A' has a wrong offset!");

// Function W_Status.W_Status_C.SetTextWeight
// 0x0018 (0x0018 - 0x0000)
struct W_Status_C_SetTextWeight final
{
public:
	bool                                          WeightLowSpeed;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxStamina;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DecreaseStamina;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_SetTextWeight) == 0x000008, "Wrong alignment on W_Status_C_SetTextWeight");
static_assert(sizeof(W_Status_C_SetTextWeight) == 0x000018, "Wrong size on W_Status_C_SetTextWeight");
static_assert(offsetof(W_Status_C_SetTextWeight, WeightLowSpeed) == 0x000000, "Member 'W_Status_C_SetTextWeight::WeightLowSpeed' has a wrong offset!");
static_assert(offsetof(W_Status_C_SetTextWeight, MaxStamina) == 0x000008, "Member 'W_Status_C_SetTextWeight::MaxStamina' has a wrong offset!");
static_assert(offsetof(W_Status_C_SetTextWeight, DecreaseStamina) == 0x000010, "Member 'W_Status_C_SetTextWeight::DecreaseStamina' has a wrong offset!");

// Function W_Status.W_Status_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_Status_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Status_C_Tick) == 0x000004, "Wrong alignment on W_Status_C_Tick");
static_assert(sizeof(W_Status_C_Tick) == 0x00003C, "Wrong size on W_Status_C_Tick");
static_assert(offsetof(W_Status_C_Tick, MyGeometry) == 0x000000, "Member 'W_Status_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Status_C_Tick, InDeltaTime) == 0x000038, "Member 'W_Status_C_Tick::InDeltaTime' has a wrong offset!");

}
