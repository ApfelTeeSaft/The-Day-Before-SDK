#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosive_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ActorLayerUtilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosive_Item.Explosive_Item_C
// 0x01F0 (0x0480 - 0x0290)
#pragma pack(push, 0x1)
class alignas(0x10) AExplosive_Item_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshLever;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Explosion;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Time;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             EventSoundThrow;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             EventSoundHit;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          OneHit;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          F1;                                                // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InWater;                                           // 0x02D2(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D3[0x5];                                      // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ExplosionWater;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTransform                             Spawn_Transform_Water;                             // 0x02E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOverlapWater;                              // 0x0340(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DecalExplosion;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FindStaticObject;                                  // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        TraceDecal;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinusTraceDecal;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Decal;                                             // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActorLayer                            Layer;                                             // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_398[0x8];                                      // 0x0398(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Relative_Transform;                                // 0x03A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LeverDestroy;                                      // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ED_Detonate;                                       // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                ClientLocation;                                    // 0x0418(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TrueExplosion;                                     // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NewVar_0;                                          // 0x0438(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSMoke;                                           // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RotationAngle;                                     // 0x0458(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rotate;                                            // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SpeedGrenade;                                      // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          WithoutTimer;                                      // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Explosive_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CollisionThrow();
	void CreateDecalLocation(const struct FVector& Start, class AActor** Param_Decal);
	void DestroyEvent();
	void DestroyLevers();
	void DestroySmoke(class AActor* DestroyedActor);
	void Detonate();
	void DetonateWithoutTimer(double Timer);
	void ED_Detonate__DelegateSignature(const struct FVector& Location);
	void ExecuteUbergraph_Explosive_Item(int32 EntryPoint);
	void ExplosionDecal_Multicast();
	void ExplosionServer(const struct FVector& Spawn_Transform_Location, class UClass* Param_Class, class AActor* Target, const struct FTransform& SpawnTransform, const struct FVector& VelocityGrenade);
	void ExplosionWaterServer(class UClass* Param_Class, const struct FVector& Spawn_Transform_Location, const struct FRotator& Spawn_Transform_Rotation);
	void GrenadeThrowBeforeHand(bool IsActivate, double NewTime);
	void Multicast_SimulatePhysics();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ScaleDecal(class AActor* Param_Decal);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosive_Item_C">();
	}
	static class AExplosive_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosive_Item_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AExplosive_Item_C) == 0x000010, "Wrong alignment on AExplosive_Item_C");
static_assert(sizeof(AExplosive_Item_C) == 0x000480, "Wrong size on AExplosive_Item_C");
static_assert(offsetof(AExplosive_Item_C, UberGraphFrame) == 0x000290, "Member 'AExplosive_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, ProjectileMovement) == 0x000298, "Member 'AExplosive_Item_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, StaticMesh) == 0x0002A0, "Member 'AExplosive_Item_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, StaticMeshLever) == 0x0002A8, "Member 'AExplosive_Item_C::StaticMeshLever' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Explosion) == 0x0002B0, "Member 'AExplosive_Item_C::Explosion' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Time) == 0x0002B8, "Member 'AExplosive_Item_C::Time' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, EventSoundThrow) == 0x0002C0, "Member 'AExplosive_Item_C::EventSoundThrow' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, EventSoundHit) == 0x0002C8, "Member 'AExplosive_Item_C::EventSoundHit' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, OneHit) == 0x0002D0, "Member 'AExplosive_Item_C::OneHit' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, F1) == 0x0002D1, "Member 'AExplosive_Item_C::F1' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, InWater) == 0x0002D2, "Member 'AExplosive_Item_C::InWater' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, ExplosionWater) == 0x0002D8, "Member 'AExplosive_Item_C::ExplosionWater' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Spawn_Transform_Water) == 0x0002E0, "Member 'AExplosive_Item_C::Spawn_Transform_Water' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, LocationOverlapWater) == 0x000340, "Member 'AExplosive_Item_C::LocationOverlapWater' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, DecalExplosion) == 0x000358, "Member 'AExplosive_Item_C::DecalExplosion' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, FindStaticObject) == 0x000360, "Member 'AExplosive_Item_C::FindStaticObject' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Object_Types) == 0x000368, "Member 'AExplosive_Item_C::Object_Types' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, TraceDecal) == 0x000378, "Member 'AExplosive_Item_C::TraceDecal' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, MinusTraceDecal) == 0x000380, "Member 'AExplosive_Item_C::MinusTraceDecal' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Decal) == 0x000388, "Member 'AExplosive_Item_C::Decal' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Layer) == 0x000390, "Member 'AExplosive_Item_C::Layer' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Relative_Transform) == 0x0003A0, "Member 'AExplosive_Item_C::Relative_Transform' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, LeverDestroy) == 0x000400, "Member 'AExplosive_Item_C::LeverDestroy' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, ED_Detonate) == 0x000408, "Member 'AExplosive_Item_C::ED_Detonate' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, ClientLocation) == 0x000418, "Member 'AExplosive_Item_C::ClientLocation' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, TrueExplosion) == 0x000430, "Member 'AExplosive_Item_C::TrueExplosion' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, NewVar_0) == 0x000438, "Member 'AExplosive_Item_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, IsSMoke) == 0x000450, "Member 'AExplosive_Item_C::IsSMoke' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, RotationAngle) == 0x000458, "Member 'AExplosive_Item_C::RotationAngle' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, Rotate) == 0x000460, "Member 'AExplosive_Item_C::Rotate' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, SpeedGrenade) == 0x000468, "Member 'AExplosive_Item_C::SpeedGrenade' has a wrong offset!");
static_assert(offsetof(AExplosive_Item_C, WithoutTimer) == 0x000470, "Member 'AExplosive_Item_C::WithoutTimer' has a wrong offset!");

}
