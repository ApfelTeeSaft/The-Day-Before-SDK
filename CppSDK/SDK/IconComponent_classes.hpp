#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IconComponent.IconComponent_C
// 0x0018 (0x00B8 - 0x00A0)
class UIconComponent_C final : public UActorComponent
{
public:
	class UTexture2D*                             Icon;                                              // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetMapIconData(struct FVector* Location, class UTexture2D** Param_Icon, struct FVector2D* Param_IconSize, double* RotationYaw, class AActor** WorldActor, class FText* Param_Name, class FText* Description);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconComponent_C">();
	}
	static class UIconComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconComponent_C>();
	}
};
static_assert(alignof(UIconComponent_C) == 0x000008, "Wrong alignment on UIconComponent_C");
static_assert(sizeof(UIconComponent_C) == 0x0000B8, "Wrong size on UIconComponent_C");
static_assert(offsetof(UIconComponent_C, Icon) == 0x0000A0, "Member 'UIconComponent_C::Icon' has a wrong offset!");
static_assert(offsetof(UIconComponent_C, IconSize) == 0x0000A8, "Member 'UIconComponent_C::IconSize' has a wrong offset!");

}

