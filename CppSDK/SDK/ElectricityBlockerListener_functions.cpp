#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElectricityBlockerListener

#include "Basic.hpp"

#include "ElectricityBlockerListener_classes.hpp"
#include "ElectricityBlockerListener_parameters.hpp"


namespace SDK
{

// Function ElectricityBlockerListener.ElectricityBlockerListener_C.AddBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AElectricityBlocker_C*            Blocker                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IElectricityBlockerListener_C::AddBlocker(class AElectricityBlocker_C* Blocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlockerListener_C", "AddBlocker");

	Params::ElectricityBlockerListener_C_AddBlocker Parms{};

	Parms.Blocker = Blocker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElectricityBlockerListener.ElectricityBlockerListener_C.OnBreakBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AElectricityBlocker_C*            Blocker                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IElectricityBlockerListener_C::OnBreakBlocker(class AElectricityBlocker_C* Blocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlockerListener_C", "OnBreakBlocker");

	Params::ElectricityBlockerListener_C_OnBreakBlocker Parms{};

	Parms.Blocker = Blocker;

	UObject::ProcessEvent(Func, &Parms);
}

}

