#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BunkerSystem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BunkerSystem.BunkerSystem_C
// 0x0110 (0x0138 - 0x0028)
class UBunkerSystem_C final : public UObject
{
public:
	class ABunkerElevatorReciever_C*              PendingBunkerElevator;                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            BunkerMap;                                         // 0x0030(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABunkerElevatorSender_C*                CallerElevator;                                    // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BunkersData;                                       // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DefaultSkyLightIntensity;                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, double>                   BunkerLightMap;                                    // 0x0098(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, double>                   BunkerGeneratorEnabledIntensity;                   // 0x00E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void DoMagic();
	void GetBunkerGeneratorEnabledLight(const class FString& BunkerID, double* Light);
	void GetBunkerLevelNameByElevator(class ABunkerElevatorSender_C* Elevator, class FString* LevelName);
	void GetBunkerLevelNameByID(const class FString& ID, class FString* LevelName);
	void GetBunkerSkyLight(const class FString& BunkerID, double* Light);
	void HasBunker(const class FString& BunkerID, bool* Param_HasBunker);
	void HasBunkerGeneratorEnabledLight(const class FString& BunkerID, bool* Has);
	void HasBunkerSkyLight(const class FString& BunkerID, bool* Has);
	void Initialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BunkerSystem_C">();
	}
	static class UBunkerSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBunkerSystem_C>();
	}
};
static_assert(alignof(UBunkerSystem_C) == 0x000008, "Wrong alignment on UBunkerSystem_C");
static_assert(sizeof(UBunkerSystem_C) == 0x000138, "Wrong size on UBunkerSystem_C");
static_assert(offsetof(UBunkerSystem_C, PendingBunkerElevator) == 0x000028, "Member 'UBunkerSystem_C::PendingBunkerElevator' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, BunkerMap) == 0x000030, "Member 'UBunkerSystem_C::BunkerMap' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, CallerElevator) == 0x000080, "Member 'UBunkerSystem_C::CallerElevator' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, BunkersData) == 0x000088, "Member 'UBunkerSystem_C::BunkersData' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, DefaultSkyLightIntensity) == 0x000090, "Member 'UBunkerSystem_C::DefaultSkyLightIntensity' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, BunkerLightMap) == 0x000098, "Member 'UBunkerSystem_C::BunkerLightMap' has a wrong offset!");
static_assert(offsetof(UBunkerSystem_C, BunkerGeneratorEnabledIntensity) == 0x0000E8, "Member 'UBunkerSystem_C::BunkerGeneratorEnabledIntensity' has a wrong offset!");

}
