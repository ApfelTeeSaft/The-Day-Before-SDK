#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FamiliarityAction

#include "Basic.hpp"

#include "FamiliarityAction_classes.hpp"
#include "FamiliarityAction_parameters.hpp"


namespace SDK
{

// Function FamiliarityAction.FamiliarityAction_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFamiliarityAction_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FamiliarityAction_C", "ExecuteAction");

	Params::FamiliarityAction_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FamiliarityAction.FamiliarityAction_C.ExecuteUbergraph_FamiliarityAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityAction_C::ExecuteUbergraph_FamiliarityAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FamiliarityAction_C", "ExecuteUbergraph_FamiliarityAction");

	Params::FamiliarityAction_C_ExecuteUbergraph_FamiliarityAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

