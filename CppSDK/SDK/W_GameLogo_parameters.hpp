#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GameLogo

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_GameLogo.W_GameLogo_C.ExecuteUbergraph_W_GameLogo
// 0x0010 (0x0010 - 0x0000)
struct W_GameLogo_C_ExecuteUbergraph_W_GameLogo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_GameLogo_C_ExecuteUbergraph_W_GameLogo) == 0x000008, "Wrong alignment on W_GameLogo_C_ExecuteUbergraph_W_GameLogo");
static_assert(sizeof(W_GameLogo_C_ExecuteUbergraph_W_GameLogo) == 0x000010, "Wrong size on W_GameLogo_C_ExecuteUbergraph_W_GameLogo");
static_assert(offsetof(W_GameLogo_C_ExecuteUbergraph_W_GameLogo, EntryPoint) == 0x000000, "Member 'W_GameLogo_C_ExecuteUbergraph_W_GameLogo::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_GameLogo_C_ExecuteUbergraph_W_GameLogo, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'W_GameLogo_C_ExecuteUbergraph_W_GameLogo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
