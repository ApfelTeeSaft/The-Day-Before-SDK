#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DamageCauser

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_DamageCauser.BPI_DamageCauser_C.CauseDamage
// 0x0008 (0x0008 - 0x0000)
struct BPI_DamageCauser_C_CauseDamage final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_DamageCauser_C_CauseDamage) == 0x000008, "Wrong alignment on BPI_DamageCauser_C_CauseDamage");
static_assert(sizeof(BPI_DamageCauser_C_CauseDamage) == 0x000008, "Wrong size on BPI_DamageCauser_C_CauseDamage");
static_assert(offsetof(BPI_DamageCauser_C_CauseDamage, Actor) == 0x000000, "Member 'BPI_DamageCauser_C_CauseDamage::Actor' has a wrong offset!");

}
