#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_Bandit_SplineMoveTo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_Bandit_MovementMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C
// 0x00C8 (0x0170 - 0x00A8)
class UTask_Bandit_SplineMoveTo_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 BBKey;                                             // 0x00B0(0x0028)(Edit, BlueprintVisible)
	bool                                          Enemy_;                                            // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AcceptableRadius;                                  // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          Controller;                                        // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaS;                                            // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        Path;                                              // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PathLoc;                                           // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PathPrevLoc;                                       // 0x0120(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NeedAngle;                                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetVector;                                      // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FilterClass;                                       // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaDistanceToMove;                               // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalculateAngle(double* Angle, struct FRotator* Rot);
	void Debug();
	void ExecuteUbergraph_Task_Bandit_SplineMoveTo(int32 EntryPoint);
	void OnFail_454DFE0F4FE8221544021C9A98B42212(EPathFollowingResult MovementResult);
	void OnFail_5C538A7744043F743AD600858B7E3DDC(EPathFollowingResult MovementResult);
	void OnFail_B5DD2B4C406AD22E329C328B5AFBAB97(EPathFollowingResult MovementResult);
	void OnFail_EDCABC044790CF7C881E279AD76753E5(EPathFollowingResult MovementResult);
	void OnMoveFinished_69D377704ECBCE63938134B85B3B6FBC(EPathFollowingResult Result, class AAIController* AIController);
	void OnMoveFinished_DF1103574AEC383895FE67B593AC26B0(EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_69D377704ECBCE63938134B85B3B6FBC();
	void OnRequestFailed_DF1103574AEC383895FE67B593AC26B0();
	void OnSuccess_454DFE0F4FE8221544021C9A98B42212(EPathFollowingResult MovementResult);
	void OnSuccess_5C538A7744043F743AD600858B7E3DDC(EPathFollowingResult MovementResult);
	void OnSuccess_B5DD2B4C406AD22E329C328B5AFBAB97(EPathFollowingResult MovementResult);
	void OnSuccess_EDCABC044790CF7C881E279AD76753E5(EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_Bandit_SplineMoveTo_C">();
	}
	static class UTask_Bandit_SplineMoveTo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_Bandit_SplineMoveTo_C>();
	}
};
static_assert(alignof(UTask_Bandit_SplineMoveTo_C) == 0x000008, "Wrong alignment on UTask_Bandit_SplineMoveTo_C");
static_assert(sizeof(UTask_Bandit_SplineMoveTo_C) == 0x000170, "Wrong size on UTask_Bandit_SplineMoveTo_C");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_Bandit_SplineMoveTo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, BBKey) == 0x0000B0, "Member 'UTask_Bandit_SplineMoveTo_C::BBKey' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, Enemy_) == 0x0000D8, "Member 'UTask_Bandit_SplineMoveTo_C::Enemy_' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, AcceptableRadius) == 0x0000E0, "Member 'UTask_Bandit_SplineMoveTo_C::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, Controller) == 0x0000E8, "Member 'UTask_Bandit_SplineMoveTo_C::Controller' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, Pawn) == 0x0000F0, "Member 'UTask_Bandit_SplineMoveTo_C::Pawn' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, DeltaS) == 0x0000F8, "Member 'UTask_Bandit_SplineMoveTo_C::DeltaS' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, Path) == 0x000100, "Member 'UTask_Bandit_SplineMoveTo_C::Path' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, PathLoc) == 0x000108, "Member 'UTask_Bandit_SplineMoveTo_C::PathLoc' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, PathPrevLoc) == 0x000120, "Member 'UTask_Bandit_SplineMoveTo_C::PathPrevLoc' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, NeedAngle) == 0x000138, "Member 'UTask_Bandit_SplineMoveTo_C::NeedAngle' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, TargetActor) == 0x000140, "Member 'UTask_Bandit_SplineMoveTo_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, TargetVector) == 0x000148, "Member 'UTask_Bandit_SplineMoveTo_C::TargetVector' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, FilterClass) == 0x000160, "Member 'UTask_Bandit_SplineMoveTo_C::FilterClass' has a wrong offset!");
static_assert(offsetof(UTask_Bandit_SplineMoveTo_C, DeltaDistanceToMove) == 0x000168, "Member 'UTask_Bandit_SplineMoveTo_C::DeltaDistanceToMove' has a wrong offset!");

}

