#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ResourceCounter

#include "Basic.hpp"

#include "WBP_ResourceCounter_classes.hpp"
#include "WBP_ResourceCounter_parameters.hpp"


namespace SDK
{

// Function WBP_ResourceCounter.WBP_ResourceCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ResourceCounter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ResourceCounter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ResourceCounter.WBP_ResourceCounter_C.ExecuteUbergraph_WBP_ResourceCounter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ResourceCounter_C::ExecuteUbergraph_WBP_ResourceCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ResourceCounter_C", "ExecuteUbergraph_WBP_ResourceCounter");

	Params::WBP_ResourceCounter_C_ExecuteUbergraph_WBP_ResourceCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ResourceCounter.WBP_ResourceCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ResourceCounter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ResourceCounter_C", "PreConstruct");

	Params::WBP_ResourceCounter_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ResourceCounter.WBP_ResourceCounter_C.UpdateCounter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CountResource                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ResourceCounter_C::UpdateCounter(int32* CountResource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ResourceCounter_C", "UpdateCounter");

	Params::WBP_ResourceCounter_C_UpdateCounter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CountResource != nullptr)
		*CountResource = Parms.CountResource;
}

}
