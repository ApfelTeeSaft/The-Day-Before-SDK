#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CarHit

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct CarHit.CarHit
// 0x0038 (0x0038 - 0x0000)
struct FCarHit final
{
public:
	EPhysicalSurface                              Surface_2_21E3B5554E49E8B72234638B7035EE31;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UParticleSystem>         Particle_6_15330AD04C02703F394C74ABF543A4E9;       // 0x0008(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FCarHit) == 0x000008, "Wrong alignment on FCarHit");
static_assert(sizeof(FCarHit) == 0x000038, "Wrong size on FCarHit");
static_assert(offsetof(FCarHit, Surface_2_21E3B5554E49E8B72234638B7035EE31) == 0x000000, "Member 'FCarHit::Surface_2_21E3B5554E49E8B72234638B7035EE31' has a wrong offset!");
static_assert(offsetof(FCarHit, Particle_6_15330AD04C02703F394C74ABF543A4E9) == 0x000008, "Member 'FCarHit::Particle_6_15330AD04C02703F394C74ABF543A4E9' has a wrong offset!");

}
