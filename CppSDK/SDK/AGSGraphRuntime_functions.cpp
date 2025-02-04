#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AGSGraphRuntime

#include "Basic.hpp"

#include "AGSGraphRuntime_classes.hpp"
#include "AGSGraphRuntime_parameters.hpp"


namespace SDK
{

// Function AGSGraphRuntime.AGSAction.ExecuteAction
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAGSGraphNode*                    NodeOwner                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGSAction::ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSAction", "ExecuteAction");

	Params::AGSAction_ExecuteAction Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NodeOwner = NodeOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AGSGraphRuntime.AGSCondition.GetNodeOwner
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAGSGraphNode*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAGSGraphNode* UAGSCondition::GetNodeOwner() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSCondition", "GetNodeOwner");

	Params::AGSCondition_GetNodeOwner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSCondition.VerifyCondition
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGSCondition::VerifyCondition(class APlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSCondition", "VerifyCondition");

	Params::AGSCondition_VerifyCondition Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraph.ActivateNode
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAGSGraphNode*                    Node                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGSGraph::ActivateNode(class UAGSGraphNode* Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "ActivateNode");

	Params::AGSGraph_ActivateNode Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraph.DeactivateAllNodes
// (Final, Native, Public, BlueprintCallable)

void UAGSGraph::DeactivateAllNodes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "DeactivateAllNodes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AGSGraphRuntime.AGSGraph.DeactivateNode
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAGSGraphNode*                    Node                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGSGraph::DeactivateNode(class UAGSGraphNode* Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "DeactivateNode");

	Params::AGSGraph_DeactivateNode Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraph.GetNodesByLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   Level                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAGSGraphNode*>            Nodes                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAGSGraph::GetNodesByLevel(int32 Level, TArray<class UAGSGraphNode*>* Nodes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "GetNodesByLevel");

	Params::AGSGraph_GetNodesByLevel Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Nodes != nullptr)
		*Nodes = std::move(Parms.Nodes);
}


// Function AGSGraphRuntime.AGSGraph.Print
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ToConsole                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ToScreen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAGSGraph::Print(bool ToConsole, bool ToScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "Print");

	Params::AGSGraph_Print Parms{};

	Parms.ToConsole = ToConsole;
	Parms.ToScreen = ToScreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AGSGraphRuntime.AGSGraph.GetActiveNodes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const TArray<class UAGSGraphNode*>      ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

const TArray<class UAGSGraphNode*> UAGSGraph::GetActiveNodes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "GetActiveNodes");

	Params::AGSGraph_GetActiveNodes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraph.GetAllNodes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const TArray<class UAGSGraphNode*>      ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

const TArray<class UAGSGraphNode*> UAGSGraph::GetAllNodes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "GetAllNodes");

	Params::AGSGraph_GetAllNodes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraph.GetLevelNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAGSGraph::GetLevelNum() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraph", "GetLevelNum");

	Params::AGSGraph_GetLevelNum Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraphEdge.GetGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAGSGraph*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAGSGraph* UAGSGraphEdge::GetGraph() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraphEdge", "GetGraph");

	Params::AGSGraphEdge_GetGraph Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraphNode.GetEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAGSGraphNode*                    ChildNode                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAGSGraphEdge*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAGSGraphEdge* UAGSGraphNode::GetEdge(class UAGSGraphNode* ChildNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraphNode", "GetEdge");

	Params::AGSGraphNode_GetEdge Parms{};

	Parms.ChildNode = ChildNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraphNode.GetDescription
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAGSGraphNode::GetDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraphNode", "GetDescription");

	Params::AGSGraphNode_GetDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraphNode.GetGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAGSGraph*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAGSGraph* UAGSGraphNode::GetGraph() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraphNode", "GetGraph");

	Params::AGSGraphNode_GetGraph Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AGSGraphRuntime.AGSGraphNode.IsLeafNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAGSGraphNode::IsLeafNode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AGSGraphNode", "IsLeafNode");

	Params::AGSGraphNode_IsLeafNode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

