#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StashClose

#include "Basic.hpp"

#include "StashClose_classes.hpp"
#include "StashClose_parameters.hpp"


namespace SDK
{

// Function StashClose.StashClose_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStashClose_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StashClose_C", "ExecuteAction");

	Params::StashClose_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StashClose.StashClose_C.ExecuteUbergraph_StashClose
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStashClose_C::ExecuteUbergraph_StashClose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StashClose_C", "ExecuteUbergraph_StashClose");

	Params::StashClose_C_ExecuteUbergraph_StashClose Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
