#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_InteractWithDoorHUB

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LS_InteractWithDoorHUB.LS_InteractWithDoorHUB_DirectorBP_C
// 0x0008 (0x0040 - 0x0038)
class ULS_InteractWithDoorHUB_DirectorBP_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_LS_InteractWithDoorHUB__Director_BP_(int32 EntryPoint);
	void PlayerPlaceholder_Event_0(class AActor* PlayerPlaceholder);
	void SequenceEvent__ENTRYPOINTLS_InteractWithDoorHUB__Director_BP_(class AActor* PlayerPlaceholder);
	void SurvivalPlayer_V2_Event_0(class ASurvivalPlayer_V2_C* SurvivalPlayer_V2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LS_InteractWithDoorHUB_DirectorBP_C">();
	}
	static class ULS_InteractWithDoorHUB_DirectorBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULS_InteractWithDoorHUB_DirectorBP_C>();
	}
};
static_assert(alignof(ULS_InteractWithDoorHUB_DirectorBP_C) == 0x000008, "Wrong alignment on ULS_InteractWithDoorHUB_DirectorBP_C");
static_assert(sizeof(ULS_InteractWithDoorHUB_DirectorBP_C) == 0x000040, "Wrong size on ULS_InteractWithDoorHUB_DirectorBP_C");
static_assert(offsetof(ULS_InteractWithDoorHUB_DirectorBP_C, UberGraphFrame) == 0x000038, "Member 'ULS_InteractWithDoorHUB_DirectorBP_C::UberGraphFrame' has a wrong offset!");

}
