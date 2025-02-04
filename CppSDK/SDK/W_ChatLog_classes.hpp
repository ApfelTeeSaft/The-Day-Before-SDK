#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ChatLog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ChatType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ChatLog.W_ChatLog_C
// 0x0080 (0x0300 - 0x0280)
class UW_ChatLog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DVE_TOCHKI;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ChatLogDown;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ChatLogUp;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_PlayerName;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Status;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text_Status_;                                      // 0x02B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Text_ChatLog_;                                     // 0x02C8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	class FText                                   Text_PlayerName_;                                  // 0x02E0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	EChatType                                     ChatType;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_ChatLog(int32 EntryPoint);
	void GenerateFullText(const class FText& MessageText, const class FText& Status, const class FText& PlayerName, bool BEZTOCHEK, class FText* OutputPin);
	void PreConstruct(bool IsDesignTime);
	void SetNicknameColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ChatLog_C">();
	}
	static class UW_ChatLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ChatLog_C>();
	}
};
static_assert(alignof(UW_ChatLog_C) == 0x000008, "Wrong alignment on UW_ChatLog_C");
static_assert(sizeof(UW_ChatLog_C) == 0x000300, "Wrong size on UW_ChatLog_C");
static_assert(offsetof(UW_ChatLog_C, UberGraphFrame) == 0x000280, "Member 'UW_ChatLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, DVE_TOCHKI) == 0x000288, "Member 'UW_ChatLog_C::DVE_TOCHKI' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_ChatLogDown) == 0x000290, "Member 'UW_ChatLog_C::Text_ChatLogDown' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_ChatLogUp) == 0x000298, "Member 'UW_ChatLog_C::Text_ChatLogUp' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_PlayerName) == 0x0002A0, "Member 'UW_ChatLog_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_Status) == 0x0002A8, "Member 'UW_ChatLog_C::Text_Status' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_Status_) == 0x0002B0, "Member 'UW_ChatLog_C::Text_Status_' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_ChatLog_) == 0x0002C8, "Member 'UW_ChatLog_C::Text_ChatLog_' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, Text_PlayerName_) == 0x0002E0, "Member 'UW_ChatLog_C::Text_PlayerName_' has a wrong offset!");
static_assert(offsetof(UW_ChatLog_C, ChatType) == 0x0002F8, "Member 'UW_ChatLog_C::ChatType' has a wrong offset!");

}

