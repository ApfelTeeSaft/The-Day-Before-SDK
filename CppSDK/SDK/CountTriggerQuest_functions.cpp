#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CountTriggerQuest

#include "Basic.hpp"

#include "CountTriggerQuest_classes.hpp"
#include "CountTriggerQuest_parameters.hpp"


namespace SDK
{

// Function CountTriggerQuest.CountTriggerQuest_C.ExecuteUbergraph_CountTriggerQuest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountTriggerQuest_C::ExecuteUbergraph_CountTriggerQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountTriggerQuest_C", "ExecuteUbergraph_CountTriggerQuest");

	Params::CountTriggerQuest_C_ExecuteUbergraph_CountTriggerQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountTriggerQuest.CountTriggerQuest_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData                       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCountTriggerQuest_C::Initialize(const struct FQuestData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountTriggerQuest_C", "Initialize");

	Params::CountTriggerQuest_C_Initialize Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountTriggerQuest.CountTriggerQuest_C.IsMyQuestEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           QuestEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   CurrentQuestIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountTriggerQuest_C::IsMyQuestEvent(const class FString& QuestEvent, int32 CurrentQuestIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountTriggerQuest_C", "IsMyQuestEvent");

	Params::CountTriggerQuest_C_IsMyQuestEvent Parms{};

	Parms.QuestEvent = std::move(QuestEvent);
	Parms.CurrentQuestIndex = CurrentQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function CountTriggerQuest.CountTriggerQuest_C.OnQuestEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           QuestEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   CurrentQuestIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountTriggerQuest_C::OnQuestEvent(const class FString& QuestEvent, int32 CurrentQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountTriggerQuest_C", "OnQuestEvent");

	Params::CountTriggerQuest_C_OnQuestEvent Parms{};

	Parms.QuestEvent = std::move(QuestEvent);
	Parms.CurrentQuestIndex = CurrentQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountTriggerQuest.CountTriggerQuest_C.Opa
// (BlueprintCallable, BlueprintEvent)

void UCountTriggerQuest_C::Opa()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountTriggerQuest_C", "Opa");

	UObject::ProcessEvent(Func, nullptr);
}

}
