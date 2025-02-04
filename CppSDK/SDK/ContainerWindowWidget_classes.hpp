#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ContainerWindowWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ContainerWindowWidget.ContainerWindowWidget_C
// 0x0018 (0x0298 - 0x0280)
class UContainerWindowWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VBox;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSI_Slot_C*                            ItemRef;                                           // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ContainerWindowWidget(int32 EntryPoint);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers);
	void SetItemReference(class UJSI_Slot_C* Param_ItemRef);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContainerWindowWidget_C">();
	}
	static class UContainerWindowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContainerWindowWidget_C>();
	}
};
static_assert(alignof(UContainerWindowWidget_C) == 0x000008, "Wrong alignment on UContainerWindowWidget_C");
static_assert(sizeof(UContainerWindowWidget_C) == 0x000298, "Wrong size on UContainerWindowWidget_C");
static_assert(offsetof(UContainerWindowWidget_C, UberGraphFrame) == 0x000280, "Member 'UContainerWindowWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContainerWindowWidget_C, VBox) == 0x000288, "Member 'UContainerWindowWidget_C::VBox' has a wrong offset!");
static_assert(offsetof(UContainerWindowWidget_C, ItemRef) == 0x000290, "Member 'UContainerWindowWidget_C::ItemRef' has a wrong offset!");

}

