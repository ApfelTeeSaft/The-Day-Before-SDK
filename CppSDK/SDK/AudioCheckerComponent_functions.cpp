#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCheckerComponent

#include "Basic.hpp"

#include "AudioCheckerComponent_classes.hpp"
#include "AudioCheckerComponent_parameters.hpp"


namespace SDK
{

// Function AudioCheckerComponent.AudioCheckerComponent_C.CheckCullDistance
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAudioCheckerComponent_C::CheckCullDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "CheckCullDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.ExecuteUbergraph_AudioCheckerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioCheckerComponent_C::ExecuteUbergraph_AudioCheckerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "ExecuteUbergraph_AudioCheckerComponent");

	Params::AudioCheckerComponent_C_ExecuteUbergraph_AudioCheckerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioCheckerComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "ReceiveEndPlay");

	Params::AudioCheckerComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.RegisterSoftSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UFMODEvent>        FMODEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// double                                  CullDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioCheckerComponent_C::RegisterSoftSound(TSoftObjectPtr<class UFMODEvent>& FMODEvent, double CullDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "RegisterSoftSound");

	Params::AudioCheckerComponent_C_RegisterSoftSound Parms{};

	Parms.FMODEvent = FMODEvent;
	Parms.CullDistance = CullDistance;

	UObject::ProcessEvent(Func, &Parms);

	FMODEvent = Parms.FMODEvent;
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.RegisterSound
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                       FMODEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  CullDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioCheckerComponent_C::RegisterSound(class UFMODEvent*& FMODEvent, double CullDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "RegisterSound");

	Params::AudioCheckerComponent_C_RegisterSound Parms{};

	Parms.FMODEvent = FMODEvent;
	Parms.CullDistance = CullDistance;

	UObject::ProcessEvent(Func, &Parms);

	FMODEvent = Parms.FMODEvent;
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSoftSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UFMODEvent>        FMODEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UAudioCheckerComponent_C::UnregisterSoftSound(TSoftObjectPtr<class UFMODEvent>& FMODEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "UnregisterSoftSound");

	Params::AudioCheckerComponent_C_UnregisterSoftSound Parms{};

	Parms.FMODEvent = FMODEvent;

	UObject::ProcessEvent(Func, &Parms);

	FMODEvent = Parms.FMODEvent;
}


// Function AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                       FMODEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UAudioCheckerComponent_C::UnregisterSound(class UFMODEvent*& FMODEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioCheckerComponent_C", "UnregisterSound");

	Params::AudioCheckerComponent_C_UnregisterSound Parms{};

	Parms.FMODEvent = FMODEvent;

	UObject::ProcessEvent(Func, &Parms);

	FMODEvent = Parms.FMODEvent;
}

}
