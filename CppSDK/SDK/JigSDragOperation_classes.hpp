#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JigSDragOperation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass JigSDragOperation.JigSDragOperation_C
// 0x0020 (0x00B0 - 0x0090)
class UJigSDragOperation_C final : public UDragDropOperation
{
public:
	class UJSI_Slot_C*                            SlotRef;                                           // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              MouseDownPos;                                      // 0x0098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PivotIndex;                                        // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JigSDragOperation_C">();
	}
	static class UJigSDragOperation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJigSDragOperation_C>();
	}
};
static_assert(alignof(UJigSDragOperation_C) == 0x000008, "Wrong alignment on UJigSDragOperation_C");
static_assert(sizeof(UJigSDragOperation_C) == 0x0000B0, "Wrong size on UJigSDragOperation_C");
static_assert(offsetof(UJigSDragOperation_C, SlotRef) == 0x000090, "Member 'UJigSDragOperation_C::SlotRef' has a wrong offset!");
static_assert(offsetof(UJigSDragOperation_C, MouseDownPos) == 0x000098, "Member 'UJigSDragOperation_C::MouseDownPos' has a wrong offset!");
static_assert(offsetof(UJigSDragOperation_C, PivotIndex) == 0x0000A8, "Member 'UJigSDragOperation_C::PivotIndex' has a wrong offset!");

}
