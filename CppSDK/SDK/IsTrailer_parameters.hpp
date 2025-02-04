#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsTrailer

#include "Basic.hpp"


namespace SDK::Params
{

// Function isTrailer.isTrailer_C.VerifyCondition
// 0x0020 (0x0020 - 0x0000)
struct IsTrailer_C_VerifyCondition final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IsTrailer_C_VerifyCondition) == 0x000008, "Wrong alignment on IsTrailer_C_VerifyCondition");
static_assert(sizeof(IsTrailer_C_VerifyCondition) == 0x000020, "Wrong size on IsTrailer_C_VerifyCondition");
static_assert(offsetof(IsTrailer_C_VerifyCondition, PlayerController) == 0x000000, "Member 'IsTrailer_C_VerifyCondition::PlayerController' has a wrong offset!");
static_assert(offsetof(IsTrailer_C_VerifyCondition, ReturnValue) == 0x000008, "Member 'IsTrailer_C_VerifyCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(IsTrailer_C_VerifyCondition, K2Node_DynamicCast_AsSurv_PC) == 0x000010, "Member 'IsTrailer_C_VerifyCondition::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(IsTrailer_C_VerifyCondition, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'IsTrailer_C_VerifyCondition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IsTrailer_C_VerifyCondition, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'IsTrailer_C_VerifyCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsTrailer_C_VerifyCondition, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'IsTrailer_C_VerifyCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

