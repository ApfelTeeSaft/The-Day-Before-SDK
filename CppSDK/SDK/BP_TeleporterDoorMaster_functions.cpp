#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TeleporterDoorMaster

#include "Basic.hpp"

#include "BP_TeleporterDoorMaster_classes.hpp"
#include "BP_TeleporterDoorMaster_parameters.hpp"


namespace SDK
{

// Function BP_TeleporterDoorMaster.BP_TeleporterDoorMaster_C.TpFromTranzit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             HomeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TeleporterDoorMaster_C::TpFromTranzit__DelegateSignature(class FName HomeRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleporterDoorMaster_C", "TpFromTranzit__DelegateSignature");

	Params::BP_TeleporterDoorMaster_C_TpFromTranzit__DelegateSignature Parms{};

	Parms.HomeRef = HomeRef;

	UObject::ProcessEvent(Func, &Parms);
}

}
