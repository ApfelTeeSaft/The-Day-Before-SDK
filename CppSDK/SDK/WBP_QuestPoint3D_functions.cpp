#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuestPoint3D

#include "Basic.hpp"

#include "WBP_QuestPoint3D_classes.hpp"
#include "WBP_QuestPoint3D_parameters.hpp"


namespace SDK
{

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestPoint3D_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestPoint3D_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.ExecuteUbergraph_WBP_QuestPoint3D
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestPoint3D_C::ExecuteUbergraph_WBP_QuestPoint3D(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "ExecuteUbergraph_WBP_QuestPoint3D");

	Params::WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.GetDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_QuestPoint3D_C::GetDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "GetDistance");

	Params::WBP_QuestPoint3D_C_GetDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestPoint3D_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.SetVisibilityW
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestPoint3D_C::SetVisibilityW(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "SetVisibilityW");

	Params::WBP_QuestPoint3D_C_SetVisibilityW Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Toggle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestPoint3D_C::Toggle(bool Param_Toggle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestPoint3D_C", "Toggle");

	Params::WBP_QuestPoint3D_C_Toggle Parms{};

	Parms.Param_Toggle = Param_Toggle;

	UObject::ProcessEvent(Func, &Parms);
}

}
