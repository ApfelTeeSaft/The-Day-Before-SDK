#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompleteQuestAction

#include "Basic.hpp"

#include "CompleteQuestAction_classes.hpp"
#include "CompleteQuestAction_parameters.hpp"


namespace SDK
{

// Function CompleteQuestAction.CompleteQuestAction_C.CheckFreeSpace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, int32>              Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bHaveFreeSpace                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::CheckFreeSpace(const TMap<class FString, int32>& Reward, bool* bHaveFreeSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "CheckFreeSpace");

	Params::CompleteQuestAction_C_CheckFreeSpace Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);

	if (bHaveFreeSpace != nullptr)
		*bHaveFreeSpace = Parms.bHaveFreeSpace;
}


// Function CompleteQuestAction.CompleteQuestAction_C.CompleateRaidQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvPC_C*                        PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestContext*                    QuestContext                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::CompleateRaidQuest(class ASurvPC_C* PC, const class UQuestContext*& QuestContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "CompleateRaidQuest");

	Params::CompleteQuestAction_C_CompleateRaidQuest Parms{};

	Parms.PC = PC;
	Parms.QuestContext = QuestContext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.CompleateRPQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvPC_C*                        PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestContext*                    QuestContext                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::CompleateRPQuest(class ASurvPC_C* PC, const class UQuestContext*& QuestContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "CompleateRPQuest");

	Params::CompleteQuestAction_C_CompleateRPQuest Parms{};

	Parms.PC = PC;
	Parms.QuestContext = QuestContext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.CompleteBeginner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvPC_C*                        SurvPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestContext*                    Quest_Context                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::CompleteBeginner(class ASurvPC_C* SurvPC, class UQuestContext* Quest_Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "CompleteBeginner");

	Params::CompleteQuestAction_C_CompleteBeginner Parms{};

	Parms.SurvPC = SurvPC;
	Parms.Quest_Context = Quest_Context;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.CompletetQuest_Serv
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          SurvPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::CompletetQuest_Serv(class UObject* SurvPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "CompletetQuest_Serv");

	Params::CompleteQuestAction_C_CompletetQuest_Serv Parms{};

	Parms.SurvPC = SurvPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.ExecuteAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAGSGraphNode*                    NodeOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "ExecuteAction");

	Params::CompleteQuestAction_C_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.ExecuteUbergraph_CompleteQuestAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::ExecuteUbergraph_CompleteQuestAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "ExecuteUbergraph_CompleteQuestAction");

	Params::CompleteQuestAction_C_ExecuteUbergraph_CompleteQuestAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteQuestAction.CompleteQuestAction_C.GiveRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestData_C*                     QuestData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                SurvPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Success                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompleteQuestAction_C::GiveRewards(const class UQuestData_C* QuestData, class ASurvivalPlayer_C* SurvPlayer, bool* Param_Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "GiveRewards");

	Params::CompleteQuestAction_C_GiveRewards Parms{};

	Parms.QuestData = QuestData;
	Parms.SurvPlayer = SurvPlayer;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Success != nullptr)
		*Param_Success = Parms.Param_Success;
}


// Function CompleteQuestAction.CompleteQuestAction_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCompleteQuestAction_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "NewEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CompleteQuestAction.CompleteQuestAction_C.OnShowJournalHint
// (BlueprintCallable, BlueprintEvent)

void UCompleteQuestAction_C::OnShowJournalHint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "OnShowJournalHint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CompleteQuestAction.CompleteQuestAction_C.ShowNotEnoughSpaceError
// (Public, BlueprintCallable, BlueprintEvent)

void UCompleteQuestAction_C::ShowNotEnoughSpaceError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteQuestAction_C", "ShowNotEnoughSpaceError");

	UObject::ProcessEvent(Func, nullptr);
}

}

