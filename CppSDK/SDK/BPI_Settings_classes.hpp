#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Settings

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Settings.BPI_Settings_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Settings_C final : public IInterface
{
public:
	void OnRowDeselected(class UUserWidget* RowWidgetRef);
	void OnRowHovered(class UUserWidget* RowWidgetRef);
	void OnRowSelected(class UUserWidget* RowWidgetRef);
	void OnRowUnhovered(class UUserWidget* RowWidgetRef);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Settings_C">();
	}
	static class IBPI_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Settings_C>();
	}
};
static_assert(alignof(IBPI_Settings_C) == 0x000008, "Wrong alignment on IBPI_Settings_C");
static_assert(sizeof(IBPI_Settings_C) == 0x000028, "Wrong size on IBPI_Settings_C");

}
