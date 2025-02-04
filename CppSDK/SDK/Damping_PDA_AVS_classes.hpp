#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Damping_PDA_AVS

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Damping_PDA_AVS.Damping_PDA_AVS_C
// 0x0040 (0x0070 - 0x0030)
class UDamping_PDA_AVS_C final : public UPrimaryDataAsset
{
public:
	double                                        Default;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Asphalt;                                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mud;                                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Grass;                                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Snow;                                              // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Ice;                                               // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offroad;                                           // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FlatTireMultiplier;                                // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetDampingFromSurface(EPhysicalSurface Surface, double* LinearDamping);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Damping_PDA_AVS_C">();
	}
	static class UDamping_PDA_AVS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamping_PDA_AVS_C>();
	}
};
static_assert(alignof(UDamping_PDA_AVS_C) == 0x000008, "Wrong alignment on UDamping_PDA_AVS_C");
static_assert(sizeof(UDamping_PDA_AVS_C) == 0x000070, "Wrong size on UDamping_PDA_AVS_C");
static_assert(offsetof(UDamping_PDA_AVS_C, Default) == 0x000030, "Member 'UDamping_PDA_AVS_C::Default' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Asphalt) == 0x000038, "Member 'UDamping_PDA_AVS_C::Asphalt' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Mud) == 0x000040, "Member 'UDamping_PDA_AVS_C::Mud' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Grass) == 0x000048, "Member 'UDamping_PDA_AVS_C::Grass' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Snow) == 0x000050, "Member 'UDamping_PDA_AVS_C::Snow' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Ice) == 0x000058, "Member 'UDamping_PDA_AVS_C::Ice' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, Offroad) == 0x000060, "Member 'UDamping_PDA_AVS_C::Offroad' has a wrong offset!");
static_assert(offsetof(UDamping_PDA_AVS_C, FlatTireMultiplier) == 0x000068, "Member 'UDamping_PDA_AVS_C::FlatTireMultiplier' has a wrong offset!");

}

