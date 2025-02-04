#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorkbenchRepairActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FItemInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WorkbenchRepairActor.BP_WorkbenchRepairActor_C
// 0x0300 (0x0590 - 0x0290)
class ABP_WorkbenchRepairActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    FrontRectLight;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    TopRectLight;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    BottomRectLight;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActorWeapon;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActorArmor;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResetRotationTimeLine_Alpha_DBDA323E4F944FBF6A5512825C4590FE; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResetRotationTimeLine__Direction_DBDA323E4F944FBF6A5512825C4590FE; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResetRotationTimeLine;                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AWeaponPlaceholder_C*                   WeaponPhRef;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASurvPC_C*                              Controller_Ref;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Interacted_Player_Ref;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASkeletalMeshActor*                     ArmorRef;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ItemData;                                          // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WorkbenchActor_C*                   WorkBenchWeaponActor;                              // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AWeaponPlaceholder_C*                   As_WeaponRepairRef;                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 TextureTargetDefault;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFItemInfo                             Weapon_InfoRepair;                                 // 0x0328(0x0220)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      As_Survival_Player;                                // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ResetRoationTimerHandle;                           // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ResetRoationTimerHandler__Await_;                  // 0x0558(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetLocation;                                    // 0x0560(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootLocation;                                      // 0x0578(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddDeltaRotation(const struct FRotator& Param_AddDeltaRotation, double Delay__Reset_);
	void CalculaterLocationByBoundOrigin(const class USceneComponent* Component, struct FVector* Location);
	void ExecuteUbergraph_BP_WorkbenchRepairActor(int32 EntryPoint);
	class UChildActorComponent* GetActiveChildActor(bool* Result);
	void ReceiveBeginPlay();
	void Remove_Model();
	void ResetRoationTimerHandler();
	void ResetRotation(bool Hard, double Delay);
	void ResetRotation__Await_();
	void ResetRotationTimeLine__FinishedFunc();
	void ResetRotationTimeLine__UpdateFunc();
	void SetNewModelByWeaponInfo(const struct FFItemInfo& WeaponInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorkbenchRepairActor_C">();
	}
	static class ABP_WorkbenchRepairActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorkbenchRepairActor_C>();
	}
};
static_assert(alignof(ABP_WorkbenchRepairActor_C) == 0x000008, "Wrong alignment on ABP_WorkbenchRepairActor_C");
static_assert(sizeof(ABP_WorkbenchRepairActor_C) == 0x000590, "Wrong size on ABP_WorkbenchRepairActor_C");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, UberGraphFrame) == 0x000290, "Member 'ABP_WorkbenchRepairActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, SceneCaptureComponent2D) == 0x000298, "Member 'ABP_WorkbenchRepairActor_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, SpringArm) == 0x0002A0, "Member 'ABP_WorkbenchRepairActor_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, FrontRectLight) == 0x0002A8, "Member 'ABP_WorkbenchRepairActor_C::FrontRectLight' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, TopRectLight) == 0x0002B0, "Member 'ABP_WorkbenchRepairActor_C::TopRectLight' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, BottomRectLight) == 0x0002B8, "Member 'ABP_WorkbenchRepairActor_C::BottomRectLight' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ChildActorWeapon) == 0x0002C0, "Member 'ABP_WorkbenchRepairActor_C::ChildActorWeapon' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ChildActorArmor) == 0x0002C8, "Member 'ABP_WorkbenchRepairActor_C::ChildActorArmor' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, Scene) == 0x0002D0, "Member 'ABP_WorkbenchRepairActor_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ResetRotationTimeLine_Alpha_DBDA323E4F944FBF6A5512825C4590FE) == 0x0002D8, "Member 'ABP_WorkbenchRepairActor_C::ResetRotationTimeLine_Alpha_DBDA323E4F944FBF6A5512825C4590FE' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ResetRotationTimeLine__Direction_DBDA323E4F944FBF6A5512825C4590FE) == 0x0002DC, "Member 'ABP_WorkbenchRepairActor_C::ResetRotationTimeLine__Direction_DBDA323E4F944FBF6A5512825C4590FE' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ResetRotationTimeLine) == 0x0002E0, "Member 'ABP_WorkbenchRepairActor_C::ResetRotationTimeLine' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, WeaponPhRef) == 0x0002E8, "Member 'ABP_WorkbenchRepairActor_C::WeaponPhRef' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, Controller_Ref) == 0x0002F0, "Member 'ABP_WorkbenchRepairActor_C::Controller_Ref' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, Interacted_Player_Ref) == 0x0002F8, "Member 'ABP_WorkbenchRepairActor_C::Interacted_Player_Ref' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ArmorRef) == 0x000300, "Member 'ABP_WorkbenchRepairActor_C::ArmorRef' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ItemData) == 0x000308, "Member 'ABP_WorkbenchRepairActor_C::ItemData' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, WorkBenchWeaponActor) == 0x000310, "Member 'ABP_WorkbenchRepairActor_C::WorkBenchWeaponActor' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, As_WeaponRepairRef) == 0x000318, "Member 'ABP_WorkbenchRepairActor_C::As_WeaponRepairRef' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, TextureTargetDefault) == 0x000320, "Member 'ABP_WorkbenchRepairActor_C::TextureTargetDefault' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, Weapon_InfoRepair) == 0x000328, "Member 'ABP_WorkbenchRepairActor_C::Weapon_InfoRepair' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, As_Survival_Player) == 0x000548, "Member 'ABP_WorkbenchRepairActor_C::As_Survival_Player' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ResetRoationTimerHandle) == 0x000550, "Member 'ABP_WorkbenchRepairActor_C::ResetRoationTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, ResetRoationTimerHandler__Await_) == 0x000558, "Member 'ABP_WorkbenchRepairActor_C::ResetRoationTimerHandler__Await_' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, OffsetLocation) == 0x000560, "Member 'ABP_WorkbenchRepairActor_C::OffsetLocation' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchRepairActor_C, RootLocation) == 0x000578, "Member 'ABP_WorkbenchRepairActor_C::RootLocation' has a wrong offset!");

}

