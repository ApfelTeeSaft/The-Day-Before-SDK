#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_BreathSystemReplication

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Survival_structs.hpp"
#include "Survival_classes.hpp"
#include "BreathStatesEnum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_BreathSystemReplication.BPC_BreathSystemReplication_C
// 0x0038 (0x00F0 - 0x00B8)
class UBPC_BreathSystemReplication_C final : public UBreathSystemReplication
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EBreathStatesEnum                             BreathState;                                       // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBreathStatesEnum                             PlayingEvent;                                      // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    FMOD_Breath_System;                                // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    FMOD_Sprint;                                       // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FBreathStateMachineStruct              BreathStateMachine;                                // 0x00D8(0x0009)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_V2_C*                   OwnerPlayer;                                       // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CalculateState(const struct FBreathStateChangedStruct& NewState);
	void CalculateStateServer(const struct FBreathStateChangedStruct& NewState);
	void CallBreathStateChange(const struct FBreathStateMachineStruct& NewState, double CurrentStamina, bool DamagedChest, bool DamagedBelly, bool Painkiller);
	void ExecuteUbergraph_BPC_BreathSystemReplication(int32 EntryPoint);
	void FMODBreathingStartEvent(class UFMODEvent* NewEvent, class UFMODAudioComponent* Active, class UFMODAudioComponent* Disabled);
	void OnBreathStateChanged(const struct FBreathStateChangedStruct& State);
	void OnStateChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_BreathSystemReplication_C">();
	}
	static class UBPC_BreathSystemReplication_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_BreathSystemReplication_C>();
	}
};
static_assert(alignof(UBPC_BreathSystemReplication_C) == 0x000008, "Wrong alignment on UBPC_BreathSystemReplication_C");
static_assert(sizeof(UBPC_BreathSystemReplication_C) == 0x0000F0, "Wrong size on UBPC_BreathSystemReplication_C");
static_assert(offsetof(UBPC_BreathSystemReplication_C, UberGraphFrame) == 0x0000B8, "Member 'UBPC_BreathSystemReplication_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, BreathState) == 0x0000C0, "Member 'UBPC_BreathSystemReplication_C::BreathState' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, PlayingEvent) == 0x0000C1, "Member 'UBPC_BreathSystemReplication_C::PlayingEvent' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, FMOD_Breath_System) == 0x0000C8, "Member 'UBPC_BreathSystemReplication_C::FMOD_Breath_System' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, FMOD_Sprint) == 0x0000D0, "Member 'UBPC_BreathSystemReplication_C::FMOD_Sprint' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, BreathStateMachine) == 0x0000D8, "Member 'UBPC_BreathSystemReplication_C::BreathStateMachine' has a wrong offset!");
static_assert(offsetof(UBPC_BreathSystemReplication_C, OwnerPlayer) == 0x0000E8, "Member 'UBPC_BreathSystemReplication_C::OwnerPlayer' has a wrong offset!");

}

