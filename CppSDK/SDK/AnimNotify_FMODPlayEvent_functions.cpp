#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_FMODPlayEvent

#include "Basic.hpp"

#include "AnimNotify_FMODPlayEvent_classes.hpp"
#include "AnimNotify_FMODPlayEvent_parameters.hpp"


namespace SDK
{

// Function AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAnimNotify_FMODPlayEvent_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_FMODPlayEvent_C", "GetNotifyName");

	Params::AnimNotify_FMODPlayEvent_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference        EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_FMODPlayEvent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_FMODPlayEvent_C", "Received_Notify");

	Params::AnimNotify_FMODPlayEvent_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

