#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MSetQuestCompleted

#include "Basic.hpp"

#include "MSetQuestCompleted_classes.hpp"
#include "MSetQuestCompleted_parameters.hpp"


namespace SDK
{

// Function MSetQuestCompleted.MSetQuestCompleted_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMSetQuestCompleted_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MSetQuestCompleted_C", "ExecuteAction");

	Params::MSetQuestCompleted_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MSetQuestCompleted.MSetQuestCompleted_C.ExecuteUbergraph_MSetQuestCompleted
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMSetQuestCompleted_C::ExecuteUbergraph_MSetQuestCompleted(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MSetQuestCompleted_C", "ExecuteUbergraph_MSetQuestCompleted");

	Params::MSetQuestCompleted_C_ExecuteUbergraph_MSetQuestCompleted Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
