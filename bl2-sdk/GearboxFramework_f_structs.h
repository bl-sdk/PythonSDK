#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GearboxFramework.AIDebugCamera.ToggleAITree
struct UAIDebugCamera_ToggleAITree_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleTargetViewCones
struct UAIDebugCamera_ToggleTargetViewCones_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleAwarenessZones
struct UAIDebugCamera_ToggleAwarenessZones_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleRuleEngineLoadBalance
struct UAIDebugCamera_ToggleRuleEngineLoadBalance_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleCombat
struct UAIDebugCamera_ToggleCombat_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleShowTimers
struct UAIDebugCamera_ToggleShowTimers_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleResources
struct UAIDebugCamera_ToggleResources_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleInactiveRules
struct UAIDebugCamera_ToggleInactiveRules_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleRules
struct UAIDebugCamera_ToggleRules_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleFlags
struct UAIDebugCamera_ToggleFlags_Params
{
};

// Function GearboxFramework.AIDebugCamera.GetTracker
struct UAIDebugCamera_GetTracker_Params
{
	class UAITracker*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.SetMind
struct UAIDebugCamera_SetMind_Params
{
	class AGearboxMind*                                NewMind;                                                  // (Parm)
};

// Function GearboxFramework.AIDebugCamera.InitDummies
struct UAIDebugCamera_InitDummies_Params
{
	int                                                NewNumDummies;                                            // (Parm)
};

// Function GearboxFramework.AIDebugCamera.WantsToDoCameraInspection
struct UAIDebugCamera_WantsToDoCameraInspection_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.SetCurrentInspectedTarget
struct UAIDebugCamera_SetCurrentInspectedTarget_Params
{
	struct FName                                       NewName;                                                  // (Parm)
};

// Function GearboxFramework.AIDebugCamera.CompareRuleSetAndAdjustRuleIdx
struct UAIDebugCamera_CompareRuleSetAndAdjustRuleIdx_Params
{
	class USnapshotRecord*                             OldSnapshot;                                              // (Parm)
	class USnapshotRecord*                             NewSnapshot;                                              // (Parm)
};

// Function GearboxFramework.AIDebugCamera.SetRuleEngine
struct UAIDebugCamera_SetRuleEngine_Params
{
	class URuleEngine*                                 NewRuleEngine;                                            // (Parm)
};

// Function GearboxFramework.AIDebugCamera.SetPrevSnapshotRule
struct UAIDebugCamera_SetPrevSnapshotRule_Params
{
};

// Function GearboxFramework.AIDebugCamera.SetNextSnapshotRule
struct UAIDebugCamera_SetNextSnapshotRule_Params
{
};

// Function GearboxFramework.AIDebugCamera.SetPrevSnapshot
struct UAIDebugCamera_SetPrevSnapshot_Params
{
};

// Function GearboxFramework.AIDebugCamera.SetNextSnapshot
struct UAIDebugCamera_SetNextSnapshot_Params
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGameUnPaused
struct UAIDebugCamera_NotifyGameUnPaused_Params
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGamePaused
struct UAIDebugCamera_NotifyGamePaused_Params
{
};

// Function GearboxFramework.AIDebugCamera.Display
struct UAIDebugCamera_Display_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function GearboxFramework.SpecialMoveInterface.SetReplicatedSMData
struct USpecialMoveInterface_SetReplicatedSMData_Params
{
	struct FSpecialMoveData                            NewSMData;                                                // (Parm, OutParm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_StopAny
struct USpecialMoveInterface_ServerSpecialMove_StopAny_Params
{
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Stop
struct USpecialMoveInterface_ServerSpecialMove_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                                   // (Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Queue
struct USpecialMoveInterface_ServerSpecialMove_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Play
struct USpecialMoveInterface_ServerSpecialMove_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionRotationMode
struct USpecialMoveInterface_GetDefaultRootMotionRotationMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionMode
struct USpecialMoveInterface_GetDefaultRootMotionMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveInterface.GetSkelMesh
struct USpecialMoveInterface_GetSkelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.SpecialMoveInterface.GetSMComponent
struct USpecialMoveInterface_GetSMComponent_Params
{
	class USpecialMoveComponent*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.SpecialMoveInterface.GetActor
struct USpecialMoveInterface_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.IsPlaying
struct UAnimNodeSpecialMoveBlend_IsPlaying_Params
{
	class UGearboxAnimDefinition*                      AnimSMD;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.SetRootMotion
struct UAnimNodeSpecialMoveBlend_SetRootMotion_Params
{
	class URootMotionDefinition*                       RMDef;                                                    // (Parm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimDef
struct UAnimNodeSpecialMoveBlend_GetCurrentAnimDef_Params
{
	class UGearboxAnimDefinition*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimName
struct UAnimNodeSpecialMoveBlend_GetCurrentAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Finish
struct UAnimNodeSpecialMoveBlend_Finish_Params
{
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Stop
struct UAnimNodeSpecialMoveBlend_Stop_Params
{
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.PlayData
struct UAnimNodeSpecialMoveBlend_PlayData_Params
{
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	struct FName                                       AnimNameOverride;                                         // (OptionalParm, Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              BlendInOverride;                                          // (OptionalParm, Parm)
	float                                              BlendOutOverride;                                         // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Play
struct UAnimNodeSpecialMoveBlend_Play_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                            // (Parm)
	struct FName                                       AnimNameOverride;                                         // (OptionalParm, Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              BlendInOverride;                                          // (OptionalParm, Parm)
	float                                              BlendOutOverride;                                         // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AttributeExpressionEvaluator.Evaluate
struct UAttributeExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_CallFunction.CallFunction
struct UBehavior_CallFunction_CallFunction_Params
{
	class AActor*                                      inActor;                                                  // (Parm)
	struct FName                                       InFunctionName;                                           // (Parm)
};

// Function GearboxFramework.Behavior_CallFunction.ApplyBehaviorToContext
struct UBehavior_CallFunction_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.IBehaviorConsumer.GetBehaviorConsumerHandle
struct UIBehaviorConsumer_GetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState.ApplyBehaviorToContext
struct UBehavior_ChangeRemoteBehaviorSequenceState_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.ITimerBehavior.SetTimerState
struct UITimerBehavior_SetTimerState_Params
{
	unsigned char                                      TimerId;                                                  // (Parm)
	struct FBehaviorTimerState                         TimerState;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ITimerBehavior.GetTimerState
struct UITimerBehavior_GetTimerState_Params
{
	unsigned char                                      TimerId;                                                  // (Parm)
	struct FBehaviorTimerState                         TimerState;                                               // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ITimerBehavior.GetTimeSeconds
struct UITimerBehavior_GetTimeSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_ChangeTimer.ApplyBehaviorToContext
struct UBehavior_ChangeTimer_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_IsSequenceEnabled.ApplyBehaviorToContext
struct UBehavior_IsSequenceEnabled_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_PostAkEvent.ApplyBehaviorToContext
struct UBehavior_PostAkEvent_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorHelpers.RunAllBehaviorsForEvent
struct UBehaviorHelpers_RunAllBehaviorsForEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	struct FScriptDelegate                             SetStrategy;                                              // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Strategy;                                                 // (Parm, NeedCtorLink)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (OptionalParm, Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (OptionalParm, Parm)
	struct FBehaviorParameters                         EventData;                                                // (OptionalParm, Parm, NeedCtorLink)
	unsigned char                                      EnumValue;                                                // (OptionalParm, Parm)
};

// Function GearboxFramework.BehaviorHelpers.BehaviorStrategy
struct UBehaviorHelpers_BehaviorStrategy_Params
{
	struct FPointer                                    BehaviorSet;                                              // (Parm)
	struct FName                                       EventName;                                                // (Parm)
	TArray<class UBehaviorBase*>                       BehaviorList;                                             // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      EnumValue;                                                // (OptionalParm, Parm)
};

// Function GearboxFramework.BehaviorHelpers.BehaviorSetStrategy
struct UBehaviorHelpers_BehaviorSetStrategy_Params
{
	TArray<struct FPointer>                            BehaviorSetList;                                          // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorHelpers.ResolveBehaviorProviderDefinitionReference
struct UBehaviorHelpers_ResolveBehaviorProviderDefinitionReference_Params
{
	class UBehaviorBase*                               SourceBehavior;                                           // (Const, Parm)
	class UObject*                                     ProviderReference;                                        // (Const, Parm)
	struct FNameBasedObjectPath                        PathName;                                                 // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.IsBehaviorsV2
struct UBehaviorHelpers_IsBehaviorsV2_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.ShouldContinueExecution
struct UBehaviorHelpers_ShouldContinueExecution_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	float                                              TimeBetweenSteps;                                         // (Parm)
	int                                                NumSteps;                                                 // (Parm, OutParm)
	int                                                MaxSteps;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetNextFireLocationSocket
struct UBehaviorHelpers_GetNextFireLocationSocket_Params
{
	unsigned char                                      FireSocketSelection;                                      // (Parm)
	TArray<struct FName>                               FireLocationSocketNames;                                  // (Parm, NeedCtorLink)
	TArray<struct FName>                               FireLocationSocketsRemaining;                             // (Parm, OutParm, NeedCtorLink)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetRotationFromAttachmentLocationData
struct UBehaviorHelpers_GetRotationFromAttachmentLocationData_Params
{
	struct FAttachmentLocationData                     AttachmentLocation;                                       // (Const, Parm)
	struct FRotator                                    AttachmentLocationRotation;                               // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetRelativeDirection
struct UBehaviorHelpers_GetRelativeDirection_Params
{
	struct FRelativeDirectionData                      DesiredDirection;                                         // (Parm)
	FScriptInterface                                   Source;                                                   // (Parm)
	struct FVector                                     DefaultDirection;                                         // (Parm)
	struct FName                                       SpawnSocketName;                                          // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.CompoundExpressionEvaluator.Evaluate
struct UCompoundExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsOfClassFromLevel
struct UGBXActorList_RemoveAndDeleteActorsOfClassFromLevel_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	class ULevel*                                      Level;                                                    // (Parm)
};

// Function GearboxFramework.GBXActorList.RemoveActorsOfClassFromLevel
struct UGBXActorList_RemoveActorsOfClassFromLevel_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	class ULevel*                                      Level;                                                    // (Parm)
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsFromLevel
struct UGBXActorList_RemoveAndDeleteActorsFromLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm)
};

// Function GearboxFramework.GBXActorList.RemoveActorsFromLevel
struct UGBXActorList_RemoveActorsFromLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm)
};

// Function GearboxFramework.GBXActorList.FindNextActorByLevel
struct UGBXActorList_FindNextActorByLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindFirstActorByLevel
struct UGBXActorList_FindFirstActorByLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindNextActorByClass
struct UGBXActorList_FindNextActorByClass_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindFirstActorByClass
struct UGBXActorList_FindFirstActorByClass_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXActorList.RemoveActor
struct UGBXActorList_RemoveActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
};

// Function GearboxFramework.GBXActorList.AddActor
struct UGBXActorList_AddActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	class ULevel*                                      Level;                                                    // (Parm)
};

// Function GearboxFramework.GBXObjectList.RemoveObjectsOfClass
struct UGBXObjectList_RemoveObjectsOfClass_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
};

// Function GearboxFramework.GBXObjectList.FindNextObjectByClass
struct UGBXObjectList_FindNextObjectByClass_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXObjectList.FindFirstObjectByClass
struct UGBXObjectList_FindFirstObjectByClass_Params
{
	class UClass*                                      TheClass;                                                 // (Const, Parm)
	int                                                Index;                                                    // (Parm, OutParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GBXObjectList.RemoveObject
struct UGBXObjectList_RemoveObject_Params
{
	class UObject*                                     TheObject;                                                // (Parm)
};

// Function GearboxFramework.GBXObjectList.AddObject
struct UGBXObjectList_AddObject_Params
{
	class UObject*                                     TheObject;                                                // (Parm)
};

// Function GearboxFramework.GearboxAIController.ForceMoveToActor
struct AGearboxAIController_ForceMoveToActor_Params
{
	class AActor*                                      destActor;                                                // (Parm)
};

// Function GearboxFramework.GearboxAIMoveNode.DoesPatrolPathExistToPoint
struct AGearboxAIMoveNode_DoesPatrolPathExistToPoint_Params
{
	class AGearboxAIMoveNode*                          PatrolPoint;                                              // (Const, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.GetAllLinkedNodes
struct AGearboxAIMoveNode_GetAllLinkedNodes_Params
{
	TArray<class AGearboxAIMoveNode*>                  OutNodes;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNodeClosestToPoint
struct AGearboxAIMoveNode_GetNextMoveNodeClosestToPoint_Params
{
	struct FVector                                     TestPoint;                                                // (Parm)
	class AGearboxAIMoveNode*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNode
struct AGearboxAIMoveNode_GetNextMoveNode_Params
{
	class AGearboxAIMoveNode*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.RemoveNode
struct AGearboxAIMoveNode_RemoveNode_Params
{
	class AGearboxAIMoveNode*                          OldNode;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.AddNode
struct AGearboxAIMoveNode_AddNode_Params
{
	class AGearboxAIMoveNode*                          NewNode;                                                  // (Parm)
};

// Function GearboxFramework.GearboxAIMoveNode.ClearLinks
struct AGearboxAIMoveNode_ClearLinks_Params
{
};

// Function GearboxFramework.GearboxAIMoveNode.OnToggle
struct AGearboxAIMoveNode_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function GearboxFramework.GearboxCameraBasic.FinishCameraLookAt
struct AGearboxCameraBasic_FinishCameraLookAt_Params
{
};

// Function GearboxFramework.GearboxCameraBasic.EnableThirdPersonLookAt
struct AGearboxCameraBasic_EnableThirdPersonLookAt_Params
{
	float                                              LookAtXOffset;                                            // (Parm)
	float                                              LookAtYOffset;                                            // (Parm)
	float                                              LookAtZOffset;                                            // (Parm)
	unsigned char                                      LookAtMode;                                               // (Parm)
};

// Function GearboxFramework.GearboxCameraBasic.BeginCameraLookAt
struct AGearboxCameraBasic_BeginCameraLookAt_Params
{
	class AActor*                                      LookAtTarget;                                             // (Parm)
	struct FName                                       LookAtBone;                                               // (Parm)
	struct FVector                                     TargetLocation;                                           // (Parm)
	float                                              Zoom;                                                     // (Parm)
	struct FVector2D                                   FOV;                                                      // (Parm)
	float                                              Duration;                                                 // (Parm)
	float                                              TransitionTimeIn;                                         // (Parm)
	float                                              TransitionTimeOut;                                        // (Parm)
};

// Function GearboxFramework.GearboxCameraBasic.CalcSimpleThirdPersonView
struct AGearboxCameraBasic_CalcSimpleThirdPersonView_Params
{
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxCameraBasic.CalcBaseView
struct AGearboxCameraBasic_CalcBaseView_Params
{
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxCameraBasic.UpdateViewTarget
struct AGearboxCameraBasic_UpdateViewTarget_Params
{
	struct FTViewTarget                                OutVT;                                                    // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxCameraModifier.LerpFOV
struct UGearboxCameraModifier_LerpFOV_Params
{
	float                                              Src;                                                      // (Parm)
	float                                              Dest;                                                     // (Parm)
	float                                              T;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.LerpRotation
struct UGearboxCameraModifier_LerpRotation_Params
{
	struct FRotator                                    Src;                                                      // (Parm)
	struct FRotator                                    Dest;                                                     // (Parm)
	float                                              T;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.LerpLocation
struct UGearboxCameraModifier_LerpLocation_Params
{
	struct FVector                                     Src;                                                      // (Parm)
	struct FVector                                     Dest;                                                     // (Parm)
	float                                              T;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.UpdateAllLerps
struct UGearboxCameraModifier_UpdateAllLerps_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCameraModifier.UpdateMasterFadePercentage
struct UGearboxCameraModifier_UpdateMasterFadePercentage_Params
{
	float                                              AdjustedDeltaTime;                                        // (Parm)
};

// Function GearboxFramework.GearboxCameraModifier.IsFadingDownwards
struct UGearboxCameraModifier_IsFadingDownwards_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.IsFadingUpwards
struct UGearboxCameraModifier_IsFadingUpwards_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.IsFadeInProgress
struct UGearboxCameraModifier_IsFadeInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCameraModifier.StartFadeOut
struct UGearboxCameraModifier_StartFadeOut_Params
{
	float                                              NewTimeSpan;                                              // (Parm)
	unsigned long                                      NewDisableWhenFadedOut : 1;                                   // (OptionalParm, Parm)
	unsigned char                                      NewFadeMode;                                              // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxCameraModifier.StartFadeIn
struct UGearboxCameraModifier_StartFadeIn_Params
{
	float                                              NewTimeSpan;                                              // (Parm)
	unsigned char                                      NewFadeMode;                                              // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxCameraModifier.SetDesiredCamera
struct UGearboxCameraModifier_SetDesiredCamera_Params
{
	struct FVector                                     DesiredLoc;                                               // (Parm)
	struct FRotator                                    DesiredRot;                                               // (Parm)
	float                                              DesiredFOV;                                               // (Parm)
};

// Function GearboxFramework.GearboxCameraModifier.SetGBXCameraOwner
struct UGearboxCameraModifier_SetGBXCameraOwner_Params
{
	class AGearboxCameraBasic*                         InCamera;                                                 // (Parm)
};

// Function GearboxFramework.GearboxCameraModifier.AddCameraModifier
struct UGearboxCameraModifier_AddCameraModifier_Params
{
	class ACamera*                                     Camera;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogInterface.ServerDialog_TriggerEvent
struct UGearboxDialogInterface_ServerDialog_TriggerEvent_Params
{
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
	class AActor*                                      Other;                                                    // (OptionalParm, Parm)
	class UObject*                                     ObjectParameter;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxDialogInterface.SetDialogNameTag
struct UGearboxDialogInterface_SetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       NewName;                                                  // (Parm)
};

// Function GearboxFramework.GearboxDialogInterface.GetReplicatedDialogData
struct UGearboxDialogInterface_GetReplicatedDialogData_Params
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogInterface.SetReplicatedDialogData
struct UGearboxDialogInterface_SetReplicatedDialogData_Params
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                                  // (Parm)
	struct FGearboxDialogData                          Data;                                                     // (Parm, OutParm)
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogGroups
struct UGearboxDialogInterface_GetDialogGroups_Params
{
	TArray<class UGearboxDialogGroup*>                 Groups;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogComponent
struct UGearboxDialogInterface_GetDialogComponent_Params
{
	class UGearboxDialogComponent*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogNameTag
struct UGearboxDialogInterface_GetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogInterface.GetActor
struct UGearboxDialogInterface_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogInterface.CanTalk
struct UGearboxDialogInterface_CanTalk_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEditorNode.IsChild
struct UGearboxEditorNode_IsChild_Params
{
	class UGearboxEditorNode*                          TestNode;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEngine.GetSparkInterface
struct UGearboxEngine_GetSparkInterface_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEngine.IsCurrentDeviceValid
struct UGearboxEngine_IsCurrentDeviceValid_Params
{
	int                                                SizeNeeded;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEngine.HasStorageDeviceBeenRemoved
struct UGearboxEngine_HasStorageDeviceBeenRemoved_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEngine.GetCurrentDeviceID
struct UGearboxEngine_GetCurrentDeviceID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEngine.SetCurrentDeviceID
struct UGearboxEngine_SetCurrentDeviceID_Params
{
	int                                                NewDeviceID;                                              // (Parm)
	unsigned long                                      bProfileSignedOut : 1;                                        // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxGameInfo.PostLogin
struct AGearboxGameInfo_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function GearboxFramework.GFxMovieState.GetDebugString
struct UGFxMovieState_GetDebugString_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
	unsigned long                                      bIncludeFlags : 1;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GFxMovieState.ApplyMovieState
struct UGFxMovieState_ApplyMovieState_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
	class UClass*                                      HandlerClass;                                             // (Parm)
};

// Function GearboxFramework.GFxMovieState.FindMovieState
struct UGFxMovieState_FindMovieState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieState.TestState
struct UGFxMovieState_TestState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	struct FMovieStateStruct                           MovieState;                                               // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieState.ToggleState
struct UGFxMovieState_ToggleState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	struct FMovieStateStruct                           MovieState;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieState.EnableState
struct UGFxMovieState_EnableState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	struct FMovieStateStruct                           MovieState;                                               // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      bEnable : 1;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.extSetLanguageExt
struct UGearboxGFxMovie_extSetLanguageExt_Params
{
	struct FString                                     ClipPath;                                                 // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.OnClosedOnDeath
struct UGearboxGFxMovie_OnClosedOnDeath_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.IsShowingFlashMouse
struct UGearboxGFxMovie_IsShowingFlashMouse_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.extIsMouseablePlatform
struct UGearboxGFxMovie_extIsMouseablePlatform_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.SetMouseableFlag
struct UGearboxGFxMovie_SetMouseableFlag_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.GetStyleDebugString
struct UGearboxGFxMovie_GetStyleDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GetStateDebugString
struct UGearboxGFxMovie_GetStateDebugString_Params
{
	unsigned long                                      bIncludeFlags : 1;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.InitializeFrom
struct UGearboxGFxMovie_InitializeFrom_Params
{
	class UGearboxGFxMovie*                            SrcMovie;                                                 // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStylesDrawnTo
struct UGearboxGFxMovie_RemoveStylesDrawnTo_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, EditInline)
	FScriptInterface                                   Target;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyles
struct UGearboxGFxMovie_RemoveStyles_Params
{
	FScriptInterface                                   Target;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyle
struct UGearboxGFxMovie_RemoveStyle_Params
{
	class UGFxMovieDrawStyle*                          Style;                                                    // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.AddStyle
struct UGearboxGFxMovie_AddStyle_Params
{
	class UGFxMovieDrawStyle*                          Style;                                                    // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.ShutdownMoviePlayback
struct UGearboxGFxMovie_ShutdownMoviePlayback_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.InitMoviePlayback
struct UGearboxGFxMovie_InitMoviePlayback_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.GetRenderTexture
struct UGearboxGFxMovie_GetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_OnChanged
struct UGearboxGFxMovie_MovieState_OnChanged_Params
{
	unsigned long                                      bStateWasChanged : 1;                                         // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SetFromMovie
struct UGearboxGFxMovie_MovieState_SetFromMovie_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Copy
struct UGearboxGFxMovie_MovieState_Copy_Params
{
	struct FMovieStateStruct                           StateDst;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FMovieStateStruct                           StateSrc;                                                 // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Compare
struct UGearboxGFxMovie_MovieState_Compare_Params
{
	struct FMovieStateStruct                           S1;                                                       // (Parm, OutParm, NeedCtorLink)
	struct FMovieStateStruct                           S2;                                                       // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Toggle
struct UGearboxGFxMovie_MovieState_Toggle_Params
{
	struct FName                                       TheState;                                                 // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Enable
struct UGearboxGFxMovie_MovieState_Enable_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	unsigned long                                      bEnable : 1;                                                  // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_IsEnabled
struct UGearboxGFxMovie_MovieState_IsEnabled_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SupportsState
struct UGearboxGFxMovie_MovieState_SupportsState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Init
struct UGearboxGFxMovie_MovieState_Init_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.InitFromDefinition
struct UGearboxGFxMovie_InitFromDefinition_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Apply
struct UGearboxGFxMovie_MovieState_Apply_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
	class UClass*                                      HandlerClass;                                             // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_ApplyState
struct UGearboxGFxMovie_MovieState_ApplyState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.ApplyState
struct UGearboxGFxMovie_ApplyState_Params
{
	struct FString                                     StateName;                                                // (Parm, NeedCtorLink)
	struct FString                                     StateAction;                                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.SetRenderingEnabled
struct UGearboxGFxMovie_SetRenderingEnabled_Params
{
	unsigned long                                      bEnabled : 1;                                                 // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndStop
struct UGearboxGFxMovie_GotoAndStop_Params
{
	struct FString                                     FrameLabel;                                               // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndPlay
struct UGearboxGFxMovie_GotoAndPlay_Params
{
	struct FString                                     FrameLabel;                                               // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.PlaySpecialUISound
struct UGearboxGFxMovie_PlaySpecialUISound_Params
{
	struct FString                                     SoundString;                                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.PlayUISound
struct UGearboxGFxMovie_PlayUISound_Params
{
	struct FName                                       UIEvent;                                                  // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.SetOtherObject
struct UGearboxGFxMovie_SetOtherObject_Params
{
	class UObject*                                     Obj;                                                      // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.GetInstanceContextObject
struct UGearboxGFxMovie_GetInstanceContextObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnTick
struct UGearboxGFxMovie_OnTick_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.OnClose
struct UGearboxGFxMovie_OnClose_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.Start
struct UGearboxGFxMovie_Start_Params
{
	unsigned long                                      StartPaused : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.ColorizeTooltipText
struct UGearboxGFxMovie_ColorizeTooltipText_Params
{
	struct FString                                     S;                                                        // (Const, Parm, NeedCtorLink)
	unsigned long                                      bDisabled : 1;                                                // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GFxColoredText
struct UGearboxGFxMovie_GFxColoredText_Params
{
	struct FColor                                      C;                                                        // (Const, Parm, OutParm)
	struct FString                                     S;                                                        // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      bAppendNewline : 1;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeB
struct UGearboxGFxMovie_SingleArgInvokeB_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	unsigned long                                      Arg : 1;                                                      // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeS
struct UGearboxGFxMovie_SingleArgInvokeS_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeF
struct UGearboxGFxMovie_SingleArgInvokeF_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	float                                              Arg;                                                      // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.GetLocalPlayer
struct UGearboxGFxMovie_GetLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnClosed
struct UGearboxGFxMovie_OnClosed_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
};

// Function GearboxFramework.GearboxGFxMovie.WantsControllerInput
struct UGearboxGFxMovie_WantsControllerInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.SetExternalTexture
struct UGearboxGFxMovie_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                 // (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnInputAxis
struct UGearboxGFxMovie_OnInputAxis_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ukey;                                                     // (Parm)
	float                                              Delta;                                                    // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovie_StateParent.MovieState_OnChanged
struct UGFxMovie_StateParent_MovieState_OnChanged_Params
{
	unsigned long                                      bStateWasChanged : 1;                                         // (Parm)
};

// Function GearboxFramework.GFxMovie_StateParent.Start
struct UGFxMovie_StateParent_Start_Params
{
	unsigned long                                      StartPaused : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetBehaviorKernel
struct UGearboxGlobals_GetBehaviorKernel_Params
{
	class UBehaviorKernel*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetDialogManager
struct UGearboxGlobals_GetDialogManager_Params
{
	class UGearboxDialogManager*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetPopulationRespawnDelay
struct UGearboxGlobals_GetPopulationRespawnDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.ShowDialog
struct UGearboxGlobals_ShowDialog_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.NotifyActorDied
struct UGearboxGlobals_NotifyActorDied_Params
{
	class AActor*                                      TheActor;                                                 // (Parm)
	unsigned long                                      bKeepBody : 1;                                                // (Parm)
};

// Function GearboxFramework.GearboxGlobals.DoesLOSIntersectSpecialOccluder
struct UGearboxGlobals_DoesLOSIntersectSpecialOccluder_Params
{
	struct FVector                                     FromLoc;                                                  // (Parm)
	struct FVector                                     ToLoc;                                                    // (Parm)
	class UPawnAllegiance*                             AllegianceAffected;                                       // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.HasPhysXCapableGPU
struct UGearboxGlobals_HasPhysXCapableGPU_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetPlatform
struct UGearboxGlobals_GetPlatform_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.ValidatePlayerName
struct UGearboxGlobals_ValidatePlayerName_Params
{
	struct FString                                     InName;                                                   // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      bReplaceCharacters : 1;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.RegisterStateKey
struct UGearboxGlobals_RegisterStateKey_Params
{
	struct FName                                       LevelName;                                                // (Parm)
	struct FName                                       ObjectName;                                               // (Parm)
	struct FName                                       AdditionalKey;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.DoesStateKeyExist
struct UGearboxGlobals_DoesStateKeyExist_Params
{
	struct FName                                       LevelName;                                                // (Parm)
	struct FName                                       ObjectName;                                               // (Parm)
	struct FName                                       AdditionalKey;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.FreeTexture2D
struct UGearboxGlobals_FreeTexture2D_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetTexture2D
struct UGearboxGlobals_GetTexture2D_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetRenderTextureManager
struct UGearboxGlobals_GetRenderTextureManager_Params
{
	class UGearboxRenderTextureManager*                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGFxManager
struct UGearboxGlobals_GetGFxManager_Params
{
	class UGFxMovieManager*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetScreenSpaceManager
struct UGearboxGlobals_GetScreenSpaceManager_Params
{
	class UScreenSpaceManager*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetMessageManager
struct UGearboxGlobals_GetMessageManager_Params
{
	class UGbxMessageManager*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.RegDynamicTextureStreaming
struct UGearboxGlobals_RegDynamicTextureStreaming_Params
{
	class AActor*                                      A;                                                        // (Parm)
	unsigned long                                      bRegister : 1;                                                // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxGlobals.GetDynamicTextureActorList
struct UGearboxGlobals_GetDynamicTextureActorList_Params
{
	class UGBXActorList*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetPopulationMaster
struct UGearboxGlobals_GetPopulationMaster_Params
{
	class UPopulationMaster*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetWireManager
struct UGearboxGlobals_GetWireManager_Params
{
	class AWireManager*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGBXObjectList
struct UGearboxGlobals_GetGBXObjectList_Params
{
	class UGBXObjectList*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGBXActorList
struct UGearboxGlobals_GetGBXActorList_Params
{
	class UGBXActorList*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetRuleEngineLoadBalanceManager
struct UGearboxGlobals_GetRuleEngineLoadBalanceManager_Params
{
	class URuleEngineLoadBalanceManager*               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGearboxAIFactory
struct UGearboxGlobals_GetGearboxAIFactory_Params
{
	class UGearboxAIFactory*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetExposureUtility
struct UGearboxGlobals_GetExposureUtility_Params
{
	class UExposureUtilityBase*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGearboxGlobals
struct UGearboxGlobals_GetGearboxGlobals_Params
{
	class UGearboxGlobals*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxLocationRequest.GetLastDirection
struct UGearboxLocationRequest_GetLastDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxLocationRequest.GetLastOrigin
struct UGearboxLocationRequest_GetLastOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxLocationRequest.GetDirection
struct UGearboxLocationRequest_GetDirection_Params
{
	class AActor*                                      ContextActor;                                             // (Parm)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxLocationRequest.GetOrigin
struct UGearboxLocationRequest_GetOrigin_Params
{
	class AActor*                                      ContextActor;                                             // (Parm)
	struct FVector                                     OutOrigin;                                                // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxLocationRequest.Get
struct UGearboxLocationRequest_Get_Params
{
	class AActor*                                      ContextActor;                                             // (Parm)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PawnMoveLocationRequest.Get
struct UPawnMoveLocationRequest_Get_Params
{
	class AActor*                                      ContextActor;                                             // (Parm)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetAimDirection
struct AGearboxPawn_GetAimDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetDialogNameTag
struct AGearboxPawn_SetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       NewName;                                                  // (Parm)
};

// Function GearboxFramework.GearboxPawn.ServerDialog_TriggerEvent
struct AGearboxPawn_ServerDialog_TriggerEvent_Params
{
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
	class AActor*                                      Other;                                                    // (OptionalParm, Parm)
	class UObject*                                     ObjectParameter;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPawn.GetReplicatedDialogData
struct AGearboxPawn_GetReplicatedDialogData_Params
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetReplicatedDialogData
struct AGearboxPawn_SetReplicatedDialogData_Params
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                                  // (Parm)
	struct FGearboxDialogData                          Data;                                                     // (Parm, OutParm)
};

// Function GearboxFramework.GearboxPawn.GetDialogGroups
struct AGearboxPawn_GetDialogGroups_Params
{
	TArray<class UGearboxDialogGroup*>                 Groups;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPawn.GetDialogComponent
struct AGearboxPawn_GetDialogComponent_Params
{
	class UGearboxDialogComponent*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxPawn.GetDialogNameTag
struct AGearboxPawn_GetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.CanTalk
struct AGearboxPawn_CanTalk_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.OnCoverStateChanged
struct AGearboxPawn_OnCoverStateChanged_Params
{
};

// Function GearboxFramework.GearboxPawn.ServerSetCoverState
struct AGearboxPawn_ServerSetCoverState_Params
{
	struct FGearboxCoverState                          NewCoverState;                                            // (Parm)
};

// Function GearboxFramework.GearboxPawn.SetCoverState
struct AGearboxPawn_SetCoverState_Params
{
	struct FGearboxCoverState                          NewCoverState;                                            // (Parm)
};

// Function GearboxFramework.GearboxPawn.GetMountAnimDistanceForSpeed
struct AGearboxPawn_GetMountAnimDistanceForSpeed_Params
{
	unsigned char                                      TheSpeed;                                                 // (Parm)
	unsigned char                                      CoverHeight;                                              // (Parm)
	unsigned char                                      CoverDir;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetSpotOthersShouldLookAt
struct AGearboxPawn_GetSpotOthersShouldLookAt_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetReplicatedSMData
struct AGearboxPawn_SetReplicatedSMData_Params
{
	struct FSpecialMoveData                            NewSMData;                                                // (Parm, OutParm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_StopAny
struct AGearboxPawn_ServerSpecialMove_StopAny_Params
{
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Stop
struct AGearboxPawn_ServerSpecialMove_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                                   // (Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Queue
struct AGearboxPawn_ServerSpecialMove_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Play
struct AGearboxPawn_ServerSpecialMove_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionRotationMode
struct AGearboxPawn_GetDefaultRootMotionRotationMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionMode
struct AGearboxPawn_GetDefaultRootMotionMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetSkelMesh
struct AGearboxPawn_GetSkelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxPawn.GetSMComponent
struct AGearboxPawn_GetSMComponent_Params
{
	class USpecialMoveComponent*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxPawn.GetActor
struct AGearboxPawn_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetNavigationHandle
struct AGearboxPawn_GetNavigationHandle_Params
{
	class UGearboxNavigationHandle*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.PlayHit
struct AGearboxPawn_PlayHit_Params
{
	class APawn*                                       SomePawn;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
	class UDamagePipeline*                             Pipeline;                                                 // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPawn.ReplicatedEvent
struct AGearboxPawn_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function GearboxFramework.GearboxPawn.Died
struct AGearboxPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UDamagePipeline*                             Pipeline;                                                 // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetMovementPhysics
struct AGearboxPawn_SetMovementPhysics_Params
{
};

// Function GearboxFramework.GearboxPawn.PostBeginPlay
struct AGearboxPawn_PostBeginPlay_Params
{
};

// Function GearboxFramework.GearboxPawn.NotifyShotAtBy
struct AGearboxPawn_NotifyShotAtBy_Params
{
	class AGearboxPawn*                                ShootingPawn;                                             // (Parm)
};

// Function GearboxFramework.GearboxPawn.HaveIBeenShotAtRecently
struct AGearboxPawn_HaveIBeenShotAtRecently_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkTypes.UTF8toString
struct USparkTypes_UTF8toString_Params
{
	TArray<unsigned char>                              inputBytes;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkTypes.OnEntitlementsUpdated
struct USparkTypes_OnEntitlementsUpdated_Params
{
	class UGearboxAccountData*                         GbxAccount;                                               // (Parm)
};

// Function GearboxFramework.SparkTypes.OnSparkEmergencyMessageUpdated
struct USparkTypes_OnSparkEmergencyMessageUpdated_Params
{
};

// Function GearboxFramework.SparkTypes.OnSparkInitialized
struct USparkTypes_OnSparkInitialized_Params
{
	unsigned char                                      InitializedResult;                                        // (Parm)
};

// Function GearboxFramework.SparkTypes.OnSparkConfigReceived
struct USparkTypes_OnSparkConfigReceived_Params
{
	TArray<unsigned char>                              ConfigArray;                                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkTypes.OnSparkRequestComplete
struct USparkTypes_OnSparkRequestComplete_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.RemoveScriptCallback
struct USparkInterface_RemoveScriptCallback_Params
{
	int                                                HttpRequestId;                                            // (Parm)
};

// Function GearboxFramework.SparkInterface.GetNewsService
struct USparkInterface_GetNewsService_Params
{
	class USparkNews*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetTitleStorageServiceConfiguration
struct USparkInterface_GetTitleStorageServiceConfiguration_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetTitleStorageUrl
struct USparkInterface_GetTitleStorageUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.ClearGearboxAccountData
struct USparkInterface_ClearGearboxAccountData_Params
{
	unsigned long                                      IncludePrimaryPlayer : 1;                                     // (Parm)
};

// Function GearboxFramework.SparkInterface.SignOutGearboxAccount
struct USparkInterface_SignOutGearboxAccount_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
};

// Function GearboxFramework.SparkInterface.SignInGearboxAccount
struct USparkInterface_SignInGearboxAccount_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
};

// Function GearboxFramework.SparkInterface.GetGearboxAccountData
struct USparkInterface_GetGearboxAccountData_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	class UGearboxAccountData*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountAuthenticated
struct USparkInterface_IsGearboxAccountAuthenticated_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountSignedIn
struct USparkInterface_IsGearboxAccountSignedIn_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.ConvertUtcTimeToLocalTime
struct USparkInterface_ConvertUtcTimeToLocalTime_Params
{
	struct FString                                     UtcTime;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.ShouldUpdateEmergencyMessage
struct USparkInterface_ShouldUpdateEmergencyMessage_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetEmergencyMessage
struct USparkInterface_GetEmergencyMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.SetEmergencyMessage
struct USparkInterface_SetEmergencyMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromSplitscreenIndex
struct USparkInterface_GetPlatformLoginNameFromSplitscreenIndex_Params
{
	int                                                SplitscreenIndex;                                         // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromController
struct USparkInterface_GetPlatformLoginNameFromController_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.IncreaseInteractionTries
struct USparkInterface_IncreaseInteractionTries_Params
{
};

// Function GearboxFramework.SparkInterface.GetInteractionTries
struct USparkInterface_GetInteractionTries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionGraceTries
struct USparkInterface_GetInteractionGraceTries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionPunishmentMinWaitSeconds
struct USparkInterface_GetInteractionPunishmentMinWaitSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionMinWaitSeconds
struct USparkInterface_GetInteractionMinWaitSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsTmsComplete
struct USparkInterface_IsTmsComplete_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.SetTmsComplete
struct USparkInterface_SetTmsComplete_Params
{
};

// Function GearboxFramework.SparkInterface.GetSparkInitialization
struct USparkInterface_GetSparkInitialization_Params
{
	class USparkInitializationProcess*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.RestartSparkInitialization
struct USparkInterface_RestartSparkInitialization_Params
{
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
};

// Function GearboxFramework.SparkInterface.RestartSparkInitializationFromScript
struct USparkInterface_RestartSparkInitializationFromScript_Params
{
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                            // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.StartSparkInitialization
struct USparkInterface_StartSparkInitialization_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                            // (Parm, NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.StartSecondaryInitialization
struct USparkInterface_StartSecondaryInitialization_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetGameName
struct USparkInterface_GetGameName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetHardwareName
struct USparkInterface_GetHardwareName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetPlatformName
struct USparkInterface_GetPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetPlatformTicket
struct USparkInterface_GetPlatformTicket_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.ClearSparkConfigReceivedDelegate
struct USparkInterface_ClearSparkConfigReceivedDelegate_Params
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.AddSparkConfigReceivedDelegate
struct USparkInterface_AddSparkConfigReceivedDelegate_Params
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.ResetInitializationStatus
struct USparkInterface_ResetInitializationStatus_Params
{
};

// Function GearboxFramework.SparkInterface.IsSparkEnabled
struct USparkInterface_IsSparkEnabled_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.IssueSparkStringRequest
struct USparkInterface_IssueSparkStringRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                                    // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     RequestData;                                              // (Const, Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterface.IssueSparkRequest
struct USparkInterface_IssueSparkRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                                    // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	TArray<unsigned char>                              RequestData;                                              // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.HasSignedAllEulas
struct UGearboxAccountData_HasSignedAllEulas_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.CountEntitlement
struct UGearboxAccountData_CountEntitlement_Params
{
	struct FName                                       EntitlementName;                                          // (Parm)
	unsigned long                                      bIgnoreLocallyConsumed : 1;                                   // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.GetTotalGoldenKeyCount
struct UGearboxAccountData_GetTotalGoldenKeyCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.GetGoldenKeyCount
struct UGearboxAccountData_GetGoldenKeyCount_Params
{
	unsigned long                                      bIgnoreLocallyConsumed : 1;                                   // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.HasGoldenKey
struct UGearboxAccountData_HasGoldenKey_Params
{
	unsigned long                                      bIgnoreLocallyConsumed : 1;                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.HasDeveloperSkin
struct UGearboxAccountData_HasDeveloperSkin_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.IsDeveloper
struct UGearboxAccountData_IsDeveloper_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.MarkOffersNotified
struct UGearboxAccountData_MarkOffersNotified_Params
{
};

// Function GearboxFramework.GearboxAccountData.GetUnnotifiedOffers
struct UGearboxAccountData_GetUnnotifiedOffers_Params
{
	TArray<class UGearboxAccountOffer*>                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithName
struct UGearboxAccountData_GetEntitlementWithName_Params
{
	struct FName                                       EntitlementName;                                          // (Parm)
	class UGearboxAccountEntitlement*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithId
struct UGearboxAccountData_GetEntitlementWithId_Params
{
	int                                                Id;                                                       // (Parm)
	class UGearboxAccountEntitlement*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.HasEntitlement
struct UGearboxAccountData_HasEntitlement_Params
{
	struct FName                                       EntitlementName;                                          // (Parm)
	unsigned long                                      bIgnoreLocallyConsumed : 1;                                   // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.RemoveEntitlement
struct UGearboxAccountData_RemoveEntitlement_Params
{
	class UGearboxAccountEntitlement*                  Entitlement;                                              // (Parm)
};

// Function GearboxFramework.GearboxAccountData.ReplaceEntitlements
struct UGearboxAccountData_ReplaceEntitlements_Params
{
	TArray<struct FEntitlementResult>                  NewEntitlements;                                          // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FOfferResult>                        NewOffers;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.ReplaceServices
struct UGearboxAccountData_ReplaceServices_Params
{
	TArray<struct FServiceResult>                      NewServices;                                              // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleReloadEntitlementsResponse
struct UGearboxAccountData_HandleReloadEntitlementsResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.ReloadEntitlements
struct UGearboxAccountData_ReloadEntitlements_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.ResetEntitlementUpdateTimer
struct UGearboxAccountData_ResetEntitlementUpdateTimer_Params
{
};

// Function GearboxFramework.GearboxAccountData.CanReloadEntitlements
struct UGearboxAccountData_CanReloadEntitlements_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.TriggerEntitlementsUpdatedDelegates
struct UGearboxAccountData_TriggerEntitlementsUpdatedDelegates_Params
{
};

// Function GearboxFramework.GearboxAccountData.ClearEntitlementsUpdatedDelegate
struct UGearboxAccountData_ClearEntitlementsUpdatedDelegate_Params
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.AddEntitlementsUpdatedDelegate
struct UGearboxAccountData_AddEntitlementsUpdatedDelegate_Params
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.GetService
struct UGearboxAccountData_GetService_Params
{
	struct FName                                       ServiceName;                                              // (Parm)
	class USparkServiceConfiguration*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.Clear
struct UGearboxAccountData_Clear_Params
{
};

// Function GearboxFramework.GearboxAccountData.ExtractArchwayResultJson
struct UGearboxAccountData_ExtractArchwayResultJson_Params
{
	TArray<unsigned char>                              Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FArchwayResult                              ArchwayData;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.ExtractArchwayResult
struct UGearboxAccountData_ExtractArchwayResult_Params
{
	TArray<unsigned char>                              Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FArchwayResult                              ArchwayData;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountActions.HandleEULAInteractionCompleteResponse
struct UGearboxAccountActions_HandleEULAInteractionCompleteResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleEULAInteractionComplete
struct UGearboxAccountActions_HandleEULAInteractionComplete_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	TArray<struct FEULAData>                           EULAState;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleEULAChainResponse
struct UGearboxAccountActions_HandleEULAChainResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.ReadEULAChain
struct UGearboxAccountActions_ReadEULAChain_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      bAllowRetries : 1;                                            // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountActions.HandleOffersNotifiedResponse
struct UGearboxAccountActions_HandleOffersNotifiedResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleBulkEntitlementsConsumedResponse
struct UGearboxAccountActions_HandleBulkEntitlementsConsumedResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleEntitlementConsumedResponse
struct UGearboxAccountActions_HandleEntitlementConsumedResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleCodeRedeemedResponse
struct UGearboxAccountActions_HandleCodeRedeemedResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleResetPasswordResponse
struct UGearboxAccountActions_HandleResetPasswordResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleSignUpResponse
struct UGearboxAccountActions_HandleSignUpResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.HandleSignInResponse
struct UGearboxAccountActions_HandleSignInResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.ExtractArchwayResult
struct UGearboxAccountActions_ExtractArchwayResult_Params
{
	TArray<unsigned char>                              Data;                                                     // (Parm, NeedCtorLink)
	struct FArchwayResult                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.MarkOffersNotified
struct UGearboxAccountActions_MarkOffersNotified_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
};

// Function GearboxFramework.GearboxAccountActions.LocallyConsumeEntitlementWithCount
struct UGearboxAccountActions_LocallyConsumeEntitlementWithCount_Params
{
	struct FName                                       EntitlementName;                                          // (Parm)
	int                                                NumToConsume;                                             // (Parm)
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementsWithCounts
struct UGearboxAccountActions_ConsumeEntitlementsWithCounts_Params
{
	TArray<class UGearboxAccountEntitlement*>          EntitlementsToConsume;                                    // (Parm, NeedCtorLink)
	TArray<int>                                        Counts;                                                   // (Parm, NeedCtorLink)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             EntitlementConsumedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementWithCount
struct UGearboxAccountActions_ConsumeEntitlementWithCount_Params
{
	struct FName                                       EntitlementName;                                          // (Parm)
	int                                                Count;                                                    // (Parm)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             EntitlementConsumedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.RedeemCode
struct UGearboxAccountActions_RedeemCode_Params
{
	struct FString                                     Code;                                                     // (Parm, NeedCtorLink)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             CodeRedeemedDelegate;                                     // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.ResetPasswordGearboxAccount
struct UGearboxAccountActions_ResetPasswordGearboxAccount_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             ResetPasswordDelegate;                                    // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.EscapeJson
struct UGearboxAccountActions_EscapeJson_Params
{
	struct FString                                     Input;                                                    // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.SignUpGearboxAccount
struct UGearboxAccountActions_SignUpGearboxAccount_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	struct FString                                     PasswordConfirm;                                          // (Parm, NeedCtorLink)
	struct FString                                     AgeString;                                                // (Parm, NeedCtorLink)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SignUpDelegate;                                           // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.SignInGearboxAccount
struct UGearboxAccountActions_SignInGearboxAccount_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SignInDelegate;                                           // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.OnEntitlementConsumed
struct UGearboxAccountActions_OnEntitlementConsumed_Params
{
	unsigned char                                      ConsumeResult;                                            // (Parm)
};

// Function GearboxFramework.GearboxAccountActions.OnCodeRedeemed
struct UGearboxAccountActions_OnCodeRedeemed_Params
{
	unsigned char                                      RedeemResult;                                             // (Parm)
	struct FString                                     CustomTitle;                                              // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     CustomBody;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountActions.OnResetPasswordGearboxAccount
struct UGearboxAccountActions_OnResetPasswordGearboxAccount_Params
{
	unsigned char                                      ResetResult;                                              // (Parm)
};

// Function GearboxFramework.GearboxAccountActions.OnSignUpGearboxAccount
struct UGearboxAccountActions_OnSignUpGearboxAccount_Params
{
	unsigned char                                      SignUpResult;                                             // (Parm)
};

// Function GearboxFramework.GearboxAccountActions.OnSignInGearboxAccount
struct UGearboxAccountActions_OnSignInGearboxAccount_Params
{
	unsigned char                                      SignInResult;                                             // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.CanPlayOnline
struct AGearboxPlayerController_CanPlayOnline_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.DisplayShiftCommunicationFailedDialog
struct AGearboxPlayerController_DisplayShiftCommunicationFailedDialog_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ShowEULAScreen
struct AGearboxPlayerController_ShowEULAScreen_Params
{
	TArray<struct FEULAData>                           EulaChain;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.RequestTitleStorageFile
struct AGearboxPlayerController_RequestTitleStorageFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             TitleStorageRequestCompleteDelegate;                      // (Parm, NeedCtorLink)
	unsigned char                                      AcceptsType;                                              // (Parm)
	struct FString                                     CustomAcceptsType;                                        // (OptionalParm, Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.ShowSparkID
struct AGearboxPlayerController_ShowSparkID_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ShouldCheckRemoteControlCheckbox
struct AGearboxPlayerController_ShouldCheckRemoteControlCheckbox_Params
{
	unsigned char                                      CheckBoxName;                                             // (Parm)
	class AHUD*                                        HUD;                                                      // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.DisplayDebugSpark
struct AGearboxPlayerController_DisplayDebugSpark_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function GearboxFramework.GearboxPlayerController.AITree
struct AGearboxPlayerController_AITree_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleTargetViewCones
struct AGearboxPlayerController_AIToggleTargetViewCones_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleAwarenessZones
struct AGearboxPlayerController_AIToggleAwarenessZones_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleCombat
struct AGearboxPlayerController_AIToggleCombat_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleResources
struct AGearboxPlayerController_AIToggleResources_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleInactiveRules
struct AGearboxPlayerController_AIToggleInactiveRules_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleRules
struct AGearboxPlayerController_AIToggleRules_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleFlags
struct AGearboxPlayerController_AIToggleFlags_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugNextSnapshot
struct AGearboxPlayerController_AIDebugNextSnapshot_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugPrevSnapshot
struct AGearboxPlayerController_AIDebugPrevSnapshot_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ainext
struct AGearboxPlayerController_ainext_Params
{
};

// Function GearboxFramework.GearboxPlayerController.aiprev
struct AGearboxPlayerController_aiprev_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AINextRule
struct AGearboxPlayerController_AINextRule_Params
{
	unsigned long                                      bSkipContainers : 1;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPlayerController.AIPrevRule
struct AGearboxPlayerController_AIPrevRule_Params
{
	unsigned long                                      bSkipContainers : 1;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawn
struct AGearboxPlayerController_AIDebugSetPawn_Params
{
	class AGearboxPawn*                                NewPawn;                                                  // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawnByName
struct AGearboxPlayerController_AIDebugSetPawnByName_Params
{
	struct FName                                       NewPawnName;                                              // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.debugpawn
struct AGearboxPlayerController_debugpawn_Params
{
};

// Function GearboxFramework.GearboxPlayerController.aisetp
struct AGearboxPlayerController_aisetp_Params
{
	struct FName                                       NewPawnName;                                              // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.NotifyGameUnPaused
struct AGearboxPlayerController_NotifyGameUnPaused_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NotifyGamePaused
struct AGearboxPlayerController_NotifyGamePaused_Params
{
};

// Function GearboxFramework.GearboxPlayerController.SetSettingsFromProfile
struct AGearboxPlayerController_SetSettingsFromProfile_Params
{
};

// Function GearboxFramework.GearboxPlayerController.GetStorageDeviceID
struct AGearboxPlayerController_GetStorageDeviceID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.SetStorageDeviceID
struct AGearboxPlayerController_SetStorageDeviceID_Params
{
	int                                                DeviceID;                                                 // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.NotifyDeviceSelectComplete
struct AGearboxPlayerController_NotifyDeviceSelectComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.DisplayStorageRemovedMenu
struct AGearboxPlayerController_DisplayStorageRemovedMenu_Params
{
};

// Function GearboxFramework.GearboxPlayerController.DisplayProfileRemovedMenu
struct AGearboxPlayerController_DisplayProfileRemovedMenu_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NotifyProfileWriteFromStorageChangeComplete
struct AGearboxPlayerController_NotifyProfileWriteFromStorageChangeComplete_Params
{
	unsigned char                                      LocalUser;                                                // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.IsCurrentStorageDeviceValid
struct AGearboxPlayerController_IsCurrentStorageDeviceValid_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.NotifyStorageDeviceChange
struct AGearboxPlayerController_NotifyStorageDeviceChange_Params
{
};

// Function GearboxFramework.GearboxPlayerController.DestroyOnlineGame
struct AGearboxPlayerController_DestroyOnlineGame_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ReturnToTitleScreen
struct AGearboxPlayerController_ReturnToTitleScreen_Params
{
	unsigned long                                      bSkipSave : 1;                                                // (OptionalParm, Parm)
	unsigned long                                      bRemoveSplitPlayer : 1;                                       // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPlayerController.GetConnectionFailureNoticeMsg
struct AGearboxPlayerController_GetConnectionFailureNoticeMsg_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.GetMainMenuMapName
struct AGearboxPlayerController_GetMainMenuMapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.NotifyLinkStatusChange
struct AGearboxPlayerController_NotifyLinkStatusChange_Params
{
	unsigned long                                      bIsConnected : 1;                                             // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.NotifyLoginStatusChange
struct AGearboxPlayerController_NotifyLoginStatusChange_Params
{
	unsigned char                                      NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.NotifyLoginChange
struct AGearboxPlayerController_NotifyLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.OnReadProfileSettingsComplete
struct AGearboxPlayerController_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.OnReceivedNewProfile
struct AGearboxPlayerController_OnReceivedNewProfile_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ClearOnlineDelegates
struct AGearboxPlayerController_ClearOnlineDelegates_Params
{
};

// Function GearboxFramework.GearboxPlayerController.RegisterOnlineDelegates
struct AGearboxPlayerController_RegisterOnlineDelegates_Params
{
};

// Function GearboxFramework.GearboxPlayerController.OnProfileWriteComplete
struct AGearboxPlayerController_OnProfileWriteComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.HidePS3WritingProfileDialog
struct AGearboxPlayerController_HidePS3WritingProfileDialog_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ShowPS3WritingProfileDialog
struct AGearboxPlayerController_ShowPS3WritingProfileDialog_Params
{
};

// Function GearboxFramework.GearboxPlayerController.WriteProfile
struct AGearboxPlayerController_WriteProfile_Params
{
	unsigned long                                      bShouldShowProfileDialog : 1;                                 // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.GetProfileSettings
struct AGearboxPlayerController_GetProfileSettings_Params
{
	class UGearboxProfileSettings*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.GetMyControllerId
struct AGearboxPlayerController_GetMyControllerId_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.ReadProfile
struct AGearboxPlayerController_ReadProfile_Params
{
};

// Function GearboxFramework.GearboxPlayerController.UnregisterPlayerDataStores
struct AGearboxPlayerController_UnregisterPlayerDataStores_Params
{
};

// Function GearboxFramework.GearboxPlayerController.RegisterCustomPlayerDataStores
struct AGearboxPlayerController_RegisterCustomPlayerDataStores_Params
{
};

// Function GearboxFramework.GearboxPlayerController.SetDataStoreStringValue
struct AGearboxPlayerController_SetDataStoreStringValue_Params
{
	struct FString                                     MarkupString;                                             // (Parm, NeedCtorLink)
	struct FString                                     NewValue;                                                 // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.GetDataStoreStringValue
struct AGearboxPlayerController_GetDataStoreStringValue_Params
{
	struct FString                                     MarkupString;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.ClientKeepPlayingLoadingMovie
struct AGearboxPlayerController_ClientKeepPlayingLoadingMovie_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ClientResetCamera
struct AGearboxPlayerController_ClientResetCamera_Params
{
};

// Function GearboxFramework.GearboxPlayerController.SpawnPlayerCamera
struct AGearboxPlayerController_SpawnPlayerCamera_Params
{
};

// Function GearboxFramework.GearboxPlayerController.InitInputSystem
struct AGearboxPlayerController_InitInputSystem_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NoTargetAll
struct AGearboxPlayerController_NoTargetAll_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NoTarget
struct AGearboxPlayerController_NoTarget_Params
{
};

// Function GearboxFramework.GearboxPlayerController.GetNoTargetPlayers
struct AGearboxPlayerController_GetNoTargetPlayers_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.SetNoTargetPlayers
struct AGearboxPlayerController_SetNoTargetPlayers_Params
{
	unsigned long                                      bNoTarget : 1;                                                // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.Possess
struct AGearboxPlayerController_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	unsigned long                                      bVehicleTransition : 1;                                       // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.DontTarget
struct AGearboxPlayerController_DontTarget_Params
{
	unsigned long                                      bModeFlag : 1;                                                // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.ClientConsoleCommand
struct AGearboxPlayerController_ClientConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.IsPlayerAllowingActiveMoment
struct AGearboxPlayerController_IsPlayerAllowingActiveMoment_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.IsActiveMomentRunning
struct AGearboxPlayerController_IsActiveMomentRunning_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.ViewShake
struct AGearboxPlayerController_ViewShake_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.UpdateShakeRotComponent
struct AGearboxPlayerController_UpdateShakeRotComponent_Params
{
	float                                              Max;                                                      // (Parm, OutParm)
	int                                                Current;                                                  // (Parm, OutParm)
	float                                              Rate;                                                     // (Parm, OutParm)
	float                                              Time;                                                     // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.CheckShake
struct AGearboxPlayerController_CheckShake_Params
{
	float                                              MaxOffset;                                                // (Parm, OutParm)
	float                                              Offset;                                                   // (Parm, OutParm)
	float                                              Rate;                                                     // (Parm, OutParm)
	float                                              Time;                                                     // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.StopViewShaking
struct AGearboxPlayerController_StopViewShaking_Params
{
};

// Function GearboxFramework.GearboxPlayerController.OnCameraShake
struct AGearboxPlayerController_OnCameraShake_Params
{
	class UGearboxSeqAct_CameraShake*                  ShakeAction;                                              // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.ShakeView
struct AGearboxPlayerController_ShakeView_Params
{
	struct FGearboxViewShakeInfo                       NewViewShake;                                             // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.ClientDamageShake
struct AGearboxPlayerController_ClientDamageShake_Params
{
	int                                                Damage;                                                   // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.ConsoleEcho
struct AGearboxPlayerController_ConsoleEcho_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	unsigned long                                      bLogOutput : 1;                                               // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxPlayerController.Initialize
struct AGearboxPlayerController_Initialize_Params
{
};

// Function GearboxFramework.GearboxPlayerController.PostBeginPlay
struct AGearboxPlayerController_PostBeginPlay_Params
{
};

// Function GearboxFramework.GearboxPlayerController.TryAndSpawnLeviathanChannel
struct AGearboxPlayerController_TryAndSpawnLeviathanChannel_Params
{
	class UNetConnection*                              Connection;                                               // (Parm)
};

// Function GearboxFramework.GearboxPlayerController.GenerateNewSessionGuid
struct AGearboxPlayerController_GenerateNewSessionGuid_Params
{
};

// Function GearboxFramework.GearboxPlayerInput.PlayerInput
struct UGearboxPlayerInput_PlayerInput_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GearboxFramework.GearboxRenderTextureManager.SetThumbnailMesh
struct UGearboxRenderTextureManager_SetThumbnailMesh_Params
{
	class UTexture*                                    Texture;                                                  // (Parm)
	class UMeshComponent*                              Mesh;                                                     // (Parm, EditInline)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeContext
struct UGearboxRenderTextureManager_FreeContext_Params
{
	struct FName                                       Context;                                                  // (Parm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeThumbnail
struct UGearboxRenderTextureManager_FreeThumbnail_Params
{
	class UTexture*                                    Texture;                                                  // (Parm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetThumbnail
struct UGearboxRenderTextureManager_GetThumbnail_Params
{
	struct FName                                       Context;                                                  // (Parm)
	int                                                TextureSizeX;                                             // (Parm)
	int                                                TextureSizeY;                                             // (Parm)
	unsigned char                                      UpdateType;                                               // (Parm)
	int                                                SizeX;                                                    // (OptionalParm, Parm)
	int                                                SizeY;                                                    // (OptionalParm, Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeTexture2D
struct UGearboxRenderTextureManager_FreeTexture2D_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetTexture2D
struct UGearboxRenderTextureManager_GetTexture2D_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeRenderTexture
struct UGearboxRenderTextureManager_FreeRenderTexture_Params
{
	class UTextureRenderTarget2D*                      Texture;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetRenderTexture
struct UGearboxRenderTextureManager_GetRenderTexture_Params
{
	int                                                InSizeX;                                                  // (Parm)
	int                                                InSizeY;                                                  // (Parm)
	unsigned long                                      bNeedsTwoCopies : 1;                                          // (OptionalParm, Parm)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxSkeletalMeshComponent.SetFOV
struct UGearboxSkeletalMeshComponent_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm)
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltAccessoryMeshDataFromParts
struct UGestaltSkeletalMeshDefinition_InitGestaltAccessoryMeshDataFromParts_Params
{
	class USkeletalMesh*                               MeshToBorrowBonesFrom;                                    // (Parm)
	class UGestaltPartMatrices*                        AccessoryMatrices;                                        // (Parm)
	class USkeletalMeshComponent*                      TargetComponent;                                          // (Parm, EditInline)
	TArray<struct FGestaltPartPermutation>             PermutationConfiguration;                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltMeshDataFromParts
struct UGestaltSkeletalMeshDefinition_InitGestaltMeshDataFromParts_Params
{
	class USkeletalMeshComponent*                      TargetComponent;                                          // (Parm, EditInline)
	TArray<struct FName>                               PartMeshNames;                                            // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.DisplayDebug
struct UGFxActorMoviePool_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function GearboxFramework.GFxActorMoviePool.GetPoolName
struct UGFxActorMoviePool_GetPoolName_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.PoolStyleString
struct UGFxActorMoviePool_PoolStyleString_Params
{
	unsigned char                                      Pooling;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.MovieStateChanged
struct UGFxActorMoviePool_MovieStateChanged_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
};

// Function GearboxFramework.GFxMovieDefinition.FindMovieLink
struct UGFxMovieDefinition_FindMovieLink_Params
{
	struct FName                                       MovieName;                                                // (Parm)
	class UGFxMovieDefinition*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.PostMovieStart
struct UGFxMovieDefinition_PostMovieStart_Params
{
	class UGearboxGFxMovie*                            StartedMovie;                                             // (Parm)
};

// Function GearboxFramework.GFxMovieDefinition.SpawnPlayerMovie
struct UGFxMovieDefinition_SpawnPlayerMovie_Params
{
	class AGearboxPlayerController*                    Owner;                                                    // (Parm)
	FScriptInterface                                   TargetActor;                                              // (Parm)
	class UObject*                                     ContextObject;                                            // (OptionalParm, Parm)
	class UGearboxGFxMovie*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.SupportsStatePooling
struct UGFxMovieDefinition_SupportsStatePooling_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.GetPoolStyle
struct UGFxMovieDefinition_GetPoolStyle_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyle.GetStyleDebugString
struct UGFxMovieDrawStyle_GetStyleDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GFxMovieDrawStyleHUD.RequiresClientInstance
struct UGFxMovieDrawStyleHUD_RequiresClientInstance_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.GetStyleDebugString
struct UGFxMovieDrawStyleMesh_GetStyleDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.RequiresClientInstance
struct UGFxMovieDrawStyleMesh_RequiresClientInstance_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyleSplitscreen.RequiresClientInstance
struct UGFxMovieDrawStyleSplitscreen_RequiresClientInstance_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GFxMovieManager.ChangeMovieState
struct UGFxMovieManager_ChangeMovieState_Params
{
	FScriptInterface                                   TargetActor;                                              // (Parm)
	struct FName                                       State;                                                    // (Parm)
	unsigned char                                      Change;                                                   // (Parm)
	class AGearboxPlayerController*                    PC;                                                       // (OptionalParm, Parm)
};

// Function GearboxFramework.GFxMovieManager.Unsubscribe
struct UGFxMovieManager_Unsubscribe_Params
{
	class AGearboxPlayerController*                    PC;                                                       // (Parm)
};

// Function GearboxFramework.GFxMovieManager.Subscribe
struct UGFxMovieManager_Subscribe_Params
{
	class AGearboxPlayerController*                    PC;                                                       // (Parm)
};

// Function GearboxFramework.GFxMovieManager.UnregisterMoviesDrawnTo
struct UGFxMovieManager_UnregisterMoviesDrawnTo_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, EditInline)
	FScriptInterface                                   TargetActor;                                              // (Parm)
};

// Function GearboxFramework.GFxMovieManager.UnregisterTarget
struct UGFxMovieManager_UnregisterTarget_Params
{
	FScriptInterface                                   TargetActor;                                              // (Parm)
};

// Function GearboxFramework.GFxMovieManager.UnregisterMovie
struct UGFxMovieManager_UnregisterMovie_Params
{
	class UGFxMovieDefinition*                         Definition;                                               // (Parm)
	FScriptInterface                                   TargetActor;                                              // (Parm)
};

// Function GearboxFramework.GFxMovieManager.RegisterMovie
struct UGFxMovieManager_RegisterMovie_Params
{
	class UGFxMovieDefinition*                         Definition;                                               // (Parm)
	FScriptInterface                                   TargetActor;                                              // (Parm)
};

// Function GearboxFramework.GFxMovieStatePlayerAware.EnableState
struct UGFxMovieStatePlayerAware_EnableState_Params
{
	struct FName                                       TheState;                                                 // (Parm)
	struct FMovieStateStruct                           MovieState;                                               // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      bEnable : 1;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.InitSequence
struct UIAIInterface_InitSequence_Params
{
	class UActionSequence*                             NewSequence;                                              // (Parm)
};

// Function GearboxFramework.IAIInterface.GetAllegiance
struct UIAIInterface_GetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAIDefinition
struct UIAIInterface_GetAIDefinition_Params
{
	class UAIDefinition*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAIComponent
struct UIAIInterface_GetAIComponent_Params
{
	class UAIComponent*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.IAIInterface.GetAIParent
struct UIAIInterface_GetAIParent_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAILocation
struct UIAIInterface_GetAILocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAIActor
struct UIAIInterface_GetAIActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IAIInterface.CanTickAI
struct UIAIInterface_CanTickAI_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieDestroy
struct UIGFxActorMovie_GFx_NotifyMovieDestroy_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieCreate
struct UIGFxActorMovie_GFx_NotifyMovieCreate_Params
{
	class UGearboxGFxMovie*                            Movie;                                                    // (Parm)
};

// Function GearboxFramework.IGFxActorMovie.GFx_GetMovieActor
struct UIGFxActorMovie_GFx_GetMovieActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.InterfaceGearboxCamera.FinishCameraLookAt
struct UInterfaceGearboxCamera_FinishCameraLookAt_Params
{
};

// Function GearboxFramework.InterfaceGearboxCamera.EnableThirdPersonLookAt
struct UInterfaceGearboxCamera_EnableThirdPersonLookAt_Params
{
	float                                              LookAtXOffset;                                            // (Parm)
	float                                              LookAtYOffset;                                            // (Parm)
	float                                              LookAtZOffset;                                            // (Parm)
	unsigned char                                      LookAtMode;                                               // (Parm)
};

// Function GearboxFramework.InterfaceGearboxCamera.BeginCameraLookAt
struct UInterfaceGearboxCamera_BeginCameraLookAt_Params
{
	class AActor*                                      LookAtTarget;                                             // (Parm)
	struct FName                                       LookAtBone;                                               // (Parm)
	struct FVector                                     TargetLocation;                                           // (Parm)
	float                                              Zoom;                                                     // (Parm)
	struct FVector2D                                   FOV;                                                      // (Parm)
	float                                              Duration;                                                 // (Parm)
	float                                              TransitionTimeIn;                                         // (Parm)
	float                                              TransitionTimeOut;                                        // (Parm)
};

// Function GearboxFramework.IStreamingDataEvent.RunStreamingDataEvent
struct UIStreamingDataEvent_RunStreamingDataEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	class UObject*                                     EventInstigator;                                          // (OptionalParm, Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (OptionalParm, Parm)
	int                                                IntParam;                                                 // (OptionalParm, Parm)
	float                                              FloatParam;                                               // (OptionalParm, Parm)
};

// Function GearboxFramework.PhysicsStateExpressionEvaluator.Evaluate
struct UPhysicsStateExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationAspect.DenStatRemoved
struct UPopulationAspect_DenStatRemoved_Params
{
	class APawn*                                       DenPawn;                                                  // (Parm)
};

// Function GearboxFramework.PopulationAspect.DenStatAdded
struct UPopulationAspect_DenStatAdded_Params
{
	class APawn*                                       DenPawn;                                                  // (Parm)
};

// Function GearboxFramework.PopulationAspect.EnabledStatusChanged
struct UPopulationAspect_EnabledStatusChanged_Params
{
	unsigned long                                      bIsEnabled : 1;                                               // (Parm)
	unsigned long                                      bHasActiveActors : 1;                                         // (Parm)
};

// Function GearboxFramework.PopulationAspect.AllActorsRemoved
struct UPopulationAspect_AllActorsRemoved_Params
{
	unsigned long                                      bFinishedSpawning : 1;                                        // (Parm)
};

// Function GearboxFramework.PopulationAspect.OnActorDeath
struct UPopulationAspect_OnActorDeath_Params
{
	class AActor*                                      DeadActor;                                                // (Parm)
};

// Function GearboxFramework.PopulationAspect.OnSpawnActor
struct UPopulationAspect_OnSpawnActor_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm)
};

// Function GearboxFramework.PopulationAspect.Initialize
struct UPopulationAspect_Initialize_Params
{
};

// Function GearboxFramework.PopulationEncounter.TriggerKismetAllSpawnedEvent
struct APopulationEncounter_TriggerKismetAllSpawnedEvent_Params
{
};

// Function GearboxFramework.PopulationEncounter.TriggerKismetDeathEvent
struct APopulationEncounter_TriggerKismetDeathEvent_Params
{
};

// Function GearboxFramework.PopulationEncounter.OnToggle
struct APopulationEncounter_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function GearboxFramework.PopulationEncounter.UpdateOpportunityEnabledStates
struct APopulationEncounter_UpdateOpportunityEnabledStates_Params
{
	int                                                nWave;                                                    // (Parm)
	unsigned long                                      bUpdateIfOnlyOneWave : 1;                                     // (Parm)
};

// Function GearboxFramework.PopulationEncounter.UpdateKismetNotifications
struct APopulationEncounter_UpdateKismetNotifications_Params
{
};

// Function GearboxFramework.PopUpDebugBarGraph.Display
struct UPopUpDebugBarGraph_Display_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function GearboxFramework.PopUpDebugBarGraph.GetValue
struct UPopUpDebugBarGraph_GetValue_Params
{
	int                                                ColumnNdx;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopUpDebugBarGraph.SetValue
struct UPopUpDebugBarGraph_SetValue_Params
{
	int                                                ColumnNdx;                                                // (Parm)
	float                                              NewValue;                                                 // (Parm)
};

// Function GearboxFramework.PopUpDebugBarGraph.AddNewColumn
struct UPopUpDebugBarGraph_AddNewColumn_Params
{
	struct FColor                                      ColumnColor;                                              // (Parm)
	struct FString                                     HeaderText;                                               // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopUpDebugBarGraph.AddTitleText
struct UPopUpDebugBarGraph_AddTitleText_Params
{
	struct FString                                     NewTitleText;                                             // (Parm, NeedCtorLink)
};

// Function GearboxFramework.RegionDefinition.GetDefaultRegionGameStage
struct URegionDefinition_GetDefaultRegionGameStage_Params
{
	int                                                MinGameStage;                                             // (Parm, OutParm)
	int                                                MaxGameStage;                                             // (Parm, OutParm)
	int                                                AwesomeLevel;                                             // (Parm, OutParm)
	int                                                GameStageIncreaseOverPlayerLevel;                         // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RegionDefinition.TestRegionGameStage
struct URegionDefinition_TestRegionGameStage_Params
{
	int                                                GameStage;                                                // (Parm, OutParm)
	int                                                AwesomeLevel;                                             // (Parm, OutParm)
	unsigned long                                      bDefaultGameStage : 1;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RegionDefinition.GetRegionGameStage
struct URegionDefinition_GetRegionGameStage_Params
{
	int                                                GameStage;                                                // (Parm, OutParm)
	int                                                AwesomeLevel;                                             // (Parm, OutParm)
	unsigned long                                      bDefaultGameStage : 1;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngineLoadBalanceManager.SetAsDebugging
struct URuleEngineLoadBalanceManager_SetAsDebugging_Params
{
	unsigned long                                      bSetDebugging : 1;                                            // (Parm)
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.AllPlayersInVolumes
struct USeqAct_AllPlayersInVolume_AllPlayersInVolumes_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.PlayerIsInAVolume
struct USeqAct_AllPlayersInVolume_PlayerIsInAVolume_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.IsPlayingLocally
struct USpecialMoveDefinition_IsPlayingLocally_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.GetSMDToPlay
struct USpecialMoveDefinition_GetSMDToPlay_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class USpecialMoveDefinition*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.Contains
struct USpecialMoveDefinition_Contains_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.ClientFinished
struct USpecialMoveDefinition_ClientFinished_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.SpecialMoveDefinition.ServerFinished
struct USpecialMoveDefinition_ServerFinished_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.SpecialMoveDefinition.ClientStarted
struct USpecialMoveDefinition_ClientStarted_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.ServerStarted
struct USpecialMoveDefinition_ServerStarted_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
};

// Function GearboxFramework.SpecialMoveDefinition.IsLocalAuthority
struct USpecialMoveDefinition_IsLocalAuthority_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.AuthorityCanPlay
struct USpecialMoveDefinition_AuthorityCanPlay_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsOwnerAlwaysNetRelevant
struct USpecialMoveComponent_IsOwnerAlwaysNetRelevant_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.CanPlayBehaviorData
struct USpecialMoveComponent_CanPlayBehaviorData_Params
{
	struct FSMBehavior                                 Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.RunBehaviors
struct USpecialMoveComponent_RunBehaviors_Params
{
	TArray<struct FSMBehavior>                         SMBehaviors;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SpecialMoveComponent.GetCurrent
struct USpecialMoveComponent_GetCurrent_Params
{
	class USpecialMoveDefinition*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetPlayRateScale
struct USpecialMoveComponent_GetPlayRateScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetDuration
struct USpecialMoveComponent_GetDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetData
struct USpecialMoveComponent_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.LocalAnimFinished
struct USpecialMoveComponent_LocalAnimFinished_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.SpecialMoveComponent.ClearQueue
struct USpecialMoveComponent_ClearQueue_Params
{
};

// Function GearboxFramework.SpecialMoveComponent.StopAnyLocal
struct USpecialMoveComponent_StopAnyLocal_Params
{
	struct FName                                       SMNodeName;                                               // (OptionalParm, Parm)
	unsigned long                                      bInterrupted : 1;                                             // (OptionalParm, Parm)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (OptionalParm, Parm, EditInline)
};

// Function GearboxFramework.SpecialMoveComponent.StopLocal
struct USpecialMoveComponent_StopLocal_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                                   // (Parm)
	unsigned long                                      bInterrupted : 1;                                             // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveComponent.StopAny
struct USpecialMoveComponent_StopAny_Params
{
	unsigned long                                      bClearQueue : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      bInterrupted : 1;                                             // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveComponent.Stop
struct USpecialMoveComponent_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                                   // (Parm)
	unsigned long                                      bClearQueue : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      bInterrupted : 1;                                             // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveComponent.PlayLocal
struct USpecialMoveComponent_PlayLocal_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.Queue
struct USpecialMoveComponent_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.SpecialMoveComponent.Play
struct USpecialMoveComponent_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                                   // (Parm)
	float                                              PlayRateScale;                                            // (OptionalParm, Parm)
	float                                              Duration;                                                 // (OptionalParm, Parm)
	struct FName                                       CallbackName;                                             // (OptionalParm, Parm)
	class UObject*                                     CallbackObject;                                           // (OptionalParm, Parm)
	class UObject*                                     Data;                                                     // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.RemoveFromQueue
struct USpecialMoveComponent_RemoveFromQueue_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
};

// Function GearboxFramework.SpecialMoveComponent.IsQueued
struct USpecialMoveComponent_IsQueued_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingClass
struct USpecialMoveComponent_IsPlayingClass_Params
{
	class UClass*                                      SMClass;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingAny
struct USpecialMoveComponent_IsPlayingAny_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlaying
struct USpecialMoveComponent_IsPlaying_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimDelta
struct USpecialMoveComponent_GetAnimDelta_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                            // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetSMNode
struct USpecialMoveComponent_GetSMNode_Params
{
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.PlayReplicated
struct USpecialMoveComponent_PlayReplicated_Params
{
	struct FReplicatedSpecialMoveData                  NewSMData;                                                // (Parm)
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimLength
struct USpecialMoveComponent_GetAnimLength_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                            // (Parm)
	unsigned long                                      bIncludeNextSMD : 1;                                          // (OptionalParm, Parm)
	class USkeletalMeshComponent*                      SMC;                                                      // (OptionalParm, Parm, EditInline)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveExpressionList.Contains
struct USpecialMoveExpressionList_Contains_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveExpressionList.GetSMDToPlay
struct USpecialMoveExpressionList_GetSMDToPlay_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class USpecialMoveDefinition*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveRandom.Contains
struct USpecialMoveRandom_Contains_Params
{
	class USpecialMoveDefinition*                      SMD;                                                      // (Parm)
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SpecialMoveRandom.GetSMDToPlay
struct USpecialMoveRandom_GetSMDToPlay_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class USpecialMoveDefinition*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.WireTerminal.Destroyed
struct AWireTerminal_Destroyed_Params
{
};

// Function GearboxFramework.WireTerminal.NotifyModifiedTerminal
struct AWireTerminal_NotifyModifiedTerminal_Params
{
};

// Function GearboxFramework.AIComponent.GetAIRangeTime
struct UAIComponent_GetAIRangeTime_Params
{
	struct FAIRange                                    InRange;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.DrawAITree
struct UAIComponent_DrawAITree_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function GearboxFramework.AIComponent.LogDemigodHolds
struct UAIComponent_LogDemigodHolds_Params
{
};

// Function GearboxFramework.AIComponent.ReleaseDialog
struct UAIComponent_ReleaseDialog_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.HoldDialog
struct UAIComponent_HoldDialog_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.DialogOnHold
struct UAIComponent_DialogOnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseGod
struct UAIComponent_ReleaseGod_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.HoldGod
struct UAIComponent_HoldGod_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.GodOnHold
struct UAIComponent_GodOnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseDemigod
struct UAIComponent_ReleaseDemigod_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.HoldDemigod
struct UAIComponent_HoldDemigod_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.DemigodOnHold
struct UAIComponent_DemigodOnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseMovement
struct UAIComponent_ReleaseMovement_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.HoldMovement
struct UAIComponent_HoldMovement_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.MovementOnHold
struct UAIComponent_MovementOnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseTarget
struct UAIComponent_ReleaseTarget_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.HoldTarget
struct UAIComponent_HoldTarget_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.TargetOnHold
struct UAIComponent_TargetOnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.Release
struct UAIComponent_Release_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.Hold
struct UAIComponent_Hold_Params
{
	struct FName                                       HoldName;                                                 // (Parm)
	class UObject*                                     Tag;                                                      // (Parm)
};

// Function GearboxFramework.AIComponent.OnHold
struct UAIComponent_OnHold_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ForceUpdateTargets
struct UAIComponent_ForceUpdateTargets_Params
{
};

// Function GearboxFramework.AIComponent.TargetChanged
struct UAIComponent_TargetChanged_Params
{
	class AActor*                                      OldTarget;                                                // (Parm)
	class AActor*                                      NewTarget;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.SetTarget
struct UAIComponent_SetTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.SetScriptedTarget
struct UAIComponent_SetScriptedTarget_Params
{
	class AActor*                                      NewScriptedTarget;                                        // (Parm)
};

// Function GearboxFramework.AIComponent.GetTargetRecordFor
struct UAIComponent_GetTargetRecordFor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	unsigned long                                      bTryParent : 1;                                               // (OptionalParm, Parm)
	class UMindTargetInfo*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.GetTargetRecord
struct UAIComponent_GetTargetRecord_Params
{
	unsigned long                                      bTryParent : 1;                                               // (OptionalParm, Parm)
	class UMindTargetInfo*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.IsTarget
struct UAIComponent_IsTarget_Params
{
	class AActor*                                      TestTarget;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.GetTarget
struct UAIComponent_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.HasTarget
struct UAIComponent_HasTarget_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ShouldRemoveTarget
struct UAIComponent_ShouldRemoveTarget_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.TargetRemoved
struct UAIComponent_TargetRemoved_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.ForceRemoveTarget
struct UAIComponent_ForceRemoveTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function GearboxFramework.AIComponent.ValidCurrentTarget
struct UAIComponent_ValidCurrentTarget_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ValidTarget
struct UAIComponent_ValidTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.PrioritizeTarget
struct UAIComponent_PrioritizeTarget_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.CalcTargetInfo
struct UAIComponent_CalcTargetInfo_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.ChooseBestTarget
struct UAIComponent_ChooseBestTarget_Params
{
};

// Function GearboxFramework.AIComponent.InheritTargets
struct UAIComponent_InheritTargets_Params
{
	class UAIComponent*                                Parent;                                                   // (Parm, EditInline)
};

// Function GearboxFramework.AIComponent.RemoveTargets
struct UAIComponent_RemoveTargets_Params
{
};

// Function GearboxFramework.AIComponent.FindTargets
struct UAIComponent_FindTargets_Params
{
};

// Function GearboxFramework.AIComponent.GetTargets
struct UAIComponent_GetTargets_Params
{
};

// Function GearboxFramework.AIComponent.InitializeTargetRecord
struct UAIComponent_InitializeTargetRecord_Params
{
	class UMindTargetInfo*                             TargetRec;                                                // (Parm)
};

// Function GearboxFramework.AIComponent.NotifyAttackedBy
struct UAIComponent_NotifyAttackedBy_Params
{
	class AActor*                                      Attacker;                                                 // (Parm)
};

// Function GearboxFramework.AIComponent.AddTarget
struct UAIComponent_AddTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	class UMindTargetInfo*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.GetParentComponent
struct UAIComponent_GetParentComponent_Params
{
	class UAIComponent*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.AIComponent.GetAllegiance
struct UAIComponent_GetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponent.ClearState
struct UAIComponent_ClearState_Params
{
};

// Function GearboxFramework.AIComponent.ActivateEvent
struct UAIComponent_ActivateEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FlagDefinition.ApplyFlagInitializationData
struct UFlagDefinition_ApplyFlagInitializationData_Params
{
	TArray<struct FFlagDefinitionInitialization>       FlagsToSet;                                               // (Const, Parm, OutParm, NeedCtorLink)
	class UObject*                                     ContextSource;                                            // (Parm)
};

// Function GearboxFramework.FlagDefinition.ResolveContext
struct UFlagDefinition_ResolveContext_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FlagDefinition.SetTrueTimed
struct UFlagDefinition_SetTrueTimed_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	float                                              TimeSeconds;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FlagDefinition.SetValue
struct UFlagDefinition_SetValue_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      Value : 1;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.TriggerBehavior
struct UActionSequence_TriggerBehavior_Params
{
	struct FName                                       OutputName;                                               // (Parm)
};

// Function GearboxFramework.ActionSequence.GetRangeValue
struct UActionSequence_GetRangeValue_Params
{
	struct FAIRange                                    Range;                                                    // (Const, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.RangeIsValid
struct UActionSequence_RangeIsValid_Params
{
	struct FAIRange                                    Range;                                                    // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.Finish
struct UActionSequence_Finish_Params
{
	unsigned long                                      bFailed : 1;                                                  // (OptionalParm, Parm)
};

// Function GearboxFramework.ActionSequence.IsRunning
struct UActionSequence_IsRunning_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.ScriptCleanUp
struct UActionSequence_ScriptCleanUp_Params
{
};

// Function GearboxFramework.ActionSequence.CanRun
struct UActionSequence_CanRun_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.ActivateEvent
struct UActionSequence_ActivateEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function GearboxFramework.ActionSequence.Update
struct UActionSequence_Update_Params
{
};

// Function GearboxFramework.ActionSequence.Init
struct UActionSequence_Init_Params
{
};

// Function GearboxFramework.ActionSequence.Stop
struct UActionSequence_Stop_Params
{
};

// Function GearboxFramework.ActionSequence.Start
struct UActionSequence_Start_Params
{
};

// Function GearboxFramework.ActionSequence.InterruptSequence
struct UActionSequence_InterruptSequence_Params
{
	class UActionSequence*                             InterruptingSequence;                                     // (Parm)
};

// Function GearboxFramework.ActionSequence.StopSequence
struct UActionSequence_StopSequence_Params
{
};

// Function GearboxFramework.ActionSequence.StartSequence
struct UActionSequence_StartSequence_Params
{
};

// Function GearboxFramework.ActionSequence.ExecuteSequence
struct UActionSequence_ExecuteSequence_Params
{
	class UActionSequence*                             SequenceTemplate;                                         // (Parm)
};

// Function GearboxFramework.ActionSequence.Sleep
struct UActionSequence_Sleep_Params
{
	float                                              Seconds;                                                  // (Parm)
};

// Function GearboxFramework.ActionSequence.RunSubSequence
struct UActionSequence_RunSubSequence_Params
{
	class UActionSequence*                             SubSequence;                                              // (Parm)
};

// Function GearboxFramework.ActionSequence.InterruptLatentAction
struct UActionSequence_InterruptLatentAction_Params
{
};

// Function GearboxFramework.ActionSequence.DoRuleSetPop
struct UActionSequence_DoRuleSetPop_Params
{
};

// Function GearboxFramework.ActionSequence.DoRuleSetPush
struct UActionSequence_DoRuleSetPush_Params
{
	class URuleSet*                                    NewRuleSet;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.DoRuleSetSwitch
struct UActionSequence_DoRuleSetSwitch_Params
{
	class URuleSet*                                    NewRuleSet;                                               // (Parm)
};

// Function GearboxFramework.ActionSequence.PreventNewRulesFromStarting
struct UActionSequence_PreventNewRulesFromStarting_Params
{
};

// Function GearboxFramework.ActionSequence.GetRuleNative
struct UActionSequence_GetRuleNative_Params
{
	class URule*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.GetActionSequence
struct UActionSequence_GetActionSequence_Params
{
	class UActionSequence*                             Template;                                                 // (Parm)
	class UActionSequence*                             OutSequence;                                              // (Parm, OutParm)
};

// Function GearboxFramework.ActionSequence.IsInLabel
struct UActionSequence_IsInLabel_Params
{
	struct FName                                       TestLabel;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.IsAtomic
struct UActionSequence_IsAtomic_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequence.StopAtomic
struct UActionSequence_StopAtomic_Params
{
};

// Function GearboxFramework.ActionSequence.StartAtomic
struct UActionSequence_StartAtomic_Params
{
};

// Function GearboxFramework.ActionSequence.IsActionReadyToFinish
struct UActionSequence_IsActionReadyToFinish_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ActionSequenceList.IsActionReadyToFinish
struct UActionSequenceList_IsActionReadyToFinish_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Action_PawnMovementBase.PostMovement
struct UAction_PawnMovementBase_PostMovement_Params
{
};

// Function GearboxFramework.Action_PawnMovementBase.PreMovement
struct UAction_PawnMovementBase_PreMovement_Params
{
};

// Function GearboxFramework.Action_PawnMovementBase.PrePathFind
struct UAction_PawnMovementBase_PrePathFind_Params
{
};

// Function GearboxFramework.Action_PawnMovementBase.InterruptSequence
struct UAction_PawnMovementBase_InterruptSequence_Params
{
	class UActionSequence*                             InterruptingSequence;                                     // (Parm)
};

// Function GearboxFramework.Action_PawnMovementBase.StopSequence
struct UAction_PawnMovementBase_StopSequence_Params
{
};

// Function GearboxFramework.Action_PawnMovementBase.StartSequence
struct UAction_PawnMovementBase_StartSequence_Params
{
};

// Function GearboxFramework.Action_PawnMovementBase.MovePawnToDestinationLocation
struct UAction_PawnMovementBase_MovePawnToDestinationLocation_Params
{
	struct FVector                                     GoalLocation;                                             // (Parm)
	unsigned long                                      NewUsePreciseArrival : 1;                                     // (Parm)
};

// Function GearboxFramework.Action_PawnMovementBase.TakeDebugSnapshotMoveFailure
struct UAction_PawnMovementBase_TakeDebugSnapshotMoveFailure_Params
{
	unsigned char                                      Cause;                                                    // (Parm)
};

// Function GearboxFramework.Action_PawnMovementBase.SetMaxMovementSpeed
struct UAction_PawnMovementBase_SetMaxMovementSpeed_Params
{
	unsigned char                                      NewMaxSpeed;                                              // (Parm)
};

// Function GearboxFramework.Action_PawnMovementBase.EndMovePawnToDestinationLocation
struct UAction_PawnMovementBase_EndMovePawnToDestinationLocation_Params
{
};

// Function GearboxFramework.ActionSequenceRandom.EvaluateActionList
struct UActionSequenceRandom_EvaluateActionList_Params
{
};

// Function GearboxFramework.ActionSequenceRandom.OverrideNextSequenceToRun
struct UActionSequenceRandom_OverrideNextSequenceToRun_Params
{
	class UActionSequence*                             NewSequence;                                              // (Parm)
};

// Function GearboxFramework.ActionSequenceRandom.GetRandomAction
struct UActionSequenceRandom_GetRandomAction_Params
{
	class UActionSequence*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AICostExpressionEvaluator.Evaluate
struct UAICostExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.FlushPools
struct UAIFactoryBase_FlushPools_Params
{
};

// Function GearboxFramework.AIFactoryBase.ReturnAIDef
struct UAIFactoryBase_ReturnAIDef_Params
{
	class UAIDefinition*                               InAIDef;                                                  // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetAIDef
struct UAIFactoryBase_GetAIDef_Params
{
	class UAIDefinition*                               AIDefTemplate;                                            // (Parm)
	class UAIDefinition*                               OutAIDef;                                                 // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnTargetRecord
struct UAIFactoryBase_ReturnTargetRecord_Params
{
	class UMindTargetInfo*                             InTargetRecord;                                           // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetTargetRecord
struct UAIFactoryBase_GetTargetRecord_Params
{
	class UClass*                                      InfoClass;                                                // (Parm)
	class UMindTargetInfo*                             OutTargetRecord;                                          // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnActionSequence
struct UAIFactoryBase_ReturnActionSequence_Params
{
	class UActionSequence*                             InSequence;                                               // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetActionSequence
struct UAIFactoryBase_GetActionSequence_Params
{
	class UActionSequence*                             SequenceTemplate;                                         // (Parm)
	class UActionSequence*                             OutSequence;                                              // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnRuleSet
struct UAIFactoryBase_ReturnRuleSet_Params
{
	class URuleSet*                                    InRuleSet;                                                // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetRuleSetFromArchetype
struct UAIFactoryBase_GetRuleSetFromArchetype_Params
{
	class URuleSet*                                    RuleSetArchetype;                                         // (Parm)
	class URuleSet*                                    OutRuleSet;                                               // (Parm, OutParm)
	TArray<class URule*>                               CurRunningRules;                                          // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnKnowledgeRecord
struct UAIFactoryBase_ReturnKnowledgeRecord_Params
{
	class UKnowledgeRecord*                            InKR;                                                     // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordListFromArchetypes
struct UAIFactoryBase_GetKnowledgeRecordListFromArchetypes_Params
{
	TArray<class UKnowledgeRecord*>                    KnowledgeRecordTemplates;                                 // (Parm, NeedCtorLink)
	TArray<class UKnowledgeRecord*>                    KnowledgeRecords;                                         // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordFromArchetype
struct UAIFactoryBase_GetKnowledgeRecordFromArchetype_Params
{
	class UKnowledgeRecord*                            InKR;                                                     // (Parm)
	class UKnowledgeRecord*                            OutKR;                                                    // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecord
struct UAIFactoryBase_GetKnowledgeRecord_Params
{
	class UClass*                                      KnowledgeRecordClass;                                     // (Parm)
	class UKnowledgeRecord*                            OutKR;                                                    // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnRule
struct UAIFactoryBase_ReturnRule_Params
{
	class URule*                                       InRule;                                                   // (Parm, OutParm)
};

// Function GearboxFramework.AIFactoryBase.GetRuleFromArchetype
struct UAIFactoryBase_GetRuleFromArchetype_Params
{
	class URule*                                       InRule;                                                   // (Parm)
	class URule*                                       OutRule;                                                  // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.GetRule
struct UAIFactoryBase_GetRule_Params
{
	class UClass*                                      RuleClass;                                                // (Parm)
	class URule*                                       OutRule;                                                  // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIFactoryBase.ReturnRuleEngine
struct UAIFactoryBase_ReturnRuleEngine_Params
{
	class URuleEngine*                                 InRuleEngine;                                             // (Parm)
};

// Function GearboxFramework.GearboxAIFactory.FreeRuleEngine
struct UGearboxAIFactory_FreeRuleEngine_Params
{
	class URuleEngine*                                 InRuleEngine;                                             // (Parm)
};

// Function GearboxFramework.GearboxAIFactory.GetRuleEngineFromTemplate
struct UGearboxAIFactory_GetRuleEngineFromTemplate_Params
{
	class URuleEngine*                                 OutRuleEngine;                                            // (Parm, OutParm)
	class URuleEngine*                                 RuleEngineTemplate;                                       // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIResourceExpressionEvaluator.Evaluate
struct UAIResourceExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AllegianceExpressionEvaluator.Evaluate
struct UAllegianceExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GbxMessage.InitializeFromDefinition
struct UGbxMessage_InitializeFromDefinition_Params
{
	class UGbxMessageDefinition*                       InDefinition;                                             // (Parm)
	class UObject*                                     RadiusContextSource;                                      // (Parm)
	class UObject*                                     InSender;                                                 // (OptionalParm, Parm)
	class UObject*                                     InSubject;                                                // (OptionalParm, Parm)
	class UPawnAllegiance*                             ManualSenderAllegiance;                                   // (OptionalParm, Parm)
};

// Function GearboxFramework.Behavior_SendGbxMessage.ApplyBehaviorToContext
struct UBehavior_SendGbxMessage_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SendGbxMessage.GetLocation
struct UBehavior_SendGbxMessage_GetLocation_Params
{
	unsigned char                                      SelectionParam;                                           // (Parm)
	class UObject*                                     ContextObject;                                            // (Parm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_SendGbxMessage.GetMessageParameter
struct UBehavior_SendGbxMessage_GetMessageParameter_Params
{
	unsigned char                                      SelectionParam;                                           // (Parm)
	class UObject*                                     ContextObject;                                            // (Parm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_SetFlag.ApplyBehaviorToContext
struct UBehavior_SetFlag_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.ExposureUtilityBase.CalculateVantageToPoint
struct UExposureUtilityBase_CalculateVantageToPoint_Params
{
	class AActor*                                      pLooker;                                                  // (Parm)
	struct FVector                                     TargetPoint;                                              // (Const, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ExposureUtilityBase.CalculateTargetExposure
struct UExposureUtilityBase_CalculateTargetExposure_Params
{
	class AGearboxPawn*                                pLooker;                                                  // (Parm)
	class AActor*                                      pTarget;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FiringBehaviorManager.GetTemplateClass
struct UFiringBehaviorManager_GetTemplateClass_Params
{
	class UObject*                                     TemplateObject;                                           // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FiringZoneCollectionDefinition.GetZoneForDistance
struct UFiringZoneCollectionDefinition_GetZoneForDistance_Params
{
	float                                              Distance;                                                 // (Parm)
	class UFiringZoneDefinition*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Rule.GetRuleName
struct URule_GetRuleName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.Rule.GetRuleFName
struct URule_GetRuleFName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Rule.GetOtherEventParticipant
struct URule_GetOtherEventParticipant_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.FlagExpressionEvaluator.Evaluate
struct UFlagExpressionEvaluator_Evaluate_Params
{
	class UObject*                                     ContextSource;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GbxMessageManager.RemoveListener
struct UGbxMessageManager_RemoveListener_Params
{
	FScriptInterface                                   InListener;                                               // (Parm)
};

// Function GearboxFramework.GbxMessageManager.AddListener
struct UGbxMessageManager_AddListener_Params
{
	FScriptInterface                                   InListener;                                               // (Parm)
};

// Function GearboxFramework.GbxMessageManager.PostMessage
struct UGbxMessageManager_PostMessage_Params
{
	class UGbxMessage*                                 Message;                                                  // (Parm)
};

// Function GearboxFramework.GbxMessageManager.AllocateMessage
struct UGbxMessageManager_AllocateMessage_Params
{
	class UGbxMessage*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.ApplyFlagInitializationData
struct URuleEngine_ApplyFlagInitializationData_Params
{
	TArray<struct FFlagDefinitionInitialization>       FlagsToSet;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.RuleEngine.IsResourceInUse
struct URuleEngine_IsResourceInUse_Params
{
	class UClass*                                      TestResourceClass;                                        // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.GetContextSource
struct URuleEngine_GetContextSource_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.IsRunningRuleWhichBlocksRuleSetChange
struct URuleEngine_IsRunningRuleWhichBlocksRuleSetChange_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.GetDynamicFlagValue
struct URuleEngine_GetDynamicFlagValue_Params
{
	class UFlagDefinition*                             FlagDefinition;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.SetDynamicFlagDefTrueTimed
struct URuleEngine_SetDynamicFlagDefTrueTimed_Params
{
	class UFlagDefinition*                             FlagDefinition;                                           // (Parm)
	float                                              Time;                                                     // (Parm)
};

// Function GearboxFramework.RuleEngine.SetDynamicFlagDefValue
struct URuleEngine_SetDynamicFlagDefValue_Params
{
	class UFlagDefinition*                             FlagDefinition;                                           // (Parm)
	unsigned long                                      Value : 1;                                                    // (Parm)
};

// Function GearboxFramework.RuleEngine.GetRuleSetFromReference
struct URuleEngine_GetRuleSetFromReference_Params
{
	struct FName                                       ReferenceName;                                            // (Parm)
	class URuleSet*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.ClearRuleSetStack
struct URuleEngine_ClearRuleSetStack_Params
{
};

// Function GearboxFramework.RuleEngine.PopRuleSetSwitch
struct URuleEngine_PopRuleSetSwitch_Params
{
};

// Function GearboxFramework.RuleEngine.PushRuleSetSwitch
struct URuleEngine_PushRuleSetSwitch_Params
{
	class URuleSet*                                    NewRuleSetTemplate;                                       // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.SetRuleSet
struct URuleEngine_SetRuleSet_Params
{
	class URuleSet*                                    NewRuleSetTemplate;                                       // (Parm)
};

// Function GearboxFramework.RuleEngine.SwitchActiveRuleSet
struct URuleEngine_SwitchActiveRuleSet_Params
{
	class URuleSet*                                    NewRuleSetTemplate;                                       // (Parm)
};

// Function GearboxFramework.RuleEngine.UpdateKnowledge
struct URuleEngine_UpdateKnowledge_Params
{
	class UClass*                                      pKnowledgeRecordType;                                     // (Parm)
};

// Function GearboxFramework.RuleEngine.ActivateEventRuleEx
struct URuleEngine_ActivateEventRuleEx_Params
{
	struct FName                                       EventDefName;                                             // (Parm)
	TArray<class AGearboxPawn*>                        Participants;                                             // (OptionalParm, Parm, NeedCtorLink)
	class AActor*                                      Subject;                                                  // (OptionalParm, Parm)
	unsigned long                                      CastSizeMustMatch : 1;                                        // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.CleanUpRuleEngineData
struct URuleEngine_CleanUpRuleEngineData_Params
{
};

// Function GearboxFramework.RuleEngine.ActivateEventRule
struct URuleEngine_ActivateEventRule_Params
{
	struct FName                                       EventDefName;                                             // (Parm)
	class AGearboxPawn*                                Instigator;                                               // (OptionalParm, Parm)
	class AActor*                                      Subject;                                                  // (OptionalParm, Parm)
	unsigned long                                      CastSizeMustMatch : 1;                                        // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.RuleEngine.ActivateEventRuleByDefinition
struct URuleEngine_ActivateEventRuleByDefinition_Params
{
	class URuleEventDef*                               EventDefinition;                                          // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.InitSequence
struct AGearboxMind_InitSequence_Params
{
	class UActionSequence*                             NewSequence;                                              // (Parm)
};

// Function GearboxFramework.GearboxMind.GetAllegiance
struct AGearboxMind_GetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAIDefinition
struct AGearboxMind_GetAIDefinition_Params
{
	class UAIDefinition*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAIComponent
struct AGearboxMind_GetAIComponent_Params
{
	class UAIComponent*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxMind.GetAIParent
struct AGearboxMind_GetAIParent_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAILocation
struct AGearboxMind_GetAILocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAIActor
struct AGearboxMind_GetAIActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.CanTickAI
struct AGearboxMind_CanTickAI_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.InGodMode
struct AGearboxMind_InGodMode_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.PawnDied
struct AGearboxMind_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function GearboxFramework.GearboxMind.OnTargetPriority
struct AGearboxMind_OnTargetPriority_Params
{
	class UGearboxSeqAct_TargetPriority*               inAction;                                                 // (Parm)
};

// Function GearboxFramework.GearboxMind.Behavior_SetCanTarget
struct AGearboxMind_Behavior_SetCanTarget_Params
{
	unsigned char                                      ChangeStatus;                                             // (Parm)
};

// Function GearboxFramework.GearboxMind.GetNoTargetAllEnemies
struct AGearboxMind_GetNoTargetAllEnemies_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetNoTargetAllEnemies
struct AGearboxMind_SetNoTargetAllEnemies_Params
{
	unsigned long                                      bNoTarget : 1;                                                // (Parm)
};

// Function GearboxFramework.GearboxMind.ClearScriptedMoveTarget
struct AGearboxMind_ClearScriptedMoveTarget_Params
{
};

// Function GearboxFramework.GearboxMind.IsCloseEnoughToScriptedMoveTarget
struct AGearboxMind_IsCloseEnoughToScriptedMoveTarget_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetWeaponFireLocation
struct AGearboxMind_GetWeaponFireLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.ActivateEventRule
struct AGearboxMind_ActivateEventRule_Params
{
	struct FName                                       RuleEventName;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.AddHitTargetRecord
struct AGearboxMind_AddHitTargetRecord_Params
{
	class AGearboxPawn*                                HitByPawn;                                                // (Parm)
	struct FVector                                     NewHitLocation;                                           // (Parm)
	float                                              flNewDamage;                                              // (Parm)
};

// Function GearboxFramework.GearboxMind.StopMovement
struct AGearboxMind_StopMovement_Params
{
};

// Function GearboxFramework.GearboxMind.Possess
struct AGearboxMind_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	unsigned long                                      bVehicleTransition : 1;                                       // (Parm)
};

// Function GearboxFramework.GearboxMind.GetGearboxRuleEngine
struct AGearboxMind_GetGearboxRuleEngine_Params
{
	class UGearboxRuleEngine*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetRuleEngine
struct AGearboxMind_GetRuleEngine_Params
{
	class URuleEngine*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.NotifyShotAtBy
struct AGearboxMind_NotifyShotAtBy_Params
{
	class AGearboxPawn*                                ShootingPawn;                                             // (Parm)
};

// Function GearboxFramework.GearboxMind.FindCoverAndClaim
struct AGearboxMind_FindCoverAndClaim_Params
{
	struct FVector                                     CoverSearchOrigin;                                        // (Parm)
	class UPawnMoveLocationRequest*                    LocationRequest;                                          // (Parm)
	struct FVector                                     OutDestination;                                           // (Parm, OutParm)
	float                                              MinSearchRadius;                                          // (Parm)
	float                                              MaxSearchRadius;                                          // (Parm)
	unsigned long                                      bEnactCoverChanges : 1;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.UpdateRuleEngineKnowledge
struct AGearboxMind_UpdateRuleEngineKnowledge_Params
{
	class UClass*                                      aKDBClass;                                                // (Parm)
};

// Function GearboxFramework.GearboxMind.GetCurrentTargetInfo
struct AGearboxMind_GetCurrentTargetInfo_Params
{
	class UMindTargetInfo*                             OutTargetRec;                                             // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsSameAllegianceMind
struct AGearboxMind_IsSameAllegianceMind_Params
{
	class AGearboxMind*                                aMind;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsSameAllegiance
struct AGearboxMind_IsSameAllegiance_Params
{
	class UObject*                                     anObject;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsNeutralMind
struct AGearboxMind_IsNeutralMind_Params
{
	class AGearboxMind*                                aMind;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsNeutral
struct AGearboxMind_IsNeutral_Params
{
	class UObject*                                     anObject;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsFriendlyMind
struct AGearboxMind_IsFriendlyMind_Params
{
	class AGearboxMind*                                aMind;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsFriendly
struct AGearboxMind_IsFriendly_Params
{
	class UObject*                                     anObject;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsEnemyMind
struct AGearboxMind_IsEnemyMind_Params
{
	class AGearboxMind*                                aMind;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsEnemy
struct AGearboxMind_IsEnemy_Params
{
	class UObject*                                     anObject;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.WantsToWalk
struct AGearboxMind_WantsToWalk_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetWantsToWalk
struct AGearboxMind_SetWantsToWalk_Params
{
	unsigned long                                      bInWantsToWalk : 1;                                           // (Parm)
};

// Function GearboxFramework.GearboxMind.GetFacingPolicy
struct AGearboxMind_GetFacingPolicy_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetFacingPolicy
struct AGearboxMind_SetFacingPolicy_Params
{
	unsigned char                                      NewFacingPolicy;                                          // (Parm)
	class AActor*                                      NewFacingActor;                                           // (OptionalParm, Parm)
	struct FVector                                     NewFacingVector;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxMind.GetCurrentTarget
struct AGearboxMind_GetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxMind.RemoveEnemyFromQueue
struct AGearboxMind_RemoveEnemyFromQueue_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function GearboxFramework.GearboxMind.GetNavigationHandle
struct AGearboxMind_GetNavigationHandle_Params
{
	class UGearboxNavigationHandle*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsChangingDirection
struct UGearboxCoverStateManager_IsChangingDirection_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsMantlingOverCoverInProgress
struct UGearboxCoverStateManager_IsMantlingOverCoverInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPeekInProgress
struct UGearboxCoverStateManager_IsReturnFromPeekInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsPeekTransitionInProgress
struct UGearboxCoverStateManager_IsPeekTransitionInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsPeekedUp
struct UGearboxCoverStateManager_IsPeekedUp_Params
{
	unsigned long                                      bTransitionCounts : 1;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromLeanOutInProgress
struct UGearboxCoverStateManager_IsReturnFromLeanOutInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsLeanOutTransitionInProgress
struct UGearboxCoverStateManager_IsLeanOutTransitionInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsLeanedOut
struct UGearboxCoverStateManager_IsLeanedOut_Params
{
	unsigned long                                      bTransitionCounts : 1;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPopUpInProgress
struct UGearboxCoverStateManager_IsReturnFromPopUpInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsPopUpTransitionInProgress
struct UGearboxCoverStateManager_IsPopUpTransitionInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsPoppedUp
struct UGearboxCoverStateManager_IsPoppedUp_Params
{
	unsigned long                                      bTransitionCounts : 1;                                        // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsExecutingAnyTransition
struct UGearboxCoverStateManager_IsExecutingAnyTransition_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredState
struct UGearboxCoverStateManager_GetDesiredState_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentTransition
struct UGearboxCoverStateManager_GetCurrentTransition_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.OnMantleOverCoverAnimEnd
struct UGearboxCoverStateManager_OnMantleOverCoverAnimEnd_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEndEx
struct UGearboxCoverStateManager_OnTransitionAnimEndEx_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEnd
struct UGearboxCoverStateManager_OnTransitionAnimEnd_Params
{
	unsigned char                                      Transition;                                               // (Parm)
};

// Function GearboxFramework.GearboxCoverStateManager.OnDismountAnimEnd
struct UGearboxCoverStateManager_OnDismountAnimEnd_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnMountAnimEnd
struct UGearboxCoverStateManager_OnMountAnimEnd_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.MantleOverCover
struct UGearboxCoverStateManager_MantleOverCover_Params
{
	class AActor*                                      CoverActor;                                               // (OptionalParm, Parm)
	int                                                CoverSlotNdx;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.ReturnToCover
struct UGearboxCoverStateManager_ReturnToCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.LeanOutForFiring
struct UGearboxCoverStateManager_LeanOutForFiring_Params
{
	unsigned long                                      BlindFire : 1;                                                // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.PopUpForFiring
struct UGearboxCoverStateManager_PopUpForFiring_Params
{
	unsigned long                                      BlindFire : 1;                                                // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.Peek
struct UGearboxCoverStateManager_Peek_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.DetachFromCover
struct UGearboxCoverStateManager_DetachFromCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.DismountCover
struct UGearboxCoverStateManager_DismountCover_Params
{
	unsigned char                                      DismountType;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.ClaimAndMountCover
struct UGearboxCoverStateManager_ClaimAndMountCover_Params
{
	class ACoverLink*                                  TheCoverLink;                                             // (Parm)
	int                                                SlotNdx;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.MountDesiredCover
struct UGearboxCoverStateManager_MountDesiredCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.ClearDesiredCover
struct UGearboxCoverStateManager_ClearDesiredCover_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverLocationAndRotation
struct UGearboxCoverStateManager_GetCurrentCoverLocationAndRotation_Params
{
	struct FVector                                     CoverLoc;                                                 // (Parm, OutParm)
	struct FRotator                                    CoverRot;                                                 // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverLocationAndRotation
struct UGearboxCoverStateManager_GetDesiredCoverLocationAndRotation_Params
{
	struct FVector                                     CoverLoc;                                                 // (Parm, OutParm)
	struct FRotator                                    CoverRot;                                                 // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCoverStateManager.HasDesiredCover
struct UGearboxCoverStateManager_HasDesiredCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetLastCoverHeight
struct UGearboxCoverStateManager_GetLastCoverHeight_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverHeight
struct UGearboxCoverStateManager_GetCurrentCoverHeight_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverHeight
struct UGearboxCoverStateManager_GetDesiredCoverHeight_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.WasCoveredFrom
struct UGearboxCoverStateManager_WasCoveredFrom_Params
{
	struct FVector                                     ThreatLocation;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.WillBeCoveredFrom
struct UGearboxCoverStateManager_WillBeCoveredFrom_Params
{
	struct FVector                                     ThreatLocation;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsCoveredFrom
struct UGearboxCoverStateManager_IsCoveredFrom_Params
{
	struct FVector                                     ThreatLocation;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsDismountInProgress
struct UGearboxCoverStateManager_IsDismountInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsMountInProgress
struct UGearboxCoverStateManager_IsMountInProgress_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.WasMountedOnCover
struct UGearboxCoverStateManager_WasMountedOnCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsMountedOnCover
struct UGearboxCoverStateManager_IsMountedOnCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.IsUsingCover
struct UGearboxCoverStateManager_IsUsingCover_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.OnCoverStateChanged
struct UGearboxCoverStateManager_OnCoverStateChanged_Params
{
};

// Function GearboxFramework.GearboxCoverStateManager.GetLastCover
struct UGearboxCoverStateManager_GetLastCover_Params
{
	class AActor*                                      OutCoverActor;                                            // (Parm, OutParm)
	int                                                OutSlotNdx;                                               // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCover
struct UGearboxCoverStateManager_GetCurrentCover_Params
{
	class AActor*                                      OutCoverActor;                                            // (Parm, OutParm)
	int                                                OutSlotNdx;                                               // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCover
struct UGearboxCoverStateManager_GetDesiredCover_Params
{
	class AActor*                                      OutCoverActor;                                            // (Parm, OutParm)
	int                                                OutSlotNdx;                                               // (Parm, OutParm)
};

// Function GearboxFramework.GearboxCoverStateManager.FindCoverAndClaim
struct UGearboxCoverStateManager_FindCoverAndClaim_Params
{
	class AGearboxMind*                                TheMind;                                                  // (Parm)
	struct FVector                                     CoverSearchOrigin;                                        // (Parm)
	class UPawnMoveLocationRequest*                    LocationRequest;                                          // (Parm)
	struct FVector                                     OutDestination;                                           // (Parm, OutParm)
	float                                              MinSearchRadius;                                          // (Parm)
	float                                              MaxSearchRadius;                                          // (Parm)
	unsigned long                                      bEnactCoverChanges : 1;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxCoverStateManager.Initialize
struct UGearboxCoverStateManager_Initialize_Params
{
	class AGearboxPawn*                                P;                                                        // (Parm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetDesiredMovementSpeed
struct UGearboxNavigationHandle_SetDesiredMovementSpeed_Params
{
	unsigned char                                      Speed;                                                    // (Parm)
};

// Function GearboxFramework.GearboxNavigationHandle.ClearAnchor
struct UGearboxNavigationHandle_ClearAnchor_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.GetNearestPositionOnNavMesh
struct UGearboxNavigationHandle_GetNearestPositionOnNavMesh_Params
{
	float                                              Radius;                                                   // (Parm)
	struct FVector                                     TestLoc;                                                  // (Parm)
	struct FBasedPosition                              NearestPos;                                               // (Parm, OutParm)
	struct FNavMeshPathParams                          PolyUsableCheckParams;                                    // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
	struct FGBXNavMeshPolyRef                          NearestPoly;                                              // (OptionalParm, Parm, OutParm)
	unsigned long                                      bAnyHeight : 1;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.GetNavMeshPolyForPoint
struct UGearboxNavigationHandle_GetNavMeshPolyForPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FGBXNavMeshPolyRef                          FoundPoly;                                                // (Parm, OutParm)
	struct FNavMeshPathParams                          PolyUsableCheckParams;                                    // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.IsDoingSpecialMove
struct UGearboxNavigationHandle_IsDoingSpecialMove_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.InFinalPoly
struct UGearboxNavigationHandle_InFinalPoly_Params
{
	struct FVector                                     TestLoc;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.NeedsRegularWalkingPhysics
struct UGearboxNavigationHandle_NeedsRegularWalkingPhysics_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.PopulatePathfindingParamCache
struct UGearboxNavigationHandle_PopulatePathfindingParamCache_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.TrySpecialMove
struct UGearboxNavigationHandle_TrySpecialMove_Params
{
	struct FBasedPosition                              MoveTarget;                                               // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.Finished
struct UGearboxNavigationHandle_Finished_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.IsGoalValid
struct UGearboxNavigationHandle_IsGoalValid_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.MovePawnToGoal
struct UGearboxNavigationHandle_MovePawnToGoal_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.PathIsValid
struct UGearboxNavigationHandle_PathIsValid_Params
{
	struct FPathFindData                               Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      bCheckAnchor : 1;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.IsFollowingPath
struct UGearboxNavigationHandle_IsFollowingPath_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.ClearPath
struct UGearboxNavigationHandle_ClearPath_Params
{
	unsigned long                                      bStopMovement : 1;                                            // (OptionalParm, Parm)
	unsigned long                                      bAllowDelayedClear : 1;                                       // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.FollowPath
struct UGearboxNavigationHandle_FollowPath_Params
{
	struct FPathFindData                               Data;                                                     // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CreatePathToLocation
struct UGearboxNavigationHandle_CreatePathToLocation_Params
{
	struct FPathFindData                               PathData;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FVector                                     DestLocation;                                             // (Parm)
	struct FGBXNavMeshPolyRef                          DestPoly;                                                 // (OptionalParm, Parm)
	unsigned long                                      bAdjustStartForMotion : 1;                                    // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.WantsToStopListening
struct UIGbxMessageListener_WantsToStopListening_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.GetActor
struct UIGbxMessageListener_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.GetListenerLocation
struct UIGbxMessageListener_GetListenerLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.GetAllegiance
struct UIGbxMessageListener_GetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.ReceiveMessage
struct UIGbxMessageListener_ReceiveMessage_Params
{
	class UGbxMessage*                                 Message;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IGbxMessageListener.CaresAboutMessage
struct UIGbxMessageListener_CaresAboutMessage_Params
{
	class UGbxMessage*                                 Message;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IRuleEngineOwner.GetRuleEngine
struct UIRuleEngineOwner_GetRuleEngine_Params
{
	class URuleEngine*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.KnowledgeRecord.RecordEvalCallback
struct UKnowledgeRecord_RecordEvalCallback_Params
{
	class URuleEngine*                                 EvalRuleEngine;                                           // (Parm)
};

// Function GearboxFramework.MindTargetInfo.GetAverageHitTime
struct UMindTargetInfo_GetAverageHitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.MindTargetInfo.AddHitTargetRecord
struct UMindTargetInfo_AddHitTargetRecord_Params
{
	struct FVector                                     vecNewHitLoc;                                             // (Parm)
	float                                              flNewDamage;                                              // (Parm)
};

// Function GearboxFramework.GearboxRuleEngine.Initialize
struct UGearboxRuleEngine_Initialize_Params
{
	class AGearboxPawn*                                NewGearboxPawn;                                           // (Parm)
	class AGearboxMind*                                NewMind;                                                  // (Parm)
	class UGearboxAIFactory*                           NewAIFactory;                                             // (Parm)
};

// Function GearboxFramework.GearboxRuleEngine.GetContextSource
struct UGearboxRuleEngine_GetContextSource_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.TargetIterator.RecordEvalCallback
struct UTargetIterator_RecordEvalCallback_Params
{
	class URuleEngine*                                 EvalRuleEngine;                                           // (Parm)
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialMovementHoldTime
struct UIPopulationSpawnPoint_GetInitialMovementHoldTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialDestination
struct UIPopulationSpawnPoint_GetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialActionType
struct UIPopulationSpawnPoint_GetInitialActionType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IPopulationSpawnPoint.GetSpawnStyleType
struct UIPopulationSpawnPoint_GetSpawnStyleType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationDefinition.IsAllSpawnTypesDebugEnabled
struct UPopulationDefinition_IsAllSpawnTypesDebugEnabled_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationDefinition.ToggleAllSpawnTypesDebug
struct UPopulationDefinition_ToggleAllSpawnTypesDebug_Params
{
};

// Function GearboxFramework.PopulationDefinition.GetRandomFactory
struct UPopulationDefinition_GetRandomFactory_Params
{
	class APopulationOpportunity*                      SpawningOpportunity;                                      // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class UPopulationFactory*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.GetDescriptionOfFactoryOutput
struct UPopulationFactory_GetDescriptionOfFactoryOutput_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.PopulationFactory.ShouldSavePopulationActor
struct UPopulationFactory_ShouldSavePopulationActor_Params
{
	class UPopulationMaster*                           Master;                                                   // (Parm)
	class AActor*                                      ActorToSave;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.DestroyPopulationActor
struct UPopulationFactory_DestroyPopulationActor_Params
{
	class UPopulationMaster*                           Master;                                                   // (Parm)
	int                                                nOpportunityIdx;                                          // (Parm)
	class AActor*                                      ActorToDestroy;                                           // (Parm)
	class UPopulationFactory*                          SpawnFactory;                                             // (Parm)
	int                                                CreationFlags;                                            // (Parm)
	unsigned long                                      bDontSaveActor : 1;                                           // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.CreatePopulationActor
struct UPopulationFactory_CreatePopulationActor_Params
{
	class UPopulationMaster*                           Master;                                                   // (Parm)
	class APopulationOpportunity*                      Opportunity;                                              // (Parm)
	class UObject*                                     SpawnLocationContextObject;                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.GetSpawnVisibilityBounds
struct UPopulationFactory_GetSpawnVisibilityBounds_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.GetActorAllegiance
struct UPopulationFactory_GetActorAllegiance_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.GetActorSpawnCost
struct UPopulationFactory_GetActorSpawnCost_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	unsigned long                                      bCanSpawnTest : 1;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.OnSpawnActor
struct UPopulationFactory_OnSpawnActor_Params
{
	class AActor*                                      aNewActor;                                                // (Parm)
};

// Function GearboxFramework.PopulationFactory.SetupMatineeForActor
struct UPopulationFactory_SetupMatineeForActor_Params
{
	class AActor*                                      aNewActor;                                                // (Parm)
};

// Function GearboxFramework.PopulationFactory.GetSpawnFactory
struct UPopulationFactory_GetSpawnFactory_Params
{
	class APopulationOpportunity*                      SpawningOpportunity;                                      // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class UPopulationFactory*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.GetSpawnProbabilityAtThisGameStage
struct UPopulationFactory_GetSpawnProbabilityAtThisGameStage_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.IsFactoryWithin
struct UPopulationFactory_IsFactoryWithin_Params
{
	class UPopulationFactory*                          TestFactory;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactory.CanSpawn
struct UPopulationFactory_CanSpawn_Params
{
	class APopulationOpportunity*                      SpawningOpportunity;                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactoryGeneric.CreatePopulationActor
struct UPopulationFactoryGeneric_CreatePopulationActor_Params
{
	class UPopulationMaster*                           Master;                                                   // (Parm)
	class APopulationOpportunity*                      Opportunity;                                              // (Parm)
	class UObject*                                     SpawnLocationContextObject;                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactoryGeneric.GetSpawnVisibilityBounds
struct UPopulationFactoryGeneric_GetSpawnVisibilityBounds_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetSpawnFactory
struct UPopulationFactoryPopulationDefinition_GetSpawnFactory_Params
{
	class APopulationOpportunity*                      SpawningOpportunity;                                      // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class UPopulationFactory*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetActorAllegiance
struct UPopulationFactoryPopulationDefinition_GetActorAllegiance_Params
{
	int                                                GameStage;                                                // (Parm)
	int                                                AwesomeLevel;                                             // (Parm)
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.IsFactoryWithin
struct UPopulationFactoryPopulationDefinition_IsFactoryWithin_Params
{
	class UPopulationFactory*                          TestFactory;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.ClearBodyCompositionInstance
struct APopulationOpportunity_ClearBodyCompositionInstance_Params
{
};

// Function GearboxFramework.PopulationOpportunity.ApplyPreviewBodyComposition
struct APopulationOpportunity_ApplyPreviewBodyComposition_Params
{
};

// Function GearboxFramework.PopulationOpportunity.GetBodyInfoProvider
struct APopulationOpportunity_GetBodyInfoProvider_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.ChangeInstanceDataSwitch
struct APopulationOpportunity_ChangeInstanceDataSwitch_Params
{
	struct FName                                       SwitchName;                                               // (Const, Parm)
	unsigned char                                      NewValue;                                                 // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.PostInitBodyComposition
struct APopulationOpportunity_PostInitBodyComposition_Params
{
	struct FName                                       Identifier;                                               // (Const, Parm)
	class UObject*                                     Value;                                                    // (Parm)
	int                                                BodyCompositionIndex;                                     // (Parm)
	unsigned char                                      Mode;                                                     // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.PreRemoveBodyComposition
struct APopulationOpportunity_PreRemoveBodyComposition_Params
{
	struct FName                                       Identifier;                                               // (Const, Parm)
	class UObject*                                     Value;                                                    // (Parm)
	int                                                BodyCompositionIndex;                                     // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.GetNumSpawned
struct APopulationOpportunity_GetNumSpawned_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.GetNumAlive
struct APopulationOpportunity_GetNumAlive_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.GetNumDied
struct APopulationOpportunity_GetNumDied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.Destroyed
struct APopulationOpportunity_Destroyed_Params
{
};

// Function GearboxFramework.PopulationOpportunity.GetRarity
struct APopulationOpportunity_GetRarity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.GetGameStage
struct APopulationOpportunity_GetGameStage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.GetOpportunityGameStage
struct APopulationOpportunity_GetOpportunityGameStage_Params
{
	int                                                GameStage;                                                // (Parm, OutParm)
	int                                                Rarity;                                                   // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.TriggerKismetAllSpawnedEvent
struct APopulationOpportunity_TriggerKismetAllSpawnedEvent_Params
{
};

// Function GearboxFramework.PopulationOpportunity.ClearSequenceActionLink
struct APopulationOpportunity_ClearSequenceActionLink_Params
{
};

// Function GearboxFramework.PopulationOpportunity.SetSequenceActionLink
struct APopulationOpportunity_SetSequenceActionLink_Params
{
	class UGearboxSeqAct_PopulationOpportunityLink*    Link;                                                     // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.SetEnabledStatus
struct APopulationOpportunity_SetEnabledStatus_Params
{
	unsigned long                                      bEnable : 1;                                                  // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.OnToggle
struct APopulationOpportunity_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.GetNumLeftToSpawnAndStillAlive
struct APopulationOpportunity_GetNumLeftToSpawnAndStillAlive_Params
{
	int                                                NumLeftToSpawn;                                           // (Parm, OutParm)
	int                                                NumStillAlive;                                            // (Parm, OutParm)
};

// Function GearboxFramework.PopulationOpportunity.GetNextSpawnTime
struct APopulationOpportunity_GetNextSpawnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunity.RespawnKilledActors
struct APopulationOpportunity_RespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                        // (Parm)
};

// Function GearboxFramework.PopulationOpportunity.DoSpawning
struct APopulationOpportunity_DoSpawning_Params
{
	class UPopulationMaster*                           PopMaster;                                                // (Parm)
};

// Function GearboxFramework.PopulationMaster.GetActorSpawnedFromOpportunity
struct UPopulationMaster_GetActorSpawnedFromOpportunity_Params
{
	class APopulationOpportunity*                      Opportunity;                                              // (Parm)
	int                                                ActorIndex;                                               // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.GetSavedActorDebugInfoForOpportunity
struct UPopulationMaster_GetSavedActorDebugInfoForOpportunity_Params
{
	int                                                OpportunityIndex;                                         // (Parm)
	TArray<struct FString>                             SavedActorsDebugInfo;                                     // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.PopulationMaster.GetNumberOfSavedActorsForOpportunity
struct UPopulationMaster_GetNumberOfSavedActorsForOpportunity_Params
{
	int                                                OpportunityIndex;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.WillActorsOpportunityBeResetOnLevelLoad
struct UPopulationMaster_WillActorsOpportunityBeResetOnLevelLoad_Params
{
	class AActor*                                      TestActor;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.ResetRespawn
struct UPopulationMaster_ResetRespawn_Params
{
};

// Function GearboxFramework.PopulationMaster.GetStreamingLevelForActor
struct UPopulationMaster_GetStreamingLevelForActor_Params
{
	class AActor*                                      OpportunityInLevel;                                       // (Parm)
	class ULevelStreaming*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactories
struct UPopulationMaster_HasCapacityToSpawnFromFactories_Params
{
	TArray<class UPopulationFactory*>                  TheFactories;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactory
struct UPopulationMaster_HasCapacityToSpawnFromFactory_Params
{
	class UPopulationFactory*                          TheFactory;                                               // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.IsPopulationSystemAtCapacity
struct UPopulationMaster_IsPopulationSystemAtCapacity_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.StatProfileStop
struct UPopulationMaster_StatProfileStop_Params
{
	int                                                nStat;                                                    // (Parm)
};

// Function GearboxFramework.PopulationMaster.StatProfileStart
struct UPopulationMaster_StatProfileStart_Params
{
	int                                                nStat;                                                    // (Parm)
};

// Function GearboxFramework.PopulationMaster.GetStatProfileTime
struct UPopulationMaster_GetStatProfileTime_Params
{
	int                                                nStat;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.AddSavedActor
struct UPopulationMaster_AddSavedActor_Params
{
	int                                                OpportunityIdx;                                           // (Parm)
	class AActor*                                      TheActor;                                                 // (Parm)
	class UPopulationFactory*                          SpawnFactory;                                             // (Parm)
	int                                                CreationFlags;                                            // (Parm)
};

// Function GearboxFramework.PopulationMaster.DisconnectEncounter
struct UPopulationMaster_DisconnectEncounter_Params
{
	class APopulationEncounter*                        Encounter;                                                // (Parm)
};

// Function GearboxFramework.PopulationMaster.ConnectEncounter
struct UPopulationMaster_ConnectEncounter_Params
{
	class APopulationEncounter*                        Encounter;                                                // (Parm)
};

// Function GearboxFramework.PopulationMaster.DisconnectOpportunity
struct UPopulationMaster_DisconnectOpportunity_Params
{
	class APopulationOpportunity*                      DeactivatedOpportunity;                                   // (Parm)
	unsigned long                                      bSaveState : 1;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.ConnectOpportunity
struct UPopulationMaster_ConnectOpportunity_Params
{
	class APopulationOpportunity*                      ActivatedOpportunity;                                     // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.GetWorldInfo
struct UPopulationMaster_GetWorldInfo_Params
{
	class AWorldInfo*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.DestroySpawnedActors
struct UPopulationMaster_DestroySpawnedActors_Params
{
	class APopulationOpportunity*                      Opportunity;                                              // (Parm)
	unsigned long                                      bDontSaveActors : 1;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.PopulationMaster.RemoveSpawnedActor
struct UPopulationMaster_RemoveSpawnedActor_Params
{
	class AActor*                                      TheActor;                                                 // (Parm)
	unsigned long                                      bKeepBody : 1;                                                // (Parm)
	unsigned long                                      bActorDied : 1;                                               // (OptionalParm, Parm)
};

// Function GearboxFramework.PopulationMaster.SetSpawnedActorsReuse
struct UPopulationMaster_SetSpawnedActorsReuse_Params
{
	class AActor*                                      TheActor;                                                 // (Parm)
	unsigned long                                      bReuse : 1;                                                   // (Parm)
};

// Function GearboxFramework.PopulationMaster.AddExternalActor
struct UPopulationMaster_AddExternalActor_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm)
	class UClass*                                      FactoryClass;                                             // (Parm)
};

// Function GearboxFramework.PopulationMaster.SpawnActorFromOpportunity
struct UPopulationMaster_SpawnActorFromOpportunity_Params
{
	class UPopulationFactory*                          TheFactory;                                               // (Parm)
	class UObject*                                     SpawnLocationContextObject;                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	int                                                OpportunityIdx;                                           // (Parm)
	int                                                PopOppFlags;                                              // (Parm)
	unsigned long                                      bCanSave : 1;                                                 // (OptionalParm, Parm)
	unsigned long                                      bForceSpawn : 1;                                              // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.SpawnActor
struct UPopulationMaster_SpawnActor_Params
{
	class UPopulationFactory*                          TheFactory;                                               // (Parm)
	class UObject*                                     SpawnLocationContextObject;                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                Rarity;                                                   // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.GetPopulationOpportunityIndex
struct UPopulationMaster_GetPopulationOpportunityIndex_Params
{
	class APopulationOpportunity*                      Opportunity;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.GetActorsOpportunity
struct UPopulationMaster_GetActorsOpportunity_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm)
	class APopulationOpportunity*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMaster.SpawnPopulationControlledActor
struct UPopulationMaster_SpawnPopulationControlledActor_Params
{
	class UClass*                                      SpawnClass;                                               // (Parm)
	class AActor*                                      SpawnOwner;                                               // (OptionalParm, Parm)
	struct FName                                       SpawnTag;                                                 // (OptionalParm, Parm)
	struct FVector                                     SpawnLocation;                                            // (OptionalParm, Parm)
	struct FRotator                                    SpawnRotation;                                            // (OptionalParm, Parm)
	class AActor*                                      ActorTemplate;                                            // (OptionalParm, Parm)
	unsigned long                                      bNoCollisionFail : 1;                                         // (OptionalParm, Parm)
	unsigned long                                      bPersistAcrossLevelTransitions : 1;                           // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function GearboxFramework.PopulationOpportunityArea.ApplyPreviewBodyComposition
struct APopulationOpportunityArea_ApplyPreviewBodyComposition_Params
{
};

// Function GearboxFramework.PopulationOpportunityArea.GetBodyInfoProvider
struct APopulationOpportunityArea_GetBodyInfoProvider_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityArea.RespawnKilledActors
struct APopulationOpportunityArea_RespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                        // (Parm)
};

// Function GearboxFramework.PopulationOpportunityArea.DoSpawning
struct APopulationOpportunityArea_DoSpawning_Params
{
	class UPopulationMaster*                           PopMaster;                                                // (Parm)
};

// Function GearboxFramework.PopulationOpportunityCloner.ApplyPreviewBodyComposition
struct APopulationOpportunityCloner_ApplyPreviewBodyComposition_Params
{
};

// Function GearboxFramework.PopulationOpportunityCloner.GetBodyInfoProvider
struct APopulationOpportunityCloner_GetBodyInfoProvider_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCloner.CloneTimer
struct APopulationOpportunityCloner_CloneTimer_Params
{
};

// Function GearboxFramework.PopulationOpportunityCloner.RespawnKilledActors
struct APopulationOpportunityCloner_RespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                        // (Parm)
};

// Function GearboxFramework.PopulationOpportunityCloner.DoSpawning
struct APopulationOpportunityCloner_DoSpawning_Params
{
	class UPopulationMaster*                           PopMaster;                                                // (Parm)
};

// Function GearboxFramework.PopulationOpportunityCombat.ApplyPreviewBodyComposition
struct APopulationOpportunityCombat_ApplyPreviewBodyComposition_Params
{
};

// Function GearboxFramework.PopulationOpportunityCombat.GetBodyInfoProvider
struct APopulationOpportunityCombat_GetBodyInfoProvider_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetSingleDeathEvent
struct APopulationOpportunityCombat_TriggerKismetSingleDeathEvent_Params
{
};

// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetDeathEvent
struct APopulationOpportunityCombat_TriggerKismetDeathEvent_Params
{
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumSpawned
struct APopulationOpportunityCombat_GetNumSpawned_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumAlive
struct APopulationOpportunityCombat_GetNumAlive_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumDied
struct APopulationOpportunityCombat_GetNumDied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.WantsToStopListening
struct APopulationOpportunityCombat_WantsToStopListening_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.GetActor
struct APopulationOpportunityCombat_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.GetListenerLocation
struct APopulationOpportunityCombat_GetListenerLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.GetAllegiance
struct APopulationOpportunityCombat_GetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.ReceiveMessage
struct APopulationOpportunityCombat_ReceiveMessage_Params
{
	class UGbxMessage*                                 Message;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.CaresAboutMessage
struct APopulationOpportunityCombat_CaresAboutMessage_Params
{
	class UGbxMessage*                                 Message;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityCombat.PostBeginPlay
struct APopulationOpportunityCombat_PostBeginPlay_Params
{
};

// Function GearboxFramework.PopulationOpportunityCombat.EnableDebugging
struct APopulationOpportunityCombat_EnableDebugging_Params
{
	unsigned long                                      bEnabled : 1;                                                 // (Parm)
};

// Function GearboxFramework.PopulationOpportunityCombat.RespawnKilledActors
struct APopulationOpportunityCombat_RespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                        // (Parm)
};

// Function GearboxFramework.PopulationOpportunityCombat.DoSpawning
struct APopulationOpportunityCombat_DoSpawning_Params
{
	class UPopulationMaster*                           PopMaster;                                                // (Parm)
};

// Function GearboxFramework.PopulationOpportunityPoint.ClearBodyCompositionInstance
struct APopulationOpportunityPoint_ClearBodyCompositionInstance_Params
{
};

// Function GearboxFramework.PopulationOpportunityPoint.ApplyPreviewBodyComposition
struct APopulationOpportunityPoint_ApplyPreviewBodyComposition_Params
{
};

// Function GearboxFramework.PopulationOpportunityPoint.GetBodyInfoProvider
struct APopulationOpportunityPoint_GetBodyInfoProvider_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityPoint.ChangeInstanceDataSwitch
struct APopulationOpportunityPoint_ChangeInstanceDataSwitch_Params
{
	struct FName                                       SwitchName;                                               // (Const, Parm)
	unsigned char                                      NewValue;                                                 // (Parm)
};

// Function GearboxFramework.PopulationOpportunityPoint.PostInitBodyComposition
struct APopulationOpportunityPoint_PostInitBodyComposition_Params
{
	struct FName                                       Identifier;                                               // (Const, Parm)
	class UObject*                                     Value;                                                    // (Parm)
	int                                                BodyCompositionIndex;                                     // (Parm)
	unsigned char                                      Mode;                                                     // (Parm)
};

// Function GearboxFramework.PopulationOpportunityPoint.PreRemoveBodyComposition
struct APopulationOpportunityPoint_PreRemoveBodyComposition_Params
{
	struct FName                                       Identifier;                                               // (Const, Parm)
	class UObject*                                     Value;                                                    // (Parm)
	int                                                BodyCompositionIndex;                                     // (Parm)
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialMovementHoldTime
struct APopulationOpportunityPoint_GetInitialMovementHoldTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialDestination
struct APopulationOpportunityPoint_GetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialActionType
struct APopulationOpportunityPoint_GetInitialActionType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityPoint.GetSpawnStyleType
struct APopulationOpportunityPoint_GetSpawnStyleType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationOpportunityPoint.RespawnKilledActors
struct APopulationOpportunityPoint_RespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                        // (Parm)
};

// Function GearboxFramework.PopulationOpportunityPoint.DoSpawning
struct APopulationOpportunityPoint_DoSpawning_Params
{
	class UPopulationMaster*                           PopMaster;                                                // (Parm)
};

// Function GearboxFramework.PopulationPoint.CanSpawnFromFactory
struct APopulationPoint_CanSpawnFromFactory_Params
{
	class UPopulationFactory*                          Factory;                                                  // (Parm)
	int                                                GameStage;                                                // (Parm)
	int                                                AwesomeLevel;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.GetSpawnRotation
struct APopulationPoint_GetSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.GetSpawnLocation
struct APopulationPoint_GetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.ActorSpawned
struct APopulationPoint_ActorSpawned_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm)
};

// Function GearboxFramework.PopulationPoint.GetInitialMovementHoldTime
struct APopulationPoint_GetInitialMovementHoldTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.GetInitialDestination
struct APopulationPoint_GetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.RandomizeInitialDestinations
struct APopulationPoint_RandomizeInitialDestinations_Params
{
};

// Function GearboxFramework.PopulationPoint.GetInitialActionType
struct APopulationPoint_GetInitialActionType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.GetSpawnStyleType
struct APopulationPoint_GetSpawnStyleType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationPoint.OnToggle
struct APopulationPoint_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function GearboxFramework.SeqEvent_EncounterWaveComplete.NotifyWaveComplete
struct USeqEvent_EncounterWaveComplete_NotifyWaveComplete_Params
{
	int                                                nWave;                                                    // (Parm)
};

// Function GearboxFramework.SeqEvent_PopulatedActor.NotifyPopulatedActor
struct USeqEvent_PopulatedActor_NotifyPopulatedActor_Params
{
	class AActor*                                      PopulatedActor;                                           // (Parm)
	class APopulationOpportunity*                      InDestPopulationOpportunity;                              // (Parm)
	class AActor*                                      InSpawnPoint;                                             // (Parm)
	class AWorldInfo*                                  InOriginator;                                             // (Parm)
};

// Function GearboxFramework.SeqEvent_PopulatedPoint.NotifyPopulatedActor
struct USeqEvent_PopulatedPoint_NotifyPopulatedActor_Params
{
	class AActor*                                      PopulatedActor;                                           // (Parm)
	class APopulationOpportunity*                      InDestPopulationOpportunity;                              // (Parm)
	class AActor*                                      InSpawnPoint;                                             // (Parm)
	class AWorldInfo*                                  InOriginator;                                             // (Parm)
};

// Function GearboxFramework.AIDefinition.OnReset
struct UAIDefinition_OnReset_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.AIDefinition.OnHitByVehicle
struct UAIDefinition_OnHitByVehicle_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class AVehicle*                                    Vehicle;                                                  // (Parm)
};

// Function GearboxFramework.AIDefinition.OnRanOver
struct UAIDefinition_OnRanOver_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class AVehicle*                                    Vehicle;                                                  // (Parm)
};

// Function GearboxFramework.AIDefinition.OnTimerEvent
struct UAIDefinition_OnTimerEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	struct FName                                       SpecializedEventName;                                     // (Parm)
};

// Function GearboxFramework.AIDefinition.OnKilledPawn
struct UAIDefinition_OnKilledPawn_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     Killed;                                                   // (Parm)
};

// Function GearboxFramework.AIDefinition.OnLanded
struct UAIDefinition_OnLanded_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.AIDefinition.OnStopFiringWeapon
struct UAIDefinition_OnStopFiringWeapon_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.AIDefinition.OnStartFiringWeapon
struct UAIDefinition_OnStartFiringWeapon_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.AIDefinition.OnTargetLost
struct UAIDefinition_OnTargetLost_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     OldTarget;                                                // (Parm)
};

// Function GearboxFramework.AIDefinition.OnTargetChanged
struct UAIDefinition_OnTargetChanged_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     OldTarget;                                                // (Parm)
	class UObject*                                     NewTarget;                                                // (Parm)
};

// Function GearboxFramework.AIDefinition.OnTargetAcquired
struct UAIDefinition_OnTargetAcquired_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     NewTarget;                                                // (Parm)
};

// Function GearboxFramework.AIDefinition.OnSpawned
struct UAIDefinition_OnSpawned_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.AIDefinition.OnTakeHeal
struct UAIDefinition_OnTakeHeal_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     Instigator;                                               // (Parm)
	float                                              Damage;                                                   // (Parm)
	float                                              ShieldDamage;                                             // (Parm)
	class UObject*                                     DamageSource;                                             // (Parm)
	class UObject*                                     DamageType;                                               // (Parm)
};

// Function GearboxFramework.AIDefinition.OnVehicleTakeDamage
struct UAIDefinition_OnVehicleTakeDamage_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     Instigator;                                               // (Parm)
	class UObject*                                     HitVehicle;                                               // (Parm)
	float                                              Damage;                                                   // (Parm)
	float                                              ShieldDamage;                                             // (Parm)
	class UObject*                                     DamageSource;                                             // (Parm)
	class UObject*                                     DamageType;                                               // (Parm)
};

// Function GearboxFramework.AIDefinition.OnTakeDamage
struct UAIDefinition_OnTakeDamage_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UObject*                                     Instigator;                                               // (Parm)
	float                                              Damage;                                                   // (Parm)
	float                                              ShieldDamage;                                             // (Parm)
	class UObject*                                     DamageSource;                                             // (Parm)
	class UObject*                                     DamageType;                                               // (Parm)
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAffordSecondary
struct UAIDefinition_OnUserCouldNotAffordSecondary_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	unsigned char                                      EventOutput;                                              // (Parm)
	class UObject*                                     Instigator;                                               // (Parm)
	class UObject*                                     UsedComponent;                                            // (Parm)
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAfford
struct UAIDefinition_OnUserCouldNotAfford_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	unsigned char                                      EventOutput;                                              // (Parm)
	class UObject*                                     Instigator;                                               // (Parm)
	class UObject*                                     UsedComponent;                                            // (Parm)
};

// Function GearboxFramework.AIDefinition.OnSecondaryUsed
struct UAIDefinition_OnSecondaryUsed_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	unsigned char                                      EventOutput;                                              // (Parm)
	class UObject*                                     Instigator;                                               // (Parm)
	class UObject*                                     UsedComponent;                                            // (Parm)
};

// Function GearboxFramework.AIDefinition.OnUsed
struct UAIDefinition_OnUsed_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	unsigned char                                      EventOutput;                                              // (Parm)
	class UObject*                                     Instigator;                                               // (Parm)
	class UObject*                                     UsedComponent;                                            // (Parm)
};

// Function GearboxFramework.AIDefinition.SetBehaviorProviderDefinition
struct UAIDefinition_SetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                            // (Parm)
};

// Function GearboxFramework.AIDefinition.GetBehaviorProviderDefinition
struct UAIDefinition_GetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetObjectBehaviorVariable
struct UBehaviorProviderDefinition_SetObjectBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                         // (Parm, OutParm)
	class UObject*                                     Value;                                                    // (Parm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetVectorBehaviorVariable
struct UBehaviorProviderDefinition_SetVectorBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                         // (Parm, OutParm)
	struct FVector                                     Value;                                                    // (Const, Parm, OutParm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetFloatBehaviorVariable
struct UBehaviorProviderDefinition_SetFloatBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                         // (Parm, OutParm)
	float                                              Value;                                                    // (Parm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetIntBehaviorVariable
struct UBehaviorProviderDefinition_SetIntBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                         // (Parm, OutParm)
	int                                                Value;                                                    // (Parm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetBoolBehaviorVariable
struct UBehaviorProviderDefinition_SetBoolBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                         // (Parm, OutParm)
	unsigned long                                      Value : 1;                                                    // (Parm)
};

// Function GearboxFramework.BehaviorKernel.RecentlyRunBehaviorsForSequence
struct UBehaviorKernel_RecentlyRunBehaviorsForSequence_Params
{
	int                                                PID;                                                      // (Parm)
	int                                                ProvidersIndex;                                           // (Parm)
	int                                                SequencesIndex;                                           // (Parm)
	struct FBehaviorExecutionRecord                    ExecutionRecord;                                          // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.AllEventStateForSequence
struct UBehaviorKernel_AllEventStateForSequence_Params
{
	int                                                PID;                                                      // (Parm)
	int                                                ProvidersIndex;                                           // (Parm)
	int                                                SequencesDataIndex;                                       // (Parm)
	struct FBehaviorEventState                         EventState;                                               // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.AllWaitingThreadsForSequence
struct UBehaviorKernel_AllWaitingThreadsForSequence_Params
{
	int                                                PID;                                                      // (Parm)
	int                                                ProvidersIndex;                                           // (Parm)
	int                                                SequencesDataIndex;                                       // (Parm)
	struct FBehaviorThread                             Thread;                                                   // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.AllSequencesForProvider
struct UBehaviorKernel_AllSequencesForProvider_Params
{
	int                                                PID;                                                      // (Parm)
	int                                                ProvidersIndex;                                           // (Parm)
	struct FBehaviorSequenceState                      SequenceState;                                            // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.AllProvidersForProcess
struct UBehaviorKernel_AllProvidersForProcess_Params
{
	int                                                PID;                                                      // (Parm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm, OutParm)
	int                                                ProvidersIndex;                                           // (OptionalParm, Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.AllProcesses
struct UBehaviorKernel_AllProcesses_Params
{
	struct FBehaviorProcess                            Process;                                                  // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.GetVariableStateSummaryForSequence
struct UBehaviorKernel_GetVariableStateSummaryForSequence_Params
{
	int                                                PID;                                                      // (Parm)
	int                                                SequencesDataIndex;                                       // (Parm)
	TArray<struct FString>                             DebugInfo;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.GetChunkedListSummaries
struct UBehaviorKernel_GetChunkedListSummaries_Params
{
	TArray<struct FString>                             DebugInfo;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.GetBehaviorKernelStats
struct UBehaviorKernel_GetBehaviorKernelStats_Params
{
	struct FBehaviorKernelStats                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.IsBehaviorKernelWatchingConsumer
struct UBehaviorKernel_IsBehaviorKernelWatchingConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.IsBehaviorSequenceEnabled
struct UBehaviorKernel_IsBehaviorSequenceEnabled_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm)
	struct FName                                       BehaviorSequenceName;                                     // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorOutputLink
struct UBehaviorKernel_ActivateBehaviorOutputLink_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	int                                                OutputLinkId;                                             // (Parm)
};

// Function GearboxFramework.BehaviorKernel.PublishBoolOutputVariable
struct UBehaviorKernel_PublishBoolOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	unsigned long                                      Output : 1;                                                   // (Parm)
};

// Function GearboxFramework.BehaviorKernel.PublishObjectOutputVariable
struct UBehaviorKernel_PublishObjectOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	class UObject*                                     Output;                                                   // (Parm)
};

// Function GearboxFramework.BehaviorKernel.PublishVectorOutputVariable
struct UBehaviorKernel_PublishVectorOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	struct FVector                                     Output;                                                   // (Const, Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.PublishFloatOutputVariable
struct UBehaviorKernel_PublishFloatOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	float                                              Output;                                                   // (Parm)
};

// Function GearboxFramework.BehaviorKernel.PublishIntOutputVariable
struct UBehaviorKernel_PublishIntOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Const, Parm, OutParm)
	int                                                Output;                                                   // (Parm)
};

// Function GearboxFramework.BehaviorKernel.BeginNondeterministicProviderRegistration
struct UBehaviorKernel_BeginNondeterministicProviderRegistration_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorEvent
struct UBehaviorKernel_ProcessReplicatedBehaviorEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	struct FReplicatedBehaviorEvent                    EventData;                                                // (Const, Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorConsumerState
struct UBehaviorKernel_ProcessReplicatedBehaviorConsumerState_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	struct FReplicatedBehaviorConsumerState            ReplicatedConsumerState;                                  // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorSequenceActivationStatus
struct UBehaviorKernel_ChangeBehaviorSequenceActivationStatus_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm)
	struct FName                                       SequenceName;                                             // (Parm)
	unsigned char                                      ActivationStatusChanage;                                  // (Parm)
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorConsumerSuspensionStatus
struct UBehaviorKernel_ChangeBehaviorConsumerSuspensionStatus_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	unsigned char                                      SuspensionStatusChanage;                                  // (Parm)
};

// Function GearboxFramework.BehaviorKernel.BroadcastBehaviorEventFromScript
struct UBehaviorKernel_BroadcastBehaviorEventFromScript_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	struct FName                                       EventName;                                                // (Parm)
	TArray<class UBehaviorProviderDefinition*>         ProvidersToBroadcast;                                     // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
	int                                                EventOutputToActivate;                                    // (OptionalParm, Parm)
	TArray<struct FBehaviorVariableValue>              Parameters;                                               // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorEventFromScript
struct UBehaviorKernel_ActivateBehaviorEventFromScript_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm)
	struct FName                                       EventName;                                                // (Parm)
	int                                                EventOutputToActivate;                                    // (OptionalParm, Parm)
	TArray<struct FBehaviorVariableValue>              Parameters;                                               // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.RemoveBehaviorProviderFromConsumer
struct UBehaviorKernel_RemoveBehaviorProviderFromConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm)
};

// Function GearboxFramework.BehaviorKernel.IntializeBehaviorProviderForConsumer
struct UBehaviorKernel_IntializeBehaviorProviderForConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // (Parm)
};

// Function GearboxFramework.BehaviorKernel.ForceUnregisterBehaviorConsumer
struct UBehaviorKernel_ForceUnregisterBehaviorConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Parm, OutParm)
};

// Function GearboxFramework.BehaviorKernel.RegisterBehaviorConsumer
struct UBehaviorKernel_RegisterBehaviorConsumer_Params
{
	class UObject*                                     BehaviorConsumer;                                         // (Parm)
	struct FBehaviorConsumerHandle                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.IBehaviorProvider.SetBehaviorProviderDefinition
struct UIBehaviorProvider_SetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                            // (Parm)
};

// Function GearboxFramework.IBehaviorProvider.GetBehaviorProviderDefinition
struct UIBehaviorProvider_GetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.ICustomEvent.RunCustomEvent
struct UICustomEvent_RunCustomEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	class UObject*                                     EventInstigator;                                          // (OptionalParm, Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (OptionalParm, Parm)
	struct FBehaviorParameters                         EventData;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxAnimDefinition.GetAnimLength
struct UGearboxAnimDefinition_GetAnimLength_Params
{
	class USkeletalMeshComponent*                      SMC;                                                      // (Parm, EditInline)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.IsPlayingLocally
struct UGearboxAnimDefinition_IsPlayingLocally_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetSMNode
struct UGearboxAnimDefinition_GetSMNode_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.PlayAnim
struct UGearboxAnimDefinition_PlayAnim_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.AnimFinished
struct UGearboxAnimDefinition_AnimFinished_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                                // (Parm)
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ClientFinished
struct UGearboxAnimDefinition_ClientFinished_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ClientStarted
struct UGearboxAnimDefinition_ClientStarted_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	struct FSpecialMoveData                            SMData;                                                   // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.ServerFinished
struct UGearboxAnimDefinition_ServerFinished_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      bInterrupted : 1;                                             // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ServerStarted
struct UGearboxAnimDefinition_ServerStarted_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.AddAnimSet
struct UGearboxAnimDefinition_AddAnimSet_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetSkeletalMesh
struct UGearboxAnimDefinition_GetSkeletalMesh_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxAnimDefinition.AuthorityCanPlay
struct UGearboxAnimDefinition_AuthorityCanPlay_Params
{
	FScriptInterface                                   SMI;                                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnTimedEvent
struct UGearboxAnimDefinition_OnTimedEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
	struct FName                                       SpecializedEventName;                                     // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStop
struct UGearboxAnimDefinition_OnServerStop_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStart
struct UGearboxAnimDefinition_OnServerStart_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnStop
struct UGearboxAnimDefinition_OnStop_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnStart
struct UGearboxAnimDefinition_OnStart_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // (Const, Parm, OutParm)
};

// Function GearboxFramework.GearboxAnimDefinition.SetBehaviorProviderDefinition
struct UGearboxAnimDefinition_SetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                            // (Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetBehaviorProviderDefinition
struct UGearboxAnimDefinition_GetBehaviorProviderDefinition_Params
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_TriggerDialogEvent.ApplyBehaviorToContext
struct UBehavior_TriggerDialogEvent_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_TriggerDialogEvent.TriggerDialogEvent
struct UBehavior_TriggerDialogEvent_TriggerDialogEvent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxDialogActor.SetDialogNameTag
struct AGearboxDialogActor_SetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       NewName;                                                  // (Parm)
};

// Function GearboxFramework.GearboxDialogActor.GetReplicatedDialogData
struct AGearboxDialogActor_GetReplicatedDialogData_Params
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogActor.SetReplicatedDialogData
struct AGearboxDialogActor_SetReplicatedDialogData_Params
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                                  // (Parm)
	struct FGearboxDialogData                          Data;                                                     // (Parm, OutParm)
};

// Function GearboxFramework.GearboxDialogActor.GetDialogGroups
struct AGearboxDialogActor_GetDialogGroups_Params
{
	TArray<class UGearboxDialogGroup*>                 Groups;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxDialogActor.GetDialogComponent
struct AGearboxDialogActor_GetDialogComponent_Params
{
	class UGearboxDialogComponent*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function GearboxFramework.GearboxDialogActor.GetDialogNameTag
struct AGearboxDialogActor_GetDialogNameTag_Params
{
	class UGearboxDialogNameTag*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogActor.GetActor
struct AGearboxDialogActor_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogActor.CanTalk
struct AGearboxDialogActor_CanTalk_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogActor.ServerDialog_TriggerEvent
struct AGearboxDialogActor_ServerDialog_TriggerEvent_Params
{
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
	class AActor*                                      Other;                                                    // (OptionalParm, Parm)
	class UObject*                                     ObjectParameter;                                          // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxDialogActor.ReplicatedEvent
struct AGearboxDialogActor_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function GearboxFramework.GearboxDialogComponent.IsTalking
struct UGearboxDialogComponent_IsTalking_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogComponent.StopTalking
struct UGearboxDialogComponent_StopTalking_Params
{
	class UGearboxDialogEventTag*                      EventTag;                                                 // (OptionalParm, Parm)
	unsigned long                                      bForceStop : 1;                                               // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxDialogComponent.TalkReplicated
struct UGearboxDialogComponent_TalkReplicated_Params
{
	struct FGearboxDialogReplicatedData                NewDialogData;                                            // (Parm)
};

// Function GearboxFramework.GearboxDialogComponent.Talk
struct UGearboxDialogComponent_Talk_Params
{
	class UGearboxDialogAct_Talk*                      TalkAction;                                               // (Parm)
};

// Function GearboxFramework.GearboxDialogComponent.GetMatchingEvent
struct UGearboxDialogComponent_GetMatchingEvent_Params
{
	class UGearboxDialogEventTag*                      InEventTag;                                               // (Parm)
	class UGearboxDialogEvent*                         OutEvent;                                                 // (Parm, OutParm)
	class UGearboxDialogGroup*                         OutGroup;                                                 // (Parm, OutParm)
	unsigned long                                      bIncludeDisabled : 1;                                         // (OptionalParm, Parm)
	class UGearboxDialogNameTag*                       OtherNameTag;                                             // (OptionalParm, Parm)
	unsigned long                                      bAllowTemplateGroups : 1;                                     // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxDialogComponent.TriggerEvent
struct UGearboxDialogComponent_TriggerEvent_Params
{
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
	class AActor*                                      Other;                                                    // (OptionalParm, Parm)
	class UObject*                                     ObjectParameter;                                          // (OptionalParm, Parm)
	class UGearboxDialogEventData*                     TemplateEventData;                                        // (OptionalParm, Parm)
	class UGearboxDialogEventData*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogComponent.GetDialogInterface
struct UGearboxDialogComponent_GetDialogInterface_Params
{
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogGroup.SimpleEvent
struct UGearboxDialogGroup_SimpleEvent_Params
{
	class AActor*                                      Owner;                                                    // (Parm)
	class UGearboxDialogNameTag*                       NameTag;                                                  // (Parm)
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
};

// Function GearboxFramework.GearboxDialogEventData.IsActive
struct UGearboxDialogEventData_IsActive_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogManager.DrawDialogDebug
struct UGearboxDialogManager_DrawDialogDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              StartY;                                                   // (OptionalParm, Parm)
};

// Function GearboxFramework.GearboxDialogManager.CheckpointRemoveReferencesBeforeDestroy
struct UGearboxDialogManager_CheckpointRemoveReferencesBeforeDestroy_Params
{
};

// Function GearboxFramework.GearboxDialogManager.GetEventTagForEventInfo
struct UGearboxDialogManager_GetEventTagForEventInfo_Params
{
	struct FDialogEventInfo                            EventInfo;                                                // (Parm)
	class UGearboxDialogEventTag*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogManager.TriggerGroupEvent
struct UGearboxDialogManager_TriggerGroupEvent_Params
{
	class UGearboxDialogGroup*                         Group;                                                    // (Parm)
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
	class AActor*                                      Instigator;                                               // (OptionalParm, Parm)
	class AActor*                                      Other;                                                    // (OptionalParm, Parm)
	class UObject*                                     ObjectParameter;                                          // (OptionalParm, Parm)
	class UGearboxDialogEventData*                     TemplateEventData;                                        // (OptionalParm, Parm)
	class UGearboxDialogEventData*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogManager.Cleanup
struct UGearboxDialogManager_Cleanup_Params
{
};

// Function GearboxFramework.GearboxDialogManager.SetGroupEventTag
struct UGearboxDialogManager_SetGroupEventTag_Params
{
	class UGearboxDialogGroup*                         Group;                                                    // (Parm)
	class UGearboxDialogEventTag*                      EventTag;                                                 // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.GetGroupEventTag
struct UGearboxDialogManager_GetGroupEventTag_Params
{
	class UGearboxDialogGroup*                         Group;                                                    // (Parm)
	class UGearboxDialogEventTag*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogManager.SilenceGroup
struct UGearboxDialogManager_SilenceGroup_Params
{
	class UGearboxDialogGroup*                         Group;                                                    // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.AddGroup
struct UGearboxDialogManager_AddGroup_Params
{
	class UGearboxDialogGroup*                         Group;                                                    // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.UnregisterTalker
struct UGearboxDialogManager_UnregisterTalker_Params
{
	class AActor*                                      Talker;                                                   // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.RegisterTalker
struct UGearboxDialogManager_RegisterTalker_Params
{
	class AActor*                                      Talker;                                                   // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.DisableTalker
struct UGearboxDialogManager_DisableTalker_Params
{
	class AActor*                                      Talker;                                                   // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.EnableTalker
struct UGearboxDialogManager_EnableTalker_Params
{
	class AActor*                                      Talker;                                                   // (Parm)
};

// Function GearboxFramework.GearboxDialogManager.GetPriority
struct UGearboxDialogManager_GetPriority_Params
{
	class UGearboxDialogPriority*                      InPriority;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxDialogNode.ActivateOutput
struct UGearboxDialogNode_ActivateOutput_Params
{
	int                                                Link;                                                     // (Parm)
};

// Function GearboxFramework.GearboxDialogAction.Activate
struct UGearboxDialogAction_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogAct_Chance.Activate
struct UGearboxDialogAct_Chance_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogAct_Compare.Activate
struct UGearboxDialogAct_Compare_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogAct_ObjectParameterSwitch.Activate
struct UGearboxDialogAct_ObjectParameterSwitch_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogAct_Talk.Activate
struct UGearboxDialogAct_Talk_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogAct_Talk.TalkFinished
struct UGearboxDialogAct_Talk_TalkFinished_Params
{
	class AActor*                                      InTalker;                                                 // (Parm)
};

// Function GearboxFramework.GearboxDialogAct_Talk.TalkStarted
struct UGearboxDialogAct_Talk_TalkStarted_Params
{
	class AActor*                                      InTalker;                                                 // (Parm)
};

// Function GearboxFramework.GearboxDialogAct_Trigger.ActivateOutput
struct UGearboxDialogAct_Trigger_ActivateOutput_Params
{
	int                                                Link;                                                     // (Parm)
};

// Function GearboxFramework.GearboxDialogAct_Trigger.Activate
struct UGearboxDialogAct_Trigger_Activate_Params
{
};

// Function GearboxFramework.GearboxDialogVariable.ResolveToArgumentValue
struct UGearboxDialogVariable_ResolveToArgumentValue_Params
{
	struct FString                                     Out_ArgumentValue;                                        // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxDialogVariable.GetTalkers
struct UGearboxDialogVariable_GetTalkers_Params
{
	TArray<class AActor*>                              Talkers;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxProcess.GetStepConfiguration
struct UGearboxProcess_GetStepConfiguration_Params
{
	struct FStepConfiguration                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxProcess.GotoStep
struct UGearboxProcess_GotoStep_Params
{
	int                                                Step;                                                     // (Parm)
};

// Function GearboxFramework.GearboxProcess.GotoNextStep
struct UGearboxProcess_GotoNextStep_Params
{
};

// Function GearboxFramework.GearboxProcess.GotoFirstStep
struct UGearboxProcess_GotoFirstStep_Params
{
};

// Function GearboxFramework.GearboxProcess.PerformStep
struct UGearboxProcess_PerformStep_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxProcess.PauseLoop
struct UGearboxProcess_PauseLoop_Params
{
};

// Function GearboxFramework.GearboxProcess.Init
struct UGearboxProcess_Init_Params
{
};

// Function GearboxFramework.GearboxProcess.ContinueLoop
struct UGearboxProcess_ContinueLoop_Params
{
};

// Function GearboxFramework.GearboxProcess.StopLoop
struct UGearboxProcess_StopLoop_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.TriggerSparkInitializedDelegates
struct USparkInitializationProcess_TriggerSparkInitializedDelegates_Params
{
	unsigned char                                      InitializeResult;                                         // (Parm)
};

// Function GearboxFramework.SparkInitializationProcess.ClearSparkInitializedDelegate
struct USparkInitializationProcess_ClearSparkInitializedDelegate_Params
{
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.AddSparkInitializedDelegate
struct USparkInitializationProcess_AddSparkInitializedDelegate_Params
{
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetStepName
struct USparkInitializationProcess_GetStepName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetStepConfiguration
struct USparkInitializationProcess_GetStepConfiguration_Params
{
	struct FStepConfiguration                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsInitialized
struct USparkInitializationProcess_IsInitialized_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsDisabled
struct USparkInitializationProcess_IsDisabled_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsInitializing
struct USparkInitializationProcess_IsInitializing_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.UpdateAgreementsSigning
struct USparkInitializationProcess_UpdateAgreementsSigning_Params
{
	class UGearboxAccountData*                         GbxAccountData;                                           // (Parm)
	struct FString                                     NeedsSignAgreements;                                      // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.HandleVerificationReceived
struct USparkInitializationProcess_HandleVerificationReceived_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.VerifyAuthentication
struct USparkInitializationProcess_VerifyAuthentication_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.AuthenticateTicketStringWithDelegate
struct USparkInitializationProcess_AuthenticateTicketStringWithDelegate_Params
{
	struct FString                                     ticket;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                             // (Parm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.HandleAuthenticationReceived
struct USparkInitializationProcess_HandleAuthenticationReceived_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.AuthenticateAccount
struct USparkInitializationProcess_AuthenticateAccount_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.GetConfigQuery
struct USparkInitializationProcess_GetConfigQuery_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.CompleteInitialization
struct USparkInitializationProcess_CompleteInitialization_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.HttpInit
struct USparkInitializationProcess_HttpInit_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.CheckForTMS
struct USparkInitializationProcess_CheckForTMS_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.PerformStep
struct USparkInitializationProcess_PerformStep_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.StartProcess
struct USparkInitializationProcess_StartProcess_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.InitWithController
struct USparkInitializationProcess_InitWithController_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      bNewPrimary : 1;                                              // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
};

// Function GearboxFramework.LeviathanService.GetLeviathanServiceConfiguration
struct ULeviathanService_GetLeviathanServiceConfiguration_Params
{
	int                                                ControllerNumber;                                         // (Parm)
	class USparkServiceConfiguration*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.LeviathanService.OnSparkInitialized
struct ULeviathanService_OnSparkInitialized_Params
{
	unsigned char                                      InitializedResult;                                        // (Parm)
};

// Function GearboxFramework.LeviathanService.LoadServiceConfigurationForPlayer
struct ULeviathanService_LoadServiceConfigurationForPlayer_Params
{
	int                                                SplitscreenIndex;                                         // (Parm)
};

// Function GearboxFramework.LeviathanService.GetLeviathanService
struct ULeviathanService_GetLeviathanService_Params
{
	class ULeviathanService*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.RemoveScriptCallback
struct USparkInterfaceImpl_RemoveScriptCallback_Params
{
	int                                                HttpRequestId;                                            // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetNewsService
struct USparkInterfaceImpl_GetNewsService_Params
{
	class USparkNews*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageServiceConfiguration
struct USparkInterfaceImpl_GetTitleStorageServiceConfiguration_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageUrl
struct USparkInterfaceImpl_GetTitleStorageUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkInitialized
struct USparkInterfaceImpl_OnSparkInitialized_Params
{
	unsigned char                                      InitializedResult;                                        // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.IncreaseInteractionTries
struct USparkInterfaceImpl_IncreaseInteractionTries_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionTries
struct USparkInterfaceImpl_GetInteractionTries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionGraceTries
struct USparkInterfaceImpl_GetInteractionGraceTries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionPunishmentMinWaitSeconds
struct USparkInterfaceImpl_GetInteractionPunishmentMinWaitSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionMinWaitSeconds
struct USparkInterfaceImpl_GetInteractionMinWaitSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.ConvertUtcTimeToLocalTime
struct USparkInterfaceImpl_ConvertUtcTimeToLocalTime_Params
{
	struct FString                                     UtcTime;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.ShouldUpdateEmergencyMessage
struct USparkInterfaceImpl_ShouldUpdateEmergencyMessage_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetEmergencyMessage
struct USparkInterfaceImpl_GetEmergencyMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.SetEmergencyMessage
struct USparkInterfaceImpl_SetEmergencyMessage_Params
{
	struct FString                                     NewMessage;                                               // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.IsTmsComplete
struct USparkInterfaceImpl_IsTmsComplete_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SetTmsComplete
struct USparkInterfaceImpl_SetTmsComplete_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitializationFromScript
struct USparkInterfaceImpl_RestartSparkInitializationFromScript_Params
{
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                            // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitialization
struct USparkInterfaceImpl_RestartSparkInitialization_Params
{
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.StartSparkInitialization
struct USparkInterfaceImpl_StartSparkInitialization_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                            // (Parm, NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.ResetInitializationStatus
struct USparkInterfaceImpl_ResetInitializationStatus_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.ResetSecondaryInitializationStatus
struct USparkInterfaceImpl_ResetSecondaryInitializationStatus_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.StartSecondaryInitialization
struct USparkInterfaceImpl_StartSecondaryInitialization_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             SparkInitializedDelegate;                                 // (Parm, NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetSparkInitialization
struct USparkInterfaceImpl_GetSparkInitialization_Params
{
	class USparkInitializationProcess*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SignInGearboxAccount
struct USparkInterfaceImpl_SignInGearboxAccount_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetGearboxAccountData
struct USparkInterfaceImpl_GetGearboxAccountData_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	class UGearboxAccountData*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SignOutGearboxAccount
struct USparkInterfaceImpl_SignOutGearboxAccount_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.ValidPlayerIndex
struct USparkInterfaceImpl_ValidPlayerIndex_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlayerIndex
struct USparkInterfaceImpl_GetPlayerIndex_Params
{
	int                                                ControllerId;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.ClearGearboxAccountData
struct USparkInterfaceImpl_ClearGearboxAccountData_Params
{
	unsigned long                                      IncludePrimaryPlayer : 1;                                     // (Parm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountSignedIn
struct USparkInterfaceImpl_IsGearboxAccountSignedIn_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountAuthenticated
struct USparkInterfaceImpl_IsGearboxAccountAuthenticated_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetGameName
struct USparkInterfaceImpl_GetGameName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetHardwareName
struct USparkInterfaceImpl_GetHardwareName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformName
struct USparkInterfaceImpl_GetPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformTicket
struct USparkInterfaceImpl_GetPlatformTicket_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      bPrimary : 1;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.ClearSparkConfigReceivedDelegate
struct USparkInterfaceImpl_ClearSparkConfigReceivedDelegate_Params
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.AddSparkConfigReceivedDelegate
struct USparkInterfaceImpl_AddSparkConfigReceivedDelegate_Params
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromController
struct USparkInterfaceImpl_GetPlatformLoginNameFromController_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromSplitscreenIndex
struct USparkInterfaceImpl_GetPlatformLoginNameFromSplitscreenIndex_Params
{
	int                                                SplitscreenIndex;                                         // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginName
struct USparkInterfaceImpl_GetPlatformLoginName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetLoginStatus
struct USparkInterfaceImpl_GetLoginStatus_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsShiftEnabled
struct USparkInterfaceImpl_IsShiftEnabled_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsSparkEnabled
struct USparkInterfaceImpl_IsSparkEnabled_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.WithShift
struct USparkInterfaceImpl_WithShift_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.WithSpark
struct USparkInterfaceImpl_WithSpark_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequest
struct USparkInterfaceImpl_IssueSparkStringRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                                    // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     RequestData;                                              // (Const, Parm, NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkRequest
struct USparkInterfaceImpl_IssueSparkRequest_Params
{
	struct FHttpParameters                             HttpParameters;                                           // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	TArray<unsigned char>                              RequestData;                                              // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.AlternativeXboxlivePlatformId
struct USparkInterfaceImpl_AlternativeXboxlivePlatformId_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkEmergencyMessageUpdated
struct USparkInterfaceImpl_OnSparkEmergencyMessageUpdated_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkConfigReceived
struct USparkInterfaceImpl_OnSparkConfigReceived_Params
{
	TArray<unsigned char>                              ConfigArray;                                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkRequestComplete
struct USparkInterfaceImpl_OnSparkRequestComplete_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.GetBoolParameter
struct USparkServiceConfiguration_GetBoolParameter_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	unsigned long                                      Default : 1;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.GetFloatParameter
struct USparkServiceConfiguration_GetFloatParameter_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	float                                              DefaultValue;                                             // (Parm)
	float                                              MinimumValue;                                             // (Parm)
	float                                              MaximumValue;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.GetIntParameter
struct USparkServiceConfiguration_GetIntParameter_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	int                                                DefaultValue;                                             // (Parm)
	int                                                MinimumValue;                                             // (Parm)
	int                                                MaximumValue;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.GetStringParameter
struct USparkServiceConfiguration_GetStringParameter_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Default;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.GetParameter
struct USparkServiceConfiguration_GetParameter_Params
{
	struct FString                                     KeyNameToSearchFor;                                       // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.LoadService
struct USparkServiceConfiguration_LoadService_Params
{
	struct FServiceResult                              Service;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.LoadOverrides
struct USparkServiceConfiguration_LoadOverrides_Params
{
};

// Function GearboxFramework.Action_FaceThreat.StopSequence
struct UAction_FaceThreat_StopSequence_Params
{
};

// Function GearboxFramework.ActorAttributeContextResolver.GetAttributeContext
struct UActorAttributeContextResolver_GetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                                // (Parm)
	class UObject*                                     AttributeContextSource;                                   // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.AIComponentAttributeContextResolver.GetAttributeContext
struct UAIComponentAttributeContextResolver_GetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                                // (Parm)
	class UObject*                                     AttributeContextSource;                                   // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.Behavior_AIHold.ApplyBehaviorToContext
struct UBehavior_AIHold_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_AIPriority.ApplyBehaviorToContext
struct UBehavior_AIPriority_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_AITargeting.ApplyBehaviorToContext
struct UBehavior_AITargeting_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState.ApplyBehaviorToContext
struct UBehavior_ChangeAnyBehaviorSequenceState_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState.ApplyBehaviorToContext
struct UBehavior_ChangeLocalBehaviorSequenceState_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_CompareBool.ApplyBehaviorToContext
struct UBehavior_CompareBool_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_CompareValues.ApplyBehaviorToContext
struct UBehavior_CompareValues_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_CustomEvent.ApplyBehaviorToContext
struct UBehavior_CustomEvent_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_Delay.ApplyBehaviorToContext
struct UBehavior_Delay_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_Gate.ApplyBehaviorToContext
struct UBehavior_Gate_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetFloatParam.PublishBehaviorOutput
struct UBehavior_GetFloatParam_PublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	float                                              Value;                                                    // (Parm)
};

// Function GearboxFramework.Behavior_GetFloatParam.ApplyBehaviorToContext
struct UBehavior_GetFloatParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetObjectParam.PublishBehaviorOutput
struct UBehavior_GetObjectParam_PublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     Value;                                                    // (Parm)
};

// Function GearboxFramework.Behavior_GetObjectParam.ApplyBehaviorToContext
struct UBehavior_GetObjectParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetVectorParam.PublishBehaviorOutput
struct UBehavior_GetVectorParam_PublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	float                                              R;                                                        // (Parm)
	float                                              G;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              A;                                                        // (Parm)
};

// Function GearboxFramework.Behavior_GetVectorParam.ApplyBehaviorToContext
struct UBehavior_GetVectorParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.PublishBehaviorOutput
struct UBehavior_InterpolateFloatOverTime_PublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	float                                              Result;                                                   // (Parm)
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.ApplyBehaviorToContext
struct UBehavior_InterpolateFloatOverTime_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_Metronome.ApplyBehaviorToContext
struct UBehavior_Metronome_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_ModifyTimer.PublishBehaviorOutput
struct UBehavior_ModifyTimer_PublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	float                                              TimeRemaining;                                            // (Parm)
};

// Function GearboxFramework.Behavior_ModifyTimer.ApplyBehaviorToContext
struct UBehavior_ModifyTimer_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetFloatParam.ApplyBehaviorToContext
struct UBehavior_SetFloatParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetObjectParam.ApplyBehaviorToContext
struct UBehavior_SetObjectParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetVectorParam.ApplyBehaviorToContext
struct UBehavior_SetVectorParam_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SpecialMove.PlaySpecialMove
struct UBehavior_SpecialMove_PlaySpecialMove_Params
{
	class USpecialMoveComponent*                       SMC;                                                      // (Parm, EditInline)
};

// Function GearboxFramework.Behavior_SpecialMove.TriggerOutput
struct UBehavior_SpecialMove_TriggerOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
};

// Function GearboxFramework.Behavior_SpecialMove.ApplyBehaviorToContext
struct UBehavior_SpecialMove_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_SpecialMoveStop.ApplyBehaviorToContext
struct UBehavior_SpecialMoveStop_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_StartAkAmbientSound.ApplyBehaviorToContext
struct UBehavior_StartAkAmbientSound_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_StopAkAmbientSound.ApplyBehaviorToContext
struct UBehavior_StopAkAmbientSound_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_StopDialog.ApplyBehaviorToContext
struct UBehavior_StopDialog_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.Behavior_ToggleDialog.ApplyBehaviorToContext
struct UBehavior_ToggleDialog_ApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm)
	struct FBehaviorKernelInfo                         KernelInfo;                                               // (Parm, OutParm)
	class UObject*                                     SelfObject;                                               // (Parm)
	class UObject*                                     MyInstigatorObject;                                       // (Parm)
	class UObject*                                     OtherEventParticipantObject;                              // (Parm)
	struct FBehaviorParameters                         EventData;                                                // (Parm, NeedCtorLink)
};

// Function GearboxFramework.CameraModifierCrossfade.DoCrossfade
struct UCameraModifierCrossfade_DoCrossfade_Params
{
};

// Function GearboxFramework.CameraModifierCrossfade.UpdateAllLerps
struct UCameraModifierCrossfade_UpdateAllLerps_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function GearboxFramework.CameraModifierCrossfade.ModifyCamera
struct UCameraModifierCrossfade_ModifyCamera_Params
{
	class ACamera*                                     Camera;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.CameraModifierCrossfade.ProcessCameraBlend
struct UCameraModifierCrossfade_ProcessCameraBlend_Params
{
	class ACamera*                                     Camera;                                                   // (Parm)
	float                                              AdjustedDeltaTime;                                        // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function GearboxFramework.CameraModifierCrossfade.InitializeSubModifiers
struct UCameraModifierCrossfade_InitializeSubModifiers_Params
{
};

// Function GearboxFramework.CameraModifierCrossfade.EnableModifier
struct UCameraModifierCrossfade_EnableModifier_Params
{
};

// Function GearboxFramework.CameraModifierLookAt.ExecuteFadeIfNeeded
struct UCameraModifierLookAt_ExecuteFadeIfNeeded_Params
{
	class AGearboxPlayerController*                    PC;                                                       // (Const, Parm, OutParm)
};

// Function GearboxFramework.CameraModifierLookAt.GetDesiredLocation
struct UCameraModifierLookAt_GetDesiredLocation_Params
{
	struct FTPOV                                       OutPOV;                                                   // (Const, Parm, OutParm)
	class AGearboxPlayerController*                    PC;                                                       // (Const, Parm, OutParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.CameraModifierLookAt.ModifyCamera
struct UCameraModifierLookAt_ModifyCamera_Params
{
	class ACamera*                                     Camera;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.CameraModifierLookAt.GetBoneLocation
struct UCameraModifierLookAt_GetBoneLocation_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     BoneLoc;                                                  // (OptionalParm, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtBone
struct UCameraModifierLookAt_SetLookAtBone_Params
{
	struct FName                                       NewBone;                                                  // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtTarget
struct UCameraModifierLookAt_SetLookAtTarget_Params
{
	class AActor*                                      newLookAtTarget;                                          // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetTargetLocation
struct UCameraModifierLookAt_SetTargetLocation_Params
{
	struct FVector                                     NewTargetLocation;                                        // (Parm)
	float                                              newTransitionTimeIn;                                      // (Parm)
	float                                              newTransitionTimeOut;                                     // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetDuration
struct UCameraModifierLookAt_SetDuration_Params
{
	float                                              NewDuration;                                              // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetTransitionTimes
struct UCameraModifierLookAt_SetTransitionTimes_Params
{
	float                                              NewInTime;                                                // (Parm)
	float                                              NewOutTime;                                               // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetZoomFOV
struct UCameraModifierLookAt_SetZoomFOV_Params
{
	float                                              newZoom;                                                  // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetThirdPersonDistances
struct UCameraModifierLookAt_SetThirdPersonDistances_Params
{
	float                                              NewX;                                                     // (Parm)
	float                                              NewY;                                                     // (Parm)
	float                                              NewZ;                                                     // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtMode
struct UCameraModifierLookAt_SetLookAtMode_Params
{
	unsigned char                                      NewMode;                                                  // (Parm)
};

// Function GearboxFramework.CameraModifierLookAt.DisableModifier
struct UCameraModifierLookAt_DisableModifier_Params
{
	unsigned long                                      bImmediate : 1;                                               // (OptionalParm, Parm)
};

// Function GearboxFramework.CameraModifierLookAt.EnableModifier
struct UCameraModifierLookAt_EnableModifier_Params
{
};

// Function GearboxFramework.SparkNews.Internal_GetService
struct USparkNews_Internal_GetService_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	FScriptInterface                                   Spark;                                                    // (Parm)
	class USparkServiceConfiguration*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkNews.CallAndClearRetrievedDelegate
struct USparkNews_CallAndClearRetrievedDelegate_Params
{
	unsigned char                                      RetrievealResult;                                         // (Parm)
};

// Function GearboxFramework.SparkNews.ParseArticles
struct USparkNews_ParseArticles_Params
{
	class UJsonObject*                                 NewsArticlesJSONObject;                                   // (Parm)
};

// Function GearboxFramework.SparkNews.HandleNewsRetrievalResponse
struct USparkNews_HandleNewsRetrievalResponse_Params
{
	struct FSparkResult                                Result;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.SparkNews.GetArticle
struct USparkNews_GetArticle_Params
{
	int                                                Idx;                                                      // (Parm)
	struct FString                                     Header;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Body;                                                     // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkNews.GetArticleCount
struct USparkNews_GetArticleCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.SparkNews.RetrieveNews
struct USparkNews_RetrieveNews_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	struct FScriptDelegate                             RetrievalDelegate;                                        // (Parm, NeedCtorLink)
};

// Function GearboxFramework.SparkNews.OnNewsRetrieved
struct USparkNews_OnNewsRetrieved_Params
{
	unsigned char                                      RetrievealResult;                                         // (Parm)
	class USparkNews*                                  newsObj;                                                  // (Parm)
};

// Function GearboxFramework.GearboxEULAGFxMovie.HandleInputKey
struct UGearboxEULAGFxMovie_HandleInputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ukey;                                                     // (Parm)
	unsigned char                                      uevent;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEULAGFxMovie.ShowEULA
struct UGearboxEULAGFxMovie_ShowEULA_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.OnDeclineButtonClick
struct UGearboxEULAGFxMovie_OnDeclineButtonClick_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.OnAcceptButtonClick
struct UGearboxEULAGFxMovie_OnAcceptButtonClick_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.FireCompleteDelegate
struct UGearboxEULAGFxMovie_FireCompleteDelegate_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.extClosed
struct UGearboxEULAGFxMovie_extClosed_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.extOnDeclineButtonClick
struct UGearboxEULAGFxMovie_extOnDeclineButtonClick_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.extOnAcceptButtonClick
struct UGearboxEULAGFxMovie_extOnAcceptButtonClick_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.extOnLoad
struct UGearboxEULAGFxMovie_extOnLoad_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxEULAGFxMovie.OnClose
struct UGearboxEULAGFxMovie_OnClose_Params
{
};

// Function GearboxFramework.GearboxEULAGFxMovie.Start
struct UGearboxEULAGFxMovie_Start_Params
{
	unsigned long                                      StartPaused : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.GearboxEULAGFxMovie.OnEULAInteractionComplete
struct UGearboxEULAGFxMovie_OnEULAInteractionComplete_Params
{
	TArray<struct FEULAData>                           EULAState;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function GearboxFramework.GearboxEULAGFxObject.NavigateDown
struct UGearboxEULAGFxObject_NavigateDown_Params
{
};

// Function GearboxFramework.GearboxEULAGFxObject.NavigateUp
struct UGearboxEULAGFxObject_NavigateUp_Params
{
};

// Function GearboxFramework.GearboxEULAGFxObject.SetTooltipText
struct UGearboxEULAGFxObject_SetTooltipText_Params
{
	struct FString                                     AcceptText;                                               // (Parm, NeedCtorLink)
	struct FString                                     DeclineText;                                              // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxEULAGFxObject.SetEULAText
struct UGearboxEULAGFxObject_SetEULAText_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function GearboxFramework.GearboxEULAGFxObject.Init
struct UGearboxEULAGFxObject_Init_Params
{
};

// Function GearboxFramework.GFxMovieDrawStyleInstanceData.RequiresClientInstance
struct UGFxMovieDrawStyleInstanceData_RequiresClientInstance_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GearboxFramework.PopulationMasterAttributeContextResolver.GetAttributeContext
struct UPopulationMasterAttributeContextResolver_GetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                                // (Parm)
	class UObject*                                     AttributeContextSource;                                   // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
