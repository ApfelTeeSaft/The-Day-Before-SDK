#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParentZombieAI

#include "Basic.hpp"

#include "ParentZombieAI_classes.hpp"
#include "ParentZombieAI_parameters.hpp"


namespace SDK
{

// Function ParentZombieAI.ParentZombieAI_C.CalcAccelDecel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Default_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxAcceleration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BrakingDecelerationWalking                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::CalcAccelDecel(bool Default_, double MaxAcceleration, double BrakingDecelerationWalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "CalcAccelDecel");

	Params::ParentZombieAI_C_CalcAccelDecel Parms{};

	Parms.Default_ = Default_;
	Parms.MaxAcceleration = MaxAcceleration;
	Parms.BrakingDecelerationWalking = BrakingDecelerationWalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.CalculateFacingDirection
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AParentZombieAI_C::CalculateFacingDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "CalculateFacingDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.ChanceToKnock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HitAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Weight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBPE_Weapon_Type                        Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RandomInteger                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::ChanceToKnock(double HitAngle, const struct FVector& HitLocation, class FName BoneName, double Weight, EBPE_Weapon_Type Selection, int32 RandomInteger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ChanceToKnock");

	Params::ParentZombieAI_C_ChanceToKnock Parms{};

	Parms.HitAngle = HitAngle;
	Parms.HitLocation = std::move(HitLocation);
	Parms.BoneName = BoneName;
	Parms.Weight = Weight;
	Parms.Selection = Selection;
	Parms.RandomInteger = RandomInteger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.ChanceToStun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HitAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Weight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RandomInteger                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::ChanceToStun(double HitAngle, double Weight, class FName BoneName, int32 RandomInteger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ChanceToStun");

	Params::ParentZombieAI_C_ChanceToStun Parms{};

	Parms.HitAngle = HitAngle;
	Parms.Weight = Weight;
	Parms.BoneName = BoneName;
	Parms.RandomInteger = RandomInteger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.ClimbCheck_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentZombieAI_C::ClimbCheck_New()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ClimbCheck_New");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.ClimbStart_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FComponentAndTransform           ClimbLedgeWS                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// EClimbType                              Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Move                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Param_ClimbStartTransform                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::ClimbStart_New(double Height, const struct FComponentAndTransform& ClimbLedgeWS, EClimbType Type, bool In, double Width, bool Move, const struct FTransform& Param_ClimbStartTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ClimbStart_New");

	Params::ParentZombieAI_C_ClimbStart_New Parms{};

	Parms.Height = Height;
	Parms.ClimbLedgeWS = std::move(ClimbLedgeWS);
	Parms.Type = Type;
	Parms.In = In;
	Parms.Width = Width;
	Parms.Move = Move;
	Parms.Param_ClimbStartTransform = std::move(Param_ClimbStartTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.ClimbUpdate_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentZombieAI_C::ClimbUpdate_New()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ClimbUpdate_New");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.ExecuteUbergraph_ParentZombieAI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::ExecuteUbergraph_ParentZombieAI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "ExecuteUbergraph_ParentZombieAI");

	Params::ParentZombieAI_C_ExecuteUbergraph_ParentZombieAI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.GetCapsuleBaseLocation
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ZOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::GetCapsuleBaseLocation(double ZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "GetCapsuleBaseLocation");

	Params::ParentZombieAI_C_GetCapsuleBaseLocation Parms{};

	Parms.ZOffset = ZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.GetClimbAsset
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EClimbType                              ClimbType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::GetClimbAsset(EClimbType ClimbType, bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "GetClimbAsset");

	Params::ParentZombieAI_C_GetClimbAsset Parms{};

	Parms.ClimbType = ClimbType;
	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.HeadStunFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBPE_Weapon_Type                        Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HitAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RandomInteger                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::HeadStunFunc(EBPE_Weapon_Type Selection, double HitAngle, class FName BoneName, int32 RandomInteger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "HeadStunFunc");

	Params::ParentZombieAI_C_HeadStunFunc Parms{};

	Parms.Selection = Selection;
	Parms.HitAngle = HitAngle;
	Parms.BoneName = BoneName;
	Parms.RandomInteger = RandomInteger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.Hide Bone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::Hide_Bone(class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "Hide Bone");

	Params::ParentZombieAI_C_Hide_Bone Parms{};

	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.HouseBoxEntered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHouseBox_C*                      HouseBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::HouseBoxEntered(class AHouseBox_C* HouseBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "HouseBoxEntered");

	Params::ParentZombieAI_C_HouseBoxEntered Parms{};

	Parms.HouseBox = HouseBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.HouseBoxLeaved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHouseBox_C*                      HouseBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::HouseBoxLeaved(class AHouseBox_C* HouseBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "HouseBoxLeaved");

	Params::ParentZombieAI_C_HouseBoxLeaved Parms{};

	Parms.HouseBox = HouseBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.IsPlayingAttackMontage?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsPlaying_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::IsPlayingAttackMontage_(bool* IsPlaying_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "IsPlayingAttackMontage?");

	Params::ParentZombieAI_C_IsPlayingAttackMontage_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying_ != nullptr)
		*IsPlaying_ = Parms.IsPlaying_;
}


// Function ParentZombieAI.ParentZombieAI_C.IsPlayingHitMontage?
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AParentZombieAI_C::IsPlayingHitMontage_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "IsPlayingHitMontage?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.KnockWithChanceFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBPE_Weapon_Type                        Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HitAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RandomInteger                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::KnockWithChanceFunc(EBPE_Weapon_Type Selection, double HitAngle, const struct FVector& HitLocation, class FName BoneName, int32 RandomInteger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "KnockWithChanceFunc");

	Params::ParentZombieAI_C_KnockWithChanceFunc Parms{};

	Parms.Selection = Selection;
	Parms.HitAngle = HitAngle;
	Parms.HitLocation = std::move(HitLocation);
	Parms.BoneName = BoneName;
	Parms.RandomInteger = RandomInteger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.OnRep_WalkType
// (BlueprintCallable, BlueprintEvent)

void AParentZombieAI_C::OnRep_WalkType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "OnRep_WalkType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.SetMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AParentZombieAI_C::SetMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "SetMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.SetSmoothSyncSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SmoothSynsPrefab                      SmoothSyncPrefab                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::SetSmoothSyncSettings(E_SmoothSynsPrefab SmoothSyncPrefab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "SetSmoothSyncSettings");

	Params::ParentZombieAI_C_SetSmoothSyncSettings Parms{};

	Parms.SmoothSyncPrefab = SmoothSyncPrefab;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.AIInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Door_C*                       Door                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UArrowComponent*                  Arrow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::AIInteract(class ABP_Door_C* Door, class UArrowComponent* Arrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "AIInteract");

	Params::ParentZombieAI_C_AIInteract Parms{};

	Parms.Door = Door;
	Parms.Arrow = Arrow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentZombieAI.ParentZombieAI_C.EndDoorAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AParentZombieAI_C::EndDoorAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "EndDoorAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentZombieAI.ParentZombieAI_C.IsBandit?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsBandit_                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::IsBandit_(bool* Param_IsBandit_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "IsBandit?");

	Params::ParentZombieAI_C_IsBandit_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsBandit_ != nullptr)
		*Param_IsBandit_ = Parms.Param_IsBandit_;
}


// Function ParentZombieAI.ParentZombieAI_C.IsZombie?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsZombie_                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Zombie                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentZombieAI_C::IsZombie_(bool* Param_IsZombie_, class APawn** Zombie)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentZombieAI_C", "IsZombie?");

	Params::ParentZombieAI_C_IsZombie_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsZombie_ != nullptr)
		*Param_IsZombie_ = Parms.Param_IsZombie_;

	if (Zombie != nullptr)
		*Zombie = Parms.Zombie;
}

}

