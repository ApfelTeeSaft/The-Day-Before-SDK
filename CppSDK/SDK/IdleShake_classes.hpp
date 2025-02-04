#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IdleShake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IdleShake.IdleShake_C
// 0x0010 (0x0100 - 0x00F0)
#pragma pack(push, 0x1)
class alignas(0x10) UIdleShake_C : public UCameraShakeBase
{
public:
	uint8                                         Pad_E8[0x8];                                       // 0x00E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_IdleShake(int32 EntryPoint);
	void ReceivePlayShake_1(float Scale);
	void Update_Settings_Rot_Oscillation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IdleShake_C">();
	}
	static class UIdleShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIdleShake_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UIdleShake_C) == 0x000010, "Wrong alignment on UIdleShake_C");
static_assert(sizeof(UIdleShake_C) == 0x000100, "Wrong size on UIdleShake_C");
static_assert(offsetof(UIdleShake_C, UberGraphFrame) == 0x0000F0, "Member 'UIdleShake_C::UberGraphFrame' has a wrong offset!");

}

