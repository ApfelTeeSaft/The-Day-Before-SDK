#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_Smoke

#include "Basic.hpp"

#include "Explosion_Smoke_classes.hpp"
#include "Explosion_Smoke_parameters.hpp"


namespace SDK
{

// Function Explosion_Smoke.Explosion_Smoke_C.ExecuteUbergraph_Explosion_Smoke
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Smoke_C::ExecuteUbergraph_Explosion_Smoke(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Smoke_C", "ExecuteUbergraph_Explosion_Smoke");

	Params::Explosion_Smoke_C_ExecuteUbergraph_Explosion_Smoke Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Smoke.Explosion_Smoke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExplosion_Smoke_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Smoke_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Smoke.Explosion_Smoke_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AExplosion_Smoke_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Smoke_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Smoke.Explosion_Smoke_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AExplosion_Smoke_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Smoke_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Smoke.Explosion_Smoke_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AExplosion_Smoke_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Smoke_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
