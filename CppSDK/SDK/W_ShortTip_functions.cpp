#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ShortTip

#include "Basic.hpp"

#include "W_ShortTip_classes.hpp"
#include "W_ShortTip_parameters.hpp"


namespace SDK
{

// Function W_ShortTip.W_ShortTip_C.ExecuteUbergraph_W_ShortTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShortTip_C::ExecuteUbergraph_W_ShortTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "ExecuteUbergraph_W_ShortTip");

	Params::W_ShortTip_C_ExecuteUbergraph_W_ShortTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShortTip.W_ShortTip_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void UW_ShortTip_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShortTip.W_ShortTip_C.Finished_FFFFBE1540F38BE58934DB99A905695F
// (BlueprintCallable, BlueprintEvent)

void UW_ShortTip_C::Finished_FFFFBE1540F38BE58934DB99A905695F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "Finished_FFFFBE1540F38BE58934DB99A905695F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShortTip.W_ShortTip_C.OnMouseClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_ShortTip_C::OnMouseClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "OnMouseClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShortTip.W_ShortTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShortTip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "PreConstruct");

	Params::W_ShortTip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShortTip.W_ShortTip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShortTip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShortTip_C", "Tick");

	Params::W_ShortTip_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
