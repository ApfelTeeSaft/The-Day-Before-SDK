#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Survival

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Survival.EMovementType
// NumValues: 0x0007
enum class Survival::EMovementType : uint8
{
	EMT_SNEAK                                = 0,
	EMT_WALKSLOW                             = 1,
	EMT_WALK                                 = 2,
	EMT_TROT                                 = 3,
	EMT_RUN                                  = 4,
	EMT_SPRINT                               = 5,
	EMT_MAX                                  = 6,
};

// Enum Survival.UNegativeEffectDamageType
// NumValues: 0x0005
enum class EUNegativeEffectDamageType : uint8
{
	None                                     = 0,
	Bullet                                   = 1,
	Grenade                                  = 2,
	Zombie                                   = 3,
	UNegativeEffectDamageType_MAX            = 4,
};

// Enum Survival.UNegativeEffectType
// NumValues: 0x0009
enum class EUNegativeEffectType : uint8
{
	None                                     = 0,
	Bleeding                                 = 1,
	HeavyBleeding                            = 2,
	Chest                                    = 3,
	Stomach                                  = 4,
	Arm                                      = 5,
	Overweight                               = 6,
	Count                                    = 7,
	UNegativeEffectType_MAX                  = 8,
};

// Enum Survival.EUIType
// NumValues: 0x000B
enum class EUIType : uint8
{
	None                                     = 0,
	Gameplay                                 = 1,
	Inventory                                = 2,
	Loot                                     = 3,
	Craft                                    = 4,
	Workbench                                = 5,
	Trade                                    = 6,
	Vehicle                                  = 7,
	Pause                                    = 8,
	DeathScreen                              = 9,
	EUIType_MAX                              = 10,
};

// Enum Survival.SignificanceLevel
// NumValues: 0x0006
enum class ESignificanceLevel : uint8
{
	Lowest                                   = 0,
	Low                                      = 1,
	Medium                                   = 2,
	High                                     = 3,
	Highest                                  = 4,
	SignificanceLevel_MAX                    = 5,
};

// Enum Survival.EItemType
// NumValues: 0x0012
enum class EItemType : uint8
{
	None                                     = 0,
	Weapon                                   = 1,
	Equipment                                = 2,
	Backpack                                 = 3,
	Aid                                      = 4,
	Ammo                                     = 5,
	Food                                     = 6,
	Gasoline                                 = 7,
	RepairParts                              = 8,
	CarParts                                 = 9,
	WeaponModifier                           = 10,
	Drink                                    = 11,
	Other                                    = 12,
	Scrap                                    = 13,
	Pistol                                   = 14,
	Rifle                                    = 15,
	Shotgun                                  = 16,
	EItemType_MAX                            = 17,
};

// Enum Survival.SyncMode
// NumValues: 0x0009
enum class ESyncMode : uint8
{
	XYZ                                      = 0,
	XY                                       = 1,
	XZ                                       = 2,
	YZ                                       = 3,
	X                                        = 4,
	Y                                        = 5,
	Z                                        = 6,
	NONE                                     = 7,
	SyncMode_MAX                             = 8,
};

// Enum Survival.ExtrapolationMode
// NumValues: 0x0004
enum class ExtrapolationMode : uint8
{
	UNLIMITED                                = 0,
	LIMITED                                  = 1,
	NONE                                     = 2,
	ExtrapolationMode_MAX                    = 3,
};

// Enum Survival.RestState
// NumValues: 0x0004
enum class ERestState : uint8
{
	AT_REST                                  = 0,
	JUST_STARTED_MOVING                      = 1,
	MOVING                                   = 2,
	RestState_MAX                            = 3,
};

// Enum Survival.ESurvivalRHI
// NumValues: 0x0003
enum class ESurvivalRHI : uint8
{
	D3D11                                    = 0,
	D3D12                                    = 1,
	ESurvivalRHI_MAX                         = 2,
};

// Enum Survival.EPFJson
// NumValues: 0x0008
enum class EPFJson : uint8
{
	None                                     = 0,
	Null                                     = 1,
	String                                   = 2,
	Number                                   = 3,
	Boolean                                  = 4,
	Array                                    = 5,
	Object                                   = 6,
	EPFJson_MAX                              = 7,
};

// Enum Survival.EZombieAnimType
// NumValues: 0x0007
enum class EZombieAnimType : uint8
{
	EZAT_DEFAULT                             = 0,
	EZAT_LYING                               = 1,
	EZAT_FIRSTSITTING                        = 2,
	EZAT_SECONDSITTING                       = 3,
	EZAT_CAR                                 = 4,
	EZAT_SLEEPING                            = 5,
	EZAT_MAX                                 = 6,
};

// Enum Survival.EZombieType
// NumValues: 0x0008
enum class EZombieType : uint8
{
	EZT_RANDOM                               = 0,
	EZT_DAY                                  = 1,
	EZT_NIGHT                                = 2,
	EZT_SWAT                                 = 3,
	EZT_WITCH                                = 4,
	EZT_SOLDIER                              = 5,
	EZT_CLOWN                                = 6,
	EZT_MAX                                  = 7,
};

// ScriptStruct Survival.BreathStateMachineStruct
// 0x0009 (0x0009 - 0x0000)
struct FBreathStateMachineStruct final
{
public:
	bool                                          Death;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TakingDamage;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Jump;                                              // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Sprint;                                            // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StaminaRestoring;                                  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Jog;                                               // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Thirst;                                            // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LOWHP;                                             // 0x0007(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Bleeding;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBreathStateMachineStruct) == 0x000001, "Wrong alignment on FBreathStateMachineStruct");
static_assert(sizeof(FBreathStateMachineStruct) == 0x000009, "Wrong size on FBreathStateMachineStruct");
static_assert(offsetof(FBreathStateMachineStruct, Death) == 0x000000, "Member 'FBreathStateMachineStruct::Death' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, TakingDamage) == 0x000001, "Member 'FBreathStateMachineStruct::TakingDamage' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, Jump) == 0x000002, "Member 'FBreathStateMachineStruct::Jump' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, Sprint) == 0x000003, "Member 'FBreathStateMachineStruct::Sprint' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, StaminaRestoring) == 0x000004, "Member 'FBreathStateMachineStruct::StaminaRestoring' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, Jog) == 0x000005, "Member 'FBreathStateMachineStruct::Jog' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, Thirst) == 0x000006, "Member 'FBreathStateMachineStruct::Thirst' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, LOWHP) == 0x000007, "Member 'FBreathStateMachineStruct::LOWHP' has a wrong offset!");
static_assert(offsetof(FBreathStateMachineStruct, Bleeding) == 0x000008, "Member 'FBreathStateMachineStruct::Bleeding' has a wrong offset!");

// ScriptStruct Survival.BreathStateChangedStruct
// 0x0014 (0x0014 - 0x0000)
struct FBreathStateChangedStruct final
{
public:
	struct FBreathStateMachineStruct              NewState;                                          // 0x0000(0x0009)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentStamina;                                    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DamagedChest;                                      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DamagedBelly;                                      // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Painkiller;                                        // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBreathStateChangedStruct) == 0x000004, "Wrong alignment on FBreathStateChangedStruct");
static_assert(sizeof(FBreathStateChangedStruct) == 0x000014, "Wrong size on FBreathStateChangedStruct");
static_assert(offsetof(FBreathStateChangedStruct, NewState) == 0x000000, "Member 'FBreathStateChangedStruct::NewState' has a wrong offset!");
static_assert(offsetof(FBreathStateChangedStruct, CurrentStamina) == 0x00000C, "Member 'FBreathStateChangedStruct::CurrentStamina' has a wrong offset!");
static_assert(offsetof(FBreathStateChangedStruct, DamagedChest) == 0x000010, "Member 'FBreathStateChangedStruct::DamagedChest' has a wrong offset!");
static_assert(offsetof(FBreathStateChangedStruct, DamagedBelly) == 0x000011, "Member 'FBreathStateChangedStruct::DamagedBelly' has a wrong offset!");
static_assert(offsetof(FBreathStateChangedStruct, Painkiller) == 0x000012, "Member 'FBreathStateChangedStruct::Painkiller' has a wrong offset!");

// ScriptStruct Survival.S_NegativeEffects
// 0x0040 (0x0048 - 0x0008)
struct FS_NegativeEffects final : public FTableRowBase
{
public:
	TArray<float>                                 Health;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<float>                                 Chance;                                            // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<float>                                 WithArmorChance;                                   // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                           Bones;                                             // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FS_NegativeEffects) == 0x000008, "Wrong alignment on FS_NegativeEffects");
static_assert(sizeof(FS_NegativeEffects) == 0x000048, "Wrong size on FS_NegativeEffects");
static_assert(offsetof(FS_NegativeEffects, Health) == 0x000008, "Member 'FS_NegativeEffects::Health' has a wrong offset!");
static_assert(offsetof(FS_NegativeEffects, Chance) == 0x000018, "Member 'FS_NegativeEffects::Chance' has a wrong offset!");
static_assert(offsetof(FS_NegativeEffects, WithArmorChance) == 0x000028, "Member 'FS_NegativeEffects::WithArmorChance' has a wrong offset!");
static_assert(offsetof(FS_NegativeEffects, Bones) == 0x000038, "Member 'FS_NegativeEffects::Bones' has a wrong offset!");

// ScriptStruct Survival.Gib
// 0x0078 (0x0078 - 0x0000)
struct FGib final
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>     GibsMeshs;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        EllipsoidSizes;                                    // 0x0010(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFloatRange                            EllipsoidSizeX;                                    // 0x0020(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                            EllipsoidSizeY;                                    // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                            EllipsoidSizeZ;                                    // 0x0040(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocationOffset;                                 // 0x0050(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0068(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bHideBones : 1;                                    // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHideChildBones : 1;                               // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseRandomEllipsoids : 1;                          // 0x0070(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGib) == 0x000008, "Wrong alignment on FGib");
static_assert(sizeof(FGib) == 0x000078, "Wrong size on FGib");
static_assert(offsetof(FGib, GibsMeshs) == 0x000000, "Member 'FGib::GibsMeshs' has a wrong offset!");
static_assert(offsetof(FGib, EllipsoidSizes) == 0x000010, "Member 'FGib::EllipsoidSizes' has a wrong offset!");
static_assert(offsetof(FGib, EllipsoidSizeX) == 0x000020, "Member 'FGib::EllipsoidSizeX' has a wrong offset!");
static_assert(offsetof(FGib, EllipsoidSizeY) == 0x000030, "Member 'FGib::EllipsoidSizeY' has a wrong offset!");
static_assert(offsetof(FGib, EllipsoidSizeZ) == 0x000040, "Member 'FGib::EllipsoidSizeZ' has a wrong offset!");
static_assert(offsetof(FGib, HitLocationOffset) == 0x000050, "Member 'FGib::HitLocationOffset' has a wrong offset!");
static_assert(offsetof(FGib, SocketName) == 0x000068, "Member 'FGib::SocketName' has a wrong offset!");

// ScriptStruct Survival.SItemChanceCountBalance
// 0x0008 (0x0008 - 0x0000)
struct FSItemChanceCountBalance final
{
public:
	float                                         Chance;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSItemChanceCountBalance) == 0x000004, "Wrong alignment on FSItemChanceCountBalance");
static_assert(sizeof(FSItemChanceCountBalance) == 0x000008, "Wrong size on FSItemChanceCountBalance");
static_assert(offsetof(FSItemChanceCountBalance, Chance) == 0x000000, "Member 'FSItemChanceCountBalance::Chance' has a wrong offset!");
static_assert(offsetof(FSItemChanceCountBalance, Count) == 0x000004, "Member 'FSItemChanceCountBalance::Count' has a wrong offset!");

// ScriptStruct Survival.SItemTypeBalance
// 0x0018 (0x0018 - 0x0000)
struct FSItemTypeBalance final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSItemChanceCountBalance>       CountBalance;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSItemTypeBalance) == 0x000008, "Wrong alignment on FSItemTypeBalance");
static_assert(sizeof(FSItemTypeBalance) == 0x000018, "Wrong size on FSItemTypeBalance");
static_assert(offsetof(FSItemTypeBalance, ItemType) == 0x000000, "Member 'FSItemTypeBalance::ItemType' has a wrong offset!");
static_assert(offsetof(FSItemTypeBalance, CountBalance) == 0x000008, "Member 'FSItemTypeBalance::CountBalance' has a wrong offset!");

// ScriptStruct Survival.AnimalPath
// 0x0020 (0x0020 - 0x0000)
struct FAnimalPath final
{
public:
	TArray<struct FVector>                        Path;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        PredictPath;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnimalPath) == 0x000008, "Wrong alignment on FAnimalPath");
static_assert(sizeof(FAnimalPath) == 0x000020, "Wrong size on FAnimalPath");
static_assert(offsetof(FAnimalPath, Path) == 0x000000, "Member 'FAnimalPath::Path' has a wrong offset!");
static_assert(offsetof(FAnimalPath, PredictPath) == 0x000010, "Member 'FAnimalPath::PredictPath' has a wrong offset!");

// ScriptStruct Survival.AnimalSteps
// 0x0010 (0x0010 - 0x0000)
struct FAnimalSteps final
{
public:
	TArray<class AActor*>                         StepObjects;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnimalSteps) == 0x000008, "Wrong alignment on FAnimalSteps");
static_assert(sizeof(FAnimalSteps) == 0x000010, "Wrong size on FAnimalSteps");
static_assert(offsetof(FAnimalSteps, StepObjects) == 0x000000, "Member 'FAnimalSteps::StepObjects' has a wrong offset!");

// ScriptStruct Survival.DisplayDeviceAndSupportedResolutions
// 0x0030 (0x0030 - 0x0000)
struct FDisplayDeviceAndSupportedResolutions final
{
public:
	int32                                         DeviceNumber;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DeviceName;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIntPoint>                      SupportedResolutions;                              // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          IsPrimary;                                         // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDisplayDeviceAndSupportedResolutions) == 0x000008, "Wrong alignment on FDisplayDeviceAndSupportedResolutions");
static_assert(sizeof(FDisplayDeviceAndSupportedResolutions) == 0x000030, "Wrong size on FDisplayDeviceAndSupportedResolutions");
static_assert(offsetof(FDisplayDeviceAndSupportedResolutions, DeviceNumber) == 0x000000, "Member 'FDisplayDeviceAndSupportedResolutions::DeviceNumber' has a wrong offset!");
static_assert(offsetof(FDisplayDeviceAndSupportedResolutions, DeviceName) == 0x000008, "Member 'FDisplayDeviceAndSupportedResolutions::DeviceName' has a wrong offset!");
static_assert(offsetof(FDisplayDeviceAndSupportedResolutions, SupportedResolutions) == 0x000018, "Member 'FDisplayDeviceAndSupportedResolutions::SupportedResolutions' has a wrong offset!");
static_assert(offsetof(FDisplayDeviceAndSupportedResolutions, IsPrimary) == 0x000028, "Member 'FDisplayDeviceAndSupportedResolutions::IsPrimary' has a wrong offset!");

// ScriptStruct Survival.WepAnimInfo
// 0x0240 (0x0240 - 0x0000)
struct FWepAnimInfo final
{
public:
	TSoftObjectPtr<class UAnimSequence>           StandIdleAim;                                      // 0x0000(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           CrouchIdleAim;                                     // 0x0030(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           CrouchWalkAim;                                     // 0x0060(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           StandIdle;                                         // 0x0090(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           CrouchIdle;                                        // 0x00C0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           StandJogPose;                                      // 0x00F0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           CrouchWalkPose;                                    // 0x0120(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           SprintPose;                                        // 0x0150(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           HipFireStand;                                      // 0x0180(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>           HipFireCrouch;                                     // 0x01B0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAimOffsetBlendSpace>    WepAimOffset;                                      // 0x01E0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAimOffsetBlendSpace>    HipFireAimOffset;                                  // 0x0210(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWepAnimInfo) == 0x000008, "Wrong alignment on FWepAnimInfo");
static_assert(sizeof(FWepAnimInfo) == 0x000240, "Wrong size on FWepAnimInfo");
static_assert(offsetof(FWepAnimInfo, StandIdleAim) == 0x000000, "Member 'FWepAnimInfo::StandIdleAim' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, CrouchIdleAim) == 0x000030, "Member 'FWepAnimInfo::CrouchIdleAim' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, CrouchWalkAim) == 0x000060, "Member 'FWepAnimInfo::CrouchWalkAim' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, StandIdle) == 0x000090, "Member 'FWepAnimInfo::StandIdle' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, CrouchIdle) == 0x0000C0, "Member 'FWepAnimInfo::CrouchIdle' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, StandJogPose) == 0x0000F0, "Member 'FWepAnimInfo::StandJogPose' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, CrouchWalkPose) == 0x000120, "Member 'FWepAnimInfo::CrouchWalkPose' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, SprintPose) == 0x000150, "Member 'FWepAnimInfo::SprintPose' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, HipFireStand) == 0x000180, "Member 'FWepAnimInfo::HipFireStand' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, HipFireCrouch) == 0x0001B0, "Member 'FWepAnimInfo::HipFireCrouch' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, WepAimOffset) == 0x0001E0, "Member 'FWepAnimInfo::WepAimOffset' has a wrong offset!");
static_assert(offsetof(FWepAnimInfo, HipFireAimOffset) == 0x000210, "Member 'FWepAnimInfo::HipFireAimOffset' has a wrong offset!");

// ScriptStruct Survival.WepPhasedReload
// 0x0090 (0x0090 - 0x0000)
struct FWepPhasedReload final
{
public:
	TSoftObjectPtr<class UAnimMontage>            Begin;                                             // 0x0000(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>            Cycle;                                             // 0x0030(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>            End;                                               // 0x0060(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWepPhasedReload) == 0x000008, "Wrong alignment on FWepPhasedReload");
static_assert(sizeof(FWepPhasedReload) == 0x000090, "Wrong size on FWepPhasedReload");
static_assert(offsetof(FWepPhasedReload, Begin) == 0x000000, "Member 'FWepPhasedReload::Begin' has a wrong offset!");
static_assert(offsetof(FWepPhasedReload, Cycle) == 0x000030, "Member 'FWepPhasedReload::Cycle' has a wrong offset!");
static_assert(offsetof(FWepPhasedReload, End) == 0x000060, "Member 'FWepPhasedReload::End' has a wrong offset!");

}
