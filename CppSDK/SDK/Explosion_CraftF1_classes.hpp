#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_CraftF1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Explosion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosion_CraftF1.Explosion_CraftF1_C
// 0x0038 (0x02F8 - 0x02C0)
class AExplosion_CraftF1_C final : public AExplosion_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Explosion_CraftF1_C;                // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_F1;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FHitResult>                     Out_Hits;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class APawn*                                  PawnTrace;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Explosion_CraftF1(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosion_CraftF1_C">();
	}
	static class AExplosion_CraftF1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosion_CraftF1_C>();
	}
};
static_assert(alignof(AExplosion_CraftF1_C) == 0x000008, "Wrong alignment on AExplosion_CraftF1_C");
static_assert(sizeof(AExplosion_CraftF1_C) == 0x0002F8, "Wrong size on AExplosion_CraftF1_C");
static_assert(offsetof(AExplosion_CraftF1_C, UberGraphFrame_Explosion_CraftF1_C) == 0x0002C0, "Member 'AExplosion_CraftF1_C::UberGraphFrame_Explosion_CraftF1_C' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftF1_C, NS_F1) == 0x0002C8, "Member 'AExplosion_CraftF1_C::NS_F1' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftF1_C, Object_Types) == 0x0002D0, "Member 'AExplosion_CraftF1_C::Object_Types' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftF1_C, Out_Hits) == 0x0002E0, "Member 'AExplosion_CraftF1_C::Out_Hits' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftF1_C, PawnTrace) == 0x0002F0, "Member 'AExplosion_CraftF1_C::PawnTrace' has a wrong offset!");

}
