#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TrailComponent.BP_TrailComponent_C.ExecuteUbergraph_BP_TrailComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent) == 0x000004, "Wrong alignment on BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent");
static_assert(sizeof(BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent) == 0x000008, "Wrong size on BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent");
static_assert(offsetof(BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent, EntryPoint) == 0x000000, "Member 'BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_TrailComponent_C_ExecuteUbergraph_BP_TrailComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_TrailComponent.BP_TrailComponent_C.ParticleCalculation
// 0x0390 (0x0390 - 0x0000)
struct BP_TrailComponent_C_ParticleCalculation final
{
public:
	int32                                         ParticleType;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Continue;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_2;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_3;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_4;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable_1;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable_2;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayer_IsPlayer;                        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x00F0(0x00E0)(IsPlainOldData, NoDestructor)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_1;              // 0x01E0(0x00E0)(IsPlainOldData, NoDestructor)
	double                                        CallFunc_BreakVector_X;                            // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable_3;                            // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                        Temp_object_Variable_4;                            // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface_1;      // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInWater_InWater;                        // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x033B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D[0x3];                                      // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345[0x3];                                      // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        K2Node_Select_Default_1;                           // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0358(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0370(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x0378(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Scalar_ImplicitCast;             // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailComponent_C_ParticleCalculation) == 0x000010, "Wrong alignment on BP_TrailComponent_C_ParticleCalculation");
static_assert(sizeof(BP_TrailComponent_C_ParticleCalculation) == 0x000390, "Wrong size on BP_TrailComponent_C_ParticleCalculation");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, ParticleType) == 0x000000, "Member 'BP_TrailComponent_C_ParticleCalculation::ParticleType' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Continue) == 0x000004, "Member 'BP_TrailComponent_C_ParticleCalculation::Continue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_object_Variable) == 0x000008, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_int_Variable) == 0x000014, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_real_Variable) == 0x000018, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_real_Variable_1) == 0x000020, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_real_Variable_2) == 0x000028, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_real_Variable_3) == 0x000030, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_real_Variable_4) == 0x000038, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_object_Variable_1) == 0x000040, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_Select_Default) == 0x000048, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_object_Variable_2) == 0x000050, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_GetVelocity_ReturnValue) == 0x000060, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_GetOwner_ReturnValue_1) == 0x000078, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_VSize_ReturnValue) == 0x000080, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_DynamicCast_AsBPI_General_Interface) == 0x000088, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_DynamicCast_AsBPI_General_Interface' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_IsPlayer_IsPlayer) == 0x0000A8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_IsPlayer_IsPlayer' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_FMax_ReturnValue) == 0x0000B0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_MakeVector_ReturnValue) == 0x0000B8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_MakeStruct_ParticleSysParam) == 0x0000F0, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_SelectFloat_ReturnValue) == 0x0001D0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_MapRangeClamped_ReturnValue) == 0x0001D8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_MakeStruct_ParticleSysParam_1) == 0x0001E0, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_MakeStruct_ParticleSysParam_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BreakVector_X) == 0x0002C0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BreakVector_Y) == 0x0002C8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BreakVector_Z) == 0x0002D0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_object_Variable_3) == 0x0002D8, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_MakeVector_ReturnValue_1) == 0x0002E0, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_MakeRotFromX_ReturnValue) == 0x0002F8, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_object_Variable_4) == 0x000310, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_GetOwner_ReturnValue_2) == 0x000318, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_VSize_ReturnValue_1) == 0x000320, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_DynamicCast_AsBPI_General_Interface_1) == 0x000328, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_DynamicCast_AsBPI_General_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_DynamicCast_bSuccess_1) == 0x000338, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000339, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_IsInWater_InWater) == 0x00033A, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_IsInWater_InWater' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BooleanAND_ReturnValue) == 0x00033B, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BooleanAND_ReturnValue_1) == 0x00033C, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, Temp_int_Variable_1) == 0x000340, "Member 'BP_TrailComponent_C_ParticleCalculation::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Not_PreBool_ReturnValue) == 0x000344, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_Select_Default_1) == 0x000348, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_BooleanAND_ReturnValue_2) == 0x000350, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000358, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000370, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000378, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000380, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Array_Add_ReturnValue) == 0x000384, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, CallFunc_Array_Add_ReturnValue_1) == 0x000388, "Member 'BP_TrailComponent_C_ParticleCalculation::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailComponent_C_ParticleCalculation, K2Node_MakeStruct_Scalar_ImplicitCast) == 0x00038C, "Member 'BP_TrailComponent_C_ParticleCalculation::K2Node_MakeStruct_Scalar_ImplicitCast' has a wrong offset!");

// Function BP_TrailComponent.BP_TrailComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_TrailComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_TrailComponent_C_ReceiveTick");
static_assert(sizeof(BP_TrailComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_TrailComponent_C_ReceiveTick");
static_assert(offsetof(BP_TrailComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_TrailComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

