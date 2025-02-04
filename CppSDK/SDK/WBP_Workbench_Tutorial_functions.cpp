#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Workbench_Tutorial

#include "Basic.hpp"

#include "WBP_Workbench_Tutorial_classes.hpp"
#include "WBP_Workbench_Tutorial_parameters.hpp"


namespace SDK
{

// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.BindItemCraft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBind                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::BindItemCraft(bool bBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "BindItemCraft");

	Params::WBP_Workbench_Tutorial_C_BindItemCraft Parms{};

	Parms.bBind = bBind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.CompleteCraftAmmoStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StageName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::CompleteCraftAmmoStage(const class FString& StageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "CompleteCraftAmmoStage");

	Params::WBP_Workbench_Tutorial_C_CompleteCraftAmmoStage Parms{};

	Parms.StageName = std::move(StageName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.CompleteModificationStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StageName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::CompleteModificationStage(const class FString& StageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "CompleteModificationStage");

	Params::WBP_Workbench_Tutorial_C_CompleteModificationStage Parms{};

	Parms.StageName = std::move(StageName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.CraftFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::CraftFinished(const struct FFItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "CraftFinished");

	Params::WBP_Workbench_Tutorial_C_CraftFinished Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.ExecuteUbergraph_WBP_Workbench_Tutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::ExecuteUbergraph_WBP_Workbench_Tutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "ExecuteUbergraph_WBP_Workbench_Tutorial");

	Params::WBP_Workbench_Tutorial_C_ExecuteUbergraph_WBP_Workbench_Tutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.Find Attachment Cell to Point
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::Find_Attachment_Cell_to_Point()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "Find Attachment Cell to Point");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.FindAttachmentTagToInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::FindAttachmentTagToInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "FindAttachmentTagToInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.FindCraftRowToPoint
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::FindCraftRowToPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "FindCraftRowToPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.FindElementToPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::FindElementToPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "FindElementToPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.FindRequiredCraftEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockAll                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::FindRequiredCraftEntry(bool LockAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "FindRequiredCraftEntry");

	Params::WBP_Workbench_Tutorial_C_FindRequiredCraftEntry Parms{};

	Parms.LockAll = LockAll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.GetvalidAttachmentTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ModeCategoryTag_C*           Array_Element                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Interrupt                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::GetvalidAttachmentTag(class UWBP_ModeCategoryTag_C** Array_Element, bool* Interrupt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "GetvalidAttachmentTag");

	Params::WBP_Workbench_Tutorial_C_GetvalidAttachmentTag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;

	if (Interrupt != nullptr)
		*Interrupt = Parms.Interrupt;
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.IniModificationTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::IniModificationTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "IniModificationTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.LockAttachments
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::LockAttachments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "LockAttachments");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.OnCategoryChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::OnCategoryChanged_Event(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "OnCategoryChanged_Event");

	Params::WBP_Workbench_Tutorial_C_OnCategoryChanged_Event Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.PointToExit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::PointToExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "PointToExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.SetDesiredCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::SetDesiredCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "SetDesiredCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.ShowCategoryPointerHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentCategoryIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::ShowCategoryPointerHint(int32 CurrentCategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "ShowCategoryPointerHint");

	Params::WBP_Workbench_Tutorial_C_ShowCategoryPointerHint Parms{};

	Parms.CurrentCategoryIndex = CurrentCategoryIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.ShowCategoryPointerHint_Timer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::ShowCategoryPointerHint_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "ShowCategoryPointerHint_Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.ShowHintWithCurrentCategory
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::ShowHintWithCurrentCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "ShowHintWithCurrentCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.WeaponRowChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WeaponRow_C*                 WeaponRowRef                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::WeaponRowChanged(class UWBP_WeaponRow_C* WeaponRowRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "WeaponRowChanged");

	Params::WBP_Workbench_Tutorial_C_WeaponRowChanged Parms{};

	Parms.WeaponRowRef = WeaponRowRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.WeaponRowChanged_Timer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::WeaponRowChanged_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "WeaponRowChanged_Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.WeaponTabUpdateAvaliableTags
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::WeaponTabUpdateAvaliableTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "WeaponTabUpdateAvaliableTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.WeaponTagSelected
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::WeaponTagSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "WeaponTagSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.WeaponTagSelected_Timer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::WeaponTagSelected_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "WeaponTagSelected_Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.CheckDismantleItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::CheckDismantleItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "CheckDismantleItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.CloseWorkbench
// (BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::CloseWorkbench()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "CloseWorkbench");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.NavigationExit
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Workbench_Tutorial_C::NavigationExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "NavigationExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Workbench_Tutorial.WBP_Workbench_Tutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Workbench_Tutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Workbench_Tutorial_C", "PreConstruct");

	Params::WBP_Workbench_Tutorial_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

