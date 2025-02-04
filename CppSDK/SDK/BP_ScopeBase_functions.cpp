#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScopeBase

#include "Basic.hpp"

#include "BP_ScopeBase_classes.hpp"
#include "BP_ScopeBase_parameters.hpp"


namespace SDK
{

// Function BP_ScopeBase.BP_ScopeBase_C.Aim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::Aim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "Aim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.Custom_AddScopeEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::Custom_AddScopeEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "Custom_AddScopeEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.Custom_RemoveScopeEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::Custom_RemoveScopeEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "Custom_RemoveScopeEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.ExecuteUbergraph_BP_ScopeBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScopeBase_C::ExecuteUbergraph_BP_ScopeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "ExecuteUbergraph_BP_ScopeBase");

	Params::BP_ScopeBase_C_ExecuteUbergraph_BP_ScopeBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScopeBase.BP_ScopeBase_C.InitializeOnEquip
// (BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::InitializeOnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "InitializeOnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.LerpFOV__FinishedFunc
// (BlueprintEvent)

void ABP_ScopeBase_C::LerpFOV__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "LerpFOV__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.LerpFOV__UpdateFunc
// (BlueprintEvent)

void ABP_ScopeBase_C::LerpFOV__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "LerpFOV__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.OnAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Aim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FPP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScopeBase_C::OnAim(bool Param_Aim, bool FPP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "OnAim");

	Params::BP_ScopeBase_C_OnAim Parms{};

	Parms.Param_Aim = Param_Aim;
	Parms.FPP = FPP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScopeBase.BP_ScopeBase_C.OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::OnWeaponChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "OnWeaponChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.PlaceholderOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::PlaceholderOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "PlaceholderOffset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.PlaceholderOffsetEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::PlaceholderOffsetEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "PlaceholderOffsetEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ScopeBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScopeBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "ReceiveTick");

	Params::BP_ScopeBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScopeBase.BP_ScopeBase_C.SpecificBeginPlayDueToWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::SpecificBeginPlayDueToWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "SpecificBeginPlayDueToWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScopeBase.BP_ScopeBase_C.StopAim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScopeBase_C::StopAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScopeBase_C", "StopAim");

	UObject::ProcessEvent(Func, nullptr);
}

}

