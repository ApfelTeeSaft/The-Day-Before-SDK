#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_CraftFlash

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Explosion_CraftFlash.Explosion_CraftFlash_C.ExecuteUbergraph_Explosion_CraftFlash
// 0x00E0 (0x00E0 - 0x0000)
struct Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class ISurvInterface_C>      CallFunc_BPI_CameraShake_self_CastInput;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldLocationToScreen_ScreenLocation; // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToScreen_ReturnValue; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FlashBang_Distance_ImplicitCast;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FlashBang_Distance_ImplicitCast_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash) == 0x000008, "Wrong alignment on Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash");
static_assert(sizeof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash) == 0x0000E0, "Wrong size on Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, EntryPoint) == 0x000000, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::EntryPoint' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000020, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player) == 0x000038, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_WallCheckGrenadeOnCamera_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BPI_CameraShake_self_CastInput) == 0x000040, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BPI_CameraShake_self_CastInput' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_ProjectWorldLocationToScreen_ScreenLocation) == 0x000058, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_ProjectWorldLocationToScreen_ScreenLocation' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_ProjectWorldLocationToScreen_ReturnValue) == 0x000068, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_ProjectWorldLocationToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_GetDistanceTo_ReturnValue) == 0x00006C, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BreakVector2D_X) == 0x000070, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BreakVector2D_Y) == 0x000078, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000080, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000090, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000091, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_GetViewportSize_ReturnValue) == 0x000098, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BreakVector2D_X_1) == 0x0000A8, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BreakVector2D_Y_1) == 0x0000B0, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0000B9, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BooleanAND_ReturnValue) == 0x0000BA, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BooleanAND_ReturnValue_1) == 0x0000BB, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_BooleanAND_ReturnValue_2) == 0x0000BC, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast) == 0x0000C0, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_WallCheckGrenadeOnCamera_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_FlashBang_Distance_ImplicitCast) == 0x0000C8, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_FlashBang_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_FlashBang_Distance_ImplicitCast_1) == 0x0000D0, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_FlashBang_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast) == 0x0000D8, "Member 'Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast' has a wrong offset!");

}
