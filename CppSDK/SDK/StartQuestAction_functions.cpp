#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartQuestAction

#include "Basic.hpp"

#include "StartQuestAction_classes.hpp"
#include "StartQuestAction_parameters.hpp"


namespace SDK
{

// Function StartQuestAction.StartQuestAction_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStartQuestAction_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartQuestAction_C", "ExecuteAction");

	Params::StartQuestAction_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StartQuestAction.StartQuestAction_C.ExecuteUbergraph_StartQuestAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartQuestAction_C::ExecuteUbergraph_StartQuestAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartQuestAction_C", "ExecuteUbergraph_StartQuestAction");

	Params::StartQuestAction_C_ExecuteUbergraph_StartQuestAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StartQuestAction.StartQuestAction_C.StartEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStartQuestAction_C::StartEvent(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartQuestAction_C", "StartEvent");

	Params::StartQuestAction_C_StartEvent Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}

}
