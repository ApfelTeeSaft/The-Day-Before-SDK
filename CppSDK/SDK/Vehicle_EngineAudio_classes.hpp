#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_EngineAudio

#include "Basic.hpp"

#include "VehicleSystemPlugin_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vehicle_EngineAudio.Vehicle_EngineAudio_C
// 0x0060 (0x0300 - 0x02A0)
class UVehicle_EngineAudio_C final : public UVehicleComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AAVS_Vehicle_C*                         Owner;                                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        EngineAudio;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EngineStartSound;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              EngineSound;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HighRPM;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        EngineStartAudio;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           StartTimerTemp;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                      Engine_Attentuation;                               // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EngineRunning;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangePassiveState(bool NewPassive);
	void ClearStartTimer();
	void ExecuteUbergraph_Vehicle_EngineAudio(int32 EntryPoint);
	void PlaybackFade(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
	void PlayIgnition();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetEngineRunning(bool Param_EngineRunning);
	void StopSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vehicle_EngineAudio_C">();
	}
	static class UVehicle_EngineAudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicle_EngineAudio_C>();
	}
};
static_assert(alignof(UVehicle_EngineAudio_C) == 0x000010, "Wrong alignment on UVehicle_EngineAudio_C");
static_assert(sizeof(UVehicle_EngineAudio_C) == 0x000300, "Wrong size on UVehicle_EngineAudio_C");
static_assert(offsetof(UVehicle_EngineAudio_C, UberGraphFrame) == 0x0002A0, "Member 'UVehicle_EngineAudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, Owner) == 0x0002A8, "Member 'UVehicle_EngineAudio_C::Owner' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, EngineAudio) == 0x0002B0, "Member 'UVehicle_EngineAudio_C::EngineAudio' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, EngineStartSound) == 0x0002B8, "Member 'UVehicle_EngineAudio_C::EngineStartSound' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, EngineSound) == 0x0002C0, "Member 'UVehicle_EngineAudio_C::EngineSound' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, Initialized) == 0x0002C8, "Member 'UVehicle_EngineAudio_C::Initialized' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, HighRPM) == 0x0002D0, "Member 'UVehicle_EngineAudio_C::HighRPM' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, EngineStartAudio) == 0x0002D8, "Member 'UVehicle_EngineAudio_C::EngineStartAudio' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, StartTimerTemp) == 0x0002E0, "Member 'UVehicle_EngineAudio_C::StartTimerTemp' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, Engine_Attentuation) == 0x0002E8, "Member 'UVehicle_EngineAudio_C::Engine_Attentuation' has a wrong offset!");
static_assert(offsetof(UVehicle_EngineAudio_C, EngineRunning) == 0x0002F0, "Member 'UVehicle_EngineAudio_C::EngineRunning' has a wrong offset!");

}
