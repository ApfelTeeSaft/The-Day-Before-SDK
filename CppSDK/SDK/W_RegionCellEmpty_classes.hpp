#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RegionCellEmpty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RegionCellEmpty.W_RegionCellEmpty_C
// 0x0028 (0x02A8 - 0x0280)
class UW_RegionCellEmpty_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DotsAnim;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Searching;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AfterCell;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x02A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void CustomEvent();
	void Destruct();
	void ExecuteUbergraph_W_RegionCellEmpty(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RegionCellEmpty_C">();
	}
	static class UW_RegionCellEmpty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RegionCellEmpty_C>();
	}
};
static_assert(alignof(UW_RegionCellEmpty_C) == 0x000008, "Wrong alignment on UW_RegionCellEmpty_C");
static_assert(sizeof(UW_RegionCellEmpty_C) == 0x0002A8, "Wrong size on UW_RegionCellEmpty_C");
static_assert(offsetof(UW_RegionCellEmpty_C, UberGraphFrame) == 0x000280, "Member 'UW_RegionCellEmpty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_RegionCellEmpty_C, DotsAnim) == 0x000288, "Member 'UW_RegionCellEmpty_C::DotsAnim' has a wrong offset!");
static_assert(offsetof(UW_RegionCellEmpty_C, Border_Searching) == 0x000290, "Member 'UW_RegionCellEmpty_C::Border_Searching' has a wrong offset!");
static_assert(offsetof(UW_RegionCellEmpty_C, SizeBox_AfterCell) == 0x000298, "Member 'UW_RegionCellEmpty_C::SizeBox_AfterCell' has a wrong offset!");
static_assert(offsetof(UW_RegionCellEmpty_C, Timer) == 0x0002A0, "Member 'UW_RegionCellEmpty_C::Timer' has a wrong offset!");

}
