#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecoratorDistanceCheck

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DecoratorDistanceCheck.DecoratorDistanceCheck_C.PerformConditionCheckAI
// 0x00A8 (0x00A8 - 0x0000)
struct DecoratorDistanceCheck_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance2D_ReturnValue_1;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecoratorDistanceCheck_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on DecoratorDistanceCheck_C_PerformConditionCheckAI");
static_assert(sizeof(DecoratorDistanceCheck_C_PerformConditionCheckAI) == 0x0000A8, "Wrong size on DecoratorDistanceCheck_C_PerformConditionCheckAI");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000048, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_Vector_Distance2D_ReturnValue) == 0x000060, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000068, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000069, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000070, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000078, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_Vector_Distance2D_ReturnValue_1) == 0x000098, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_Vector_Distance2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000A1, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DecoratorDistanceCheck_C_PerformConditionCheckAI, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A2, "Member 'DecoratorDistanceCheck_C_PerformConditionCheckAI::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
