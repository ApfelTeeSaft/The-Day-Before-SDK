#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ScrollBorder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ScrollBorder.W_ScrollBorder_C
// 0x0020 (0x02A0 - 0x0280)
class UW_ScrollBorder_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_LootScrollInfo;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Brush_Color;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_ScrollBorder(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ScrollBorder_C">();
	}
	static class UW_ScrollBorder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ScrollBorder_C>();
	}
};
static_assert(alignof(UW_ScrollBorder_C) == 0x000008, "Wrong alignment on UW_ScrollBorder_C");
static_assert(sizeof(UW_ScrollBorder_C) == 0x0002A0, "Wrong size on UW_ScrollBorder_C");
static_assert(offsetof(UW_ScrollBorder_C, UberGraphFrame) == 0x000280, "Member 'UW_ScrollBorder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ScrollBorder_C, Border_LootScrollInfo) == 0x000288, "Member 'UW_ScrollBorder_C::Border_LootScrollInfo' has a wrong offset!");
static_assert(offsetof(UW_ScrollBorder_C, Brush_Color) == 0x000290, "Member 'UW_ScrollBorder_C::Brush_Color' has a wrong offset!");

}
