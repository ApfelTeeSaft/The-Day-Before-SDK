#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Mark

#include "Basic.hpp"

#include "MarkType_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Mark.W_Mark_C
// 0x0078 (0x02F8 - 0x0280)
class UW_Mark_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FrameBig;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FrameMini;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Size;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ActorRef;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Key;                                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowByLocation;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EMarkType                                     MarkType;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	struct FVector2D AdaptToScreenSize(const struct FVector2D& InVec);
	void Construct();
	void ExecuteUbergraph_W_Mark(int32 EntryPoint);
	void HideMark();
	void SetDefaultBunkerEntry();
	void SetQuestBunkerEntry();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Mark_C">();
	}
	static class UW_Mark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Mark_C>();
	}
};
static_assert(alignof(UW_Mark_C) == 0x000008, "Wrong alignment on UW_Mark_C");
static_assert(sizeof(UW_Mark_C) == 0x0002F8, "Wrong size on UW_Mark_C");
static_assert(offsetof(UW_Mark_C, UberGraphFrame) == 0x000280, "Member 'UW_Mark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, HideAnim) == 0x000288, "Member 'UW_Mark_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, ShowAnim) == 0x000290, "Member 'UW_Mark_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, CanvasPanel_0) == 0x000298, "Member 'UW_Mark_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Image_FrameBig) == 0x0002A0, "Member 'UW_Mark_C::Image_FrameBig' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Image_FrameMini) == 0x0002A8, "Member 'UW_Mark_C::Image_FrameMini' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Image_Icon) == 0x0002B0, "Member 'UW_Mark_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Size) == 0x0002B8, "Member 'UW_Mark_C::Size' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, ActorRef) == 0x0002C0, "Member 'UW_Mark_C::ActorRef' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Key) == 0x0002C8, "Member 'UW_Mark_C::Key' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, ShowByLocation) == 0x0002D0, "Member 'UW_Mark_C::ShowByLocation' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, Location) == 0x0002D8, "Member 'UW_Mark_C::Location' has a wrong offset!");
static_assert(offsetof(UW_Mark_C, MarkType) == 0x0002F0, "Member 'UW_Mark_C::MarkType' has a wrong offset!");

}
