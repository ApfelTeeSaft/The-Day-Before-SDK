#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GameLogo

#include "Basic.hpp"

#include "W_GameLogo_classes.hpp"
#include "W_GameLogo_parameters.hpp"


namespace SDK
{

// Function W_GameLogo.W_GameLogo_C.ExecuteUbergraph_W_GameLogo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_GameLogo_C::ExecuteUbergraph_W_GameLogo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GameLogo_C", "ExecuteUbergraph_W_GameLogo");

	Params::W_GameLogo_C_ExecuteUbergraph_W_GameLogo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_GameLogo.W_GameLogo_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)

void UW_GameLogo_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_GameLogo_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

