#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleQuestWithHighlightActors

#include "Basic.hpp"

#include "SimpleQuestWithHighlightActors_classes.hpp"
#include "SimpleQuestWithHighlightActors_parameters.hpp"


namespace SDK
{

// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.ExecuteUbergraph_SimpleQuestWithHighlightActors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleQuestWithHighlightActors_C::ExecuteUbergraph_SimpleQuestWithHighlightActors(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleQuestWithHighlightActors_C", "ExecuteUbergraph_SimpleQuestWithHighlightActors");

	Params::SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData                       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void USimpleQuestWithHighlightActors_C::Initialize(const struct FQuestData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleQuestWithHighlightActors_C", "Initialize");

	Params::SimpleQuestWithHighlightActors_C_Initialize Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.QuestActivated
// (Public, BlueprintCallable, BlueprintEvent)

void USimpleQuestWithHighlightActors_C::QuestActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleQuestWithHighlightActors_C", "QuestActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.QuestDeactivated
// (Public, BlueprintCallable, BlueprintEvent)

void USimpleQuestWithHighlightActors_C::QuestDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleQuestWithHighlightActors_C", "QuestDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

