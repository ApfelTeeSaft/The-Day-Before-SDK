#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DLSSStats

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_DLSSStats.WBP_DLSSStats_C.ExecuteUbergraph_WBP_DLSSStats
// 0x0270 (0x0270 - 0x0000)
struct WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetCompressedPing_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Multiply_ByteByte_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x00A8(0x0018)()
	class AGS_TDB_C*                              K2Node_DynamicCast_AsGS_TDB;                       // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_10;             // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_11;             // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_12;             // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_13;             // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_14;             // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_15;             // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_16;             // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_17;             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_18;             // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_19;             // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0250(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats) == 0x000008, "Wrong alignment on WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats");
static_assert(sizeof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats) == 0x000270, "Wrong size on WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, EntryPoint) == 0x000000, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_GetCompressedPing_ReturnValue) == 0x000020, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_GetCompressedPing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Multiply_ByteByte_ReturnValue) == 0x000030, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Multiply_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_GetText_ReturnValue) == 0x000048, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000090, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_GetGameState_ReturnValue) == 0x0000A0, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_GetText_ReturnValue_1) == 0x0000A8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, K2Node_DynamicCast_AsGS_TDB) == 0x0000C0, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::K2Node_DynamicCast_AsGS_TDB' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000D0, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000E0, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000F0, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000100, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000110, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000120, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000130, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000140, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000150, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000160, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_9) == 0x000170, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000180, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_10) == 0x000188, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000198, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_11) == 0x0001A8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_12) == 0x0001B8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_13) == 0x0001C8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_14) == 0x0001D8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_15) == 0x000200, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_16) == 0x000210, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_17) == 0x000220, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_18) == 0x000230, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Concat_StrStr_ReturnValue_19) == 0x000240, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Concat_StrStr_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000250, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000268, "Member 'WBP_DLSSStats_C_ExecuteUbergraph_WBP_DLSSStats::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_DLSSStats.WBP_DLSSStats_C.GetStats
// 0x0338 (0x0338 - 0x0000)
struct WBP_DLSSStats_C_GetStats final
{
public:
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_10;             // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_11;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	class FString                                 Temp_string_Variable_5;                            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_6;                            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_7;                            // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_8;                            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_9;                            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_10;                           // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_11;                           // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_12;                           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_13;                           // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGI_Survival_C*                         K2Node_DynamicCast_AsGI_Survival;                  // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_12;             // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_3;                           // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_13;             // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_14;             // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_15;             // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_16;             // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_17;             // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_18;             // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_19;             // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_20;             // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_21;             // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_22;             // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_23;             // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0320(0x0018)()
};
static_assert(alignof(WBP_DLSSStats_C_GetStats) == 0x000008, "Wrong alignment on WBP_DLSSStats_C_GetStats");
static_assert(sizeof(WBP_DLSSStats_C_GetStats) == 0x000338, "Wrong size on WBP_DLSSStats_C_GetStats");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue) == 0x000000, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_int_Variable) == 0x000010, "Member 'WBP_DLSSStats_C_GetStats::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000018, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable) == 0x000028, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000038, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000048, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_1) == 0x000058, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000068, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000078, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_2) == 0x000088, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000098, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_7) == 0x0000A8, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_int_Variable_1) == 0x0000B8, "Member 'WBP_DLSSStats_C_GetStats::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_8) == 0x0000C0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_3) == 0x0000D0, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_9) == 0x0000E0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_10) == 0x0000F0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_4) == 0x000100, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_11) == 0x000110, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_5) == 0x000138, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_6) == 0x000148, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_7) == 0x000158, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_8) == 0x000168, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_int_Variable_2) == 0x000178, "Member 'WBP_DLSSStats_C_GetStats::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_9) == 0x000180, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_10) == 0x000190, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_int_Variable_3) == 0x0001A0, "Member 'WBP_DLSSStats_C_GetStats::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_11) == 0x0001A8, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_12) == 0x0001B8, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, Temp_string_Variable_13) == 0x0001C8, "Member 'WBP_DLSSStats_C_GetStats::Temp_string_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_GetGameInstance_ReturnValue) == 0x0001D8, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_DynamicCast_AsGI_Survival) == 0x0001E0, "Member 'WBP_DLSSStats_C_GetStats::K2Node_DynamicCast_AsGI_Survival' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'WBP_DLSSStats_C_GetStats::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_SelectString_ReturnValue) == 0x0001F0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000200, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_12) == 0x000210, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_Select_Default) == 0x000220, "Member 'WBP_DLSSStats_C_GetStats::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_Select_Default_1) == 0x000230, "Member 'WBP_DLSSStats_C_GetStats::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_SelectString_ReturnValue_1) == 0x000240, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_Select_Default_2) == 0x000250, "Member 'WBP_DLSSStats_C_GetStats::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, K2Node_Select_Default_3) == 0x000260, "Member 'WBP_DLSSStats_C_GetStats::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_13) == 0x000270, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_14) == 0x000280, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_15) == 0x000290, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_16) == 0x0002A0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_17) == 0x0002B0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_18) == 0x0002C0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_19) == 0x0002D0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_20) == 0x0002E0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_21) == 0x0002F0, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_22) == 0x000300, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Concat_StrStr_ReturnValue_23) == 0x000310, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Concat_StrStr_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_DLSSStats_C_GetStats, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000320, "Member 'WBP_DLSSStats_C_GetStats::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WBP_DLSSStats.WBP_DLSSStats_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct WBP_DLSSStats_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WBP_DLSSStats_C_GetText_0) == 0x000008, "Wrong alignment on WBP_DLSSStats_C_GetText_0");
static_assert(sizeof(WBP_DLSSStats_C_GetText_0) == 0x000018, "Wrong size on WBP_DLSSStats_C_GetText_0");
static_assert(offsetof(WBP_DLSSStats_C_GetText_0, ReturnValue) == 0x000000, "Member 'WBP_DLSSStats_C_GetText_0::ReturnValue' has a wrong offset!");

}
