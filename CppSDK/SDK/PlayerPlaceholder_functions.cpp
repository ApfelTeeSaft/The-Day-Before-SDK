#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPlaceholder

#include "Basic.hpp"

#include "PlayerPlaceholder_classes.hpp"
#include "PlayerPlaceholder_parameters.hpp"


namespace SDK
{

// Function PlayerPlaceholder.PlayerPlaceholder_C.ClientLevelLoaded
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::ClientLevelLoaded(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ClientLevelLoaded");

	Params::PlayerPlaceholder_C_ClientLevelLoaded Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ClientLevelUnloaded
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::ClientLevelUnloaded(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ClientLevelUnloaded");

	Params::PlayerPlaceholder_C_ClientLevelUnloaded Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.Collapse Palatka
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SurvPC_C>   PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::Collapse_Palatka(TScriptInterface<class IBPI_SurvPC_C> PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "Collapse Palatka");

	Params::PlayerPlaceholder_C_Collapse_Palatka Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.DelayNePashet
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::DelayNePashet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "DelayNePashet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.DelayNePashetx2
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::DelayNePashetx2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "DelayNePashetx2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.DestrSelfServ
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::DestrSelfServ()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "DestrSelfServ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ExecuteUbergraph_PlayerPlaceholder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::ExecuteUbergraph_PlayerPlaceholder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ExecuteUbergraph_PlayerPlaceholder");

	Params::PlayerPlaceholder_C_ExecuteUbergraph_PlayerPlaceholder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.InitPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PlayerPos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Spawn_Transform_Rotation                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPlaceholder_C::InitPlayer(const struct FVector& PlayerPos, const struct FRotator& Spawn_Transform_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "InitPlayer");

	Params::PlayerPlaceholder_C_InitPlayer Parms{};

	Parms.PlayerPos = std::move(PlayerPos);
	Parms.Spawn_Transform_Rotation = std::move(Spawn_Transform_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.InpActEvt_Alt_Two_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void APlayerPlaceholder_C::InpActEvt_Alt_Two_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "InpActEvt_Alt_Two_K2Node_InputKeyEvent_0");

	Params::PlayerPlaceholder_C_InpActEvt_Alt_Two_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.InpActEvt_Home_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void APlayerPlaceholder_C::InpActEvt_Home_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "InpActEvt_Home_K2Node_InputKeyEvent_1");

	Params::PlayerPlaceholder_C_InpActEvt_Home_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.InpActEvt_PickNewHero_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void APlayerPlaceholder_C::InpActEvt_PickNewHero_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "InpActEvt_PickNewHero_K2Node_InputActionEvent_1");

	Params::PlayerPlaceholder_C_InpActEvt_PickNewHero_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.InpActEvt_PickOldHero_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void APlayerPlaceholder_C::InpActEvt_PickOldHero_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "InpActEvt_PickOldHero_K2Node_InputActionEvent_0");

	Params::PlayerPlaceholder_C_InpActEvt_PickOldHero_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.LoadPlayerPos
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::LoadPlayerPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "LoadPlayerPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.MoveStartPoint
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPlaceholder_C::MoveStartPoint(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "MoveStartPoint");

	Params::PlayerPlaceholder_C_MoveStartPoint Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.OnLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::OnLevelLoaded(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "OnLevelLoaded");

	Params::PlayerPlaceholder_C_OnLevelLoaded Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ONLevelsLoaded
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::ONLevelsLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ONLevelsLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.OnLevelUnloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::OnLevelUnloaded(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "OnLevelUnloaded");

	Params::PlayerPlaceholder_C_OnLevelUnloaded Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.OnRep_LoginCompleted
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::OnRep_LoginCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "OnRep_LoginCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.OnServerLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvPC_C*                        SurvPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::OnServerLoad(class ASurvPC_C* SurvPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "OnServerLoad");

	Params::PlayerPlaceholder_C_OnServerLoad Parms{};

	Parms.SurvPC = SurvPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.OnServerLogin
// (BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::OnServerLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "OnServerLogin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.PickPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NewPers                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::PickPlayer(bool Param_NewPers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "PickPlayer");

	Params::PlayerPlaceholder_C_PickPlayer Parms{};

	Parms.Param_NewPers = Param_NewPers;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.PickSpawnPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::PickSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "PickSpawnPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.PickSpawnPoint_Player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::PickSpawnPoint_Player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "PickSpawnPoint_Player");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPlaceholder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPlaceholder_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.Serv_OnLevelsLoaded
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::Serv_OnLevelsLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "Serv_OnLevelsLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ServerCall
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::ServerCall(class APawn* InPawn, class AController* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ServerCall");

	Params::PlayerPlaceholder_C_ServerCall Parms{};

	Parms.InPawn = InPawn;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ServerLogin
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::ServerLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ServerLogin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ServerLogined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvPC_C*                        SurvPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::ServerLogined(class ASurvPC_C* SurvPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ServerLogined");

	Params::PlayerPlaceholder_C_ServerLogined Parms{};

	Parms.SurvPC = SurvPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.ServerPickSpawnPoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPlaceholder_C::ServerPickSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "ServerPickSpawnPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.SetSurvLocationServ
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::SetSurvLocationServ(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "SetSurvLocationServ");

	Params::PlayerPlaceholder_C_SetSurvLocationServ Parms{};

	Parms.NewLocation = std::move(NewLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceholder.PlayerPlaceholder_C.Test
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPlaceholder_C::Test(class ASurvivalPlayer_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceholder_C", "Test");

	Params::PlayerPlaceholder_C_Test Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

