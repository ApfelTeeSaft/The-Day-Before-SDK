#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FootprintInterface

#include "Basic.hpp"

#include "FootprintInterface_classes.hpp"
#include "FootprintInterface_parameters.hpp"


namespace SDK
{

// Function FootprintInterface.FootprintInterface_C.ChangeFootState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFootState                              New_Style                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFootprintInterface_C::ChangeFootState(EFootState New_Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FootprintInterface_C", "ChangeFootState");

	Params::FootprintInterface_C_ChangeFootState Parms{};

	Parms.New_Style = New_Style;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FootprintInterface.FootprintInterface_C.SpawnFootprintDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Right                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFootprintInterface_C::SpawnFootprintDecal(class FName SocketName, bool Right, bool Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FootprintInterface_C", "SpawnFootprintDecal");

	Params::FootprintInterface_C_SpawnFootprintDecal Parms{};

	Parms.SocketName = SocketName;
	Parms.Right = Right;
	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);
}

}
