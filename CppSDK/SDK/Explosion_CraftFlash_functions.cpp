#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_CraftFlash

#include "Basic.hpp"

#include "Explosion_CraftFlash_classes.hpp"
#include "Explosion_CraftFlash_parameters.hpp"


namespace SDK
{

// Function Explosion_CraftFlash.Explosion_CraftFlash_C.ExecuteUbergraph_Explosion_CraftFlash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_CraftFlash_C::ExecuteUbergraph_Explosion_CraftFlash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_CraftFlash_C", "ExecuteUbergraph_Explosion_CraftFlash");

	Params::Explosion_CraftFlash_C_ExecuteUbergraph_Explosion_CraftFlash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_CraftFlash.Explosion_CraftFlash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExplosion_CraftFlash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_CraftFlash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
