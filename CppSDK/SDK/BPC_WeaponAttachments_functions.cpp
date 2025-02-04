#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_WeaponAttachments

#include "Basic.hpp"

#include "BPC_WeaponAttachments_classes.hpp"
#include "BPC_WeaponAttachments_parameters.hpp"


namespace SDK
{

// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.ExecuteUbergraph_BPC_WeaponAttachments
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_WeaponAttachments_C::ExecuteUbergraph_BPC_WeaponAttachments(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "ExecuteUbergraph_BPC_WeaponAttachments");

	Params::BPC_WeaponAttachments_C_ExecuteUbergraph_BPC_WeaponAttachments Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.GetAttachPoint
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Secondary_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             AttachName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_WeaponAttachments_C::GetAttachPoint(class FName Param_Name, bool Secondary_, class USkeletalMeshComponent** Mesh, class FName* AttachName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "GetAttachPoint");

	Params::BPC_WeaponAttachments_C_GetAttachPoint Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Secondary_ = Secondary_;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

	if (AttachName != nullptr)
		*AttachName = Parms.AttachName;
}


// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.GetOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Secondary_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_WeaponAttachments_C::GetOffset(bool Secondary_, struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "GetOffset");

	Params::BPC_WeaponAttachments_C_GetOffset Parms{};

	Parms.Secondary_ = Secondary_;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_WeaponAttachments_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.SetUnactiveWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PrimaryWeaponSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SecondaryWeaponSlot                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             PistolWeaponSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MeleeWeaponSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_WeaponAttachments_C::SetUnactiveWeapon(class FName PrimaryWeaponSlot, class FName SecondaryWeaponSlot, class FName PistolWeaponSlot, class FName MeleeWeaponSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "SetUnactiveWeapon");

	Params::BPC_WeaponAttachments_C_SetUnactiveWeapon Parms{};

	Parms.PrimaryWeaponSlot = PrimaryWeaponSlot;
	Parms.SecondaryWeaponSlot = SecondaryWeaponSlot;
	Parms.PistolWeaponSlot = PistolWeaponSlot;
	Parms.MeleeWeaponSlot = MeleeWeaponSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_WeaponAttachments.BPC_WeaponAttachments_C.SetWeaponSlotMesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              PhysicsSM                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  Root                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AWeaponPlaceholder_C*             WeaponPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Secondary_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicsConstraintComponent*      PhysConstraint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_WeaponAttachments_C::SetWeaponSlotMesh(class UPrimitiveComponent* PhysicsSM, class USceneComponent* Root, class AWeaponPlaceholder_C* WeaponPlaceholder, class FName Param_Name, bool Secondary_, class UPhysicsConstraintComponent* PhysConstraint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_WeaponAttachments_C", "SetWeaponSlotMesh");

	Params::BPC_WeaponAttachments_C_SetWeaponSlotMesh Parms{};

	Parms.PhysicsSM = PhysicsSM;
	Parms.Root = Root;
	Parms.WeaponPlaceholder = WeaponPlaceholder;
	Parms.Param_Name = Param_Name;
	Parms.Secondary_ = Secondary_;
	Parms.PhysConstraint = PhysConstraint;

	UObject::ProcessEvent(Func, &Parms);
}

}

