#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_StatCircle

#include "Basic.hpp"

#include "W_StatCircle_classes.hpp"
#include "W_StatCircle_parameters.hpp"


namespace SDK
{

// Function W_StatCircle.W_StatCircle_C.ExecuteUbergraph_W_StatCircle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StatCircle_C::ExecuteUbergraph_W_StatCircle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StatCircle_C", "ExecuteUbergraph_W_StatCircle");

	Params::W_StatCircle_C_ExecuteUbergraph_W_StatCircle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_StatCircle.W_StatCircle_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_StatCircle_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StatCircle_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_StatCircle.W_StatCircle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StatCircle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StatCircle_C", "PreConstruct");

	Params::W_StatCircle_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_StatCircle.W_StatCircle_C.SetFillValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_CurrentFillValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StatCircle_C::SetFillValue(double Param_CurrentFillValue, bool IsCritical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StatCircle_C", "SetFillValue");

	Params::W_StatCircle_C_SetFillValue Parms{};

	Parms.Param_CurrentFillValue = Param_CurrentFillValue;
	Parms.IsCritical = IsCritical;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_StatCircle.W_StatCircle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StatCircle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StatCircle_C", "Tick");

	Params::W_StatCircle_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

