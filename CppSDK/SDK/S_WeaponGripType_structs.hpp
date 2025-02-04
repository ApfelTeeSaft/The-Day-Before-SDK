#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_WeaponGripType

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_WeaponGripType.S_WeaponGripType
// 0x0190 (0x0190 - 0x0000)
struct FS_WeaponGripType final
{
public:
	TMap<class FString, class UAnimSequence*>     GripTypeIdle_5_58B8ED2F41475C87A5BACCB445C946E3;   // 0x0000(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, class UAnimSequence*>     GripTypeAim_7_E9AEB01C4BCD3883DEA09A8337E4BF90;    // 0x0050(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, class UAnimSequence*>     GripCrouchTypeIdle_12_E7B67AA84A1B9405DC99839899CF3834; // 0x00A0(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, class UAnimSequence*>     GripCrouchTypeAim_14_0DD312CF4590B9F37E0F5CA2519DAC9B; // 0x00F0(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, class UAnimSequence*>     GripTypeFP_16_BD709BAA49AF7BE17F5B6BB89ADE7373;    // 0x0140(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_WeaponGripType) == 0x000008, "Wrong alignment on FS_WeaponGripType");
static_assert(sizeof(FS_WeaponGripType) == 0x000190, "Wrong size on FS_WeaponGripType");
static_assert(offsetof(FS_WeaponGripType, GripTypeIdle_5_58B8ED2F41475C87A5BACCB445C946E3) == 0x000000, "Member 'FS_WeaponGripType::GripTypeIdle_5_58B8ED2F41475C87A5BACCB445C946E3' has a wrong offset!");
static_assert(offsetof(FS_WeaponGripType, GripTypeAim_7_E9AEB01C4BCD3883DEA09A8337E4BF90) == 0x000050, "Member 'FS_WeaponGripType::GripTypeAim_7_E9AEB01C4BCD3883DEA09A8337E4BF90' has a wrong offset!");
static_assert(offsetof(FS_WeaponGripType, GripCrouchTypeIdle_12_E7B67AA84A1B9405DC99839899CF3834) == 0x0000A0, "Member 'FS_WeaponGripType::GripCrouchTypeIdle_12_E7B67AA84A1B9405DC99839899CF3834' has a wrong offset!");
static_assert(offsetof(FS_WeaponGripType, GripCrouchTypeAim_14_0DD312CF4590B9F37E0F5CA2519DAC9B) == 0x0000F0, "Member 'FS_WeaponGripType::GripCrouchTypeAim_14_0DD312CF4590B9F37E0F5CA2519DAC9B' has a wrong offset!");
static_assert(offsetof(FS_WeaponGripType, GripTypeFP_16_BD709BAA49AF7BE17F5B6BB89ADE7373) == 0x000140, "Member 'FS_WeaponGripType::GripTypeFP_16_BD709BAA49AF7BE17F5B6BB89ADE7373' has a wrong offset!");

}

