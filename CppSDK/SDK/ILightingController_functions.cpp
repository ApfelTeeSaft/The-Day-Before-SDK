#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ILightingController

#include "Basic.hpp"

#include "ILightingController_classes.hpp"
#include "ILightingController_parameters.hpp"


namespace SDK
{

// Function ILightingController.ILightingController_C.SetPlayerInHUB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InHub                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IILightingController_C::SetPlayerInHUB(bool InHub)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ILightingController_C", "SetPlayerInHUB");

	Params::ILightingController_C_SetPlayerInHUB Parms{};

	Parms.InHub = InHub;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ILightingController.ILightingController_C.SetSkyLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IILightingController_C::SetSkyLightColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ILightingController_C", "SetSkyLightColor");

	Params::ILightingController_C_SetSkyLightColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ILightingController.ILightingController_C.SetSkylightOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IILightingController_C::SetSkylightOffset(double Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ILightingController_C", "SetSkylightOffset");

	Params::ILightingController_C_SetSkylightOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}

}

