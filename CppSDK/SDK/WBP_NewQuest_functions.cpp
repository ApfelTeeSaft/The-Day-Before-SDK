#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewQuest

#include "Basic.hpp"

#include "WBP_NewQuest_classes.hpp"
#include "WBP_NewQuest_parameters.hpp"


namespace SDK
{

// Function WBP_NewQuest.WBP_NewQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NewQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.ExecuteUbergraph_WBP_NewQuest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::ExecuteUbergraph_WBP_NewQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "ExecuteUbergraph_WBP_NewQuest");

	Params::WBP_NewQuest_C_ExecuteUbergraph_WBP_NewQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Finished_23E46B4D44AF97CA100D7D98DF2B3A49
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::Finished_23E46B4D44AF97CA100D7D98DF2B3A49()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Finished_23E46B4D44AF97CA100D7D98DF2B3A49");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Finished_2643D45A42D569712A31ECA1DFCB21B3
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::Finished_2643D45A42D569712A31ECA1DFCB21B3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Finished_2643D45A42D569712A31ECA1DFCB21B3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Finished_7EE9001644275B942B34E7AAC81FEB32
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::Finished_7EE9001644275B942B34E7AAC81FEB32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Finished_7EE9001644275B942B34E7AAC81FEB32");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Finished_98798BA94C3DC449D8FEA4B24ACCE4E5
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::Finished_98798BA94C3DC449D8FEA4B24ACCE4E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Finished_98798BA94C3DC449D8FEA4B24ACCE4E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Finished_F4A1F7F64C8B8E28E3B5E5944ECCF1DD
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::Finished_F4A1F7F64C8B8E28E3B5E5944ECCF1DD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Finished_F4A1F7F64C8B8E28E3B5E5944ECCF1DD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.FormatText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_NewQuest_C::FormatText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "FormatText");

	Params::WBP_NewQuest_C_FormatText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_NewQuest.WBP_NewQuest_C.FreezeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Freeze                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::FreezeUI(bool Freeze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "FreezeUI");

	Params::WBP_NewQuest_C_FreezeUI Parms{};

	Parms.Freeze = Freeze;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewQuest.WBP_NewQuest_C.OnObjectiveActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objective_C*                  Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::OnObjectiveActivated(class UBP_Objective_C* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "OnObjectiveActivated");

	Params::WBP_NewQuest_C_OnObjectiveActivated Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewQuest.WBP_NewQuest_C.OnObjectiveCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objective_C*                  Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::OnObjectiveCompleted(class UBP_Objective_C* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "OnObjectiveCompleted");

	Params::WBP_NewQuest_C_OnObjectiveCompleted Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewQuest.WBP_NewQuest_C.OnQuestActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objective_C*                  RootObjectiveCollection                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::OnQuestActivated(class UBP_Objective_C* RootObjectiveCollection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "OnQuestActivated");

	Params::WBP_NewQuest_C_OnQuestActivated Parms{};

	Parms.RootObjectiveCollection = RootObjectiveCollection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewQuest.WBP_NewQuest_C.ResetTick
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewQuest_C::ResetTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "ResetTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewQuest.WBP_NewQuest_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuest_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewQuest_C", "Tick");

	Params::WBP_NewQuest_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
