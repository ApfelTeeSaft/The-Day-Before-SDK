#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AGSGraphRuntime

#include "Basic.hpp"


namespace SDK::Params
{

// Function AGSGraphRuntime.AGSAction.ExecuteAction
// 0x0010 (0x0010 - 0x0000)
struct AGSAction_ExecuteAction final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSGraphNode*                          NodeOwner;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSAction_ExecuteAction) == 0x000008, "Wrong alignment on AGSAction_ExecuteAction");
static_assert(sizeof(AGSAction_ExecuteAction) == 0x000010, "Wrong size on AGSAction_ExecuteAction");
static_assert(offsetof(AGSAction_ExecuteAction, PlayerController) == 0x000000, "Member 'AGSAction_ExecuteAction::PlayerController' has a wrong offset!");
static_assert(offsetof(AGSAction_ExecuteAction, NodeOwner) == 0x000008, "Member 'AGSAction_ExecuteAction::NodeOwner' has a wrong offset!");

// Function AGSGraphRuntime.AGSCondition.GetNodeOwner
// 0x0008 (0x0008 - 0x0000)
struct AGSCondition_GetNodeOwner final
{
public:
	class UAGSGraphNode*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSCondition_GetNodeOwner) == 0x000008, "Wrong alignment on AGSCondition_GetNodeOwner");
static_assert(sizeof(AGSCondition_GetNodeOwner) == 0x000008, "Wrong size on AGSCondition_GetNodeOwner");
static_assert(offsetof(AGSCondition_GetNodeOwner, ReturnValue) == 0x000000, "Member 'AGSCondition_GetNodeOwner::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSCondition.VerifyCondition
// 0x0010 (0x0010 - 0x0000)
struct AGSCondition_VerifyCondition final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AGSCondition_VerifyCondition) == 0x000008, "Wrong alignment on AGSCondition_VerifyCondition");
static_assert(sizeof(AGSCondition_VerifyCondition) == 0x000010, "Wrong size on AGSCondition_VerifyCondition");
static_assert(offsetof(AGSCondition_VerifyCondition, PlayerController) == 0x000000, "Member 'AGSCondition_VerifyCondition::PlayerController' has a wrong offset!");
static_assert(offsetof(AGSCondition_VerifyCondition, ReturnValue) == 0x000008, "Member 'AGSCondition_VerifyCondition::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.ActivateNode
// 0x0010 (0x0010 - 0x0000)
struct AGSGraph_ActivateNode final
{
public:
	class UAGSGraphNode*                          Node;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AGSGraph_ActivateNode) == 0x000008, "Wrong alignment on AGSGraph_ActivateNode");
static_assert(sizeof(AGSGraph_ActivateNode) == 0x000010, "Wrong size on AGSGraph_ActivateNode");
static_assert(offsetof(AGSGraph_ActivateNode, Node) == 0x000000, "Member 'AGSGraph_ActivateNode::Node' has a wrong offset!");
static_assert(offsetof(AGSGraph_ActivateNode, ReturnValue) == 0x000008, "Member 'AGSGraph_ActivateNode::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.DeactivateNode
// 0x0010 (0x0010 - 0x0000)
struct AGSGraph_DeactivateNode final
{
public:
	class UAGSGraphNode*                          Node;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AGSGraph_DeactivateNode) == 0x000008, "Wrong alignment on AGSGraph_DeactivateNode");
static_assert(sizeof(AGSGraph_DeactivateNode) == 0x000010, "Wrong size on AGSGraph_DeactivateNode");
static_assert(offsetof(AGSGraph_DeactivateNode, Node) == 0x000000, "Member 'AGSGraph_DeactivateNode::Node' has a wrong offset!");
static_assert(offsetof(AGSGraph_DeactivateNode, ReturnValue) == 0x000008, "Member 'AGSGraph_DeactivateNode::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.GetNodesByLevel
// 0x0018 (0x0018 - 0x0000)
struct AGSGraph_GetNodesByLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAGSGraphNode*>                  Nodes;                                             // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraph_GetNodesByLevel) == 0x000008, "Wrong alignment on AGSGraph_GetNodesByLevel");
static_assert(sizeof(AGSGraph_GetNodesByLevel) == 0x000018, "Wrong size on AGSGraph_GetNodesByLevel");
static_assert(offsetof(AGSGraph_GetNodesByLevel, Level) == 0x000000, "Member 'AGSGraph_GetNodesByLevel::Level' has a wrong offset!");
static_assert(offsetof(AGSGraph_GetNodesByLevel, Nodes) == 0x000008, "Member 'AGSGraph_GetNodesByLevel::Nodes' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.Print
// 0x0002 (0x0002 - 0x0000)
struct AGSGraph_Print final
{
public:
	bool                                          ToConsole;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ToScreen;                                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraph_Print) == 0x000001, "Wrong alignment on AGSGraph_Print");
static_assert(sizeof(AGSGraph_Print) == 0x000002, "Wrong size on AGSGraph_Print");
static_assert(offsetof(AGSGraph_Print, ToConsole) == 0x000000, "Member 'AGSGraph_Print::ToConsole' has a wrong offset!");
static_assert(offsetof(AGSGraph_Print, ToScreen) == 0x000001, "Member 'AGSGraph_Print::ToScreen' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.GetActiveNodes
// 0x0010 (0x0010 - 0x0000)
struct AGSGraph_GetActiveNodes final
{
public:
	TArray<class UAGSGraphNode*>                  ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraph_GetActiveNodes) == 0x000008, "Wrong alignment on AGSGraph_GetActiveNodes");
static_assert(sizeof(AGSGraph_GetActiveNodes) == 0x000010, "Wrong size on AGSGraph_GetActiveNodes");
static_assert(offsetof(AGSGraph_GetActiveNodes, ReturnValue) == 0x000000, "Member 'AGSGraph_GetActiveNodes::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.GetAllNodes
// 0x0010 (0x0010 - 0x0000)
struct AGSGraph_GetAllNodes final
{
public:
	TArray<class UAGSGraphNode*>                  ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraph_GetAllNodes) == 0x000008, "Wrong alignment on AGSGraph_GetAllNodes");
static_assert(sizeof(AGSGraph_GetAllNodes) == 0x000010, "Wrong size on AGSGraph_GetAllNodes");
static_assert(offsetof(AGSGraph_GetAllNodes, ReturnValue) == 0x000000, "Member 'AGSGraph_GetAllNodes::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraph.GetLevelNum
// 0x0004 (0x0004 - 0x0000)
struct AGSGraph_GetLevelNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraph_GetLevelNum) == 0x000004, "Wrong alignment on AGSGraph_GetLevelNum");
static_assert(sizeof(AGSGraph_GetLevelNum) == 0x000004, "Wrong size on AGSGraph_GetLevelNum");
static_assert(offsetof(AGSGraph_GetLevelNum, ReturnValue) == 0x000000, "Member 'AGSGraph_GetLevelNum::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraphEdge.GetGraph
// 0x0008 (0x0008 - 0x0000)
struct AGSGraphEdge_GetGraph final
{
public:
	class UAGSGraph*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraphEdge_GetGraph) == 0x000008, "Wrong alignment on AGSGraphEdge_GetGraph");
static_assert(sizeof(AGSGraphEdge_GetGraph) == 0x000008, "Wrong size on AGSGraphEdge_GetGraph");
static_assert(offsetof(AGSGraphEdge_GetGraph, ReturnValue) == 0x000000, "Member 'AGSGraphEdge_GetGraph::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraphNode.GetEdge
// 0x0010 (0x0010 - 0x0000)
struct AGSGraphNode_GetEdge final
{
public:
	class UAGSGraphNode*                          ChildNode;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSGraphEdge*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraphNode_GetEdge) == 0x000008, "Wrong alignment on AGSGraphNode_GetEdge");
static_assert(sizeof(AGSGraphNode_GetEdge) == 0x000010, "Wrong size on AGSGraphNode_GetEdge");
static_assert(offsetof(AGSGraphNode_GetEdge, ChildNode) == 0x000000, "Member 'AGSGraphNode_GetEdge::ChildNode' has a wrong offset!");
static_assert(offsetof(AGSGraphNode_GetEdge, ReturnValue) == 0x000008, "Member 'AGSGraphNode_GetEdge::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraphNode.GetDescription
// 0x0018 (0x0018 - 0x0000)
struct AGSGraphNode_GetDescription final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraphNode_GetDescription) == 0x000008, "Wrong alignment on AGSGraphNode_GetDescription");
static_assert(sizeof(AGSGraphNode_GetDescription) == 0x000018, "Wrong size on AGSGraphNode_GetDescription");
static_assert(offsetof(AGSGraphNode_GetDescription, ReturnValue) == 0x000000, "Member 'AGSGraphNode_GetDescription::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraphNode.GetGraph
// 0x0008 (0x0008 - 0x0000)
struct AGSGraphNode_GetGraph final
{
public:
	class UAGSGraph*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraphNode_GetGraph) == 0x000008, "Wrong alignment on AGSGraphNode_GetGraph");
static_assert(sizeof(AGSGraphNode_GetGraph) == 0x000008, "Wrong size on AGSGraphNode_GetGraph");
static_assert(offsetof(AGSGraphNode_GetGraph, ReturnValue) == 0x000000, "Member 'AGSGraphNode_GetGraph::ReturnValue' has a wrong offset!");

// Function AGSGraphRuntime.AGSGraphNode.IsLeafNode
// 0x0001 (0x0001 - 0x0000)
struct AGSGraphNode_IsLeafNode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AGSGraphNode_IsLeafNode) == 0x000001, "Wrong alignment on AGSGraphNode_IsLeafNode");
static_assert(sizeof(AGSGraphNode_IsLeafNode) == 0x000001, "Wrong size on AGSGraphNode_IsLeafNode");
static_assert(offsetof(AGSGraphNode_IsLeafNode, ReturnValue) == 0x000000, "Member 'AGSGraphNode_IsLeafNode::ReturnValue' has a wrong offset!");

}
