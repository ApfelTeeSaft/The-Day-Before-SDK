#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Cursor

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Cursor.W_Cursor_C
// 0x0008 (0x0288 - 0x0280)
class UW_Cursor_C final : public UUserWidget
{
public:
	class UImage*                                 Image_Cursor;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Cursor_C">();
	}
	static class UW_Cursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Cursor_C>();
	}
};
static_assert(alignof(UW_Cursor_C) == 0x000008, "Wrong alignment on UW_Cursor_C");
static_assert(sizeof(UW_Cursor_C) == 0x000288, "Wrong size on UW_Cursor_C");
static_assert(offsetof(UW_Cursor_C, Image_Cursor) == 0x000280, "Member 'UW_Cursor_C::Image_Cursor' has a wrong offset!");

}

