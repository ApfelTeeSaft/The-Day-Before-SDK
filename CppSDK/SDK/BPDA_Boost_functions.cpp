#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPDA_Boost

#include "Basic.hpp"

#include "BPDA_Boost_classes.hpp"
#include "BPDA_Boost_parameters.hpp"


namespace SDK
{

// Function BPDA_Boost.BPDA_Boost_C.ExecuteUbergraph_BPDA_Boost
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDA_Boost_C::ExecuteUbergraph_BPDA_Boost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPDA_Boost_C", "ExecuteUbergraph_BPDA_Boost");

	Params::BPDA_Boost_C_ExecuteUbergraph_BPDA_Boost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPDA_Boost.BPDA_Boost_C.SetUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RB_Vehicle_C*                 Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPDA_Boost_C::SetUpgrade(class ABP_RB_Vehicle_C* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPDA_Boost_C", "SetUpgrade");

	Params::BPDA_Boost_C_SetUpgrade Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}

}

