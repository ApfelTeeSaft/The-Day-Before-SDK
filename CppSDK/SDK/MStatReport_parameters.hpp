#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MStatReport

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MStatReport.MStatReport_C.MStat Add Position to Report Properties
// 0x0118 (0x0118 - 0x0000)
struct MStatReport_C_MStat_Add_Position_to_Report_Properties final
{
public:
	struct FVector                                InVector;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            ReportPropertiesRef;                               // 0x0018(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0068(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0070(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0080(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0090(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MStatReport_C_MStat_Add_Position_to_Report_Properties) == 0x000008, "Wrong alignment on MStatReport_C_MStat_Add_Position_to_Report_Properties");
static_assert(sizeof(MStatReport_C_MStat_Add_Position_to_Report_Properties) == 0x000118, "Wrong size on MStatReport_C_MStat_Add_Position_to_Report_Properties");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, InVector) == 0x000000, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::InVector' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, ReportPropertiesRef) == 0x000018, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::ReportPropertiesRef' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, __WorldContext) == 0x000068, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::__WorldContext' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, Temp_string_Variable) == 0x000070, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, Temp_string_Variable_1) == 0x000080, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, Temp_string_Variable_2) == 0x000090, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_X) == 0x0000A0, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Y) == 0x0000A8, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Z) == 0x0000B0, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_Conv_DoubleToString_ReturnValue) == 0x0000B8, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_X_1) == 0x0000C8, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Y_1) == 0x0000D0, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Z_1) == 0x0000D8, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_Conv_DoubleToString_ReturnValue_1) == 0x0000E0, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_Conv_DoubleToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_X_2) == 0x0000F0, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Y_2) == 0x0000F8, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_BreakVector_Z_2) == 0x000100, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(MStatReport_C_MStat_Add_Position_to_Report_Properties, CallFunc_Conv_DoubleToString_ReturnValue_2) == 0x000108, "Member 'MStatReport_C_MStat_Add_Position_to_Report_Properties::CallFunc_Conv_DoubleToString_ReturnValue_2' has a wrong offset!");

// Function MStatReport.MStatReport_C.Mstat Report Death
// 0x0078 (0x0078 - 0x0000)
struct MStatReport_C_Mstat_Report_Death final
{
public:
	struct FVector                                InDeathPosition;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            ReportProperties;                                  // 0x0020(0x0050)(Edit, BlueprintVisible)
	class USurvivalStatSystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MStatReport_C_Mstat_Report_Death) == 0x000008, "Wrong alignment on MStatReport_C_Mstat_Report_Death");
static_assert(sizeof(MStatReport_C_Mstat_Report_Death) == 0x000078, "Wrong size on MStatReport_C_Mstat_Report_Death");
static_assert(offsetof(MStatReport_C_Mstat_Report_Death, InDeathPosition) == 0x000000, "Member 'MStatReport_C_Mstat_Report_Death::InDeathPosition' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Death, __WorldContext) == 0x000018, "Member 'MStatReport_C_Mstat_Report_Death::__WorldContext' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Death, ReportProperties) == 0x000020, "Member 'MStatReport_C_Mstat_Report_Death::ReportProperties' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Death, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000070, "Member 'MStatReport_C_Mstat_Report_Death::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");

// Function MStatReport.MStatReport_C.Mstat Report Enter Level
// 0x0118 (0x0118 - 0x0000)
struct MStatReport_C_Mstat_Report_Enter_Level final
{
public:
	class FString                                 InPlace;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InFrom;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                InToPosition;                                      // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            ReportProperties;                                  // 0x0040(0x0050)(Edit, BlueprintVisible)
	class FString                                 Temp_string_Variable;                              // 0x0090(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USurvivalStatSystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayerStates_ReturnValue;           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPingInMilliseconds_ReturnValue;        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_1;                            // 0x00D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x00F0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0100(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MStatReport_C_Mstat_Report_Enter_Level) == 0x000008, "Wrong alignment on MStatReport_C_Mstat_Report_Enter_Level");
static_assert(sizeof(MStatReport_C_Mstat_Report_Enter_Level) == 0x000118, "Wrong size on MStatReport_C_Mstat_Report_Enter_Level");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, InPlace) == 0x000000, "Member 'MStatReport_C_Mstat_Report_Enter_Level::InPlace' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, InFrom) == 0x000010, "Member 'MStatReport_C_Mstat_Report_Enter_Level::InFrom' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, InToPosition) == 0x000020, "Member 'MStatReport_C_Mstat_Report_Enter_Level::InToPosition' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, __WorldContext) == 0x000038, "Member 'MStatReport_C_Mstat_Report_Enter_Level::__WorldContext' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, ReportProperties) == 0x000040, "Member 'MStatReport_C_Mstat_Report_Enter_Level::ReportProperties' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, Temp_string_Variable) == 0x000090, "Member 'MStatReport_C_Mstat_Report_Enter_Level::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000A0, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_GetPlayerController_ReturnValue) == 0x0000A8, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_GetNumPlayerStates_ReturnValue) == 0x0000B0, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_GetNumPlayerStates_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B8, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_GetPingInMilliseconds_ReturnValue) == 0x0000C8, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_GetPingInMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, Temp_string_Variable_1) == 0x0000D0, "Member 'MStatReport_C_Mstat_Report_Enter_Level::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_Conv_DoubleToString_ReturnValue) == 0x0000E0, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, Temp_string_Variable_2) == 0x0000F0, "Member 'MStatReport_C_Mstat_Report_Enter_Level::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, Temp_string_Variable_3) == 0x000100, "Member 'MStatReport_C_Mstat_Report_Enter_Level::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(MStatReport_C_Mstat_Report_Enter_Level, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast) == 0x000110, "Member 'MStatReport_C_Mstat_Report_Enter_Level::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast' has a wrong offset!");

}
