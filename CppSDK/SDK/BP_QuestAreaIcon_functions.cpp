#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestAreaIcon

#include "Basic.hpp"

#include "BP_QuestAreaIcon_classes.hpp"
#include "BP_QuestAreaIcon_parameters.hpp"


namespace SDK
{

// Function BP_QuestAreaIcon.BP_QuestAreaIcon_C.ExecuteUbergraph_BP_QuestAreaIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuestAreaIcon_C::ExecuteUbergraph_BP_QuestAreaIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestAreaIcon_C", "ExecuteUbergraph_BP_QuestAreaIcon");

	Params::BP_QuestAreaIcon_C_ExecuteUbergraph_BP_QuestAreaIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestAreaIcon.BP_QuestAreaIcon_C.GetMapIconData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Param_Icon                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Param_IconSize                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RotationYaw                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           WorldActor                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (Parm, OutParm)
// class FText                             Description                                            (Parm, OutParm)

void ABP_QuestAreaIcon_C::GetMapIconData(struct FVector* Location, class UTexture2D** Param_Icon, struct FVector2D* Param_IconSize, double* RotationYaw, class AActor** WorldActor, class FText* Param_Name, class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestAreaIcon_C", "GetMapIconData");

	Params::BP_QuestAreaIcon_C_GetMapIconData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Param_Icon != nullptr)
		*Param_Icon = Parms.Param_Icon;

	if (Param_IconSize != nullptr)
		*Param_IconSize = std::move(Parms.Param_IconSize);

	if (RotationYaw != nullptr)
		*RotationYaw = Parms.RotationYaw;

	if (WorldActor != nullptr)
		*WorldActor = Parms.WorldActor;

	if (Param_Name != nullptr)
		*Param_Name = std::move(Parms.Param_Name);

	if (Description != nullptr)
		*Description = std::move(Parms.Description);
}


// Function BP_QuestAreaIcon.BP_QuestAreaIcon_C.UpdateIconPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuestAreaIcon_C::UpdateIconPosition(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestAreaIcon_C", "UpdateIconPosition");

	Params::BP_QuestAreaIcon_C_UpdateIconPosition Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestAreaIcon.BP_QuestAreaIcon_C.Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuestAreaIcon_C::Zoom(bool Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestAreaIcon_C", "Zoom");

	Params::BP_QuestAreaIcon_C_Zoom Parms{};

	Parms.Out = Out;

	UObject::ProcessEvent(Func, &Parms);
}

}

