#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TypedElementFramework

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
// 0x0001 (0x0001 - 0x0000)
struct FTypedElementDataStorageTag
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementDataStorageTag) == 0x000001, "Wrong alignment on FTypedElementDataStorageTag");
static_assert(sizeof(FTypedElementDataStorageTag) == 0x000001, "Wrong size on FTypedElementDataStorageTag");

// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FScriptTypedElementHandle final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptTypedElementHandle) == 0x000008, "Wrong alignment on FScriptTypedElementHandle");
static_assert(sizeof(FScriptTypedElementHandle) == 0x000008, "Wrong size on FScriptTypedElementHandle");

// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
// 0x0001 (0x0001 - 0x0000)
struct FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementDataStorageColumn) == 0x000001, "Wrong alignment on FTypedElementDataStorageColumn");
static_assert(sizeof(FTypedElementDataStorageColumn) == 0x000001, "Wrong size on FTypedElementDataStorageColumn");

// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FTypedElementWidgetConstructor final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementWidgetConstructor) == 0x000008, "Wrong alignment on FTypedElementWidgetConstructor");
static_assert(sizeof(FTypedElementWidgetConstructor) == 0x000008, "Wrong size on FTypedElementWidgetConstructor");

// ScriptStruct TypedElementFramework.TypedElementLabelColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementLabelColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementLabelColumn) == 0x000008, "Wrong alignment on FTypedElementLabelColumn");
static_assert(sizeof(FTypedElementLabelColumn) == 0x000010, "Wrong size on FTypedElementLabelColumn");

// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x08) FTypedElementLabelHashColumn final : public FTypedElementDataStorageColumn
{
};
static_assert(alignof(FTypedElementLabelHashColumn) == 0x000008, "Wrong alignment on FTypedElementLabelHashColumn");
static_assert(sizeof(FTypedElementLabelHashColumn) == 0x000008, "Wrong size on FTypedElementLabelHashColumn");

// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FScriptTypedElementListProxy final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptTypedElementListProxy) == 0x000008, "Wrong alignment on FScriptTypedElementListProxy");
static_assert(sizeof(FScriptTypedElementListProxy) == 0x000010, "Wrong size on FScriptTypedElementListProxy");

// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
// 0x0000 (0x0001 - 0x0001)
struct FTypedElementSyncBackToWorldTag final : public FTypedElementDataStorageTag
{
};
static_assert(alignof(FTypedElementSyncBackToWorldTag) == 0x000001, "Wrong alignment on FTypedElementSyncBackToWorldTag");
static_assert(sizeof(FTypedElementSyncBackToWorldTag) == 0x000001, "Wrong size on FTypedElementSyncBackToWorldTag");

// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementPackagePathColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementPackagePathColumn) == 0x000008, "Wrong alignment on FTypedElementPackagePathColumn");
static_assert(sizeof(FTypedElementPackagePathColumn) == 0x000010, "Wrong size on FTypedElementPackagePathColumn");

// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
// 0x000B (0x000C - 0x0001)
struct alignas(0x04) FTypedElementPackageLoadedPathColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xB];                                        // 0x0001(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementPackageLoadedPathColumn) == 0x000004, "Wrong alignment on FTypedElementPackageLoadedPathColumn");
static_assert(sizeof(FTypedElementPackageLoadedPathColumn) == 0x00000C, "Wrong size on FTypedElementPackageLoadedPathColumn");

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementSlateWidgetReferenceColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementSlateWidgetReferenceColumn) == 0x000008, "Wrong alignment on FTypedElementSlateWidgetReferenceColumn");
static_assert(sizeof(FTypedElementSlateWidgetReferenceColumn) == 0x000010, "Wrong size on FTypedElementSlateWidgetReferenceColumn");

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
// 0x0000 (0x0001 - 0x0001)
struct FTypedElementSlateWidgetReferenceDeletesRowTag final : public FTypedElementDataStorageTag
{
};
static_assert(alignof(FTypedElementSlateWidgetReferenceDeletesRowTag) == 0x000001, "Wrong alignment on FTypedElementSlateWidgetReferenceDeletesRowTag");
static_assert(sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag) == 0x000001, "Wrong size on FTypedElementSlateWidgetReferenceDeletesRowTag");

// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
// 0x005F (0x0060 - 0x0001)
struct alignas(0x10) FTypedElementLocalTransformColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0x5F];                                       // 0x0001(0x005F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementLocalTransformColumn) == 0x000010, "Wrong alignment on FTypedElementLocalTransformColumn");
static_assert(sizeof(FTypedElementLocalTransformColumn) == 0x000060, "Wrong size on FTypedElementLocalTransformColumn");

// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementU32IntValueCacheColumn final : public FTypedElementDataStorageColumn
{
};
static_assert(alignof(FTypedElementU32IntValueCacheColumn) == 0x000004, "Wrong alignment on FTypedElementU32IntValueCacheColumn");
static_assert(sizeof(FTypedElementU32IntValueCacheColumn) == 0x000004, "Wrong size on FTypedElementU32IntValueCacheColumn");

// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementI32IntValueCacheColumn final : public FTypedElementDataStorageColumn
{
};
static_assert(alignof(FTypedElementI32IntValueCacheColumn) == 0x000004, "Wrong alignment on FTypedElementI32IntValueCacheColumn");
static_assert(sizeof(FTypedElementI32IntValueCacheColumn) == 0x000004, "Wrong size on FTypedElementI32IntValueCacheColumn");

// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementFloatValueCacheColumn final : public FTypedElementDataStorageColumn
{
};
static_assert(alignof(FTypedElementFloatValueCacheColumn) == 0x000004, "Wrong alignment on FTypedElementFloatValueCacheColumn");
static_assert(sizeof(FTypedElementFloatValueCacheColumn) == 0x000004, "Wrong size on FTypedElementFloatValueCacheColumn");

}
