#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Offer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Offer.BPI_Offer_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Offer_C final : public IInterface
{
public:
	void Accept();
	void Decline();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Offer_C">();
	}
	static class IBPI_Offer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Offer_C>();
	}
};
static_assert(alignof(IBPI_Offer_C) == 0x000008, "Wrong alignment on IBPI_Offer_C");
static_assert(sizeof(IBPI_Offer_C) == 0x000028, "Wrong size on IBPI_Offer_C");

}
