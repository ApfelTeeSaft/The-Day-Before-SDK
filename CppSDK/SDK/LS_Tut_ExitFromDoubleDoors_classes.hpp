#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_Tut_ExitFromDoubleDoors

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LS_Tut_ExitFromDoubleDoors.LS_Tut_ExitFromDoubleDoors_DirectorBP_C
// 0x0010 (0x0048 - 0x0038)
class ULS_Tut_ExitFromDoubleDoors_DirectorBP_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFMODEventInstance                     HubMUSICTOUR;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LS_Tut_ExitFromDoubleDoors_DirectorBP(int32 EntryPoint);
	void PlayerPlaceholder_Event(class AActor* PlayerPlaceholder);
	void PlayerPlaceholder_Event_0(class AActor* PlayerPlaceholder);
	void SequenceEvent();
	void SequenceEvent_0();
	void SequenceEvent_1();
	void SequenceEvent__ENTRYPOINTLS_Tut_ExitFromDoubleDoors_DirectorBP(class AActor* PlayerPlaceholder);
	void SequenceEvent__ENTRYPOINTLS_Tut_ExitFromDoubleDoors_DirectorBP_0();
	void SequenceEvent__ENTRYPOINTLS_Tut_ExitFromDoubleDoors_DirectorBP_1();
	void SequenceEvent__ENTRYPOINTLS_Tut_ExitFromDoubleDoors_DirectorBP_2();
	void SurvivalPlayer_V2_Event_0(class ASurvivalPlayer_V2_C* SurvivalPlayer_V2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LS_Tut_ExitFromDoubleDoors_DirectorBP_C">();
	}
	static class ULS_Tut_ExitFromDoubleDoors_DirectorBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULS_Tut_ExitFromDoubleDoors_DirectorBP_C>();
	}
};
static_assert(alignof(ULS_Tut_ExitFromDoubleDoors_DirectorBP_C) == 0x000008, "Wrong alignment on ULS_Tut_ExitFromDoubleDoors_DirectorBP_C");
static_assert(sizeof(ULS_Tut_ExitFromDoubleDoors_DirectorBP_C) == 0x000048, "Wrong size on ULS_Tut_ExitFromDoubleDoors_DirectorBP_C");
static_assert(offsetof(ULS_Tut_ExitFromDoubleDoors_DirectorBP_C, UberGraphFrame) == 0x000038, "Member 'ULS_Tut_ExitFromDoubleDoors_DirectorBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULS_Tut_ExitFromDoubleDoors_DirectorBP_C, HubMUSICTOUR) == 0x000040, "Member 'ULS_Tut_ExitFromDoubleDoors_DirectorBP_C::HubMUSICTOUR' has a wrong offset!");

}

