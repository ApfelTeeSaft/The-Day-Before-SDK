#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WDG_MapIcon

#include "Basic.hpp"

#include "WDG_MapIcon_classes.hpp"
#include "WDG_MapIcon_parameters.hpp"


namespace SDK
{

// Function WDG_MapIcon.WDG_MapIcon_C.DestractX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Zoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::DestractX(double Zoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "DestractX");

	Params::WDG_MapIcon_C_DestractX Parms{};

	Parms.Zoom = Zoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.DestractY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Zoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::DestractY(double Zoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "DestractY");

	Params::WDG_MapIcon_C_DestractY Parms{};

	Parms.Zoom = Zoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.ExecuteUbergraph_WDG_MapIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::ExecuteUbergraph_WDG_MapIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "ExecuteUbergraph_WDG_MapIcon");

	Params::WDG_MapIcon_C_ExecuteUbergraph_WDG_MapIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.InitIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_WorldActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWDG_MapIcon_C::InitIcon(class UTexture2D* Texture, class AActor* Param_WorldActor, const class FText& Param_Name, const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "InitIcon");

	Params::WDG_MapIcon_C_InitIcon Parms{};

	Parms.Texture = Texture;
	Parms.Param_WorldActor = Param_WorldActor;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.SetIconPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Zoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MapSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::SetIconPosition(double A, double Zoom, const struct FVector2D& MapSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "SetIconPosition");

	Params::WDG_MapIcon_C_SetIconPosition Parms{};

	Parms.A = A;
	Parms.Zoom = Zoom;
	Parms.MapSize = std::move(MapSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.SetIconRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::SetIconRotation(double Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "SetIconRotation");

	Params::WDG_MapIcon_C_SetIconRotation Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WDG_MapIcon.WDG_MapIcon_C.TestMapShift
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ShiftX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ShiftY                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWDG_MapIcon_C::TestMapShift(double ShiftX, double ShiftY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WDG_MapIcon_C", "TestMapShift");

	Params::WDG_MapIcon_C_TestMapShift Parms{};

	Parms.ShiftX = ShiftX;
	Parms.ShiftY = ShiftY;

	UObject::ProcessEvent(Func, &Parms);
}

}

