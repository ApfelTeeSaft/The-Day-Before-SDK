#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeneratorToggler

#include "Basic.hpp"


namespace SDK::Params
{

// Function GeneratorToggler.GeneratorToggler_C.ExecuteUbergraph_GeneratorToggler
// 0x0040 (0x0040 - 0x0000)
struct GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface;        // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface_1;      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasBlocker_Result;                        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler) == 0x000008, "Wrong alignment on GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler");
static_assert(sizeof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler) == 0x000040, "Wrong size on GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, EntryPoint) == 0x000000, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::EntryPoint' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, K2Node_Event_Player) == 0x000008, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, K2Node_DynamicCast_AsBPI_General_Interface) == 0x000010, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::K2Node_DynamicCast_AsBPI_General_Interface' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, K2Node_DynamicCast_AsBPI_General_Interface_1) == 0x000028, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::K2Node_DynamicCast_AsBPI_General_Interface_1' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, CallFunc_HasBlocker_Result) == 0x000039, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::CallFunc_HasBlocker_Result' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler, CallFunc_BooleanAND_ReturnValue) == 0x00003B, "Member 'GeneratorToggler_C_ExecuteUbergraph_GeneratorToggler::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GeneratorToggler.GeneratorToggler_C.OnInteract
// 0x0008 (0x0008 - 0x0000)
struct GeneratorToggler_C_OnInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneratorToggler_C_OnInteract) == 0x000008, "Wrong alignment on GeneratorToggler_C_OnInteract");
static_assert(sizeof(GeneratorToggler_C_OnInteract) == 0x000008, "Wrong size on GeneratorToggler_C_OnInteract");
static_assert(offsetof(GeneratorToggler_C_OnInteract, Player) == 0x000000, "Member 'GeneratorToggler_C_OnInteract::Player' has a wrong offset!");

}
