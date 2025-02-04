#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrenadeF1ShakeDefault

#include "Basic.hpp"

#include "IdleShake_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C
// 0x0000 (0x0100 - 0x0100)
class UGrenadeF1ShakeDefault_C final : public UIdleShake_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GrenadeF1ShakeDefault_C;            // 0x00F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GrenadeF1ShakeDefault(int32 EntryPoint);
	void Update_Settings_Rot_Oscillation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GrenadeF1ShakeDefault_C">();
	}
	static class UGrenadeF1ShakeDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrenadeF1ShakeDefault_C>();
	}
};
static_assert(alignof(UGrenadeF1ShakeDefault_C) == 0x000010, "Wrong alignment on UGrenadeF1ShakeDefault_C");
static_assert(sizeof(UGrenadeF1ShakeDefault_C) == 0x000100, "Wrong size on UGrenadeF1ShakeDefault_C");
static_assert(offsetof(UGrenadeF1ShakeDefault_C, UberGraphFrame_GrenadeF1ShakeDefault_C) == 0x0000F8, "Member 'UGrenadeF1ShakeDefault_C::UberGraphFrame_GrenadeF1ShakeDefault_C' has a wrong offset!");

}

