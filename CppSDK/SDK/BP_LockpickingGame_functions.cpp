#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LockpickingGame

#include "Basic.hpp"

#include "BP_LockpickingGame_classes.hpp"
#include "BP_LockpickingGame_parameters.hpp"


namespace SDK
{

// Function BP_LockpickingGame.BP_LockpickingGame_C.BeginLockpickShake
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::BeginLockpickShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "BeginLockpickShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.ExecuteUbergraph_BP_LockpickingGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::ExecuteUbergraph_BP_LockpickingGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "ExecuteUbergraph_BP_LockpickingGame");

	Params::BP_LockpickingGame_C_ExecuteUbergraph_BP_LockpickingGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.HandleTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::HandleTick(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "HandleTick");

	Params::BP_LockpickingGame_C_HandleTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.LockpickShakeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_LockpickingGame_C::LockpickShakeTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "LockpickShakeTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.LockpickShakeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_LockpickingGame_C::LockpickShakeTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "LockpickShakeTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.OnExit(Binding)
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::OnExit_Binding_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "OnExit(Binding)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.OnPicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::OnPicked__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "OnPicked__DelegateSignature");

	Params::BP_LockpickingGame_C_OnPicked__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.OnStopLockpicking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::OnStopLockpicking__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "OnStopLockpicking__DelegateSignature");

	Params::BP_LockpickingGame_C_OnStopLockpicking__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LockpickingGame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_LockpickingGame_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "ReceiveTick");

	Params::BP_LockpickingGame_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.RotateLock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::RotateLock(double Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "RotateLock");

	Params::BP_LockpickingGame_C_RotateLock Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.RotateLockpick
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RotationWasChanged                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::RotateLockpick(double Rotation, bool* RotationWasChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "RotateLockpick");

	Params::BP_LockpickingGame_C_RotateLockpick Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

	if (RotationWasChanged != nullptr)
		*RotationWasChanged = Parms.RotationWasChanged;
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.RotateLockpickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::RotateLockpickEvent(double AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "RotateLockpickEvent");

	Params::BP_LockpickingGame_C_RotateLockpickEvent Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.RunFailureEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::RunFailureEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "RunFailureEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.RunSuccsesEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::RunSuccsesEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "RunSuccsesEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.SetLockpickOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::SetLockpickOffset(double Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "SetLockpickOffset");

	Params::BP_LockpickingGame_C_SetLockpickOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.SetLockRotation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::SetLockRotation(double Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "SetLockRotation");

	Params::BP_LockpickingGame_C_SetLockRotation Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.StartRotateLock
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::StartRotateLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "StartRotateLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.StopLockpickShake
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::StopLockpickShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "StopLockpickShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.StopRotateLock
// (BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::StopRotateLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "StopRotateLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.UpdateAllowedLockRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::UpdateAllowedLockRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "UpdateAllowedLockRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LockpickingGame_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.GetLockpickRotation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::GetLockpickRotation(double* Rotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "GetLockpickRotation");

	Params::BP_LockpickingGame_C_GetLockpickRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.GetLockRotation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::GetLockRotation(double* Rotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "GetLockRotation");

	Params::BP_LockpickingGame_C_GetLockRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;
}


// Function BP_LockpickingGame.BP_LockpickingGame_C.IsLockpickInUnlockRange?
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockpickingGame_C::IsLockpickInUnlockRange_(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockpickingGame_C", "IsLockpickInUnlockRange?");

	Params::BP_LockpickingGame_C_IsLockpickInUnlockRange_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
