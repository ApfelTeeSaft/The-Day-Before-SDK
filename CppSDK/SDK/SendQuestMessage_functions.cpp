#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SendQuestMessage

#include "Basic.hpp"

#include "SendQuestMessage_classes.hpp"
#include "SendQuestMessage_parameters.hpp"


namespace SDK
{

// Function SendQuestMessage.SendQuestMessage_C.CompletetQuest_Serv
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          SurvPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USendQuestMessage_C::CompletetQuest_Serv(class UObject* SurvPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SendQuestMessage_C", "CompletetQuest_Serv");

	Params::SendQuestMessage_C_CompletetQuest_Serv Parms{};

	Parms.SurvPC = SurvPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SendQuestMessage.SendQuestMessage_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USendQuestMessage_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SendQuestMessage_C", "ExecuteAction");

	Params::SendQuestMessage_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SendQuestMessage.SendQuestMessage_C.ExecuteUbergraph_SendQuestMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USendQuestMessage_C::ExecuteUbergraph_SendQuestMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SendQuestMessage_C", "ExecuteUbergraph_SendQuestMessage");

	Params::SendQuestMessage_C_ExecuteUbergraph_SendQuestMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
