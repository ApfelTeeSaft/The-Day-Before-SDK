#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeneratorToggler

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Toggler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GeneratorToggler.GeneratorToggler_C
// 0x0028 (0x0320 - 0x02F8)
class AGeneratorToggler_C final : public AToggler_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GeneratorToggler_C;                 // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*            MaterialBillboard;                                 // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnabled;                                         // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GeneratorToggler(int32 EntryPoint);
	void OnInteract(class APawn* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GeneratorToggler_C">();
	}
	static class AGeneratorToggler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeneratorToggler_C>();
	}
};
static_assert(alignof(AGeneratorToggler_C) == 0x000008, "Wrong alignment on AGeneratorToggler_C");
static_assert(sizeof(AGeneratorToggler_C) == 0x000320, "Wrong size on AGeneratorToggler_C");
static_assert(offsetof(AGeneratorToggler_C, UberGraphFrame_GeneratorToggler_C) == 0x0002F8, "Member 'AGeneratorToggler_C::UberGraphFrame_GeneratorToggler_C' has a wrong offset!");
static_assert(offsetof(AGeneratorToggler_C, MaterialBillboard) == 0x000300, "Member 'AGeneratorToggler_C::MaterialBillboard' has a wrong offset!");
static_assert(offsetof(AGeneratorToggler_C, Box) == 0x000308, "Member 'AGeneratorToggler_C::Box' has a wrong offset!");
static_assert(offsetof(AGeneratorToggler_C, StaticMesh) == 0x000310, "Member 'AGeneratorToggler_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AGeneratorToggler_C, IsEnabled) == 0x000318, "Member 'AGeneratorToggler_C::IsEnabled' has a wrong offset!");

}

