#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuestLog

#include "Basic.hpp"

#include "WBP_QuestLog_classes.hpp"
#include "WBP_QuestLog_parameters.hpp"


namespace SDK
{

// Function WBP_QuestLog.WBP_QuestLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestLog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestLog.WBP_QuestLog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestLog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestLog.WBP_QuestLog_C.ExecuteUbergraph_WBP_QuestLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestLog_C::ExecuteUbergraph_WBP_QuestLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "ExecuteUbergraph_WBP_QuestLog");

	Params::WBP_QuestLog_C_ExecuteUbergraph_WBP_QuestLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestLog.WBP_QuestLog_C.FindSpecialQuestContexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestLog_C::FindSpecialQuestContexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "FindSpecialQuestContexts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestLog.WBP_QuestLog_C.Finished_78C5196F4F1B8A6DEA964CB351AA18E2
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuestLog_C::Finished_78C5196F4F1B8A6DEA964CB351AA18E2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "Finished_78C5196F4F1B8A6DEA964CB351AA18E2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestLog.WBP_QuestLog_C.NotTutorialQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UQuestContextViewModel*           QuestContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    NotSpecial                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestLog_C::NotTutorialQuest(class UQuestContextViewModel* QuestContext, bool* NotSpecial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "NotTutorialQuest");

	Params::WBP_QuestLog_C_NotTutorialQuest Parms{};

	Parms.QuestContext = QuestContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NotSpecial != nullptr)
		*NotSpecial = Parms.NotSpecial;
}


// Function WBP_QuestLog.WBP_QuestLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestLog.WBP_QuestLog_C.OnLogEntrySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestContextViewModel*           ViewModel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_QuestLogEntry_C*             WidgetRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestLog_C::OnLogEntrySelected(class UQuestContextViewModel* ViewModel, class UWBP_QuestLogEntry_C* WidgetRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "OnLogEntrySelected");

	Params::WBP_QuestLog_C_OnLogEntrySelected Parms{};

	Parms.ViewModel = ViewModel;
	Parms.WidgetRef = WidgetRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestLog.WBP_QuestLog_C.OnQuestListChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFieldNotificationId             Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestLog_C::OnQuestListChanged(class UObject* Object, const struct FFieldNotificationId& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "OnQuestListChanged");

	Params::WBP_QuestLog_C_OnQuestListChanged Parms{};

	Parms.Object = Object;
	Parms.Field = std::move(Field);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestLog.WBP_QuestLog_C.GetQuestListViewModel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UQuestListViewModel*              ViewModel                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestLog_C::GetQuestListViewModel(class UQuestListViewModel** ViewModel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestLog_C", "GetQuestListViewModel");

	Params::WBP_QuestLog_C_GetQuestListViewModel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ViewModel != nullptr)
		*ViewModel = Parms.ViewModel;
}

}
