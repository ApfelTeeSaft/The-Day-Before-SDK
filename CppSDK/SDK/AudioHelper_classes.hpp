#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioHelper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AudioHelper.AudioHelper_C
// 0x0000 (0x0028 - 0x0028)
class UAudioHelper_C final : public UBlueprintFunctionLibrary
{
public:
	static struct FFMODEventInstance FMODPlayEventAtLocation(class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay, class UObject* __WorldContext);
	static class UFMODAudioComponent* FMODPlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy, class UObject* __WorldContext);
	static class UFMODAudioComponent* FMODPlayEventAttachedBullet(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy, const struct FFMODOcclusionDetails& Occlusion, class UObject* __WorldContext);
	static void PlayEventWithOcclusion(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class UObject* __WorldContext, class UFMODAudioComponent** FMODAudioComponent);
	static void PlayForSurface(class AActor* Actor, class USceneComponent* AttachToComponent, class UFMODEvent* Default, class UFMODEvent* Asphalt, class UFMODEvent* Snow, class UFMODEvent* Dirt, class UFMODEvent* Wood, class UFMODEvent* Stone, class UFMODEvent* Ice, class UFMODEvent* Metal, class UFMODEvent* Carpet, class UFMODEvent* SnowFlat, class UFMODEvent* Concrete, class UFMODEvent* ConcreteWet, class UFMODEvent* GlassBroken, class UFMODEvent* Mud_Road, class UFMODEvent* Sand, class UFMODEvent* RUBBER, class UFMODEvent* Vegetable, class UFMODEvent* Tree, class UFMODEvent* Soil, class UFMODEvent* Grass, class UFMODEvent* Water, class UFMODEvent* Peeble, class UObject* __WorldContext, bool* IsFlatSurface);
	static void PlayStepForSurface(class AActor* Actor, class USceneComponent* AttachToComponent, class UFMODEvent* Default, class UFMODEvent* Asphalt, class UFMODEvent* Snow, class UFMODEvent* Dirt, class UFMODEvent* Wood, class UFMODEvent* Stone, class UFMODEvent* Ice, class UFMODEvent* Metal, class UFMODEvent* Carpet, class UFMODEvent* SnowFlat, class UFMODEvent* Concrete, class UFMODEvent* ConcreteWet, class UFMODEvent* GlassBroken, class UFMODEvent* Mud_Road, class UFMODEvent* Sand, class UFMODEvent* RUBBER, class UFMODEvent* Vegetable, class UFMODEvent* Tree, class UFMODEvent* Soil, class UFMODEvent* Grass, class UFMODEvent* Water, class UFMODEvent* Peeble, class UObject* __WorldContext, bool* IsFlatSurface);
	static class UFMODParamTask_C* SetFMODParam(class UFMODAudioComponent* FMODComp, class FName ParamName, double ToValue, double LerpTime, class UCurveFloat* CustomCurve, class UObject* __WorldContext);
	static void UnloadAllBanks(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioHelper_C">();
	}
	static class UAudioHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioHelper_C>();
	}
};
static_assert(alignof(UAudioHelper_C) == 0x000008, "Wrong alignment on UAudioHelper_C");
static_assert(sizeof(UAudioHelper_C) == 0x000028, "Wrong size on UAudioHelper_C");

}
