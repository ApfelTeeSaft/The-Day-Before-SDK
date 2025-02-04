#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MPContainerWidget_v2

#include "Basic.hpp"

#include "MPContainerWidget_v2_classes.hpp"
#include "MPContainerWidget_v2_parameters.hpp"


namespace SDK
{

// Function MPContainerWidget_v2.MPContainerWidget_v2_C.AddItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWBP_LootEntry_C*                 EntryRef                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::AddItem(const struct FFItemInfo& ItemInfo, class UWBP_LootEntry_C** EntryRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "AddItem");

	Params::MPContainerWidget_v2_C_AddItem Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (EntryRef != nullptr)
		*EntryRef = Parms.EntryRef;
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UMPContainerWidget_v2_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.EntryDragged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LootEntry_C*                 EntryRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::EntryDragged(class UWBP_LootEntry_C* EntryRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "EntryDragged");

	Params::MPContainerWidget_v2_C_EntryDragged Parms{};

	Parms.EntryRef = EntryRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.ExecuteUbergraph_MPContainerWidget_v2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::ExecuteUbergraph_MPContainerWidget_v2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "ExecuteUbergraph_MPContainerWidget_v2");

	Params::MPContainerWidget_v2_C_ExecuteUbergraph_MPContainerWidget_v2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.OnContainerDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*                  FromContainerRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                      FromSlotRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_LootEntry_C*                 ToEntryRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                      ToSlotRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::OnContainerDropped__DelegateSignature(class UJSIContainer_C* FromContainerRef, class UJSI_Slot_C* FromSlotRef, class UWBP_LootEntry_C* ToEntryRef, class UJSI_Slot_C* ToSlotRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "OnContainerDropped__DelegateSignature");

	Params::MPContainerWidget_v2_C_OnContainerDropped__DelegateSignature Parms{};

	Parms.FromContainerRef = FromContainerRef;
	Parms.FromSlotRef = FromSlotRef;
	Parms.ToEntryRef = ToEntryRef;
	Parms.ToSlotRef = ToSlotRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UMPContainerWidget_v2_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "OnDrop");

	Params::MPContainerWidget_v2_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.OnEntryDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LootEntry_C*                 EntryRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::OnEntryDragged__DelegateSignature(class UWBP_LootEntry_C* EntryRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "OnEntryDragged__DelegateSignature");

	Params::MPContainerWidget_v2_C_OnEntryDragged__DelegateSignature Parms{};

	Parms.EntryRef = EntryRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MPContainerWidget_v2.MPContainerWidget_v2_C.RemoveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UMPContainerWidget_v2_C::RemoveItem(const struct FFItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MPContainerWidget_v2_C", "RemoveItem");

	Params::MPContainerWidget_v2_C_RemoveItem Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

