#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CampDragWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CampDragWidget.WBP_CampDragWidget_C
// 0x0018 (0x0298 - 0x0280)
class UWBP_CampDragWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_22;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CookingItem_C*                     ItemWidget;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CampDragWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CampDragWidget_C">();
	}
	static class UWBP_CampDragWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CampDragWidget_C>();
	}
};
static_assert(alignof(UWBP_CampDragWidget_C) == 0x000008, "Wrong alignment on UWBP_CampDragWidget_C");
static_assert(sizeof(UWBP_CampDragWidget_C) == 0x000298, "Wrong size on UWBP_CampDragWidget_C");
static_assert(offsetof(UWBP_CampDragWidget_C, UberGraphFrame) == 0x000280, "Member 'UWBP_CampDragWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CampDragWidget_C, Image_22) == 0x000288, "Member 'UWBP_CampDragWidget_C::Image_22' has a wrong offset!");
static_assert(offsetof(UWBP_CampDragWidget_C, ItemWidget) == 0x000290, "Member 'UWBP_CampDragWidget_C::ItemWidget' has a wrong offset!");

}
