#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HuntingRifleCrosshair

#include "Basic.hpp"

#include "WBP_HuntingRifleCrosshair_classes.hpp"
#include "WBP_HuntingRifleCrosshair_parameters.hpp"


namespace SDK
{

// Function WBP_HuntingRifleCrosshair.WBP_HuntingRifleCrosshair_C.Aim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Aim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HuntingRifleCrosshair_C::Aim(bool Param_Aim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HuntingRifleCrosshair_C", "Aim");

	Params::WBP_HuntingRifleCrosshair_C_Aim Parms{};

	Parms.Param_Aim = Param_Aim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HuntingRifleCrosshair.WBP_HuntingRifleCrosshair_C.ExecuteUbergraph_WBP_HuntingRifleCrosshair
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HuntingRifleCrosshair_C::ExecuteUbergraph_WBP_HuntingRifleCrosshair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HuntingRifleCrosshair_C", "ExecuteUbergraph_WBP_HuntingRifleCrosshair");

	Params::WBP_HuntingRifleCrosshair_C_ExecuteUbergraph_WBP_HuntingRifleCrosshair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HuntingRifleCrosshair.WBP_HuntingRifleCrosshair_C.hit
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HuntingRifleCrosshair_C::Hit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HuntingRifleCrosshair_C", "hit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HuntingRifleCrosshair.WBP_HuntingRifleCrosshair_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HuntingRifleCrosshair_C::Kill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HuntingRifleCrosshair_C", "Kill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HuntingRifleCrosshair.WBP_HuntingRifleCrosshair_C.Shoot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Shooting                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HuntingRifleCrosshair_C::Shoot(bool Shooting, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HuntingRifleCrosshair_C", "Shoot");

	Params::WBP_HuntingRifleCrosshair_C_Shoot Parms{};

	Parms.Shooting = Shooting;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
