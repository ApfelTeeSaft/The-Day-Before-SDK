#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Map

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_Map.BPI_Map_C.UpdateIconPosition
// 0x0010 (0x0010 - 0x0000)
struct BPI_Map_C_UpdateIconPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Map_C_UpdateIconPosition) == 0x000008, "Wrong alignment on BPI_Map_C_UpdateIconPosition");
static_assert(sizeof(BPI_Map_C_UpdateIconPosition) == 0x000010, "Wrong size on BPI_Map_C_UpdateIconPosition");
static_assert(offsetof(BPI_Map_C_UpdateIconPosition, Position) == 0x000000, "Member 'BPI_Map_C_UpdateIconPosition::Position' has a wrong offset!");

// Function BPI_Map.BPI_Map_C.Zoom
// 0x0001 (0x0001 - 0x0000)
struct BPI_Map_C_Zoom final
{
public:
	bool                                          Out;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Map_C_Zoom) == 0x000001, "Wrong alignment on BPI_Map_C_Zoom");
static_assert(sizeof(BPI_Map_C_Zoom) == 0x000001, "Wrong size on BPI_Map_C_Zoom");
static_assert(offsetof(BPI_Map_C_Zoom, Out) == 0x000000, "Member 'BPI_Map_C_Zoom::Out' has a wrong offset!");

}
