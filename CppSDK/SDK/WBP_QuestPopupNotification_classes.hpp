#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuestPopupNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "F_DialogueNodeInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QuestPopupNotification.WBP_QuestPopupNotification_C
// 0x0160 (0x03E0 - 0x0280)
class UWBP_QuestPopupNotification_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Show;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_MoneyReward;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_QuestgiverIcon;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Count;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PhraseText;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_QuestgiverName;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     W_HintButtonNew;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Survival_Player;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     PhrasePlaying;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FF_DialogueNodeInfo                    DialogueInfo;                                      // 0x02D0(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bShowed;                                           // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x3];                                      // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NotificationLifetime;                              // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_QuestPopupNotification(int32 EntryPoint);
	void GetShowed(bool* Param_bShowed);
	void HideMessage(float Duration);
	void InstantHide();
	void OnHideMessage();
	void PlayPhrase(bool bIsDNAquest);
	void PreConstruct(bool IsDesignTime);
	void Show(bool bShow);
	void ShowQuestMessage(class FName NPC_Name, class FName Message, class UQuest* Quest);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuestPopupNotification_C">();
	}
	static class UWBP_QuestPopupNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuestPopupNotification_C>();
	}
};
static_assert(alignof(UWBP_QuestPopupNotification_C) == 0x000008, "Wrong alignment on UWBP_QuestPopupNotification_C");
static_assert(sizeof(UWBP_QuestPopupNotification_C) == 0x0003E0, "Wrong size on UWBP_QuestPopupNotification_C");
static_assert(offsetof(UWBP_QuestPopupNotification_C, UberGraphFrame) == 0x000280, "Member 'UWBP_QuestPopupNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, Anim_Show) == 0x000288, "Member 'UWBP_QuestPopupNotification_C::Anim_Show' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, HorizontalBox_MoneyReward) == 0x000290, "Member 'UWBP_QuestPopupNotification_C::HorizontalBox_MoneyReward' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, Image_QuestgiverIcon) == 0x000298, "Member 'UWBP_QuestPopupNotification_C::Image_QuestgiverIcon' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, TextBlock_Count) == 0x0002A0, "Member 'UWBP_QuestPopupNotification_C::TextBlock_Count' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, TextBlock_PhraseText) == 0x0002A8, "Member 'UWBP_QuestPopupNotification_C::TextBlock_PhraseText' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, TextBlock_QuestgiverName) == 0x0002B0, "Member 'UWBP_QuestPopupNotification_C::TextBlock_QuestgiverName' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, W_HintButtonNew) == 0x0002B8, "Member 'UWBP_QuestPopupNotification_C::W_HintButtonNew' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, Survival_Player) == 0x0002C0, "Member 'UWBP_QuestPopupNotification_C::Survival_Player' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, PhrasePlaying) == 0x0002C8, "Member 'UWBP_QuestPopupNotification_C::PhrasePlaying' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, DialogueInfo) == 0x0002D0, "Member 'UWBP_QuestPopupNotification_C::DialogueInfo' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, bShowed) == 0x0003D8, "Member 'UWBP_QuestPopupNotification_C::bShowed' has a wrong offset!");
static_assert(offsetof(UWBP_QuestPopupNotification_C, NotificationLifetime) == 0x0003DC, "Member 'UWBP_QuestPopupNotification_C::NotificationLifetime' has a wrong offset!");

}

