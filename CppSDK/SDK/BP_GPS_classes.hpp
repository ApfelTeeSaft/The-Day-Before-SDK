#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GPS

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GPS.BP_GPS_C
// 0x0008 (0x0298 - 0x0290)
class ABP_GPS_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 Gps;                                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GPS_C">();
	}
	static class ABP_GPS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GPS_C>();
	}
};
static_assert(alignof(ABP_GPS_C) == 0x000008, "Wrong alignment on ABP_GPS_C");
static_assert(sizeof(ABP_GPS_C) == 0x000298, "Wrong size on ABP_GPS_C");
static_assert(offsetof(ABP_GPS_C, Gps) == 0x000290, "Member 'ABP_GPS_C::Gps' has a wrong offset!");

}
