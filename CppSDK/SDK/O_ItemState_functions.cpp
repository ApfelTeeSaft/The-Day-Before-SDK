#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: O_ItemState

#include "Basic.hpp"

#include "O_ItemState_classes.hpp"
#include "O_ItemState_parameters.hpp"


namespace SDK
{

// Function O_ItemState.O_ItemState_C.CopyItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UO_ItemState_C*                   CopiedItem                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UO_ItemState_C::CopyItem(class AActor* Owner, class UO_ItemState_C** CopiedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("O_ItemState_C", "CopyItem");

	Params::O_ItemState_C_CopyItem Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

	if (CopiedItem != nullptr)
		*CopiedItem = Parms.CopiedItem;
}


// Function O_ItemState.O_ItemState_C.ExecuteUbergraph_O_ItemState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UO_ItemState_C::ExecuteUbergraph_O_ItemState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("O_ItemState_C", "ExecuteUbergraph_O_ItemState");

	Params::O_ItemState_C_ExecuteUbergraph_O_ItemState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function O_ItemState.O_ItemState_C.GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SizeX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UO_ItemState_C::GetSize(int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("O_ItemState_C", "GetSize");

	Params::O_ItemState_C_GetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;
}


// Function O_ItemState.O_ItemState_C.Init
// (BlueprintCallable, BlueprintEvent)

void UO_ItemState_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("O_ItemState_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}
