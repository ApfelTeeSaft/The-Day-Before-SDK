#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElevatorTeleportRecieverV2

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ElevatorTeleportRecieverV2.ElevatorTeleportRecieverV2_C
// 0x0000 (0x0028 - 0x0028)
class IElevatorTeleportRecieverV2_C final : public IInterface
{
public:
	void CanRecieveActors(bool* CanRecieve);
	void GetDestination(struct FVector* Destination);
	void GetRotation(struct FRotator* Rotation);
	void PrepareForRecieve();
	void PreRecieve();
	void RecieveActors(class ATeleport_C* Sender);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ElevatorTeleportRecieverV2_C">();
	}
	static class IElevatorTeleportRecieverV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IElevatorTeleportRecieverV2_C>();
	}
};
static_assert(alignof(IElevatorTeleportRecieverV2_C) == 0x000008, "Wrong alignment on IElevatorTeleportRecieverV2_C");
static_assert(sizeof(IElevatorTeleportRecieverV2_C) == 0x000028, "Wrong size on IElevatorTeleportRecieverV2_C");

}

