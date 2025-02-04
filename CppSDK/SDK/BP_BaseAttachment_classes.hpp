#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseAttachment

#include "Basic.hpp"

#include "E_TypesOfModes_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaseAttachment.BP_BaseAttachment_C
// 0x0068 (0x02F8 - 0x0290)
class ABP_BaseAttachment_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponentWithItsOwnFOV*      StaticMeshWithOwnFOV;                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MainSM;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CharRef;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AWeaponPlaceholder_C*                   WeaponPH;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bForIconManufacturer_;                             // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   IdName;                                            // 0x02C4(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_TypesOfModes                                TypeOfMode;                                        // 0x02CC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2CD[0x3];                                      // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Offset;                                            // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           IgnoredAttachments;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_BaseAttachment(int32 EntryPoint);
	void InitializeOnEquip();
	void InitOffsets();
	void InitOffsetsMulti();
	void InitOffsetsServer();
	void OnDestroyedEvent(class AActor* DestroyedActor);
	void OnWeaponChanged();
	void ReceiveBeginPlay();
	void SpecificBeginPlayDueToWeapon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseAttachment_C">();
	}
	static class ABP_BaseAttachment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaseAttachment_C>();
	}
};
static_assert(alignof(ABP_BaseAttachment_C) == 0x000008, "Wrong alignment on ABP_BaseAttachment_C");
static_assert(sizeof(ABP_BaseAttachment_C) == 0x0002F8, "Wrong size on ABP_BaseAttachment_C");
static_assert(offsetof(ABP_BaseAttachment_C, UberGraphFrame) == 0x000290, "Member 'ABP_BaseAttachment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, StaticMeshWithOwnFOV) == 0x000298, "Member 'ABP_BaseAttachment_C::StaticMeshWithOwnFOV' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, MainSM) == 0x0002A0, "Member 'ABP_BaseAttachment_C::MainSM' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_BaseAttachment_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, CharRef) == 0x0002B0, "Member 'ABP_BaseAttachment_C::CharRef' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, WeaponPH) == 0x0002B8, "Member 'ABP_BaseAttachment_C::WeaponPH' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, bForIconManufacturer_) == 0x0002C0, "Member 'ABP_BaseAttachment_C::bForIconManufacturer_' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, IdName) == 0x0002C4, "Member 'ABP_BaseAttachment_C::IdName' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, TypeOfMode) == 0x0002CC, "Member 'ABP_BaseAttachment_C::TypeOfMode' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, Offset) == 0x0002D0, "Member 'ABP_BaseAttachment_C::Offset' has a wrong offset!");
static_assert(offsetof(ABP_BaseAttachment_C, IgnoredAttachments) == 0x0002E8, "Member 'ABP_BaseAttachment_C::IgnoredAttachments' has a wrong offset!");

}

