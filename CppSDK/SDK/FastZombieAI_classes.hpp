#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FastZombieAI

#include "Basic.hpp"

#include "E_RunType_structs.hpp"
#include "S_FloatMinMax_structs.hpp"
#include "ParentZombieAI_classes.hpp"
#include "E_ZombiePosition_structs.hpp"
#include "E_AnimState_structs.hpp"
#include "DefaultItemInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FastZombieAI.FastZombieAI_C
// 0x0140 (0x0DF0 - 0x0CB0)
class AFastZombieAI_C final : public AParentZombieAI_C
{
public:
	class USkeletalMeshComponent*                 Hair;                                              // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head;                                              // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Zombie_torso_shooting_1;                           // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeadPercept;                                       // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_FloatMinMax                         RebirthDelay;                                      // 0x0CD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Uvidel__R;                                         // 0x0CE0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CE1[0x7];                                      // 0x0CE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           M_StandAttack_Left;                                // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_StandAttack_Right;                               // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_MoveAttack_Left;                                 // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_MoveAttack_Right;                                // 0x0D00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_JerkAttack;                                      // 0x0D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_AnimState                                   AnimState_RN;                                      // 0x0D10(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	E_ZombiePosition                              ZombiePosition_R;                                  // 0x0D11(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D12[0x6];                                      // 0x0D12(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          ReadyIdle_RN;                                      // 0x0D18(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          OnCar__R;                                          // 0x0D20(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D21[0x7];                                      // 0x0D21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RB_Vehicle_C*                       Car_R;                                             // 0x0D28(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                DistanceToCarSocket;                               // 0x0D30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           CarSockets;                                        // 0x0D40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   SocketName;                                        // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WithoutScream__R;                                  // 0x0D58(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Running__R;                                        // 0x0D59(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocFocus_;                                         // 0x0D5A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5B[0x5];                                      // 0x0D5B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            RunBS2_R;                                          // 0x0D60(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          StandartMoveTo_;                                   // 0x0D68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D69[0x7];                                      // 0x0D69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNavigationPath*                        Path;                                              // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_RunType                                     RunType_RN;                                        // 0x0D78(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D79[0x7];                                      // 0x0D79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ToStandDelay;                                      // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANavModifierVolume*                     NavMod;                                            // 0x0D88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        PrevSpeed;                                         // 0x0D90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsArmless_;                                        // 0x0D98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D99[0x7];                                      // 0x0D99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATargetPoint*                           TargetPoint;                                       // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Screamed;                                          // 0x0DB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB1[0x7];                                      // 0x0DB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDefaultItemInfo>               ItemsArray;                                        // 0x0DB8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class APawnLootZombie_C*                      LootPoint;                                         // 0x0DC8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         LootName;                                          // 0x0DD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsInCar;                                           // 0x0DE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFromCar;                                         // 0x0DE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE2[0x2];                                      // 0x0DE2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AudioTrack;                                        // 0x0DE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCutscene;                                        // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetMoveDirection();
	void OnRep_AnimState_RN();
	void OnRep_Lootpoint();
	void OnRep_ReadyIdle_RN();
	void OnRep_RunType_RN();
	void SpawnLootPoint();
	void IsPlayingAttackMontage_(bool* IsPlaying_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FastZombieAI_C">();
	}
	static class AFastZombieAI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFastZombieAI_C>();
	}
};
static_assert(alignof(AFastZombieAI_C) == 0x000010, "Wrong alignment on AFastZombieAI_C");
static_assert(sizeof(AFastZombieAI_C) == 0x000DF0, "Wrong size on AFastZombieAI_C");
static_assert(offsetof(AFastZombieAI_C, Hair) == 0x000CB0, "Member 'AFastZombieAI_C::Hair' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Head) == 0x000CB8, "Member 'AFastZombieAI_C::Head' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Zombie_torso_shooting_1) == 0x000CC0, "Member 'AFastZombieAI_C::Zombie_torso_shooting_1' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Arrow1) == 0x000CC8, "Member 'AFastZombieAI_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, HeadPercept) == 0x000CD0, "Member 'AFastZombieAI_C::HeadPercept' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, RebirthDelay) == 0x000CD8, "Member 'AFastZombieAI_C::RebirthDelay' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Uvidel__R) == 0x000CE0, "Member 'AFastZombieAI_C::Uvidel__R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, M_StandAttack_Left) == 0x000CE8, "Member 'AFastZombieAI_C::M_StandAttack_Left' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, M_StandAttack_Right) == 0x000CF0, "Member 'AFastZombieAI_C::M_StandAttack_Right' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, M_MoveAttack_Left) == 0x000CF8, "Member 'AFastZombieAI_C::M_MoveAttack_Left' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, M_MoveAttack_Right) == 0x000D00, "Member 'AFastZombieAI_C::M_MoveAttack_Right' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, M_JerkAttack) == 0x000D08, "Member 'AFastZombieAI_C::M_JerkAttack' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, AnimState_RN) == 0x000D10, "Member 'AFastZombieAI_C::AnimState_RN' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, ZombiePosition_R) == 0x000D11, "Member 'AFastZombieAI_C::ZombiePosition_R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, ReadyIdle_RN) == 0x000D18, "Member 'AFastZombieAI_C::ReadyIdle_RN' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, OnCar__R) == 0x000D20, "Member 'AFastZombieAI_C::OnCar__R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Car_R) == 0x000D28, "Member 'AFastZombieAI_C::Car_R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, DistanceToCarSocket) == 0x000D30, "Member 'AFastZombieAI_C::DistanceToCarSocket' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, CarSockets) == 0x000D40, "Member 'AFastZombieAI_C::CarSockets' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, SocketName) == 0x000D50, "Member 'AFastZombieAI_C::SocketName' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, WithoutScream__R) == 0x000D58, "Member 'AFastZombieAI_C::WithoutScream__R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Running__R) == 0x000D59, "Member 'AFastZombieAI_C::Running__R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, LocFocus_) == 0x000D5A, "Member 'AFastZombieAI_C::LocFocus_' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, RunBS2_R) == 0x000D60, "Member 'AFastZombieAI_C::RunBS2_R' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, StandartMoveTo_) == 0x000D68, "Member 'AFastZombieAI_C::StandartMoveTo_' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Path) == 0x000D70, "Member 'AFastZombieAI_C::Path' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, RunType_RN) == 0x000D78, "Member 'AFastZombieAI_C::RunType_RN' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, ToStandDelay) == 0x000D80, "Member 'AFastZombieAI_C::ToStandDelay' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, NavMod) == 0x000D88, "Member 'AFastZombieAI_C::NavMod' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, PrevSpeed) == 0x000D90, "Member 'AFastZombieAI_C::PrevSpeed' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, IsArmless_) == 0x000D98, "Member 'AFastZombieAI_C::IsArmless_' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, TargetPoint) == 0x000DA0, "Member 'AFastZombieAI_C::TargetPoint' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Distance) == 0x000DA8, "Member 'AFastZombieAI_C::Distance' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, Screamed) == 0x000DB0, "Member 'AFastZombieAI_C::Screamed' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, ItemsArray) == 0x000DB8, "Member 'AFastZombieAI_C::ItemsArray' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, LootPoint) == 0x000DC8, "Member 'AFastZombieAI_C::LootPoint' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, LootName) == 0x000DD0, "Member 'AFastZombieAI_C::LootName' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, IsInCar) == 0x000DE0, "Member 'AFastZombieAI_C::IsInCar' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, IsFromCar) == 0x000DE1, "Member 'AFastZombieAI_C::IsFromCar' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, AudioTrack) == 0x000DE4, "Member 'AFastZombieAI_C::AudioTrack' has a wrong offset!");
static_assert(offsetof(AFastZombieAI_C, IsCutscene) == 0x000DE8, "Member 'AFastZombieAI_C::IsCutscene' has a wrong offset!");

}

