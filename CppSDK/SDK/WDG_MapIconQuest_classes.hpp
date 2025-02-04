#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WDG_MapIconQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WDG_MapIconQuest.WDG_MapIconQuest_C
// 0x00B8 (0x0338 - 0x0280)
class UWDG_MapIconQuest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Desc;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_260;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NamePOI;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 WorldActor;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasPanelSlotQuest;                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultShiftX;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultShiftY;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurPosX;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurPosY;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldXOfMapCenter;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldYOfMapCenter;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldXScale;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldYScale;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Return_Value_X;                                    // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        QuestX;                                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        QuestY;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActualYPos;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActualQuestYPos;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DestractX(double Zoom);
	void DestractY(double Zoom);
	void ExecuteUbergraph_WDG_MapIconQuest(int32 EntryPoint);
	void InitIcon(class UTexture2D* Param_Texture, class AActor* Param_WorldActor, const struct FVector2D& Param_Name, const class FText& NameQuest, const class FText& DescQuest);
	void SetIconPosition(double A, double Zoom, const struct FVector2D& MapSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WDG_MapIconQuest_C">();
	}
	static class UWDG_MapIconQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWDG_MapIconQuest_C>();
	}
};
static_assert(alignof(UWDG_MapIconQuest_C) == 0x000008, "Wrong alignment on UWDG_MapIconQuest_C");
static_assert(sizeof(UWDG_MapIconQuest_C) == 0x000338, "Wrong size on UWDG_MapIconQuest_C");
static_assert(offsetof(UWDG_MapIconQuest_C, UberGraphFrame) == 0x000280, "Member 'UWDG_MapIconQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Desc) == 0x000288, "Member 'UWDG_MapIconQuest_C::Desc' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Icon) == 0x000290, "Member 'UWDG_MapIconQuest_C::Icon' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Image_260) == 0x000298, "Member 'UWDG_MapIconQuest_C::Image_260' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, NamePOI) == 0x0002A0, "Member 'UWDG_MapIconQuest_C::NamePOI' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, WorldActor) == 0x0002A8, "Member 'UWDG_MapIconQuest_C::WorldActor' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, CanvasPanelSlotQuest) == 0x0002B0, "Member 'UWDG_MapIconQuest_C::CanvasPanelSlotQuest' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, DefaultShiftX) == 0x0002B8, "Member 'UWDG_MapIconQuest_C::DefaultShiftX' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, DefaultShiftY) == 0x0002C0, "Member 'UWDG_MapIconQuest_C::DefaultShiftY' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, CurPosX) == 0x0002C8, "Member 'UWDG_MapIconQuest_C::CurPosX' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, CurPosY) == 0x0002D0, "Member 'UWDG_MapIconQuest_C::CurPosY' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Texture) == 0x0002D8, "Member 'UWDG_MapIconQuest_C::Texture' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Size) == 0x0002E0, "Member 'UWDG_MapIconQuest_C::Size' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, WorldXOfMapCenter) == 0x0002F0, "Member 'UWDG_MapIconQuest_C::WorldXOfMapCenter' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, WorldYOfMapCenter) == 0x0002F8, "Member 'UWDG_MapIconQuest_C::WorldYOfMapCenter' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, WorldXScale) == 0x000300, "Member 'UWDG_MapIconQuest_C::WorldXScale' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, WorldYScale) == 0x000308, "Member 'UWDG_MapIconQuest_C::WorldYScale' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, Return_Value_X) == 0x000310, "Member 'UWDG_MapIconQuest_C::Return_Value_X' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, QuestX) == 0x000318, "Member 'UWDG_MapIconQuest_C::QuestX' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, QuestY) == 0x000320, "Member 'UWDG_MapIconQuest_C::QuestY' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, ActualYPos) == 0x000328, "Member 'UWDG_MapIconQuest_C::ActualYPos' has a wrong offset!");
static_assert(offsetof(UWDG_MapIconQuest_C, ActualQuestYPos) == 0x000330, "Member 'UWDG_MapIconQuest_C::ActualQuestYPos' has a wrong offset!");

}

