#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerStatesArray

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct PlayerStatesArray.PlayerStatesArray
// 0x0010 (0x0010 - 0x0000)
struct FPlayerStatesArray final
{
public:
	TArray<class APS_TDB_C*>                      PlayerStates_5_2F0CD2FF4988F085C89B6CB20D93EDBD;   // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
};
static_assert(alignof(FPlayerStatesArray) == 0x000008, "Wrong alignment on FPlayerStatesArray");
static_assert(sizeof(FPlayerStatesArray) == 0x000010, "Wrong size on FPlayerStatesArray");
static_assert(offsetof(FPlayerStatesArray, PlayerStates_5_2F0CD2FF4988F085C89B6CB20D93EDBD) == 0x000000, "Member 'FPlayerStatesArray::PlayerStates_5_2F0CD2FF4988F085C89B6CB20D93EDBD' has a wrong offset!");

}
