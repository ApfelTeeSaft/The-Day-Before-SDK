#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CutsceneWeapon

#include "Basic.hpp"

#include "S_MeshToSocket_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CutsceneWeapon.CutsceneWeapon_C.NewFunction_0
// 0x00D0 (0x00D0 - 0x0000)
struct CutsceneWeapon_C_NewFunction_0 final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_MeshToSocket                        CallFunc_Array_Get_Item;                           // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children_1;         // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CutsceneWeapon_C_NewFunction_0) == 0x000010, "Wrong alignment on CutsceneWeapon_C_NewFunction_0");
static_assert(sizeof(CutsceneWeapon_C_NewFunction_0) == 0x0000D0, "Wrong size on CutsceneWeapon_C_NewFunction_0");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, Temp_int_Array_Index_Variable) == 0x000000, "Member 'CutsceneWeapon_C_NewFunction_0::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CutsceneWeapon_C_NewFunction_0::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'CutsceneWeapon_C_NewFunction_0::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, Temp_struct_Variable) == 0x000010, "Member 'CutsceneWeapon_C_NewFunction_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Array_Get_Item) == 0x000078, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_GetChildrenComponents_Children) == 0x000088, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000A0, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_SetStaticMesh_ReturnValue) == 0x0000A1, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_GetChildrenComponents_Children_1) == 0x0000B0, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_GetChildrenComponents_Children_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, Temp_int_Loop_Counter_Variable_1) == 0x0000C0, "Member 'CutsceneWeapon_C_NewFunction_0::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Array_Length_ReturnValue_2) == 0x0000C4, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C8, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C9, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CutsceneWeapon_C_NewFunction_0, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'CutsceneWeapon_C_NewFunction_0::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}
