#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DayCycle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DayCycle.BP_DayCycle_C
// 0x0090 (0x0320 - 0x0290)
class ABP_DayCycle_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Scene;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        TimeOfDay;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SecondsInDay;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewDayEvent;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        SecondsInHour;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DayStartTime;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NightStartTime;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DayPartID;                                         // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DayInMinutes;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NightInMinutes;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewCloudSpeed;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewStarsSpeed;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimateCycle;                                      // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SkyRecaptureTime;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCustomSecondsInDay;                             // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CustomSecondsInDay;                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DayCycle(int32 EntryPoint);
	void NewDayEvent__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DayCycle_C">();
	}
	static class ABP_DayCycle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DayCycle_C>();
	}
};
static_assert(alignof(ABP_DayCycle_C) == 0x000008, "Wrong alignment on ABP_DayCycle_C");
static_assert(sizeof(ABP_DayCycle_C) == 0x000320, "Wrong size on ABP_DayCycle_C");
static_assert(offsetof(ABP_DayCycle_C, UberGraphFrame) == 0x000290, "Member 'ABP_DayCycle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, Scene) == 0x000298, "Member 'ABP_DayCycle_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, TimeOfDay) == 0x0002A0, "Member 'ABP_DayCycle_C::TimeOfDay' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, SecondsInDay) == 0x0002A8, "Member 'ABP_DayCycle_C::SecondsInDay' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, NewDayEvent) == 0x0002B0, "Member 'ABP_DayCycle_C::NewDayEvent' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, SecondsInHour) == 0x0002C0, "Member 'ABP_DayCycle_C::SecondsInHour' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, DayStartTime) == 0x0002C8, "Member 'ABP_DayCycle_C::DayStartTime' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, NightStartTime) == 0x0002D0, "Member 'ABP_DayCycle_C::NightStartTime' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, DayPartID) == 0x0002D8, "Member 'ABP_DayCycle_C::DayPartID' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, DayInMinutes) == 0x0002E0, "Member 'ABP_DayCycle_C::DayInMinutes' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, NightInMinutes) == 0x0002E8, "Member 'ABP_DayCycle_C::NightInMinutes' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, NewCloudSpeed) == 0x0002F0, "Member 'ABP_DayCycle_C::NewCloudSpeed' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, NewStarsSpeed) == 0x0002F8, "Member 'ABP_DayCycle_C::NewStarsSpeed' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, AnimateCycle) == 0x000300, "Member 'ABP_DayCycle_C::AnimateCycle' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, SkyRecaptureTime) == 0x000308, "Member 'ABP_DayCycle_C::SkyRecaptureTime' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, UseCustomSecondsInDay) == 0x000310, "Member 'ABP_DayCycle_C::UseCustomSecondsInDay' has a wrong offset!");
static_assert(offsetof(ABP_DayCycle_C, CustomSecondsInDay) == 0x000318, "Member 'ABP_DayCycle_C::CustomSecondsInDay' has a wrong offset!");

}
