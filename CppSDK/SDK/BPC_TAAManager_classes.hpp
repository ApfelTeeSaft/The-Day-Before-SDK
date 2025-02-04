#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_TAAManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_TAAManager.BPC_TAAManager_C
// 0x0038 (0x00D8 - 0x00A0)
class UBPC_TAAManager_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASurvivalPlayer_C*                      Player;                                            // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x00B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offset;                                            // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InMotion;                                          // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPC_TAAManager(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_TAAManager_C">();
	}
	static class UBPC_TAAManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_TAAManager_C>();
	}
};
static_assert(alignof(UBPC_TAAManager_C) == 0x000008, "Wrong alignment on UBPC_TAAManager_C");
static_assert(sizeof(UBPC_TAAManager_C) == 0x0000D8, "Wrong size on UBPC_TAAManager_C");
static_assert(offsetof(UBPC_TAAManager_C, UberGraphFrame) == 0x0000A0, "Member 'UBPC_TAAManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_TAAManager_C, Player) == 0x0000A8, "Member 'UBPC_TAAManager_C::Player' has a wrong offset!");
static_assert(offsetof(UBPC_TAAManager_C, PrevLocation) == 0x0000B0, "Member 'UBPC_TAAManager_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBPC_TAAManager_C, Offset) == 0x0000C8, "Member 'UBPC_TAAManager_C::Offset' has a wrong offset!");
static_assert(offsetof(UBPC_TAAManager_C, InMotion) == 0x0000D0, "Member 'UBPC_TAAManager_C::InMotion' has a wrong offset!");

}

