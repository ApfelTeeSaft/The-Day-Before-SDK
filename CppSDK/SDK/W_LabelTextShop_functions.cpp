#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LabelTextShop

#include "Basic.hpp"

#include "W_LabelTextShop_classes.hpp"
#include "W_LabelTextShop_parameters.hpp"


namespace SDK
{

// Function W_LabelTextShop.W_LabelTextShop_C.ExecuteUbergraph_W_LabelTextShop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LabelTextShop_C::ExecuteUbergraph_W_LabelTextShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LabelTextShop_C", "ExecuteUbergraph_W_LabelTextShop");

	Params::W_LabelTextShop_C_ExecuteUbergraph_W_LabelTextShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LabelTextShop.W_LabelTextShop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LabelTextShop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LabelTextShop_C", "PreConstruct");

	Params::W_LabelTextShop_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
