#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPDA_Isolation

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPDA_Isolation.BPDA_Isolation_C.ExecuteUbergraph_BPDA_Isolation
// 0x0018 (0x0018 - 0x0000)
struct BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RB_Vehicle_C*                       K2Node_Event_Vehicle;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetStat_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation) == 0x000008, "Wrong alignment on BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation");
static_assert(sizeof(BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation) == 0x000018, "Wrong size on BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation");
static_assert(offsetof(BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation, EntryPoint) == 0x000000, "Member 'BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation, K2Node_Event_Vehicle) == 0x000008, "Member 'BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation::K2Node_Event_Vehicle' has a wrong offset!");
static_assert(offsetof(BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation, CallFunc_SetStat_ReturnValue) == 0x000010, "Member 'BPDA_Isolation_C_ExecuteUbergraph_BPDA_Isolation::CallFunc_SetStat_ReturnValue' has a wrong offset!");

// Function BPDA_Isolation.BPDA_Isolation_C.SetUpgrade
// 0x0008 (0x0008 - 0x0000)
struct BPDA_Isolation_C_SetUpgrade final
{
public:
	class ABP_RB_Vehicle_C*                       Vehicle;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPDA_Isolation_C_SetUpgrade) == 0x000008, "Wrong alignment on BPDA_Isolation_C_SetUpgrade");
static_assert(sizeof(BPDA_Isolation_C_SetUpgrade) == 0x000008, "Wrong size on BPDA_Isolation_C_SetUpgrade");
static_assert(offsetof(BPDA_Isolation_C_SetUpgrade, Vehicle) == 0x000000, "Member 'BPDA_Isolation_C_SetUpgrade::Vehicle' has a wrong offset!");

}
