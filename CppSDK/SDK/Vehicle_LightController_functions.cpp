#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_LightController

#include "Basic.hpp"

#include "Vehicle_LightController_classes.hpp"
#include "Vehicle_LightController_parameters.hpp"


namespace SDK
{

// Function Vehicle_LightController.Vehicle_LightController_C.ExecuteUbergraph_Vehicle_LightController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicle_LightController_C::ExecuteUbergraph_Vehicle_LightController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_LightController_C", "ExecuteUbergraph_Vehicle_LightController");

	Params::Vehicle_LightController_C_ExecuteUbergraph_Vehicle_LightController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Vehicle_LightController.Vehicle_LightController_C.GetIntensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Param_Intensity                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicle_LightController_C::GetIntensity(double* Param_Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_LightController_C", "GetIntensity");

	Params::Vehicle_LightController_C_GetIntensity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Intensity != nullptr)
		*Param_Intensity = Parms.Param_Intensity;
}


// Function Vehicle_LightController.Vehicle_LightController_C.HasActiveLights
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicle_LightController_C::HasActiveLights(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_LightController_C", "HasActiveLights");

	Params::Vehicle_LightController_C_HasActiveLights Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function Vehicle_LightController.Vehicle_LightController_C.Illuminate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Intensity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicle_LightController_C::Illuminate(double Param_Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_LightController_C", "Illuminate");

	Params::Vehicle_LightController_C_Illuminate Parms{};

	Parms.Param_Intensity = Param_Intensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Vehicle_LightController.Vehicle_LightController_C.Init
// (BlueprintCallable, BlueprintEvent)

void UVehicle_LightController_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_LightController_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}
