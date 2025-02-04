#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Service_Zombie_CheckDIstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C
// 0x00F8 (0x0190 - 0x0098)
class UService_Zombie_CheckDIstance_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Enemy;                                             // 0x00A0(0x0028)(Edit, BlueprintVisible)
	class AActor*                                 EnemyKey;                                          // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloseAttack;                                       // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NearAttack;                                        // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FarAttack;                                         // 0x00DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB[0x1];                                       // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AttackKey;                                         // 0x00DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResultAttack;                                      // 0x00E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AZombie_C*                              Zombie;                                            // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIMovementComponent_C*                 AIMoveComp;                                        // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 CheckDoor;                                         // 0x00F8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 NeedOpenDoorKey;                                   // 0x0120(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 DoorKey;                                           // 0x0148(0x0028)(Edit, BlueprintVisible)
	bool                                          TargetIsVehicle;                                   // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CloseAttackDistance;                               // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NearAttackFarDistance;                             // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FarAttackDistance;                                 // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckDoorInFront(bool* FoundDoor);
	void ExecuteUbergraph_Service_Zombie_CheckDIstance(int32 EntryPoint);
	bool GetCloseAttack();
	bool GetFarAttack();
	bool GetNearAttack();
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void SetupAllBooleans();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Service_Zombie_CheckDIstance_C">();
	}
	static class UService_Zombie_CheckDIstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UService_Zombie_CheckDIstance_C>();
	}
};
static_assert(alignof(UService_Zombie_CheckDIstance_C) == 0x000008, "Wrong alignment on UService_Zombie_CheckDIstance_C");
static_assert(sizeof(UService_Zombie_CheckDIstance_C) == 0x000190, "Wrong size on UService_Zombie_CheckDIstance_C");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, UberGraphFrame) == 0x000098, "Member 'UService_Zombie_CheckDIstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, Enemy) == 0x0000A0, "Member 'UService_Zombie_CheckDIstance_C::Enemy' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, EnemyKey) == 0x0000C8, "Member 'UService_Zombie_CheckDIstance_C::EnemyKey' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, Distance) == 0x0000D0, "Member 'UService_Zombie_CheckDIstance_C::Distance' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, CloseAttack) == 0x0000D8, "Member 'UService_Zombie_CheckDIstance_C::CloseAttack' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, NearAttack) == 0x0000D9, "Member 'UService_Zombie_CheckDIstance_C::NearAttack' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, FarAttack) == 0x0000DA, "Member 'UService_Zombie_CheckDIstance_C::FarAttack' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, AttackKey) == 0x0000DC, "Member 'UService_Zombie_CheckDIstance_C::AttackKey' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, ResultAttack) == 0x0000E4, "Member 'UService_Zombie_CheckDIstance_C::ResultAttack' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, Zombie) == 0x0000E8, "Member 'UService_Zombie_CheckDIstance_C::Zombie' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, AIMoveComp) == 0x0000F0, "Member 'UService_Zombie_CheckDIstance_C::AIMoveComp' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, CheckDoor) == 0x0000F8, "Member 'UService_Zombie_CheckDIstance_C::CheckDoor' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, NeedOpenDoorKey) == 0x000120, "Member 'UService_Zombie_CheckDIstance_C::NeedOpenDoorKey' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, DoorKey) == 0x000148, "Member 'UService_Zombie_CheckDIstance_C::DoorKey' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, TargetIsVehicle) == 0x000170, "Member 'UService_Zombie_CheckDIstance_C::TargetIsVehicle' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, CloseAttackDistance) == 0x000178, "Member 'UService_Zombie_CheckDIstance_C::CloseAttackDistance' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, NearAttackFarDistance) == 0x000180, "Member 'UService_Zombie_CheckDIstance_C::NearAttackFarDistance' has a wrong offset!");
static_assert(offsetof(UService_Zombie_CheckDIstance_C, FarAttackDistance) == 0x000188, "Member 'UService_Zombie_CheckDIstance_C::FarAttackDistance' has a wrong offset!");

}

