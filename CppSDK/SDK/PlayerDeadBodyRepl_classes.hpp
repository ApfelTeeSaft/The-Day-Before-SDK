#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDeadBodyRepl

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "DefaultItemInfo_structs.hpp"
#include "PlayerDeadBody_classes.hpp"
#include "DropItemEntry_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerDeadBodyRepl.PlayerDeadBodyRepl_C
// 0x0080 (0x0920 - 0x08A0)
class APlayerDeadBodyRepl_C final : public APlayerDeadBody_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PlayerDeadBodyRepl_C;               // 0x0898(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   LootBag;                                           // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player;                                            // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDefaultItemInfo>               ItemsToSpawn;                                      // 0x08B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                 PawnLoot;                                          // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDropItemEntry>                 DropItems;                                         // 0x08C8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	class USkeletalMesh*                          Armor;                                             // 0x08D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Outerwear;                                         // 0x08E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Pants;                                             // 0x08E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Face;                                              // 0x08F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Skelet;                                            // 0x08F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Skin_Material;                                     // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ImpulseAdded;                                      // 0x0908(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFreezed;                                         // 0x0909(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90A[0x6];                                      // 0x090A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HitAngle;                                          // 0x0910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USkeletalMesh*                          Backpack;                                          // 0x0918(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateDeadBody();
	void AddDeathRagdol(const struct FVector& Param_Location, class FName BoneName, const struct FVector& Direction);
	void ApplyMeshes(class ASurvivalPlayer_C* InputPin);
	void CreateLootPawn();
	void DisableRagdoll();
	void ExecuteUbergraph_PlayerDeadBodyRepl(int32 EntryPoint);
	void FreezeRagdoll();
	void HideBody();
	void OnSurrender();
	void ReceiveTick(float DeltaSeconds);
	void ShowBody(class ASurvivalPlayer_C* Param_Player, const TArray<struct FDropItemEntry>& ItemDrop);
	void OnBeginInteract(class APawn* Param_Player);
	void OnFocused(class APawn* Param_Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerDeadBodyRepl_C">();
	}
	static class APlayerDeadBodyRepl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerDeadBodyRepl_C>();
	}
};
static_assert(alignof(APlayerDeadBodyRepl_C) == 0x000010, "Wrong alignment on APlayerDeadBodyRepl_C");
static_assert(sizeof(APlayerDeadBodyRepl_C) == 0x000920, "Wrong size on APlayerDeadBodyRepl_C");
static_assert(offsetof(APlayerDeadBodyRepl_C, UberGraphFrame_PlayerDeadBodyRepl_C) == 0x000898, "Member 'APlayerDeadBodyRepl_C::UberGraphFrame_PlayerDeadBodyRepl_C' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, LootBag) == 0x0008A0, "Member 'APlayerDeadBodyRepl_C::LootBag' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Player) == 0x0008A8, "Member 'APlayerDeadBodyRepl_C::Player' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, ItemsToSpawn) == 0x0008B0, "Member 'APlayerDeadBodyRepl_C::ItemsToSpawn' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, PawnLoot) == 0x0008C0, "Member 'APlayerDeadBodyRepl_C::PawnLoot' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, DropItems) == 0x0008C8, "Member 'APlayerDeadBodyRepl_C::DropItems' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Armor) == 0x0008D8, "Member 'APlayerDeadBodyRepl_C::Armor' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Outerwear) == 0x0008E0, "Member 'APlayerDeadBodyRepl_C::Outerwear' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Pants) == 0x0008E8, "Member 'APlayerDeadBodyRepl_C::Pants' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Face) == 0x0008F0, "Member 'APlayerDeadBodyRepl_C::Face' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Skelet) == 0x0008F8, "Member 'APlayerDeadBodyRepl_C::Skelet' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Skin_Material) == 0x000900, "Member 'APlayerDeadBodyRepl_C::Skin_Material' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, ImpulseAdded) == 0x000908, "Member 'APlayerDeadBodyRepl_C::ImpulseAdded' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, IsFreezed) == 0x000909, "Member 'APlayerDeadBodyRepl_C::IsFreezed' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, HitAngle) == 0x000910, "Member 'APlayerDeadBodyRepl_C::HitAngle' has a wrong offset!");
static_assert(offsetof(APlayerDeadBodyRepl_C, Backpack) == 0x000918, "Member 'APlayerDeadBodyRepl_C::Backpack' has a wrong offset!");

}

