#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PCTextInteract

#include "Basic.hpp"

#include "PCTextInteract_classes.hpp"
#include "PCTextInteract_parameters.hpp"


namespace SDK
{

// Function PCTextInteract.PCTextInteract_C.AddListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IPCTextInteractListener_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APCTextInteract_C::AddListener(TScriptInterface<class IPCTextInteractListener_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "AddListener");

	Params::PCTextInteract_C_AddListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PCTextInteract.PCTextInteract_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)

void APCTextInteract_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PCTextInteract.PCTextInteract_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)

void APCTextInteract_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PCTextInteract.PCTextInteract_C.ExecuteUbergraph_PCTextInteract
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APCTextInteract_C::ExecuteUbergraph_PCTextInteract(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "ExecuteUbergraph_PCTextInteract");

	Params::PCTextInteract_C_ExecuteUbergraph_PCTextInteract Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PCTextInteract.PCTextInteract_C.NotifyPCEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void APCTextInteract_C::NotifyPCEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "NotifyPCEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PCTextInteract.PCTextInteract_C.OnEnable
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APCTextInteract_C::OnEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "OnEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PCTextInteract.PCTextInteract_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APCTextInteract_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "OnInteract");

	Params::PCTextInteract_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PCTextInteract.PCTextInteract_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APCTextInteract_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCTextInteract_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
