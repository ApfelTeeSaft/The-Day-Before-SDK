#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GPS_FP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GPS_FP.BP_GPS_FP_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_GPS_FP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       GPSWidget;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Gps;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            WidgetRef;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GPSMain_C*                         As_WBP_GPSMain;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GPS_FP(int32 EntryPoint);
	void GetGPSWidget(class UWBP_GPSMain_C** Param_As_WBP_GPSMain);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GPS_FP_C">();
	}
	static class ABP_GPS_FP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GPS_FP_C>();
	}
};
static_assert(alignof(ABP_GPS_FP_C) == 0x000008, "Wrong alignment on ABP_GPS_FP_C");
static_assert(sizeof(ABP_GPS_FP_C) == 0x0002C0, "Wrong size on ABP_GPS_FP_C");
static_assert(offsetof(ABP_GPS_FP_C, UberGraphFrame) == 0x000290, "Member 'ABP_GPS_FP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GPS_FP_C, GPSWidget) == 0x000298, "Member 'ABP_GPS_FP_C::GPSWidget' has a wrong offset!");
static_assert(offsetof(ABP_GPS_FP_C, Gps) == 0x0002A0, "Member 'ABP_GPS_FP_C::Gps' has a wrong offset!");
static_assert(offsetof(ABP_GPS_FP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_GPS_FP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GPS_FP_C, WidgetRef) == 0x0002B0, "Member 'ABP_GPS_FP_C::WidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_GPS_FP_C, As_WBP_GPSMain) == 0x0002B8, "Member 'ABP_GPS_FP_C::As_WBP_GPSMain' has a wrong offset!");

}
