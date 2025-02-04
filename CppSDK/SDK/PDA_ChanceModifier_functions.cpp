#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_ChanceModifier

#include "Basic.hpp"

#include "PDA_ChanceModifier_classes.hpp"
#include "PDA_ChanceModifier_parameters.hpp"


namespace SDK
{

// Function PDA_ChanceModifier.PDA_ChanceModifier_C.GetCalculatedChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Chance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LootChanceModifier            LootChanceMod                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Food                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Drink                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Aid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Pistol                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rifle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Shotgun                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Backpack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MeleeAndWeapon                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_ChanceModifier_C::GetCalculatedChance(int32 Chance, const struct FS_LootChanceModifier& LootChanceMod, int32* Food, int32* Drink, int32* Aid, int32* Pistol, int32* Rifle, int32* Shotgun, int32* Backpack, int32* MeleeAndWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PDA_ChanceModifier_C", "GetCalculatedChance");

	Params::PDA_ChanceModifier_C_GetCalculatedChance Parms{};

	Parms.Chance = Chance;
	Parms.LootChanceMod = std::move(LootChanceMod);

	UObject::ProcessEvent(Func, &Parms);

	if (Food != nullptr)
		*Food = Parms.Food;

	if (Drink != nullptr)
		*Drink = Parms.Drink;

	if (Aid != nullptr)
		*Aid = Parms.Aid;

	if (Pistol != nullptr)
		*Pistol = Parms.Pistol;

	if (Rifle != nullptr)
		*Rifle = Parms.Rifle;

	if (Shotgun != nullptr)
		*Shotgun = Parms.Shotgun;

	if (Backpack != nullptr)
		*Backpack = Parms.Backpack;

	if (MeleeAndWeapon != nullptr)
		*MeleeAndWeapon = Parms.MeleeAndWeapon;
}

}

