#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerNamePlate

#include "Basic.hpp"

#include "W_PlayerNamePlate_classes.hpp"
#include "W_PlayerNamePlate_parameters.hpp"


namespace SDK
{

// Function W_PlayerNamePlate.W_PlayerNamePlate_C.ExecuteUbergraph_W_PlayerNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerNamePlate_C::ExecuteUbergraph_W_PlayerNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerNamePlate_C", "ExecuteUbergraph_W_PlayerNamePlate");

	Params::W_PlayerNamePlate_C_ExecuteUbergraph_W_PlayerNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlayerNamePlate.W_PlayerNamePlate_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UW_PlayerNamePlate_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerNamePlate_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerNamePlate.W_PlayerNamePlate_C.SetColorAndName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      TintColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayerNamePlate_C::SetColorAndName(const struct FSlateColor& TintColor, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerNamePlate_C", "SetColorAndName");

	Params::W_PlayerNamePlate_C_SetColorAndName Parms{};

	Parms.TintColor = std::move(TintColor);
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlayerNamePlate.W_PlayerNamePlate_C.SetScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerNamePlate_C::SetScale(double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerNamePlate_C", "SetScale");

	Params::W_PlayerNamePlate_C_SetScale Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlayerNamePlate.W_PlayerNamePlate_C.Show
// (BlueprintCallable, BlueprintEvent)

void UW_PlayerNamePlate_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerNamePlate_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}

}
