#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckPressedButton_0

#include "Basic.hpp"

#include "AGSGraphRuntime_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckPressedButton.CheckPressedButton_C
// 0x0010 (0x0040 - 0x0030)
class CheckPressedButton_0::UCheckPressedButton_C final : public UAGSAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Conversely;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsIHaveQuestions_;                                 // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner);
	void ExecuteUbergraph_CheckPressedButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass CheckPressedButton.CheckPressedButton_C", true, "CheckPressedButton_C">();
	}
	static class CheckPressedButton_0::UCheckPressedButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<CheckPressedButton_0::UCheckPressedButton_C>();
	}
};
static_assert(alignof(CheckPressedButton_0::UCheckPressedButton_C) == 0x000008, "Wrong alignment on CheckPressedButton_0::UCheckPressedButton_C");
static_assert(sizeof(CheckPressedButton_0::UCheckPressedButton_C) == 0x000040, "Wrong size on CheckPressedButton_0::UCheckPressedButton_C");
static_assert(offsetof(CheckPressedButton_0::UCheckPressedButton_C, UberGraphFrame) == 0x000030, "Member 'CheckPressedButton_0::UCheckPressedButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(CheckPressedButton_0::UCheckPressedButton_C, Conversely) == 0x000038, "Member 'CheckPressedButton_0::UCheckPressedButton_C::Conversely' has a wrong offset!");
static_assert(offsetof(CheckPressedButton_0::UCheckPressedButton_C, IsIHaveQuestions_) == 0x000039, "Member 'CheckPressedButton_0::UCheckPressedButton_C::IsIHaveQuestions_' has a wrong offset!");

}

