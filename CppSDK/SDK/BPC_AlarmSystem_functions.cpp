#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_AlarmSystem

#include "Basic.hpp"

#include "BPC_AlarmSystem_classes.hpp"
#include "BPC_AlarmSystem_parameters.hpp"


namespace SDK
{

// Function BPC_AlarmSystem.BPC_AlarmSystem_C.ExecuteUbergraph_BPC_AlarmSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::ExecuteUbergraph_BPC_AlarmSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "ExecuteUbergraph_BPC_AlarmSystem");

	Params::BPC_AlarmSystem_C_ExecuteUbergraph_BPC_AlarmSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.FailAlarm
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBPC_AlarmSystem_C::FailAlarm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "FailAlarm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.FireAlarmLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseAlarm_C*                 Param_Alarm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::FireAlarmLocal(class ABP_HouseAlarm_C* Param_Alarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "FireAlarmLocal");

	Params::BPC_AlarmSystem_C_FireAlarmLocal Parms{};

	Parms.Param_Alarm = Param_Alarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.FireAlarmServ
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseAlarm_C*                 Param_Alarm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::FireAlarmServ(class ABP_HouseAlarm_C* Param_Alarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "FireAlarmServ");

	Params::BPC_AlarmSystem_C_FireAlarmServ Parms{};

	Parms.Param_Alarm = Param_Alarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.OnFireAlarm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBPC_AlarmSystem_C::OnFireAlarm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "OnFireAlarm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.OnHouseSystemBusy
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBPC_AlarmSystem_C::OnHouseSystemBusy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "OnHouseSystemBusy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.OnUse
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseAlarm_C*                 Param_Alarm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::OnUse(class ABP_HouseAlarm_C* Param_Alarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "OnUse");

	Params::BPC_AlarmSystem_C_OnUse Parms{};

	Parms.Param_Alarm = Param_Alarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_AlarmSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "ReceiveEndPlay");

	Params::BPC_AlarmSystem_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.ReleaseAlarm
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::ReleaseAlarm(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "ReleaseAlarm");

	Params::BPC_AlarmSystem_C_ReleaseAlarm Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.ResetAlarm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBPC_AlarmSystem_C::ResetAlarm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "ResetAlarm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.StartAutoAlarm
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseAlarm_C*                 Param_Alarm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHouseBox_C*                      HouseBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::StartAutoAlarm(class ABP_HouseAlarm_C* Param_Alarm, class AHouseBox_C* HouseBox, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "StartAutoAlarm");

	Params::BPC_AlarmSystem_C_StartAutoAlarm Parms{};

	Parms.Param_Alarm = Param_Alarm;
	Parms.HouseBox = HouseBox;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AlarmSystem.BPC_AlarmSystem_C.Use
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseAlarm_C*                 Param_Alarm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_AlarmSystem_C::Use(class ABP_HouseAlarm_C* Param_Alarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AlarmSystem_C", "Use");

	Params::BPC_AlarmSystem_C_Use Parms{};

	Parms.Param_Alarm = Param_Alarm;

	UObject::ProcessEvent(Func, &Parms);
}

}
