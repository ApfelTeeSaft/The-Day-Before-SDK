#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorkRPNotification

#include "Basic.hpp"

#include "W_WorkRPNotification_classes.hpp"
#include "W_WorkRPNotification_parameters.hpp"


namespace SDK
{

// Function W_WorkRPNotification.W_WorkRPNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WorkRPNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.ExecuteUbergraph_W_WorkRPNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorkRPNotification_C::ExecuteUbergraph_W_WorkRPNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "ExecuteUbergraph_W_WorkRPNotification");

	Params::W_WorkRPNotification_C_ExecuteUbergraph_W_WorkRPNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.InitTimeCode
// (BlueprintCallable, BlueprintEvent)

void UW_WorkRPNotification_C::InitTimeCode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "InitTimeCode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.InitTimeNumber 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_WorkRPNotification_C::InitTimeNumber_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "InitTimeNumber ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorkRPNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "PreConstruct");

	Params::W_WorkRPNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.RemoveRPNotify
// (BlueprintCallable, BlueprintEvent)

void UW_WorkRPNotification_C::RemoveRPNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "RemoveRPNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.SetCurrentProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Current                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_WorkRPNotification_C::SetCurrentProgress(const class FText& Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "SetCurrentProgress");

	Params::W_WorkRPNotification_C_SetCurrentProgress Parms{};

	Parms.Current = std::move(Current);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WorkRPNotification.W_WorkRPNotification_C.StartTimer
// (BlueprintCallable, BlueprintEvent)

void UW_WorkRPNotification_C::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WorkRPNotification_C", "StartTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}

