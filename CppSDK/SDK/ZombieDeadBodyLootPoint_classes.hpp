#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZombieDeadBodyLootPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadBodyLootPoint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ZombieDeadBodyLootPoint.ZombieDeadBodyLootPoint_C
// 0x0020 (0x07D0 - 0x07B0)
class AZombieDeadBodyLootPoint_C final : public ADeadBodyLootPoint_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ZombieDeadBodyLootPoint_C;          // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AZombie_C*                              OwningZombie;                                      // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Reattached;                                        // 0x07C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ContainerBoxClosed();
	void DelayedReattachLootPoint();
	void ExecuteUbergraph_ZombieDeadBodyLootPoint(int32 EntryPoint);
	void Reattach_Loot_Point();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ZombieDeadBodyLootPoint_C">();
	}
	static class AZombieDeadBodyLootPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AZombieDeadBodyLootPoint_C>();
	}
};
static_assert(alignof(AZombieDeadBodyLootPoint_C) == 0x000010, "Wrong alignment on AZombieDeadBodyLootPoint_C");
static_assert(sizeof(AZombieDeadBodyLootPoint_C) == 0x0007D0, "Wrong size on AZombieDeadBodyLootPoint_C");
static_assert(offsetof(AZombieDeadBodyLootPoint_C, UberGraphFrame_ZombieDeadBodyLootPoint_C) == 0x0007B0, "Member 'AZombieDeadBodyLootPoint_C::UberGraphFrame_ZombieDeadBodyLootPoint_C' has a wrong offset!");
static_assert(offsetof(AZombieDeadBodyLootPoint_C, Capsule) == 0x0007B8, "Member 'AZombieDeadBodyLootPoint_C::Capsule' has a wrong offset!");
static_assert(offsetof(AZombieDeadBodyLootPoint_C, OwningZombie) == 0x0007C0, "Member 'AZombieDeadBodyLootPoint_C::OwningZombie' has a wrong offset!");
static_assert(offsetof(AZombieDeadBodyLootPoint_C, Reattached) == 0x0007C8, "Member 'AZombieDeadBodyLootPoint_C::Reattached' has a wrong offset!");

}
