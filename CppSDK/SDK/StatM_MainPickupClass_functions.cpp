#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatM_MainPickupClass

#include "Basic.hpp"

#include "StatM_MainPickupClass_classes.hpp"
#include "StatM_MainPickupClass_parameters.hpp"


namespace SDK
{

// Function StatM_MainPickupClass.StatM_MainPickupClass_C.CallLootAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  LootingHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LootPointOpened                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::CallLootAnim(double LootingHeight, bool LootPointOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "CallLootAnim");

	Params::StatM_MainPickupClass_C_CallLootAnim Parms{};

	Parms.LootingHeight = LootingHeight;
	Parms.LootPointOpened = LootPointOpened;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.CampBuildInstant
// (Public, BlueprintCallable, BlueprintEvent)

void AStatM_MainPickupClass_C::CampBuildInstant()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "CampBuildInstant");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.CampPlaceBegin
// (Public, BlueprintCallable, BlueprintEvent)

void AStatM_MainPickupClass_C::CampPlaceBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "CampPlaceBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.CampPlaceEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AStatM_MainPickupClass_C::CampPlaceEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "CampPlaceEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.Craft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::Craft(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "Craft");

	Params::StatM_MainPickupClass_C_Craft Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.ExecuteUbergraph_StatM_MainPickupClass
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::ExecuteUbergraph_StatM_MainPickupClass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "ExecuteUbergraph_StatM_MainPickupClass");

	Params::StatM_MainPickupClass_C_ExecuteUbergraph_StatM_MainPickupClass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.getMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*                   MeshRef                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GetMesh(class UMeshComponent** MeshRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "getMesh");

	Params::StatM_MainPickupClass_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeshRef != nullptr)
		*MeshRef = Parms.MeshRef;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Muzzle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GetMuzzleLocation(struct FVector* Muzzle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "GetMuzzleLocation");

	Params::StatM_MainPickupClass_C_GetMuzzleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Muzzle != nullptr)
		*Muzzle = std::move(Parms.Muzzle);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.GetPickupComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickupComponent_C*               PickupCompo                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GetPickupComponent(class UPickupComponent_C** PickupCompo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "GetPickupComponent");

	Params::StatM_MainPickupClass_C_GetPickupComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PickupCompo != nullptr)
		*PickupCompo = Parms.PickupCompo;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.GetSkeletalAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    SkelRef                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GetSkeletalAsset(class USkeletalMesh** SkelRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "GetSkeletalAsset");

	Params::StatM_MainPickupClass_C_GetSkeletalAsset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkelRef != nullptr)
		*SkelRef = Parms.SkelRef;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.GI_TileLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TileName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GI_TileLoaded(class FName TileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "GI_TileLoaded");

	Params::StatM_MainPickupClass_C_GI_TileLoaded Parms{};

	Parms.TileName = TileName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.GI_TileUnloaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TileName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::GI_TileUnloaded(class FName TileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "GI_TileUnloaded");

	Params::StatM_MainPickupClass_C_GI_TileUnloaded Parms{};

	Parms.TileName = TileName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.HeatUpBonfire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::HeatUpBonfire(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "HeatUpBonfire");

	Params::StatM_MainPickupClass_C_HeatUpBonfire Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::Interact(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "Interact");

	Params::StatM_MainPickupClass_C_Interact Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.IsInWater
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InWater                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::IsInWater(bool* InWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "IsInWater");

	Params::StatM_MainPickupClass_C_IsInWater Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InWater != nullptr)
		*InWater = Parms.InWater;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.IsPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsPlayer                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::IsPlayer(bool* Param_IsPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "IsPlayer");

	Params::StatM_MainPickupClass_C_IsPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsPlayer != nullptr)
		*Param_IsPlayer = Parms.Param_IsPlayer;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.OpenDoorRPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Door_C*                       Door                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::OpenDoorRPC(class ABP_Door_C* Door, bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "OpenDoorRPC");

	Params::StatM_MainPickupClass_C_OpenDoorRPC Parms{};

	Parms.Door = Door;
	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.OpenLootRPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootPoint_C*                     LootPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::OpenLootRPC(class ALootPoint_C* LootPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "OpenLootRPC");

	Params::StatM_MainPickupClass_C_OpenLootRPC Parms{};

	Parms.LootPoint = LootPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerAddItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWBP_AttachmentCell_C*            ActiveCell                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Added                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::PlayerAddItem(const struct FFItemInfo& ItemInfo, class UWBP_AttachmentCell_C* ActiveCell, bool* Added)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "PlayerAddItem");

	Params::StatM_MainPickupClass_C_PlayerAddItem Parms{};

	Parms.ItemInfo = std::move(ItemInfo);
	Parms.ActiveCell = ActiveCell;

	UObject::ProcessEvent(Func, &Parms);

	if (Added != nullptr)
		*Added = Parms.Added;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerCanisterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Attach                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Canister_C*                   Canister                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::PlayerCanisterAction(bool Attach, class ABP_Canister_C* Canister)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "PlayerCanisterAction");

	Params::StatM_MainPickupClass_C_PlayerCanisterAction Parms{};

	Parms.Attach = Attach;
	Parms.Canister = Canister;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerGetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::PlayerGetMesh(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "PlayerGetMesh");

	Params::StatM_MainPickupClass_C_PlayerGetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerItemCountByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::PlayerItemCountByName(const class FString& ItemName, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "PlayerItemCountByName");

	Params::StatM_MainPickupClass_C_PlayerItemCountByName Parms{};

	Parms.ItemName = std::move(ItemName);

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStatM_MainPickupClass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.SetEnableSmoothSync
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::SetEnableSmoothSync(bool NewEnable, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "SetEnableSmoothSync");

	Params::StatM_MainPickupClass_C_SetEnableSmoothSync Parms{};

	Parms.NewEnable = NewEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.SetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Equipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::SetEquipped(bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "SetEquipped");

	Params::StatM_MainPickupClass_C_SetEquipped Parms{};

	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.SetPickupPhysicsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::SetPickupPhysicsEnabled(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "SetPickupPhysicsEnabled");

	Params::StatM_MainPickupClass_C_SetPickupPhysicsEnabled Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.SetPlayerCollisionInCar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::SetPlayerCollisionInCar(bool NewEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "SetPlayerCollisionInCar");

	Params::StatM_MainPickupClass_C_SetPlayerCollisionInCar Parms{};

	Parms.NewEnable = NewEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatM_MainPickupClass.StatM_MainPickupClass_C.ShowSimpleUIText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AStatM_MainPickupClass_C::ShowSimpleUIText(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatM_MainPickupClass_C", "ShowSimpleUIText");

	Params::StatM_MainPickupClass_C_ShowSimpleUIText Parms{};

	Parms.String = std::move(String);

	UObject::ProcessEvent(Func, &Parms);
}

}
