#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Watermark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Watermark.W_Watermark_C
// 0x0028 (0x02A8 - 0x0280)
class UW_Watermark_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_211;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_165;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ID;                                                // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Construct();
	void DisableWatermark();
	void EnableWatermark();
	void ExecuteUbergraph_W_Watermark(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Watermark_C">();
	}
	static class UW_Watermark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Watermark_C>();
	}
};
static_assert(alignof(UW_Watermark_C) == 0x000008, "Wrong alignment on UW_Watermark_C");
static_assert(sizeof(UW_Watermark_C) == 0x0002A8, "Wrong size on UW_Watermark_C");
static_assert(offsetof(UW_Watermark_C, UberGraphFrame) == 0x000280, "Member 'UW_Watermark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Watermark_C, CanvasPanel_211) == 0x000288, "Member 'UW_Watermark_C::CanvasPanel_211' has a wrong offset!");
static_assert(offsetof(UW_Watermark_C, TextBlock_165) == 0x000290, "Member 'UW_Watermark_C::TextBlock_165' has a wrong offset!");
static_assert(offsetof(UW_Watermark_C, ID) == 0x000298, "Member 'UW_Watermark_C::ID' has a wrong offset!");

}
