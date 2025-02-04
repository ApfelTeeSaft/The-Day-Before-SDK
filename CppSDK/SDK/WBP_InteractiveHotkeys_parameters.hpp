#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InteractiveHotkeys

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "BPE_AmmoType_structs.hpp"
#include "BPE_FireMode_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"
#include "BPE_AmmoClass_structs.hpp"


namespace SDK::Params
{

// Function WBP_InteractiveHotkeys.WBP_InteractiveHotkeys_C.AmmoChangedEvent_Event
// 0x0018 (0x0018 - 0x0000)
struct WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event final
{
public:
	EBPE_Weapon_Type                              WeaponType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_FireMode                                 FireMode;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoClass                                AmmoClass;                                         // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentAmmo;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LowAmmo;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAmmo;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     UIIcon;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event) == 0x000008, "Wrong alignment on WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event");
static_assert(sizeof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event) == 0x000018, "Wrong size on WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, WeaponType) == 0x000000, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::WeaponType' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, FireMode) == 0x000001, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::FireMode' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, AmmoClass) == 0x000002, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::AmmoClass' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, CurrentAmmo) == 0x000004, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::CurrentAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, LowAmmo) == 0x000008, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::LowAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, MaxAmmo) == 0x00000C, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::MaxAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event, UIIcon) == 0x000010, "Member 'WBP_InteractiveHotkeys_C_AmmoChangedEvent_Event::UIIcon' has a wrong offset!");

// Function WBP_InteractiveHotkeys.WBP_InteractiveHotkeys_C.ExecuteUbergraph_WBP_InteractiveHotkeys
// 0x0068 (0x0068 - 0x0000)
struct WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_Weapon_Type                              K2Node_CustomEvent_WeaponType;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_FireMode                                 K2Node_CustomEvent_FireMode_1;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoClass                                K2Node_CustomEvent_AmmoClass;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_CurrentAmmo;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LowAmmo;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MaxAmmo;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_CustomEvent_UIIcon;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasGrenade_Has;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckAvailabilityAmmoType_bIsChangedAmmoType; // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoClass                                CallFunc_CheckAvailabilityAmmoType_SettedAmmoClass; // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoType                                 CallFunc_CheckAvailabilityAmmoType_SettedAmmoType; // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoType                                 CallFunc_SelectAmmoTypes_AmmoType_Default;         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoType                                 CallFunc_SelectAmmoTypes_AmmoType_Piercing;        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemCountByName_ReturnedCount;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemCountByName_ReturnedCount_1;       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_FireMode                                 K2Node_CustomEvent_FireMode;                       // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys) == 0x000008, "Wrong alignment on WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys");
static_assert(sizeof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys) == 0x000068, "Wrong size on WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, EntryPoint) == 0x000000, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_WeaponType) == 0x000004, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_WeaponType' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_FireMode_1) == 0x000005, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_FireMode_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_AmmoClass) == 0x000006, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_AmmoClass' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_CurrentAmmo) == 0x000008, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_CurrentAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_LowAmmo) == 0x00000C, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_LowAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_MaxAmmo) == 0x000010, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_MaxAmmo' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_UIIcon) == 0x000018, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_UIIcon' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_HasGrenade_Has) == 0x000021, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_HasGrenade_Has' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_CheckAvailabilityAmmoType_bIsChangedAmmoType) == 0x000022, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_CheckAvailabilityAmmoType_bIsChangedAmmoType' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_CheckAvailabilityAmmoType_SettedAmmoClass) == 0x000023, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_CheckAvailabilityAmmoType_SettedAmmoClass' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_CheckAvailabilityAmmoType_SettedAmmoType) == 0x000024, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_CheckAvailabilityAmmoType_SettedAmmoType' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_SelectAmmoTypes_AmmoType_Default) == 0x000025, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_SelectAmmoTypes_AmmoType_Default' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_SelectAmmoTypes_AmmoType_Piercing) == 0x000026, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_SelectAmmoTypes_AmmoType_Piercing' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000028, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_GetItemCountByName_ReturnedCount) == 0x00003C, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_GetItemCountByName_ReturnedCount' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000048, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_GetItemCountByName_ReturnedCount_1) == 0x00005C, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_GetItemCountByName_ReturnedCount_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_Event_IsDesignTime) == 0x000062, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys, K2Node_CustomEvent_FireMode) == 0x000063, "Member 'WBP_InteractiveHotkeys_C_ExecuteUbergraph_WBP_InteractiveHotkeys::K2Node_CustomEvent_FireMode' has a wrong offset!");

// Function WBP_InteractiveHotkeys.WBP_InteractiveHotkeys_C.FireModeChanged_Event
// 0x0001 (0x0001 - 0x0000)
struct WBP_InteractiveHotkeys_C_FireModeChanged_Event final
{
public:
	EBPE_FireMode                                 FireMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InteractiveHotkeys_C_FireModeChanged_Event) == 0x000001, "Wrong alignment on WBP_InteractiveHotkeys_C_FireModeChanged_Event");
static_assert(sizeof(WBP_InteractiveHotkeys_C_FireModeChanged_Event) == 0x000001, "Wrong size on WBP_InteractiveHotkeys_C_FireModeChanged_Event");
static_assert(offsetof(WBP_InteractiveHotkeys_C_FireModeChanged_Event, FireMode) == 0x000000, "Member 'WBP_InteractiveHotkeys_C_FireModeChanged_Event::FireMode' has a wrong offset!");

// Function WBP_InteractiveHotkeys.WBP_InteractiveHotkeys_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_InteractiveHotkeys_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InteractiveHotkeys_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_InteractiveHotkeys_C_PreConstruct");
static_assert(sizeof(WBP_InteractiveHotkeys_C_PreConstruct) == 0x000001, "Wrong size on WBP_InteractiveHotkeys_C_PreConstruct");
static_assert(offsetof(WBP_InteractiveHotkeys_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_InteractiveHotkeys_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_InteractiveHotkeys.WBP_InteractiveHotkeys_C.UpdateHotkeyState
// 0x0048 (0x0048 - 0x0000)
struct WBP_InteractiveHotkeys_C_UpdateHotkeyState final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_KeyIcon_C*                         KeyIcon;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   InActionName;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                HorizontalBox;                                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0030(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InteractiveHotkeys_C_UpdateHotkeyState) == 0x000008, "Wrong alignment on WBP_InteractiveHotkeys_C_UpdateHotkeyState");
static_assert(sizeof(WBP_InteractiveHotkeys_C_UpdateHotkeyState) == 0x000048, "Wrong size on WBP_InteractiveHotkeys_C_UpdateHotkeyState");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, Show) == 0x000000, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::Show' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, KeyIcon) == 0x000008, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::KeyIcon' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, InActionName) == 0x000010, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::InActionName' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, HorizontalBox) == 0x000018, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::HorizontalBox' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, Temp_byte_Variable) == 0x000020, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, Temp_byte_Variable_1) == 0x000021, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, Temp_bool_Variable) == 0x000022, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, CallFunc_GetInputSettings_ReturnValue) == 0x000028, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, CallFunc_GetActionMappingByName_OutMappings) == 0x000030, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(WBP_InteractiveHotkeys_C_UpdateHotkeyState, K2Node_Select_Default) == 0x000040, "Member 'WBP_InteractiveHotkeys_C_UpdateHotkeyState::K2Node_Select_Default' has a wrong offset!");

}

