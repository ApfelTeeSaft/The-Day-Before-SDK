#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CampTent

#include "Basic.hpp"

#include "W_CampTent_classes.hpp"
#include "W_CampTent_parameters.hpp"


namespace SDK
{

// Function W_CampTent.W_CampTent_C.ExecuteUbergraph_W_CampTent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CampTent_C::ExecuteUbergraph_W_CampTent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTent_C", "ExecuteUbergraph_W_CampTent");

	Params::W_CampTent_C_ExecuteUbergraph_W_CampTent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CampTent.W_CampTent_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UW_CampTent_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTent_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CampTent.W_CampTent_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CampAction                            Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CampTent_C::Show(E_CampAction Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTent_C", "Show");

	Params::W_CampTent_C_Show Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CampTent.W_CampTent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CampTent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTent_C", "Tick");

	Params::W_CampTent_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

