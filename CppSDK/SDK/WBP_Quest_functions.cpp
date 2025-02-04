#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Quest

#include "Basic.hpp"

#include "WBP_Quest_classes.hpp"
#include "WBP_Quest_parameters.hpp"


namespace SDK
{

// Function WBP_Quest.WBP_Quest_C.ExecuteUbergraph_WBP_Quest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quest_C::ExecuteUbergraph_WBP_Quest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "ExecuteUbergraph_WBP_Quest");

	Params::WBP_Quest_C_ExecuteUbergraph_WBP_Quest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Quest.WBP_Quest_C.OnActivatedQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objective_C*                  RootObjectiveCollection                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Quest_C::OnActivatedQuest(class UBP_Objective_C* RootObjectiveCollection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "OnActivatedQuest");

	Params::WBP_Quest_C_OnActivatedQuest Parms{};

	Parms.RootObjectiveCollection = RootObjectiveCollection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Quest.WBP_Quest_C.OnCompletedQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objective_C*                  Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Quest_C::OnCompletedQuest(class UBP_Objective_C* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "OnCompletedQuest");

	Params::WBP_Quest_C_OnCompletedQuest Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Quest.WBP_Quest_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Quest_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Quest.WBP_Quest_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Quest_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "OnMouseButtonDown");

	Params::WBP_Quest_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Quest.WBP_Quest_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quest_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Quest_C", "Tick");

	Params::WBP_Quest_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

