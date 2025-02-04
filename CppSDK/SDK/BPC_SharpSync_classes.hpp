#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_SharpSync

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FirebaseFeatures_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_SharpSync.BPC_SharpSync_C
// 0x0200 (0x02A0 - 0x00A0)
class UBPC_SharpSync_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASurvivalPlayer_V2_C*                   Surv;                                              // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Primary_Point_Id;                                  // 0x00B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Secondary_Point_Id;                                // 0x00B4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loot_Point_Opened;                                 // 0x00B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Block_Movement;                                    // 0x00B9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Crawling;                                          // 0x00BA(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Trigger_Pulled;                                    // 0x00BB(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InCutscene;                                        // 0x00BC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CutsceneCD;                                        // 0x00BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE[0x2];                                       // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MainPhase;                                         // 0x00C0(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDateTime                              RelevancyCheck;                                    // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SaveData;                                          // 0x00D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASurvPC_C*                              As_Surv_PC;                                        // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SoundsCasual;                                      // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SoundsCasualF;                                     // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SoundsBattle;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SoundsBattleF;                                     // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Health;                                            // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InFight;                                           // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           InFightCooldown;                                   // 0x0120(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          InBattleState;                                     // 0x0128(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    F1Sound;                                           // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         StashArr;                                          // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsAdmin;                                           // 0x0148(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SteamID;                                           // 0x0150(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         AdminList;                                         // 0x0160(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBPC_AdminPanel_C*                      AdminPanelBPC;                                     // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CashArr;                                           // 0x0178(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         CashArrTemp;                                       // 0x0188(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataSnapshot*                          Snapshot;                                          // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x01A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AFKTime;                                           // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PrevRotation;                                      // 0x01C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FString                                 Name_BPC_SharpSync_C;                              // 0x01D8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                ServerScaleInfo;                                   // 0x01E8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class FString>                           KomnataStages;                                     // 0x0200(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDatabaseReference*                     DatabaseReference;                                 // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         StashData;                                         // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SaveInvInt;                                        // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveInvIntTemp;                                    // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DataInventoryTimer;                                // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckCheatSpeedTimerHandle;                        // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SpeedWarningCount;                                 // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFirestoreDocumentSnapshot             Document_Snapshot;                                 // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Die_;                                              // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdminMessageToChat(const class FText& InputPin);
	void AdminPanel();
	void AKFDetection();
	void BanPlayerServer(class APlayerState* TargetPlayer, const class FText& KickReason, const class FString& Time, bool Mute, bool Amnesty);
	void Bind_Events();
	void Bind_Events_Server();
	void BoolArrayToFirebaseArray(const TArray<bool>& Value, const TArray<struct FFirestoreFieldValue>* Result);
	void Cashgood();
	void CashLoader(const TArray<class FString>& StrArr);
	void CashLocal(TArray<class FString>& Param_CashArr);
	void CharsRescale();
	void CheckCheatSpeed();
	void CheckCheatSpeedLoop();
	void CheckState();
	void CheckWeaponSlotPoint(int32 PrimaryId, int32 SecondaryId, bool* NonSync);
	void CREATEDELEGATE_PROXYFUNCTION_0(int32 ExitsCount);
	void CREATEDELEGATE_PROXYFUNCTION_1(int32 RPoints);
	void CREATEDELEGATE_PROXYFUNCTION_2(const class FString& HpHuThAd);
	void CREATEDELEGATE_PROXYFUNCTION_3(const class FString& TrainStat);
	class FString DateTimeToString(const struct FDateTime& InDateTime);
	void DeathLogic();
	void DeathLogicLocal(const TArray<class FString>& StrArr);
	void EmptyDataLocal(const class FString& Key);
	void EngagedInFight();
	void ExecuteUbergraph_BPC_SharpSync(int32 EntryPoint);
	void FightEnded();
	void FirebaseArrayToBoolArray(const TArray<struct FFirebaseVariant>& Value, const TArray<bool>* Result);
	void FirebaseArrayToFloatArray(const TArray<struct FFirestoreFieldValue>& Value, const TArray<double>* Result);
	void FirebaseArrayToStringArray(const TArray<struct FFirestoreFieldValue>& Value, const TArray<class FString>* Result);
	void FloatArrayToFirebaseArray(const TArray<double>& Value, const TArray<struct FFirestoreFieldValue>* Result);
	void GetAttachPoint(class FName Param_Name, bool Secondary_, class USkeletalMeshComponent** Mesh, class FName* AttachName);
	bool GetChildFromChar(const class FString& Key, struct FFirestoreFieldValue* Value);
	void GetDataOwner(TArray<class FString>& Data);
	void GetStashMoney(int32* StashMoney);
	void GetStashMoneyServ(int32* StashMoney);
	class FString GetUserName();
	void GetWeaponSlotNames(class FName PrimaryName, class FName SecondaryName, class FName* PrimaryName2, class FName* SecondaryName2);
	void HiddenInGameCheck(bool HiddenInGame, bool LootPointOpened, bool bLockMovement, bool Param_Crawling);
	void HiddenSync();
	void HiddenSyncMulti();
	void HideCutsceneFAlse();
	void HideCutsceneTrue();
	void HideMesh(bool PlayerHided);
	void HideMeshClient(bool PlayerHided);
	void HideMeshServer(bool PlayerHided);
	void HidePlayer(bool NewParam);
	void HouseOwning(const class FString& Data);
	void InfoCollect();
	void InpActEvt_Shift_F10_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_VoiceLines_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InPhase(bool* Return);
	void IntArrayToFloatAndReverse(TArray<int32>& IntArray, TArray<double>& FloatArray, TArray<double>* FloatResult, TArray<int32>* IntResult);
	void InventoryMakeId(TArray<class FString>& Param_SaveData, TArray<class FString>* Output_Get);
	void IsInBattleState(bool* Param_InFight);
	void KickPlayerServer(class APlayerController* Controller, const class FText& Reason);
	void Load_All_Owner(TArray<class FString>& Cars, const class FString& House, bool ShowFirstRaidTutorial);
	void LoadAll();
	void LoadStats();
	void LoadStatsOwner(TArray<class FString>& Data);
	void Logout();
	void MakeMeAdmin();
	void MakeMeAdminServer();
	void MultiSync();
	void NewValue(class UDataSnapshot* Param_Snapshot);
	void OnError_0957317949653C9E7DAE8280038417AB(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_0957317949653C9E7DAE82801C759687(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_0957317949653C9E7DAE82802582B732(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_0957317949653C9E7DAE8280BC6FC2FF(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_0957317949653C9E7DAE8280F71BB9E3(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_D5F4282C4BC12044B87B6D8EBB4DDEDA(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_F9FB823744A56550DC97C4B60144658E(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60153BEC7(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60425FC1D(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60E776D4B(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60E956C27(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60F1EEC5C(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B60F672537(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B610B074D7(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B611B209F2(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B612D49597(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B616429417(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B61E70A1B2(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B61EB52BDD(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B621FBD4C3(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B622E1872F(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B625FEF487(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B62D2D276B(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B633724F35(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6360D2E2A(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B643F5BBE9(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B64560E1C1(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B649489621(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B64FA67278(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B658DB5E3B(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B65AA58578(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B65BC10DD7(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B65C3431BD(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6604DF0A5(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6644A78A6(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B668EE4C83(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6755DFC23(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6793F72F3(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B67B6967D3(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B67B750C73(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B67B7EBC9A(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B67D1AA2A0(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6808D71A9(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B68C963612(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B68E12F6AF(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B68ED7F87B(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B69126B628(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B691D37CFB(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B691E33C47(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B699D109E2(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B69D470862(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B69F23E922(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6A953CB61(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6AA6D6972(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6B26B37B7(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6B8DBA78D(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6BA0F3699(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6BCE1D2C0(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6C035EF8D(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6C78B57E3(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6D057B066(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6D4529022(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6D6033B0F(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6D748C3CE(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6E0CA6A2D(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6E3EBD0F6(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6E5193036(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6EB1C6F3C(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6F4FAFA26(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6F6ACEF06(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6FAB7A8BD(const EFirestoreError Error);
	void OnError_F9FB823744A56550DC97C4B6FACE61D6(const EFirestoreError Error);
	void OnGot_0957317949653C9E7DAE8280038417AB(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnGot_0957317949653C9E7DAE82801C759687(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnGot_0957317949653C9E7DAE82802582B732(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnGot_0957317949653C9E7DAE8280BC6FC2FF(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnGot_0957317949653C9E7DAE8280F71BB9E3(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnGot_D5F4282C4BC12044B87B6D8EBB4DDEDA(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnHouseLoad();
	void OnRep_InCutscene();
	void OnRep_Loot_Point_Opened();
	void OnRep_Primary_Point_Id();
	void OnRep_Trigger_Pulled();
	void OnSet_F9FB823744A56550DC97C4B60144658E(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60153BEC7(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60425FC1D(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60E776D4B(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60E956C27(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60F1EEC5C(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B60F672537(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B610B074D7(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B611B209F2(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B612D49597(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B616429417(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B61E70A1B2(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B61EB52BDD(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B621FBD4C3(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B622E1872F(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B625FEF487(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B62D2D276B(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B633724F35(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6360D2E2A(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B643F5BBE9(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B64560E1C1(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B649489621(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B64FA67278(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B658DB5E3B(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B65AA58578(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B65BC10DD7(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B65C3431BD(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6604DF0A5(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6644A78A6(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B668EE4C83(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6755DFC23(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6793F72F3(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B67B6967D3(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B67B750C73(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B67B7EBC9A(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B67D1AA2A0(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6808D71A9(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B68C963612(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B68E12F6AF(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B68ED7F87B(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B69126B628(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B691D37CFB(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B691E33C47(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B699D109E2(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B69D470862(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B69F23E922(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6A953CB61(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6AA6D6972(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6B26B37B7(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6B8DBA78D(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6BA0F3699(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6BCE1D2C0(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6C035EF8D(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6C78B57E3(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6D057B066(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6D4529022(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6D6033B0F(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6D748C3CE(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6E0CA6A2D(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6E3EBD0F6(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6E5193036(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6EB1C6F3C(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6F4FAFA26(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6F6ACEF06(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6FAB7A8BD(const EFirestoreError Error);
	void OnSet_F9FB823744A56550DC97C4B6FACE61D6(const EFirestoreError Error);
	void PhaseShift(const class FString& Phase);
	void PlayerNameTemp(const class FString& Param_Name);
	void PositionSync();
	void ProteciveFinder(TArray<class FString>* OutStrArr);
	void ReadData();
	void ReadDataLocal();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Relevancy();
	void Resync(int32 Param_Primary_Point_Id, int32 Param_Secondary_Point_Id, bool Param_Crawling, bool Param_Block_Movement, bool Param_Loot_Point_Opened, bool Param_Trigger_Pulled, bool Param_InCutscene);
	void RoomInsidesOwner(TArray<class FString>& RoomInsideSave);
	void SavePlayerPosition();
	void SendData();
	void Set_Stash_Money(int32 MCount);
	void SetBattleState(bool State);
	void SetBattleState_Multi(bool State);
	void SetSaveData(TArray<class FString>* Param_SaveData);
	void SetStatSaveString(const class FString& StatSaveString);
	void SetSteamId(const class FString& Param_SteamID);
	void SoundMulti(bool Stop);
	void SoundServer(bool Stop);
	void SoundStop();
	void StashLoader(const TArray<class FString>& StrArr);
	void StashLocal(const TArray<class FString>& StrArr);
	void SteamIdInit();
	void StringArrayToFirebaseArray(const TArray<class FString>& Value, const TArray<struct FFirestoreFieldValue>* Result);
	struct FTimespan StringToTime(const class FString& SourceString, bool* IsTimeAllowed);
	void TimeFast();
	void TimeNext();
	class FString TimespanToString(const struct FTimespan& InTimespan);
	void TimeStop();
	void TimeStopMulti();
	void TriggerSync();
	void UpdateCars(TArray<class FString>& PlayerCars);
	void UpdateCarsStats(TArray<class FString>& CarsStats);
	void UpdateCash(TArray<class FString>& CashStr);
	void UpdateCashServ(TArray<class FString>& CashStr);
	void UpdateData(const TArray<class FString>& StrArr);
	void UpdateDataLoc(bool Good_, const class FString& Key);
	void UpdateDataServ(const TArray<class FString>& StrArr);
	void UpdateDataSuccess();
	void UpdateFamiliarity(TArray<class FString>& UpdateFam);
	void UpdateFirstRaid(bool bShowFirstRaidTutorial);
	void UpdateHouse(const class FString& HouseName);
	void UpdatePaidLoan(int32 PaidMoney);
	void UpdatePlayerPosition(const class FString& SaveLocation);
	void UpdatePlayerStats(const class FString& Stats);
	void UpdatePlayerTrainStats(const class FString& TrainStats);
	void UpdateQuests(TArray<class FString>& QuestSaveData);
	void UpdateQuestStarted(TArray<class FString>& Param_UpdateQuestStarted);
	void UpdateRoomInsides(TArray<class FString>& RoomInsides);
	void UpdateRPoints(const int32& UpdateRP);
	void UpdateStash(const TArray<class FString>& StrArr, const TArray<class FString>& PlayerInvStrArr);
	void UpdateStats(TArray<class FString>& StatSave);
	void UpdateSuccessfulExit(const int32& SuccessfulExit);
	void UpdateTowerIndexes(const TArray<int32>& TowerIndexes);
	void UpdateTutorialBegginer(bool Beginner);
	void UpdateTutorialIndex(int32 TIndex);
	void UpdateTutorStage(const class FString& StageName);
	void WeaponResync();
	void WeaponSync();
	void WeaponSync2(int32 Primary, int32 Secondary);
	void WidgetAdminPanelCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_SharpSync_C">();
	}
	static class UBPC_SharpSync_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_SharpSync_C>();
	}
};
static_assert(alignof(UBPC_SharpSync_C) == 0x000008, "Wrong alignment on UBPC_SharpSync_C");
static_assert(sizeof(UBPC_SharpSync_C) == 0x0002A0, "Wrong size on UBPC_SharpSync_C");
static_assert(offsetof(UBPC_SharpSync_C, UberGraphFrame) == 0x0000A0, "Member 'UBPC_SharpSync_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Surv) == 0x0000A8, "Member 'UBPC_SharpSync_C::Surv' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Primary_Point_Id) == 0x0000B0, "Member 'UBPC_SharpSync_C::Primary_Point_Id' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Secondary_Point_Id) == 0x0000B4, "Member 'UBPC_SharpSync_C::Secondary_Point_Id' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Loot_Point_Opened) == 0x0000B8, "Member 'UBPC_SharpSync_C::Loot_Point_Opened' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Block_Movement) == 0x0000B9, "Member 'UBPC_SharpSync_C::Block_Movement' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Crawling) == 0x0000BA, "Member 'UBPC_SharpSync_C::Crawling' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Trigger_Pulled) == 0x0000BB, "Member 'UBPC_SharpSync_C::Trigger_Pulled' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, InCutscene) == 0x0000BC, "Member 'UBPC_SharpSync_C::InCutscene' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, CutsceneCD) == 0x0000BD, "Member 'UBPC_SharpSync_C::CutsceneCD' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, MainPhase) == 0x0000C0, "Member 'UBPC_SharpSync_C::MainPhase' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, RelevancyCheck) == 0x0000D0, "Member 'UBPC_SharpSync_C::RelevancyCheck' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SaveData) == 0x0000D8, "Member 'UBPC_SharpSync_C::SaveData' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, As_Surv_PC) == 0x0000E8, "Member 'UBPC_SharpSync_C::As_Surv_PC' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SoundsCasual) == 0x0000F0, "Member 'UBPC_SharpSync_C::SoundsCasual' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SoundsCasualF) == 0x0000F8, "Member 'UBPC_SharpSync_C::SoundsCasualF' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SoundsBattle) == 0x000100, "Member 'UBPC_SharpSync_C::SoundsBattle' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SoundsBattleF) == 0x000108, "Member 'UBPC_SharpSync_C::SoundsBattleF' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Health) == 0x000110, "Member 'UBPC_SharpSync_C::Health' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, InFight) == 0x000118, "Member 'UBPC_SharpSync_C::InFight' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, InFightCooldown) == 0x000120, "Member 'UBPC_SharpSync_C::InFightCooldown' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, InBattleState) == 0x000128, "Member 'UBPC_SharpSync_C::InBattleState' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, F1Sound) == 0x000130, "Member 'UBPC_SharpSync_C::F1Sound' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, StashArr) == 0x000138, "Member 'UBPC_SharpSync_C::StashArr' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, IsAdmin) == 0x000148, "Member 'UBPC_SharpSync_C::IsAdmin' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SteamID) == 0x000150, "Member 'UBPC_SharpSync_C::SteamID' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, AdminList) == 0x000160, "Member 'UBPC_SharpSync_C::AdminList' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, AdminPanelBPC) == 0x000170, "Member 'UBPC_SharpSync_C::AdminPanelBPC' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, CashArr) == 0x000178, "Member 'UBPC_SharpSync_C::CashArr' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, CashArrTemp) == 0x000188, "Member 'UBPC_SharpSync_C::CashArrTemp' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Snapshot) == 0x000198, "Member 'UBPC_SharpSync_C::Snapshot' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, PrevLocation) == 0x0001A0, "Member 'UBPC_SharpSync_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, AFKTime) == 0x0001B8, "Member 'UBPC_SharpSync_C::AFKTime' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, PrevRotation) == 0x0001C0, "Member 'UBPC_SharpSync_C::PrevRotation' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Name_BPC_SharpSync_C) == 0x0001D8, "Member 'UBPC_SharpSync_C::Name_BPC_SharpSync_C' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, ServerScaleInfo) == 0x0001E8, "Member 'UBPC_SharpSync_C::ServerScaleInfo' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, KomnataStages) == 0x000200, "Member 'UBPC_SharpSync_C::KomnataStages' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, DatabaseReference) == 0x000250, "Member 'UBPC_SharpSync_C::DatabaseReference' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, StashData) == 0x000258, "Member 'UBPC_SharpSync_C::StashData' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SaveInvInt) == 0x000268, "Member 'UBPC_SharpSync_C::SaveInvInt' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SaveInvIntTemp) == 0x00026C, "Member 'UBPC_SharpSync_C::SaveInvIntTemp' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, DataInventoryTimer) == 0x000270, "Member 'UBPC_SharpSync_C::DataInventoryTimer' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, CheckCheatSpeedTimerHandle) == 0x000278, "Member 'UBPC_SharpSync_C::CheckCheatSpeedTimerHandle' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, SpeedWarningCount) == 0x000280, "Member 'UBPC_SharpSync_C::SpeedWarningCount' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Document_Snapshot) == 0x000288, "Member 'UBPC_SharpSync_C::Document_Snapshot' has a wrong offset!");
static_assert(offsetof(UBPC_SharpSync_C, Die_) == 0x000298, "Member 'UBPC_SharpSync_C::Die_' has a wrong offset!");

}

