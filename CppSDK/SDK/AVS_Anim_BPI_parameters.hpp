#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_Anim_BPI

#include "Basic.hpp"


namespace SDK::Params
{

// Function AVS_Anim_BPI.AVS_Anim_BPI_C.setSteering
// 0x0010 (0x0010 - 0x0000)
struct AVS_Anim_BPI_C_SetSteering final
{
public:
	double                                        Steering;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewParam;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AVS_Anim_BPI_C_SetSteering) == 0x000008, "Wrong alignment on AVS_Anim_BPI_C_SetSteering");
static_assert(sizeof(AVS_Anim_BPI_C_SetSteering) == 0x000010, "Wrong size on AVS_Anim_BPI_C_SetSteering");
static_assert(offsetof(AVS_Anim_BPI_C_SetSteering, Steering) == 0x000000, "Member 'AVS_Anim_BPI_C_SetSteering::Steering' has a wrong offset!");
static_assert(offsetof(AVS_Anim_BPI_C_SetSteering, NewParam) == 0x000008, "Member 'AVS_Anim_BPI_C_SetSteering::NewParam' has a wrong offset!");

}
