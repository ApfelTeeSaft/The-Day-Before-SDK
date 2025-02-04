#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValidTutorStageName

#include "Basic.hpp"


namespace SDK::Params
{

// Function ValidTutorStageName.ValidTutorStageName_C.CheckCondition
// 0x0048 (0x0048 - 0x0000)
struct ValidTutorStageName_C_CheckCondition final
{
public:
	class UQuestContext*                          Context;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetOwnerController_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SurvPC_C>         K2Node_DynamicCast_AsBPI_Surv_PC;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTutorStage_StageName;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ValidTutorStageName_C_CheckCondition) == 0x000008, "Wrong alignment on ValidTutorStageName_C_CheckCondition");
static_assert(sizeof(ValidTutorStageName_C_CheckCondition) == 0x000048, "Wrong size on ValidTutorStageName_C_CheckCondition");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, Context) == 0x000000, "Member 'ValidTutorStageName_C_CheckCondition::Context' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, ReturnValue) == 0x000008, "Member 'ValidTutorStageName_C_CheckCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, CallFunc_GetOwnerController_ReturnValue) == 0x000010, "Member 'ValidTutorStageName_C_CheckCondition::CallFunc_GetOwnerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, K2Node_DynamicCast_AsBPI_Surv_PC) == 0x000018, "Member 'ValidTutorStageName_C_CheckCondition::K2Node_DynamicCast_AsBPI_Surv_PC' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ValidTutorStageName_C_CheckCondition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, CallFunc_GetTutorStage_StageName) == 0x000030, "Member 'ValidTutorStageName_C_CheckCondition::CallFunc_GetTutorStage_StageName' has a wrong offset!");
static_assert(offsetof(ValidTutorStageName_C_CheckCondition, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000040, "Member 'ValidTutorStageName_C_CheckCondition::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}

