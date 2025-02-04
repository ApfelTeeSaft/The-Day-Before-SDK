#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TakeItemTutorial

#include "Basic.hpp"

#include "TakeItemTutorial_classes.hpp"
#include "TakeItemTutorial_parameters.hpp"


namespace SDK
{

// Function TakeItemTutorial.TakeItemTutorial_C.CompletetQuest_Serv
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTakeItemTutorial_C::CompletetQuest_Serv(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TakeItemTutorial_C", "CompletetQuest_Serv");

	Params::TakeItemTutorial_C_CompletetQuest_Serv Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TakeItemTutorial.TakeItemTutorial_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTakeItemTutorial_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TakeItemTutorial_C", "ExecuteAction");

	Params::TakeItemTutorial_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TakeItemTutorial.TakeItemTutorial_C.ExecuteUbergraph_TakeItemTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTakeItemTutorial_C::ExecuteUbergraph_TakeItemTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TakeItemTutorial_C", "ExecuteUbergraph_TakeItemTutorial");

	Params::TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

