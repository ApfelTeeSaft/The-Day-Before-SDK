#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TabsWindow

#include "Basic.hpp"

#include "E_TabType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TabsWindow.W_TabsWindow_C
// 0x0078 (0x02F8 - 0x0280)
class UW_TabsWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOutAnim;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInAnim;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Main;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fading;                                            // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TabType                                     NewFocusedWindow;                                  // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A3[0x5];                                      // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpen;                                            // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         FocusedWindowInt;                                  // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCloseChildWidget;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CloseChildWidget;                                  // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameHUD_C*                          As_BP_Game_HUD;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMPInGameInventory_C*                   Inventory_Ref;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddChildToContainer(class UWidget* Content);
	void ChangeSelection();
	void Close();
	void Construct();
	void ExecuteUbergraph_W_TabsWindow(int32 EntryPoint);
	void OnClose__DelegateSignature();
	void OnCloseChildWidget__DelegateSignature();
	void OnInitializedInventoryWidget_Event(class UMPInGameInventory_C* InventoryRef);
	void OnOpen__DelegateSignature();
	void Open(E_TabType FocusedWindow, bool WithVehicle);
	void OpenTab(E_TabType Focuse);
	void SetType(bool WithVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TabsWindow_C">();
	}
	static class UW_TabsWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TabsWindow_C>();
	}
};
static_assert(alignof(UW_TabsWindow_C) == 0x000008, "Wrong alignment on UW_TabsWindow_C");
static_assert(sizeof(UW_TabsWindow_C) == 0x0002F8, "Wrong size on UW_TabsWindow_C");
static_assert(offsetof(UW_TabsWindow_C, UberGraphFrame) == 0x000280, "Member 'UW_TabsWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, FadeOutAnim) == 0x000288, "Member 'UW_TabsWindow_C::FadeOutAnim' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, FadeInAnim) == 0x000290, "Member 'UW_TabsWindow_C::FadeInAnim' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, CanvasPanel_Main) == 0x000298, "Member 'UW_TabsWindow_C::CanvasPanel_Main' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, Opened) == 0x0002A0, "Member 'UW_TabsWindow_C::Opened' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, Fading) == 0x0002A1, "Member 'UW_TabsWindow_C::Fading' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, NewFocusedWindow) == 0x0002A2, "Member 'UW_TabsWindow_C::NewFocusedWindow' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, OnOpen) == 0x0002A8, "Member 'UW_TabsWindow_C::OnOpen' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, OnClose) == 0x0002B8, "Member 'UW_TabsWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, FocusedWindowInt) == 0x0002C8, "Member 'UW_TabsWindow_C::FocusedWindowInt' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, OnCloseChildWidget) == 0x0002D0, "Member 'UW_TabsWindow_C::OnCloseChildWidget' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, CloseChildWidget) == 0x0002E0, "Member 'UW_TabsWindow_C::CloseChildWidget' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, As_BP_Game_HUD) == 0x0002E8, "Member 'UW_TabsWindow_C::As_BP_Game_HUD' has a wrong offset!");
static_assert(offsetof(UW_TabsWindow_C, Inventory_Ref) == 0x0002F0, "Member 'UW_TabsWindow_C::Inventory_Ref' has a wrong offset!");

}

