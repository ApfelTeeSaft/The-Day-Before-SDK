#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CampTimer

#include "Basic.hpp"

#include "W_CampTimer_classes.hpp"
#include "W_CampTimer_parameters.hpp"


namespace SDK
{

// Function W_CampTimer.W_CampTimer_C.ExecuteUbergraph_W_CampTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CampTimer_C::ExecuteUbergraph_W_CampTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTimer_C", "ExecuteUbergraph_W_CampTimer");

	Params::W_CampTimer_C_ExecuteUbergraph_W_CampTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CampTimer.W_CampTimer_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UW_CampTimer_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTimer_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CampTimer.W_CampTimer_C.Show
// (BlueprintCallable, BlueprintEvent)

void UW_CampTimer_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTimer_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CampTimer.W_CampTimer_C.ShowTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Duration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_CampTimer_C::ShowTimer(double Param_Duration, const class FString& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTimer_C", "ShowTimer");

	Params::W_CampTimer_C_ShowTimer Parms{};

	Parms.Param_Duration = Param_Duration;
	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CampTimer.W_CampTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CampTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CampTimer_C", "Tick");

	Params::W_CampTimer_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
