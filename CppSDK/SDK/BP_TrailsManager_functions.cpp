#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailsManager

#include "Basic.hpp"

#include "BP_TrailsManager_classes.hpp"
#include "BP_TrailsManager_parameters.hpp"


namespace SDK
{

// Function BP_TrailsManager.BP_TrailsManager_C.CalculateLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrailsManager_C::CalculateLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "CalculateLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TrailsManager.BP_TrailsManager_C.ExecuteUbergraph_BP_TrailsManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrailsManager_C::ExecuteUbergraph_BP_TrailsManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "ExecuteUbergraph_BP_TrailsManager");

	Params::BP_TrailsManager_C_ExecuteUbergraph_BP_TrailsManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrailsManager.BP_TrailsManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrailsManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TrailsManager.BP_TrailsManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrailsManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TrailsManager.BP_TrailsManager_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrailsManager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "ReceiveEndPlay");

	Params::BP_TrailsManager_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrailsManager.BP_TrailsManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrailsManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "ReceiveTick");

	Params::BP_TrailsManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrailsManager.BP_TrailsManager_C.RegisterTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Depth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Hardness                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrailsManager_C::RegisterTrail(const struct FVector& Location, double Radius, double Depth, double Hardness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "RegisterTrail");

	Params::BP_TrailsManager_C_RegisterTrail Parms{};

	Parms.Location = std::move(Location);
	Parms.Radius = Radius;
	Parms.Depth = Depth;
	Parms.Hardness = Hardness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrailsManager.BP_TrailsManager_C.RenderTrails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TrailsManager_C::RenderTrails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "RenderTrails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TrailsManager.BP_TrailsManager_C.VisualizeTrailComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TrailsManager_C::VisualizeTrailComponents(class AActor* Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailsManager_C", "VisualizeTrailComponents");

	Params::BP_TrailsManager_C_VisualizeTrailComponents Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}
