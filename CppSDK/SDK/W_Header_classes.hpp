#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Header

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Header.W_Header_C
// 0x0028 (0x02A8 - 0x0280)
class UW_Header_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_Text;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0290(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_W_Header(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Header_C">();
	}
	static class UW_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Header_C>();
	}
};
static_assert(alignof(UW_Header_C) == 0x000008, "Wrong alignment on UW_Header_C");
static_assert(sizeof(UW_Header_C) == 0x0002A8, "Wrong size on UW_Header_C");
static_assert(offsetof(UW_Header_C, UberGraphFrame) == 0x000280, "Member 'UW_Header_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Header_C, TextBlock_Text) == 0x000288, "Member 'UW_Header_C::TextBlock_Text' has a wrong offset!");
static_assert(offsetof(UW_Header_C, Text) == 0x000290, "Member 'UW_Header_C::Text' has a wrong offset!");

}
