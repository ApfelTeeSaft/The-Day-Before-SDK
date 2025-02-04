#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LineTracePointer

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LineTracePointer.WBP_LineTracePointer_C
// 0x0010 (0x0290 - 0x0280)
class UWBP_LineTracePointer_C final : public UUserWidget
{
public:
	class UWidget*                                Point1;                                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Point2;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LineTracePointer_C">();
	}
	static class UWBP_LineTracePointer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LineTracePointer_C>();
	}
};
static_assert(alignof(UWBP_LineTracePointer_C) == 0x000008, "Wrong alignment on UWBP_LineTracePointer_C");
static_assert(sizeof(UWBP_LineTracePointer_C) == 0x000290, "Wrong size on UWBP_LineTracePointer_C");
static_assert(offsetof(UWBP_LineTracePointer_C, Point1) == 0x000280, "Member 'UWBP_LineTracePointer_C::Point1' has a wrong offset!");
static_assert(offsetof(UWBP_LineTracePointer_C, Point2) == 0x000288, "Member 'UWBP_LineTracePointer_C::Point2' has a wrong offset!");

}

