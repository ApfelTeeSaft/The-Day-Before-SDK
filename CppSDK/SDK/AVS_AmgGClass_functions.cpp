#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_AmgGClass

#include "Basic.hpp"

#include "AVS_AmgGClass_classes.hpp"
#include "AVS_AmgGClass_parameters.hpp"


namespace SDK
{

// Function AVS_AmgGClass.AVS_AmgGClass_C.ExecuteUbergraph_AVS_AmgGClass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_AmgGClass_C::ExecuteUbergraph_AVS_AmgGClass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_AmgGClass_C", "ExecuteUbergraph_AVS_AmgGClass");

	Params::AVS_AmgGClass_C_ExecuteUbergraph_AVS_AmgGClass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_AmgGClass.AVS_AmgGClass_C.AttachDoorToBone
// (BlueprintCallable, BlueprintEvent)

void AAVS_AmgGClass_C::AttachDoorToBone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_AmgGClass_C", "AttachDoorToBone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_AmgGClass.AVS_AmgGClass_C.AttachDoorToMainMesh
// (BlueprintCallable, BlueprintEvent)

void AAVS_AmgGClass_C::AttachDoorToMainMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_AmgGClass_C", "AttachDoorToMainMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_AmgGClass.AVS_AmgGClass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAVS_AmgGClass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_AmgGClass_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_AmgGClass.AVS_AmgGClass_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAVS_AmgGClass_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_AmgGClass_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
