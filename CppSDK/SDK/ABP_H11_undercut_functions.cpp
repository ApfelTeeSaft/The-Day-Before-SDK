#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_H11_undercut

#include "Basic.hpp"

#include "ABP_H11_undercut_classes.hpp"
#include "ABP_H11_undercut_parameters.hpp"


namespace SDK
{

// Function ABP_H11_undercut.ABP_H11_undercut_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_H11_undercut_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_H11_undercut_C", "AnimGraph");

	Params::ABP_H11_undercut_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_H11_undercut.ABP_H11_undercut_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_H11_undercut_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_H11_undercut_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_H11_undercut.ABP_H11_undercut_C.ExecuteUbergraph_ABP_H11_undercut
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_H11_undercut_C::ExecuteUbergraph_ABP_H11_undercut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_H11_undercut_C", "ExecuteUbergraph_ABP_H11_undercut");

	Params::ABP_H11_undercut_C_ExecuteUbergraph_ABP_H11_undercut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
