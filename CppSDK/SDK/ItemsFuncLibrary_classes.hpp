#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemsFuncLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemsFuncLibrary.ItemsFuncLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UItemsFuncLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ConvertPickupItemToItemInfoFunc(const struct FContainerPickupsInfo& PickupItem, class UObject* __WorldContext, struct FFItemInfo* ItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemsFuncLibrary_C">();
	}
	static class UItemsFuncLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemsFuncLibrary_C>();
	}
};
static_assert(alignof(UItemsFuncLibrary_C) == 0x000008, "Wrong alignment on UItemsFuncLibrary_C");
static_assert(sizeof(UItemsFuncLibrary_C) == 0x000028, "Wrong size on UItemsFuncLibrary_C");

}

