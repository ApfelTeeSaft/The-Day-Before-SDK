#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaveCurrentAreaEntry

#include "Basic.hpp"

#include "WBP_LeaveCurrentAreaEntry_classes.hpp"
#include "WBP_LeaveCurrentAreaEntry_parameters.hpp"


namespace SDK
{

// Function WBP_LeaveCurrentAreaEntry.WBP_LeaveCurrentAreaEntry_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LeaveCurrentAreaEntry_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaveCurrentAreaEntry_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaveCurrentAreaEntry.WBP_LeaveCurrentAreaEntry_C.ExecuteUbergraph_WBP_LeaveCurrentAreaEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaveCurrentAreaEntry_C::ExecuteUbergraph_WBP_LeaveCurrentAreaEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaveCurrentAreaEntry_C", "ExecuteUbergraph_WBP_LeaveCurrentAreaEntry");

	Params::WBP_LeaveCurrentAreaEntry_C_ExecuteUbergraph_WBP_LeaveCurrentAreaEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaveCurrentAreaEntry.WBP_LeaveCurrentAreaEntry_C.OnAcceptTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Accepted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaveCurrentAreaEntry_C::OnAcceptTeleport(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaveCurrentAreaEntry_C", "OnAcceptTeleport");

	Params::WBP_LeaveCurrentAreaEntry_C_OnAcceptTeleport Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaveCurrentAreaEntry.WBP_LeaveCurrentAreaEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaveCurrentAreaEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaveCurrentAreaEntry_C", "PreConstruct");

	Params::WBP_LeaveCurrentAreaEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
