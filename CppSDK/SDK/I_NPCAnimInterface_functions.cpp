#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_NPCAnimInterface

#include "Basic.hpp"

#include "I_NPCAnimInterface_classes.hpp"
#include "I_NPCAnimInterface_parameters.hpp"


namespace SDK
{

// Function I_NPCAnimInterface.I_NPCAnimInterface_C.StartDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_NPCAnimInterface_C::StartDialogue(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_NPCAnimInterface_C", "StartDialogue");

	Params::I_NPCAnimInterface_C_StartDialogue Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}

}
