#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_Wheel

#include "Basic.hpp"

#include "VehicleSystemPlugin_structs.hpp"
#include "VehicleSystemPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SurfaceEffectConfig_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vehicle_Wheel.Vehicle_Wheel_C
// 0x0160 (0x0640 - 0x04E0)
class UVehicle_Wheel_C final : public UVehicleWheelBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Constructed;                                       // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9[0x7];                                      // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAVS_Vehicle_C*                         Vehicle;                                           // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    ParentPrim;                                        // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVehicleConstraint*                     SpringConstraint;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVehicleConstraint*                     TurnConstraint;                                    // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      PhysicsMaterial;                                   // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          OverrideWeight;                                    // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OverrideWeightKg;                                  // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WheelController;                                   // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ProjectedMesh;                                     // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_538[0x8];                                      // 0x0538(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnRelTransform;                                 // 0x0540(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Skid;                                              // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DesiredSkid;                                       // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SkidAudio;                                         // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        RotationSpeed;                                     // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBrakeLocked;                                     // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C1[0x7];                                      // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ActiveSkidParticle;                                // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        SkidEffectSpeed;                                   // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkidSounds;                                        // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D9[0x7];                                      // 0x05D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SkidSound;                                         // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          OverrideVehicleTorque;                             // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkidParticles;                                     // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA[0x6];                                      // 0x05EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        SkidParticle;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SkidParticleHeightOffset;                          // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSurfaceEffectConfig>           SurfaceEffects;                                    // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EPhysicalSurface                              LastSurfaceHit;                                    // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ActiveSkidSound;                                   // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ActiveSkidParticleTemplate;                        // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        WheelTorque;                                       // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CollideWhenDetached;                               // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PassiveState;                                      // 0x0631(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_632[0x6];                                      // 0x0632(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVehicleConstraint*                     BoneConstraint;                                    // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Attach(bool Param_ResetPosition, bool Force);
	void BreakAttachment();
	void CalculateSkidAmount();
	void CalculateSkidDirection(const struct FVector& Velocity, const struct FRotator& WheelForward, struct FRotator* MarkDirection);
	void ChangePassiveState(bool NewPassive);
	void ChangeStaticMesh(class UStaticMesh* NewMesh);
	void CleanupForDestroy();
	void CleanupSkidParticle();
	void ClearActiveParticle();
	void ConfigurePhysConstraints();
	void Construct();
	void CreatePhysConstraints();
	void CreateWheelController();
	void DebugWarningOrError(const class FString& Message, bool Error_);
	void DestroyPhysConstraints();
	void Detach();
	void ExecuteUbergraph_Vehicle_Wheel(int32 EntryPoint);
	void GetBrakePressure(double* BrakePressure);
	void GetConstraints(class UVehicleConstraint** Param_TurnConstraint, class UVehicleConstraint** Param_SpringConstraint);
	void GetEffectsForSurface(EPhysicalSurface Surface, class USoundBase** Param_SkidSound, class UParticleSystem** Param_SkidParticle);
	void GetInvertTorque(bool* IsInvertedTorque);
	void GetIsBrakeLocked(bool* Param_IsBrakeLocked);
	void GetIsDrivingWheel(bool* IsDrivingWheel);
	void GetIsHandbrakeWheel(bool* IsHandbrakeWheel);
	void GetIsLocked(bool* Param_IsLocked);
	void GetLastTouch(struct FHitResult* LastTouch);
	void GetProjectedMesh(class UPrimitiveComponent** Param_ProjectedMesh);
	void GetRollingResistance(double* RollingResistance);
	void GetRotationSpeed(double* Param_RotationSpeed);
	void GetSpringLength(double* SpringLength);
	void GetSuspensionPreview(bool* EditorPreview);
	void GetSuspensionSettings(float* SpringLength, float* SpringStrength, float* SpringDamping, double* Param_PhysicsDownforce);
	void GetWheelController(class UPrimitiveComponent** ControllerMesh);
	void GetWheelMesh(class UPrimitiveComponent** WheelMesh);
	void GetWheelRadius(double* BrakePressure);
	void GetWheelTorque(double* Param_WheelTorque);
	void InitBonePhysics();
	void InitializeWheel(class AAVS_Vehicle_C* Owner);
	void InitSkidParticles();
	void InitSkidSounds();
	void LockWheel(bool Lock);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ResetPosition();
	void ResetSteering();
	void SetChassisCollisions(bool Collision);
	void SetDriveMotor(bool EnableMotor);
	void SetIsBrakeLocked(bool Param_IsBrakeLocked);
	void SetIsDrivingWheel(bool IsDrivingWheel);
	void SetPhysics(bool Simulate_);
	void SetProjectedMesh(class UStaticMeshComponent* Param_ProjectedMesh);
	void SetSpringDamping(float SpringDamping);
	void SetSpringDownforce(float SpringDownforce);
	void SetSpringLength(float SpringLength);
	void SetSpringStrength(float SpringStrength);
	void SetSuspensionPreview(bool Preview);
	void SetSuspensionSettings(float Spring_Length, float Spring_Strength, float Spring_Damping);
	void SetVehicleTorque(double TargetSpeed, double Torque, bool Reverse);
	void SetWheelMode(EWheelMode NewMode);
	void SetWheelPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetWheelTorque(bool OverrideVehicle, double TargetSpeed, double Torque, bool Reverse);
	void StopSkidEffects();
	void SwapVisibleMesh(bool UseProjected);
	void TouchSurfaceChange();
	void UpdateConstraints();
	void UpdateRotationConstraint();
	void UpdateRotationSpeed();
	void UpdateSkid();
	void UpdateSkidEffects();
	void UpdateSpringConstraint();
	void UpdateSteering(double NewSteering);
	void UpdateWheel();
	void UpdateWheelMeshProperties();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vehicle_Wheel_C">();
	}
	static class UVehicle_Wheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicle_Wheel_C>();
	}
};
static_assert(alignof(UVehicle_Wheel_C) == 0x000010, "Wrong alignment on UVehicle_Wheel_C");
static_assert(sizeof(UVehicle_Wheel_C) == 0x000640, "Wrong size on UVehicle_Wheel_C");
static_assert(offsetof(UVehicle_Wheel_C, UberGraphFrame) == 0x0004E0, "Member 'UVehicle_Wheel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, Constructed) == 0x0004E8, "Member 'UVehicle_Wheel_C::Constructed' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, Vehicle) == 0x0004F0, "Member 'UVehicle_Wheel_C::Vehicle' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, ParentPrim) == 0x0004F8, "Member 'UVehicle_Wheel_C::ParentPrim' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SpringConstraint) == 0x000500, "Member 'UVehicle_Wheel_C::SpringConstraint' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, TurnConstraint) == 0x000508, "Member 'UVehicle_Wheel_C::TurnConstraint' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, PhysicsMaterial) == 0x000510, "Member 'UVehicle_Wheel_C::PhysicsMaterial' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, OverrideWeight) == 0x000518, "Member 'UVehicle_Wheel_C::OverrideWeight' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, OverrideWeightKg) == 0x000520, "Member 'UVehicle_Wheel_C::OverrideWeightKg' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, WheelController) == 0x000528, "Member 'UVehicle_Wheel_C::WheelController' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, ProjectedMesh) == 0x000530, "Member 'UVehicle_Wheel_C::ProjectedMesh' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SpawnRelTransform) == 0x000540, "Member 'UVehicle_Wheel_C::SpawnRelTransform' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, Skid) == 0x0005A0, "Member 'UVehicle_Wheel_C::Skid' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, DesiredSkid) == 0x0005A8, "Member 'UVehicle_Wheel_C::DesiredSkid' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidAudio) == 0x0005B0, "Member 'UVehicle_Wheel_C::SkidAudio' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, RotationSpeed) == 0x0005B8, "Member 'UVehicle_Wheel_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, IsBrakeLocked) == 0x0005C0, "Member 'UVehicle_Wheel_C::IsBrakeLocked' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, ActiveSkidParticle) == 0x0005C8, "Member 'UVehicle_Wheel_C::ActiveSkidParticle' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidEffectSpeed) == 0x0005D0, "Member 'UVehicle_Wheel_C::SkidEffectSpeed' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidSounds) == 0x0005D8, "Member 'UVehicle_Wheel_C::SkidSounds' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidSound) == 0x0005E0, "Member 'UVehicle_Wheel_C::SkidSound' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, OverrideVehicleTorque) == 0x0005E8, "Member 'UVehicle_Wheel_C::OverrideVehicleTorque' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidParticles) == 0x0005E9, "Member 'UVehicle_Wheel_C::SkidParticles' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidParticle) == 0x0005F0, "Member 'UVehicle_Wheel_C::SkidParticle' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SkidParticleHeightOffset) == 0x0005F8, "Member 'UVehicle_Wheel_C::SkidParticleHeightOffset' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, SurfaceEffects) == 0x000600, "Member 'UVehicle_Wheel_C::SurfaceEffects' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, LastSurfaceHit) == 0x000610, "Member 'UVehicle_Wheel_C::LastSurfaceHit' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, ActiveSkidSound) == 0x000618, "Member 'UVehicle_Wheel_C::ActiveSkidSound' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, ActiveSkidParticleTemplate) == 0x000620, "Member 'UVehicle_Wheel_C::ActiveSkidParticleTemplate' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, WheelTorque) == 0x000628, "Member 'UVehicle_Wheel_C::WheelTorque' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, CollideWhenDetached) == 0x000630, "Member 'UVehicle_Wheel_C::CollideWhenDetached' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, PassiveState) == 0x000631, "Member 'UVehicle_Wheel_C::PassiveState' has a wrong offset!");
static_assert(offsetof(UVehicle_Wheel_C, BoneConstraint) == 0x000638, "Member 'UVehicle_Wheel_C::BoneConstraint' has a wrong offset!");

}
