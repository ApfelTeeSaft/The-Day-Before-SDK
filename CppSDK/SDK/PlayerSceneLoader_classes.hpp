#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSceneLoader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "S_PlayersArray_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerSceneLoader.PlayerSceneLoader_C
// 0x0058 (0x00F8 - 0x00A0)
class UPlayerSceneLoader_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, struct FS_PlayersArray>     LoadedLevels;                                      // 0x00A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerSceneLoader(int32 EntryPoint);
	void LevelLoaded(class FName LevelName, class AActor* Player);
	void LoadLevel(class FName Param_Name);
	void UnloadedLevel(class FName LevelName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSceneLoader_C">();
	}
	static class UPlayerSceneLoader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSceneLoader_C>();
	}
};
static_assert(alignof(UPlayerSceneLoader_C) == 0x000008, "Wrong alignment on UPlayerSceneLoader_C");
static_assert(sizeof(UPlayerSceneLoader_C) == 0x0000F8, "Wrong size on UPlayerSceneLoader_C");
static_assert(offsetof(UPlayerSceneLoader_C, UberGraphFrame) == 0x0000A0, "Member 'UPlayerSceneLoader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSceneLoader_C, LoadedLevels) == 0x0000A8, "Member 'UPlayerSceneLoader_C::LoadedLevels' has a wrong offset!");

}
