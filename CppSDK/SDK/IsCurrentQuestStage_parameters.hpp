#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsCurrentQuestStage

#include "Basic.hpp"


namespace SDK::Params
{

// Function IsCurrentQuestStage.IsCurrentQuestStage_C.VerifyCondition
// 0x0050 (0x0050 - 0x0000)
struct IsCurrentQuestStage_C_VerifyCondition final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SurvPC_C>         K2Node_DynamicCast_AsBPI_Surv_PC;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTutorStage_StageName;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBeginner_IsBeginner;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IsCurrentQuestStage_C_VerifyCondition) == 0x000008, "Wrong alignment on IsCurrentQuestStage_C_VerifyCondition");
static_assert(sizeof(IsCurrentQuestStage_C_VerifyCondition) == 0x000050, "Wrong size on IsCurrentQuestStage_C_VerifyCondition");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, PlayerController) == 0x000000, "Member 'IsCurrentQuestStage_C_VerifyCondition::PlayerController' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, ReturnValue) == 0x000008, "Member 'IsCurrentQuestStage_C_VerifyCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, Temp_bool_Variable) == 0x000009, "Member 'IsCurrentQuestStage_C_VerifyCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, K2Node_DynamicCast_AsBPI_Surv_PC) == 0x000010, "Member 'IsCurrentQuestStage_C_VerifyCondition::K2Node_DynamicCast_AsBPI_Surv_PC' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'IsCurrentQuestStage_C_VerifyCondition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_GetTutorStage_StageName) == 0x000028, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_GetTutorStage_StageName' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, K2Node_DynamicCast_AsSurv_PC) == 0x000038, "Member 'IsCurrentQuestStage_C_VerifyCondition::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'IsCurrentQuestStage_C_VerifyCondition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_GetIsBeginner_IsBeginner) == 0x000041, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_GetIsBeginner_IsBeginner' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, Temp_bool_Variable_1) == 0x000042, "Member 'IsCurrentQuestStage_C_VerifyCondition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_Array_Find_ReturnValue) == 0x000044, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000048, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, K2Node_Select_Default) == 0x00004A, "Member 'IsCurrentQuestStage_C_VerifyCondition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00004B, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsCurrentQuestStage_C_VerifyCondition, CallFunc_Not_PreBool_ReturnValue_1) == 0x00004C, "Member 'IsCurrentQuestStage_C_VerifyCondition::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}
