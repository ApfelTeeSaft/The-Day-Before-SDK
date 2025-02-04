#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Hints

#include "Basic.hpp"

#include "W_Hints_classes.hpp"
#include "W_Hints_parameters.hpp"


namespace SDK
{

// Function W_Hints.W_Hints_C.AddNewUniqueNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_NotificationType                      NotificationType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Body                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Hints_C::AddNewUniqueNotification(E_NotificationType NotificationType, const class FText& Title, const class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "AddNewUniqueNotification");

	Params::W_Hints_C_AddNewUniqueNotification Parms{};

	Parms.NotificationType = NotificationType;
	Parms.Title = std::move(Title);
	Parms.Body = std::move(Body);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UW_Hints_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Hints.W_Hints_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UW_Hints_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Hints.W_Hints_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UW_Hints_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Hints.W_Hints_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UW_Hints_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "CustomEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Hints.W_Hints_C.ExecuteUbergraph_W_Hints
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hints_C::ExecuteUbergraph_W_Hints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "ExecuteUbergraph_W_Hints");

	Params::W_Hints_C_ExecuteUbergraph_W_Hints Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.RemoveUniqueNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_NotificationType                      NotificationType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hints_C::RemoveUniqueNotification(E_NotificationType NotificationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "RemoveUniqueNotification");

	Params::W_Hints_C_RemoveUniqueNotification Parms{};

	Parms.NotificationType = NotificationType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.ShowTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ActualTip                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             TipName                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Hints_C::ShowTips(const class FText& ActualTip, const class FText& TipName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "ShowTips");

	Params::W_Hints_C_ShowTips Parms{};

	Parms.ActualTip = std::move(ActualTip);
	Parms.TipName = std::move(TipName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.ShowWelcome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CityName                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Hints_C::ShowWelcome(const class FText& CityName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "ShowWelcome");

	Params::W_Hints_C_ShowWelcome Parms{};

	Parms.CityName = std::move(CityName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hints_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "Tick");

	Params::W_Hints_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Hints.W_Hints_C.UpdateCriticalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_NotificationType                      NotificationType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Body                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Hints_C::UpdateCriticalState(bool Condition, E_NotificationType NotificationType, const class FText& Title, const class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Hints_C", "UpdateCriticalState");

	Params::W_Hints_C_UpdateCriticalState Parms{};

	Parms.Condition = Condition;
	Parms.NotificationType = NotificationType;
	Parms.Title = std::move(Title);
	Parms.Body = std::move(Body);

	UObject::ProcessEvent(Func, &Parms);
}

}

