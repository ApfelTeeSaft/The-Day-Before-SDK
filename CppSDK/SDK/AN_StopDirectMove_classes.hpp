#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_StopDirectMove

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_StopDirectMove.AN_StopDirectMove_C
// 0x0008 (0x0040 - 0x0038)
class UAN_StopDirectMove_C final : public UAnimNotify
{
public:
	bool                                          Walk;                                              // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_StopDirectMove_C">();
	}
	static class UAN_StopDirectMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_StopDirectMove_C>();
	}
};
static_assert(alignof(UAN_StopDirectMove_C) == 0x000008, "Wrong alignment on UAN_StopDirectMove_C");
static_assert(sizeof(UAN_StopDirectMove_C) == 0x000040, "Wrong size on UAN_StopDirectMove_C");
static_assert(offsetof(UAN_StopDirectMove_C, Walk) == 0x000038, "Member 'UAN_StopDirectMove_C::Walk' has a wrong offset!");

}
