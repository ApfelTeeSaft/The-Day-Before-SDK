#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TogglerListener

#include "Basic.hpp"

#include "TogglerListener_classes.hpp"
#include "TogglerListener_parameters.hpp"


namespace SDK
{

// Function TogglerListener.TogglerListener_C.OnToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsToggled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ITogglerListener_C::OnToggle(class APawn* Player, bool IsToggled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TogglerListener_C", "OnToggle");

	Params::TogglerListener_C_OnToggle Parms{};

	Parms.Player = Player;
	Parms.IsToggled = IsToggled;

	UObject::ProcessEvent(Func, &Parms);
}

}
