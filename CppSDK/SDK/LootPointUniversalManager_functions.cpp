#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootPointUniversalManager

#include "Basic.hpp"

#include "LootPointUniversalManager_classes.hpp"
#include "LootPointUniversalManager_parameters.hpp"


namespace SDK
{

// Function LootPointUniversalManager.LootPointUniversalManager_C.ActivateLootpoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ALootPoint_C*>             Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_HiddenLootPoints                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::ActivateLootpoints(TArray<class ALootPoint_C*>& Array, int32 Param_HiddenLootPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ActivateLootpoints");

	Params::LootPointUniversalManager_C_ActivateLootpoints Parms{};

	Parms.Array = std::move(Array);
	Parms.Param_HiddenLootPoints = Param_HiddenLootPoints;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALootPointUniversalManager_C::BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::LootPointUniversalManager_C_BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::LootPointUniversalManager_C_BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ChooseLootPointsServer
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::ChooseLootPointsServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ChooseLootPointsServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.CloseAllLootPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::CloseAllLootPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "CloseAllLootPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.EventCheckPlayersServer
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::EventCheckPlayersServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "EventCheckPlayersServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.EventTimerResetLoot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::EventTimerResetLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "EventTimerResetLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ExcludeLootpoints
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::ExcludeLootpoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ExcludeLootpoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ExecuteUbergraph_LootPointUniversalManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::ExecuteUbergraph_LootPointUniversalManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ExecuteUbergraph_LootPointUniversalManager");

	Params::LootPointUniversalManager_C_ExecuteUbergraph_LootPointUniversalManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.GetLootpointsInBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ALootPoint_C*>             Result                                                 (Parm, OutParm)

void ALootPointUniversalManager_C::GetLootpointsInBox(TArray<class ALootPoint_C*>* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "GetLootpointsInBox");

	Params::LootPointUniversalManager_C_GetLootpointsInBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.HiddenLootClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_HiddenLootPoints                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::HiddenLootClient(int32 Param_HiddenLootPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "HiddenLootClient");

	Params::LootPointUniversalManager_C_HiddenLootClient Parms{};

	Parms.Param_HiddenLootPoints = Param_HiddenLootPoints;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.HiddenLootMulti
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_HiddenLootPoints                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::HiddenLootMulti(int32 Param_HiddenLootPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "HiddenLootMulti");

	Params::LootPointUniversalManager_C_HiddenLootMulti Parms{};

	Parms.Param_HiddenLootPoints = Param_HiddenLootPoints;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.HiddenLootServer
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::HiddenLootServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "HiddenLootServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.InitChanceLootPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::InitChanceLootPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "InitChanceLootPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.InitLootpoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::InitLootpoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "InitLootpoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.Multicast_CloseAllDoors
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::Multicast_CloseAllDoors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "Multicast_CloseAllDoors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.MultiReset
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NeedReset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::MultiReset(bool NeedReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "MultiReset");

	Params::LootPointUniversalManager_C_MultiReset Parms{};

	Parms.NeedReset = NeedReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.OnRep_BeforePlayerItems
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::OnRep_BeforePlayerItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "OnRep_BeforePlayerItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.OnRep_HiddenLootPoints
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::OnRep_HiddenLootPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "OnRep_HiddenLootPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.OpenAllDoors_Client
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::OpenAllDoors_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "OpenAllDoors_Client");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.PercentCurrentItemsFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Output_Get                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::PercentCurrentItemsFunc(double* Output_Get)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "PercentCurrentItemsFunc");

	Params::LootPointUniversalManager_C_PercentCurrentItemsFunc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.PercentNotHidden
// (Public, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::PercentNotHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "PercentNotHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.RandomSpawnLootPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::RandomSpawnLootPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "RandomSpawnLootPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALootPointUniversalManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ReceiveTick");

	Params::LootPointUniversalManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ResetLootpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NeedReset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootPointUniversalManager_C::ResetLootpoints(bool NeedReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ResetLootpoints");

	Params::LootPointUniversalManager_C_ResetLootpoints Parms{};

	Parms.NeedReset = NeedReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::ResetTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "ResetTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.RunTimersOnServer
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::RunTimersOnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "RunTimersOnServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.TimeToReset
// (BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::TimeToReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "TimeToReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootPointUniversalManager.LootPointUniversalManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALootPointUniversalManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootPointUniversalManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
