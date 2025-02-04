#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Crosshair

#include "Basic.hpp"

#include "UIW_Crosshair_classes.hpp"
#include "UIW_Crosshair_parameters.hpp"


namespace SDK
{

// Function UIW_Crosshair.UIW_Crosshair_C.AimEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Aim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::AimEvent(bool Aim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "AimEvent");

	Params::UIW_Crosshair_C_AimEvent Parms{};

	Parms.Aim = Aim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.AimScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  UpScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::AimScale(double UpScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "AimScale");

	Params::UIW_Crosshair_C_AimScale Parms{};

	Parms.UpScale = UpScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Crosshair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Crosshair.UIW_Crosshair_C.ExecuteUbergraph_UIW_Crosshair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::ExecuteUbergraph_UIW_Crosshair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "ExecuteUbergraph_UIW_Crosshair");

	Params::UIW_Crosshair_C_ExecuteUbergraph_UIW_Crosshair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_ReloadDuration                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::ReloadEvent(double Param_ReloadDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "ReloadEvent");

	Params::UIW_Crosshair_C_ReloadEvent Parms{};

	Parms.Param_ReloadDuration = Param_ReloadDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.ReloadShine
// (BlueprintCallable, BlueprintEvent)

void UUIW_Crosshair_C::ReloadShine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "ReloadShine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Crosshair.UIW_Crosshair_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::SetProgress(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "SetProgress");

	Params::UIW_Crosshair_C_SetProgress Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.SetSpacersSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Crosshair_C::SetSpacersSize(double NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "SetSpacersSize");

	Params::UIW_Crosshair_C_SetSpacersSize Parms{};

	Parms.NewSize = NewSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Crosshair.UIW_Crosshair_C.ShootEvent
// (BlueprintCallable, BlueprintEvent)

void UUIW_Crosshair_C::ShootEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "ShootEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Crosshair.UIW_Crosshair_C.SpacerSizing
// (BlueprintCallable, BlueprintEvent)

void UUIW_Crosshair_C::SpacerSizing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Crosshair_C", "SpacerSizing");

	UObject::ProcessEvent(Func, nullptr);
}

}

