#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lenny_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Lenny_Skeleton_AnimBlueprint_classes.hpp"
#include "Lenny_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void ULenny_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Lenny_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.AnimNotify_Lenny_Start_Writing
// (BlueprintCallable, BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::AnimNotify_Lenny_Start_Writing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "AnimNotify_Lenny_Start_Writing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.AnimNotify_Lenny_Writing
// (BlueprintCallable, BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::AnimNotify_Lenny_Writing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "AnimNotify_Lenny_Writing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_1167D57A483559DEB6093AB867209326
// (BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_1167D57A483559DEB6093AB867209326()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_1167D57A483559DEB6093AB867209326");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6CF1CD3B4AD4F97216ABC5AE53E8E676
// (BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6CF1CD3B4AD4F97216ABC5AE53E8E676()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6CF1CD3B4AD4F97216ABC5AE53E8E676");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULenny_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint");

	Params::Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.OnInteracted
// (Public, BlueprintCallable, BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::OnInteracted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "OnInteracted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.StopInteracting
// (Public, BlueprintCallable, BlueprintEvent)

void ULenny_Skeleton_AnimBlueprint_C::StopInteracting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lenny_Skeleton_AnimBlueprint_C", "StopInteracting");

	UObject::ProcessEvent(Func, nullptr);
}

}
