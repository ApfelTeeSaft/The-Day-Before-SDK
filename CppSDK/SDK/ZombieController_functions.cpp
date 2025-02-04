#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZombieController

#include "Basic.hpp"

#include "ZombieController_classes.hpp"
#include "ZombieController_parameters.hpp"


namespace SDK
{

// Function ZombieController.ZombieController_C.ActivateAI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_HomeLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EZombieAnimType                         ZombieAnimType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AZombieController_C::ActivateAI(const struct FVector& Param_HomeLocation, EZombieAnimType ZombieAnimType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "ActivateAI");

	Params::ZombieController_C_ActivateAI Parms{};

	Parms.Param_HomeLocation = std::move(Param_HomeLocation);
	Parms.ZombieAnimType = ZombieAnimType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ZombieController.ZombieController_C.ClearVariablesAfterSight
// (Protected, BlueprintCallable, BlueprintEvent)

void AZombieController_C::ClearVariablesAfterSight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "ClearVariablesAfterSight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ZombieController.ZombieController_C.DeactivateAI
// (BlueprintCallable, BlueprintEvent)

void AZombieController_C::DeactivateAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "DeactivateAI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ZombieController.ZombieController_C.ExecuteUbergraph_ZombieController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AZombieController_C::ExecuteUbergraph_ZombieController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "ExecuteUbergraph_ZombieController");

	Params::ZombieController_C_ExecuteUbergraph_ZombieController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ZombieController.ZombieController_C.Reset All Params
// (Private, BlueprintCallable, BlueprintEvent)

void AZombieController_C::Reset_All_Params()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "Reset All Params");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ZombieController.ZombieController_C.ResetAllParamsFix
// (Public, BlueprintCallable, BlueprintEvent)

void AZombieController_C::ResetAllParamsFix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "ResetAllParamsFix");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ZombieController.ZombieController_C.SetHomeLocation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_HomeLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AZombieController_C::SetHomeLocation(const struct FVector& Param_HomeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "SetHomeLocation");

	Params::ZombieController_C_SetHomeLocation Parms{};

	Parms.Param_HomeLocation = std::move(Param_HomeLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ZombieController.ZombieController_C.SetupVariablesAfterSight
// (Protected, BlueprintCallable, BlueprintEvent)

void AZombieController_C::SetupVariablesAfterSight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "SetupVariablesAfterSight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ZombieController.ZombieController_C.SwitchPerception
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TurnOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AZombieController_C::SwitchPerception(bool TurnOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "SwitchPerception");

	Params::ZombieController_C_SwitchPerception Parms{};

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ZombieController.ZombieController_C.GetActorPerceptionViewpoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                          Out_Location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Out_Rotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AZombieController_C::GetActorPerceptionViewpoint(struct FVector* Out_Location, struct FRotator* Out_Rotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieController_C", "GetActorPerceptionViewpoint");

	Params::ZombieController_C_GetActorPerceptionViewpoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Location != nullptr)
		*Out_Location = std::move(Parms.Out_Location);

	if (Out_Rotation != nullptr)
		*Out_Rotation = std::move(Parms.Out_Rotation);
}

}

