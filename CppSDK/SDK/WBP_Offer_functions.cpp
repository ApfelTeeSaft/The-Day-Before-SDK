#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Offer

#include "Basic.hpp"

#include "WBP_Offer_classes.hpp"
#include "WBP_Offer_parameters.hpp"


namespace SDK
{

// Function WBP_Offer.WBP_Offer_C.AcceptOffer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Offer_C::AcceptOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "AcceptOffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Offer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.DeclineOffer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Offer_C::DeclineOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "DeclineOffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.ExecuteUbergraph_WBP_Offer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Offer_C::ExecuteUbergraph_WBP_Offer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "ExecuteUbergraph_WBP_Offer");

	Params::WBP_Offer_C_ExecuteUbergraph_WBP_Offer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Offer.WBP_Offer_C.FinishHoldInteract
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Offer_C::FinishHoldInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "FinishHoldInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWBP_Offer_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.SetProgressBar
// (BlueprintCallable, BlueprintEvent)

void UWBP_Offer_C::SetProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "SetProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Offer.WBP_Offer_C.StartHold Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Offer_C::StartHold_Interact(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "StartHold Interact");

	Params::WBP_Offer_C_StartHold_Interact Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Offer.WBP_Offer_C.StopHoldInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Offer_C::StopHoldInteract(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "StopHoldInteract");

	Params::WBP_Offer_C_StopHoldInteract Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Offer.WBP_Offer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Offer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Offer_C", "Tick");

	Params::WBP_Offer_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

