#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MolotovFire

#include "Basic.hpp"

#include "BP_MolotovFire_classes.hpp"
#include "BP_MolotovFire_parameters.hpp"


namespace SDK
{

// Function BP_MolotovFire.BP_MolotovFire_C.ExecuteUbergraph_BP_MolotovFire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MolotovFire_C::ExecuteUbergraph_BP_MolotovFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "ExecuteUbergraph_BP_MolotovFire");

	Params::BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MolotovFire.BP_MolotovFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MolotovFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MolotovFire.BP_MolotovFire_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MolotovFire_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "ReceiveTick");

	Params::BP_MolotovFire_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MolotovFire.BP_MolotovFire_C.SpawnParticleAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MolotovFire_C::SpawnParticleAt(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "SpawnParticleAt");

	Params::BP_MolotovFire_C_SpawnParticleAt Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MolotovFire.BP_MolotovFire_C.Stop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MolotovFire_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MolotovFire.BP_MolotovFire_C.StopFires
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MolotovFire_C::StopFires()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MolotovFire_C", "StopFires");

	UObject::ProcessEvent(Func, nullptr);
}

}
