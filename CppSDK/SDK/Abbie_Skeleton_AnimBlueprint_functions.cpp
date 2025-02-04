#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Abbie_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Abbie_Skeleton_AnimBlueprint_classes.hpp"
#include "Abbie_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAbbie_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Abbie_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_84A6013D4D434BE1577BB894A2221559
// (BlueprintEvent)

void UAbbie_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_84A6013D4D434BE1577BB894A2221559()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_84A6013D4D434BE1577BB894A2221559");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_B98C11704AA27B8ACD81A6AE3BFCAC70
// (BlueprintEvent)

void UAbbie_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_B98C11704AA27B8ACD81A6AE3BFCAC70()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_B98C11704AA27B8ACD81A6AE3BFCAC70");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbbie_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint");

	Params::Abbie_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Abbie_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.OnInteracted
// (Public, BlueprintCallable, BlueprintEvent)

void UAbbie_Skeleton_AnimBlueprint_C::OnInteracted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "OnInteracted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Abbie_Skeleton_AnimBlueprint.Abbie_Skeleton_AnimBlueprint_C.StopInteracting
// (Public, BlueprintCallable, BlueprintEvent)

void UAbbie_Skeleton_AnimBlueprint_C::StopInteracting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Abbie_Skeleton_AnimBlueprint_C", "StopInteracting");

	UObject::ProcessEvent(Func, nullptr);
}

}

