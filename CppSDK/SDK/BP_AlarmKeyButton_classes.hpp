#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AlarmKeyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AlarmKeyButton.BP_AlarmKeyButton_C
// 0x0070 (0x0300 - 0x0290)
class ABP_AlarmKeyButton_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ButtonMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Shining_Param_C635811045E8405B84E6E8B28157448E;    // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Shining__Direction_C635811045E8405B84E6E8B28157448E; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Shining;                                           // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 KeyCode;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                           SelectedTimer;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPressed;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ButtonMaterial;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AlarmKeyButton(int32 EntryPoint);
	void Mark();
	void OnPressed__DelegateSignature(const class FString& Param_KeyCode);
	void Press();
	void ReceiveBeginPlay();
	void SelectedTimer_Handler();
	void SetSelected(bool Param_IsSelected);
	void Shining__FinishedFunc();
	void Shining__UpdateFunc();
	void Unmark();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AlarmKeyButton_C">();
	}
	static class ABP_AlarmKeyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AlarmKeyButton_C>();
	}
};
static_assert(alignof(ABP_AlarmKeyButton_C) == 0x000008, "Wrong alignment on ABP_AlarmKeyButton_C");
static_assert(sizeof(ABP_AlarmKeyButton_C) == 0x000300, "Wrong size on ABP_AlarmKeyButton_C");
static_assert(offsetof(ABP_AlarmKeyButton_C, UberGraphFrame) == 0x000290, "Member 'ABP_AlarmKeyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, ButtonMesh) == 0x000298, "Member 'ABP_AlarmKeyButton_C::ButtonMesh' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_AlarmKeyButton_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, Shining_Param_C635811045E8405B84E6E8B28157448E) == 0x0002A8, "Member 'ABP_AlarmKeyButton_C::Shining_Param_C635811045E8405B84E6E8B28157448E' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, Shining__Direction_C635811045E8405B84E6E8B28157448E) == 0x0002AC, "Member 'ABP_AlarmKeyButton_C::Shining__Direction_C635811045E8405B84E6E8B28157448E' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, Shining) == 0x0002B0, "Member 'ABP_AlarmKeyButton_C::Shining' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, IsSelected) == 0x0002B8, "Member 'ABP_AlarmKeyButton_C::IsSelected' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, OnPressed) == 0x0002C0, "Member 'ABP_AlarmKeyButton_C::OnPressed' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, KeyCode) == 0x0002D0, "Member 'ABP_AlarmKeyButton_C::KeyCode' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, SelectedTimer) == 0x0002E0, "Member 'ABP_AlarmKeyButton_C::SelectedTimer' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, IsPressed) == 0x0002E8, "Member 'ABP_AlarmKeyButton_C::IsPressed' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, Mesh) == 0x0002F0, "Member 'ABP_AlarmKeyButton_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_AlarmKeyButton_C, ButtonMaterial) == 0x0002F8, "Member 'ABP_AlarmKeyButton_C::ButtonMaterial' has a wrong offset!");

}
