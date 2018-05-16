#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GearboxFramework_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function GearboxFramework.AIDebugCamera.ToggleAITree
// [0x00020002] 
struct UAIDebugCamera_execToggleAITree_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleTargetViewCones
// [0x00020002] 
struct UAIDebugCamera_execToggleTargetViewCones_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleAwarenessZones
// [0x00020002] 
struct UAIDebugCamera_execToggleAwarenessZones_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleRuleEngineLoadBalance
// [0x00020002] 
struct UAIDebugCamera_execToggleRuleEngineLoadBalance_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleCombat
// [0x00020002] 
struct UAIDebugCamera_execToggleCombat_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleShowTimers
// [0x00020002] 
struct UAIDebugCamera_execToggleShowTimers_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleResources
// [0x00020002] 
struct UAIDebugCamera_execToggleResources_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleInactiveRules
// [0x00020002] 
struct UAIDebugCamera_execToggleInactiveRules_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleRules
// [0x00020002] 
struct UAIDebugCamera_execToggleRules_Parms
{
};

// Function GearboxFramework.AIDebugCamera.ToggleFlags
// [0x00020002] 
struct UAIDebugCamera_execToggleFlags_Parms
{
};

// Function GearboxFramework.AIDebugCamera.GetTracker
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execGetTracker_Parms
{
	class UAITracker*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIDebugCamera.SetMind
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetMind_Parms
{
	class AGearboxMind*                                NewMind;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDebugCamera.InitDummies
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execInitDummies_Parms
{
	int                                                NewNumDummies;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDebugCamera.WantsToDoCameraInspection
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execWantsToDoCameraInspection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIDebugCamera.SetCurrentInspectedTarget
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetCurrentInspectedTarget_Parms
{
	struct FName                                       NewName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDebugCamera.CompareRuleSetAndAdjustRuleIdx
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execCompareRuleSetAndAdjustRuleIdx_Parms
{
	class USnapshotRecord*                             OldSnapshot;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USnapshotRecord*                             NewSnapshot;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDebugCamera.SetRuleEngine
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetRuleEngine_Parms
{
	class URuleEngine*                                 NewRuleEngine;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDebugCamera.SetPrevSnapshotRule
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetPrevSnapshotRule_Parms
{
};

// Function GearboxFramework.AIDebugCamera.SetNextSnapshotRule
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetNextSnapshotRule_Parms
{
};

// Function GearboxFramework.AIDebugCamera.SetPrevSnapshot
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetPrevSnapshot_Parms
{
};

// Function GearboxFramework.AIDebugCamera.SetNextSnapshot
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execSetNextSnapshot_Parms
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGameUnPaused
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execNotifyGameUnPaused_Parms
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGamePaused
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execNotifyGamePaused_Parms
{
};

// Function GearboxFramework.AIDebugCamera.Display
// [0x00020400] ( FUNC_Native )
struct UAIDebugCamera_execDisplay_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.IsPlaying
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execIsPlaying_Parms
{
	class UGearboxAnimDefinition*                      AnimSMD;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.SetRootMotion
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execSetRootMotion_Parms
{
	class URootMotionDefinition*                       RMDef;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimDef
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execGetCurrentAnimDef_Parms
{
	class UGearboxAnimDefinition*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimName
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execGetCurrentAnimName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Finish
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execFinish_Parms
{
	unsigned long                                      bInterrupted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Stop
// [0x00020400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execStop_Parms
{
	unsigned long                                      bInterrupted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.PlayData
// [0x00424400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execPlayData_Parms
{
	struct FSpecialMoveData                            SMData;                                           		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FName                                       AnimNameOverride;                                 		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInOverride;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutOverride;                                 		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Play
// [0x00024400] ( FUNC_Native )
struct UAnimNodeSpecialMoveBlend_execPlay_Parms
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       AnimNameOverride;                                 		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInOverride;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutOverride;                                 		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AttributeExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UAttributeExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Behavior_CallFunction.CallFunction
// [0x00020500] ( FUNC_Native )
struct UBehavior_CallFunction_execCallFunction_Parms
{
	class AActor*                                      inActor;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InFunctionName;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_CallFunction.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_CallFunction_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_ChangeRemoteBehaviorSequenceState_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_ChangeTimer.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_ChangeTimer_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UITimerBehavior*                          ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorTimerState                      TimerState;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_IsSequenceEnabled.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_IsSequenceEnabled_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_PostAkEvent.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_PostAkEvent_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UISoundBehavior*                          ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UIWorldBody*                              WorldBodyInterface;                               		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.BehaviorHelpers.RunAllBehaviorsForEvent
// [0x00026501] ( FUNC_Final | FUNC_Native )
struct UBehaviorHelpers_execRunAllBehaviorsForEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SetStrategy;                                      		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             Strategy;                                         		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      EnumValue;                                        		// 0x0038 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.BehaviorHelpers.BehaviorStrategy
// [0x00524000] 
struct UBehaviorHelpers_execBehaviorStrategy_Parms
{
	struct FPointer                                    BehaviorSet;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UBehaviorBase* >                     BehaviorList;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      EnumValue;                                        		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.BehaviorHelpers.BehaviorSetStrategy
// [0x00520000] 
struct UBehaviorHelpers_execBehaviorSetStrategy_Parms
{
	TArray< struct FPointer >                          BehaviorSetList;                                  		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.BehaviorHelpers.ResolveBehaviorProviderDefinitionReference
// [0x00422400] ( FUNC_Native )
struct UBehaviorHelpers_execResolveBehaviorProviderDefinitionReference_Parms
{
	class UBehaviorBase*                               SourceBehavior;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     ProviderReference;                                		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FNameBasedObjectPath                        PathName;                                         		// 0x0008 (0x0034) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorHelpers.IsBehaviorsV2
// [0x00422400] ( FUNC_Native )
struct UBehaviorHelpers_execIsBehaviorsV2_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorHelpers.ShouldContinueExecution
// [0x00422002] 
struct UBehaviorHelpers_execShouldContinueExecution_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              TimeBetweenSteps;                                 		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumSteps;                                         		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MaxSteps;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorHelpers.GetNextFireLocationSocket
// [0x00422002] 
struct UBehaviorHelpers_execGetNextFireLocationSocket_Parms
{
	unsigned char                                      FireSocketSelection;                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FName >                             FireLocationSocketNames;                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FName >                             FireLocationSocketsRemaining;                     		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FName                                       ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    retVal;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.BehaviorHelpers.GetRotationFromAttachmentLocationData
// [0x00422400] ( FUNC_Native )
struct UBehaviorHelpers_execGetRotationFromAttachmentLocationData_Parms
{
	struct FAttachmentLocationData                     AttachmentLocation;                               		// 0x0000 (0x001C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FRotator                                    AttachmentLocationRotation;                       		// 0x001C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorHelpers.GetRelativeDirection
// [0x00026400] ( FUNC_Native )
struct UBehaviorHelpers_execGetRelativeDirection_Parms
{
	struct FRelativeDirectionData                      DesiredDirection;                                 		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	class UIWorldBody*                                 Source;                                           		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DefaultDirection;                                 		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SpawnSocketName;                                  		// 0x0034 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x003C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.CompoundExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UCompoundExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsOfClassFromLevel
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execRemoveAndDeleteActorsOfClassFromLevel_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class ULevel*                                      Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXActorList.RemoveActorsOfClassFromLevel
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execRemoveActorsOfClassFromLevel_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class ULevel*                                      Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsFromLevel
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execRemoveAndDeleteActorsFromLevel_Parms
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXActorList.RemoveActorsFromLevel
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execRemoveActorsFromLevel_Parms
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXActorList.FindNextActorByLevel
// [0x00420400] ( FUNC_Native )
struct UGBXActorList_execFindNextActorByLevel_Parms
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXActorList.FindFirstActorByLevel
// [0x00420400] ( FUNC_Native )
struct UGBXActorList_execFindFirstActorByLevel_Parms
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXActorList.FindNextActorByClass
// [0x00420400] ( FUNC_Native )
struct UGBXActorList_execFindNextActorByClass_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXActorList.FindFirstActorByClass
// [0x00420400] ( FUNC_Native )
struct UGBXActorList_execFindFirstActorByClass_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXActorList.RemoveActor
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execRemoveActor_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXActorList.AddActor
// [0x00020400] ( FUNC_Native )
struct UGBXActorList_execAddActor_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULevel*                                      Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXObjectList.RemoveObjectsOfClass
// [0x00020400] ( FUNC_Native )
struct UGBXObjectList_execRemoveObjectsOfClass_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function GearboxFramework.GBXObjectList.FindNextObjectByClass
// [0x00420400] ( FUNC_Native )
struct UGBXObjectList_execFindNextObjectByClass_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXObjectList.FindFirstObjectByClass
// [0x00420400] ( FUNC_Native )
struct UGBXObjectList_execFindFirstObjectByClass_Parms
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GBXObjectList.RemoveObject
// [0x00020400] ( FUNC_Native )
struct UGBXObjectList_execRemoveObject_Parms
{
	class UObject*                                     TheObject;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GBXObjectList.AddObject
// [0x00020400] ( FUNC_Native )
struct UGBXObjectList_execAddObject_Parms
{
	class UObject*                                     TheObject;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAIController.ForceMoveToActor
// [0x00020002] 
struct AGearboxAIController_execForceMoveToActor_Parms
{
	class AActor*                                      destActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAIMoveNode.DoesPatrolPathExistToPoint
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execDoesPatrolPathExistToPoint_Parms
{
	class AGearboxAIMoveNode*                          PatrolPoint;                                      		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAIMoveNode.GetAllLinkedNodes
// [0x00420400] ( FUNC_Native )
struct AGearboxAIMoveNode_execGetAllLinkedNodes_Parms
{
	TArray< class AGearboxAIMoveNode* >                OutNodes;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNodeClosestToPoint
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execGetNextMoveNodeClosestToPoint_Parms
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNode
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execGetNextMoveNode_Parms
{
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAIMoveNode.RemoveNode
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execRemoveNode_Parms
{
	class AGearboxAIMoveNode*                          OldNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAIMoveNode.AddNode
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execAddNode_Parms
{
	class AGearboxAIMoveNode*                          NewNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAIMoveNode.ClearLinks
// [0x00020400] ( FUNC_Native )
struct AGearboxAIMoveNode_execClearLinks_Parms
{
};

// Function GearboxFramework.GearboxAIMoveNode.OnToggle
// [0x00020102] 
struct AGearboxAIMoveNode_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraBasic.FinishCameraLookAt
// [0x00020800] ( FUNC_Event )
struct AGearboxCameraBasic_eventFinishCameraLookAt_Parms
{
};

// Function GearboxFramework.GearboxCameraBasic.EnableThirdPersonLookAt
// [0x00020800] ( FUNC_Event )
struct AGearboxCameraBasic_eventEnableThirdPersonLookAt_Parms
{
	float                                              LookAtXOffset;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LookAtYOffset;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LookAtZOffset;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LookAtMode;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraBasic.BeginCameraLookAt
// [0x00020100] 
struct AGearboxCameraBasic_execBeginCameraLookAt_Parms
{
	class AActor*                                      LookAtTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       LookAtBone;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TargetLocation;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Zoom;                                             		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   FOV;                                              		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TransitionTimeIn;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TransitionTimeOut;                                		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraBasic.CalcSimpleThirdPersonView
// [0x00C20102] 
struct AGearboxCameraBasic_execCalcSimpleThirdPersonView_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Loc;                                              		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0060 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxCameraBasic.CalcBaseView
// [0x00420102] 
struct AGearboxCameraBasic_execCalcBaseView_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraBasic.UpdateViewTarget
// [0x00C20102] 
struct AGearboxCameraBasic_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTPOV                                    OrigPOV;                                          		// 0x0034 (0x001C) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxCameraModifier.LerpFOV
// [0x00080002] 
struct UGearboxCameraModifier_execLerpFOV_Parms
{
	float                                              Src;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Dest;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              T;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.LerpRotation
// [0x00080002] 
struct UGearboxCameraModifier_execLerpRotation_Parms
{
	struct FRotator                                    Src;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Dest;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              T;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.LerpLocation
// [0x00080002] 
struct UGearboxCameraModifier_execLerpLocation_Parms
{
	struct FVector                                     Src;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Dest;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              T;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.UpdateAllLerps
// [0x00C80002] 
struct UGearboxCameraModifier_execUpdateAllLerps_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FTPOV                                    PrelimPOV;                                        		// 0x0020 (0x001C) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxCameraModifier.UpdateMasterFadePercentage
// [0x00040003] ( FUNC_Final )
struct UGearboxCameraModifier_execUpdateMasterFadePercentage_Parms
{
	float                                              AdjustedDeltaTime;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraModifier.IsFadingDownwards
// [0x00080002] 
struct UGearboxCameraModifier_execIsFadingDownwards_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.IsFadingUpwards
// [0x00080002] 
struct UGearboxCameraModifier_execIsFadingUpwards_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.IsFadeInProgress
// [0x00080002] 
struct UGearboxCameraModifier_execIsFadeInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCameraModifier.StartFadeOut
// [0x00084002] 
struct UGearboxCameraModifier_execStartFadeOut_Parms
{
	float                                              NewTimeSpan;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      NewDisableWhenFadedOut : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      NewFadeMode;                                      		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxCameraModifier.StartFadeIn
// [0x00084002] 
struct UGearboxCameraModifier_execStartFadeIn_Parms
{
	float                                              NewTimeSpan;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewFadeMode;                                      		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxCameraModifier.SetDesiredCamera
// [0x00080102] 
struct UGearboxCameraModifier_execSetDesiredCamera_Parms
{
	struct FVector                                     DesiredLoc;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    DesiredRot;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DesiredFOV;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraModifier.SetGBXCameraOwner
// [0x00080102] 
struct UGearboxCameraModifier_execSetGBXCameraOwner_Parms
{
	class AGearboxCameraBasic*                         InCamera;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCameraModifier.AddCameraModifier
// [0x00020102] 
struct UGearboxCameraModifier_execAddCameraModifier_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogInterface.ServerDialog_TriggerEvent
// [0x00224840] ( FUNC_Event )
struct UGearboxDialogInterface_eventServerDialog_TriggerEvent_Parms
{
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     ObjectParameter;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxDialogInterface.SetDialogNameTag
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogInterface_execSetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       NewName;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogInterface.GetReplicatedDialogData
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogInterface_execGetReplicatedDialogData_Parms
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogInterface.SetReplicatedDialogData
// [0x00420400] ( FUNC_Native )
struct UGearboxDialogInterface_execSetReplicatedDialogData_Parms
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGearboxDialogData                          Data;                                             		// 0x0004 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogGroups
// [0x00420500] ( FUNC_Native )
struct UGearboxDialogInterface_execGetDialogGroups_Parms
{
	TArray< class UGearboxDialogGroup* >               Groups;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogComponent
// [0x00020500] ( FUNC_Native )
struct UGearboxDialogInterface_execGetDialogComponent_Parms
{
	class UGearboxDialogComponent*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxDialogInterface.GetDialogNameTag
// [0x00020500] ( FUNC_Native )
struct UGearboxDialogInterface_execGetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogInterface.GetActor
// [0x00020500] ( FUNC_Native )
struct UGearboxDialogInterface_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogInterface.CanTalk
// [0x00020500] ( FUNC_Native )
struct UGearboxDialogInterface_execCanTalk_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEditorNode.IsChild
// [0x00020400] ( FUNC_Native )
struct UGearboxEditorNode_execIsChild_Parms
{
	class UGearboxEditorNode*                          TestNode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEngine.GetSparkInterface
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UGearboxEngine_execGetSparkInterface_Parms
{
	class USparkInterface*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEngine.IsCurrentDeviceValid
// [0x00024802] ( FUNC_Event )
struct UGearboxEngine_eventIsCurrentDeviceValid_Parms
{
	int                                                SizeNeeded;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEngine.HasStorageDeviceBeenRemoved
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxEngine_execHasStorageDeviceBeenRemoved_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEngine.GetCurrentDeviceID
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxEngine_execGetCurrentDeviceID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxEngine.SetCurrentDeviceID
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxEngine_execSetCurrentDeviceID_Parms
{
	int                                                NewDeviceID;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bProfileSignedOut : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxGameInfo.PostLogin
// [0x00020802] ( FUNC_Event )
struct AGearboxGameInfo_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.extSetLanguageExt
// [0x00020002] 
struct UGearboxGFxMovie_execextSetLanguageExt_Parms
{
	struct FString                                     ClipPath;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.OnClosedOnDeath
// [0x00020000] 
struct UGearboxGFxMovie_execOnClosedOnDeath_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.IsShowingFlashMouse
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execIsShowingFlashMouse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.extIsMouseablePlatform
// [0x00020002] 
struct UGearboxGFxMovie_execextIsMouseablePlatform_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.SetMouseableFlag
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxGFxMovie_eventSetMouseableFlag_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.GetStyleDebugString
// [0x00020002] 
struct UGearboxGFxMovie_execGetStyleDebugString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  S;                                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  S1;                                               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.GetStateDebugString
// [0x00024002] 
struct UGearboxGFxMovie_execGetStateDebugString_Parms
{
	unsigned long                                      bIncludeFlags : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  S;                                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  S1;                                               		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.InitializeFrom
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execInitializeFrom_Parms
{
	class UGearboxGFxMovie*                            SrcMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStylesDrawnTo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execRemoveStylesDrawnTo_Parms
{
	class UPrimitiveComponent*                         PrimComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UIGFxActorMovie*                             Target;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyles
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execRemoveStyles_Parms
{
	class UIGFxActorMovie*                             Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execRemoveStyle_Parms
{
	class UGFxMovieDrawStyle*                          Style;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.AddStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execAddStyle_Parms
{
	class UGFxMovieDrawStyle*                          Style;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.ShutdownMoviePlayback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execShutdownMoviePlayback_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.InitMoviePlayback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execInitMoviePlayback_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.GetRenderTexture
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execGetRenderTexture_Parms
{
	class UTextureRenderTarget2D*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_OnChanged
// [0x00020802] ( FUNC_Event )
struct UGearboxGFxMovie_eventMovieState_OnChanged_Parms
{
	unsigned long                                      bStateWasChanged : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SetFromMovie
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGearboxGFxMovie_eventMovieState_SetFromMovie_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Copy
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_Copy_Parms
{
	struct FMovieStateStruct                           StateDst;                                         		// 0x0000 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FMovieStateStruct                           StateSrc;                                         		// 0x0018 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Compare
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_Compare_Parms
{
	struct FMovieStateStruct                           S1;                                               		// 0x0000 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FMovieStateStruct                           S2;                                               		// 0x0018 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Toggle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_Toggle_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Enable
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_Enable_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnable : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_IsEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_IsEnabled_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SupportsState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_SupportsState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Init
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execMovieState_Init_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.InitFromDefinition
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execInitFromDefinition_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Apply
// [0x00022002] 
struct UGearboxGFxMovie_execMovieState_Apply_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      HandlerClass;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_ApplyState
// [0x00022000] 
struct UGearboxGFxMovie_execMovieState_ApplyState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.ApplyState
// [0x00020002] 
struct UGearboxGFxMovie_execApplyState_Parms
{
	struct FString                                     StateName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     StateAction;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.SetRenderingEnabled
// [0x00020002] 
struct UGearboxGFxMovie_execSetRenderingEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndStop
// [0x00020002] 
struct UGearboxGFxMovie_execGotoAndStop_Parms
{
	struct FString                                     FrameLabel;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndPlay
// [0x00020002] 
struct UGearboxGFxMovie_execGotoAndPlay_Parms
{
	struct FString                                     FrameLabel;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.PlaySpecialUISound
// [0x00020002] 
struct UGearboxGFxMovie_execPlaySpecialUISound_Parms
{
	struct FString                                     SoundString;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FName                                    SoundName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxGFxMovie.PlayUISound
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxGFxMovie_eventPlayUISound_Parms
{
	struct FName                                       UIEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.SetOtherObject
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGearboxGFxMovie_eventSetOtherObject_Parms
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.GetInstanceContextObject
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execGetInstanceContextObject_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.OnTick
// [0x00020800] ( FUNC_Event )
struct UGearboxGFxMovie_eventOnTick_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.OnClose
// [0x00020802] ( FUNC_Event )
struct UGearboxGFxMovie_eventOnClose_Parms
{
};

// Function GearboxFramework.GearboxGFxMovie.Start
// [0x00024802] ( FUNC_Event )
struct UGearboxGFxMovie_eventStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.ColorizeTooltipText
// [0x00024003] ( FUNC_Final )
struct UGearboxGFxMovie_execColorizeTooltipText_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.GFxColoredText
// [0x00426400] ( FUNC_Native )
struct UGearboxGFxMovie_execGFxColoredText_Parms
{
	struct FColor                                      C;                                                		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     S;                                                		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bAppendNewline : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeB
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execSingleArgInvokeB_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      Arg : 1;                                          		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeS
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execSingleArgInvokeS_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeF
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execSingleArgInvokeF_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Arg;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.GetLocalPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGFxMovie_execGetLocalPlayer_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.OnClosed
// [0x00120000] 
struct UGearboxGFxMovie_execOnClosed_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxGFxMovie.WantsControllerInput
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execWantsControllerInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
struct UGearboxGFxMovie_execSetExternalTexture_Parms
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGFxMovie.OnInputAxis
// [0x00120000] 
struct UGearboxGFxMovie_execOnInputAxis_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ukey;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovie_StateParent.MovieState_OnChanged
// [0x00020002] 
struct UGFxMovie_StateParent_execMovieState_OnChanged_Parms
{
	unsigned long                                      bStateWasChanged : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GFxMovie_StateParent.Start
// [0x00024802] ( FUNC_Event )
struct UGFxMovie_StateParent_eventStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetBehaviorKernel
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetBehaviorKernel_Parms
{
	class UBehaviorKernel*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetDialogManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetDialogManager_Parms
{
	class UGearboxDialogManager*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetPopulationRespawnDelay
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetPopulationRespawnDelay_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.ShowDialog
// [0x00020802] ( FUNC_Event )
struct UGearboxGlobals_eventShowDialog_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIDialogBox*                                 ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.NotifyActorDied
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execNotifyActorDied_Parms
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bKeepBody : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxGlobals.DoesLOSIntersectSpecialOccluder
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execDoesLOSIntersectSpecialOccluder_Parms
{
	struct FVector                                     FromLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ToLoc;                                            		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPawnAllegiance*                             AllegianceAffected;                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.HasPhysXCapableGPU
// [0x00022400] ( FUNC_Native )
struct UGearboxGlobals_execHasPhysXCapableGPU_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetPlatform
// [0x00022400] ( FUNC_Native )
struct UGearboxGlobals_execGetPlatform_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.ValidatePlayerName
// [0x00424400] ( FUNC_Native )
struct UGearboxGlobals_execValidatePlayerName_Parms
{
	struct FString                                     InName;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bReplaceCharacters : 1;                           		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.RegisterStateKey
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execRegisterStateKey_Parms
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ObjectName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       AdditionalKey;                                    		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.DoesStateKeyExist
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execDoesStateKeyExist_Parms
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ObjectName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       AdditionalKey;                                    		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.FreeTexture2D
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execFreeTexture2D_Parms
{
	class UTexture2D*                                  Texture;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetTexture2D
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetTexture2D_Parms
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetRenderTextureManager
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetRenderTextureManager_Parms
{
	class UGearboxRenderTextureManager*                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetGFxManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetGFxManager_Parms
{
	class UGFxMovieManager*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetScreenSpaceManager
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetScreenSpaceManager_Parms
{
	class UScreenSpaceManager*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetMessageManager
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetMessageManager_Parms
{
	class UGbxMessageManager*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.RegDynamicTextureStreaming
// [0x00024400] ( FUNC_Native )
struct UGearboxGlobals_execRegDynamicTextureStreaming_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRegister : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxGlobals.GetDynamicTextureActorList
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetDynamicTextureActorList_Parms
{
	class UGBXActorList*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetPopulationMaster
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetPopulationMaster_Parms
{
	class UPopulationMaster*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetWireManager
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetWireManager_Parms
{
	class AWireManager*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetGBXObjectList
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetGBXObjectList_Parms
{
	class UGBXObjectList*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetGBXActorList
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetGBXActorList_Parms
{
	class UGBXActorList*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetRuleEngineLoadBalanceManager
// [0x00020400] ( FUNC_Native )
struct UGearboxGlobals_execGetRuleEngineLoadBalanceManager_Parms
{
	class URuleEngineLoadBalanceManager*               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetGearboxAIFactory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetGearboxAIFactory_Parms
{
	class UGearboxAIFactory*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetExposureUtility
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetExposureUtility_Parms
{
	class UExposureUtilityBase*                        ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxGlobals.GetGearboxGlobals
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UGearboxGlobals_execGetGearboxGlobals_Parms
{
	class UGearboxGlobals*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxLocationRequest.GetLastDirection
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UGearboxLocationRequest_execGetLastDirection_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxLocationRequest.GetLastOrigin
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UGearboxLocationRequest_execGetLastOrigin_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxLocationRequest.GetDirection
// [0x00420500] ( FUNC_Native )
struct UGearboxLocationRequest_execGetDirection_Parms
{
	class AActor*                                      ContextActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutDirection;                                     		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxLocationRequest.GetOrigin
// [0x00420500] ( FUNC_Native )
struct UGearboxLocationRequest_execGetOrigin_Parms
{
	class AActor*                                      ContextActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutOrigin;                                        		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxLocationRequest.Get
// [0x00420500] ( FUNC_Native )
struct UGearboxLocationRequest_execGet_Parms
{
	class AActor*                                      ContextActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutLocation;                                      		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PawnMoveLocationRequest.Get
// [0x00420500] ( FUNC_Native )
struct UPawnMoveLocationRequest_execGet_Parms
{
	class AActor*                                      ContextActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutLocation;                                      		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.GetAimDirection
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execGetAimDirection_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.SetDialogNameTag
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execSetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       NewName;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.ServerDialog_TriggerEvent
// [0x00224C60] ( FUNC_Event | FUNC_Native )
struct AGearboxPawn_eventServerDialog_TriggerEvent_Parms
{
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     ObjectParameter;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.GetReplicatedDialogData
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execGetReplicatedDialogData_Parms
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.SetReplicatedDialogData
// [0x00420400] ( FUNC_Native )
struct AGearboxPawn_execSetReplicatedDialogData_Parms
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGearboxDialogData                          Data;                                             		// 0x0004 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxPawn.GetDialogGroups
// [0x00420500] ( FUNC_Native )
struct AGearboxPawn_execGetDialogGroups_Parms
{
	TArray< class UGearboxDialogGroup* >               Groups;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPawn.GetDialogComponent
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetDialogComponent_Parms
{
	class UGearboxDialogComponent*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxPawn.GetDialogNameTag
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.CanTalk
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execCanTalk_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.OnCoverStateChanged
// [0x00080102] 
struct AGearboxPawn_execOnCoverStateChanged_Parms
{
};

// Function GearboxFramework.GearboxPawn.ServerSetCoverState
// [0x002800C2] 
struct AGearboxPawn_execServerSetCoverState_Parms
{
	struct FGearboxCoverState                          NewCoverState;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.SetCoverState
// [0x00020802] ( FUNC_Event )
struct AGearboxPawn_eventSetCoverState_Parms
{
	struct FGearboxCoverState                          NewCoverState;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.GetMountAnimDistanceForSpeed
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execGetMountAnimDistanceForSpeed_Parms
{
	unsigned char                                      TheSpeed;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      CoverHeight;                                      		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      CoverDir;                                         		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.GetSpotOthersShouldLookAt
// [0x00820902] ( FUNC_Event )
struct AGearboxPawn_eventGetSpotOthersShouldLookAt_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ToReturn;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DontCare;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPawn.SetReplicatedSMData
// [0x00420500] ( FUNC_Native )
struct AGearboxPawn_execSetReplicatedSMData_Parms
{
	struct FSpecialMoveData                            NewSMData;                                        		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_StopAny
// [0x002208C2] ( FUNC_Event )
struct AGearboxPawn_eventServerSpecialMove_StopAny_Parms
{
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Stop
// [0x002208C2] ( FUNC_Event )
struct AGearboxPawn_eventServerSpecialMove_Stop_Parms
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Queue
// [0x002248C2] ( FUNC_Event )
struct AGearboxPawn_eventServerSpecialMove_Queue_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Play
// [0x002248C2] ( FUNC_Event )
struct AGearboxPawn_eventServerSpecialMove_Play_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionRotationMode
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetDefaultRootMotionRotationMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionMode
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetDefaultRootMotionMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.GetSkelMesh
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetSkelMesh_Parms
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxPawn.GetSMComponent
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetSMComponent_Parms
{
	class USpecialMoveComponent*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxPawn.GetActor
// [0x00020500] ( FUNC_Native )
struct AGearboxPawn_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.GetNavigationHandle
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execGetNavigationHandle_Parms
{
	class UGearboxNavigationHandle*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.PlayHit
// [0x00024002] 
struct AGearboxPawn_execPlayHit_Parms
{
	class APawn*                                       SomePawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0020 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	class UDamagePipeline*                             Pipeline;                                         		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AGearboxPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.Died
// [0x00024002] 
struct AGearboxPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UDamagePipeline*                             Pipeline;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPawn.SetMovementPhysics
// [0x00020002] 
struct AGearboxPawn_execSetMovementPhysics_Parms
{
};

// Function GearboxFramework.GearboxPawn.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGearboxPawn_eventPostBeginPlay_Parms
{
	// class UITargetable*                             SelfTargetable;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPawn.NotifyShotAtBy
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execNotifyShotAtBy_Parms
{
	class AGearboxPawn*                                ShootingPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPawn.HaveIBeenShotAtRecently
// [0x00020400] ( FUNC_Native )
struct AGearboxPawn_execHaveIBeenShotAtRecently_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.RequestTitleStorageFile
// [0x00824002] 
struct AGearboxPlayerController_execRequestTitleStorageFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             TitleStorageRequestCompleteDelegate;              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      AcceptsType;                                      		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CustomAcceptsType;                                		// 0x001C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USparkInterface*                          Spark;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FHttpParameters                          HttpParams;                                       		// 0x0034 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  RequestUrl;                                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< unsigned char >                         RequestData;                                      		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.ShowSparkID
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execShowSparkID_Parms
{
	// class USparkInterface*                          Spark;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.ShouldCheckRemoteControlCheckbox
// [0x00024400] ( FUNC_Native )
struct AGearboxPlayerController_execShouldCheckRemoteControlCheckbox_Parms
{
	unsigned char                                      CheckBoxName;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        HUD;                                              		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.DisplayDebugSpark
// [0x00420400] ( FUNC_Native )
struct AGearboxPlayerController_execDisplayDebugSpark_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxPlayerController.AITree
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAITree_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleTargetViewCones
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleTargetViewCones_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleAwarenessZones
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleAwarenessZones_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleCombat
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleCombat_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleResources
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleResources_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleInactiveRules
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleInactiveRules_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleRules
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleRules_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleFlags
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIToggleFlags_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugNextSnapshot
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIDebugNextSnapshot_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugPrevSnapshot
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIDebugPrevSnapshot_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.ainext
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execainext_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.aiprev
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execaiprev_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.AINextRule
// [0x00024202] ( FUNC_Exec )
struct AGearboxPlayerController_execAINextRule_Parms
{
	unsigned long                                      bSkipContainers : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.AIPrevRule
// [0x00024202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIPrevRule_Parms
{
	unsigned long                                      bSkipContainers : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawn
// [0x00020002] 
struct AGearboxPlayerController_execAIDebugSetPawn_Parms
{
	class AGearboxPawn*                                NewPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawnByName
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execAIDebugSetPawnByName_Parms
{
	struct FName                                       NewPawnName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.debugpawn
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execdebugpawn_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.aisetp
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execaisetp_Parms
{
	struct FName                                       NewPawnName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.NotifyGameUnPaused
// [0x00020002] 
struct AGearboxPlayerController_execNotifyGameUnPaused_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.NotifyGamePaused
// [0x00020002] 
struct AGearboxPlayerController_execNotifyGamePaused_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.SetSettingsFromProfile
// [0x00020000] 
struct AGearboxPlayerController_execSetSettingsFromProfile_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.GetStorageDeviceID
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execGetStorageDeviceID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.SetStorageDeviceID
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execSetStorageDeviceID_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.NotifyDeviceSelectComplete
// [0x00020002] 
struct AGearboxPlayerController_execNotifyDeviceSelectComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  DeviceName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlinePlayerInterfaceEx*                 PlayerInterfaceEx;                                		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.DisplayStorageRemovedMenu
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventDisplayStorageRemovedMenu_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.DisplayProfileRemovedMenu
// [0x00020002] 
struct AGearboxPlayerController_execDisplayProfileRemovedMenu_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.NotifyProfileWriteFromStorageChangeComplete
// [0x00020002] 
struct AGearboxPlayerController_execNotifyProfileWriteFromStorageChangeComplete_Parms
{
	unsigned char                                      LocalUser;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.IsCurrentStorageDeviceValid
// [0x00020002] 
struct AGearboxPlayerController_execIsCurrentStorageDeviceValid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.NotifyStorageDeviceChange
// [0x00020002] 
struct AGearboxPlayerController_execNotifyStorageDeviceChange_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.DestroyOnlineGame
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventDestroyOnlineGame_Parms
{
	// class UOnlineGameInterface*                     GameInterface;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.ReturnToTitleScreen
// [0x00024400] ( FUNC_Native )
struct AGearboxPlayerController_execReturnToTitleScreen_Parms
{
	unsigned long                                      bSkipSave : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRemoveSplitPlayer : 1;                           		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.GetConnectionFailureNoticeMsg
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execGetConnectionFailureNoticeMsg_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.GetMainMenuMapName
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execGetMainMenuMapName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.NotifyLinkStatusChange
// [0x00020002] 
struct AGearboxPlayerController_execNotifyLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.NotifyLoginStatusChange
// [0x00820002] 
struct AGearboxPlayerController_execNotifyLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             CurrentID;                                        		// 0x001C (0x0018) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.NotifyLoginChange
// [0x00820002] 
struct AGearboxPlayerController_execNotifyLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             CurrentID;                                        		// 0x0004 (0x0018) [0x0000000000000000]              
	// unsigned char                                   Status;                                           		// 0x0024 (0x0001) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.OnReadProfileSettingsComplete
// [0x00020002] 
struct AGearboxPlayerController_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.OnReceivedNewProfile
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execOnReceivedNewProfile_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.ClearOnlineDelegates
// [0x00020002] 
struct AGearboxPlayerController_execClearOnlineDelegates_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.RegisterOnlineDelegates
// [0x00020002] 
struct AGearboxPlayerController_execRegisterOnlineDelegates_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.OnProfileWriteComplete
// [0x00020002] 
struct AGearboxPlayerController_execOnProfileWriteComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.HidePS3WritingProfileDialog
// [0x00020000] 
struct AGearboxPlayerController_execHidePS3WritingProfileDialog_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.ShowPS3WritingProfileDialog
// [0x00020000] 
struct AGearboxPlayerController_execShowPS3WritingProfileDialog_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.WriteProfile
// [0x00024802] ( FUNC_Event )
struct AGearboxPlayerController_eventWriteProfile_Parms
{
	unsigned long                                      bShouldShowProfileDialog : 1;                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   Platform;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.GetProfileSettings
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventGetProfileSettings_Parms
{
	class UGearboxProfileSettings*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.GetMyControllerId
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execGetMyControllerId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.ReadProfile
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventReadProfile_Parms
{
	// unsigned char                                   Platform;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.UnregisterPlayerDataStores
// [0x00020102] 
struct AGearboxPlayerController_execUnregisterPlayerDataStores_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.RegisterCustomPlayerDataStores
// [0x00080102] 
struct AGearboxPlayerController_execRegisterCustomPlayerDataStores_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.SetDataStoreStringValue
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execSetDataStoreStringValue_Parms
{
	struct FString                                     MarkupString;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NewValue;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.GetDataStoreStringValue
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execGetDataStoreStringValue_Parms
{
	struct FString                                     MarkupString;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.ClientKeepPlayingLoadingMovie
// [0x010209C2] ( FUNC_Event )
struct AGearboxPlayerController_eventClientKeepPlayingLoadingMovie_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.ClientResetCamera
// [0x010201C3] ( FUNC_Final )
struct AGearboxPlayerController_execClientResetCamera_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.SpawnPlayerCamera
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventSpawnPlayerCamera_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct AGearboxPlayerController_eventInitInputSystem_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.NoTargetAll
// [0x00020002] 
struct AGearboxPlayerController_execNoTargetAll_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.NoTarget
// [0x00020002] 
struct AGearboxPlayerController_execNoTarget_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.GetNoTargetPlayers
// [0x00022400] ( FUNC_Native )
struct AGearboxPlayerController_execGetNoTargetPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.SetNoTargetPlayers
// [0x00022400] ( FUNC_Native )
struct AGearboxPlayerController_execSetNoTargetPlayers_Parms
{
	unsigned long                                      bNoTarget : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.Possess
// [0x00020002] 
struct AGearboxPlayerController_execPossess_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.DontTarget
// [0x00020202] ( FUNC_Exec )
struct AGearboxPlayerController_execDontTarget_Parms
{
	unsigned long                                      bModeFlag : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.ClientConsoleCommand
// [0x010201C2] 
struct AGearboxPlayerController_execClientConsoleCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxPlayerController.IsPlayerAllowingActiveMoment
// [0x00020002] 
struct AGearboxPlayerController_execIsPlayerAllowingActiveMoment_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.IsActiveMomentRunning
// [0x00020002] 
struct AGearboxPlayerController_execIsActiveMomentRunning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxPlayerController.ViewShake
// [0x00020002] 
struct AGearboxPlayerController_execViewShake_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.UpdateShakeRotComponent
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AGearboxPlayerController_execUpdateShakeRotComponent_Parms
{
	float                                              Max;                                              		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Current;                                          		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.CheckShake
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AGearboxPlayerController_execCheckShake_Parms
{
	float                                              MaxOffset;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Offset;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.StopViewShaking
// [0x00820002] 
struct AGearboxPlayerController_execStopViewShaking_Parms
{
	// struct FGearboxViewShakeInfo                    EmptyViewShake;                                   		// 0x0000 (0x0044) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.OnCameraShake
// [0x00020002] 
struct AGearboxPlayerController_execOnCameraShake_Parms
{
	class UGearboxSeqAct_CameraShake*                  ShakeAction;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.ShakeView
// [0x00020400] ( FUNC_Native )
struct AGearboxPlayerController_execShakeView_Parms
{
	struct FGearboxViewShakeInfo                       NewViewShake;                                     		// 0x0000 (0x0044) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.ClientDamageShake
// [0x018201C2] 
struct AGearboxPlayerController_execClientDamageShake_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGearboxViewShakeInfo                    NewViewShake;                                     		// 0x0004 (0x0044) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxPlayerController.ConsoleEcho
// [0x00024000] 
struct AGearboxPlayerController_execConsoleEcho_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bLogOutput : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.Initialize
// [0x00020102] 
struct AGearboxPlayerController_execInitialize_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.PostBeginPlay
// [0x00020102] 
struct AGearboxPlayerController_execPostBeginPlay_Parms
{
};

// Function GearboxFramework.GearboxPlayerController.TryAndSpawnLeviathanChannel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGearboxPlayerController_execTryAndSpawnLeviathanChannel_Parms
{
	class UNetConnection*                              Connection;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxPlayerController.GenerateNewSessionGuid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct AGearboxPlayerController_execGenerateNewSessionGuid_Parms
{
};

// Function GearboxFramework.GearboxPlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
struct UGearboxPlayerInput_eventPlayerInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxRenderTextureManager.SetThumbnailMesh
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execSetThumbnailMesh_Parms
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMeshComponent*                              Mesh;                                             		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeContext
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execFreeContext_Parms
{
	struct FName                                       Context;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeThumbnail
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execFreeThumbnail_Parms
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxRenderTextureManager.GetThumbnail
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execGetThumbnail_Parms
{
	struct FName                                       Context;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                TextureSizeX;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TextureSizeY;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      UpdateType;                                       		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeX;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                SizeY;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTexture*                                    ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeTexture2D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execFreeTexture2D_Parms
{
	class UTexture2D*                                  Texture;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxRenderTextureManager.GetTexture2D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execGetTexture2D_Parms
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeRenderTexture
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execFreeRenderTexture_Parms
{
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxRenderTextureManager.GetRenderTexture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxRenderTextureManager_execGetRenderTexture_Parms
{
	int                                                InSizeX;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSizeY;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNeedsTwoCopies : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UTextureRenderTarget2D*                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxSkeletalMeshComponent.SetFOV
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxSkeletalMeshComponent_execSetFOV_Parms
{
	float                                              NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltAccessoryMeshDataFromParts
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGestaltSkeletalMeshDefinition_execInitGestaltAccessoryMeshDataFromParts_Parms
{
	class USkeletalMesh*                               MeshToBorrowBonesFrom;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGestaltPartMatrices*                        AccessoryMatrices;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      TargetComponent;                                  		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	TArray< struct FGestaltPartPermutation >           PermutationConfiguration;                         		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltMeshDataFromParts
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGestaltSkeletalMeshDefinition_execInitGestaltMeshDataFromParts_Parms
{
	class USkeletalMeshComponent*                      TargetComponent;                                  		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	TArray< struct FName >                             PartMeshNames;                                    		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxActorMoviePool.DisplayDebug
// [0x00420002] 
struct UGFxActorMoviePool_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FString                                  S;                                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxActorMoviePool.GetPoolName
// [0x00020003] ( FUNC_Final )
struct UGFxActorMoviePool_execGetPoolName_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  S;                                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxActorMoviePool.PoolStyleString
// [0x00020003] ( FUNC_Final )
struct UGFxActorMoviePool_execPoolStyleString_Parms
{
	unsigned char                                      Pooling;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxActorMoviePool.MovieStateChanged
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxActorMoviePool_execMovieStateChanged_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieDefinition.FindMovieLink
// [0x00020002] 
struct UGFxMovieDefinition_execFindMovieLink_Parms
{
	struct FName                                       MovieName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxMovieDefinition*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDefinition.PostMovieStart
// [0x00020003] ( FUNC_Final )
struct UGFxMovieDefinition_execPostMovieStart_Parms
{
	class UGearboxGFxMovie*                            StartedMovie;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    N;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GFxMovieDefinition.SpawnPlayerMovie
// [0x00024400] ( FUNC_Native )
struct UGFxMovieDefinition_execSpawnPlayerMovie_Parms
{
	class AGearboxPlayerController*                    Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ContextObject;                                    		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGearboxGFxMovie*                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDefinition.SupportsStatePooling
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieDefinition_execSupportsStatePooling_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDefinition.GetPoolStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieDefinition_execGetPoolStyle_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDrawStyle.GetStyleDebugString
// [0x00020002] 
struct UGFxMovieDrawStyle_execGetStyleDebugString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxMovieDrawStyleHUD.RequiresClientInstance
// [0x00020802] ( FUNC_Event )
struct UGFxMovieDrawStyleHUD_eventRequiresClientInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.GetStyleDebugString
// [0x00020002] 
struct UGFxMovieDrawStyleMesh_execGetStyleDebugString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.RequiresClientInstance
// [0x00020802] ( FUNC_Event )
struct UGFxMovieDrawStyleMesh_eventRequiresClientInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieDrawStyleSplitscreen.RequiresClientInstance
// [0x00020802] ( FUNC_Event )
struct UGFxMovieDrawStyleSplitscreen_eventRequiresClientInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieManager.ChangeMovieState
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execChangeMovieState_Parms
{
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       State;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Change;                                           		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AGearboxPlayerController*                    PC;                                               		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.Unsubscribe
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execUnsubscribe_Parms
{
	class AGearboxPlayerController*                    PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.Subscribe
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execSubscribe_Parms
{
	class AGearboxPlayerController*                    PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.UnregisterMoviesDrawnTo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execUnregisterMoviesDrawnTo_Parms
{
	class UPrimitiveComponent*                         PrimComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.UnregisterTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execUnregisterTarget_Parms
{
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.UnregisterMovie
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execUnregisterMovie_Parms
{
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieManager.RegisterMovie
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieManager_execRegisterMovie_Parms
{
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieState.GetDebugString
// [0x00024002] 
struct UGFxMovieState_execGetDebugString_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIncludeFlags : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  S;                                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GFxMovieState.ApplyMovieState
// [0x00020002] 
struct UGFxMovieState_execApplyMovieState_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      HandlerClass;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieState.FindMovieState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovieState_execFindMovieState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieState.TestState
// [0x00420400] ( FUNC_Native )
struct UGFxMovieState_execTestState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieState.ToggleState
// [0x00420400] ( FUNC_Native )
struct UGFxMovieState_execToggleState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieState.EnableState
// [0x00424400] ( FUNC_Native )
struct UGFxMovieState_execEnableState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bEnable : 1;                                      		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GFxMovieStatePlayerAware.EnableState
// [0x00424400] ( FUNC_Native )
struct UGFxMovieStatePlayerAware_execEnableState_Parms
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bEnable : 1;                                      		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.InitSequence
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execInitSequence_Parms
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IAIInterface.GetAllegiance
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAllegiance_Parms
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.GetAIDefinition
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAIDefinition_Parms
{
	class UAIDefinition*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.GetAIComponent
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAIComponent_Parms
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.IAIInterface.GetAIParent
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAIParent_Parms
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.GetAILocation
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAILocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.GetAIActor
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execGetAIActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IAIInterface.CanTickAI
// [0x00020400] ( FUNC_Native )
struct UIAIInterface_execCanTickAI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieDestroy
// [0x00020400] ( FUNC_Native )
struct UIGFxActorMovie_execGFx_NotifyMovieDestroy_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieCreate
// [0x00020400] ( FUNC_Native )
struct UIGFxActorMovie_execGFx_NotifyMovieCreate_Parms
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IGFxActorMovie.GFx_GetMovieActor
// [0x00020400] ( FUNC_Native )
struct UIGFxActorMovie_execGFx_GetMovieActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.InterfaceGearboxCamera.FinishCameraLookAt
// [0x00020800] ( FUNC_Event )
struct UInterfaceGearboxCamera_eventFinishCameraLookAt_Parms
{
};

// Function GearboxFramework.InterfaceGearboxCamera.EnableThirdPersonLookAt
// [0x00020000] 
struct UInterfaceGearboxCamera_execEnableThirdPersonLookAt_Parms
{
	float                                              LookAtXOffset;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LookAtYOffset;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LookAtZOffset;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LookAtMode;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.InterfaceGearboxCamera.BeginCameraLookAt
// [0x00020000] 
struct UInterfaceGearboxCamera_execBeginCameraLookAt_Parms
{
	class AActor*                                      LookAtTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       LookAtBone;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TargetLocation;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Zoom;                                             		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   FOV;                                              		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TransitionTimeIn;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TransitionTimeOut;                                		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IStreamingDataEvent.RunStreamingDataEvent
// [0x00024800] ( FUNC_Event )
struct UIStreamingDataEvent_eventRunStreamingDataEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                IntParam;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              FloatParam;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.PhysicsStateExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UPhysicsStateExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationAspect.DenStatRemoved
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventDenStatRemoved_Parms
{
	class APawn*                                       DenPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.DenStatAdded
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventDenStatAdded_Parms
{
	class APawn*                                       DenPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.EnabledStatusChanged
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventEnabledStatusChanged_Parms
{
	unsigned long                                      bIsEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bHasActiveActors : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.AllActorsRemoved
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventAllActorsRemoved_Parms
{
	unsigned long                                      bFinishedSpawning : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.OnActorDeath
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventOnActorDeath_Parms
{
	class AActor*                                      DeadActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.OnSpawnActor
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventOnSpawnActor_Parms
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationAspect.Initialize
// [0x00020800] ( FUNC_Event )
struct UPopulationAspect_eventInitialize_Parms
{
};

// Function GearboxFramework.PopulationEncounter.TriggerKismetAllSpawnedEvent
// [0x00020802] ( FUNC_Event )
struct APopulationEncounter_eventTriggerKismetAllSpawnedEvent_Parms
{
};

// Function GearboxFramework.PopulationEncounter.TriggerKismetDeathEvent
// [0x00020802] ( FUNC_Event )
struct APopulationEncounter_eventTriggerKismetDeathEvent_Parms
{
};

// Function GearboxFramework.PopulationEncounter.OnToggle
// [0x00020102] 
struct APopulationEncounter_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationEncounter.UpdateOpportunityEnabledStates
// [0x00020400] ( FUNC_Native )
struct APopulationEncounter_execUpdateOpportunityEnabledStates_Parms
{
	int                                                nWave;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateIfOnlyOneWave : 1;                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationEncounter.UpdateKismetNotifications
// [0x00020400] ( FUNC_Native )
struct APopulationEncounter_execUpdateKismetNotifications_Parms
{
};

// Function GearboxFramework.PopUpDebugBarGraph.Display
// [0x00020400] ( FUNC_Native )
struct UPopUpDebugBarGraph_execDisplay_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopUpDebugBarGraph.GetValue
// [0x00020400] ( FUNC_Native )
struct UPopUpDebugBarGraph_execGetValue_Parms
{
	int                                                ColumnNdx;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopUpDebugBarGraph.SetValue
// [0x00020400] ( FUNC_Native )
struct UPopUpDebugBarGraph_execSetValue_Parms
{
	int                                                ColumnNdx;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewValue;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopUpDebugBarGraph.AddNewColumn
// [0x00024400] ( FUNC_Native )
struct UPopUpDebugBarGraph_execAddNewColumn_Parms
{
	struct FColor                                      ColumnColor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     HeaderText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopUpDebugBarGraph.AddTitleText
// [0x00020400] ( FUNC_Native )
struct UPopUpDebugBarGraph_execAddTitleText_Parms
{
	struct FString                                     NewTitleText;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.RegionDefinition.GetDefaultRegionGameStage
// [0x00420400] ( FUNC_Native )
struct URegionDefinition_execGetDefaultRegionGameStage_Parms
{
	int                                                MinGameStage;                                     		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MaxGameStage;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                AwesomeLevel;                                     		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                GameStageIncreaseOverPlayerLevel;                 		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RegionDefinition.TestRegionGameStage
// [0x00424400] ( FUNC_Native )
struct URegionDefinition_execTestRegionGameStage_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bDefaultGameStage : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RegionDefinition.GetRegionGameStage
// [0x00424400] ( FUNC_Native )
struct URegionDefinition_execGetRegionGameStage_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bDefaultGameStage : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngineLoadBalanceManager.SetAsDebugging
// [0x00020400] ( FUNC_Native )
struct URuleEngineLoadBalanceManager_execSetAsDebugging_Parms
{
	unsigned long                                      bSetDebugging : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.AllPlayersInVolumes
// [0x00020400] ( FUNC_Native )
struct USeqAct_AllPlayersInVolume_execAllPlayersInVolumes_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.PlayerIsInAVolume
// [0x00020400] ( FUNC_Native )
struct USeqAct_AllPlayersInVolume_execPlayerIsInAVolume_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.IsOwnerAlwaysNetRelevant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execIsOwnerAlwaysNetRelevant_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.CanPlayBehaviorData
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execCanPlayBehaviorData_Parms
{
	struct FSMBehavior                                 Data;                                             		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.RunBehaviors
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execRunBehaviors_Parms
{
	TArray< struct FSMBehavior >                       SMBehaviors;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SpecialMoveComponent.GetCurrent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetCurrent_Parms
{
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.GetPlayRateScale
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetPlayRateScale_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.GetDuration
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.GetData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetData_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.LocalAnimFinished
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execLocalAnimFinished_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FSpecialMoveData                            SMData;                                           		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.ClearQueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execClearQueue_Parms
{
};

// Function GearboxFramework.SpecialMoveComponent.StopAnyLocal
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execStopAnyLocal_Parms
{
	struct FName                                       SMNodeName;                                       		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      MeshComp;                                         		// 0x000C (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
};

// Function GearboxFramework.SpecialMoveComponent.StopLocal
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execStopLocal_Parms
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.StopAny
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execStopAny_Parms
{
	unsigned long                                      bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.Stop
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execStop_Parms
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClearQueue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.PlayLocal
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execPlayLocal_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.Queue
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execQueue_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execPlay_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.RemoveFromQueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execRemoveFromQueue_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.IsQueued
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execIsQueued_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execIsPlayingClass_Parms
{
	class UClass*                                      SMClass;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingAny
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execIsPlayingAny_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.IsPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execIsPlaying_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimDelta
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetAnimDelta_Parms
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.GetSMNode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetSMNode_Parms
{
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveComponent.PlayReplicated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execPlayReplicated_Parms
{
	struct FReplicatedSpecialMoveData                  NewSMData;                                        		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimLength
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USpecialMoveComponent_execGetAnimLength_Parms
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIncludeNextSMD : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SMC;                                              		// 0x0008 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.IsPlayingLocally
// [0x00020800] ( FUNC_Event )
struct USpecialMoveDefinition_eventIsPlayingLocally_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.GetSMDToPlay
// [0x00020400] ( FUNC_Native )
struct USpecialMoveDefinition_execGetSMDToPlay_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.Contains
// [0x00020400] ( FUNC_Native )
struct USpecialMoveDefinition_execContains_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveInterface*                       SMI;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.ClientFinished
// [0x00020800] ( FUNC_Event )
struct USpecialMoveDefinition_eventClientFinished_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveDefinition.ServerFinished
// [0x00020800] ( FUNC_Event )
struct USpecialMoveDefinition_eventServerFinished_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveDefinition.ClientStarted
// [0x00420800] ( FUNC_Event )
struct USpecialMoveDefinition_eventClientStarted_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FSpecialMoveData                            SMData;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.ServerStarted
// [0x00020800] ( FUNC_Event )
struct USpecialMoveDefinition_eventServerStarted_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveDefinition.IsLocalAuthority
// [0x00020400] ( FUNC_Native )
struct USpecialMoveDefinition_execIsLocalAuthority_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveDefinition.AuthorityCanPlay
// [0x00020802] ( FUNC_Event )
struct USpecialMoveDefinition_eventAuthorityCanPlay_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveExpressionList.Contains
// [0x00020400] ( FUNC_Native )
struct USpecialMoveExpressionList_execContains_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveInterface*                       SMI;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveExpressionList.GetSMDToPlay
// [0x00020400] ( FUNC_Native )
struct USpecialMoveExpressionList_execGetSMDToPlay_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveRandom.Contains
// [0x00020400] ( FUNC_Native )
struct USpecialMoveRandom_execContains_Parms
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveInterface*                       SMI;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveRandom.GetSMDToPlay
// [0x00020400] ( FUNC_Native )
struct USpecialMoveRandom_execGetSMDToPlay_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveInterface.SetReplicatedSMData
// [0x00420500] ( FUNC_Native )
struct USpecialMoveInterface_execSetReplicatedSMData_Parms
{
	struct FSpecialMoveData                            NewSMData;                                        		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_StopAny
// [0x002208C0] ( FUNC_Event )
struct USpecialMoveInterface_eventServerSpecialMove_StopAny_Parms
{
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Stop
// [0x002208C0] ( FUNC_Event )
struct USpecialMoveInterface_eventServerSpecialMove_Stop_Parms
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Queue
// [0x002248C0] ( FUNC_Event )
struct USpecialMoveInterface_eventServerSpecialMove_Queue_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Play
// [0x002248C0] ( FUNC_Event )
struct USpecialMoveInterface_eventServerSpecialMove_Play_Parms
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Data;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionRotationMode
// [0x00020500] ( FUNC_Native )
struct USpecialMoveInterface_execGetDefaultRootMotionRotationMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionMode
// [0x00020500] ( FUNC_Native )
struct USpecialMoveInterface_execGetDefaultRootMotionMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SpecialMoveInterface.GetSkelMesh
// [0x00020500] ( FUNC_Native )
struct USpecialMoveInterface_execGetSkelMesh_Parms
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.SpecialMoveInterface.GetSMComponent
// [0x00020500] ( FUNC_Native )
struct USpecialMoveInterface_execGetSMComponent_Parms
{
	class USpecialMoveComponent*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.SpecialMoveInterface.GetActor
// [0x00020500] ( FUNC_Native )
struct USpecialMoveInterface_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.WireTerminal.Destroyed
// [0x00020802] ( FUNC_Event )
struct AWireTerminal_eventDestroyed_Parms
{
};

// Function GearboxFramework.WireTerminal.NotifyModifiedTerminal
// [0x00020400] ( FUNC_Native )
struct AWireTerminal_execNotifyModifiedTerminal_Parms
{
};

// Function GearboxFramework.ActionSequence.TriggerBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execTriggerBehavior_Parms
{
	struct FName                                       OutputName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.GetRangeValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execGetRangeValue_Parms
{
	struct FAIRange                                    Range;                                            		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.RangeIsValid
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execRangeIsValid_Parms
{
	struct FAIRange                                    Range;                                            		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.Finish
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execFinish_Parms
{
	unsigned long                                      bFailed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.ActionSequence.IsRunning
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execIsRunning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.ScriptCleanUp
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventScriptCleanUp_Parms
{
};

// Function GearboxFramework.ActionSequence.CanRun
// [0x00020802] ( FUNC_Event )
struct UActionSequence_eventCanRun_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.ActivateEvent
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventActivateEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.Update
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventUpdate_Parms
{
};

// Function GearboxFramework.ActionSequence.Init
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventInit_Parms
{
};

// Function GearboxFramework.ActionSequence.Stop
// [0x00020802] ( FUNC_Event )
struct UActionSequence_eventStop_Parms
{
};

// Function GearboxFramework.ActionSequence.Start
// [0x00020802] ( FUNC_Event )
struct UActionSequence_eventStart_Parms
{
};

// Function GearboxFramework.ActionSequence.InterruptSequence
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventInterruptSequence_Parms
{
	class UActionSequence*                             InterruptingSequence;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.StopSequence
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventStopSequence_Parms
{
};

// Function GearboxFramework.ActionSequence.StartSequence
// [0x00020800] ( FUNC_Event )
struct UActionSequence_eventStartSequence_Parms
{
};

// Function GearboxFramework.ActionSequence.ExecuteSequence
// [0x00020409] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execExecuteSequence_Parms
{
	class UActionSequence*                             SequenceTemplate;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.Sleep
// [0x00020409] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execSleep_Parms
{
	float                                              Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.RunSubSequence
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execRunSubSequence_Parms
{
	class UActionSequence*                             SubSequence;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.InterruptLatentAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execInterruptLatentAction_Parms
{
};

// Function GearboxFramework.ActionSequence.DoRuleSetPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execDoRuleSetPop_Parms
{
};

// Function GearboxFramework.ActionSequence.DoRuleSetPush
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execDoRuleSetPush_Parms
{
	class URuleSet*                                    NewRuleSet;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.DoRuleSetSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execDoRuleSetSwitch_Parms
{
	class URuleSet*                                    NewRuleSet;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequence.PreventNewRulesFromStarting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execPreventNewRulesFromStarting_Parms
{
};

// Function GearboxFramework.ActionSequence.GetRuleNative
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execGetRuleNative_Parms
{
	class URule*                                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.GetActionSequence
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execGetActionSequence_Parms
{
	class UActionSequence*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UActionSequence*                             OutSequence;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.ActionSequence.IsInLabel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execIsInLabel_Parms
{
	struct FName                                       TestLabel;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.IsAtomic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execIsAtomic_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequence.StopAtomic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execStopAtomic_Parms
{
};

// Function GearboxFramework.ActionSequence.StartAtomic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequence_execStartAtomic_Parms
{
};

// Function GearboxFramework.ActionSequence.IsActionReadyToFinish
// [0x00020400] ( FUNC_Native )
struct UActionSequence_execIsActionReadyToFinish_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ActionSequenceList.IsActionReadyToFinish
// [0x00020400] ( FUNC_Native )
struct UActionSequenceList_execIsActionReadyToFinish_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Action_PawnMovementBase.PostMovement
// [0x00020800] ( FUNC_Event )
struct UAction_PawnMovementBase_eventPostMovement_Parms
{
};

// Function GearboxFramework.Action_PawnMovementBase.PreMovement
// [0x00020800] ( FUNC_Event )
struct UAction_PawnMovementBase_eventPreMovement_Parms
{
};

// Function GearboxFramework.Action_PawnMovementBase.PrePathFind
// [0x00020800] ( FUNC_Event )
struct UAction_PawnMovementBase_eventPrePathFind_Parms
{
};

// Function GearboxFramework.Action_PawnMovementBase.InterruptSequence
// [0x00020802] ( FUNC_Event )
struct UAction_PawnMovementBase_eventInterruptSequence_Parms
{
	class UActionSequence*                             InterruptingSequence;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Action_PawnMovementBase.StopSequence
// [0x00020802] ( FUNC_Event )
struct UAction_PawnMovementBase_eventStopSequence_Parms
{
};

// Function GearboxFramework.Action_PawnMovementBase.StartSequence
// [0x00020802] ( FUNC_Event )
struct UAction_PawnMovementBase_eventStartSequence_Parms
{
};

// Function GearboxFramework.Action_PawnMovementBase.MovePawnToDestinationLocation
// [0x00020409] ( FUNC_Final | FUNC_Native )
struct UAction_PawnMovementBase_execMovePawnToDestinationLocation_Parms
{
	struct FVector                                     GoalLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      NewUsePreciseArrival : 1;                         		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.Action_PawnMovementBase.TakeDebugSnapshotMoveFailure
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAction_PawnMovementBase_execTakeDebugSnapshotMoveFailure_Parms
{
	unsigned char                                      Cause;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Action_PawnMovementBase.SetMaxMovementSpeed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAction_PawnMovementBase_execSetMaxMovementSpeed_Parms
{
	unsigned char                                      NewMaxSpeed;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Action_PawnMovementBase.EndMovePawnToDestinationLocation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAction_PawnMovementBase_execEndMovePawnToDestinationLocation_Parms
{
};

// Function GearboxFramework.ActionSequenceRandom.EvaluateActionList
// [0x00020002] 
struct UActionSequenceRandom_execEvaluateActionList_Parms
{
};

// Function GearboxFramework.ActionSequenceRandom.OverrideNextSequenceToRun
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UActionSequenceRandom_execOverrideNextSequenceToRun_Parms
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.ActionSequenceRandom.GetRandomAction
// [0x00020400] ( FUNC_Native )
struct UActionSequenceRandom_execGetRandomAction_Parms
{
	class UActionSequence*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.GetAIRangeTime
// [0x00022400] ( FUNC_Native )
struct UAIComponent_execGetAIRangeTime_Parms
{
	struct FAIRange                                    InRange;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.DrawAITree
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execDrawAITree_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.LogDemigodHolds
// [0x00820002] 
struct UAIComponent_execLogDemigodHolds_Parms
{
	// struct FAIHoldData                              HoldData;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.AIComponent.ReleaseDialog
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execReleaseDialog_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.HoldDialog
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHoldDialog_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.DialogOnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execDialogOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ReleaseGod
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execReleaseGod_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.HoldGod
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHoldGod_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.GodOnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execGodOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ReleaseDemigod
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execReleaseDemigod_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.HoldDemigod
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHoldDemigod_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.DemigodOnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execDemigodOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ReleaseMovement
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execReleaseMovement_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.HoldMovement
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHoldMovement_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.MovementOnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execMovementOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ReleaseTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execReleaseTarget_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.HoldTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHoldTarget_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.TargetOnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execTargetOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.Release
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execRelease_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.Hold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHold_Parms
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Tag;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.OnHold
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execOnHold_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ForceUpdateTargets
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execForceUpdateTargets_Parms
{
};

// Function GearboxFramework.AIComponent.TargetChanged
// [0x00080400] ( FUNC_Native )
struct UAIComponent_execTargetChanged_Parms
{
	class AActor*                                      OldTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewTarget;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.SetTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execSetTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.SetScriptedTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execSetScriptedTarget_Parms
{
	class AActor*                                      NewScriptedTarget;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.GetTargetRecordFor
// [0x00024400] ( FUNC_Native )
struct UAIComponent_execGetTargetRecordFor_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTryParent : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UMindTargetInfo*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.GetTargetRecord
// [0x00024400] ( FUNC_Native )
struct UAIComponent_execGetTargetRecord_Parms
{
	unsigned long                                      bTryParent : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UMindTargetInfo*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.IsTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execIsTarget_Parms
{
	class AActor*                                      TestTarget;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.GetTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execGetTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.HasTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execHasTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ShouldRemoveTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execShouldRemoveTarget_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.TargetRemoved
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execTargetRemoved_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.ForceRemoveTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execForceRemoveTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.ValidCurrentTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execValidCurrentTarget_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ValidTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execValidTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.PrioritizeTarget
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UAIComponent_execPrioritizeTarget_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.CalcTargetInfo
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UAIComponent_execCalcTargetInfo_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.ChooseBestTarget
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UAIComponent_execChooseBestTarget_Parms
{
};

// Function GearboxFramework.AIComponent.InheritTargets
// [0x00080400] ( FUNC_Native )
struct UAIComponent_execInheritTargets_Parms
{
	class UAIComponent*                                Parent;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GearboxFramework.AIComponent.RemoveTargets
// [0x00080400] ( FUNC_Native )
struct UAIComponent_execRemoveTargets_Parms
{
};

// Function GearboxFramework.AIComponent.FindTargets
// [0x00080400] ( FUNC_Native )
struct UAIComponent_execFindTargets_Parms
{
};

// Function GearboxFramework.AIComponent.GetTargets
// [0x00080400] ( FUNC_Native )
struct UAIComponent_execGetTargets_Parms
{
};

// Function GearboxFramework.AIComponent.InitializeTargetRecord
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execInitializeTargetRecord_Parms
{
	class UMindTargetInfo*                             TargetRec;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.NotifyAttackedBy
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execNotifyAttackedBy_Parms
{
	class AActor*                                      Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIComponent.AddTarget
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execAddTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMindTargetInfo*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.GetParentComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIComponent_execGetParentComponent_Parms
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.AIComponent.GetAllegiance
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execGetAllegiance_Parms
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponent.ClearState
// [0x00020400] ( FUNC_Native )
struct UAIComponent_execClearState_Parms
{
};

// Function GearboxFramework.AIComponent.ActivateEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIComponent_execActivateEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AICostExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UAICostExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.FlushPools
// [0x00020400] ( FUNC_Native )
struct UAIFactoryBase_execFlushPools_Parms
{
};

// Function GearboxFramework.AIFactoryBase.ReturnAIDef
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnAIDef_Parms
{
	class UAIDefinition*                               InAIDef;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetAIDef
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetAIDef_Parms
{
	class UAIDefinition*                               AIDefTemplate;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAIDefinition*                               OutAIDef;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnTargetRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnTargetRecord_Parms
{
	class UMindTargetInfo*                             InTargetRecord;                                   		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetTargetRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetTargetRecord_Parms
{
	class UClass*                                      InfoClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMindTargetInfo*                             OutTargetRecord;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnActionSequence
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnActionSequence_Parms
{
	class UActionSequence*                             InSequence;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetActionSequence
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetActionSequence_Parms
{
	class UActionSequence*                             SequenceTemplate;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UActionSequence*                             OutSequence;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnRuleSet
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnRuleSet_Parms
{
	class URuleSet*                                    InRuleSet;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetRuleSetFromArchetype
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetRuleSetFromArchetype_Parms
{
	class URuleSet*                                    RuleSetArchetype;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URuleSet*                                    OutRuleSet;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	TArray< class URule* >                             CurRunningRules;                                  		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnKnowledgeRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnKnowledgeRecord_Parms
{
	class UKnowledgeRecord*                            InKR;                                             		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordListFromArchetypes
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetKnowledgeRecordListFromArchetypes_Parms
{
	TArray< class UKnowledgeRecord* >                  KnowledgeRecordTemplates;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< class UKnowledgeRecord* >                  KnowledgeRecords;                                 		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordFromArchetype
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetKnowledgeRecordFromArchetype_Parms
{
	class UKnowledgeRecord*                            InKR;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UKnowledgeRecord*                            OutKR;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetKnowledgeRecord_Parms
{
	class UClass*                                      KnowledgeRecordClass;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UKnowledgeRecord*                            OutKR;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnRule
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnRule_Parms
{
	class URule*                                       InRule;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIFactoryBase.GetRuleFromArchetype
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetRuleFromArchetype_Parms
{
	class URule*                                       InRule;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URule*                                       OutRule;                                          		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.GetRule
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execGetRule_Parms
{
	class UClass*                                      RuleClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URule*                                       OutRule;                                          		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIFactoryBase.ReturnRuleEngine
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIFactoryBase_execReturnRuleEngine_Parms
{
	class URuleEngine*                                 InRuleEngine;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAIFactory.FreeRuleEngine
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxAIFactory_execFreeRuleEngine_Parms
{
	class URuleEngine*                                 InRuleEngine;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAIFactory.GetRuleEngineFromTemplate
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAIFactory_execGetRuleEngineFromTemplate_Parms
{
	class URuleEngine*                                 OutRuleEngine;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class URuleEngine*                                 RuleEngineTemplate;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIResourceExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UAIResourceExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AllegianceExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UAllegianceExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Behavior_SendGbxMessage.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_SendGbxMessage_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FVector                                  MsgLocation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SendGbxMessage.GetLocation
// [0x00040003] ( FUNC_Final )
struct UBehavior_SendGbxMessage_execGetLocation_Parms
{
	unsigned char                                      SelectionParam;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ContextObject;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SelfObject;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UITargetable*                             Targetable;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SendGbxMessage.GetMessageParameter
// [0x00040003] ( FUNC_Final )
struct UBehavior_SendGbxMessage_execGetMessageParameter_Parms
{
	unsigned char                                      SelectionParam;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ContextObject;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SelfObject;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Behavior_SetFlag.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_SetFlag_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.ExposureUtilityBase.CalculateVantageToPoint
// [0x00420400] ( FUNC_Native )
struct UExposureUtilityBase_execCalculateVantageToPoint_Parms
{
	class AActor*                                      pLooker;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TargetPoint;                                      		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ExposureUtilityBase.CalculateTargetExposure
// [0x00020400] ( FUNC_Native )
struct UExposureUtilityBase_execCalculateTargetExposure_Parms
{
	class AGearboxPawn*                                pLooker;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      pTarget;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FiringBehaviorManager.GetTemplateClass
// [0x00022802] ( FUNC_Event )
struct UFiringBehaviorManager_eventGetTemplateClass_Parms
{
	class UObject*                                     TemplateObject;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FiringZoneCollectionDefinition.GetZoneForDistance
// [0x00020802] ( FUNC_Event )
struct UFiringZoneCollectionDefinition_eventGetZoneForDistance_Parms
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UFiringZoneDefinition*                       ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FlagDefinition.ApplyFlagInitializationData
// [0x00422400] ( FUNC_Native )
struct UFlagDefinition_execApplyFlagInitializationData_Parms
{
	TArray< struct FFlagDefinitionInitialization >     FlagsToSet;                                       		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UObject*                                     ContextSource;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.FlagDefinition.ResolveContext
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UFlagDefinition_execResolveContext_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FlagDefinition.SetTrueTimed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UFlagDefinition_execSetTrueTimed_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeSeconds;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FlagDefinition.SetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UFlagDefinition_execSetValue_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Value : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.FlagExpressionEvaluator.Evaluate
// [0x00020400] ( FUNC_Native )
struct UFlagExpressionEvaluator_execEvaluate_Parms
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GbxMessage.InitializeFromDefinition
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGbxMessage_execInitializeFromDefinition_Parms
{
	class UGbxMessageDefinition*                       InDefinition;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     RadiusContextSource;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     InSender;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     InSubject;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UPawnAllegiance*                             ManualSenderAllegiance;                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GbxMessageManager.RemoveListener
// [0x00020400] ( FUNC_Native )
struct UGbxMessageManager_execRemoveListener_Parms
{
	class UIGbxMessageListener*                        InListener;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GbxMessageManager.AddListener
// [0x00020400] ( FUNC_Native )
struct UGbxMessageManager_execAddListener_Parms
{
	class UIGbxMessageListener*                        InListener;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GbxMessageManager.PostMessage
// [0x00020400] ( FUNC_Native )
struct UGbxMessageManager_execPostMessage_Parms
{
	class UGbxMessage*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GbxMessageManager.AllocateMessage
// [0x00020400] ( FUNC_Native )
struct UGbxMessageManager_execAllocateMessage_Parms
{
	class UGbxMessage*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.InitSequence
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execInitSequence_Parms
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetAllegiance
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAllegiance_Parms
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetAIDefinition
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAIDefinition_Parms
{
	class UAIDefinition*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetAIComponent
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAIComponent_Parms
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxMind.GetAIParent
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAIParent_Parms
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetAILocation
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAILocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetAIActor
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetAIActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.CanTickAI
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execCanTickAI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.InGodMode
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execInGodMode_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.PawnDied
// [0x00020002] 
struct AGearboxMind_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.OnTargetPriority
// [0x00020002] 
struct AGearboxMind_execOnTargetPriority_Parms
{
	class UGearboxSeqAct_TargetPriority*               inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.Behavior_SetCanTarget
// [0x00020002] 
struct AGearboxMind_execBehavior_SetCanTarget_Parms
{
	unsigned char                                      ChangeStatus;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetNoTargetAllEnemies
// [0x00022400] ( FUNC_Native )
struct AGearboxMind_execGetNoTargetAllEnemies_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.SetNoTargetAllEnemies
// [0x00022400] ( FUNC_Native )
struct AGearboxMind_execSetNoTargetAllEnemies_Parms
{
	unsigned long                                      bNoTarget : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.ClearScriptedMoveTarget
// [0x00020802] ( FUNC_Event )
struct AGearboxMind_eventClearScriptedMoveTarget_Parms
{
};

// Function GearboxFramework.GearboxMind.IsCloseEnoughToScriptedMoveTarget
// [0x00020802] ( FUNC_Event )
struct AGearboxMind_eventIsCloseEnoughToScriptedMoveTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetWeaponFireLocation
// [0x00020802] ( FUNC_Event )
struct AGearboxMind_eventGetWeaponFireLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.ActivateEventRule
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execActivateEventRule_Parms
{
	struct FName                                       RuleEventName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.AddHitTargetRecord
// [0x00020002] 
struct AGearboxMind_execAddHitTargetRecord_Parms
{
	class AGearboxPawn*                                HitByPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewHitLocation;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              flNewDamage;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.StopMovement
// [0x00020002] 
struct AGearboxMind_execStopMovement_Parms
{
};

// Function GearboxFramework.GearboxMind.Possess
// [0x00020802] ( FUNC_Event )
struct AGearboxMind_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetGearboxRuleEngine
// [0x00020002] 
struct AGearboxMind_execGetGearboxRuleEngine_Parms
{
	class UGearboxRuleEngine*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.GetRuleEngine
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetRuleEngine_Parms
{
	class URuleEngine*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.NotifyShotAtBy
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execNotifyShotAtBy_Parms
{
	class AGearboxPawn*                                ShootingPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.FindCoverAndClaim
// [0x00424400] ( FUNC_Native )
struct AGearboxMind_execFindCoverAndClaim_Parms
{
	struct FVector                                     CoverSearchOrigin;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPawnMoveLocationRequest*                    LocationRequest;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutDestination;                                   		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              MinSearchRadius;                                  		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxSearchRadius;                                  		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnactCoverChanges : 1;                           		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.UpdateRuleEngineKnowledge
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execUpdateRuleEngineKnowledge_Parms
{
	class UClass*                                      aKDBClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetCurrentTargetInfo
// [0x00420400] ( FUNC_Native )
struct AGearboxMind_execGetCurrentTargetInfo_Parms
{
	class UMindTargetInfo*                             OutTargetRec;                                     		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsSameAllegianceMind
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsSameAllegianceMind_Parms
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsSameAllegiance
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsSameAllegiance_Parms
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsNeutralMind
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsNeutralMind_Parms
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsNeutral
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsNeutral_Parms
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsFriendlyMind
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsFriendlyMind_Parms
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsFriendly
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsFriendly_Parms
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsEnemyMind
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsEnemyMind_Parms
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.IsEnemy
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execIsEnemy_Parms
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.WantsToWalk
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execWantsToWalk_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.SetWantsToWalk
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execSetWantsToWalk_Parms
{
	unsigned long                                      bInWantsToWalk : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetFacingPolicy
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetFacingPolicy_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.SetFacingPolicy
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AGearboxMind_execSetFacingPolicy_Parms
{
	unsigned char                                      NewFacingPolicy;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewFacingActor;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     NewFacingVector;                                  		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetCurrentTarget
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execGetCurrentTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxMind.RemoveEnemyFromQueue
// [0x00020400] ( FUNC_Native )
struct AGearboxMind_execRemoveEnemyFromQueue_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxMind.GetNavigationHandle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGearboxMind_execGetNavigationHandle_Parms
{
	class UGearboxNavigationHandle*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsChangingDirection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsChangingDirection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsMantlingOverCoverInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsMantlingOverCoverInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPeekInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsReturnFromPeekInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsPeekTransitionInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsPeekTransitionInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsPeekedUp
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsPeekedUp_Parms
{
	unsigned long                                      bTransitionCounts : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromLeanOutInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsReturnFromLeanOutInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsLeanOutTransitionInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsLeanOutTransitionInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsLeanedOut
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsLeanedOut_Parms
{
	unsigned long                                      bTransitionCounts : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPopUpInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsReturnFromPopUpInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsPopUpTransitionInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsPopUpTransitionInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsPoppedUp
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsPoppedUp_Parms
{
	unsigned long                                      bTransitionCounts : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsExecutingAnyTransition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsExecutingAnyTransition_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetDesiredState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentTransition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetCurrentTransition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.OnMantleOverCoverAnimEnd
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnMantleOverCoverAnimEnd_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEndEx
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnTransitionAnimEndEx_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEnd
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnTransitionAnimEnd_Parms
{
	unsigned char                                      Transition;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxCoverStateManager.OnDismountAnimEnd
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnDismountAnimEnd_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.OnMountAnimEnd
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnMountAnimEnd_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.MantleOverCover
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execMantleOverCover_Parms
{
	class AActor*                                      CoverActor;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CoverSlotNdx;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.ReturnToCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execReturnToCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.LeanOutForFiring
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execLeanOutForFiring_Parms
{
	unsigned long                                      BlindFire : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.PopUpForFiring
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execPopUpForFiring_Parms
{
	unsigned long                                      BlindFire : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.Peek
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execPeek_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.DetachFromCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execDetachFromCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.DismountCover
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execDismountCover_Parms
{
	unsigned char                                      DismountType;                                     		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.ClaimAndMountCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execClaimAndMountCover_Parms
{
	class ACoverLink*                                  TheCoverLink;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SlotNdx;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.MountDesiredCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execMountDesiredCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.ClearDesiredCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execClearDesiredCover_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverLocationAndRotation
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetCurrentCoverLocationAndRotation_Parms
{
	struct FVector                                     CoverLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    CoverRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverLocationAndRotation
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetDesiredCoverLocationAndRotation_Parms
{
	struct FVector                                     CoverLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    CoverRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxCoverStateManager.HasDesiredCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execHasDesiredCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetLastCoverHeight
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetLastCoverHeight_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverHeight
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetCurrentCoverHeight_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverHeight
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetDesiredCoverHeight_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.WasCoveredFrom
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execWasCoveredFrom_Parms
{
	struct FVector                                     ThreatLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.WillBeCoveredFrom
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execWillBeCoveredFrom_Parms
{
	struct FVector                                     ThreatLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsCoveredFrom
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsCoveredFrom_Parms
{
	struct FVector                                     ThreatLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsDismountInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsDismountInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsMountInProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsMountInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.WasMountedOnCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execWasMountedOnCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsMountedOnCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsMountedOnCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.IsUsingCover
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execIsUsingCover_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.OnCoverStateChanged
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execOnCoverStateChanged_Parms
{
};

// Function GearboxFramework.GearboxCoverStateManager.GetLastCover
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetLastCover_Parms
{
	class AActor*                                      OutCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OutSlotNdx;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCover
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetCurrentCover_Parms
{
	class AActor*                                      OutCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OutSlotNdx;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCover
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execGetDesiredCover_Parms
{
	class AActor*                                      OutCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OutSlotNdx;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxCoverStateManager.FindCoverAndClaim
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UGearboxCoverStateManager_execFindCoverAndClaim_Parms
{
	class AGearboxMind*                                TheMind;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CoverSearchOrigin;                                		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPawnMoveLocationRequest*                    LocationRequest;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutDestination;                                   		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              MinSearchRadius;                                  		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxSearchRadius;                                  		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnactCoverChanges : 1;                           		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxCoverStateManager.Initialize
// [0x00020003] ( FUNC_Final )
struct UGearboxCoverStateManager_execInitialize_Parms
{
	class AGearboxPawn*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxNavigationHandle.SetDesiredMovementSpeed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxNavigationHandle_execSetDesiredMovementSpeed_Parms
{
	unsigned char                                      Speed;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxNavigationHandle.ClearAnchor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxNavigationHandle_execClearAnchor_Parms
{
};

// Function GearboxFramework.GearboxNavigationHandle.GetNearestPositionOnNavMesh
// [0x00426400] ( FUNC_Native )
struct UGearboxNavigationHandle_execGetNearestPositionOnNavMesh_Parms
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TestLoc;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FBasedPosition                              NearestPos;                                       		// 0x0010 (0x0034) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FNavMeshPathParams                          PolyUsableCheckParams;                            		// 0x0044 (0x0050) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FGBXNavMeshPolyRef                          NearestPoly;                                      		// 0x0094 (0x0008) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      bAnyHeight : 1;                                   		// 0x009C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x00A0 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.GetNavMeshPolyForPoint
// [0x00426400] ( FUNC_Native )
struct UGearboxNavigationHandle_execGetNavMeshPolyForPoint_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FGBXNavMeshPolyRef                          FoundPoly;                                        		// 0x000C (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FNavMeshPathParams                          PolyUsableCheckParams;                            		// 0x0014 (0x0050) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.IsDoingSpecialMove
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execIsDoingSpecialMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.InFinalPoly
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execInFinalPoly_Parms
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.NeedsRegularWalkingPhysics
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execNeedsRegularWalkingPhysics_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.PopulatePathfindingParamCache
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execPopulatePathfindingParamCache_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.TrySpecialMove
// [0x00420400] ( FUNC_Native )
struct UGearboxNavigationHandle_execTrySpecialMove_Parms
{
	struct FBasedPosition                              MoveTarget;                                       		// 0x0000 (0x0034) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.Finished
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execFinished_Parms
{
};

// Function GearboxFramework.GearboxNavigationHandle.IsGoalValid
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execIsGoalValid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.MovePawnToGoal
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execMovePawnToGoal_Parms
{
};

// Function GearboxFramework.GearboxNavigationHandle.PathIsValid
// [0x00424400] ( FUNC_Native )
struct UGearboxNavigationHandle_execPathIsValid_Parms
{
	struct FPathFindData                               Data;                                             		// 0x0000 (0x0058) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bCheckAnchor : 1;                                 		// 0x0058 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.IsFollowingPath
// [0x00020400] ( FUNC_Native )
struct UGearboxNavigationHandle_execIsFollowingPath_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.ClearPath
// [0x00024400] ( FUNC_Native )
struct UGearboxNavigationHandle_execClearPath_Parms
{
	unsigned long                                      bStopMovement : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowDelayedClear : 1;                           		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.FollowPath
// [0x00420400] ( FUNC_Native )
struct UGearboxNavigationHandle_execFollowPath_Parms
{
	struct FPathFindData                               Data;                                             		// 0x0000 (0x0058) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxNavigationHandle.CreatePathToLocation
// [0x00424400] ( FUNC_Native )
struct UGearboxNavigationHandle_execCreatePathToLocation_Parms
{
	struct FPathFindData                               PathData;                                         		// 0x0000 (0x0058) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     DestLocation;                                     		// 0x0058 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FGBXNavMeshPolyRef                          DestPoly;                                         		// 0x0064 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAdjustStartForMotion : 1;                        		// 0x006C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.WantsToStopListening
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execWantsToStopListening_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.GetActor
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.GetListenerLocation
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execGetListenerLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.GetAllegiance
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execGetAllegiance_Parms
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.ReceiveMessage
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execReceiveMessage_Parms
{
	class UGbxMessage*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IGbxMessageListener.CaresAboutMessage
// [0x00020400] ( FUNC_Native )
struct UIGbxMessageListener_execCaresAboutMessage_Parms
{
	class UGbxMessage*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IRuleEngineOwner.GetRuleEngine
// [0x00020400] ( FUNC_Native )
struct UIRuleEngineOwner_execGetRuleEngine_Parms
{
	class URuleEngine*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.KnowledgeRecord.RecordEvalCallback
// [0x00020800] ( FUNC_Event )
struct UKnowledgeRecord_eventRecordEvalCallback_Parms
{
	class URuleEngine*                                 EvalRuleEngine;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.MindTargetInfo.GetAverageHitTime
// [0x00020400] ( FUNC_Native )
struct UMindTargetInfo_execGetAverageHitTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.MindTargetInfo.AddHitTargetRecord
// [0x00020400] ( FUNC_Native )
struct UMindTargetInfo_execAddHitTargetRecord_Parms
{
	struct FVector                                     vecNewHitLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              flNewDamage;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Rule.GetRuleName
// [0x00020400] ( FUNC_Native )
struct URule_execGetRuleName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Rule.GetRuleFName
// [0x00020400] ( FUNC_Native )
struct URule_execGetRuleFName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Rule.GetOtherEventParticipant
// [0x00020002] 
struct URule_execGetOtherEventParticipant_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.ApplyFlagInitializationData
// [0x00420400] ( FUNC_Native )
struct URuleEngine_execApplyFlagInitializationData_Parms
{
	TArray< struct FFlagDefinitionInitialization >     FlagsToSet;                                       		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.RuleEngine.IsResourceInUse
// [0x00020002] 
struct URuleEngine_execIsResourceInUse_Parms
{
	class UClass*                                      TestResourceClass;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.GetContextSource
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execGetContextSource_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.IsRunningRuleWhichBlocksRuleSetChange
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execIsRunningRuleWhichBlocksRuleSetChange_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.GetDynamicFlagValue
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execGetDynamicFlagValue_Parms
{
	class UFlagDefinition*                             FlagDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.SetDynamicFlagDefTrueTimed
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execSetDynamicFlagDefTrueTimed_Parms
{
	class UFlagDefinition*                             FlagDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.RuleEngine.SetDynamicFlagDefValue
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execSetDynamicFlagDefValue_Parms
{
	class UFlagDefinition*                             FlagDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Value : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.RuleEngine.GetRuleSetFromReference
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execGetRuleSetFromReference_Parms
{
	struct FName                                       ReferenceName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URuleSet*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.ClearRuleSetStack
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execClearRuleSetStack_Parms
{
};

// Function GearboxFramework.RuleEngine.PopRuleSetSwitch
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execPopRuleSetSwitch_Parms
{
};

// Function GearboxFramework.RuleEngine.PushRuleSetSwitch
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execPushRuleSetSwitch_Parms
{
	class URuleSet*                                    NewRuleSetTemplate;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.SetRuleSet
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execSetRuleSet_Parms
{
	class URuleSet*                                    NewRuleSetTemplate;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.RuleEngine.SwitchActiveRuleSet
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execSwitchActiveRuleSet_Parms
{
	class URuleSet*                                    NewRuleSetTemplate;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.RuleEngine.UpdateKnowledge
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execUpdateKnowledge_Parms
{
	class UClass*                                      pKnowledgeRecordType;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.RuleEngine.ActivateEventRuleEx
// [0x00024400] ( FUNC_Native )
struct URuleEngine_execActivateEventRuleEx_Parms
{
	struct FName                                       EventDefName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class AGearboxPawn* >                      Participants;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      Subject;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      CastSizeMustMatch : 1;                            		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.CleanUpRuleEngineData
// [0x00020400] ( FUNC_Native )
struct URuleEngine_execCleanUpRuleEngineData_Parms
{
};

// Function GearboxFramework.RuleEngine.ActivateEventRule
// [0x00024400] ( FUNC_Native )
struct URuleEngine_execActivateEventRule_Parms
{
	struct FName                                       EventDefName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AGearboxPawn*                                Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      Subject;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      CastSizeMustMatch : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.RuleEngine.ActivateEventRuleByDefinition
// [0x00024400] ( FUNC_Native )
struct URuleEngine_execActivateEventRuleByDefinition_Parms
{
	class URuleEventDef*                               EventDefinition;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxRuleEngine.Initialize
// [0x00020400] ( FUNC_Native )
struct UGearboxRuleEngine_execInitialize_Parms
{
	class AGearboxPawn*                                NewGearboxPawn;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGearboxMind*                                NewMind;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxAIFactory*                           NewAIFactory;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxRuleEngine.GetContextSource
// [0x00020400] ( FUNC_Native )
struct UGearboxRuleEngine_execGetContextSource_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.TargetIterator.RecordEvalCallback
// [0x00022800] ( FUNC_Event )
struct UTargetIterator_eventRecordEvalCallback_Parms
{
	class URuleEngine*                                 EvalRuleEngine;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialMovementHoldTime
// [0x00020000] 
struct UIPopulationSpawnPoint_execGetInitialMovementHoldTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialDestination
// [0x00020000] 
struct UIPopulationSpawnPoint_execGetInitialDestination_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IPopulationSpawnPoint.GetInitialActionType
// [0x00020000] 
struct UIPopulationSpawnPoint_execGetInitialActionType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IPopulationSpawnPoint.GetSpawnStyleType
// [0x00020000] 
struct UIPopulationSpawnPoint_execGetSpawnStyleType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationDefinition.IsAllSpawnTypesDebugEnabled
// [0x00022400] ( FUNC_Native )
struct UPopulationDefinition_execIsAllSpawnTypesDebugEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationDefinition.ToggleAllSpawnTypesDebug
// [0x00022400] ( FUNC_Native )
struct UPopulationDefinition_execToggleAllSpawnTypesDebug_Parms
{
};

// Function GearboxFramework.PopulationDefinition.GetRandomFactory
// [0x00020400] ( FUNC_Native )
struct UPopulationDefinition_execGetRandomFactory_Parms
{
	class APopulationOpportunity*                      SpawningOpportunity;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPopulationFactory*                          ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.GetDescriptionOfFactoryOutput
// [0x00020802] ( FUNC_Event )
struct UPopulationFactory_eventGetDescriptionOfFactoryOutput_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.PopulationFactory.ShouldSavePopulationActor
// [0x00022802] ( FUNC_Event )
struct UPopulationFactory_eventShouldSavePopulationActor_Parms
{
	class UPopulationMaster*                           Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ActorToSave;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.DestroyPopulationActor
// [0x00026802] ( FUNC_Event )
struct UPopulationFactory_eventDestroyPopulationActor_Parms
{
	class UPopulationMaster*                           Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nOpportunityIdx;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ActorToDestroy;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPopulationFactory*                          SpawnFactory;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CreationFlags;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontSaveActor : 1;                               		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.CreatePopulationActor
// [0x00020802] ( FUNC_Event )
struct UPopulationFactory_eventCreatePopulationActor_Parms
{
	class UPopulationMaster*                           Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APopulationOpportunity*                      Opportunity;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.GetSpawnVisibilityBounds
// [0x00820802] ( FUNC_Event )
struct UPopulationFactory_eventGetSpawnVisibilityBounds_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBoxSphereBounds                            ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FBoxSphereBounds                         Bounds;                                           		// 0x0024 (0x001C) [0x0000000000000000]              
};

// Function GearboxFramework.PopulationFactory.GetActorAllegiance
// [0x00020400] ( FUNC_Native )
struct UPopulationFactory_execGetActorAllegiance_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.GetActorSpawnCost
// [0x00020802] ( FUNC_Event )
struct UPopulationFactory_eventGetActorSpawnCost_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCanSpawnTest : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.OnSpawnActor
// [0x00020802] ( FUNC_Event )
struct UPopulationFactory_eventOnSpawnActor_Parms
{
	class AActor*                                      aNewActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationFactory.SetupMatineeForActor
// [0x00022800] ( FUNC_Event )
struct UPopulationFactory_eventSetupMatineeForActor_Parms
{
	class AActor*                                      aNewActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationFactory.GetSpawnFactory
// [0x00020400] ( FUNC_Native )
struct UPopulationFactory_execGetSpawnFactory_Parms
{
	class APopulationOpportunity*                      SpawningOpportunity;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPopulationFactory*                          ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.GetSpawnProbabilityAtThisGameStage
// [0x00020400] ( FUNC_Native )
struct UPopulationFactory_execGetSpawnProbabilityAtThisGameStage_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.IsFactoryWithin
// [0x00020400] ( FUNC_Native )
struct UPopulationFactory_execIsFactoryWithin_Parms
{
	class UPopulationFactory*                          TestFactory;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactory.CanSpawn
// [0x00020400] ( FUNC_Native )
struct UPopulationFactory_execCanSpawn_Parms
{
	class APopulationOpportunity*                      SpawningOpportunity;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactoryGeneric.CreatePopulationActor
// [0x00020802] ( FUNC_Event )
struct UPopulationFactoryGeneric_eventCreatePopulationActor_Parms
{
	class UPopulationMaster*                           Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APopulationOpportunity*                      Opportunity;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactoryGeneric.GetSpawnVisibilityBounds
// [0x00020802] ( FUNC_Event )
struct UPopulationFactoryGeneric_eventGetSpawnVisibilityBounds_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBoxSphereBounds                            ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetSpawnFactory
// [0x00020400] ( FUNC_Native )
struct UPopulationFactoryPopulationDefinition_execGetSpawnFactory_Parms
{
	class APopulationOpportunity*                      SpawningOpportunity;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPopulationFactory*                          ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetActorAllegiance
// [0x00020400] ( FUNC_Native )
struct UPopulationFactoryPopulationDefinition_execGetActorAllegiance_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationFactoryPopulationDefinition.IsFactoryWithin
// [0x00020400] ( FUNC_Native )
struct UPopulationFactoryPopulationDefinition_execIsFactoryWithin_Parms
{
	class UPopulationFactory*                          TestFactory;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.GetActorSpawnedFromOpportunity
// [0x00024400] ( FUNC_Native )
struct UPopulationMaster_execGetActorSpawnedFromOpportunity_Parms
{
	class APopulationOpportunity*                      Opportunity;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ActorIndex;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.GetSavedActorDebugInfoForOpportunity
// [0x00420400] ( FUNC_Native )
struct UPopulationMaster_execGetSavedActorDebugInfoForOpportunity_Parms
{
	int                                                OpportunityIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           SavedActorsDebugInfo;                             		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.PopulationMaster.GetNumberOfSavedActorsForOpportunity
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execGetNumberOfSavedActorsForOpportunity_Parms
{
	int                                                OpportunityIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.WillActorsOpportunityBeResetOnLevelLoad
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execWillActorsOpportunityBeResetOnLevelLoad_Parms
{
	class AActor*                                      TestActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.ResetRespawn
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execResetRespawn_Parms
{
};

// Function GearboxFramework.PopulationMaster.GetStreamingLevelForActor
// [0x00022400] ( FUNC_Native )
struct UPopulationMaster_execGetStreamingLevelForActor_Parms
{
	class AActor*                                      OpportunityInLevel;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULevelStreaming*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactories
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPopulationMaster_execHasCapacityToSpawnFromFactories_Parms
{
	TArray< class UPopulationFactory* >                TheFactories;                                     		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                GameStage;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPopulationMaster_execHasCapacityToSpawnFromFactory_Parms
{
	class UPopulationFactory*                          TheFactory;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.IsPopulationSystemAtCapacity
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPopulationMaster_execIsPopulationSystemAtCapacity_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.StatProfileStop
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execStatProfileStop_Parms
{
	int                                                nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.StatProfileStart
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execStatProfileStart_Parms
{
	int                                                nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.GetStatProfileTime
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execGetStatProfileTime_Parms
{
	int                                                nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.AddSavedActor
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execAddSavedActor_Parms
{
	int                                                OpportunityIdx;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TheActor;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPopulationFactory*                          SpawnFactory;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CreationFlags;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.DisconnectEncounter
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execDisconnectEncounter_Parms
{
	class APopulationEncounter*                        Encounter;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.ConnectEncounter
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execConnectEncounter_Parms
{
	class APopulationEncounter*                        Encounter;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.DisconnectOpportunity
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execDisconnectOpportunity_Parms
{
	class APopulationOpportunity*                      DeactivatedOpportunity;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSaveState : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.ConnectOpportunity
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execConnectOpportunity_Parms
{
	class APopulationOpportunity*                      ActivatedOpportunity;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.GetWorldInfo
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execGetWorldInfo_Parms
{
	class AWorldInfo*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.DestroySpawnedActors
// [0x00024400] ( FUNC_Native )
struct UPopulationMaster_execDestroySpawnedActors_Parms
{
	class APopulationOpportunity*                      Opportunity;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontSaveActors : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.RemoveSpawnedActor
// [0x00024400] ( FUNC_Native )
struct UPopulationMaster_execRemoveSpawnedActor_Parms
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bKeepBody : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bActorDied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.SetSpawnedActorsReuse
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execSetSpawnedActorsReuse_Parms
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bReuse : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.AddExternalActor
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execAddExternalActor_Parms
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      FactoryClass;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationMaster.SpawnActorFromOpportunity
// [0x00024400] ( FUNC_Native )
struct UPopulationMaster_execSpawnActorFromOpportunity_Parms
{
	class UPopulationFactory*                          TheFactory;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                OpportunityIdx;                                   		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PopOppFlags;                                      		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCanSave : 1;                                     		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForceSpawn : 1;                                  		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0038 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.SpawnActor
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execSpawnActor_Parms
{
	class UPopulationFactory*                          TheFactory;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rarity;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.GetPopulationOpportunityIndex
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execGetPopulationOpportunityIndex_Parms
{
	class APopulationOpportunity*                      Opportunity;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.GetActorsOpportunity
// [0x00020400] ( FUNC_Native )
struct UPopulationMaster_execGetActorsOpportunity_Parms
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APopulationOpportunity*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMaster.SpawnPopulationControlledActor
// [0x00024400] ( FUNC_Native )
struct UPopulationMaster_execSpawnPopulationControlledActor_Parms
{
	class UClass*                                      SpawnClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SpawnOwner;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       SpawnTag;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ActorTemplate;                                    		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoCollisionFail : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPersistAcrossLevelTransitions : 1;               		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function GearboxFramework.PopulationOpportunity.ClearBodyCompositionInstance
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execClearBodyCompositionInstance_Parms
{
};

// Function GearboxFramework.PopulationOpportunity.ApplyPreviewBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execApplyPreviewBodyComposition_Parms
{
};

// Function GearboxFramework.PopulationOpportunity.GetBodyInfoProvider
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execGetBodyInfoProvider_Parms
{
	class UIBodyInfoProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.ChangeInstanceDataSwitch
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execChangeInstanceDataSwitch_Parms
{
	struct FName                                       SwitchName;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      NewValue;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.PostInitBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execPostInitBodyComposition_Parms
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BodyCompositionIndex;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Mode;                                             		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.PreRemoveBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execPreRemoveBodyComposition_Parms
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BodyCompositionIndex;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.GetNumSpawned
// [0x00020000] 
struct APopulationOpportunity_execGetNumSpawned_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.GetNumAlive
// [0x00020000] 
struct APopulationOpportunity_execGetNumAlive_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.GetNumDied
// [0x00020000] 
struct APopulationOpportunity_execGetNumDied_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.Destroyed
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunity_eventDestroyed_Parms
{
};

// Function GearboxFramework.PopulationOpportunity.GetRarity
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execGetRarity_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.GetGameStage
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execGetGameStage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.GetOpportunityGameStage
// [0x00420400] ( FUNC_Native )
struct APopulationOpportunity_execGetOpportunityGameStage_Parms
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.TriggerKismetAllSpawnedEvent
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunity_eventTriggerKismetAllSpawnedEvent_Parms
{
};

// Function GearboxFramework.PopulationOpportunity.ClearSequenceActionLink
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunity_eventClearSequenceActionLink_Parms
{
};

// Function GearboxFramework.PopulationOpportunity.SetSequenceActionLink
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunity_eventSetSequenceActionLink_Parms
{
	class UGearboxSeqAct_PopulationOpportunityLink*    Link;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.SetEnabledStatus
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execSetEnabledStatus_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.OnToggle
// [0x00020102] 
struct APopulationOpportunity_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.GetNumLeftToSpawnAndStillAlive
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APopulationOpportunity_execGetNumLeftToSpawnAndStillAlive_Parms
{
	int                                                NumLeftToSpawn;                                   		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                NumStillAlive;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.PopulationOpportunity.GetNextSpawnTime
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execGetNextSpawnTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunity.RespawnKilledActors
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execRespawnKilledActors_Parms
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunity.DoSpawning
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunity_execDoSpawning_Parms
{
	class UPopulationMaster*                           PopMaster;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityArea.ApplyPreviewBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityArea_execApplyPreviewBodyComposition_Parms
{
};

// Function GearboxFramework.PopulationOpportunityArea.GetBodyInfoProvider
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityArea_execGetBodyInfoProvider_Parms
{
	class UIBodyInfoProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityArea.RespawnKilledActors
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityArea_execRespawnKilledActors_Parms
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityArea.DoSpawning
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityArea_execDoSpawning_Parms
{
	class UPopulationMaster*                           PopMaster;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityCloner.ApplyPreviewBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCloner_execApplyPreviewBodyComposition_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCloner.GetBodyInfoProvider
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCloner_execGetBodyInfoProvider_Parms
{
	class UIBodyInfoProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCloner.CloneTimer
// [0x00020002] 
struct APopulationOpportunityCloner_execCloneTimer_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCloner.RespawnKilledActors
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCloner_execRespawnKilledActors_Parms
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityCloner.DoSpawning
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCloner_execDoSpawning_Parms
{
	class UPopulationMaster*                           PopMaster;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityCombat.ApplyPreviewBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execApplyPreviewBodyComposition_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCombat.GetBodyInfoProvider
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execGetBodyInfoProvider_Parms
{
	class UIBodyInfoProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetSingleDeathEvent
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunityCombat_eventTriggerKismetSingleDeathEvent_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetDeathEvent
// [0x00020802] ( FUNC_Event )
struct APopulationOpportunityCombat_eventTriggerKismetDeathEvent_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumSpawned
// [0x00020002] 
struct APopulationOpportunityCombat_execGetNumSpawned_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumAlive
// [0x00020002] 
struct APopulationOpportunityCombat_execGetNumAlive_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.GetNumDied
// [0x00020002] 
struct APopulationOpportunityCombat_execGetNumDied_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.WantsToStopListening
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execWantsToStopListening_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.GetActor
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.GetListenerLocation
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execGetListenerLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.GetAllegiance
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execGetAllegiance_Parms
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.ReceiveMessage
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execReceiveMessage_Parms
{
	class UGbxMessage*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.CaresAboutMessage
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execCaresAboutMessage_Parms
{
	class UGbxMessage*                                 Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityCombat.PostBeginPlay
// [0x00020102] 
struct APopulationOpportunityCombat_execPostBeginPlay_Parms
{
};

// Function GearboxFramework.PopulationOpportunityCombat.EnableDebugging
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execEnableDebugging_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityCombat.RespawnKilledActors
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execRespawnKilledActors_Parms
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityCombat.DoSpawning
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityCombat_execDoSpawning_Parms
{
	class UPopulationMaster*                           PopMaster;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityPoint.ClearBodyCompositionInstance
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execClearBodyCompositionInstance_Parms
{
};

// Function GearboxFramework.PopulationOpportunityPoint.ApplyPreviewBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execApplyPreviewBodyComposition_Parms
{
};

// Function GearboxFramework.PopulationOpportunityPoint.GetBodyInfoProvider
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execGetBodyInfoProvider_Parms
{
	class UIBodyInfoProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityPoint.ChangeInstanceDataSwitch
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execChangeInstanceDataSwitch_Parms
{
	struct FName                                       SwitchName;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      NewValue;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityPoint.PostInitBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execPostInitBodyComposition_Parms
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BodyCompositionIndex;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Mode;                                             		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityPoint.PreRemoveBodyComposition
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execPreRemoveBodyComposition_Parms
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BodyCompositionIndex;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialMovementHoldTime
// [0x00020002] 
struct APopulationOpportunityPoint_execGetInitialMovementHoldTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialDestination
// [0x00020002] 
struct APopulationOpportunityPoint_execGetInitialDestination_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityPoint.GetInitialActionType
// [0x00020002] 
struct APopulationOpportunityPoint_execGetInitialActionType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityPoint.GetSpawnStyleType
// [0x00020002] 
struct APopulationOpportunityPoint_execGetSpawnStyleType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationOpportunityPoint.RespawnKilledActors
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execRespawnKilledActors_Parms
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationOpportunityPoint.DoSpawning
// [0x00020400] ( FUNC_Native )
struct APopulationOpportunityPoint_execDoSpawning_Parms
{
	class UPopulationMaster*                           PopMaster;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationPoint.CanSpawnFromFactory
// [0x00020400] ( FUNC_Native )
struct APopulationPoint_execCanSpawnFromFactory_Parms
{
	class UPopulationFactory*                          Factory;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AwesomeLevel;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.GetSpawnRotation
// [0x00020400] ( FUNC_Native )
struct APopulationPoint_execGetSpawnRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.GetSpawnLocation
// [0x00020400] ( FUNC_Native )
struct APopulationPoint_execGetSpawnLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.ActorSpawned
// [0x00020400] ( FUNC_Native )
struct APopulationPoint_execActorSpawned_Parms
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.PopulationPoint.GetInitialMovementHoldTime
// [0x00020002] 
struct APopulationPoint_execGetInitialMovementHoldTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.GetInitialDestination
// [0x00020002] 
struct APopulationPoint_execGetInitialDestination_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.RandomizeInitialDestinations
// [0x00020002] 
struct APopulationPoint_execRandomizeInitialDestinations_Parms
{
	// TArray< class AActor* >                         TempDestinations;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.PopulationPoint.GetInitialActionType
// [0x00020002] 
struct APopulationPoint_execGetInitialActionType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.GetSpawnStyleType
// [0x00020002] 
struct APopulationPoint_execGetSpawnStyleType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationPoint.OnToggle
// [0x00020102] 
struct APopulationPoint_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SeqEvent_EncounterWaveComplete.NotifyWaveComplete
// [0x00020400] ( FUNC_Native )
struct USeqEvent_EncounterWaveComplete_execNotifyWaveComplete_Parms
{
	int                                                nWave;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SeqEvent_PopulatedActor.NotifyPopulatedActor
// [0x00020802] ( FUNC_Event )
struct USeqEvent_PopulatedActor_eventNotifyPopulatedActor_Parms
{
	class AActor*                                      PopulatedActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APopulationOpportunity*                      InDestPopulationOpportunity;                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      InSpawnPoint;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  InOriginator;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SeqEvent_PopulatedPoint.NotifyPopulatedActor
// [0x00020802] ( FUNC_Event )
struct USeqEvent_PopulatedPoint_eventNotifyPopulatedActor_Parms
{
	class AActor*                                      PopulatedActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APopulationOpportunity*                      InDestPopulationOpportunity;                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      InSpawnPoint;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  InOriginator;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnReset
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnReset_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIDefinition.OnHitByVehicle
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnHitByVehicle_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class AVehicle*                                    Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnRanOver
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnRanOver_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class AVehicle*                                    Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnTimerEvent
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTimerEvent_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FName                                       SpecializedEventName;                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnKilledPawn
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnKilledPawn_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnLanded
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnLanded_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIDefinition.OnStopFiringWeapon
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnStopFiringWeapon_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIDefinition.OnStartFiringWeapon
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnStartFiringWeapon_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIDefinition.OnTargetLost
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTargetLost_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     OldTarget;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnTargetChanged
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTargetChanged_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     OldTarget;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     NewTarget;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnTargetAcquired
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTargetAcquired_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     NewTarget;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnSpawned
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnSpawned_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.AIDefinition.OnTakeHeal
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTakeHeal_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShieldDamage;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageSource;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnVehicleTakeDamage
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnVehicleTakeDamage_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     HitVehicle;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShieldDamage;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageSource;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnTakeDamage
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnTakeDamage_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShieldDamage;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageSource;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAffordSecondary
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnUserCouldNotAffordSecondary_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     UsedComponent;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAfford
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnUserCouldNotAfford_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     UsedComponent;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnSecondaryUsed
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnSecondaryUsed_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     UsedComponent;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.OnUsed
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UAIDefinition_execOnUsed_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     UsedComponent;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.SetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UAIDefinition_execSetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.AIDefinition.GetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UAIDefinition_execGetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorKernel.RecentlyRunBehaviorsForSequence
// [0x00440405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execRecentlyRunBehaviorsForSequence_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SequencesIndex;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorExecutionRecord                    ExecutionRecord;                                  		// 0x000C (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.AllEventStateForSequence
// [0x00440405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execAllEventStateForSequence_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SequencesDataIndex;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorEventState                         EventState;                                       		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.AllWaitingThreadsForSequence
// [0x00440405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execAllWaitingThreadsForSequence_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SequencesDataIndex;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorThread                             Thread;                                           		// 0x000C (0x0018) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.AllSequencesForProvider
// [0x00440405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execAllSequencesForProvider_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorSequenceState                      SequenceState;                                    		// 0x0008 (0x0018) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.AllProvidersForProcess
// [0x00444405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execAllProvidersForProcess_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ProvidersIndex;                                   		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.AllProcesses
// [0x00440405] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execAllProcesses_Parms
{
	struct FBehaviorProcess                            Process;                                          		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.GetVariableStateSummaryForSequence
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execGetVariableStateSummaryForSequence_Parms
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SequencesDataIndex;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           DebugInfo;                                        		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.BehaviorKernel.GetChunkedListSummaries
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execGetChunkedListSummaries_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.BehaviorKernel.GetBehaviorKernelStats
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execGetBehaviorKernelStats_Parms
{
	struct FBehaviorKernelStats                        ReturnValue;                                      		// 0x0000 (0x0068) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorKernel.IsBehaviorKernelWatchingConsumer
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execIsBehaviorKernelWatchingConsumer_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorKernel.IsBehaviorSequenceEnabled
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execIsBehaviorSequenceEnabled_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BehaviorSequenceName;                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorOutputLink
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execActivateBehaviorOutputLink_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	int                                                OutputLinkId;                                     		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.PublishBoolOutputVariable
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execPublishBoolOutputVariable_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      Output : 1;                                       		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.PublishObjectOutputVariable
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execPublishObjectOutputVariable_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UObject*                                     Output;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.PublishVectorOutputVariable
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execPublishVectorOutputVariable_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     Output;                                           		// 0x001C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.PublishFloatOutputVariable
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execPublishFloatOutputVariable_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              Output;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.PublishIntOutputVariable
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execPublishIntOutputVariable_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	int                                                Output;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.BeginNondeterministicProviderRegistration
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execBeginNondeterministicProviderRegistration_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorEvent
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execProcessReplicatedBehaviorEvent_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FReplicatedBehaviorEvent                    EventData;                                        		// 0x0004 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorConsumerState
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execProcessReplicatedBehaviorConsumerState_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FReplicatedBehaviorConsumerState            ReplicatedConsumerState;                          		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorSequenceActivationStatus
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execChangeBehaviorSequenceActivationStatus_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SequenceName;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ActivationStatusChanage;                          		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorConsumerSuspensionStatus
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execChangeBehaviorConsumerSuspensionStatus_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      SuspensionStatusChanage;                          		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.BroadcastBehaviorEventFromScript
// [0x00426401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execBroadcastBehaviorEventFromScript_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UBehaviorProviderDefinition* >       ProvidersToBroadcast;                             		// 0x000C (0x000C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                EventOutputToActivate;                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	TArray< struct FBehaviorVariableValue >            Parameters;                                       		// 0x001C (0x000C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorEventFromScript
// [0x00426401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execActivateBehaviorEventFromScript_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       EventName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventOutputToActivate;                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	TArray< struct FBehaviorVariableValue >            Parameters;                                       		// 0x0014 (0x000C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.BehaviorKernel.RemoveBehaviorProviderFromConsumer
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execRemoveBehaviorProviderFromConsumer_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.IntializeBehaviorProviderForConsumer
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execIntializeBehaviorProviderForConsumer_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorKernel.ForceUnregisterBehaviorConsumer
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execForceUnregisterBehaviorConsumer_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorKernel.RegisterBehaviorConsumer
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBehaviorKernel_execRegisterBehaviorConsumer_Parms
{
	class UObject*                                     BehaviorConsumer;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.BehaviorProviderDefinition.SetObjectBehaviorVariable
// [0x00422400] ( FUNC_Native )
struct UBehaviorProviderDefinition_execSetObjectBehaviorVariable_Parms
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorProviderDefinition.SetVectorBehaviorVariable
// [0x00422400] ( FUNC_Native )
struct UBehaviorProviderDefinition_execSetVectorBehaviorVariable_Parms
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Value;                                            		// 0x001C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.BehaviorProviderDefinition.SetFloatBehaviorVariable
// [0x00422400] ( FUNC_Native )
struct UBehaviorProviderDefinition_execSetFloatBehaviorVariable_Parms
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorProviderDefinition.SetIntBehaviorVariable
// [0x00422400] ( FUNC_Native )
struct UBehaviorProviderDefinition_execSetIntBehaviorVariable_Parms
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.BehaviorProviderDefinition.SetBoolBehaviorVariable
// [0x00422400] ( FUNC_Native )
struct UBehaviorProviderDefinition_execSetBoolBehaviorVariable_Parms
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      Value : 1;                                        		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.IBehaviorConsumer.GetBehaviorConsumerHandle
// [0x00020400] ( FUNC_Native )
struct UIBehaviorConsumer_execGetBehaviorConsumerHandle_Parms
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.IBehaviorProvider.SetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UIBehaviorProvider_execSetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.IBehaviorProvider.GetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UIBehaviorProvider_execGetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ICustomEvent.RunCustomEvent
// [0x00024800] ( FUNC_Event )
struct UICustomEvent_eventRunCustomEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.ITimerBehavior.SetTimerState
// [0x00020000] 
struct UITimerBehavior_execSetTimerState_Parms
{
	unsigned char                                      TimerId;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorTimerState                         TimerState;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ITimerBehavior.GetTimerState
// [0x00420000] 
struct UITimerBehavior_execGetTimerState_Parms
{
	unsigned char                                      TimerId;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorTimerState                         TimerState;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.ITimerBehavior.GetTimeSeconds
// [0x00020000] 
struct UITimerBehavior_execGetTimeSeconds_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.GetAnimLength
// [0x00020400] ( FUNC_Native )
struct UGearboxAnimDefinition_execGetAnimLength_Parms
{
	class USkeletalMeshComponent*                      SMC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.IsPlayingLocally
// [0x00020802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventIsPlayingLocally_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.GetSMNode
// [0x00020002] 
struct UGearboxAnimDefinition_execGetSMNode_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.PlayAnim
// [0x00420002] 
struct UGearboxAnimDefinition_execPlayAnim_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FSpecialMoveData                            SMData;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.AnimFinished
// [0x00420802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventAnimFinished_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FSpecialMoveData                            SMData;                                           		// 0x000C (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.GearboxAnimDefinition.ClientFinished
// [0x00820802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventClientFinished_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAnimDefinition.ClientStarted
// [0x00C20802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventClientStarted_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FSpecialMoveData                            SMData;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAnimDefinition.ServerFinished
// [0x00820802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventServerFinished_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAnimDefinition.ServerStarted
// [0x00820802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventServerStarted_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAnimDefinition.AddAnimSet
// [0x00020002] 
struct UGearboxAnimDefinition_execAddAnimSet_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USkeletalMeshComponent*                   SkelMesh;                                         		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.GearboxAnimDefinition.GetSkeletalMesh
// [0x00020002] 
struct UGearboxAnimDefinition_execGetSkeletalMesh_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxAnimDefinition.AuthorityCanPlay
// [0x00020802] ( FUNC_Event )
struct UGearboxAnimDefinition_eventAuthorityCanPlay_Parms
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAnimDefinition.OnTimedEvent
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAnimDefinition_execOnTimedEvent_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FName                                       SpecializedEventName;                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStop
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAnimDefinition_execOnServerStop_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStart
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAnimDefinition_execOnServerStart_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxAnimDefinition.OnStop
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAnimDefinition_execOnStop_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxAnimDefinition.OnStart
// [0x80420401] ( FUNC_Final | FUNC_Native )
struct UGearboxAnimDefinition_execOnStart_Parms
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxAnimDefinition.SetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UGearboxAnimDefinition_execSetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 NewBehaviorProviderDefinition;                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAnimDefinition.GetBehaviorProviderDefinition
// [0x00020400] ( FUNC_Native )
struct UGearboxAnimDefinition_execGetBehaviorProviderDefinition_Parms
{
	class UBehaviorProviderDefinition*                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.Behavior_TriggerDialogEvent.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_TriggerDialogEvent_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_TriggerDialogEvent.TriggerDialogEvent
// [0x00420400] ( FUNC_Native )
struct UBehavior_TriggerDialogEvent_execTriggerDialogEvent_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     SelfObject;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxDialogActor.SetDialogNameTag
// [0x00020400] ( FUNC_Native )
struct AGearboxDialogActor_execSetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       NewName;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogActor.GetReplicatedDialogData
// [0x00020400] ( FUNC_Native )
struct AGearboxDialogActor_execGetReplicatedDialogData_Parms
{
	struct FGearboxDialogReplicatedData                ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogActor.SetReplicatedDialogData
// [0x00420400] ( FUNC_Native )
struct AGearboxDialogActor_execSetReplicatedDialogData_Parms
{
	class UGearboxDialogAct_Talk*                      TalkAct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGearboxDialogData                          Data;                                             		// 0x0004 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.GearboxDialogActor.GetDialogGroups
// [0x00420500] ( FUNC_Native )
struct AGearboxDialogActor_execGetDialogGroups_Parms
{
	TArray< class UGearboxDialogGroup* >               Groups;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxDialogActor.GetDialogComponent
// [0x00020500] ( FUNC_Native )
struct AGearboxDialogActor_execGetDialogComponent_Parms
{
	class UGearboxDialogComponent*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GearboxFramework.GearboxDialogActor.GetDialogNameTag
// [0x00020500] ( FUNC_Native )
struct AGearboxDialogActor_execGetDialogNameTag_Parms
{
	class UGearboxDialogNameTag*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogActor.GetActor
// [0x00020500] ( FUNC_Native )
struct AGearboxDialogActor_execGetActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogActor.CanTalk
// [0x00020500] ( FUNC_Native )
struct AGearboxDialogActor_execCanTalk_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogActor.ServerDialog_TriggerEvent
// [0x00224C60] ( FUNC_Event | FUNC_Native )
struct AGearboxDialogActor_eventServerDialog_TriggerEvent_Parms
{
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     ObjectParameter;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxDialogActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AGearboxDialogActor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogComponent.IsTalking
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogComponent_execIsTalking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogComponent.StopTalking
// [0x00024400] ( FUNC_Native )
struct UGearboxDialogComponent_execStopTalking_Parms
{
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForceStop : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxDialogComponent.TalkReplicated
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogComponent_execTalkReplicated_Parms
{
	struct FGearboxDialogReplicatedData                NewDialogData;                                    		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogComponent.Talk
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogComponent_execTalk_Parms
{
	class UGearboxDialogAct_Talk*                      TalkAction;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogComponent.GetMatchingEvent
// [0x00424400] ( FUNC_Native )
struct UGearboxDialogComponent_execGetMatchingEvent_Parms
{
	class UGearboxDialogEventTag*                      InEventTag;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEvent*                         OutEvent;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UGearboxDialogGroup*                         OutGroup;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIncludeDisabled : 1;                             		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UGearboxDialogNameTag*                       OtherNameTag;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowTemplateGroups : 1;                         		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.GearboxDialogComponent.TriggerEvent
// [0x00024400] ( FUNC_Native )
struct UGearboxDialogComponent_execTriggerEvent_Parms
{
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     ObjectParameter;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGearboxDialogEventData*                     TemplateEventData;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGearboxDialogEventData*                     ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogComponent.GetDialogInterface
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogComponent_execGetDialogInterface_Parms
{
	class UGearboxDialogInterface*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogEventData.IsActive
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogEventData_execIsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogGroup.SimpleEvent
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogGroup_execSimpleEvent_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.DrawDialogDebug
// [0x00024002] 
struct UGearboxDialogManager_execDrawDialogDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              StartY;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  NameTagString;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGearboxDialogInterface*                  Talker;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxDialogManager.CheckpointRemoveReferencesBeforeDestroy
// [0x00020102] 
struct UGearboxDialogManager_execCheckpointRemoveReferencesBeforeDestroy_Parms
{
};

// Function GearboxFramework.GearboxDialogManager.GetEventTagForEventInfo
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execGetEventTagForEventInfo_Parms
{
	struct FDialogEventInfo                            EventInfo;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEventTag*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogManager.TriggerGroupEvent
// [0x00024400] ( FUNC_Native )
struct UGearboxDialogManager_execTriggerGroupEvent_Parms
{
	class UGearboxDialogGroup*                         Group;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      Other;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     ObjectParameter;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGearboxDialogEventData*                     TemplateEventData;                                		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGearboxDialogEventData*                     ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogManager.Cleanup
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execCleanup_Parms
{
};

// Function GearboxFramework.GearboxDialogManager.SetGroupEventTag
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execSetGroupEventTag_Parms
{
	class UGearboxDialogGroup*                         Group;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.GetGroupEventTag
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execGetGroupEventTag_Parms
{
	class UGearboxDialogGroup*                         Group;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxDialogEventTag*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogManager.SilenceGroup
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execSilenceGroup_Parms
{
	class UGearboxDialogGroup*                         Group;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.AddGroup
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execAddGroup_Parms
{
	class UGearboxDialogGroup*                         Group;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.UnregisterTalker
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execUnregisterTalker_Parms
{
	class AActor*                                      Talker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.RegisterTalker
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execRegisterTalker_Parms
{
	class AActor*                                      Talker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.DisableTalker
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execDisableTalker_Parms
{
	class AActor*                                      Talker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.EnableTalker
// [0x00020400] ( FUNC_Native )
struct UGearboxDialogManager_execEnableTalker_Parms
{
	class AActor*                                      Talker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogManager.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxDialogManager_execGetPriority_Parms
{
	class UGearboxDialogPriority*                      InPriority;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxDialogNode.ActivateOutput
// [0x00080400] ( FUNC_Native )
struct UGearboxDialogNode_execActivateOutput_Parms
{
	int                                                Link;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogAction.Activate
// [0x00020800] ( FUNC_Event )
struct UGearboxDialogAction_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogAct_Chance.Activate
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxDialogAct_Chance_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogAct_Compare.Activate
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxDialogAct_Compare_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogAct_ObjectParameterSwitch.Activate
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxDialogAct_ObjectParameterSwitch_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogAct_Talk.Activate
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxDialogAct_Talk_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogAct_Talk.TalkFinished
// [0x00020800] ( FUNC_Event )
struct UGearboxDialogAct_Talk_eventTalkFinished_Parms
{
	class AActor*                                      InTalker;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogAct_Talk.TalkStarted
// [0x00020800] ( FUNC_Event )
struct UGearboxDialogAct_Talk_eventTalkStarted_Parms
{
	class AActor*                                      InTalker;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogAct_Trigger.ActivateOutput
// [0x00080400] ( FUNC_Native )
struct UGearboxDialogAct_Trigger_execActivateOutput_Parms
{
	int                                                Link;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxDialogAct_Trigger.Activate
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGearboxDialogAct_Trigger_eventActivate_Parms
{
};

// Function GearboxFramework.GearboxDialogVariable.ResolveToArgumentValue
// [0x00420400] ( FUNC_Native )
struct UGearboxDialogVariable_execResolveToArgumentValue_Parms
{
	struct FString                                     Out_ArgumentValue;                                		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxDialogVariable.GetTalkers
// [0x00420400] ( FUNC_Native )
struct UGearboxDialogVariable_execGetTalkers_Parms
{
	TArray< class AActor* >                            Talkers;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.HandleOffersNotifiedResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleOffersNotifiedResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0080 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAccountActions.HandleBulkEntitlementsConsumedResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleBulkEntitlementsConsumedResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0080 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ConsumeResult;                                    		// 0x0088 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentMessage;                                   		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.HandleEntitlementConsumedResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleEntitlementConsumedResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0080 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ConsumeResult;                                    		// 0x0088 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentMessage;                                   		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.HandleCodeRedeemedResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleCodeRedeemedResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0080 (0x0008) [0x0000000000000000]              
	// unsigned char                                   RedeemResult;                                     		// 0x0088 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentMessage;                                   		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CustomCaption;                                    		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CustomPrompt;                                     		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.HandleResetPasswordResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleResetPasswordResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   ResetResult;                                      		// 0x007C (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentMessage;                                   		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.HandleSignUpResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleSignUpResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FArchwayResult                           Archway;                                          		// 0x0020 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurrentMessage;                                   		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   SignUpResult;                                     		// 0x0090 (0x0001) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAccountActions.HandleSignInResponse
// [0x00C20002] 
struct UGearboxAccountActions_execHandleSignInResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FArchwayResult                           Archway;                                          		// 0x0020 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   SignInResult;                                     		// 0x0084 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentMessage;                                   		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.ExtractArchwayResult
// [0x00020400] ( FUNC_Native )
struct UGearboxAccountActions_execExtractArchwayResult_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FArchwayResult                              ReturnValue;                                      		// 0x000C (0x0064) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.MarkOffersNotified
// [0x00820002] 
struct UGearboxAccountActions_execMarkOffersNotified_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class USparkInterface*                          Spark;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  NotifiedString;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UGearboxAccountOffer* >           Offers;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0044 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.LocallyConsumeEntitlementWithCount
// [0x00020002] 
struct UGearboxAccountActions_execLocallyConsumeEntitlementWithCount_Parms
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumToConsume;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ControllerId;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USparkInterface*                          Spark;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementsWithCounts
// [0x00820802] ( FUNC_Event )
struct UGearboxAccountActions_eventConsumeEntitlementsWithCounts_Parms
{
	TArray< class UGearboxAccountEntitlement* >        EntitlementsToConsume;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< int >                                      Counts;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ControllerId;                                     		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EntitlementConsumedDelegate;                      		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  EntitlementIdList;                                		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CountList;                                        		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementWithCount
// [0x00820002] 
struct UGearboxAccountActions_execConsumeEntitlementWithCount_Parms
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ControllerId;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EntitlementConsumedDelegate;                      		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x004C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.RedeemCode
// [0x00820002] 
struct UGearboxAccountActions_execRedeemCode_Parms
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ControllerId;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             CodeRedeemedDelegate;                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  FixedCode;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x004C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.ResetPasswordGearboxAccount
// [0x00820002] 
struct UGearboxAccountActions_execResetPasswordGearboxAccount_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ControllerId;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ResetPasswordDelegate;                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FString                                  ResetString;                                      		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0044 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.EscapeJson
// [0x00020002] 
struct UGearboxAccountActions_execEscapeJson_Parms
{
	struct FString                                     Input;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  NewString;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.SignUpGearboxAccount
// [0x00820002] 
struct UGearboxAccountActions_execSignUpGearboxAccount_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     PasswordConfirm;                                  		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AgeString;                                        		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ControllerId;                                     		// 0x0030 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SignUpDelegate;                                   		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0040 (0x0008) [0x0000000000000000]              
	// struct FString                                  SignUpString;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x006C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.SignInGearboxAccount
// [0x00820002] 
struct UGearboxAccountActions_execSignInGearboxAccount_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ControllerId;                                     		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SignInDelegate;                                   		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FString                                  SignInString;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.OnEntitlementConsumed
// [0x00120000] 
struct UGearboxAccountActions_execOnEntitlementConsumed_Parms
{
	unsigned char                                      ConsumeResult;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAccountActions.OnCodeRedeemed
// [0x00124000] 
struct UGearboxAccountActions_execOnCodeRedeemed_Parms
{
	unsigned char                                      RedeemResult;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CustomTitle;                                      		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     CustomBody;                                       		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountActions.OnResetPasswordGearboxAccount
// [0x00120000] 
struct UGearboxAccountActions_execOnResetPasswordGearboxAccount_Parms
{
	unsigned char                                      ResetResult;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAccountActions.OnSignUpGearboxAccount
// [0x00120000] 
struct UGearboxAccountActions_execOnSignUpGearboxAccount_Parms
{
	unsigned char                                      SignUpResult;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAccountActions.OnSignInGearboxAccount
// [0x00120000] 
struct UGearboxAccountActions_execOnSignInGearboxAccount_Parms
{
	unsigned char                                      SignInResult;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAccountData.CountEntitlement
// [0x00024002] 
struct UGearboxAccountData_execCountEntitlement_Parms
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIgnoreLocallyConsumed : 1;                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.GetTotalGoldenKeyCount
// [0x00020002] 
struct UGearboxAccountData_execGetTotalGoldenKeyCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.GetGoldenKeyCount
// [0x00024002] 
struct UGearboxAccountData_execGetGoldenKeyCount_Parms
{
	unsigned long                                      bIgnoreLocallyConsumed : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.HasGoldenKey
// [0x00024002] 
struct UGearboxAccountData_execHasGoldenKey_Parms
{
	unsigned long                                      bIgnoreLocallyConsumed : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.HasDeveloperSkin
// [0x00020002] 
struct UGearboxAccountData_execHasDeveloperSkin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.IsDeveloper
// [0x00020002] 
struct UGearboxAccountData_execIsDeveloper_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.MarkOffersNotified
// [0x00020002] 
struct UGearboxAccountData_execMarkOffersNotified_Parms
{
};

// Function GearboxFramework.GearboxAccountData.GetUnnotifiedOffers
// [0x00020002] 
struct UGearboxAccountData_execGetUnnotifiedOffers_Parms
{
	TArray< class UGearboxAccountOffer* >              ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< class UGearboxAccountOffer* >           Result;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithName
// [0x00020002] 
struct UGearboxAccountData_execGetEntitlementWithName_Parms
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxAccountEntitlement*                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithId
// [0x00020002] 
struct UGearboxAccountData_execGetEntitlementWithId_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxAccountEntitlement*                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.HasEntitlement
// [0x00024002] 
struct UGearboxAccountData_execHasEntitlement_Parms
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIgnoreLocallyConsumed : 1;                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.RemoveEntitlement
// [0x00020002] 
struct UGearboxAccountData_execRemoveEntitlement_Parms
{
	class UGearboxAccountEntitlement*                  Entitlement;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxAccountData.ReplaceEntitlements
// [0x00C20002] 
struct UGearboxAccountData_execReplaceEntitlements_Parms
{
	TArray< struct FEntitlementResult >                NewEntitlements;                                  		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FOfferResult >                      NewOffers;                                        		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FEntitlementResult                       Entitlement;                                      		// 0x0018 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FOfferResult                             Offer;                                            		// 0x0040 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.ReplaceServices
// [0x00420400] ( FUNC_Native )
struct UGearboxAccountData_execReplaceServices_Parms
{
	TArray< struct FServiceResult >                    NewServices;                                      		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.HandleReloadEntitlementsResponse
// [0x00C20002] 
struct UGearboxAccountData_execHandleReloadEntitlementsResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.ReloadEntitlements
// [0x00820002] 
struct UGearboxAccountData_execReloadEntitlements_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USparkInterface*                          Spark;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  Params;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHttpParameters                          HttpParameters;                                   		// 0x002C (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< unsigned char >                         Empty;                                            		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.ResetEntitlementUpdateTimer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxAccountData_execResetEntitlementUpdateTimer_Parms
{
};

// Function GearboxFramework.GearboxAccountData.CanReloadEntitlements
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGearboxAccountData_execCanReloadEntitlements_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.TriggerEntitlementsUpdatedDelegates
// [0x00020002] 
struct UGearboxAccountData_execTriggerEntitlementsUpdatedDelegates_Parms
{
	// struct FScriptDelegate                          EntitlementsUpdatedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.ClearEntitlementsUpdatedDelegate
// [0x00020002] 
struct UGearboxAccountData_execClearEntitlementsUpdatedDelegate_Parms
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.AddEntitlementsUpdatedDelegate
// [0x00020002] 
struct UGearboxAccountData_execAddEntitlementsUpdatedDelegate_Parms
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.GetService
// [0x00020802] ( FUNC_Event )
struct UGearboxAccountData_eventGetService_Parms
{
	struct FName                                       ServiceName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxAccountData.Clear
// [0x00020002] 
struct UGearboxAccountData_execClear_Parms
{
};

// Function GearboxFramework.GearboxAccountData.ExtractArchwayResultJson
// [0x00422002] 
struct UGearboxAccountData_execExtractArchwayResultJson_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FArchwayResult                              ArchwayData;                                      		// 0x000C (0x0064) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  StringData;                                       		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UJsonObject* >                    MessageListJson;                                  		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UJsonObject* >                    EntitlementListJson;                              		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UJsonObject* >                    UnlockedOfferListJson;                            		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UJsonObject* >                    ServiceListJson;                                  		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UJsonObject* >                    ParameterListJson;                                		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.GearboxAccountData.ExtractArchwayResult
// [0x00422400] ( FUNC_Native )
struct UGearboxAccountData_execExtractArchwayResult_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FArchwayResult                              ArchwayData;                                      		// 0x000C (0x0064) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxProcess.GetStepConfiguration
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execGetStepConfiguration_Parms
{
	struct FStepConfiguration                          ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxProcess.GotoStep
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execGotoStep_Parms
{
	int                                                Step;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GearboxProcess.GotoNextStep
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execGotoNextStep_Parms
{
};

// Function GearboxFramework.GearboxProcess.GotoFirstStep
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execGotoFirstStep_Parms
{
};

// Function GearboxFramework.GearboxProcess.PerformStep
// [0x00020800] ( FUNC_Event )
struct UGearboxProcess_eventPerformStep_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.GearboxProcess.PauseLoop
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execPauseLoop_Parms
{
};

// Function GearboxFramework.GearboxProcess.Init
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execInit_Parms
{
};

// Function GearboxFramework.GearboxProcess.ContinueLoop
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execContinueLoop_Parms
{
};

// Function GearboxFramework.GearboxProcess.StopLoop
// [0x00020400] ( FUNC_Native )
struct UGearboxProcess_execStopLoop_Parms
{
};

// Function GearboxFramework.SparkInitializationProcess.TriggerSparkInitializedDelegates
// [0x00020802] ( FUNC_Event )
struct USparkInitializationProcess_eventTriggerSparkInitializedDelegates_Parms
{
	unsigned char                                      InitializeResult;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FScriptDelegate                          SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.ClearSparkInitializedDelegate
// [0x00020002] 
struct USparkInitializationProcess_execClearSparkInitializedDelegate_Parms
{
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.AddSparkInitializedDelegate
// [0x00020002] 
struct USparkInitializationProcess_execAddSparkInitializedDelegate_Parms
{
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.GetStepName
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execGetStepName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.GetStepConfiguration
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execGetStepConfiguration_Parms
{
	struct FStepConfiguration                          ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.IsInitialized
// [0x00020002] 
struct USparkInitializationProcess_execIsInitialized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.IsDisabled
// [0x00020002] 
struct USparkInitializationProcess_execIsDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.IsInitializing
// [0x00020002] 
struct USparkInitializationProcess_execIsInitializing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.HandleVerificationReceived
// [0x00C20002] 
struct USparkInitializationProcess_execHandleVerificationReceived_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.VerifyAuthentication
// [0x00820802] ( FUNC_Event )
struct USparkInitializationProcess_eventVerifyAuthentication_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  RequestId;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0020 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< unsigned char >                         Empty;                                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.AuthenticateTicketStringWithDelegate
// [0x00820002] 
struct USparkInitializationProcess_execAuthenticateTicketStringWithDelegate_Parms
{
	struct FString                                     ticket;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  Newticket;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0038 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.HandleAuthenticationReceived
// [0x00C20002] 
struct USparkInitializationProcess_execHandleAuthenticationReceived_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FArchwayResult                           Archway;                                          		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.AuthenticateAccount
// [0x00020802] ( FUNC_Event )
struct USparkInitializationProcess_eventAuthenticateAccount_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  ticket;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  NewPlatformLoginName;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.GetConfigQuery
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execGetConfigQuery_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInitializationProcess.CompleteInitialization
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execCompleteInitialization_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.HttpInit
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execHttpInit_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.CheckForTMS
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execCheckForTMS_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.PerformStep
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execPerformStep_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.StartProcess
// [0x00020400] ( FUNC_Native )
struct USparkInitializationProcess_execStartProcess_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInitializationProcess.InitWithController
// [0x00020002] 
struct USparkInitializationProcess_execInitWithController_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewPrimary : 1;                                  		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.LeviathanService.GetLeviathanServiceConfiguration
// [0x00020802] ( FUNC_Event )
struct ULeviathanService_eventGetLeviathanServiceConfiguration_Parms
{
	int                                                ControllerNumber;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USparkInterface*                          Spark;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.LeviathanService.OnSparkInitialized
// [0x00020400] ( FUNC_Native )
struct ULeviathanService_execOnSparkInitialized_Parms
{
	unsigned char                                      InitializedResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.LeviathanService.LoadServiceConfigurationForPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ULeviathanService_execLoadServiceConfigurationForPlayer_Parms
{
	int                                                SplitscreenIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.LeviathanService.GetLeviathanService
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ULeviathanService_execGetLeviathanService_Parms
{
	class ULeviathanService*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetNewsService
// [0x00020000] 
struct USparkInterface_execGetNewsService_Parms
{
	class USparkNews*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetTitleStorageServiceConfiguration
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetTitleStorageServiceConfiguration_Parms
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetTitleStorageUrl
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetTitleStorageUrl_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.ClearGearboxAccountData
// [0x00020000] 
struct USparkInterface_execClearGearboxAccountData_Parms
{
	unsigned long                                      IncludePrimaryPlayer : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SparkInterface.SignOutGearboxAccount
// [0x00020000] 
struct USparkInterface_execSignOutGearboxAccount_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkInterface.SignInGearboxAccount
// [0x00020000] 
struct USparkInterface_execSignInGearboxAccount_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkInterface.GetGearboxAccountData
// [0x00020800] ( FUNC_Event )
struct USparkInterface_eventGetGearboxAccountData_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxAccountData*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountAuthenticated
// [0x00020800] ( FUNC_Event )
struct USparkInterface_eventIsGearboxAccountAuthenticated_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountSignedIn
// [0x00020000] 
struct USparkInterface_execIsGearboxAccountSignedIn_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.ConvertUtcTimeToLocalTime
// [0x00020000] 
struct USparkInterface_execConvertUtcTimeToLocalTime_Parms
{
	struct FString                                     UtcTime;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.ShouldUpdateEmergencyMessage
// [0x00020000] 
struct USparkInterface_execShouldUpdateEmergencyMessage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetEmergencyMessage
// [0x00020000] 
struct USparkInterface_execGetEmergencyMessage_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.SetEmergencyMessage
// [0x00020000] 
struct USparkInterface_execSetEmergencyMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromSplitscreenIndex
// [0x00020800] ( FUNC_Event )
struct USparkInterface_eventGetPlatformLoginNameFromSplitscreenIndex_Parms
{
	int                                                SplitscreenIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromController
// [0x00020000] 
struct USparkInterface_execGetPlatformLoginNameFromController_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.IncreaseInteractionTries
// [0x00020000] 
struct USparkInterface_execIncreaseInteractionTries_Parms
{
};

// Function GearboxFramework.SparkInterface.GetInteractionTries
// [0x00020000] 
struct USparkInterface_execGetInteractionTries_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetInteractionGraceTries
// [0x00020000] 
struct USparkInterface_execGetInteractionGraceTries_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetInteractionPunishmentMinWaitSeconds
// [0x00020000] 
struct USparkInterface_execGetInteractionPunishmentMinWaitSeconds_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.GetInteractionMinWaitSeconds
// [0x00020000] 
struct USparkInterface_execGetInteractionMinWaitSeconds_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.IsTmsComplete
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execIsTmsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.SetTmsComplete
// [0x00020000] 
struct USparkInterface_execSetTmsComplete_Parms
{
};

// Function GearboxFramework.SparkInterface.GetSparkInitialization
// [0x00020000] 
struct USparkInterface_execGetSparkInitialization_Parms
{
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.RestartSparkInitialization
// [0x00020800] ( FUNC_Event )
struct USparkInterface_eventRestartSparkInitialization_Parms
{
	unsigned long                                      bPrimary : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SparkInterface.RestartSparkInitializationFromScript
// [0x00020000] 
struct USparkInterface_execRestartSparkInitializationFromScript_Parms
{
	unsigned long                                      bPrimary : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                    		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.StartSparkInitialization
// [0x00020000] 
struct USparkInterface_execStartSparkInitialization_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                    		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.StartSecondaryInitialization
// [0x00020000] 
struct USparkInterface_execStartSecondaryInitialization_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetGameName
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetHardwareName
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetHardwareName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetPlatformName
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetPlatformName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.GetPlatformTicket
// [0x00020400] ( FUNC_Native )
struct USparkInterface_execGetPlatformTicket_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPrimary : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.ClearSparkConfigReceivedDelegate
// [0x00020000] 
struct USparkInterface_execClearSparkConfigReceivedDelegate_Parms
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.AddSparkConfigReceivedDelegate
// [0x00020000] 
struct USparkInterface_execAddSparkConfigReceivedDelegate_Parms
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterface.ResetInitializationStatus
// [0x00020000] 
struct USparkInterface_execResetInitializationStatus_Parms
{
};

// Function GearboxFramework.SparkInterface.IsSparkEnabled
// [0x00020800] ( FUNC_Event )
struct USparkInterface_eventIsSparkEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.IssueSparkStringRequest
// [0x00420000] 
struct USparkInterface_execIssueSparkStringRequest_Parms
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0038) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0038 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     RequestData;                                      		// 0x0044 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0050 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterface.IssueSparkRequest
// [0x00420000] 
struct USparkInterface_execIssueSparkRequest_Parms
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0038) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0038 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            RequestData;                                      		// 0x0044 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0050 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetNewsService
// [0x00020002] 
struct USparkInterfaceImpl_execGetNewsService_Parms
{
	class USparkNews*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageServiceConfiguration
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetTitleStorageServiceConfiguration_Parms
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageUrl
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetTitleStorageUrl_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkInitialized
// [0x00020002] 
struct USparkInterfaceImpl_execOnSparkInitialized_Parms
{
	unsigned char                                      InitializedResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkInterfaceImpl.IncreaseInteractionTries
// [0x00020002] 
struct USparkInterfaceImpl_execIncreaseInteractionTries_Parms
{
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionTries
// [0x00020002] 
struct USparkInterfaceImpl_execGetInteractionTries_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionGraceTries
// [0x00020002] 
struct USparkInterfaceImpl_execGetInteractionGraceTries_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionPunishmentMinWaitSeconds
// [0x00020002] 
struct USparkInterfaceImpl_execGetInteractionPunishmentMinWaitSeconds_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionMinWaitSeconds
// [0x00020002] 
struct USparkInterfaceImpl_execGetInteractionMinWaitSeconds_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.ConvertUtcTimeToLocalTime
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execConvertUtcTimeToLocalTime_Parms
{
	struct FString                                     UtcTime;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.ShouldUpdateEmergencyMessage
// [0x00020002] 
struct USparkInterfaceImpl_execShouldUpdateEmergencyMessage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetEmergencyMessage
// [0x00020002] 
struct USparkInterfaceImpl_execGetEmergencyMessage_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.SetEmergencyMessage
// [0x00020002] 
struct USparkInterfaceImpl_execSetEmergencyMessage_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.IsTmsComplete
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execIsTmsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.SetTmsComplete
// [0x00020002] 
struct USparkInterfaceImpl_execSetTmsComplete_Parms
{
};

// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitializationFromScript
// [0x00020002] 
struct USparkInterfaceImpl_execRestartSparkInitializationFromScript_Parms
{
	unsigned long                                      bPrimary : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                    		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitialization
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventRestartSparkInitialization_Parms
{
	unsigned long                                      bPrimary : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SparkInterfaceImpl.StartSparkInitialization
// [0x00020002] 
struct USparkInterfaceImpl_execStartSparkInitialization_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkEmergencyMessageDelegate;                    		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  NewPlatformLoginName;                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  OldPlatformLoginName;                             		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.ResetInitializationStatus
// [0x00020002] 
struct USparkInterfaceImpl_execResetInitializationStatus_Parms
{
};

// Function GearboxFramework.SparkInterfaceImpl.ResetSecondaryInitializationStatus
// [0x00020002] 
struct USparkInterfaceImpl_execResetSecondaryInitializationStatus_Parms
{
};

// Function GearboxFramework.SparkInterfaceImpl.StartSecondaryInitialization
// [0x00020002] 
struct USparkInterfaceImpl_execStartSecondaryInitialization_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  NewPlatformLoginName;                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  OldPlatformLoginName;                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetSparkInitialization
// [0x00020002] 
struct USparkInterfaceImpl_execGetSparkInitialization_Parms
{
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.SignInGearboxAccount
// [0x00020002] 
struct USparkInterfaceImpl_execSignInGearboxAccount_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetGearboxAccountData
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventGetGearboxAccountData_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UGearboxAccountData*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.SignOutGearboxAccount
// [0x00020002] 
struct USparkInterfaceImpl_execSignOutGearboxAccount_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkInterfaceImpl.ValidPlayerIndex
// [0x00020002] 
struct USparkInterfaceImpl_execValidPlayerIndex_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlayerIndex
// [0x00020002] 
struct USparkInterfaceImpl_execGetPlayerIndex_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.ClearGearboxAccountData
// [0x00020002] 
struct USparkInterfaceImpl_execClearGearboxAccountData_Parms
{
	unsigned long                                      IncludePrimaryPlayer : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountSignedIn
// [0x00020002] 
struct USparkInterfaceImpl_execIsGearboxAccountSignedIn_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountAuthenticated
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventIsGearboxAccountAuthenticated_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.GetGameName
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetHardwareName
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetHardwareName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformName
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetPlatformName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformTicket
// [0x00020400] ( FUNC_Native )
struct USparkInterfaceImpl_execGetPlatformTicket_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPrimary : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.ClearSparkConfigReceivedDelegate
// [0x00020002] 
struct USparkInterfaceImpl_execClearSparkConfigReceivedDelegate_Parms
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.AddSparkConfigReceivedDelegate
// [0x00020002] 
struct USparkInterfaceImpl_execAddSparkConfigReceivedDelegate_Parms
{
	struct FScriptDelegate                             SparkConfigReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromController
// [0x00820002] 
struct USparkInterfaceImpl_execGetPlatformLoginNameFromController_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             UniqueId;                                         		// 0x001C (0x0018) [0x0000000000000000]              
	// struct FString                                  TextNetId;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        SplitId;                                          		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PlatformId;                                       		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromSplitscreenIndex
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventGetPlatformLoginNameFromSplitscreenIndex_Parms
{
	int                                                SplitscreenIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginName
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventGetPlatformLoginName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.GetLoginStatus
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.IsShiftEnabled
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventIsShiftEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.IsSparkEnabled
// [0x00020802] ( FUNC_Event )
struct USparkInterfaceImpl_eventIsSparkEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.WithShift
// [0x00022400] ( FUNC_Native )
struct USparkInterfaceImpl_execWithShift_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.WithSpark
// [0x00022400] ( FUNC_Native )
struct USparkInterfaceImpl_execWithSpark_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequest
// [0x00420400] ( FUNC_Native )
struct USparkInterfaceImpl_execIssueSparkStringRequest_Parms
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0038) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0038 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     RequestData;                                      		// 0x0044 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0050 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkRequest
// [0x00420400] ( FUNC_Native )
struct USparkInterfaceImpl_execIssueSparkRequest_Parms
{
	struct FHttpParameters                             HttpParameters;                                   		// 0x0000 (0x0038) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0038 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            RequestData;                                      		// 0x0044 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0050 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkInterfaceImpl.AlternativeXboxlivePlatformId
// [0x00420400] ( FUNC_Native )
struct USparkInterfaceImpl_execAlternativeXboxlivePlatformId_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0018) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkEmergencyMessageUpdated
// [0x00120000] 
struct USparkInterfaceImpl_execOnSparkEmergencyMessageUpdated_Parms
{
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkConfigReceived
// [0x00120000] 
struct USparkInterfaceImpl_execOnSparkConfigReceived_Parms
{
	TArray< unsigned char >                            ConfigArray;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkRequestComplete
// [0x00520000] 
struct USparkInterfaceImpl_execOnSparkRequestComplete_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkServiceConfiguration.GetFloatParameter
// [0x00020400] ( FUNC_Native )
struct USparkServiceConfiguration_execGetFloatParameter_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              DefaultValue;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MinimumValue;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaximumValue;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkServiceConfiguration.GetIntParameter
// [0x00020400] ( FUNC_Native )
struct USparkServiceConfiguration_execGetIntParameter_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                DefaultValue;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MinimumValue;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaximumValue;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkServiceConfiguration.GetStringParameter
// [0x00020400] ( FUNC_Native )
struct USparkServiceConfiguration_execGetStringParameter_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Default;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkServiceConfiguration.GetParameter
// [0x00020400] ( FUNC_Native )
struct USparkServiceConfiguration_execGetParameter_Parms
{
	struct FString                                     KeyNameToSearchFor;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkServiceConfiguration.LoadService
// [0x00420400] ( FUNC_Native )
struct USparkServiceConfiguration_execLoadService_Parms
{
	struct FServiceResult                              Service;                                          		// 0x0000 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkServiceConfiguration.LoadOverrides
// [0x00020400] ( FUNC_Native )
struct USparkServiceConfiguration_execLoadOverrides_Parms
{
};

// Function GearboxFramework.SparkTypes.UTF8toString
// [0x00022400] ( FUNC_Native )
struct USparkTypes_execUTF8toString_Parms
{
	TArray< unsigned char >                            inputBytes;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkTypes.OnEntitlementsUpdated
// [0x00120000] 
struct USparkTypes_execOnEntitlementsUpdated_Parms
{
	class UGearboxAccountData*                         GbxAccount;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkTypes.OnSparkEmergencyMessageUpdated
// [0x00120000] 
struct USparkTypes_execOnSparkEmergencyMessageUpdated_Parms
{
};

// Function GearboxFramework.SparkTypes.OnSparkInitialized
// [0x00120000] 
struct USparkTypes_execOnSparkInitialized_Parms
{
	unsigned char                                      InitializedResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.SparkTypes.OnSparkConfigReceived
// [0x00120000] 
struct USparkTypes_execOnSparkConfigReceived_Parms
{
	TArray< unsigned char >                            ConfigArray;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkTypes.OnSparkRequestComplete
// [0x00520000] 
struct USparkTypes_execOnSparkRequestComplete_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Action_FaceThreat.StopSequence
// [0x00020802] ( FUNC_Event )
struct UAction_FaceThreat_eventStopSequence_Parms
{
};

// Function GearboxFramework.ActorAttributeContextResolver.GetAttributeContext
// [0x00020002] 
struct UActorAttributeContextResolver_execGetAttributeContext_Parms
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     AttributeContextSource;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.AIComponentAttributeContextResolver.GetAttributeContext
// [0x00020002] 
struct UAIComponentAttributeContextResolver_execGetAttributeContext_Parms
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     AttributeContextSource;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UIAIInterface*                            AIInterface;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_AIHold.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_AIHold_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIAIInterface*                            AIInterface;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_AIPriority.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_AIPriority_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIAIInterface*                            AI;                                               		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UITargetable*                             Targetable;                                       		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_AITargeting.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_AITargeting_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIAIInterface*                            AIInterface;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UAIComponent*                             AIComp;                                           		// 0x0040 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_ChangeAnyBehaviorSequenceState_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_ChangeLocalBehaviorSequenceState_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIBehaviorConsumer*                       Consumer;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_CompareBool.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_CompareBool_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_CompareValues.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_CompareValues_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_CustomEvent.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_CustomEvent_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIBehaviorConsumer*                       ConsumerInterface;                                		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FBehaviorConsumerHandle                  ConsumerHandle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UICustomEvent*                            ContextInterface;                                 		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_Delay.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_Delay_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_Gate.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_Gate_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_GetFloatParam.PublishBehaviorOutput
// [0x00480002] 
struct UBehavior_GetFloatParam_execPublishBehaviorOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_GetFloatParam.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_GetFloatParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_GetObjectParam.PublishBehaviorOutput
// [0x00480002] 
struct UBehavior_GetObjectParam_execPublishBehaviorOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_GetObjectParam.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_GetObjectParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_GetVectorParam.PublishBehaviorOutput
// [0x00480002] 
struct UBehavior_GetVectorParam_execPublishBehaviorOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              R;                                                		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              G;                                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              B;                                                		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              A;                                                		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_GetVectorParam.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_GetVectorParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FVector                                  VectorResult;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             Result;                                           		// 0x0048 (0x0010) [0x0000000000000000]              
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.PublishBehaviorOutput
// [0x00420002] 
struct UBehavior_InterpolateFloatOverTime_execPublishBehaviorOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Result;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_InterpolateFloatOverTime_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_Metronome.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_Metronome_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_ModifyTimer.PublishBehaviorOutput
// [0x00420002] 
struct UBehavior_ModifyTimer_execPublishBehaviorOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              TimeRemaining;                                    		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.Behavior_ModifyTimer.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_ModifyTimer_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ActualOperation;                                  		// 0x0038 (0x0001) [0x0000000000000000]              
	// struct FBehaviorTimerState                      TimerState;                                       		// 0x003C (0x000C) [0x0000000000000000]              
	// class UITimerBehavior*                          ContextInterface;                                 		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SetFloatParam.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_SetFloatParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SetObjectParam.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_SetObjectParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SetVectorParam.ApplyBehaviorToContext
// [0x00C80002] 
struct UBehavior_SetVectorParam_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIParameterBehavior*                      ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FLinearColor                             TempColor;                                        		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FVector                                  TempVector;                                       		// 0x0050 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.Behavior_SpecialMove.PlaySpecialMove
// [0x00020002] 
struct UBehavior_SpecialMove_execPlaySpecialMove_Parms
{
	class USpecialMoveComponent*                       SMC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GearboxFramework.Behavior_SpecialMove.TriggerOutput
// [0x00420002] 
struct UBehavior_SpecialMove_execTriggerOutput_Parms
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.Behavior_SpecialMove.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_SpecialMove_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USpecialMoveInterface*                    ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	// class USpecialMoveComponent*                    SMC;                                              		// 0x0040 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.Behavior_SpecialMoveStop.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_SpecialMoveStop_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USpecialMoveInterface*                    ContextInterface;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	// class USpecialMoveComponent*                    SMC;                                              		// 0x0040 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.Behavior_StartAkAmbientSound.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_StartAkAmbientSound_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIInstanceData*                           InstanceDataProvider;                             		// 0x003C (0x0008) [0x0000000000000000]              
	// TArray< struct FInstanceDataUnion >             InstanceData;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_StopAkAmbientSound.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_StopAkAmbientSound_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UIInstanceData*                           InstanceDataProvider;                             		// 0x003C (0x0008) [0x0000000000000000]              
	// TArray< struct FInstanceDataUnion >             InstanceData;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.Behavior_StopDialog.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_StopDialog_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGearboxDialogInterface*                  DialogInterface;                                  		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UGearboxDialogComponent*                  DialogComponent;                                  		// 0x0040 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.Behavior_ToggleDialog.ApplyBehaviorToContext
// [0x00480002] 
struct UBehavior_ToggleDialog_execApplyBehaviorToContext_Parms
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UObject*                                     SelfObject;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     MyInstigatorObject;                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBehaviorParameters                         EventData;                                        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGearboxDialogInterface*                  Dialog;                                           		// 0x0048 (0x0008) [0x0000000000000000]              
};

// Function GearboxFramework.CameraModifierCrossfade.DoCrossfade
// [0x00080002] 
struct UCameraModifierCrossfade_execDoCrossfade_Parms
{
};

// Function GearboxFramework.CameraModifierCrossfade.UpdateAllLerps
// [0x00480002] 
struct UCameraModifierCrossfade_execUpdateAllLerps_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.CameraModifierCrossfade.ModifyCamera
// [0x00C20002] 
struct UCameraModifierCrossfade_execModifyCamera_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FTPOV                                    PrelimPOV;                                        		// 0x002C (0x001C) [0x0000000000000000]              
};

// Function GearboxFramework.CameraModifierCrossfade.ProcessCameraBlend
// [0x00C40003] ( FUNC_Final )
struct UCameraModifierCrossfade_execProcessCameraBlend_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AdjustedDeltaTime;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FTPOV                                    TargetPOV;                                        		// 0x002C (0x001C) [0x0000000000000000]              
};

// Function GearboxFramework.CameraModifierCrossfade.InitializeSubModifiers
// [0x00080002] 
struct UCameraModifierCrossfade_execInitializeSubModifiers_Parms
{
};

// Function GearboxFramework.CameraModifierCrossfade.EnableModifier
// [0x00020802] ( FUNC_Event )
struct UCameraModifierCrossfade_eventEnableModifier_Parms
{
};

// Function GearboxFramework.CameraModifierLookAt.ExecuteFadeIfNeeded
// [0x00420002] 
struct UCameraModifierLookAt_execExecuteFadeIfNeeded_Parms
{
	class AGearboxPlayerController*                    PC;                                               		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GearboxFramework.CameraModifierLookAt.GetDesiredLocation
// [0x00C20002] 
struct UCameraModifierLookAt_execGetDesiredLocation_Parms
{
	struct FTPOV                                       OutPOV;                                           		// 0x0000 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class AGearboxPlayerController*                    PC;                                               		// 0x001C (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ToReturn;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AlignAxis;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.CameraModifierLookAt.ModifyCamera
// [0x00C20002] 
struct UCameraModifierLookAt_execModifyCamera_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  DesiredLocation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DestLookAt;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LookLoc;                                          		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function GearboxFramework.CameraModifierLookAt.GetBoneLocation
// [0x00444003] ( FUNC_Final )
struct UCameraModifierLookAt_execGetBoneLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BoneLoc;                                          		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMeshComponent*                   SMComp;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtBone
// [0x00020002] 
struct UCameraModifierLookAt_execSetLookAtBone_Parms
{
	struct FName                                       NewBone;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtTarget
// [0x00020002] 
struct UCameraModifierLookAt_execSetLookAtTarget_Parms
{
	class AActor*                                      newLookAtTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetTargetLocation
// [0x00020000] 
struct UCameraModifierLookAt_execSetTargetLocation_Parms
{
	struct FVector                                     NewTargetLocation;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newTransitionTimeIn;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newTransitionTimeOut;                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetDuration
// [0x00020002] 
struct UCameraModifierLookAt_execSetDuration_Parms
{
	float                                              NewDuration;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetTransitionTimes
// [0x00020002] 
struct UCameraModifierLookAt_execSetTransitionTimes_Parms
{
	float                                              NewInTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewOutTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetZoomFOV
// [0x00020002] 
struct UCameraModifierLookAt_execSetZoomFOV_Parms
{
	float                                              newZoom;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetThirdPersonDistances
// [0x00020002] 
struct UCameraModifierLookAt_execSetThirdPersonDistances_Parms
{
	float                                              NewX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewZ;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.SetLookAtMode
// [0x00020002] 
struct UCameraModifierLookAt_execSetLookAtMode_Parms
{
	unsigned char                                      NewMode;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.DisableModifier
// [0x00024002] 
struct UCameraModifierLookAt_execDisableModifier_Parms
{
	unsigned long                                      bImmediate : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GearboxFramework.CameraModifierLookAt.EnableModifier
// [0x00020002] 
struct UCameraModifierLookAt_execEnableModifier_Parms
{
};

// Function GearboxFramework.SparkNews.Internal_GetService
// [0x00040003] ( FUNC_Final )
struct USparkNews_execInternal_GetService_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USparkInterface*                             Spark;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkNews.CallAndClearRetrievedDelegate
// [0x00040003] ( FUNC_Final )
struct USparkNews_execCallAndClearRetrievedDelegate_Parms
{
	unsigned char                                      RetrievealResult;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FScriptDelegate                          Del;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkNews.ParseArticles
// [0x00840003] ( FUNC_Final )
struct USparkNews_execParseArticles_Parms
{
	class UJsonObject*                                 NewsArticlesJSONObject;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class UJsonObject* >                    ArrArticles;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FNewsArticle                             Article;                                          		// 0x0018 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkNews.HandleNewsRetrievalResponse
// [0x00440003] ( FUNC_Final )
struct USparkNews_execHandleNewsRetrievalResponse_Parms
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0018) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FString                                  StrResponseBody;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkNews.GetArticle
// [0x00420002] 
struct USparkNews_execGetArticle_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Header;                                           		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkNews.GetArticleCount
// [0x00020002] 
struct USparkNews_execGetArticleCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.SparkNews.RetrieveNews
// [0x00820002] 
struct USparkNews_execRetrieveNews_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RetrievalDelegate;                                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USparkInterface*                          Spark;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FHttpParameters                          HttpParameters;                                   		// 0x0018 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GearboxFramework.SparkNews.OnNewsRetrieved
// [0x00120000] 
struct USparkNews_execOnNewsRetrieved_Parms
{
	unsigned char                                      RetrievealResult;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USparkNews*                                  newsObj;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GearboxFramework.GFxMovieDrawStyleInstanceData.RequiresClientInstance
// [0x00020802] ( FUNC_Event )
struct UGFxMovieDrawStyleInstanceData_eventRequiresClientInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GearboxFramework.PopulationMasterAttributeContextResolver.GetAttributeContext
// [0x00020002] 
struct UPopulationMasterAttributeContextResolver_execGetAttributeContext_Parms
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     AttributeContextSource;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif