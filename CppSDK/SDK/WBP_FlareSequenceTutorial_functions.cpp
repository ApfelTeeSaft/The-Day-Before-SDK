#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FlareSequenceTutorial

#include "Basic.hpp"

#include "WBP_FlareSequenceTutorial_classes.hpp"
#include "WBP_FlareSequenceTutorial_parameters.hpp"


namespace SDK
{

// Function WBP_FlareSequenceTutorial.WBP_FlareSequenceTutorial_C.ExecuteUbergraph_WBP_FlareSequenceTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlareSequenceTutorial_C::ExecuteUbergraph_WBP_FlareSequenceTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlareSequenceTutorial_C", "ExecuteUbergraph_WBP_FlareSequenceTutorial");

	Params::WBP_FlareSequenceTutorial_C_ExecuteUbergraph_WBP_FlareSequenceTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FlareSequenceTutorial.WBP_FlareSequenceTutorial_C.Finished_89CA5B88437C86A4C0E7C28DA037F846
// (BlueprintCallable, BlueprintEvent)

void UWBP_FlareSequenceTutorial_C::Finished_89CA5B88437C86A4C0E7C28DA037F846()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlareSequenceTutorial_C", "Finished_89CA5B88437C86A4C0E7C28DA037F846");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FlareSequenceTutorial.WBP_FlareSequenceTutorial_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Show                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlareSequenceTutorial_C::Show(bool Param_Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlareSequenceTutorial_C", "Show");

	Params::WBP_FlareSequenceTutorial_C_Show Parms{};

	Parms.Param_Show = Param_Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FlareSequenceTutorial.WBP_FlareSequenceTutorial_C.ShowLogo_Fntastic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlareSequenceTutorial_C::ShowLogo_Fntastic(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlareSequenceTutorial_C", "ShowLogo_Fntastic");

	Params::WBP_FlareSequenceTutorial_C_ShowLogo_Fntastic Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FlareSequenceTutorial.WBP_FlareSequenceTutorial_C.ShowLogo_MyTona
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlareSequenceTutorial_C::ShowLogo_MyTona(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlareSequenceTutorial_C", "ShowLogo_MyTona");

	Params::WBP_FlareSequenceTutorial_C_ShowLogo_MyTona Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

}
