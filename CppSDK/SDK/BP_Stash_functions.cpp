#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stash

#include "Basic.hpp"

#include "BP_Stash_classes.hpp"
#include "BP_Stash_parameters.hpp"


namespace SDK
{

// Function BP_Stash.BP_Stash_C.BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Stash_C::BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Stash_C_BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.BndEvt__BP_Stash_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::BndEvt__BP_Stash_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "BndEvt__BP_Stash_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_Stash_C_BndEvt__BP_Stash_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.CloseStash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FString                           StageName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Stash_C::CloseStash(const struct FGameplayTag& GameplayTag, const class FString& StageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "CloseStash");

	Params::BP_Stash_C_CloseStash Parms{};

	Parms.GameplayTag = std::move(GameplayTag);
	Parms.StageName = std::move(StageName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.DestroyADSComponent
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::DestroyADSComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "DestroyADSComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.EventOnCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::EventOnCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "EventOnCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.ExecuteUbergraph_BP_Stash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::ExecuteUbergraph_BP_Stash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "ExecuteUbergraph_BP_Stash");

	Params::BP_Stash_C_ExecuteUbergraph_BP_Stash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.FindEmptyInventorySlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                      Slot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::FindEmptyInventorySlot(class UJSI_Slot_C** Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "FindEmptyInventorySlot");

	Params::BP_Stash_C_FindEmptyInventorySlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;
}


// Function BP_Stash.BP_Stash_C.Get Real Stash Money
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::Get_Real_Stash_Money()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "Get Real Stash Money");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "GetActorType");

	Params::BP_Stash_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function BP_Stash.BP_Stash_C.GetAfterRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bAfterRaid                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::GetAfterRaid(bool* Param_bAfterRaid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "GetAfterRaid");

	Params::BP_Stash_C_GetAfterRaid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bAfterRaid != nullptr)
		*Param_bAfterRaid = Parms.Param_bAfterRaid;
}


// Function BP_Stash.BP_Stash_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::HideHUD(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "HideHUD");

	Params::BP_Stash_C_HideHUD Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.InitStashItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::InitStashItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "InitStashItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.InventoryClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::InventoryClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "InventoryClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.IsContainerEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*                  Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::IsContainerEmpty(class UJSIContainer_C* Container, bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "IsContainerEmpty");

	Params::BP_Stash_C_IsContainerEmpty Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}


// Function BP_Stash.BP_Stash_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "IsLocked?");

	Params::BP_Stash_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Stash.BP_Stash_C.IsSomethingOnA Way
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Stash_C::IsSomethingOnA_Way()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "IsSomethingOnA Way");

	Params::BP_Stash_C_IsSomethingOnA_Way Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Stash.BP_Stash_C.LoadStash
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::LoadStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "LoadStash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.MoveInCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::MoveInCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "MoveInCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.MoveOutCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::MoveOutCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "MoveOutCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.NPC Voice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::NPC_Voice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "NPC Voice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnBeginInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnBeginInteract");

	Params::BP_Stash_C_OnBeginInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnBlendOut_403AC92945639D9E740748A0868C4A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnBlendOut_403AC92945639D9E740748A0868C4A42(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnBlendOut_403AC92945639D9E740748A0868C4A42");

	Params::BP_Stash_C_OnBlendOut_403AC92945639D9E740748A0868C4A42 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnCloseStash__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OnCloseStash__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnCloseStash__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnCompleted_403AC92945639D9E740748A0868C4A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnCompleted_403AC92945639D9E740748A0868C4A42(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnCompleted_403AC92945639D9E740748A0868C4A42");

	Params::BP_Stash_C_OnCompleted_403AC92945639D9E740748A0868C4A42 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnDialogueEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OnDialogueEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnDialogueEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnFadeAnimationStarted_Callback
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OnFadeAnimationStarted_Callback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnFadeAnimationStarted_Callback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnFocused
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnFocused(class APawn* Param_Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnFocused");

	Params::BP_Stash_C_OnFocused Parms{};

	Parms.Param_Player = Param_Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function BP_Stash.BP_Stash_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInteract");

	Params::BP_Stash_C_OnInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnInteract2(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInteract2");

	Params::BP_Stash_C_OnInteract2 Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnInteract3(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInteract3");

	Params::BP_Stash_C_OnInteract3 Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnInteracted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OnInteracted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInteracted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnInteractVehicle(class APawn* Param_Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInteractVehicle");

	Params::BP_Stash_C_OnInteractVehicle Parms{};

	Parms.Param_Player = Param_Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnInterrupted_403AC92945639D9E740748A0868C4A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnInterrupted_403AC92945639D9E740748A0868C4A42(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnInterrupted_403AC92945639D9E740748A0868C4A42");

	Params::BP_Stash_C_OnInterrupted_403AC92945639D9E740748A0868C4A42 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnLocalInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnLocalInteract");

	Params::BP_Stash_C_OnLocalInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnLostFocus(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnLostFocus");

	Params::BP_Stash_C_OnLostFocus Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnNotifyBegin_403AC92945639D9E740748A0868C4A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnNotifyBegin_403AC92945639D9E740748A0868C4A42(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnNotifyBegin_403AC92945639D9E740748A0868C4A42");

	Params::BP_Stash_C_OnNotifyBegin_403AC92945639D9E740748A0868C4A42 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnNotifyEnd_403AC92945639D9E740748A0868C4A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnNotifyEnd_403AC92945639D9E740748A0868C4A42(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnNotifyEnd_403AC92945639D9E740748A0868C4A42");

	Params::BP_Stash_C_OnNotifyEnd_403AC92945639D9E740748A0868C4A42 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnSeen(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnSeen");

	Params::BP_Stash_C_OnSeen Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::OnStopInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnStopInteract");

	Params::BP_Stash_C_OnStopInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OnTutorStageUpdated_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TutorialStage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Stash_C::OnTutorStageUpdated_Event(const class FString& TutorialStage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OnTutorStageUpdated_Event");

	Params::BP_Stash_C_OnTutorStageUpdated_Event Parms{};

	Parms.TutorialStage = std::move(TutorialStage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.OpenStash
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::OpenStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "OpenStash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.PlayHeadAnimationMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     MontageToPlay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::PlayHeadAnimationMontage(class UAnimMontage* MontageToPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "PlayHeadAnimationMontage");

	Params::BP_Stash_C_PlayHeadAnimationMontage Parms{};

	Parms.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Stash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.Reset Timer
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::Reset_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "Reset Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.RespawnADSComponent
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::RespawnADSComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "RespawnADSComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.SaveStash
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::SaveStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "SaveStash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "Set3DWidgetVisibility");

	Params::BP_Stash_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.SetAfterRaid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bAfterRaid                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::SetAfterRaid(bool Param_bAfterRaid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "SetAfterRaid");

	Params::BP_Stash_C_SetAfterRaid Parms{};

	Parms.Param_bAfterRaid = Param_bAfterRaid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.SetDialogueCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::SetDialogueCamera(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "SetDialogueCamera");

	Params::BP_Stash_C_SetDialogueCamera Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.SetStashCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::SetStashCamera(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "SetStashCamera");

	Params::BP_Stash_C_SetStashCamera Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "SetTutorial3DWidgetVisibility");

	Params::BP_Stash_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.showStash
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::ShowStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "showStash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.ShowTutorialSlides
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::ShowTutorialSlides()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "ShowTutorialSlides");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.ShowTutorialStorage
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::ShowTutorialStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "ShowTutorialStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.StartDialogue
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::StartDialogue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "StartDialogue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.StashUpdateBind
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::StashUpdateBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "StashUpdateBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.StopHeadAnimationMontage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::StopHeadAnimationMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "StopHeadAnimationMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stash.BP_Stash_C.TrailerOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Stash_C::TrailerOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "TrailerOn");

	UObject::ProcessEvent(Func, nullptr);
}

}
