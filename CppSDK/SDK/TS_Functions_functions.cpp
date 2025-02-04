#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TS_Functions

#include "Basic.hpp"

#include "TS_Functions_classes.hpp"
#include "TS_Functions_parameters.hpp"


namespace SDK
{

// Function TS_Functions.TS_Functions_C.BlendToCinematicCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           NewViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                BlendFunc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BlendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTS_Functions_C::BlendToCinematicCamera(const class UObject* WorldContextObject, class AActor* NewViewTarget, double BlendTime, EViewTargetBlendFunction BlendFunc, double BlendExp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "BlendToCinematicCamera");

	Params::TS_Functions_C_BlendToCinematicCamera Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewViewTarget = NewViewTarget;
	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;
	Parms.BlendExp = BlendExp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function TS_Functions.TS_Functions_C.BlendToGameCamera
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                BlendFunc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BlendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTS_Functions_C::BlendToGameCamera(const class UObject* WorldContextObject, double BlendTime, EViewTargetBlendFunction BlendFunc, double BlendExp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "BlendToGameCamera");

	Params::TS_Functions_C_BlendToGameCamera Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;
	Parms.BlendExp = BlendExp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function TS_Functions.TS_Functions_C.CompareStrings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StringA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StringB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    A_B                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Min                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Max                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UTS_Functions_C::CompareStrings(const class FString& StringA, const class FString& StringB, class UObject* __WorldContext, bool* A_B, class FString* Min, class FString* Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "CompareStrings");

	Params::TS_Functions_C_CompareStrings Parms{};

	Parms.StringA = std::move(StringA);
	Parms.StringB = std::move(StringB);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (A_B != nullptr)
		*A_B = Parms.A_B;

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);
}


// Function TS_Functions.TS_Functions_C.HitNormalize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_SimplifiedHitInfo             S_SimplifiedHitInfo                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

struct FHitResult UTS_Functions_C::HitNormalize(const struct FS_SimplifiedHitInfo& S_SimplifiedHitInfo, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "HitNormalize");

	Params::TS_Functions_C_HitNormalize Parms{};

	Parms.S_SimplifiedHitInfo = std::move(S_SimplifiedHitInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TS_Functions.TS_Functions_C.SimplifyHitInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_SimplifiedHitInfo             S_SimplifiedHitInfo                                    (Parm, OutParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UTS_Functions_C::SimplifyHitInfo(const struct FHitResult& Hit, class UObject* __WorldContext, struct FS_SimplifiedHitInfo* S_SimplifiedHitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "SimplifyHitInfo");

	Params::TS_Functions_C_SimplifyHitInfo Parms{};

	Parms.Hit = std::move(Hit);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (S_SimplifiedHitInfo != nullptr)
		*S_SimplifiedHitInfo = std::move(Parms.S_SimplifiedHitInfo);
}


// Function TS_Functions.TS_Functions_C.SortActorArrayByName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   OutArray                                               (Parm, OutParm)

void UTS_Functions_C::SortActorArrayByName(TArray<class AActor*>& Array, class UObject* __WorldContext, TArray<class AActor*>* OutArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "SortActorArrayByName");

	Params::TS_Functions_C_SortActorArrayByName Parms{};

	Parms.Array = std::move(Array);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (OutArray != nullptr)
		*OutArray = std::move(Parms.OutArray);
}


// Function TS_Functions.TS_Functions_C.SortActorArrayByNamePSTDB
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APS_TDB_C*>                Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APS_TDB_C*>                OutArray                                               (Parm, OutParm)

void UTS_Functions_C::SortActorArrayByNamePSTDB(TArray<class APS_TDB_C*>& Array, class UObject* __WorldContext, TArray<class APS_TDB_C*>* OutArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "SortActorArrayByNamePSTDB");

	Params::TS_Functions_C_SortActorArrayByNamePSTDB Parms{};

	Parms.Array = std::move(Array);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (OutArray != nullptr)
		*OutArray = std::move(Parms.OutArray);
}


// Function TS_Functions.TS_Functions_C.SwapArrayElements
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   IndexA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IndexB                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTS_Functions_C::SwapArrayElements(TArray<class UObject*>& NewParam, int32 IndexA, int32 IndexB, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TS_Functions_C", "SwapArrayElements");

	Params::TS_Functions_C_SwapArrayElements Parms{};

	Parms.NewParam = std::move(NewParam);
	Parms.IndexA = IndexA;
	Parms.IndexB = IndexB;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	NewParam = std::move(Parms.NewParam);
}

}

