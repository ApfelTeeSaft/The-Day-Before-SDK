#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Run_Notif

#include "Basic.hpp"

#include "Run_Notif_classes.hpp"
#include "Run_Notif_parameters.hpp"


namespace SDK
{

// Function Run_Notif.Run_Notif_C.PlayNotif
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void URun_Notif_C::PlayNotif(class USkeletalMeshComponent* Target) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Run_Notif_C", "PlayNotif");

	Params::Run_Notif_C_PlayNotif Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}
