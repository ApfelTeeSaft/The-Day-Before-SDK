#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fake_Grenade

#include "Basic.hpp"

#include "Fake_Grenade_classes.hpp"
#include "Fake_Grenade_parameters.hpp"


namespace SDK
{

// Function Fake_Grenade.Fake_Grenade_C.ExecuteUbergraph_Fake_Grenade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFake_Grenade_C::ExecuteUbergraph_Fake_Grenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fake_Grenade_C", "ExecuteUbergraph_Fake_Grenade");

	Params::Fake_Grenade_C_ExecuteUbergraph_Fake_Grenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fake_Grenade.Fake_Grenade_C.ImpulseFakeGrenadeMulti
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AFake_Grenade_C::ImpulseFakeGrenadeMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fake_Grenade_C", "ImpulseFakeGrenadeMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fake_Grenade.Fake_Grenade_C.ImpulseFakeGrenadeServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AFake_Grenade_C::ImpulseFakeGrenadeServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fake_Grenade_C", "ImpulseFakeGrenadeServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fake_Grenade.Fake_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFake_Grenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fake_Grenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
