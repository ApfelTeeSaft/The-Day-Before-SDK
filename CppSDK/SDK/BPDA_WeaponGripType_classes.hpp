#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPDA_WeaponGripType

#include "Basic.hpp"

#include "S_WeaponGripType_structs.hpp"
#include "Engine_classes.hpp"
#include "S_WeaponGripTypeOffset_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPDA_WeaponGripType.BPDA_WeaponGripType_C
// 0x0320 (0x0350 - 0x0030)
class UBPDA_WeaponGripType_C final : public UPrimaryDataAsset
{
public:
	struct FS_WeaponGripType                      GripType;                                          // 0x0030(0x0190)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_WeaponGripTypeOffset                GripTypeOffset;                                    // 0x01C0(0x0190)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPDA_WeaponGripType_C">();
	}
	static class UBPDA_WeaponGripType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPDA_WeaponGripType_C>();
	}
};
static_assert(alignof(UBPDA_WeaponGripType_C) == 0x000008, "Wrong alignment on UBPDA_WeaponGripType_C");
static_assert(sizeof(UBPDA_WeaponGripType_C) == 0x000350, "Wrong size on UBPDA_WeaponGripType_C");
static_assert(offsetof(UBPDA_WeaponGripType_C, GripType) == 0x000030, "Member 'UBPDA_WeaponGripType_C::GripType' has a wrong offset!");
static_assert(offsetof(UBPDA_WeaponGripType_C, GripTypeOffset) == 0x0001C0, "Member 'UBPDA_WeaponGripType_C::GripTypeOffset' has a wrong offset!");

}
