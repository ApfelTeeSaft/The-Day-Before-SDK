#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC_MainMenu.PC_MainMenu_C
// 0x0118 (0x0968 - 0x0850)
class APC_MainMenu_C final : public APlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0850(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 LoginDataSlotName;                                 // 0x0858(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 ID;                                                // 0x0868(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PlayFabTitleID;                                    // 0x0878(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsLoggedIn;                                        // 0x0888(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_889[0x7];                                      // 0x0889(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ServersListRequest;                                // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 BuildID;                                           // 0x0898(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                ServerListResponse;                                // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasActiveServer;                                   // 0x08B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B1[0x7];                                      // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ActiveSessionID;                                   // 0x08B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                ServerDetailsRequest;                              // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ServerDetailsResponse;                             // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 Address;                                           // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 DebugString;                                       // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Region;                                            // 0x08F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWorking;                                         // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_909[0x7];                                      // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayFabLoggedIn;                                 // 0x0910(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 ServerAddress;                                     // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UFMODEvent*                             Ambient;                                           // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     AmbientInstance;                                   // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     AmbienceStop;                                      // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     MainMenu2;                                         // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     Ambmenustop;                                       // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FString                                 Port;                                              // 0x0958(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void AmbienceMenuStop();
	void AmbientSound();
	void ConnectToServerByAddress(const class FString& Param_Address);
	void ConnectToServerByDetails(const class FString& SessionId);
	void CreateAccount();
	void CreateGameServer();
	void DirectConnect(const class FString& Param_Address);
	void ExecuteMainFlow();
	void ExecuteUbergraph_PC_MainMenu(int32 EntryPoint);
	void FadeOutAmbient();
	void GetId(class FString* Param_ID);
	void GetLoginData(bool* HasData, class USG_LoginData_C** Data);
	void GetServersList();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputDebugKeyEvent_0(const struct FKey& Key, const struct FInputActionValue& ActionValue);
	void IsTutorialCompleted(bool* Completed);
	void Login(bool Param_CreateAccount, const class FString& PlatformUserId);
	void MainMenuMusic();
	void OnFailure_36FA7D63459398D2FB93ABA19A5D988E(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnFailure_A3311DE04082D93EEFDB7CB88D8A4545();
	void OnPlayFabLoggedIn__DelegateSignature();
	void OnSuccess_36FA7D63459398D2FB93ABA19A5D988E(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnSuccess_A3311DE04082D93EEFDB7CB88D8A4545();
	void OpenBunkerLevel();
	void OpenLevelLocal(class FName Level);
	void OpenRBVehicle();
	void OpenStartLevel();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SaveLoginData();
	void SetErrorText(const class FString& Text);
	void SetInfoText(const class FString& Text);
	void SetPlayFabID(const class FString& PlayFabID);
	void SetResponseErrorText(const class FString& Text);
	void SetResponseText(const class FString& Text);
	void SetServer(const class FString& Adress, const class FString& Param_Port);
	void StopMainMenuMusic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_MainMenu_C">();
	}
	static class APC_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APC_MainMenu_C>();
	}
};
static_assert(alignof(APC_MainMenu_C) == 0x000008, "Wrong alignment on APC_MainMenu_C");
static_assert(sizeof(APC_MainMenu_C) == 0x000968, "Wrong size on APC_MainMenu_C");
static_assert(offsetof(APC_MainMenu_C, UberGraphFrame) == 0x000850, "Member 'APC_MainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, LoginDataSlotName) == 0x000858, "Member 'APC_MainMenu_C::LoginDataSlotName' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ID) == 0x000868, "Member 'APC_MainMenu_C::ID' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, PlayFabTitleID) == 0x000878, "Member 'APC_MainMenu_C::PlayFabTitleID' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, IsLoggedIn) == 0x000888, "Member 'APC_MainMenu_C::IsLoggedIn' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ServersListRequest) == 0x000890, "Member 'APC_MainMenu_C::ServersListRequest' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, BuildID) == 0x000898, "Member 'APC_MainMenu_C::BuildID' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ServerListResponse) == 0x0008A8, "Member 'APC_MainMenu_C::ServerListResponse' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, HasActiveServer) == 0x0008B0, "Member 'APC_MainMenu_C::HasActiveServer' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ActiveSessionID) == 0x0008B8, "Member 'APC_MainMenu_C::ActiveSessionID' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ServerDetailsRequest) == 0x0008C8, "Member 'APC_MainMenu_C::ServerDetailsRequest' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ServerDetailsResponse) == 0x0008D0, "Member 'APC_MainMenu_C::ServerDetailsResponse' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, Address) == 0x0008D8, "Member 'APC_MainMenu_C::Address' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, DebugString) == 0x0008E8, "Member 'APC_MainMenu_C::DebugString' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, Region) == 0x0008F8, "Member 'APC_MainMenu_C::Region' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, IsWorking) == 0x000908, "Member 'APC_MainMenu_C::IsWorking' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, OnPlayFabLoggedIn) == 0x000910, "Member 'APC_MainMenu_C::OnPlayFabLoggedIn' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, ServerAddress) == 0x000920, "Member 'APC_MainMenu_C::ServerAddress' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, Ambient) == 0x000930, "Member 'APC_MainMenu_C::Ambient' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, AmbientInstance) == 0x000938, "Member 'APC_MainMenu_C::AmbientInstance' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, AmbienceStop) == 0x000940, "Member 'APC_MainMenu_C::AmbienceStop' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, MainMenu2) == 0x000948, "Member 'APC_MainMenu_C::MainMenu2' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, Ambmenustop) == 0x000950, "Member 'APC_MainMenu_C::Ambmenustop' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, Port) == 0x000958, "Member 'APC_MainMenu_C::Port' has a wrong offset!");

}
