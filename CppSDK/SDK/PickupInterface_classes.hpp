#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PickupInterface.PickupInterface_C
// 0x0000 (0x0028 - 0x0028)
class IPickupInterface_C final : public IInterface
{
public:
	void GetMuzzleLocation(struct FVector* Muzzle);
	void GetPickupComponent(class UPickupComponent_C** PickupCompo);
	void GetSkeletalAsset(class USkeletalMesh** SkelRef);
	void SetEquipped(bool Equipped);
	void SetPickupPhysicsEnabled(bool Enable_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickupInterface_C">();
	}
	static class IPickupInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPickupInterface_C>();
	}
};
static_assert(alignof(IPickupInterface_C) == 0x000008, "Wrong alignment on IPickupInterface_C");
static_assert(sizeof(IPickupInterface_C) == 0x000028, "Wrong size on IPickupInterface_C");

}
