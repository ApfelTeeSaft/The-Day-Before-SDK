#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_TurnAndScream

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_TurnAndScream.BTT_TurnAndScream_C
// 0x0068 (0x0110 - 0x00A8)
class UBTT_TurnAndScream_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AZombie_C*                              Zombie;                                            // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 TargetLocation;                                    // 0x00B8(0x0028)(Edit, BlueprintVisible)
	class UAIMovementComponent_C*                 AIMovementComp;                                    // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 Enemy;                                             // 0x00E8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_TurnAndScream(int32 EntryPoint);
	void GetDegreesForKey(double* Degrees);
	void OnEndScreaming();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_TurnAndScream_C">();
	}
	static class UBTT_TurnAndScream_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_TurnAndScream_C>();
	}
};
static_assert(alignof(UBTT_TurnAndScream_C) == 0x000008, "Wrong alignment on UBTT_TurnAndScream_C");
static_assert(sizeof(UBTT_TurnAndScream_C) == 0x000110, "Wrong size on UBTT_TurnAndScream_C");
static_assert(offsetof(UBTT_TurnAndScream_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_TurnAndScream_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_TurnAndScream_C, Zombie) == 0x0000B0, "Member 'UBTT_TurnAndScream_C::Zombie' has a wrong offset!");
static_assert(offsetof(UBTT_TurnAndScream_C, TargetLocation) == 0x0000B8, "Member 'UBTT_TurnAndScream_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBTT_TurnAndScream_C, AIMovementComp) == 0x0000E0, "Member 'UBTT_TurnAndScream_C::AIMovementComp' has a wrong offset!");
static_assert(offsetof(UBTT_TurnAndScream_C, Enemy) == 0x0000E8, "Member 'UBTT_TurnAndScream_C::Enemy' has a wrong offset!");

}

