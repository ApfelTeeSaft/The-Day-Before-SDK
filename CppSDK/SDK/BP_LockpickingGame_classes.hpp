#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LockpickingGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_LockpickDifficulty_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LockpickingGame.BP_LockpickingGame_C
// 0x0170 (0x0400 - 0x0290)
class ABP_LockpickingGame_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Lockpick;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Screwdriver;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   InnerLock;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   OuterLock;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LockpickShakeTimeline_LockpickOffset_C67F41794F8CD653699ED6B5141ECBD7; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LockpickShakeTimeline__Direction_C67F41794F8CD653699ED6B5141ECBD7; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LockpickShakeTimeline;                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_LockpickDifficulty                          Difficulty;                                        // 0x02E0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStopLockpicking;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Lockpicking_C*                     WidgetRef;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              CachedController;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                        MaxLockAngle;                                      // 0x0308(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxLockpickAngle_absolute_;                        // 0x0310(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotateLockAxis;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LockRotationSpeed;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinUnlockAngle;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxUnlockAngle;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AllowedLockRotation;                               // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxLockMoveAngleFromValid;                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPicked;                                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsLockpickShaking_;                               // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LockpickShakeAmount;                               // 0x0360(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LockpickRotationSpeed;                             // 0x0368(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLockRotating_;                                  // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LockReverseRotationSpeed;                          // 0x0378(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EasyModeAngle;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MediumModeAngle;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HardModeAngle;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CachedPlayer;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTimerHandle                           ShakeTimerHandle;                                  // 0x03A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MultiplierAngleFromValid;                          // 0x03A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShakeDurationBeforeBreakage;                       // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShakeDurationForEasy;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShakeDurationForMedium;                            // 0x03C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShakeDurationForHard;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     ShakeSoundEvent;                                   // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     MoveLockpickSoundEvent;                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        CachedSignAxis;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     MoveLockSoundEvent;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        SavedShakeDurationBeforeBreakage;                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BrakeMultiplier;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BeginLockpickShake();
	void ExecuteUbergraph_BP_LockpickingGame(int32 EntryPoint);
	void HandleTick(double DeltaSeconds);
	void LockpickShakeTimeline__FinishedFunc();
	void LockpickShakeTimeline__UpdateFunc();
	void OnExit_Binding_();
	void OnPicked__DelegateSignature(bool Result);
	void OnStopLockpicking__DelegateSignature(bool Success);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void RotateLock(double Rotation);
	void RotateLockpick(double Rotation, bool* RotationWasChanged);
	void RotateLockpickEvent(double AxisValue);
	void RunFailureEvent();
	void RunSuccsesEvent();
	void SetLockpickOffset(double Offset);
	void SetLockRotation(double Rotation);
	void StartRotateLock();
	void StopLockpickShake();
	void StopRotateLock();
	void UpdateAllowedLockRotation();
	void UserConstructionScript();

	void GetLockpickRotation(double* Rotation) const;
	void GetLockRotation(double* Rotation) const;
	void IsLockpickInUnlockRange_(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LockpickingGame_C">();
	}
	static class ABP_LockpickingGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LockpickingGame_C>();
	}
};
static_assert(alignof(ABP_LockpickingGame_C) == 0x000008, "Wrong alignment on ABP_LockpickingGame_C");
static_assert(sizeof(ABP_LockpickingGame_C) == 0x000400, "Wrong size on ABP_LockpickingGame_C");
static_assert(offsetof(ABP_LockpickingGame_C, UberGraphFrame) == 0x000290, "Member 'ABP_LockpickingGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, Lockpick) == 0x000298, "Member 'ABP_LockpickingGame_C::Lockpick' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, SceneCaptureComponent2D) == 0x0002A0, "Member 'ABP_LockpickingGame_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, PointLight) == 0x0002A8, "Member 'ABP_LockpickingGame_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, Screwdriver) == 0x0002B0, "Member 'ABP_LockpickingGame_C::Screwdriver' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, InnerLock) == 0x0002B8, "Member 'ABP_LockpickingGame_C::InnerLock' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, OuterLock) == 0x0002C0, "Member 'ABP_LockpickingGame_C::OuterLock' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_LockpickingGame_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockpickShakeTimeline_LockpickOffset_C67F41794F8CD653699ED6B5141ECBD7) == 0x0002D0, "Member 'ABP_LockpickingGame_C::LockpickShakeTimeline_LockpickOffset_C67F41794F8CD653699ED6B5141ECBD7' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockpickShakeTimeline__Direction_C67F41794F8CD653699ED6B5141ECBD7) == 0x0002D4, "Member 'ABP_LockpickingGame_C::LockpickShakeTimeline__Direction_C67F41794F8CD653699ED6B5141ECBD7' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockpickShakeTimeline) == 0x0002D8, "Member 'ABP_LockpickingGame_C::LockpickShakeTimeline' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, Difficulty) == 0x0002E0, "Member 'ABP_LockpickingGame_C::Difficulty' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, OnStopLockpicking) == 0x0002E8, "Member 'ABP_LockpickingGame_C::OnStopLockpicking' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, WidgetRef) == 0x0002F8, "Member 'ABP_LockpickingGame_C::WidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, CachedController) == 0x000300, "Member 'ABP_LockpickingGame_C::CachedController' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MaxLockAngle) == 0x000308, "Member 'ABP_LockpickingGame_C::MaxLockAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MaxLockpickAngle_absolute_) == 0x000310, "Member 'ABP_LockpickingGame_C::MaxLockpickAngle_absolute_' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, RotateLockAxis) == 0x000318, "Member 'ABP_LockpickingGame_C::RotateLockAxis' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockRotationSpeed) == 0x000320, "Member 'ABP_LockpickingGame_C::LockRotationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MinUnlockAngle) == 0x000328, "Member 'ABP_LockpickingGame_C::MinUnlockAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MaxUnlockAngle) == 0x000330, "Member 'ABP_LockpickingGame_C::MaxUnlockAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, AllowedLockRotation) == 0x000338, "Member 'ABP_LockpickingGame_C::AllowedLockRotation' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MaxLockMoveAngleFromValid) == 0x000340, "Member 'ABP_LockpickingGame_C::MaxLockMoveAngleFromValid' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, OnPicked) == 0x000348, "Member 'ABP_LockpickingGame_C::OnPicked' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, bIsLockpickShaking_) == 0x000358, "Member 'ABP_LockpickingGame_C::bIsLockpickShaking_' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockpickShakeAmount) == 0x000360, "Member 'ABP_LockpickingGame_C::LockpickShakeAmount' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockpickRotationSpeed) == 0x000368, "Member 'ABP_LockpickingGame_C::LockpickRotationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, bIsLockRotating_) == 0x000370, "Member 'ABP_LockpickingGame_C::bIsLockRotating_' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, LockReverseRotationSpeed) == 0x000378, "Member 'ABP_LockpickingGame_C::LockReverseRotationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, EasyModeAngle) == 0x000380, "Member 'ABP_LockpickingGame_C::EasyModeAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MediumModeAngle) == 0x000388, "Member 'ABP_LockpickingGame_C::MediumModeAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, HardModeAngle) == 0x000390, "Member 'ABP_LockpickingGame_C::HardModeAngle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, CachedPlayer) == 0x000398, "Member 'ABP_LockpickingGame_C::CachedPlayer' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeTimerHandle) == 0x0003A0, "Member 'ABP_LockpickingGame_C::ShakeTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MultiplierAngleFromValid) == 0x0003A8, "Member 'ABP_LockpickingGame_C::MultiplierAngleFromValid' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeDurationBeforeBreakage) == 0x0003B0, "Member 'ABP_LockpickingGame_C::ShakeDurationBeforeBreakage' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeDurationForEasy) == 0x0003B8, "Member 'ABP_LockpickingGame_C::ShakeDurationForEasy' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeDurationForMedium) == 0x0003C0, "Member 'ABP_LockpickingGame_C::ShakeDurationForMedium' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeDurationForHard) == 0x0003C8, "Member 'ABP_LockpickingGame_C::ShakeDurationForHard' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, ShakeSoundEvent) == 0x0003D0, "Member 'ABP_LockpickingGame_C::ShakeSoundEvent' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MoveLockpickSoundEvent) == 0x0003D8, "Member 'ABP_LockpickingGame_C::MoveLockpickSoundEvent' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, CachedSignAxis) == 0x0003E0, "Member 'ABP_LockpickingGame_C::CachedSignAxis' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, MoveLockSoundEvent) == 0x0003E8, "Member 'ABP_LockpickingGame_C::MoveLockSoundEvent' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, SavedShakeDurationBeforeBreakage) == 0x0003F0, "Member 'ABP_LockpickingGame_C::SavedShakeDurationBeforeBreakage' has a wrong offset!");
static_assert(offsetof(ABP_LockpickingGame_C, BrakeMultiplier) == 0x0003F8, "Member 'ABP_LockpickingGame_C::BrakeMultiplier' has a wrong offset!");

}
