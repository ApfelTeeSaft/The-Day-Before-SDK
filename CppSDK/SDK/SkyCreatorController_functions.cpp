#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyCreatorController

#include "Basic.hpp"

#include "SkyCreatorController_classes.hpp"
#include "SkyCreatorController_parameters.hpp"


namespace SDK
{

// Function SkyCreatorController.SkyCreatorController_C.CalculateDayCycleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Construct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::CalculateDayCycleState(bool Construct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "CalculateDayCycleState");

	Params::SkyCreatorController_C_CalculateDayCycleState Parms{};

	Parms.Construct = Construct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.CalculateInterpolationAlpha
// (Public, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::CalculateInterpolationAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "CalculateInterpolationAlpha");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.ExecuteUbergraph_SkyCreatorController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::ExecuteUbergraph_SkyCreatorController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "ExecuteUbergraph_SkyCreatorController");

	Params::SkyCreatorController_C_ExecuteUbergraph_SkyCreatorController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.GetDayCycleState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDayCycleState                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EDayCycleState ASkyCreatorController_C::GetDayCycleState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "GetDayCycleState");

	Params::SkyCreatorController_C_GetDayCycleState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkyCreatorController.SkyCreatorController_C.GetWeatherPreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Prev                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkyCreatorWeatherSettings       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FSkyCreatorWeatherSettings ASkyCreatorController_C::GetWeatherPreset(bool Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "GetWeatherPreset");

	Params::SkyCreatorController_C_GetWeatherPreset Parms{};

	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkyCreatorController.SkyCreatorController_C.HiddenCalc
// (Public, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::HiddenCalc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "HiddenCalc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.InitSkyCreator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::InitSkyCreator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "InitSkyCreator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.IsHub
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsHub                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::IsHub(bool* Param_IsHub)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "IsHub");

	Params::SkyCreatorController_C_IsHub Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsHub != nullptr)
		*Param_IsHub = Parms.Param_IsHub;
}


// Function SkyCreatorController.SkyCreatorController_C.LerpSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Construct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::LerpSettings(bool Construct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "LerpSettings");

	Params::SkyCreatorController_C_LerpSettings Parms{};

	Parms.Construct = Construct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.LightChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkyCreatorLightStateEnum               Setting_State                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::LightChange__DelegateSignature(ESkyCreatorLightStateEnum Setting_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "LightChange__DelegateSignature");

	Params::SkyCreatorController_C_LightChange__DelegateSignature Parms{};

	Parms.Setting_State = Setting_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.LoadSkyCreatorState
// (BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::LoadSkyCreatorState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "LoadSkyCreatorState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.NormalizeTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ASkyCreatorController_C::NormalizeTime(double Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "NormalizeTime");

	Params::SkyCreatorController_C_NormalizeTime Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkyCreatorController.SkyCreatorController_C.OnCycleChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDayCycleState                          Param_DayCycleState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::OnCycleChange__DelegateSignature(EDayCycleState Param_DayCycleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "OnCycleChange__DelegateSignature");

	Params::SkyCreatorController_C_OnCycleChange__DelegateSignature Parms{};

	Parms.Param_DayCycleState = Param_DayCycleState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.OnDayStateChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Construct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::OnDayStateChange(bool Construct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "OnDayStateChange");

	Params::SkyCreatorController_C_OnDayStateChange Parms{};

	Parms.Construct = Construct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.OnSettingsStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkyCreatorLightStateEnum               Param_SettingsState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::OnSettingsStateChange(ESkyCreatorLightStateEnum Param_SettingsState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "OnSettingsStateChange");

	Params::SkyCreatorController_C_OnSettingsStateChange Parms{};

	Parms.Param_SettingsState = Param_SettingsState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASkyCreatorController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyCreatorController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "ReceiveTick");

	Params::SkyCreatorController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkyCreatorController.SkyCreatorController_C.SetNextCycle
// (Public, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::SetNextCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "SetNextCycle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.WeatherTimerCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::WeatherTimerCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "WeatherTimerCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkyCreatorController.SkyCreatorController_C.WeatherTimerStop
// (Public, BlueprintCallable, BlueprintEvent)

void ASkyCreatorController_C::WeatherTimerStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkyCreatorController_C", "WeatherTimerStop");

	UObject::ProcessEvent(Func, nullptr);
}

}
