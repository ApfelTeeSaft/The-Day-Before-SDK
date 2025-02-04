#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_AimHit

#include "Basic.hpp"

#include "W_AimHit_classes.hpp"
#include "W_AimHit_parameters.hpp"


namespace SDK
{

// Function W_AimHit.W_AimHit_C.ExecuteUbergraph_W_AimHit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AimHit_C::ExecuteUbergraph_W_AimHit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_AimHit_C", "ExecuteUbergraph_W_AimHit");

	Params::W_AimHit_C_ExecuteUbergraph_W_AimHit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_AimHit.W_AimHit_C.PlayHitAnimation
// (BlueprintCallable, BlueprintEvent)

void UW_AimHit_C::PlayHitAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_AimHit_C", "PlayHitAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_AimHit.W_AimHit_C.PlayKillAnimation
// (BlueprintCallable, BlueprintEvent)

void UW_AimHit_C::PlayKillAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_AimHit_C", "PlayKillAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_AimHit.W_AimHit_C.SetRotated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRotated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AimHit_C::SetRotated(bool IsRotated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_AimHit_C", "SetRotated");

	Params::W_AimHit_C_SetRotated Parms{};

	Parms.IsRotated = IsRotated;

	UObject::ProcessEvent(Func, &Parms);
}

}

