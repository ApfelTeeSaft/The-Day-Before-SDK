#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModeCategoryRow

#include "Basic.hpp"

#include "WBP_ModeCategoryRow_classes.hpp"
#include "WBP_ModeCategoryRow_parameters.hpp"


namespace SDK
{

// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.ActiveModeCategoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ModeCategoryRow_C*           NewActiveModeCategory                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::ActiveModeCategoryChanged(class UWBP_ModeCategoryRow_C* NewActiveModeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "ActiveModeCategoryChanged");

	Params::WBP_ModeCategoryRow_C_ActiveModeCategoryChanged Parms{};

	Parms.NewActiveModeCategory = NewActiveModeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.AddAttachmentByModeName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewModeName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       WeaponInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::AddAttachmentByModeName(class FName NewModeName, struct FFItemInfo& WeaponInfo, class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "AddAttachmentByModeName");

	Params::WBP_ModeCategoryRow_C_AddAttachmentByModeName Parms{};

	Parms.NewModeName = NewModeName;
	Parms.WeaponInfo = std::move(WeaponInfo);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	WeaponInfo = std::move(Parms.WeaponInfo);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.BndEvt__WBP_ModeCategoryComboBox_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeCategoryRow_C::BndEvt__WBP_ModeCategoryComboBox_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "BndEvt__WBP_ModeCategoryComboBox_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeCategoryRow_C::BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeCategoryRow_C::BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "BndEvt__WBP_ModeCategoryRow_Button_ModeCategory_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.CheckMode
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       Weapon_Info                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::CheckMode(const struct FFItemInfo& Weapon_Info, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "CheckMode");

	Params::WBP_ModeCategoryRow_C_CheckMode Parms{};

	Parms.Weapon_Info = std::move(Weapon_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.CollapseCombobox
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModeCategoryRow_C::CollapseCombobox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "CollapseCombobox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModeCategoryRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.Create Mode Rows
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasSupportModes                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::Create_Mode_Rows(bool* HasSupportModes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "Create Mode Rows");

	Params::WBP_ModeCategoryRow_C_Create_Mode_Rows Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasSupportModes != nullptr)
		*HasSupportModes = Parms.HasSupportModes;
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.Deselect
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModeCategoryRow_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "Deselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.ExecuteUbergraph_WBP_ModeCategoryRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::ExecuteUbergraph_WBP_ModeCategoryRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "ExecuteUbergraph_WBP_ModeCategoryRow");

	Params::WBP_ModeCategoryRow_C_ExecuteUbergraph_WBP_ModeCategoryRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.ExpandCombobox
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ModeCategoryRow_C::ExpandCombobox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "ExpandCombobox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.GetDefaultModeName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       WeaponInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// E_TypesOfModes                          ModeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::GetDefaultModeName(const struct FFItemInfo& WeaponInfo, E_TypesOfModes ModeType, class FName* Param_Name, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "GetDefaultModeName");

	Params::WBP_ModeCategoryRow_C_GetDefaultModeName Parms{};

	Parms.WeaponInfo = std::move(WeaponInfo);
	Parms.ModeType = ModeType;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name != nullptr)
		*Param_Name = Parms.Param_Name;

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.GetInventoryItemInfoByModeName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    WasFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       Mode_Info                                              (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::GetInventoryItemInfoByModeName(class FName ModeName, class ASurvivalPlayer_C* Player, bool* WasFound, struct FFItemInfo* Mode_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "GetInventoryItemInfoByModeName");

	Params::WBP_ModeCategoryRow_C_GetInventoryItemInfoByModeName Parms{};

	Parms.ModeName = ModeName;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (WasFound != nullptr)
		*WasFound = Parms.WasFound;

	if (Mode_Info != nullptr)
		*Mode_Info = std::move(Parms.Mode_Info);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.GetNameAttacmentsByModeType
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TypesOfModes                          ModeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       Weapon_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    IsFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ModeName                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::GetNameAttacmentsByModeType(E_TypesOfModes ModeType, const struct FFItemInfo& Weapon_Info, bool* IsFound, class FName* ModeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "GetNameAttacmentsByModeType");

	Params::WBP_ModeCategoryRow_C_GetNameAttacmentsByModeType Parms{};

	Parms.ModeType = ModeType;
	Parms.Weapon_Info = std::move(Weapon_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (ModeName != nullptr)
		*ModeName = Parms.ModeName;
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.OnActiveModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ModeRow_C*                   ModeWidgetRef                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       ModeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::OnActiveModeChanged__DelegateSignature(class UWBP_ModeRow_C* ModeWidgetRef, const struct FFItemInfo& ModeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "OnActiveModeChanged__DelegateSignature");

	Params::WBP_ModeCategoryRow_C_OnActiveModeChanged__DelegateSignature Parms{};

	Parms.ModeWidgetRef = ModeWidgetRef;
	Parms.ModeInfo = std::move(ModeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.OnActiveModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ModeRow_C*                   ModeWidgetRef                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       ModeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::OnActiveModeChanged_Event(class UWBP_ModeRow_C* ModeWidgetRef, const struct FFItemInfo& ModeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "OnActiveModeChanged_Event");

	Params::WBP_ModeCategoryRow_C_OnActiveModeChanged_Event Parms{};

	Parms.ModeWidgetRef = ModeWidgetRef;
	Parms.ModeInfo = std::move(ModeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.OnWeaponRowCollapsed_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModeCategoryRow_C::OnWeaponRowCollapsed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "OnWeaponRowCollapsed_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.PrintCurrentModeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       Param_Wepon_Info                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::PrintCurrentModeName(const struct FFItemInfo& Param_Wepon_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "PrintCurrentModeName");

	Params::WBP_ModeCategoryRow_C_PrintCurrentModeName Parms{};

	Parms.Param_Wepon_Info = std::move(Param_Wepon_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.PrintModeNames
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       Param_Wepon_Info                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::PrintModeNames(const struct FFItemInfo& Param_Wepon_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "PrintModeNames");

	Params::WBP_ModeCategoryRow_C_PrintModeNames Parms{};

	Parms.Param_Wepon_Info = std::move(Param_Wepon_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.RemoveAttachmentByModeName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ModeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       Weapon_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::RemoveAttachmentByModeName(class FName ModeName, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "RemoveAttachmentByModeName");

	Params::WBP_ModeCategoryRow_C_RemoveAttachmentByModeName Parms{};

	Parms.ModeName = ModeName;
	Parms.Weapon_Info = std::move(Weapon_Info);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	Weapon_Info = std::move(Parms.Weapon_Info);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.RemoveAttachmentByModeType
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TypesOfModes                          ModeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       Weapon_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::RemoveAttachmentByModeType(E_TypesOfModes ModeType, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "RemoveAttachmentByModeType");

	Params::WBP_ModeCategoryRow_C_RemoveAttachmentByModeType Parms{};

	Parms.ModeType = ModeType;
	Parms.Weapon_Info = std::move(Weapon_Info);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	Weapon_Info = std::move(Parms.Weapon_Info);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.Set Default Mode
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TypesOfModes                          ModeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       Weapon_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::Set_Default_Mode(E_TypesOfModes ModeType, struct FFItemInfo& Weapon_Info, class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "Set Default Mode");

	Params::WBP_ModeCategoryRow_C_Set_Default_Mode Parms{};

	Parms.ModeType = ModeType;
	Parms.Weapon_Info = std::move(Weapon_Info);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	Weapon_Info = std::move(Parms.Weapon_Info);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.Switch Mode
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewModeName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TypesOfModes                          ModeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       WeaponInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::Switch_Mode(class FName NewModeName, E_TypesOfModes ModeType, struct FFItemInfo& WeaponInfo, class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "Switch Mode");

	Params::WBP_ModeCategoryRow_C_Switch_Mode Parms{};

	Parms.NewModeName = NewModeName;
	Parms.ModeType = ModeType;
	Parms.WeaponInfo = std::move(WeaponInfo);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	WeaponInfo = std::move(Parms.WeaponInfo);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.UpdateInfo
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::UpdateInfo(struct FFItemInfo& ItemInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "UpdateInfo");

	Params::WBP_ModeCategoryRow_C_UpdateInfo Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	ItemInfo = std::move(Parms.ItemInfo);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.UpdateWeaponInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       Param_Wepon_Info                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::UpdateWeaponInfo(const struct FFItemInfo& Param_Wepon_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "UpdateWeaponInfo");

	Params::WBP_ModeCategoryRow_C_UpdateWeaponInfo Parms{};

	Parms.Param_Wepon_Info = std::move(Param_Wepon_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeCategoryRow.WBP_ModeCategoryRow_C.HaveSupportModsBeenFound?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeCategoryRow_C::HaveSupportModsBeenFound_(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeCategoryRow_C", "HaveSupportModsBeenFound?");

	Params::WBP_ModeCategoryRow_C_HaveSupportModsBeenFound_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

