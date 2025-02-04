#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IconManufacturer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IconManufacturer.BP_IconManufacturer_C
// 0x00D8 (0x0380 - 0x02A8)
class ABP_IconManufacturer_C final : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                    RifleGeneral_2;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RifleGeneral_1;                                    // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    PistolGeneral;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PistolUp;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   RifleLeftUp;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AWeaponPlaceholder_C*                   Weapon_Ph_Ref;                                     // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player_Ref;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	class ASurvPC_C*                              Controller_Ref;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterial*                              ResultMaterial;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RifleImageSize;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              PistolImageSize;                                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RifleLocation;                                     // 0x0328(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PistolLocation;                                    // 0x0340(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefaultWorldLocation;                              // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ResultImageSize;                                   // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_IconManufacturer_AutoGenFunc();
	void Configurate_Target_Texture(const struct FFItemInfo& FItemInfo);
	void ExecuteUbergraph_BP_IconManufacturer(int32 EntryPoint);
	void Get_Weapon_Icon(class ASurvivalPlayer_C* Player, const struct FFItemInfo& Item_Info, class UMaterialInterface** Image);
	void ReceiveBeginPlay();
	void Set_Icon_Model(class ASurvivalPlayer_C* Player, const struct FFItemInfo& Item_Info);
	void SetLightingChannel(const struct FFItemInfo& FItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IconManufacturer_C">();
	}
	static class ABP_IconManufacturer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IconManufacturer_C>();
	}
};
static_assert(alignof(ABP_IconManufacturer_C) == 0x000008, "Wrong alignment on ABP_IconManufacturer_C");
static_assert(sizeof(ABP_IconManufacturer_C) == 0x000380, "Wrong size on ABP_IconManufacturer_C");
static_assert(offsetof(ABP_IconManufacturer_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_IconManufacturer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, RifleGeneral_2) == 0x0002B0, "Member 'ABP_IconManufacturer_C::RifleGeneral_2' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, RifleGeneral_1) == 0x0002B8, "Member 'ABP_IconManufacturer_C::RifleGeneral_1' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, PistolGeneral) == 0x0002C0, "Member 'ABP_IconManufacturer_C::PistolGeneral' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, SkeletalMesh) == 0x0002C8, "Member 'ABP_IconManufacturer_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, PistolUp) == 0x0002D0, "Member 'ABP_IconManufacturer_C::PistolUp' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, RifleLeftUp) == 0x0002D8, "Member 'ABP_IconManufacturer_C::RifleLeftUp' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, ChildActor) == 0x0002E0, "Member 'ABP_IconManufacturer_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, Weapon_Ph_Ref) == 0x0002E8, "Member 'ABP_IconManufacturer_C::Weapon_Ph_Ref' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, Player_Ref) == 0x0002F0, "Member 'ABP_IconManufacturer_C::Player_Ref' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, Controller_Ref) == 0x0002F8, "Member 'ABP_IconManufacturer_C::Controller_Ref' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, ResultMaterial) == 0x000300, "Member 'ABP_IconManufacturer_C::ResultMaterial' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, RifleImageSize) == 0x000308, "Member 'ABP_IconManufacturer_C::RifleImageSize' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, PistolImageSize) == 0x000318, "Member 'ABP_IconManufacturer_C::PistolImageSize' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, RifleLocation) == 0x000328, "Member 'ABP_IconManufacturer_C::RifleLocation' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, PistolLocation) == 0x000340, "Member 'ABP_IconManufacturer_C::PistolLocation' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, DefaultWorldLocation) == 0x000358, "Member 'ABP_IconManufacturer_C::DefaultWorldLocation' has a wrong offset!");
static_assert(offsetof(ABP_IconManufacturer_C, ResultImageSize) == 0x000370, "Member 'ABP_IconManufacturer_C::ResultImageSize' has a wrong offset!");

}

