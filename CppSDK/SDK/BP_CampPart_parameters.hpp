#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampPart

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CampPart.BP_CampPart_C.ExecuteUbergraph_BP_CampPart
// 0x06F0 (0x06F0 - 0x0000)
struct BP_CampPart_C_ExecuteUbergraph_BP_CampPart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CampStub_C*                         K2Node_DynamicCast_AsBP_Camp_Stub;                 // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C3[0x1];                                      // 0x01C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x02B0(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x02D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x03C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x0410(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x04FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FB[0x1];                                      // 0x04FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0508(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0520(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0538(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0550(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0568(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0570(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0578(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0594(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0598(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59C[0x4];                                      // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x05A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x05B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_3;                          // 0x05D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_3;                          // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_3;                          // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x05E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x0600(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart) == 0x000008, "Wrong alignment on BP_CampPart_C_ExecuteUbergraph_BP_CampPart");
static_assert(sizeof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart) == 0x0006F0, "Wrong size on BP_CampPart_C_ExecuteUbergraph_BP_CampPart");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, EntryPoint) == 0x000000, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, Temp_object_Variable) == 0x000008, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Y) == 0x000050, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Z) == 0x000058, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_X_1) == 0x000060, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Y_1) == 0x000068, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Z_1) == 0x000070, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000078, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000090, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_GetParentActor_ReturnValue) == 0x0000C0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_LineTraceSingle_OutHit) == 0x0000C8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_LineTraceSingle_ReturnValue) == 0x0001B0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, K2Node_DynamicCast_AsBP_Camp_Stub) == 0x0001B8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::K2Node_DynamicCast_AsBP_Camp_Stub' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_bBlockingHit) == 0x0001C1, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001C2, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Time) == 0x0001C4, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Distance) == 0x0001C8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Location) == 0x0001D0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ImpactPoint) == 0x0001E8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Normal) == 0x000200, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ImpactNormal) == 0x000218, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_PhysMat) == 0x000230, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitActor) == 0x000238, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitComponent) == 0x000240, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitBoneName) == 0x000248, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_BoneName) == 0x000250, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitItem) == 0x000258, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ElementIndex) == 0x00025C, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_FaceIndex) == 0x000260, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_TraceStart) == 0x000268, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_TraceEnd) == 0x000280, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_X_2) == 0x000298, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Y_2) == 0x0002A0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Z_2) == 0x0002A8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, K2Node_MakeArray_Array) == 0x0002B0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_MakeVector_ReturnValue) == 0x0002C0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0002D8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0003C0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0003C8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0003E0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0003F8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_LineTraceSingle_OutHit_1) == 0x000410, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_LineTraceSingle_ReturnValue_1) == 0x0004F8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0004F9, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0004FA, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Time_1) == 0x0004FC, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Distance_1) == 0x000500, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Location_1) == 0x000508, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000520, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_Normal_1) == 0x000538, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000550, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_PhysMat_1) == 0x000568, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitActor_1) == 0x000570, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitComponent_1) == 0x000578, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitBoneName_1) == 0x000580, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_BoneName_1) == 0x000588, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_HitItem_1) == 0x000590, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_ElementIndex_1) == 0x000594, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_FaceIndex_1) == 0x000598, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_TraceStart_1) == 0x0005A0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakHitResult_TraceEnd_1) == 0x0005B8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_X_3) == 0x0005D0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Y_3) == 0x0005D8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_BreakVector_Z_3) == 0x0005E0, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_MakeVector_ReturnValue_1) == 0x0005E8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x000600, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_ExecuteUbergraph_BP_CampPart, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x0006E8, "Member 'BP_CampPart_C_ExecuteUbergraph_BP_CampPart::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");

// Function BP_CampPart.BP_CampPart_C.GetCamp
// 0x0020 (0x0020 - 0x0000)
struct BP_CampPart_C_GetCamp final
{
public:
	class ABP_Camp_C*                             Camp;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Camp_C*                             K2Node_DynamicCast_AsBP_Camp;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampPart_C_GetCamp) == 0x000008, "Wrong alignment on BP_CampPart_C_GetCamp");
static_assert(sizeof(BP_CampPart_C_GetCamp) == 0x000020, "Wrong size on BP_CampPart_C_GetCamp");
static_assert(offsetof(BP_CampPart_C_GetCamp, Camp) == 0x000000, "Member 'BP_CampPart_C_GetCamp::Camp' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_GetCamp, CallFunc_GetParentActor_ReturnValue) == 0x000008, "Member 'BP_CampPart_C_GetCamp::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_GetCamp, K2Node_DynamicCast_AsBP_Camp) == 0x000010, "Member 'BP_CampPart_C_GetCamp::K2Node_DynamicCast_AsBP_Camp' has a wrong offset!");
static_assert(offsetof(BP_CampPart_C_GetCamp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CampPart_C_GetCamp::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
