#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsBeginnerAfterStage

#include "Basic.hpp"


namespace SDK::Params
{

// Function IsBeginnerAfterStage.IsBeginnerAfterStage_C.VerifyCondition
// 0x0040 (0x0040 - 0x0000)
struct IsBeginnerAfterStage_C_VerifyCondition final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBeginner_IsBeginner;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetVendorName_VendorName;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGI_Survival_C*                         K2Node_DynamicCast_AsGI_Survival;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsWelcome_isWelcome;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IsBeginnerAfterStage_C_VerifyCondition) == 0x000008, "Wrong alignment on IsBeginnerAfterStage_C_VerifyCondition");
static_assert(sizeof(IsBeginnerAfterStage_C_VerifyCondition) == 0x000040, "Wrong size on IsBeginnerAfterStage_C_VerifyCondition");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, PlayerController) == 0x000000, "Member 'IsBeginnerAfterStage_C_VerifyCondition::PlayerController' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, ReturnValue) == 0x000008, "Member 'IsBeginnerAfterStage_C_VerifyCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, Temp_bool_Variable) == 0x000009, "Member 'IsBeginnerAfterStage_C_VerifyCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, K2Node_DynamicCast_AsSurv_PC) == 0x000010, "Member 'IsBeginnerAfterStage_C_VerifyCondition::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'IsBeginnerAfterStage_C_VerifyCondition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_GetIsBeginner_IsBeginner) == 0x000019, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_GetIsBeginner_IsBeginner' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_GetVendorName_VendorName) == 0x00001C, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_GetVendorName_VendorName' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, Temp_bool_Variable_1) == 0x000024, "Member 'IsBeginnerAfterStage_C_VerifyCondition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, Temp_bool_Variable_2) == 0x000025, "Member 'IsBeginnerAfterStage_C_VerifyCondition::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, K2Node_DynamicCast_AsGI_Survival) == 0x000030, "Member 'IsBeginnerAfterStage_C_VerifyCondition::K2Node_DynamicCast_AsGI_Survival' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'IsBeginnerAfterStage_C_VerifyCondition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_GetIsWelcome_isWelcome) == 0x000039, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_GetIsWelcome_isWelcome' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, CallFunc_IsValid_ReturnValue_1) == 0x00003A, "Member 'IsBeginnerAfterStage_C_VerifyCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IsBeginnerAfterStage_C_VerifyCondition, K2Node_Select_Default) == 0x00003B, "Member 'IsBeginnerAfterStage_C_VerifyCondition::K2Node_Select_Default' has a wrong offset!");

}
