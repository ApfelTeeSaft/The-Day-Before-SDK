#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_disclaimer

#include "Basic.hpp"

#include "W_disclaimer_classes.hpp"
#include "W_disclaimer_parameters.hpp"


namespace SDK
{

// Function W_disclaimer.W_disclaimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_disclaimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_disclaimer.W_disclaimer_C.ExecuteUbergraph_W_disclaimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_disclaimer_C::ExecuteUbergraph_W_disclaimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "ExecuteUbergraph_W_disclaimer");

	Params::W_disclaimer_C_ExecuteUbergraph_W_disclaimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_disclaimer.W_disclaimer_C.SequenceEvent__ENTRYPOINTW_disclaimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                         SizeBox_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_disclaimer_C::SequenceEvent__ENTRYPOINTW_disclaimer(class USizeBox* SizeBox_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "SequenceEvent__ENTRYPOINTW_disclaimer");

	Params::W_disclaimer_C_SequenceEvent__ENTRYPOINTW_disclaimer Parms{};

	Parms.SizeBox_0 = SizeBox_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_disclaimer.W_disclaimer_C.StartMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                         SizeBox_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_disclaimer_C::StartMusic(class USizeBox* SizeBox_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "StartMusic");

	Params::W_disclaimer_C_StartMusic Parms{};

	Parms.SizeBox_0 = SizeBox_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_disclaimer.W_disclaimer_C.StartSoundSnapshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                         SizeBox_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_disclaimer_C::StartSoundSnapshot(class USizeBox* SizeBox_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "StartSoundSnapshot");

	Params::W_disclaimer_C_StartSoundSnapshot Parms{};

	Parms.SizeBox_0 = SizeBox_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_disclaimer.W_disclaimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_disclaimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_disclaimer_C", "Tick");

	Params::W_disclaimer_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
