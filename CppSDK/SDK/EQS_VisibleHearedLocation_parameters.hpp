#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQS_VisibleHearedLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EQS_VisibleHearedLocation.EQS_VisibleHearedLocation_C.ProvideSingleLocation
// 0x0108 (0x0108 - 0x0000)
struct EQS_VisibleHearedLocation_C_ProvideSingleLocation final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ResultingLocation;                                 // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_3;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_4;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetValueAsVector_ReturnValue;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueAsBool_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueAsBool_ReturnValue_1;             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_3;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetValueAsVector_ReturnValue_1;           // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_4;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetValueAsVector_ReturnValue_2;           // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default_1;                           // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EQS_VisibleHearedLocation_C_ProvideSingleLocation) == 0x000008, "Wrong alignment on EQS_VisibleHearedLocation_C_ProvideSingleLocation");
static_assert(sizeof(EQS_VisibleHearedLocation_C_ProvideSingleLocation) == 0x000108, "Wrong size on EQS_VisibleHearedLocation_C_ProvideSingleLocation");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, QuerierObject) == 0x000000, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::QuerierObject' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, QuerierActor) == 0x000008, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::QuerierActor' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, ResultingLocation) == 0x000010, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::ResultingLocation' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, Temp_bool_Variable) == 0x000028, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetBlackboard_ReturnValue) == 0x000030, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetBlackboard_ReturnValue_1) == 0x000038, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetBlackboard_ReturnValue_2) == 0x000040, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetBlackboard_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetBlackboard_ReturnValue_3) == 0x000048, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetBlackboard_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetBlackboard_ReturnValue_4) == 0x000050, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetBlackboard_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, Temp_bool_Variable_1) == 0x000058, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_MakeLiteralName_ReturnValue) == 0x00005C, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000064, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetValueAsVector_ReturnValue) == 0x000070, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetValueAsBool_ReturnValue) == 0x000088, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_MakeLiteralName_ReturnValue_2) == 0x00008C, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetValueAsBool_ReturnValue_1) == 0x000094, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetValueAsBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_MakeLiteralName_ReturnValue_3) == 0x000098, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_MakeLiteralName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetValueAsVector_ReturnValue_1) == 0x0000A0, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetValueAsVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_MakeLiteralName_ReturnValue_4) == 0x0000B8, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_MakeLiteralName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, CallFunc_GetValueAsVector_ReturnValue_2) == 0x0000C0, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::CallFunc_GetValueAsVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, K2Node_Select_Default) == 0x0000D8, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EQS_VisibleHearedLocation_C_ProvideSingleLocation, K2Node_Select_Default_1) == 0x0000F0, "Member 'EQS_VisibleHearedLocation_C_ProvideSingleLocation::K2Node_Select_Default_1' has a wrong offset!");

}
