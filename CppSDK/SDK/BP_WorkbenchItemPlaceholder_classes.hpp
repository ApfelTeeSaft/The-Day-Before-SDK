#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorkbenchItemPlaceholder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "E_WorkbenchTabTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WorkbenchItemPlaceholder.BP_WorkbenchItemPlaceholder_C
// 0x0258 (0x04E8 - 0x0290)
class ABP_WorkbenchItemPlaceholder_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                             Item_Info;                                         // 0x02A8(0x0220)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FRotator                               DefaultRotation;                                   // 0x04C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_WorkbenchTabTypes                           TabType;                                           // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Scetch;                                         // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearData();
	void ExecuteUbergraph_BP_WorkbenchItemPlaceholder(int32 EntryPoint);
	void OnLoaded_C93A95CC45F4AE4C85612682A9D71841(class UObject* Loaded);
	void SpawnWorkbenchItem(const struct FFItemInfo& NewItemInfo, E_WorkbenchTabTypes ForTab, bool bIsScetch);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorkbenchItemPlaceholder_C">();
	}
	static class ABP_WorkbenchItemPlaceholder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorkbenchItemPlaceholder_C>();
	}
};
static_assert(alignof(ABP_WorkbenchItemPlaceholder_C) == 0x000008, "Wrong alignment on ABP_WorkbenchItemPlaceholder_C");
static_assert(sizeof(ABP_WorkbenchItemPlaceholder_C) == 0x0004E8, "Wrong size on ABP_WorkbenchItemPlaceholder_C");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, UberGraphFrame) == 0x000290, "Member 'ABP_WorkbenchItemPlaceholder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, StaticMesh) == 0x000298, "Member 'ABP_WorkbenchItemPlaceholder_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_WorkbenchItemPlaceholder_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, Item_Info) == 0x0002A8, "Member 'ABP_WorkbenchItemPlaceholder_C::Item_Info' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, DefaultRotation) == 0x0004C8, "Member 'ABP_WorkbenchItemPlaceholder_C::DefaultRotation' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, TabType) == 0x0004E0, "Member 'ABP_WorkbenchItemPlaceholder_C::TabType' has a wrong offset!");
static_assert(offsetof(ABP_WorkbenchItemPlaceholder_C, Is_Scetch) == 0x0004E1, "Member 'ABP_WorkbenchItemPlaceholder_C::Is_Scetch' has a wrong offset!");

}
