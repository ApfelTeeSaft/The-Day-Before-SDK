#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosion.Explosion_C
// 0x0030 (0x02C0 - 0x0290)
class AExplosion_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                  RadialForce;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             Fmod_Explosion;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Row_Name;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Explosion(int32 EntryPoint);
	void ReceiveBeginPlay();
	void WallCheckGrenade(const struct FVector& Start, const struct FVector& End, double Radius, class ASurvivalPlayer_C** AsSurvival_Player);
	void WallCheckGrenadeOnCamera(const struct FVector& Start, const struct FVector& End, double Radius, class ASurvivalPlayer_C** AsSurvival_Player);
	void WallCheckGrenadeOnCameraFarPlayer(const struct FVector& Start, const struct FVector& End, double Radius, class ASurvivalPlayer_C** AsSurvival_Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosion_C">();
	}
	static class AExplosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosion_C>();
	}
};
static_assert(alignof(AExplosion_C) == 0x000008, "Wrong alignment on AExplosion_C");
static_assert(sizeof(AExplosion_C) == 0x0002C0, "Wrong size on AExplosion_C");
static_assert(offsetof(AExplosion_C, UberGraphFrame) == 0x000290, "Member 'AExplosion_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AExplosion_C, RadialForce) == 0x000298, "Member 'AExplosion_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AExplosion_C, ParticleSystem) == 0x0002A0, "Member 'AExplosion_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AExplosion_C, Box) == 0x0002A8, "Member 'AExplosion_C::Box' has a wrong offset!");
static_assert(offsetof(AExplosion_C, Fmod_Explosion) == 0x0002B0, "Member 'AExplosion_C::Fmod_Explosion' has a wrong offset!");
static_assert(offsetof(AExplosion_C, Row_Name) == 0x0002B8, "Member 'AExplosion_C::Row_Name' has a wrong offset!");

}

