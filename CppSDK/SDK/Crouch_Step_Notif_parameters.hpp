#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crouch_Step_Notif

#include "Basic.hpp"


namespace SDK::Params
{

// Function Crouch_Step_Notif.Crouch_Step_Notif_C.PlayNotif
// 0x0028 (0x0028 - 0x0000)
struct Crouch_Step_Notif_C_PlayNotif final
{
public:
	class USkeletalMeshComponent*                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_Steps_C>            K2Node_DynamicCast_AsI_Steps;                      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Crouch_Step_Notif_C_PlayNotif) == 0x000008, "Wrong alignment on Crouch_Step_Notif_C_PlayNotif");
static_assert(sizeof(Crouch_Step_Notif_C_PlayNotif) == 0x000028, "Wrong size on Crouch_Step_Notif_C_PlayNotif");
static_assert(offsetof(Crouch_Step_Notif_C_PlayNotif, Target) == 0x000000, "Member 'Crouch_Step_Notif_C_PlayNotif::Target' has a wrong offset!");
static_assert(offsetof(Crouch_Step_Notif_C_PlayNotif, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'Crouch_Step_Notif_C_PlayNotif::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Crouch_Step_Notif_C_PlayNotif, K2Node_DynamicCast_AsI_Steps) == 0x000010, "Member 'Crouch_Step_Notif_C_PlayNotif::K2Node_DynamicCast_AsI_Steps' has a wrong offset!");
static_assert(offsetof(Crouch_Step_Notif_C_PlayNotif, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Crouch_Step_Notif_C_PlayNotif::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
