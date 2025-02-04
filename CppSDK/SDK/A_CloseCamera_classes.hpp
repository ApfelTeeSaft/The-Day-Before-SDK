#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: A_CloseCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass A_CloseCamera.A_CloseCamera_C
// 0x0010 (0x02A0 - 0x0290)
class AA_CloseCamera_C final : public AActor
{
public:
	class UCineCameraComponent*                   CineCamera;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"A_CloseCamera_C">();
	}
	static class AA_CloseCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AA_CloseCamera_C>();
	}
};
static_assert(alignof(AA_CloseCamera_C) == 0x000008, "Wrong alignment on AA_CloseCamera_C");
static_assert(sizeof(AA_CloseCamera_C) == 0x0002A0, "Wrong size on AA_CloseCamera_C");
static_assert(offsetof(AA_CloseCamera_C, CineCamera) == 0x000290, "Member 'AA_CloseCamera_C::CineCamera' has a wrong offset!");
static_assert(offsetof(AA_CloseCamera_C, SkeletalMesh) == 0x000298, "Member 'AA_CloseCamera_C::SkeletalMesh' has a wrong offset!");

}

