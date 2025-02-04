#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatM_MainPickupClass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatM_MainPickupClass.StatM_MainPickupClass_C
// 0x0038 (0x02C8 - 0x0290)
class AStatM_MainPickupClass_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   MainStaticMesh;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPickupComponent_C*                     PickupComponent;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         NewCount;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          SkeletalMeshAsset;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACharacter*                             OwnerChar;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   AttachToSocket;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CallLootAnim(double LootingHeight, bool LootPointOpened);
	void CampBuildInstant();
	void CampPlaceBegin();
	void CampPlaceEnd();
	void Craft(class APawn* Player);
	void ExecuteUbergraph_StatM_MainPickupClass(int32 EntryPoint);
	void GetMesh(class UMeshComponent** MeshRef);
	void GetMuzzleLocation(struct FVector* Muzzle);
	void GetPickupComponent(class UPickupComponent_C** PickupCompo);
	void GetSkeletalAsset(class USkeletalMesh** SkelRef);
	void GI_TileLoaded(class FName TileName);
	void GI_TileUnloaded(class FName TileName);
	void HeatUpBonfire(class APawn* Player);
	void Interact(bool NewParam);
	void IsInWater(bool* InWater);
	void IsPlayer(bool* Param_IsPlayer);
	void OpenDoorRPC(class ABP_Door_C* Door, bool IsOpen);
	void OpenLootRPC(class ALootPoint_C* LootPoint);
	void PlayerAddItem(const struct FFItemInfo& ItemInfo, class UWBP_AttachmentCell_C* ActiveCell, bool* Added);
	void PlayerCanisterAction(bool Attach, class ABP_Canister_C* Canister);
	void PlayerGetMesh(class USkeletalMeshComponent** Mesh);
	void PlayerItemCountByName(const class FString& ItemName, int32* Count);
	void ReceiveBeginPlay();
	void SetEnableSmoothSync(bool NewEnable, bool* Success);
	void SetEquipped(bool Equipped);
	void SetPickupPhysicsEnabled(bool Enable_);
	void SetPlayerCollisionInCar(bool NewEnable);
	void ShowSimpleUIText(const class FString& String);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatM_MainPickupClass_C">();
	}
	static class AStatM_MainPickupClass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStatM_MainPickupClass_C>();
	}
};
static_assert(alignof(AStatM_MainPickupClass_C) == 0x000008, "Wrong alignment on AStatM_MainPickupClass_C");
static_assert(sizeof(AStatM_MainPickupClass_C) == 0x0002C8, "Wrong size on AStatM_MainPickupClass_C");
static_assert(offsetof(AStatM_MainPickupClass_C, UberGraphFrame) == 0x000290, "Member 'AStatM_MainPickupClass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, MainStaticMesh) == 0x000298, "Member 'AStatM_MainPickupClass_C::MainStaticMesh' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, PickupComponent) == 0x0002A0, "Member 'AStatM_MainPickupClass_C::PickupComponent' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, NewCount) == 0x0002A8, "Member 'AStatM_MainPickupClass_C::NewCount' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, SkeletalMeshAsset) == 0x0002B0, "Member 'AStatM_MainPickupClass_C::SkeletalMeshAsset' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, OwnerChar) == 0x0002B8, "Member 'AStatM_MainPickupClass_C::OwnerChar' has a wrong offset!");
static_assert(offsetof(AStatM_MainPickupClass_C, AttachToSocket) == 0x0002C0, "Member 'AStatM_MainPickupClass_C::AttachToSocket' has a wrong offset!");

}

