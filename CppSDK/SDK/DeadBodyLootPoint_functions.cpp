#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeadBodyLootPoint

#include "Basic.hpp"

#include "DeadBodyLootPoint_classes.hpp"
#include "DeadBodyLootPoint_parameters.hpp"


namespace SDK
{

// Function DeadBodyLootPoint.DeadBodyLootPoint_C.ExecuteUbergraph_DeadBodyLootPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeadBodyLootPoint_C::ExecuteUbergraph_DeadBodyLootPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "ExecuteUbergraph_DeadBodyLootPoint");

	Params::DeadBodyLootPoint_C_ExecuteUbergraph_DeadBodyLootPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.InitContainerWidget (Main)
// (BlueprintCallable, BlueprintEvent)

void ADeadBodyLootPoint_C::InitContainerWidget__Main_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "InitContainerWidget (Main)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.OnToggleDeadBodyTimer
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeadBodyLootPoint_C::OnToggleDeadBodyTimer(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "OnToggleDeadBodyTimer");

	Params::DeadBodyLootPoint_C_OnToggleDeadBodyTimer Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.MultiCallCloseLootPoint
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADeadBodyLootPoint_C::MultiCallCloseLootPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "MultiCallCloseLootPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.MultiCallOpenLootPoint
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADeadBodyLootPoint_C::MultiCallOpenLootPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "MultiCallOpenLootPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeadBodyLootPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeadBodyLootPoint.DeadBodyLootPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeadBodyLootPoint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadBodyLootPoint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
