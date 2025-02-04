#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckInventoryQuest

#include "Basic.hpp"

#include "CheckInventoryQuest_classes.hpp"
#include "CheckInventoryQuest_parameters.hpp"


namespace SDK
{

// Function CheckInventoryQuest.CheckInventoryQuest_C.ExecuteUbergraph_CheckInventoryQuest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCheckInventoryQuest_C::ExecuteUbergraph_CheckInventoryQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckInventoryQuest_C", "ExecuteUbergraph_CheckInventoryQuest");

	Params::CheckInventoryQuest_C_ExecuteUbergraph_CheckInventoryQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckInventoryQuest.CheckInventoryQuest_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData                       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCheckInventoryQuest_C::Initialize(const struct FQuestData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckInventoryQuest_C", "Initialize");

	Params::CheckInventoryQuest_C_Initialize Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckInventoryQuest.CheckInventoryQuest_C.OnQuestEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           QuestEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   CurrentQuestIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCheckInventoryQuest_C::OnQuestEvent(const class FString& QuestEvent, int32 CurrentQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckInventoryQuest_C", "OnQuestEvent");

	Params::CheckInventoryQuest_C_OnQuestEvent Parms{};

	Parms.QuestEvent = std::move(QuestEvent);
	Parms.CurrentQuestIndex = CurrentQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckInventoryQuest.CheckInventoryQuest_C.ProcessLocalTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Trigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCheckInventoryQuest_C::ProcessLocalTrigger(const class FString& Trigger, int32 QuestID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckInventoryQuest_C", "ProcessLocalTrigger");

	Params::CheckInventoryQuest_C_ProcessLocalTrigger Parms{};

	Parms.Trigger = std::move(Trigger);
	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

