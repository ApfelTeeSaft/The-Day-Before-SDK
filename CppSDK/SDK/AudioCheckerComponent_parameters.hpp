#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCheckerComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "S_AudioCheckStruct_structs.hpp"


namespace SDK::Params
{

// Function AudioCheckerComponent.AudioCheckerComponent_C.CheckCullDistance
// 0x0118 (0x0118 - 0x0000)
struct AudioCheckerComponent_C_CheckCullDistance final
{
public:
	int32                                         CurrentIndex;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DistanceToPlayer;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFMODEvent*>                     CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    CallFunc_FMODPlayEventAttachedBullet_ReturnValue;  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_AudioCheckStruct                    CallFunc_Map_Find_Value;                           // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_AudioCheckStruct                    CallFunc_Map_Find_Value_1;                         // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_AudioCheckStruct                    K2Node_SetFieldsInStruct_StructOut;                // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_CheckCullDistance) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_CheckCullDistance");
static_assert(sizeof(AudioCheckerComponent_C_CheckCullDistance) == 0x000118, "Wrong size on AudioCheckerComponent_C_CheckCullDistance");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CurrentIndex) == 0x000000, "Member 'AudioCheckerComponent_C_CheckCullDistance::CurrentIndex' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, DistanceToPlayer) == 0x000008, "Member 'AudioCheckerComponent_C_CheckCullDistance::DistanceToPlayer' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'AudioCheckerComponent_C_CheckCullDistance::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_GetPlayerController_ReturnValue_1) == 0x000050, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000058, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, Temp_int_Array_Index_Variable) == 0x000078, "Member 'AudioCheckerComponent_C_CheckCullDistance::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Array_Get_Item) == 0x000088, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000090, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Remove_ReturnValue) == 0x000098, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_FMODPlayEventAttachedBullet_ReturnValue) == 0x0000A0, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_FMODPlayEventAttachedBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Find_ReturnValue) == 0x0000B8, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Find_Value_1) == 0x0000C0, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Map_Find_ReturnValue_1) == 0x0000D0, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, K2Node_SetFieldsInStruct_StructOut) == 0x0000D8, "Member 'AudioCheckerComponent_C_CheckCullDistance::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_IsValid_ReturnValue_1) == 0x0000E9, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_IsPlaying_ReturnValue) == 0x0000EA, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_IsValid_ReturnValue_2) == 0x0000EB, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_GetOwner_ReturnValue_1) == 0x0000F0, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F8, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_CheckCullDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000110, "Member 'AudioCheckerComponent_C_CheckCullDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.ExecuteUbergraph_AudioCheckerComponent
// 0x0040 (0x0040 - 0x0000)
struct AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_AudioCheckStruct>            CallFunc_Map_Values_Values;                        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FS_AudioCheckStruct                    CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent");
static_assert(sizeof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent) == 0x000040, "Wrong size on AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, EntryPoint) == 0x000000, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, Temp_int_Array_Index_Variable) == 0x000004, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, K2Node_Event_EndPlayReason) == 0x000008, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000009, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_Map_Values_Values) == 0x000010, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_Array_Get_Item) == 0x000020, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_IsValid_ReturnValue) == 0x000035, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct AudioCheckerComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on AudioCheckerComponent_C_ReceiveEndPlay");
static_assert(sizeof(AudioCheckerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on AudioCheckerComponent_C_ReceiveEndPlay");
static_assert(offsetof(AudioCheckerComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'AudioCheckerComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.RegisterSoftSound
// 0x0058 (0x0058 - 0x0000)
struct AudioCheckerComponent_C_RegisterSoftSound final
{
public:
	TSoftObjectPtr<class UFMODEvent>              FMODEvent;                                         // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	double                                        CullDistance;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             K2Node_DynamicCast_AsFMODEvent;                    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_RegisterSoftSound) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_RegisterSoftSound");
static_assert(sizeof(AudioCheckerComponent_C_RegisterSoftSound) == 0x000058, "Wrong size on AudioCheckerComponent_C_RegisterSoftSound");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, FMODEvent) == 0x000000, "Member 'AudioCheckerComponent_C_RegisterSoftSound::FMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, CullDistance) == 0x000030, "Member 'AudioCheckerComponent_C_RegisterSoftSound::CullDistance' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'AudioCheckerComponent_C_RegisterSoftSound::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000040, "Member 'AudioCheckerComponent_C_RegisterSoftSound::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, K2Node_DynamicCast_AsFMODEvent) == 0x000048, "Member 'AudioCheckerComponent_C_RegisterSoftSound::K2Node_DynamicCast_AsFMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSoftSound, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AudioCheckerComponent_C_RegisterSoftSound::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.RegisterSound
// 0x0038 (0x0038 - 0x0000)
struct AudioCheckerComponent_C_RegisterSound final
{
public:
	class UFMODEvent*                             FMODEvent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	double                                        CullDistance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FS_AudioCheckStruct                    K2Node_MakeStruct_S_AudioCheckStruct;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_RegisterSound) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_RegisterSound");
static_assert(sizeof(AudioCheckerComponent_C_RegisterSound) == 0x000038, "Wrong size on AudioCheckerComponent_C_RegisterSound");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, FMODEvent) == 0x000000, "Member 'AudioCheckerComponent_C_RegisterSound::FMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CullDistance) == 0x000008, "Member 'AudioCheckerComponent_C_RegisterSound::CullDistance' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000010, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_IsDedicatedServer_ReturnValue) == 0x000011, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_Map_Contains_ReturnValue) == 0x000012, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_K2_SetTimer_ReturnValue) == 0x000018, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, K2Node_MakeStruct_S_AudioCheckStruct) == 0x000020, "Member 'AudioCheckerComponent_C_RegisterSound::K2Node_MakeStruct_S_AudioCheckStruct' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_Map_Length_ReturnValue) == 0x000030, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_RegisterSound, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'AudioCheckerComponent_C_RegisterSound::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSoftSound
// 0x0050 (0x0050 - 0x0000)
struct AudioCheckerComponent_C_UnregisterSoftSound final
{
public:
	TSoftObjectPtr<class UFMODEvent>              FMODEvent;                                         // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             K2Node_DynamicCast_AsFMODEvent;                    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_UnregisterSoftSound) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_UnregisterSoftSound");
static_assert(sizeof(AudioCheckerComponent_C_UnregisterSoftSound) == 0x000050, "Wrong size on AudioCheckerComponent_C_UnregisterSoftSound");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSoftSound, FMODEvent) == 0x000000, "Member 'AudioCheckerComponent_C_UnregisterSoftSound::FMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSoftSound, CallFunc_IsDedicatedServer_ReturnValue) == 0x000030, "Member 'AudioCheckerComponent_C_UnregisterSoftSound::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSoftSound, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000038, "Member 'AudioCheckerComponent_C_UnregisterSoftSound::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSoftSound, K2Node_DynamicCast_AsFMODEvent) == 0x000040, "Member 'AudioCheckerComponent_C_UnregisterSoftSound::K2Node_DynamicCast_AsFMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSoftSound, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'AudioCheckerComponent_C_UnregisterSoftSound::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSound
// 0x0030 (0x0030 - 0x0000)
struct AudioCheckerComponent_C_UnregisterSound final
{
public:
	class UFMODEvent*                             FMODEvent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_AudioCheckStruct                    CallFunc_Map_Find_Value;                           // 0x0010(0x0010)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioCheckerComponent_C_UnregisterSound) == 0x000008, "Wrong alignment on AudioCheckerComponent_C_UnregisterSound");
static_assert(sizeof(AudioCheckerComponent_C_UnregisterSound) == 0x000030, "Wrong size on AudioCheckerComponent_C_UnregisterSound");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, FMODEvent) == 0x000000, "Member 'AudioCheckerComponent_C_UnregisterSound::FMODEvent' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, Param_Index) == 0x000008, "Member 'AudioCheckerComponent_C_UnregisterSound::Param_Index' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_Map_Contains_ReturnValue) == 0x00000C, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_Map_Find_Value) == 0x000010, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_IsDedicatedServer_ReturnValue) == 0x000021, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_IsValid_ReturnValue) == 0x000022, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_Map_Remove_ReturnValue) == 0x000023, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_Map_Length_ReturnValue) == 0x000024, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AudioCheckerComponent_C_UnregisterSound, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'AudioCheckerComponent_C_UnregisterSound::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

