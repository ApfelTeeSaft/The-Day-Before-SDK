#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ScrollBorder

#include "Basic.hpp"

#include "W_ScrollBorder_classes.hpp"
#include "W_ScrollBorder_parameters.hpp"


namespace SDK
{

// Function W_ScrollBorder.W_ScrollBorder_C.ExecuteUbergraph_W_ScrollBorder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScrollBorder_C::ExecuteUbergraph_W_ScrollBorder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScrollBorder_C", "ExecuteUbergraph_W_ScrollBorder");

	Params::W_ScrollBorder_C_ExecuteUbergraph_W_ScrollBorder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ScrollBorder.W_ScrollBorder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScrollBorder_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScrollBorder_C", "PreConstruct");

	Params::W_ScrollBorder_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
