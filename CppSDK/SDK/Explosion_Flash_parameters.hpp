#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_Flash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SFlashInstance_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Explosion_Flash.Explosion_Flash_C.CalculateInstanceValues
// 0x0208 (0x0208 - 0x0000)
struct Explosion_Flash_C_CalculateInstanceValues final
{
public:
	class UCameraComponent*                       Camera;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSFlashInstance                        Instance;                                          // 0x0008(0x0020)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            AngleCurve;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DistanceCurve;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        Temp_real_Variable;                                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable_1;                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x5];                                       // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Select_Default;                             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_153[0x5];                                      // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default_1;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue_1;                        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default_2;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Select_Default_3;                           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSFlashInstance                        K2Node_MakeStruct_SFlashInstance;                  // 0x01A8(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_A_ImplicitCast;                       // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_A_ImplicitCast_1;                     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_B_ImplicitCast;                      // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_A_ImplicitCast;                      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Angle_9_B5302DEA47596C570F9B97A165537135_ImplicitCast; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Explosion_Flash_C_CalculateInstanceValues) == 0x000008, "Wrong alignment on Explosion_Flash_C_CalculateInstanceValues");
static_assert(sizeof(Explosion_Flash_C_CalculateInstanceValues) == 0x000208, "Wrong size on Explosion_Flash_C_CalculateInstanceValues");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Camera) == 0x000000, "Member 'Explosion_Flash_C_CalculateInstanceValues::Camera' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Instance) == 0x000008, "Member 'Explosion_Flash_C_CalculateInstanceValues::Instance' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, AngleCurve) == 0x000028, "Member 'Explosion_Flash_C_CalculateInstanceValues::AngleCurve' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, DistanceCurve) == 0x000030, "Member 'Explosion_Flash_C_CalculateInstanceValues::DistanceCurve' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000050, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_real_Variable) == 0x000068, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_bool_Variable) == 0x000070, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_real_Variable_1) == 0x000078, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_bool_Variable_1) == 0x000080, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_bool_Variable_2) == 0x000081, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, Temp_bool_Variable_3) == 0x000082, "Member 'Explosion_Flash_C_CalculateInstanceValues::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakVector2D_X) == 0x000088, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakVector2D_Y) == 0x000090, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakVector2D_X_1) == 0x000098, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakVector2D_Y_1) == 0x0000A0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000D8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Vector_Distance_ReturnValue) == 0x0000F0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x0000F8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_GetFloatValue_ReturnValue) == 0x000110, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Roll) == 0x000114, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Pitch) == 0x000118, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Yaw) == 0x00011C, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Roll_1) == 0x000120, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Pitch_1) == 0x000124, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BreakRotator_Yaw_1) == 0x000128, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00012C, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_GetFloatValue_ReturnValue_1) == 0x000130, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_GetFloatValue_ReturnValue_2) == 0x000134, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_Select_Default) == 0x000138, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_FMin_ReturnValue) == 0x000140, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Abs_ReturnValue) == 0x000148, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000150, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000151, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Not_PreBool_ReturnValue) == 0x000152, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_Select_Default_1) == 0x000158, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_ReturnValue_3) == 0x000160, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Abs_ReturnValue_1) == 0x000168, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BooleanAND_ReturnValue) == 0x000170, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_ReturnValue_4) == 0x000171, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_Select_Default_2) == 0x000178, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_Select_Default_3) == 0x000180, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000188, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_MakeVector2D_ReturnValue) == 0x000190, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_BooleanAND_ReturnValue_1) == 0x0001A0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_MakeStruct_SFlashInstance) == 0x0001A8, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_MakeStruct_SFlashInstance' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0001C8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Abs_A_ImplicitCast) == 0x0001D0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001D8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Abs_A_ImplicitCast_1) == 0x0001E0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Abs_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x0001E8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_FMin_B_ImplicitCast) == 0x0001F0, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_FMin_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, CallFunc_FMin_A_ImplicitCast) == 0x0001F8, "Member 'Explosion_Flash_C_CalculateInstanceValues::CallFunc_FMin_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CalculateInstanceValues, K2Node_MakeStruct_Angle_9_B5302DEA47596C570F9B97A165537135_ImplicitCast) == 0x000200, "Member 'Explosion_Flash_C_CalculateInstanceValues::K2Node_MakeStruct_Angle_9_B5302DEA47596C570F9B97A165537135_ImplicitCast' has a wrong offset!");

// Function Explosion_Flash.Explosion_Flash_C.CheckForBlocked
// 0x0140 (0x0140 - 0x0000)
struct Explosion_Flash_C_CheckForBlocked final
{
public:
	class UCameraComponent*                       Camera;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bBlocked;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Explosion_Flash_C_CheckForBlocked) == 0x000008, "Wrong alignment on Explosion_Flash_C_CheckForBlocked");
static_assert(sizeof(Explosion_Flash_C_CheckForBlocked) == 0x000140, "Wrong size on Explosion_Flash_C_CheckForBlocked");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, Camera) == 0x000000, "Member 'Explosion_Flash_C_CheckForBlocked::Camera' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, bBlocked) == 0x000008, "Member 'Explosion_Flash_C_CheckForBlocked::bBlocked' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, Temp_object_Variable) == 0x000010, "Member 'Explosion_Flash_C_CheckForBlocked::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'Explosion_Flash_C_CheckForBlocked::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'Explosion_Flash_C_CheckForBlocked::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, CallFunc_LineTraceSingle_OutHit) == 0x000050, "Member 'Explosion_Flash_C_CheckForBlocked::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_CheckForBlocked, CallFunc_LineTraceSingle_ReturnValue) == 0x000138, "Member 'Explosion_Flash_C_CheckForBlocked::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");

// Function Explosion_Flash.Explosion_Flash_C.ExecuteUbergraph_Explosion_Flash
// 0x0088 (0x0088 - 0x0000)
struct Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_CheckForBlocked_bBlocked;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSFlashInstance                        CallFunc_CalculateInstanceValues_Instance;         // 0x0058(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash) == 0x000008, "Wrong alignment on Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash");
static_assert(sizeof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash) == 0x000088, "Wrong size on Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, EntryPoint) == 0x000000, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::EntryPoint' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_HasAuthority_ReturnValue) == 0x000028, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player) == 0x000048, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_CheckForBlocked_bBlocked) == 0x000050, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_CheckForBlocked_bBlocked' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_CalculateInstanceValues_Instance) == 0x000058, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_CalculateInstanceValues_Instance' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash, CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast) == 0x000080, "Member 'Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash::CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast' has a wrong offset!");

}

