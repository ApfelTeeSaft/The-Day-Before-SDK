#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedThirdPersonCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "AdvancedThirdPersonCamera_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class AdvancedThirdPersonCamera.ATPCArrowDebugActor
// 0x0018 (0x02A8 - 0x0290)
class AATPCArrowDebugActor final : public AActor
{
public:
	class USceneComponent*                        SceneRootcomponent;                                // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                        ArrowComponent;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A0[0x8];                                      // 0x02A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PickActor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCArrowDebugActor">();
	}
	static class AATPCArrowDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AATPCArrowDebugActor>();
	}
};
static_assert(alignof(AATPCArrowDebugActor) == 0x000008, "Wrong alignment on AATPCArrowDebugActor");
static_assert(sizeof(AATPCArrowDebugActor) == 0x0002A8, "Wrong size on AATPCArrowDebugActor");
static_assert(offsetof(AATPCArrowDebugActor, SceneRootcomponent) == 0x000290, "Member 'AATPCArrowDebugActor::SceneRootcomponent' has a wrong offset!");
static_assert(offsetof(AATPCArrowDebugActor, ArrowComponent) == 0x000298, "Member 'AATPCArrowDebugActor::ArrowComponent' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraBaseObject
// 0x0008 (0x0030 - 0x0028)
class UATPCCameraBaseObject : public UObject
{
public:
	class UATPCCameraComponent*                   OwningCamera;                                      // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void K2_OnEnterCameraMode(bool bWithInterpolation);
	void K2_OnExitCameraMode();
	void K2_Tick(float DeltaSeconds);
	void K2_Validate(bool bWithInterpolation);
	void Validate(bool bWithInterpolation);

	class AActor* GetOwningActor() const;
	class UATPCCameraComponent* GetOwningCamera() const;
	class APawn* GetOwningPawn() const;
	class APlayerCameraManager* GetPlayerCameraManager() const;
	class APlayerController* GetPlayerController() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraBaseObject">();
	}
	static class UATPCCameraBaseObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraBaseObject>();
	}
};
static_assert(alignof(UATPCCameraBaseObject) == 0x000008, "Wrong alignment on UATPCCameraBaseObject");
static_assert(sizeof(UATPCCameraBaseObject) == 0x000030, "Wrong size on UATPCCameraBaseObject");
static_assert(offsetof(UATPCCameraBaseObject, OwningCamera) == 0x000028, "Member 'UATPCCameraBaseObject::OwningCamera' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraComponent
// 0x0460 (0x0700 - 0x02A0)
class UATPCCameraComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_             OnCameraModeChangedDelegate;                       // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FATPCCameraDebugRules                  DebugRules;                                        // 0x02B0(0x0007)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B7[0x1];                                      // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           DefaultCameraModeTag;                              // 0x02B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraModeDataAsset*>       CameraModesAssets;                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UATPCCameraModeDataAsset*> SortedCameraModes;                                 // 0x02D0(0x0050)(Protected, NativeAccessSpecifierProtected)
	class UATPCCameraModeDataAsset*               CustomCameraMode;                                  // 0x0320(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UATPCCameraLocationObject>  LocationObjectClass;                               // 0x0330(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFOVObject>       FOVObjectClass;                                    // 0x0338(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFadingObject>    FadingObjectClass;                                 // 0x0340(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFollowTerrainObject> FollowTerrainObjectClass;                          // 0x0348(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraShakesObject>    CameraShakesObjectClass;                           // 0x0350(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraLockOnTargetObject> LockOnTargetObjectClass;                           // 0x0358(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLocationObject*              LocationObject;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFOVObject*                   FOVObject;                                         // 0x0368(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFadingObject*                FadingObject;                                      // 0x0370(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFollowTerrainObject*         FollowTerrainObject;                               // 0x0378(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraShakesObject*                CameraShakesObject;                                // 0x0380(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLockOnTargetObject*          LockOnTargetObject;                                // 0x0388(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraBaseObject*>          CameraObjList;                                     // 0x0390(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_3A0[0x8];                                      // 0x03A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UATPCCameraModeDataAsset*               EmptyCameraMode;                                   // 0x03A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FATPCCameraMode                        CameraModeDEV;                                     // 0x03B0(0x0348)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_6F8[0x8];                                      // 0x06F8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddCameraMode(class UATPCCameraModeDataAsset* CameraMode);
	void ClearAllCameraModes();
	class UATPCCameraModeDataAsset* GetCameraMode(const struct FGameplayTag& CameraModeName);
	class UATPCCameraModeDataAsset* GetCurrentCameraMode();
	void OnCameraModeChangedDelegate__DelegateSignature();
	void RemoveCameraMode(const struct FGameplayTag& CameraModeName);
	void ResetCustomCameraMode(bool bWithInterpolation);
	void SetCameraDistance(float NewDistance, bool bInterpolate);
	void SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation, bool bForceSet);
	void SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation);
	void ValidateComponents(bool bWithInterpolation);
	void ZoomIn();
	void ZoomOut();

	bool CanSetCameraMode(const struct FGameplayTag& CameraModeTag) const;
	class AATPCCameraVolume* FindOverlapCameraVolume() const;
	float GetCameraDistance() const;
	class UATPCCameraFadingObject* GetCameraFadingObject() const;
	class UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject() const;
	class UATPCCameraFOVObject* GetCameraFOVObject() const;
	struct FVector GetCameraLocation() const;
	class UATPCCameraLocationObject* GetCameraLocationObject() const;
	class UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject() const;
	struct FGameplayTag GetCameraModeTagFromOverlapCameraVolume() const;
	struct FRotator GetCameraRotation() const;
	class UATPCCameraShakesObject* GetCameraShakesObject() const;
	struct FGameplayTag GetCurrentCameraModeTag() const;
	struct FGameplayTag GetDesiredCameraModeTag() const;
	struct FGameplayTag GetInitialCameraModeTag() const;
	class APawn* GetOwningPawn() const;
	class APlayerCameraManager* GetPlayerCameraManager() const;
	class APlayerController* GetPlayerController() const;
	bool HasCameraMode(const struct FGameplayTag& CameraModeName) const;
	bool IsCineCameraActive() const;
	bool IsSetCustomCameraMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraComponent">();
	}
	static class UATPCCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraComponent>();
	}
};
static_assert(alignof(UATPCCameraComponent) == 0x000010, "Wrong alignment on UATPCCameraComponent");
static_assert(sizeof(UATPCCameraComponent) == 0x000700, "Wrong size on UATPCCameraComponent");
static_assert(offsetof(UATPCCameraComponent, OnCameraModeChangedDelegate) == 0x0002A0, "Member 'UATPCCameraComponent::OnCameraModeChangedDelegate' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, DebugRules) == 0x0002B0, "Member 'UATPCCameraComponent::DebugRules' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, DefaultCameraModeTag) == 0x0002B8, "Member 'UATPCCameraComponent::DefaultCameraModeTag' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraModesAssets) == 0x0002C0, "Member 'UATPCCameraComponent::CameraModesAssets' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, SortedCameraModes) == 0x0002D0, "Member 'UATPCCameraComponent::SortedCameraModes' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CustomCameraMode) == 0x000320, "Member 'UATPCCameraComponent::CustomCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LocationObjectClass) == 0x000330, "Member 'UATPCCameraComponent::LocationObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FOVObjectClass) == 0x000338, "Member 'UATPCCameraComponent::FOVObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FadingObjectClass) == 0x000340, "Member 'UATPCCameraComponent::FadingObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FollowTerrainObjectClass) == 0x000348, "Member 'UATPCCameraComponent::FollowTerrainObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraShakesObjectClass) == 0x000350, "Member 'UATPCCameraComponent::CameraShakesObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LockOnTargetObjectClass) == 0x000358, "Member 'UATPCCameraComponent::LockOnTargetObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LocationObject) == 0x000360, "Member 'UATPCCameraComponent::LocationObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FOVObject) == 0x000368, "Member 'UATPCCameraComponent::FOVObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FadingObject) == 0x000370, "Member 'UATPCCameraComponent::FadingObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FollowTerrainObject) == 0x000378, "Member 'UATPCCameraComponent::FollowTerrainObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraShakesObject) == 0x000380, "Member 'UATPCCameraComponent::CameraShakesObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LockOnTargetObject) == 0x000388, "Member 'UATPCCameraComponent::LockOnTargetObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraObjList) == 0x000390, "Member 'UATPCCameraComponent::CameraObjList' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, EmptyCameraMode) == 0x0003A8, "Member 'UATPCCameraComponent::EmptyCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraModeDEV) == 0x0003B0, "Member 'UATPCCameraComponent::CameraModeDEV' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraFadingObject
// 0x00B0 (0x00E0 - 0x0030)
class UATPCCameraFadingObject : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_30[0xB0];                                      // 0x0030(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddIgnoredActor(class AActor* Actor);
	void AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime);
	void ClearIgnoredActors();
	void ClearManualFadeActors();
	void RemoveIgnoredActor(class AActor* Actor);
	void RemoveManualFadeActor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFadingObject">();
	}
	static class UATPCCameraFadingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFadingObject>();
	}
};
static_assert(alignof(UATPCCameraFadingObject) == 0x000008, "Wrong alignment on UATPCCameraFadingObject");
static_assert(sizeof(UATPCCameraFadingObject) == 0x0000E0, "Wrong size on UATPCCameraFadingObject");

// Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
// 0x0060 (0x0090 - 0x0030)
class UATPCCameraFollowTerrainObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_30[0x60];                                      // 0x0030(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFollowTerrainObject">();
	}
	static class UATPCCameraFollowTerrainObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFollowTerrainObject>();
	}
};
static_assert(alignof(UATPCCameraFollowTerrainObject) == 0x000008, "Wrong alignment on UATPCCameraFollowTerrainObject");
static_assert(sizeof(UATPCCameraFollowTerrainObject) == 0x000090, "Wrong size on UATPCCameraFollowTerrainObject");

// Class AdvancedThirdPersonCamera.ATPCCameraFOVObject
// 0x0000 (0x0030 - 0x0030)
class UATPCCameraFOVObject : public UATPCCameraBaseObject
{
public:
	float GetCurrentFOV() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFOVObject">();
	}
	static class UATPCCameraFOVObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFOVObject>();
	}
};
static_assert(alignof(UATPCCameraFOVObject) == 0x000008, "Wrong alignment on UATPCCameraFOVObject");
static_assert(sizeof(UATPCCameraFOVObject) == 0x000030, "Wrong size on UATPCCameraFOVObject");

// Class AdvancedThirdPersonCamera.ATPCCameraLocationObject
// 0x03A8 (0x03D8 - 0x0030)
#pragma pack(push, 0x1)
class alignas(0x08) UATPCCameraLocationObject : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_30[0x3A8];                                     // 0x0030(0x03A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, class FName SocketName, bool bWithInterp, float InterpSpeed);
	void ResetOverrideCameraRotation();
	void SetCameraDistance(float NewDist, bool bInterpolate);
	void SetOverrideCameraRotation(const struct FRotator& NewOverrideRotation, bool bClampByCameraModeRotationLimits);
	void SetViewRotation(const struct FRotator& Rotation);

	struct FVector GetAllSocketOffsets() const;
	float GetCameraDistance() const;
	struct FVector GetCameraLocation() const;
	struct FRotator GetCameraRotation() const;
	float GetCameraTargetDistance() const;
	struct FRotator GetDesiredRotation() const;
	const struct FRotator GetOverrideCameraRotation() const;
	float GetRealCameraDistance() const;
	struct FVector GetSocketOffset() const;
	struct FVector GetTargetOffset() const;
	struct FRotator GetTargetRotation() const;
	struct FRotator GetViewRotation() const;
	bool IsOverrideCameraRotation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraLocationObject">();
	}
	static class UATPCCameraLocationObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraLocationObject>();
	}
};
#pragma pack(pop)
static_assert(alignof(UATPCCameraLocationObject) == 0x000008, "Wrong alignment on UATPCCameraLocationObject");
static_assert(sizeof(UATPCCameraLocationObject) == 0x0003D8, "Wrong size on UATPCCameraLocationObject");

// Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
// 0x0060 (0x0090 - 0x0030)
class UATPCCameraLockOnTargetObject final : public UATPCCameraBaseObject
{
public:
	FMulticastInlineDelegateProperty_             OnTargetChangeDelegate;                            // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x30];                                      // 0x0040(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class AATPCArrowDebugActor*                   TargetDebugActor;                                  // 0x0070(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_78[0x18];                                      // 0x0078(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget, EATPCChangeTargetReason ChangeTargetReason);
	bool SetTargetActor(class AActor* NewTargetActor);

	class AActor* GetTargetActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraLockOnTargetObject">();
	}
	static class UATPCCameraLockOnTargetObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraLockOnTargetObject>();
	}
};
static_assert(alignof(UATPCCameraLockOnTargetObject) == 0x000008, "Wrong alignment on UATPCCameraLockOnTargetObject");
static_assert(sizeof(UATPCCameraLockOnTargetObject) == 0x000090, "Wrong size on UATPCCameraLockOnTargetObject");
static_assert(offsetof(UATPCCameraLockOnTargetObject, OnTargetChangeDelegate) == 0x000030, "Member 'UATPCCameraLockOnTargetObject::OnTargetChangeDelegate' has a wrong offset!");
static_assert(offsetof(UATPCCameraLockOnTargetObject, TargetDebugActor) == 0x000070, "Member 'UATPCCameraLockOnTargetObject::TargetDebugActor' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
// 0x0360 (0x0390 - 0x0030)
class UATPCCameraModeDataAsset final : public UDataAsset
{
public:
	struct FGameplayTag                           CameraModeTag;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCCameraMode                        CameraModeSettings;                                // 0x0038(0x0348)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UATPCCameraModeScript*>          CameraModeScripts;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeDataAsset">();
	}
	static class UATPCCameraModeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeDataAsset>();
	}
};
static_assert(alignof(UATPCCameraModeDataAsset) == 0x000008, "Wrong alignment on UATPCCameraModeDataAsset");
static_assert(sizeof(UATPCCameraModeDataAsset) == 0x000390, "Wrong size on UATPCCameraModeDataAsset");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeTag) == 0x000030, "Member 'UATPCCameraModeDataAsset::CameraModeTag' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeSettings) == 0x000038, "Member 'UATPCCameraModeDataAsset::CameraModeSettings' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeScripts) == 0x000380, "Member 'UATPCCameraModeDataAsset::CameraModeScripts' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript
// 0x0018 (0x0040 - 0x0028)
class UATPCCameraModeScript : public UObject
{
public:
	class UATPCCameraComponent*                   OwningCamera;                                      // 0x0028(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableTick;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EATPCCameraModeScriptTickGroup                TickGroup;                                         // 0x0034(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_OnEnterCameraMode(class UATPCCameraComponent* Camera);
	void K2_OnExitCameraMode(class UATPCCameraComponent* Camera);
	void K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript">();
	}
	static class UATPCCameraModeScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript>();
	}
};
static_assert(alignof(UATPCCameraModeScript) == 0x000008, "Wrong alignment on UATPCCameraModeScript");
static_assert(sizeof(UATPCCameraModeScript) == 0x000040, "Wrong size on UATPCCameraModeScript");
static_assert(offsetof(UATPCCameraModeScript, OwningCamera) == 0x000028, "Member 'UATPCCameraModeScript::OwningCamera' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript, bEnableTick) == 0x000030, "Member 'UATPCCameraModeScript::bEnableTick' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript, TickGroup) == 0x000034, "Member 'UATPCCameraModeScript::TickGroup' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
// 0x0010 (0x0050 - 0x0040)
class UATPCCameraModeScript_ChangeMovementSpeed final : public UATPCCameraModeScript
{
public:
	float                                         NewMaxMovementSpeed;                               // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRestoreOldMovementSpeedOnExitCameraMode;          // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OldMaxMovementSpeed;                               // 0x0048(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_ChangeMovementSpeed">();
	}
	static class UATPCCameraModeScript_ChangeMovementSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_ChangeMovementSpeed>();
	}
};
static_assert(alignof(UATPCCameraModeScript_ChangeMovementSpeed) == 0x000008, "Wrong alignment on UATPCCameraModeScript_ChangeMovementSpeed");
static_assert(sizeof(UATPCCameraModeScript_ChangeMovementSpeed) == 0x000050, "Wrong size on UATPCCameraModeScript_ChangeMovementSpeed");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, NewMaxMovementSpeed) == 0x000040, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::NewMaxMovementSpeed' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, bRestoreOldMovementSpeedOnExitCameraMode) == 0x000044, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::bRestoreOldMovementSpeedOnExitCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, OldMaxMovementSpeed) == 0x000048, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::OldMaxMovementSpeed' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
// 0x0008 (0x0048 - 0x0040)
class UATPCCameraModeScript_PawnUseControllerRotation final : public UATPCCameraModeScript
{
public:
	bool                                          OrientRotationToMovement;                          // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseControllerDesiredRotation;                      // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRestoreOldValuesOnExitCameraMode;                 // 0x0042(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OldOrientRotationToMovement;                       // 0x0043(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OldUseControllerDesiredRotation;                   // 0x0044(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_PawnUseControllerRotation">();
	}
	static class UATPCCameraModeScript_PawnUseControllerRotation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_PawnUseControllerRotation>();
	}
};
static_assert(alignof(UATPCCameraModeScript_PawnUseControllerRotation) == 0x000008, "Wrong alignment on UATPCCameraModeScript_PawnUseControllerRotation");
static_assert(sizeof(UATPCCameraModeScript_PawnUseControllerRotation) == 0x000048, "Wrong size on UATPCCameraModeScript_PawnUseControllerRotation");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OrientRotationToMovement) == 0x000040, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OrientRotationToMovement' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, UseControllerDesiredRotation) == 0x000041, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::UseControllerDesiredRotation' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, bRestoreOldValuesOnExitCameraMode) == 0x000042, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::bRestoreOldValuesOnExitCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OldOrientRotationToMovement) == 0x000043, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OldOrientRotationToMovement' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OldUseControllerDesiredRotation) == 0x000044, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OldUseControllerDesiredRotation' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
// 0x0008 (0x0048 - 0x0040)
class UATPCCameraModeScript_RotateActorToTarget final : public UATPCCameraModeScript
{
public:
	float                                         RotationSpeed;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_RotateActorToTarget">();
	}
	static class UATPCCameraModeScript_RotateActorToTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_RotateActorToTarget>();
	}
};
static_assert(alignof(UATPCCameraModeScript_RotateActorToTarget) == 0x000008, "Wrong alignment on UATPCCameraModeScript_RotateActorToTarget");
static_assert(sizeof(UATPCCameraModeScript_RotateActorToTarget) == 0x000048, "Wrong size on UATPCCameraModeScript_RotateActorToTarget");
static_assert(offsetof(UATPCCameraModeScript_RotateActorToTarget, RotationSpeed) == 0x000040, "Member 'UATPCCameraModeScript_RotateActorToTarget::RotationSpeed' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraShakesObject
// 0x0010 (0x0040 - 0x0030)
class UATPCCameraShakesObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraShakesObject">();
	}
	static class UATPCCameraShakesObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraShakesObject>();
	}
};
static_assert(alignof(UATPCCameraShakesObject) == 0x000008, "Wrong alignment on UATPCCameraShakesObject");
static_assert(sizeof(UATPCCameraShakesObject) == 0x000040, "Wrong size on UATPCCameraShakesObject");

// Class AdvancedThirdPersonCamera.ATPCCameraVolume
// 0x0020 (0x02E8 - 0x02C8)
class AATPCCameraVolume final : public AVolume
{
public:
	struct FGameplayTag                           CameraModeTag;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bChangeCameraModeWithInterp;                       // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckFilterActorClassWithCamera;                  // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D2[0x6];                                      // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class AActor>>             FilterActorClassesWithCamera;                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	void OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraVolume">();
	}
	static class AATPCCameraVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AATPCCameraVolume>();
	}
};
static_assert(alignof(AATPCCameraVolume) == 0x000008, "Wrong alignment on AATPCCameraVolume");
static_assert(sizeof(AATPCCameraVolume) == 0x0002E8, "Wrong size on AATPCCameraVolume");
static_assert(offsetof(AATPCCameraVolume, CameraModeTag) == 0x0002C8, "Member 'AATPCCameraVolume::CameraModeTag' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, bChangeCameraModeWithInterp) == 0x0002D0, "Member 'AATPCCameraVolume::bChangeCameraModeWithInterp' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, bCheckFilterActorClassWithCamera) == 0x0002D1, "Member 'AATPCCameraVolume::bCheckFilterActorClassWithCamera' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, FilterActorClassesWithCamera) == 0x0002D8, "Member 'AATPCCameraVolume::FilterActorClassesWithCamera' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UATPCFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float InterpFloat(const float& Current, const float& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
	static float InterpolationSpeed_GetCurrentInterpolationSpeed(const struct FATPCInterploationSpeed& InterpSpeed);
	static void InterpolationSpeed_InterpolateSpeed(struct FATPCInterploationSpeed* InterpSpeed, float DeltaTime);
	static void InterpolationSpeed_ResetSpeed(struct FATPCInterploationSpeed* InterpSpeed);
	static struct FRotator InterpRotator(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
	static struct FVector InterpVector(const struct FVector& Current, const struct FVector& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
	static bool ReplaceSpringArmToATPCComponent(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCFunctionLibrary">();
	}
	static class UATPCFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCFunctionLibrary>();
	}
};
static_assert(alignof(UATPCFunctionLibrary) == 0x000008, "Wrong alignment on UATPCFunctionLibrary");
static_assert(sizeof(UATPCFunctionLibrary) == 0x000028, "Wrong size on UATPCFunctionLibrary");

// Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
// 0x0000 (0x02A0 - 0x02A0)
class UATPCLockOnTargetLocationComponent final : public USceneComponent
{
public:
	struct FVector GetTargetLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCLockOnTargetLocationComponent">();
	}
	static class UATPCLockOnTargetLocationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCLockOnTargetLocationComponent>();
	}
};
static_assert(alignof(UATPCLockOnTargetLocationComponent) == 0x000010, "Wrong alignment on UATPCLockOnTargetLocationComponent");
static_assert(sizeof(UATPCLockOnTargetLocationComponent) == 0x0002A0, "Wrong size on UATPCLockOnTargetLocationComponent");

}
