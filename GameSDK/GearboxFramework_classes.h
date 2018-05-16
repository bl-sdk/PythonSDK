/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_VANTAGES_PER_LOOKER                            3
#define CONST_SNAPSHOT_MAX                                       50
#define CONST_OFFSCREEN_BUCKET                                   3
#define CONST_SKIP_UPDATE_TIME                                   0.1f
#define CONST_TimeToMarkTargetsWhoShotAtMe                       10.0
#define CONST_SecondsToRememberRecentIncomingShots               3.0
#define CONST_MaxContainedRules                                  45
#define CONST_SPLITSCREEN_CHARACTER_COUNT                        2
#define CONST_MAX_HIT_TARGET_RECORDS                             5
#define CONST_MaxTimeMSAllowedPerFrame                           1.f
#define CONST_ScreenBaseX                                        640
#define CONST_ScreenBaseY                                        480

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GearboxFramework.AIComponent.AINodeType
/*enum AINodeType
{
	NodeType_Blank                                     = 0,
	NodeType_Action                                    = 1,
	NodeType_Random                                    = 2,
	NodeType_Priority                                  = 3,
	NodeType_Sequential                                = 4,
	NodeType_MAX                                       = 5
};*/

// Enum GearboxFramework.AIComponent.AIFailReason
/*enum AIFailReason
{
	AIFail_None                                        = 0,
	AIFail_Timer                                       = 1,
	AIFail_Failed                                      = 2,
	AIFail_Action                                      = 3,
	AIFail_Resource                                    = 4,
	AIFail_Conditional                                 = 5,
	AIFail_MAX                                         = 6
};*/

// Enum GearboxFramework.GearboxGlobals.EGBXPlatform
/*enum EGBXPlatform
{
	GBXPlatform_PC                                     = 0,
	GBXPlatform                                        = 1,
	GBXPlatform_PS3                                    = 2,
	GBXPlatform_MAX                                    = 3
};*/

// Enum GearboxFramework.GearboxGlobals.EDifficultyLevel
/*enum EDifficultyLevel
{
	DL_Casual                                          = 0,
	DL_Normal                                          = 1,
	DL_Hardcore                                        = 2,
	DL_Insane                                          = 3,
	DL_MAX                                             = 4
};*/

// Enum GearboxFramework.GearboxGlobals.EGearboxCoverTransition
/*enum EGearboxCoverTransition
{
	GBXCOVERTRANS_None                                 = 0,
	GBXCOVERTRANS_Detach                               = 1,
	GBXCOVERTRANS_PoppingUp                            = 2,
	GBXCOVERTRANS_LeaningOut                           = 3,
	GBXCOVERTRANS_PeekingUp                            = 4,
	GBXCOVERTRANS_BlindFiringUp                        = 5,
	GBXCOVERTRANS_ReturnToCover                        = 6,
	GBXCOVERTRANS_Mounting                             = 7,
	GBXCOVERTRANS_Dismounting                          = 8,
	GBXCOVERTRANS_Mantling                             = 9,
	GBXCOVERTRANS_ChangingDirection                    = 10,
	GBXCOVERTRANS_GameSpecific                         = 11,
	GBXCOVERTRANS_Reserved1                            = 12,
	GBXCOVERTRANS_Reserved2                            = 13,
	GBXCOVERTRANS_Reserved3                            = 14,
	GBXCOVERTRANS_Reserved4                            = 15,
	GBXCOVERTRANS_Reserved5                            = 16,
	GBXCOVERTRANS_Reserved6                            = 17,
	GBXCOVERTRANS_Reserved7                            = 18,
	GBXCOVERTRANS_Reserved8                            = 19,
	GBXCOVERTRANS_Reserved9                            = 20,
	GBXCOVERTRANS_MAX                                  = 21
};*/

// Enum GearboxFramework.GearboxGlobals.EGearboxCoverStateMetaData
/*enum EGearboxCoverStateMetaData
{
	GBXCOVERMETA_None                                  = 0,
	GBXCOVERMETA_Detach                                = 1,
	GBXCOVERMETA_Left                                  = 2,
	GBXCOVERMETA_Right                                 = 3,
	GBXCOVERMETA_Interior                              = 4,
	GBXCOVERMETA_Dismount_SurpriseLeft                 = 5,
	GBXCOVERMETA_Dismount_SurpriseRight                = 6,
	GBXCOVERMETA_Dismount_SurpriseTowardCover          = 7,
	GBXCOVERMETA_Dismount_SurpriseWith180Turn          = 8,
	GBXCOVERMETA_Dismount_Wallhop                      = 9,
	GBXCOVERMETA_Dismount_TowardCover                  = 10,
	GBXCOVERMETA_Dismount_With180Turn                  = 11,
	GBXCOVERMETA_GameSpecific                          = 12,
	GBXCOVERMETA_Reserved1                             = 13,
	GBXCOVERMETA_Reserved2                             = 14,
	GBXCOVERMETA_Reserved3                             = 15,
	GBXCOVERMETA_Reserved4                             = 16,
	GBXCOVERMETA_Reserved5                             = 17,
	GBXCOVERMETA_Reserved6                             = 18,
	GBXCOVERMETA_Reserved7                             = 19,
	GBXCOVERMETA_Reserved8                             = 20,
	GBXCOVERMETA_Reserved9                             = 21,
	GBXCOVERMETA_MAX                                   = 22
};*/

// Enum GearboxFramework.GearboxGlobals.EGearboxCoverState
/*enum EGearboxCoverState
{
	GBXCOVERSTATE_Uncovered                            = 0,
	GBXCOVERSTATE_Covered                              = 1,
	GBXCOVERSTATE_PoppedUp                             = 2,
	GBXCOVERSTATE_LeanedOut                            = 3,
	GBXCOVERSTATE_Peeking                              = 4,
	GBXCOVERSTATE_BlindFiring                          = 5,
	GBXCOVERSTATE_Mantling                             = 6,
	GBXCOVERSTATE_GameSpecific                         = 7,
	GBXCOVERSTATE_Reserved1                            = 8,
	GBXCOVERSTATE_Reserved2                            = 9,
	GBXCOVERSTATE_Reserved3                            = 10,
	GBXCOVERSTATE_Reserved4                            = 11,
	GBXCOVERSTATE_Reserved5                            = 12,
	GBXCOVERSTATE_Reserved6                            = 13,
	GBXCOVERSTATE_Reserved7                            = 14,
	GBXCOVERSTATE_Reserved8                            = 15,
	GBXCOVERSTATE_Reserved9                            = 16,
	GBXCOVERSTATE_MAX                                  = 17
};*/

// Enum GearboxFramework.GearboxGlobals.EVantageType
/*enum EVantageType
{
	VTYPE_Normal                                       = 0,
	VTYPE_StandingUp                                   = 1,
	VTYPE_OverWall                                     = 2,
	VTYPE_AroundCorner                                 = 3,
	VTYPE_MAX                                          = 4
};*/

// Enum GearboxFramework.GearboxGlobals.AwarenessReason
/*enum AwarenessReason
{
	AWAREREASON_SawEnemy                               = 0,
	AWAREREASON_HeardEnemy                             = 1,
	AWAREREASON_HeardWeaponNoise                       = 2,
	AWAREREASON_NotifiedByFireTeam                     = 3,
	AWAREREASON_NotifiedByPlayer                       = 4,
	AWAREREASON_SuppressOrderGiven                     = 5,
	AWAREREASON_AttackedByEnemy                        = 6,
	AWAREREASON_BulletImpactOrWhiz                     = 7,
	AWAREREASON_GrenadeFromEnemy                       = 8,
	AWAREREASON_LevelDesignForceSee                    = 9,
	AWAREREASON_FriendlyKilled                         = 10,
	AWAREREASON_MAX                                    = 11
};*/

// Enum GearboxFramework.GearboxGlobals.ELocationSearchRandomness
/*enum ELocationSearchRandomness
{
	ELOCRAND_PreferIdealDirection                      = 0,
	ELOCRAND_PreferRandomLight                         = 1,
	ELOCRAND_PreferRandomHeavy                         = 2,
	ELOCRAND_MAX                                       = 3
};*/

// Enum GearboxFramework.GearboxGlobals.ERepathBehavior
/*enum ERepathBehavior
{
	REPATH_None                                        = 0,
	REPATH_IfOriginMoves                               = 1,
	REPATH_IfCoverBecomesInvalid                       = 2,
	REPATH_MAX                                         = 3
};*/

// Enum GearboxFramework.GearboxGlobals.ECoverFailureBehavior
/*enum ECoverFailureBehavior
{
	COVERFAIL_TryToFindNonCoverSpot                    = 0,
	COVERFAIL_StopSearch                               = 1,
	COVERFAIL_MAX                                      = 2
};*/

// Enum GearboxFramework.GearboxGlobals.ECoverSearchFilter
/*enum ECoverSearchFilter
{
	COVERSEARCH_Normal                                 = 0,
	COVERSEARCH_IgnoreCurrentCover                     = 1,
	COVERSEARCH_MAX                                    = 2
};*/

// Enum GearboxFramework.GearboxGlobals.EDestinationAdditionalTest
/*enum EDestinationAdditionalTest
{
	DESTTEST_None                                      = 0,
	DESTTEST_HasLOSToTarget                            = 1,
	DESTTEST_BlockedLOSToTarget                        = 2,
	DESTTEST_MAX                                       = 3
};*/

// Enum GearboxFramework.GearboxGlobals.EMaterialParamType
/*enum EMaterialParamType
{
	MatParmType_None                                   = 0,
	MatParmType_Color                                  = 1,
	MatParmType_Font                                   = 2,
	MatParmType_Scalar                                 = 3,
	MatParmType_Texture                                = 4,
	MatParmType_Vector                                 = 5,
	MatParmType_MAX                                    = 6
};*/

// Enum GearboxFramework.GearboxGlobals.ECameraZoomScale
/*enum ECameraZoomScale
{
	EZOOM_NoChange                                     = 0,
	EZOOM_UltraClose                                   = 1,
	EZOOM_Close                                        = 2,
	EZOOM_MidRange                                     = 3,
	EZOOM_Wide                                         = 4,
	EZOOM_MAX                                          = 5
};*/

// Enum GearboxFramework.GearboxGlobals.ECameraInterpolationMode
/*enum ECameraInterpolationMode
{
	IM_Logarithmic                                     = 0,
	IM_Linear                                          = 1,
	IM_SineCurve                                       = 2,
	IM_MAX                                             = 3
};*/

// Enum GearboxFramework.GearboxGlobals.EFacingPolicy
/*enum EFacingPolicy
{
	FACE_Unknown                                       = 0,
	FACE_NoChange                                      = 1,
	FACE_Actor                                         = 2,
	FACE_Vector                                        = 3,
	FACE_Destination                                   = 4,
	FACE_CoverRegionIdle                               = 5,
	FACE_MAX                                           = 6
};*/

// Enum GearboxFramework.GearboxGlobals.EMovementSpeed
/*enum EMovementSpeed
{
	MOVESPEED_Stationary                               = 0,
	MOVESPEED_Walking                                  = 1,
	MOVESPEED_Running                                  = 2,
	MOVESPEED_Sprinting                                = 3,
	MOVESPEED_FastSprinting                            = 4,
	MOVESPEED_MAX                                      = 5
};*/

// Enum GearboxFramework.GearboxGlobals.EMovementFinishedCause
/*enum EMovementFinishedCause
{
	MOVEFINISHED_None                                  = 0,
	MOVEFINISHED_FailedToFindCover                     = 1,
	MOVEFINISHED_FailedFindSearchOrigin                = 2,
	MOVEFINISHED_FailedFindSearchDirection             = 3,
	MOVEFINISHED_FailedFindNavMeshSpot                 = 4,
	MOVEFINISHED_FailedToGeneratePath                  = 5,
	MOVEFINISHED_FailedToCompleteNavigation            = 6,
	MOVEFINISHED_Repath                                = 7,
	MOVEFINISHED_MovementInterrupted                   = 8,
	MOVEFINISHED_MoveSuccessfullyEnded                 = 9,
	MOVEFINISHED_MAX                                   = 10
};*/

// Enum GearboxFramework.Action_PawnMovementBase.EAttributeEvaluationStyle
/*enum EAttributeEvaluationStyle
{
	ATTREVALSTYLE_Once                                 = 0,
	ATTREVALSTYLE_EveryFrame                           = 1,
	ATTREVALSTYLE_MAX                                  = 2
};*/

// Enum GearboxFramework.BehaviorProviderDefinition.EBehaviorVariableType
/*enum EBehaviorVariableType
{
	BVAR_None                                          = 0,
	BVAR_Bool                                          = 1,
	BVAR_Int                                           = 2,
	BVAR_Float                                         = 3,
	BVAR_Vector                                        = 4,
	BVAR_Object                                        = 5,
	BVAR_AllPlayers                                    = 6,
	BVAR_Attribute                                     = 7,
	BVAR_InstanceData                                  = 8,
	BVAR_NamedVariable                                 = 9,
	BVAR_NamedKismetVariable                           = 10,
	BVAR_DirectionVector                               = 11,
	BVAR_AttachmentLocation                            = 12,
	BVAR_UnaryMath                                     = 13,
	BVAR_BinaryMath                                    = 14,
	BVAR_Flag                                          = 15,
	BVAR_MAX                                           = 16
};*/

// Enum GearboxFramework.BehaviorProviderDefinition.EBehaviorVariableLinkType
/*enum EBehaviorVariableLinkType
{
	BVARLINK_Unknown                                   = 0,
	BVARLINK_Context                                   = 1,
	BVARLINK_Input                                     = 2,
	BVARLINK_Output                                    = 3,
	BVARLINK_MAX                                       = 4
};*/

// Enum GearboxFramework.AIDebugCamera.EDebugItemType
/*enum EDebugItemType
{
	DEBUGITEM_String                                   = 0,
	DEBUGITEM_StringSpacer                             = 1,
	DEBUGITEM_ScreenIcon                               = 2,
	DEBUGITEM_WorldString                              = 3,
	DEBUGITEM_Icon                                     = 4,
	DEBUGITEM_Line                                     = 5,
	DEBUGITEM_Box                                      = 6,
	DEBUGITEM_Circle                                   = 7,
	DEBUGITEM_Cone                                     = 8,
	DEBUGITEM_BarGraphScreenTop                        = 9,
	DEBUGITEM_BarGraphScreenTopTitle                   = 10,
	DEBUGITEM_BarGraphScreenCenter                     = 11,
	DEBUGITEM_BarGraphScreenCenterTitle                = 12,
	DEBUGITEM_MAX                                      = 13
};*/

// Enum GearboxFramework.AIDebugCamera.EDebugAlignment
/*enum EDebugAlignment
{
	DEBUGALIGN_Left                                    = 0,
	DEBUGALIGN_Center                                  = 1,
	DEBUGALIGN_Right                                   = 2,
	DEBUGALIGN_LeftNoWrap                              = 3,
	DEBUGALIGN_LeftColumn2                             = 4,
	DEBUGALIGN_LeftColumn2NoWrap                       = 5,
	DEBUGALIGN_MAX                                     = 6
};*/

// Enum GearboxFramework.AIDefinition.ENPCOnUsedOutputs
/*enum ENPCOnUsedOutputs
{
	USEDNPC_HasMissions                                = 0,
	USEDNPC_NoMissions                                 = 1,
	USEDNPC_Generic                                    = 2,
	USEDNPC_MAX                                        = 3
};*/

// Enum GearboxFramework.AIResourceExpressionEvaluator.AIResourceOption
/*enum AIResourceOption
{
	AIResourceOption_On                                = 0,
	AIResourceOption_Off                               = 1,
	AIResourceOption_MAX                               = 2
};*/

// Enum GearboxFramework.GearboxEditorNode.NodeType
/*enum NodeType
{
	NT_Event                                           = 0,
	NT_Action                                          = 1,
	NT_Variable                                        = 2,
	NT_MAX                                             = 3
};*/

// Enum GearboxFramework.AITracker.ESnapshotEventType
/*enum ESnapshotEventType
{
	SNAP_NoEvent                                       = 0,
	SNAP_ChildSequenceStart                            = 1,
	SNAP_RuleStart                                     = 2,
	SNAP_RuleEnd                                       = 3,
	SNAP_RuleInterrupt                                 = 4,
	SNAP_SwitchRuleSet                                 = 5,
	SNAP_PreventNewRules                               = 6,
	SNAP_MAX                                           = 7
};*/

// Enum GearboxFramework.AllegianceExpressionEvaluator.EAllegianceExpression
/*enum EAllegianceExpression
{
	EAllegianceExpression_IsAllegiance                 = 0,
	EAllegianceExpression_IsNotAllegiance              = 1,
	EAllegianceExpression_MAX                          = 2
};*/

// Enum GearboxFramework.AnimNodeSpecialMoveBlend.EAnimState
/*enum EAnimState
{
	EAnimState_None                                    = 0,
	EAnimState_Playing                                 = 1,
	EAnimState_Finished                                = 2,
	EAnimState_BlendingOut                             = 3,
	EAnimState_MAX                                     = 4
};*/

// Enum GearboxFramework.AwarenessZoneDefinition.EViewConeStyle
/*enum EViewConeStyle
{
	VIEWCONE_UseSightBone                              = 0,
	VIEWCONE_UsePawnRotation                           = 1,
	VIEWCONE_MAX                                       = 2
};*/

// Enum GearboxFramework.AwarenessZoneDefinition.ESpecialExposureBehavior
/*enum ESpecialExposureBehavior
{
	EXPOSUREBEHAVIOR_Normal                            = 0,
	EXPOSUREBEHAVIOR_AlwaysSeeThreats                  = 1,
	EXPOSUREBEHAVIOR_NeverSeeThreats                   = 2,
	EXPOSUREBEHAVIOR_MAX                               = 3
};*/

// Enum GearboxFramework.AwarenessZoneDefinition.EHearingBehavior
/*enum EHearingBehavior
{
	HEARINGBEHAVIOR_NeverHear                          = 0,
	HEARINGBEHAVIOR_HearIfExposed                      = 1,
	HEARINGBEHAVIOR_AlwaysHear                         = 2,
	HEARINGBEHAVIOR_MAX                                = 3
};*/

// Enum GearboxFramework.Behavior_AIHold.AIHoldAction
/*enum AIHoldAction
{
	AIHold_Hold                                        = 0,
	AIHold_Release                                     = 1,
	AIHold_MAX                                         = 2
};*/

// Enum GearboxFramework.Behavior_AIHold.AIHoldType
/*enum AIHoldType
{
	AIHoldType_AI                                      = 0,
	AIHoldType_Target                                  = 1,
	AIHoldType_Movement                                = 2,
	AIHoldType_Demigod                                 = 3,
	AIHoldType_God                                     = 4,
	AIHoldType_Dialog                                  = 5,
	AIHoldType_MAX                                     = 6
};*/

// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerID
/*enum EBehaviorTimerID
{
	BTIMER                                             = 0,
	BTIMER01                                           = 1,
	BTIMER02                                           = 2,
	BTIMER_MAX                                         = 3
};*/

// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerEvent
/*enum EBehaviorTimerEvent
{
	TIMEREVENT_Timer1Elapsed                           = 0,
	TIMEREVENT_Timer2Elapsed                           = 1,
	TIMEREVENT_Timer3Elapsed                           = 2,
	TIMEREVENT_MAX                                     = 3
};*/

// Enum GearboxFramework.Behavior_ChangeTimer.EBehaviorTimerReaction
/*enum EBehaviorTimerReaction
{
	TR_NoChange                                        = 0,
	TR_Start                                           = 1,
	TR_Stop                                            = 2,
	TR_Toggle                                          = 3,
	TR_ResetValue                                      = 4,
	TR_MAX                                             = 5
};*/

// Enum GearboxFramework.Behavior_CompareBool.ECompareBoolOutputLinkIds
/*enum ECompareBoolOutputLinkIds
{
	OUTPUT_True                                        = 0,
	OUTPUT_False                                       = 1,
	OUTPUT_MAX                                         = 2
};*/

// Enum GearboxFramework.Behavior_CompareValues.ECompareValuesOutputLinkIds
/*enum ECompareValuesOutputLinkIds
{
	OUTPUT_LessThanOrEqual                             = 0,
	OUTPUT_GreaterThan                                 = 1,
	OUTPUT_Equal                                       = 2,
	OUTPUT_LessThan                                    = 3,
	OUTPUT_GreaterThanOrEqual                          = 4,
	OUTPUT_MAX                                         = 5
};*/

// Enum GearboxFramework.Behavior_IsSequenceEnabled.EIsSequenceOutputLinkIds
/*enum EIsSequenceOutputLinkIds
{
	OUTPUT_SequenceIsEnabled                           = 0,
	OUTPUT_SequenceIsDisabled                          = 1,
	OUTPUT_MAX                                         = 2
};*/

// Enum GearboxFramework.Behavior_ModifyTimer.BehaviorTimerFunction
/*enum BehaviorTimerFunction
{
	BETF_None                                          = 0,
	BETF_Start                                         = 1,
	BETF_Pause                                         = 2,
	BETF_Toggle                                        = 3,
	BETF_Resume                                        = 4,
	BETF_Stop                                          = 5,
	BETF_MAX                                           = 6
};*/

// Enum GearboxFramework.Behavior_PostAkEvent.EPostAkEventOutputLinks
/*enum EPostAkEventOutputLinks
{
	POSTAK_Out                                         = 0,
	POSTAK_Finished                                    = 1,
	POSTAK_MAX                                         = 2
};*/

// Enum GearboxFramework.Behavior_SendGbxMessage.MessageBehaviorLogic
/*enum MessageBehaviorLogic
{
	SENDERLOGIC_None                                   = 0,
	SENDERLOGIC_UseBehaviorContext                     = 1,
	SENDERLOGIC_Self                                   = 2,
	SENDERLOGIC_MyInstigator                           = 3,
	SENDERLOGIC_Other                                  = 4,
	SENDERLOGIC_MAX                                    = 5
};*/

// Enum GearboxFramework.GbxMessageDefinition.EGbxMessageDupeStruct
/*enum EGbxMessageDupeStruct
{
	GBXMSGDUPE_SameSender                              = 0,
	GBXMSGDUPE_SameSubject                             = 1,
	GBXMSGDUPE_SameNameData                            = 2,
	GBXMSGDUPE_SameIntData                             = 3,
	GBXMSGDUPE_SameFloatData                           = 4,
	GBXMSGDUPE_SameMetaData1                           = 5,
	GBXMSGDUPE_SameMetaData2                           = 6,
	GBXMSGDUPE_SameMetaData3                           = 7,
	GBXMSGDUPE_SameMetaData4                           = 8,
	GBXMSGDUPE_MAX                                     = 9
};*/

// Enum GearboxFramework.Behavior_SpecialMove.ETriggerSpecialMoveOutputLinks
/*enum ETriggerSpecialMoveOutputLinks
{
	TRIGGER_SPECIALMOVE_Out                            = 0,
	TRIGGER_SPECIALMOVE_Finished                       = 1,
	TRIGGER_SPECIALMOVE_MAX                            = 2
};*/

// Enum GearboxFramework.Behavior_ToggleDialog.EToggleDialogOption
/*enum EToggleDialogOption
{
	ToggleDialog_Toggle                                = 0,
	ToggleDialog_Enable                                = 1,
	ToggleDialog_Disable                               = 2,
	ToggleDialog_MAX                                   = 3
};*/

// Enum GearboxFramework.Behavior_TriggerDialogEvent.ETriggerDialogEventOutputLinks
/*enum ETriggerDialogEventOutputLinks
{
	TRIGGER_EVENT_Out                                  = 0,
	TRIGGER_EVENT_Finished                             = 1,
	TRIGGER_EVENT_MAX                                  = 2
};*/

// Enum GearboxFramework.BehaviorHelpers.EFireSocketSelectionMethod
/*enum EFireSocketSelectionMethod
{
	FSSM_Increment                                     = 0,
	FSSM_Random                                        = 1,
	FSSM_RandomLooping                                 = 2,
	FSSM_MAX                                           = 3
};*/

// Enum GearboxFramework.BehaviorHelpers.EDirectionRelativeToParent
/*enum EDirectionRelativeToParent
{
	DIRECTION_Default                                  = 0,
	DIRECTION_ParentOrientation                        = 1,
	DIRECTION_InverseParentOrientation                 = 2,
	DIRECTION_ParentVelocity                           = 3,
	DIRECTION_InverseParentVelocity                    = 4,
	DIRECTION_Random                                   = 5,
	DIRECTION_RandomUpwards                            = 6,
	DIRECTION_RandomDownwards                          = 7,
	DIRECTION_RandomOnHorizontalPlane                  = 8,
	DIRECTION_StraightUp                               = 9,
	DIRECTION_StraightDown                             = 10,
	DIRECTION_StraightTowardTarget                     = 11,
	DIRECTION_ParentAimDirection                       = 12,
	DIRECTION_InverseParentAimDirection                = 13,
	DIRECTION_InverseTearOffMomentum                   = 14,
	DIRECTION_MAX                                      = 15
};*/

// Enum GearboxFramework.BehaviorKernel.EBehaviorProcessState
/*enum EBehaviorProcessState
{
	BPROCESS_Uninitialized                             = 0,
	BPROCESS_Terminated                                = 1,
	BPROCESS_Running                                   = 2,
	BPROCESS_Suspended                                 = 3,
	BPROCESS_MAX                                       = 4
};*/

// Enum GearboxFramework.BehaviorKernel.EBehaviorThreadState
/*enum EBehaviorThreadState
{
	BTHREAD_Waiting                                    = 0,
	BTHREAD_Running                                    = 1,
	BTHREAD_Terminated                                 = 2,
	BTHREAD_Unknown                                    = 3,
	BTHREAD_MAX                                        = 4
};*/

// Enum GearboxFramework.BehaviorSequenceEnableByMultipleConditions.EMultiConditionOperator
/*enum EMultiConditionOperator
{
	EMCL_OR                                            = 0,
	EMCL_AND                                           = 1,
	EMCL_MAX                                           = 2
};*/

// Enum GearboxFramework.InterfaceGearboxCamera.ECameraLookAtMode
/*enum ECameraLookAtMode
{
	CLAM_FirstPerson                                   = 0,
	CLAM_ThirdPersonAlignWithPlayer                    = 1,
	CLAM_ThirdPersonAlignBetweenPlayerAndTarget        = 2,
	CLAM_MAX                                           = 3
};*/

// Enum GearboxFramework.CharacterClassMessageDefinition.EBehaviorMsgInstigator
/*enum EBehaviorMsgInstigator
{
	BEHAVMSGINST_NoInstigator                          = 0,
	BEHAVMSGINST_UseMsgSender                          = 1,
	BEHAVMSGINST_UseMsgSubject                         = 2,
	BEHAVMSGINST_UseAddlData                           = 3,
	BEHAVMSGINST_MAX                                   = 4
};*/

// Enum GearboxFramework.CharacterClassMessageDefinition.EBehaviorMsgEventParticipant
/*enum EBehaviorMsgEventParticipant
{
	BEHAVMSGPART_NoInstigator                          = 0,
	BEHAVMSGPART_UseMsgSender                          = 1,
	BEHAVMSGPART_UseMsgSubject                         = 2,
	BEHAVMSGPART_UseAddlData                           = 3,
	BEHAVMSGPART_MAX                                   = 4
};*/

// Enum GearboxFramework.CompoundExpressionEvaluator.ECExpressionOperatorType
/*enum ECExpressionOperatorType
{
	CEOP_Or                                            = 0,
	CEOP_And                                           = 1,
	CEOP_MAX                                           = 2
};*/

// Enum GearboxFramework.FiringPattern.EPointSpreadType
/*enum EPointSpreadType
{
	POINTSPREAD_Linear                                 = 0,
	POINTSPREAD_Squared                                = 1,
	POINTSPREAD_InverseSquared                         = 2,
	POINTSPREAD_Cubed                                  = 3,
	POINTSPREAD_InverseCubed                           = 4,
	POINTSPREAD_MAX                                    = 5
};*/

// Enum GearboxFramework.Rule.ExecutionPatternType
/*enum ExecutionPatternType
{
	RULEEXEC_Normal                                    = 0,
	RULEEXEC_Limited                                   = 1,
	RULEEXEC_MAX                                       = 2
};*/

// Enum GearboxFramework.Rule.EFlagEvalType
/*enum EFlagEvalType
{
	FLAG_IsTrue                                        = 0,
	FLAG_IsFalse                                       = 1,
	FLAG_HasBeenTrueForXSeconds                        = 2,
	FLAG_HasBeenFalseForXSeconds                       = 3,
	FLAG_MAX                                           = 4
};*/

// Enum GearboxFramework.SparkTypes.EInitializedResult
/*enum EInitializedResult
{
	INITIALIZED_ValidWithAccount                       = 0,
	INITIALIZED_ValidNoAccount                         = 1,
	INITIALIZED_InProgress                             = 2,
	INITIALIZED_NetworkFailure                         = 3,
	INITIALIZED_PlatformFailure                        = 4,
	INITIALIZED_NotValid                               = 5,
	INITIALIZED_MAX                                    = 6
};*/

// Enum GearboxFramework.SparkTypes.EHttpError
/*enum EHttpError
{
	HE_Success                                         = 0,
	HE_UnknownFailure                                  = 1,
	HE_Timeout                                         = 2,
	HE_BadUrl                                          = 3,
	HE_Connect                                         = 4,
	HE_SendRequest                                     = 5,
	HE_ReceiveResponse                                 = 6,
	HE_ReadResponse                                    = 7,
	HE_WriteData                                       = 8,
	HE_HttpStatus                                      = 9,
	HE_ServerCertificate                               = 10,
	HE_MAX                                             = 11
};*/

// Enum GearboxFramework.SparkTypes.ESparkStepResult
/*enum ESparkStepResult
{
	STEP_Success                                       = 0,
	STEP_Fail                                          = 1,
	STEP_Async                                         = 2,
	STEP_Disable                                       = 3,
	STEP_Final                                         = 4,
	STEP_MAX                                           = 5
};*/

// Enum GearboxFramework.SparkTypes.ESparkInitializationStatus
/*enum ESparkInitializationStatus
{
	SPARKINIT_Uninitialized                            = 0,
	SPARKINIT_TMSDownloaded                            = 1,
	SPARKINIT_PendingAuthentication                    = 2,
	SPARKINIT_PendingVerification                      = 3,
	SPARKINIT_VerificationComplete                     = 4,
	SPARKINIT_Initialized                              = 5,
	SPARKINIT_Disabled                                 = 6,
	SPARKINIT_UnrecoverableError                       = 7,
	SPARKINIT_MAX                                      = 8
};*/

// Enum GearboxFramework.GearboxAccountActions.EEntitlementConsumedResult
/*enum EEntitlementConsumedResult
{
	CONSUME_Success                                    = 0,
	CONSUME_GeneralFailure                             = 1,
	CONSUME_NetworkFailure                             = 2,
	CONSUME_Timeout                                    = 3,
	CONSUME_MAX                                        = 4
};*/

// Enum GearboxFramework.GearboxAccountActions.EResetPasswordResult
/*enum EResetPasswordResult
{
	RESETP_Success                                     = 0,
	RESETP_GeneralFailure                              = 1,
	RESETP_NetworkFailure                              = 2,
	RESETP_Timeout                                     = 3,
	RESETP_MAX                                         = 4
};*/

// Enum GearboxFramework.GearboxAccountActions.ECodeRedeemedResult
/*enum ECodeRedeemedResult
{
	REDEEM_Success                                     = 0,
	REDEEM_Expired                                     = 1,
	REDEEM_NotValid                                    = 2,
	REDEEM_Taken                                       = 3,
	REDEEM_GeneralFailure                              = 4,
	REDEEM_NetworkFailure                              = 5,
	REDEEM_Timeout                                     = 6,
	REDEEM_Duplicate                                   = 7,
	REDEEM_MAX                                         = 8
};*/

// Enum GearboxFramework.GearboxAccountActions.ESignInResult
/*enum ESignInResult
{
	SIGNIN_Success                                     = 0,
	SIGNIN_PlatformTakenByOther                        = 1,
	SIGNIN_PlatformTakenBySelf                         = 2,
	SIGNIN_LoginFail                                   = 3,
	SIGNIN_NetworkFailure                              = 4,
	SIGNIN_GeneralFailure                              = 5,
	SIGNIN_Timeout                                     = 6,
	SIGNIN_MAX                                         = 7
};*/

// Enum GearboxFramework.GearboxAccountActions.ESignUpResult
/*enum ESignUpResult
{
	SIGNUP_Success                                     = 0,
	SIGNUP_EmailTaken                                  = 1,
	SIGNUP_PlatformTaken                               = 2,
	SIGNUP_GeneralFailure                              = 3,
	SIGNUP_PasswordNotSet                              = 4,
	SIGNUP_PasswordTooShort                            = 5,
	SIGNUP_PasswordTooLong                             = 6,
	SIGNUP_PasswordInvalid                             = 7,
	SIGNUP_EmailNotSet                                 = 8,
	SIGNUP_EmailNotValid                               = 9,
	SIGNUP_NetworkFailure                              = 10,
	SIGNUP_Timeout                                     = 11,
	SIGNUP_MAX                                         = 12
};*/

// Enum GearboxFramework.GearboxAccountActions.EAgeGateResult
/*enum EAgeGateResult
{
	AGE_Valid                                          = 0,
	AGE_InvalidDate                                    = 1,
	AGE_BelowMinimum                                   = 2,
	AGE_MAX                                            = 3
};*/

// Enum GearboxFramework.SparkInterface.HttpMethod
/*enum HttpMethod
{
	HM_POST                                            = 0,
	HM_GET                                             = 1,
	HM_PUT                                             = 2,
	HM_MAX                                             = 3
};*/

// Enum GearboxFramework.SparkInterface.HttpMimeType
/*enum HttpMimeType
{
	HMT_Default                                        = 0,
	HMT_TEXT_PLAIN                                     = 1,
	HMT_JSON                                           = 2,
	HMT_PROTOBUF                                       = 3,
	HMT_CUSTOM                                         = 4,
	HMT_MAX                                            = 5
};*/

// Enum GearboxFramework.GearboxAnimDefinition.EEndingCondition
/*enum EEndingCondition
{
	EC_StopOnLastFrame                                 = 0,
	EC_OnAnimEnd                                       = 1,
	EC_OnBlendOut                                      = 2,
	EC_Loop                                            = 3,
	EC_MAX                                             = 4
};*/

// Enum GearboxFramework.GearboxDialogEventTag.EDialogEventMatchQuality
/*enum EDialogEventMatchQuality
{
	MQ_NoMatch                                         = 0,
	MQ_Match                                           = 1,
	MQ_ForceMatch                                      = 2,
	MQ_MAX                                             = 3
};*/

// Enum GearboxFramework.GFxMovieState.EMovieStateMode
/*enum EMovieStateMode
{
	MOVIESTATE_Any                                     = 0,
	MOVIESTATE_StateMachine                            = 1,
	MOVIESTATE_Flags                                   = 2,
	MOVIESTATE_Custom                                  = 3,
	MOVIESTATE_MAX                                     = 4
};*/

// Enum GearboxFramework.GFxMovieState.EStateApplyMode
/*enum EStateApplyMode
{
	SAM_None                                           = 0,
	SAM_GotoAndStop                                    = 1,
	SAM_GotoAndPlay                                    = 2,
	SAM_ActionScript                                   = 3,
	SAM_MAX                                            = 4
};*/

// Enum GearboxFramework.INounAttributeProvider.ENounReplicationStrategy
/*enum ENounReplicationStrategy
{
	NOUNREP_NoReplication                              = 0,
	NOUNREP_RepToOwnerOnly                             = 1,
	NOUNREP_RepToEveryone                              = 2,
	NOUNREP_MAX                                        = 3
};*/

// Enum GearboxFramework.GearboxProfileSettings.EGenericYesOrNo
/*enum EGenericYesOrNo
{
	GPID_VALUE_NO                                      = 0,
	GPID_VALUE_YES                                     = 1,
	GPID_VALUE_MAX                                     = 2
};*/

// Enum GearboxFramework.GearboxRenderTextureManager.EThumbnailUpdate
/*enum EThumbnailUpdate
{
	Thumbnail_Static                                   = 0,
	Thumbnail_Update                                   = 1,
	Thumbnail_StreamTextures                           = 2,
	Thumbnail_Dynamic                                  = 3,
	Thumbnail_MAX                                      = 4
};*/

// Enum GearboxFramework.GFxActorMoviePool.EGFxMoviePooling
/*enum EGFxMoviePooling
{
	GMP_Pooled                                         = 0,
	GMP_Shared                                         = 1,
	GMP_Instanced                                      = 2,
	GMP_MAX                                            = 3
};*/

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDAnchorPoint
/*enum EHUDAnchorPoint
{
	HAP_None                                           = 0,
	HAP_Center                                         = 1,
	HAP_TopLeft                                        = 2,
	HAP_TopRight                                       = 3,
	HAP_BottomLeft                                     = 4,
	HAP_BottomRight                                    = 5,
	HAP_Left                                           = 6,
	HAP_Top                                            = 7,
	HAP_Right                                          = 8,
	HAP_Bottom                                         = 9,
	HAP_Projected                                      = 10,
	HAP_ProjectedScaled                                = 11,
	HAP_MAX                                            = 12
};*/

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDOrientation
/*enum EHUDOrientation
{
	HO_Horizontal                                      = 0,
	HO_Vertical                                        = 1,
	HO_MAX                                             = 2
};*/

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDCoordType
/*enum EHUDCoordType
{
	HCT_Scaled                                         = 0,
	HCT_Fixed                                          = 1,
	HCT_MovieRelative                                  = 2,
	HCT_MAX                                            = 3
};*/

// Enum GearboxFramework.IPopulationSpawnPoint.EInitialActionType
/*enum EInitialActionType
{
	INITIALACTION_None                                 = 0,
	INITIALACTION_MoveForward                          = 1,
	INITIALACTION_MoveToActor                          = 2,
	INITIALACTION_MoveToCover                          = 3,
	INITIALACTION_Burrow                               = 4,
	INITIALACTION_MAX                                  = 5
};*/

// Enum GearboxFramework.IPopulationSpawnPoint.ESpawnStyleType
/*enum ESpawnStyleType
{
	ENTRANCE_None                                      = 0,
	ENTRANCE_WalkOut                                   = 1,
	ENTRANCE_CrawlOut                                  = 2,
	ENTRANCE_ClimbOver1                                = 3,
	ENTRANCE_ClimbOver2                                = 4,
	ENTRANCE_PushTarpAside1                            = 5,
	ENTRANCE_PushTarpAside2                            = 6,
	ENTRANCE_PhaseIn                                   = 7,
	ENTRANCE_PerchedLeft                               = 8,
	ENTRANCE_PerchedRight                              = 9,
	ENTRANCE_MAX                                       = 10
};*/

// Enum GearboxFramework.KnowledgeRecord.KDBCategory
/*enum KDBCategory
{
	KDB_None                                           = 0,
	KDB_Standard                                       = 1,
	KDB_MAX                                            = 2
};*/

// Enum GearboxFramework.KnowledgeRecord.KDBEvalType
/*enum KDBEvalType
{
	Eval_Poll                                          = 0,
	Eval_TargetIterator                                = 1,
	Eval_MAX                                           = 2
};*/

// Enum GearboxFramework.MultipleFlagValueResolver.ValueResolveAggregationType
/*enum ValueResolveAggregationType
{
	AGGREG_AtLeastOne                                  = 0,
	AGGREG_All                                         = 1,
	AGGREG_None                                        = 2,
	AGGREG_MAX                                         = 3
};*/

// Enum GearboxFramework.PopulationDefinition.EPopulationRespawnOptions
/*enum EPopulationRespawnOptions
{
	POPRESPAWN_Never                                   = 0,
	POPRESPAWN_OnTimeDelay                             = 1,
	POPRESPAWN_OnlyOnLevelLoad                         = 2,
	POPRESPAWN_MAX                                     = 3
};*/

// Enum GearboxFramework.PopulationEncounter.EEncounterConstraintType
/*enum EEncounterConstraintType
{
	ENCOUNTERCONSTAINT_All                             = 0,
	ENCOUNTERCONSTAINT_Any                             = 1,
	ENCOUNTERCONSTAINT_NotAll                          = 2,
	ENCOUNTERCONSTAINT_NotAny                          = 3,
	ENCOUNTERCONSTAINT_MAX                             = 4
};*/

// Enum GearboxFramework.PopulationMaster.EPopulationStats
/*enum EPopulationStats
{
	STATTYPE_SpawnActor                                = 0,
	STATTYPE_PointSearch                               = 1,
	STATTYPE_MAX                                       = 2
};*/

// Enum GearboxFramework.PopulationPoint.EPopPointContraintType
/*enum EPopPointContraintType
{
	POPOINTCONSTRAINT_None                             = 0,
	POPOINTCONSTRAINT_Inclusion                        = 1,
	POPOINTCONSTRAINT_Exclusion                        = 2,
	POPOINTCONSTRAINT_InclusionOr                      = 3,
	POPOINTCONSTRAINT_ExclusionOr                      = 4,
	POPOINTCONSTRAINT_MAX                              = 5
};*/

// Enum GearboxFramework.PopulationPoint.EPopulationPointType
/*enum EPopulationPointType
{
	POINT_Ambush                                       = 0,
	POINT_PointOfInterest                              = 1,
	POINT_Vehicle                                      = 2,
	POINT_MAX                                          = 3
};*/

// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverOperand
/*enum EMathValueResolverOperand
{
	MATHRESOLVEROPERAND_Add                            = 0,
	MATHRESOLVEROPERAND_Sub                            = 1,
	MATHRESOLVEROPERAND_Mul                            = 2,
	MATHRESOLVEROPERAND_Div                            = 3,
	MATHRESOLVEROPERAND_MAX                            = 4
};*/

// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverArg1Option
/*enum EMathValueResolverArg1Option
{
	MATHRESOLVEARG1_UsePreviousValue                   = 0,
	MATHRESOLVEARG1_FromAttribute                      = 1,
	MATHRESOLVEARG1_MAX                                = 2
};*/

// Enum GearboxFramework.SparkInterfaceImpl.SparkRequestState
/*enum SparkRequestState
{
	SRS_IDLE                                           = 0,
	SRS_AWAITING_RETRY                                 = 1,
	SRS_IN_FLIGHT                                      = 2,
	SRS_AWAITING_AUTHENTICATE                          = 3,
	SRS_START                                          = 4,
	SRS_FAIL                                           = 5,
	SRS_QUEUED                                         = 6,
	SRS_CLEANUP                                        = 7,
	SRS_MAX                                            = 8
};*/

// Enum GearboxFramework.TargetIterator.ETargetIterator
/*enum ETargetIterator
{
	TARGITER_UpdateState                               = 0,
	TARGITER_PriorityCalc                              = 1,
	TARGITER_ForgetTarget                              = 2,
	TARGITER_RemoveTarget                              = 3,
	TARGITER_PostProcess                               = 4,
	TARGITER_MAX                                       = 5
};*/

// Enum GearboxFramework.TimeValueResolver.ETimeValueResolverMode
/*enum ETimeValueResolverMode
{
	TVRM_CurrentTime                                   = 0,
	TVRM_FrameTime                                     = 1,
	TVRM_ElapsedTime                                   = 2,
	TVRM_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GearboxFramework.ActorFactoryClone
// 0x0014 (0x0090 - 0x007C)
class UActorFactoryClone : public UActorFactory
{
public:
	TArray< class AGearboxPawn* >                      CloneArchetype;                                   		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       NewCloneTag;                                      		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2910 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ActorFactoryWireTerminal
// 0x0000 (0x007C - 0x007C)
class UActorFactoryWireTerminal : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2912 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIDebugCamera
// 0x0050 (0x008C - 0x003C)
class UAIDebugCamera : public UObject
{
public:
	class AGearboxMind*                                Mind;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	class URuleEngine*                                 RuleEngine;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FDebugListItem >                    DisplayList;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSnapshotModeOn : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowFlags : 1;                                   		// 0x0050 (0x0004) [0x0000000000044000] [0x00000002] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowRules : 1;                                   		// 0x0050 (0x0004) [0x0000000000044000] [0x00000004] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowInactiveRules : 1;                           		// 0x0050 (0x0004) [0x0000000000044000] [0x00000008] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowResources : 1;                               		// 0x0050 (0x0004) [0x0000000000044000] [0x00000010] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowCombat : 1;                                  		// 0x0050 (0x0004) [0x0000000000044000] [0x00000020] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowRuleEngineLoadBalance : 1;                   		// 0x0050 (0x0004) [0x0000000000044000] [0x00000040] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowAwarenessZones : 1;                          		// 0x0050 (0x0004) [0x0000000000044000] [0x00000080] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowTargetViewCones : 1;                         		// 0x0050 (0x0004) [0x0000000000044000] [0x00000100] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowTimers : 1;                                  		// 0x0050 (0x0004) [0x0000000000044000] [0x00000200] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowAITree : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000400] 
	int                                                SnapshotNdx;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	class USnapshotRecord*                             CurSnapshot;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	class UPopUpDebugBarGraph*                         PopUpGraphTop;                                    		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPopUpDebugBarGraph*                         PopUpGraphCenter;                                 		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       CurrentInspectedTargetName;                       		// 0x0064 (0x0008) [0x0000000000000000]              
	float                                              TopBarGraphStartXPct;                             		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TopBarGraphStartYPct;                             		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CenterBarGraphStartXPct;                          		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CenterBarGraphStartYPct;                          		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Column2XOffset;                                   		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Column1LastY;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              Column2LastY;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                LastColumnDrawnTo;                                		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2914 ];

		return pClassPointer;
	};

	void ToggleAITree ( );
	void ToggleTargetViewCones ( );
	void ToggleAwarenessZones ( );
	void ToggleRuleEngineLoadBalance ( );
	void ToggleCombat ( );
	void ToggleShowTimers ( );
	void ToggleResources ( );
	void ToggleInactiveRules ( );
	void ToggleRules ( );
	void ToggleFlags ( );
	class UAITracker* GetTracker ( );
	void SetMind ( class AGearboxMind* NewMind );
	void InitDummies ( int NewNumDummies );
	bool WantsToDoCameraInspection ( );
	void SetCurrentInspectedTarget ( struct FName NewName );
	void CompareRuleSetAndAdjustRuleIdx ( class USnapshotRecord* OldSnapshot, class USnapshotRecord* NewSnapshot );
	void SetRuleEngine ( class URuleEngine* NewRuleEngine );
	void SetPrevSnapshotRule ( );
	void SetNextSnapshotRule ( );
	void SetPrevSnapshot ( );
	void SetNextSnapshot ( );
	void NotifyGameUnPaused ( );
	void NotifyGamePaused ( );
	void Display ( class AHUD* HUD );
};

// Class GearboxFramework.AITracker
// 0x00D4 (0x0110 - 0x003C)
class UAITracker : public UObject
{
public:
	class USnapshotRecord*                             Snapshots[ 0x32 ];                                		// 0x003C (0x00C8) [0x0000000000002000]              ( CPF_Transient )
	int                                                SnapshotSize;                                     		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                SnapshotIndex;                                    		// 0x0108 (0x0004) [0x0000000000000000]              
	class AActor*                                      DebugOwner;                                       		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2916 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AnimNodeSpecialMoveBlend
// 0x0020 (0x010C - 0x00EC)
class UAnimNodeSpecialMoveBlend : public UAnimNodeSlot
{
public:
	unsigned char                                      AnimState;                                        		// 0x00EC (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              SavedBlendOutTime;                                		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USpecialMoveInterface*                       SMI;                                              		// 0x00F4 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FSlotAnimParameters >               AnimParameters;                                   		// 0x00FC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0108 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      IssueNotifiesWhenZeroWeight : 1;                  		// 0x0108 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2918 ];

		return pClassPointer;
	};

	bool IsPlaying ( class UGearboxAnimDefinition* AnimSMD );
	void SetRootMotion ( class URootMotionDefinition* RMDef );
	class UGearboxAnimDefinition* GetCurrentAnimDef ( );
	struct FName GetCurrentAnimName ( );
	void Finish ( unsigned long bInterrupted );
	void Stop ( unsigned long bInterrupted );
	float PlayData ( struct FName AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride, struct FSpecialMoveData* SMData );
	float Play ( class UGearboxAnimDefinition* CustomAnimSMD, struct FName AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride );
};

// Class GearboxFramework.AttributeExpressionEvaluator
// 0x0010 (0x004C - 0x003C)
class UAttributeExpressionEvaluator : public UExpressionEvaluator
{
public:
	struct FAttributeExpressionData                    Expression;                                       		// 0x003C (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2920 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.Behavior_CallFunction
// 0x0008 (0x0054 - 0x004C)
class UBehavior_CallFunction : public UBehaviorBase
{
public:
	struct FName                                       FunctionName;                                     		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2922 ];

		return pClassPointer;
	};

	void CallFunction ( class AActor* inActor, struct FName InFunctionName );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState
// 0x0044 (0x0090 - 0x004C)
class UBehavior_ChangeRemoteBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                           		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0050 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UObject*                                     SequenceProvider;                                 		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                       		// 0x005C (0x0034) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2924 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ChangeTimer
// 0x001C (0x0068 - 0x004C)
class UBehavior_ChangeTimer : public UBehaviorBase
{
public:
	unsigned char                                      TimerId;                                          		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Reaction;                                         		// 0x004D (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bSetNewTimerDelay : 1;                            		// 0x0050 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                NewTimerDelayFormula;                             		// 0x0054 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              NewTimerDelay;                                    		// 0x0064 (0x0004) [0x0000000020000002]              ( CPF_Const | CPF_Deprecated )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2926 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_IsSequenceEnabled
// 0x0040 (0x008C - 0x004C)
class UBehavior_IsSequenceEnabled : public UBehaviorBase
{
public:
	struct FName                                       SequenceName;                                     		// 0x004C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UObject*                                     SequenceProvider;                                 		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                       		// 0x0058 (0x0034) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2928 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_PostAkEvent
// 0x0010 (0x005C - 0x004C)
class UBehavior_PostAkEvent : public UBehaviorBase
{
public:
	class UAkEvent*                                    Event;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bReplicateEvent : 1;                              		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForLocalPlayerOnly : 1;                          		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForcePlayImmediate : 1;                          		// 0x0050 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayFromActor : 1;                               		// 0x0050 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bLatentWhenNoConnections : 1;                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FAkPlayingInfo                              PlayingInfo;                                      		// 0x0054 (0x0008) [0x0000000000082000]              ( CPF_Transient | CPF_Component )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2930 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.BehaviorHelpers
// 0x0018 (0x0054 - 0x003C)
class UBehaviorHelpers : public UObject
{
public:
	struct FScriptDelegate                             __BehaviorSetStrategy__Delegate;                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __BehaviorStrategy__Delegate;                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2932 ];

		return pClassPointer;
	};

	void RunAllBehaviorsForEvent ( struct FName EventName, struct FScriptDelegate SetStrategy, struct FScriptDelegate Strategy, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, unsigned char EnumValue );
	void BehaviorStrategy ( struct FPointer BehaviorSet, struct FName EventName, unsigned char EnumValue, TArray< class UBehaviorBase* >* BehaviorList );
	void BehaviorSetStrategy ( TArray< struct FPointer >* BehaviorSetList );
	class UBehaviorProviderDefinition* ResolveBehaviorProviderDefinitionReference ( class UBehaviorBase* SourceBehavior, class UObject* ProviderReference, struct FNameBasedObjectPath* PathName );
	bool IsBehaviorsV2 ( struct FBehaviorKernelInfo* KernelInfo );
	bool ShouldContinueExecution ( float TimeBetweenSteps, int MaxSteps, struct FBehaviorKernelInfo* KernelInfo, int* NumSteps );
	struct FName GetNextFireLocationSocket ( unsigned char FireSocketSelection, TArray< struct FName > FireLocationSocketNames, TArray< struct FName >* FireLocationSocketsRemaining );
	bool GetRotationFromAttachmentLocationData ( struct FAttachmentLocationData AttachmentLocation, struct FRotator* AttachmentLocationRotation );
	struct FVector GetRelativeDirection ( struct FRelativeDirectionData DesiredDirection, class UIWorldBody* Source, struct FVector DefaultDirection, struct FName SpawnSocketName );
};

// Class GearboxFramework.CompoundExpressionEvaluator
// 0x000C (0x0048 - 0x003C)
class UCompoundExpressionEvaluator : public UExpressionEvaluator
{
public:
	class UExpressionEvaluator*                        Expression1;                                      		// 0x003C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned char                                      Operator;                                         		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UExpressionEvaluator*                        Expression2;                                      		// 0x0044 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2934 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.ConditionalAttributeValueResolver
// 0x0020 (0x005C - 0x003C)
class UConditionalAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FConditionalInitializationExpressions       ValueExpressions;                                 		// 0x003C (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2936 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ConstantAttributeValueResolver
// 0x0004 (0x0040 - 0x003C)
class UConstantAttributeValueResolver : public UAttributeValueResolver
{
public:
	float                                              ConstantValue;                                    		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2938 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ConstraintAttributeValueResolver
// 0x0028 (0x0064 - 0x003C)
class UConstraintAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FRange                                      Constraints;                                      		// 0x003C (0x0028) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2940 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FeatherBoneBlendDefinition
// 0x000C (0x0048 - 0x003C)
class UFeatherBoneBlendDefinition : public UGBXDefinition
{
public:
	TArray< struct FFeatherBoneBlendData >             BoneBlends;                                       		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2942 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GBXActorList
// 0x000C (0x0048 - 0x003C)
class UGBXActorList : public UObject
{
public:
	TArray< struct Fs_actorList >                      ActorList;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2944 ];

		return pClassPointer;
	};

	void RemoveAndDeleteActorsOfClassFromLevel ( class UClass* TheClass, class ULevel* Level );
	void RemoveActorsOfClassFromLevel ( class UClass* TheClass, class ULevel* Level );
	void RemoveAndDeleteActorsFromLevel ( class ULevel* Level );
	void RemoveActorsFromLevel ( class ULevel* Level );
	class AActor* FindNextActorByLevel ( class ULevel* Level, int* Index );
	class AActor* FindFirstActorByLevel ( class ULevel* Level, int* Index );
	class AActor* FindNextActorByClass ( class UClass* TheClass, int* Index );
	class AActor* FindFirstActorByClass ( class UClass* TheClass, int* Index );
	void RemoveActor ( class AActor* Actor );
	void AddActor ( class AActor* Actor, class ULevel* Level );
};

// Class GearboxFramework.GBXObjectList
// 0x000C (0x0048 - 0x003C)
class UGBXObjectList : public UObject
{
public:
	TArray< class UObject* >                           ObjectList;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2946 ];

		return pClassPointer;
	};

	void RemoveObjectsOfClass ( class UClass* TheClass );
	class UObject* FindNextObjectByClass ( class UClass* TheClass, int* Index );
	class UObject* FindFirstObjectByClass ( class UClass* TheClass, int* Index );
	void RemoveObject ( class UObject* TheObject );
	void AddObject ( class UObject* TheObject );
};

// Class GearboxFramework.GearboxAIController
// 0x0000 (0x0684 - 0x0684)
class AGearboxAIController : public AAIController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2948 ];

		return pClassPointer;
	};

	void ForceMoveToActor ( class AActor* destActor );
};

// Class GearboxFramework.GearboxAIMoveNode
// 0x003C (0x01C4 - 0x0188)
class AGearboxAIMoveNode : public AActor
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x0188 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceNodeDirection : 1;                           		// 0x0188 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	TArray< struct FNodeData >                         NextNodes;                                        		// 0x018C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AGearboxAIMoveNode* >                PreviousNodes;                                    		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HoldTime;                                         		// 0x01A4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x01A8 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class USpecialMoveDefinition* >            SpecialMoves;                                     		// 0x01B4 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USpriteComponent*                            Sprite;                                           		// 0x01C0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2950 ];

		return pClassPointer;
	};

	bool DoesPatrolPathExistToPoint ( class AGearboxAIMoveNode* PatrolPoint );
	void GetAllLinkedNodes ( TArray< class AGearboxAIMoveNode* >* OutNodes );
	class AGearboxAIMoveNode* GetNextMoveNodeClosestToPoint ( struct FVector TestPoint );
	class AGearboxAIMoveNode* GetNextMoveNode ( );
	int RemoveNode ( class AGearboxAIMoveNode* OldNode );
	void AddNode ( class AGearboxAIMoveNode* NewNode );
	void ClearLinks ( );
	void OnToggle ( class USeqAct_Toggle* Action );
};

// Class GearboxFramework.GearboxCameraBasic
// 0x0004 (0x0400 - 0x03FC)
class AGearboxCameraBasic : public ACamera
{
public:
	struct FPointer                                    VfTable_IInterfaceGearboxCamera;                  		// 0x03FC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2952 ];

		return pClassPointer;
	};

	void eventFinishCameraLookAt ( );
	void eventEnableThirdPersonLookAt ( float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode );
	void BeginCameraLookAt ( class AActor* LookAtTarget, struct FName LookAtBone, struct FVector TargetLocation, float Zoom, struct FVector2D FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut );
	void CalcSimpleThirdPersonView ( float DeltaTime, struct FTViewTarget* OutVT );
	void CalcBaseView ( float DeltaTime, struct FTViewTarget* OutVT );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
};

// Class GearboxFramework.GearboxCameraModifier
// 0x0031 (0x0089 - 0x0058)
class UGearboxCameraModifier : public UCameraModifier
{
public:
	class AGearboxCameraBasic*                         GBXCameraOwner;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FTPOV                                       DesiredPOV;                                       		// 0x005C (0x001C) [0x0000000000000000]              
	float                                              MasterFadeValue;                                  		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              FadeElapsedTime;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              FadeTimeSpan;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      FadeStarted : 1;                                  		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      FadingUpwards : 1;                                		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DisableWhenFadedOut : 1;                          		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      AdjustForTimeDilation : 1;                        		// 0x0084 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned char                                      FadeMode;                                         		// 0x0088 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2954 ];

		return pClassPointer;
	};

	float LerpFOV ( float Src, float Dest, float T );
	struct FRotator LerpRotation ( struct FRotator Src, struct FRotator Dest, float T );
	struct FVector LerpLocation ( struct FVector Src, struct FVector Dest, float T );
	void UpdateAllLerps ( float DeltaTime, struct FTPOV* OutPOV );
	void UpdateMasterFadePercentage ( float AdjustedDeltaTime );
	bool IsFadingDownwards ( );
	bool IsFadingUpwards ( );
	bool IsFadeInProgress ( );
	void StartFadeOut ( float NewTimeSpan, unsigned long NewDisableWhenFadedOut, unsigned char NewFadeMode );
	void StartFadeIn ( float NewTimeSpan, unsigned char NewFadeMode );
	void SetDesiredCamera ( struct FVector DesiredLoc, struct FRotator DesiredRot, float DesiredFOV );
	void SetGBXCameraOwner ( class AGearboxCameraBasic* InCamera );
	bool AddCameraModifier ( class ACamera* Camera );
};

// Class GearboxFramework.GearboxCheatManager
// 0x0000 (0x005C - 0x005C)
class UGearboxCheatManager : public UCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2956 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogInterface
// 0x0000 (0x003C - 0x003C)
class UGearboxDialogInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2958 ];

		return pClassPointer;
	};

	void eventServerDialog_TriggerEvent ( class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter );
	void SetDialogNameTag ( class UGearboxDialogNameTag* NewName );
	struct FGearboxDialogReplicatedData GetReplicatedDialogData ( );
	void SetReplicatedDialogData ( class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data );
	void GetDialogGroups ( TArray< class UGearboxDialogGroup* >* Groups );
	class UGearboxDialogComponent* GetDialogComponent ( );
	class UGearboxDialogNameTag* GetDialogNameTag ( );
	class AActor* GetActor ( );
	bool CanTalk ( );
};

// Class GearboxFramework.GearboxEditorNode
// 0x0030 (0x006C - 0x003C)
class UGearboxEditorNode : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000000000]              
	TArray< struct FOutputLink >                       OutputLinks;                                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGearboxEditorNode* >                InputLinks;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVariableLink >                     VariableLinks;                                    		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAllowInputs : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowOutputs : 1;                                		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowVariables : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAllowMovement : 1;                               		// 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowMultipleInputs : 1;                         		// 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllowMultipleOutputs : 1;                        		// 0x0064 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAllowMultipleVariables : 1;                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              SliderPosition;                                   		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2960 ];

		return pClassPointer;
	};

	bool IsChild ( class UGearboxEditorNode* TestNode );
};

// Class GearboxFramework.GearboxEngine
// 0x0020 (0x07CC - 0x07AC)
class UGearboxEngine : public UGameEngine
{
public:
	int                                                CurrentUserID;                                    		// 0x07AC (0x0004) [0x0000000000000000]              
	int                                                CurrentDeviceID;                                  		// 0x07B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasSelectedValidStorageDevice : 1;               		// 0x07B4 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	struct FString                                     DefaultSparkInterfaceName;                        		// 0x07B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class USparkInterface*                             SparkInterface;                                   		// 0x07C4 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x07C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2962 ];

		return pClassPointer;
	};

	class USparkInterface* GetSparkInterface ( );
	bool eventIsCurrentDeviceValid ( int SizeNeeded );
	bool HasStorageDeviceBeenRemoved ( );
	int GetCurrentDeviceID ( );
	void SetCurrentDeviceID ( int NewDeviceID, unsigned long bProfileSignedOut );
};

// Class GearboxFramework.GearboxGameInfo
// 0x0000 (0x0330 - 0x0330)
class AGearboxGameInfo : public AGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2964 ];

		return pClassPointer;
	};

	void eventPostLogin ( class APlayerController* NewPlayer );
};

// Class GearboxFramework.GearboxGFxMovie
// 0x008C (0x0254 - 0x01C8)
class UGearboxGFxMovie : public UGFxMovie
{
public:
	TArray< struct FAkEventResolver >                  InteractionOverrideSounds;                        		// 0x01C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TickRateSeconds;                                  		// 0x01D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTickScript : 1;                                  		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTickFirstFrame : 1;                              		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bRenderingDisabled : 1;                           		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bSupportsStatePooling : 1;                        		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsUsingFlashMouse : 1;                           		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bBlockingMovie : 1;                               		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCloseOnDeath : 1;                                		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000040] 
	TArray< class UGFxMovieDrawStyle* >                AllStyles;                                        		// 0x01DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGFxMovieDefinition*                         MyDefinition;                                     		// 0x01E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxActorMoviePool*                          MyPool;                                           		// 0x01EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AGearboxPlayerController* >          PlayerOwners;                                     		// 0x01F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UObject*                                     ContextObject;                                    		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastTickTime;                                     		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGearboxGFxMovie*                            PoolParent;                                       		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMovieStateStruct                           CurrentMovieState;                                		// 0x0208 (0x0018) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UGFxMovieState* >                    BaseMovieStates;                                  		// 0x0220 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UGFxMovieState* >                    AllMovieStates;                                   		// 0x022C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                bMouseable;                                       		// 0x0238 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnInputAxis__Delegate;                          		// 0x023C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClosed__Delegate;                             		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2966 ];

		return pClassPointer;
	};

	void extSetLanguageExt ( struct FString ClipPath );
	void OnClosedOnDeath ( );
	bool IsShowingFlashMouse ( );
	int extIsMouseablePlatform ( );
	void eventSetMouseableFlag ( );
	struct FString GetStyleDebugString ( );
	struct FString GetStateDebugString ( unsigned long bIncludeFlags );
	void InitializeFrom ( class UGearboxGFxMovie* SrcMovie );
	bool RemoveStylesDrawnTo ( class UPrimitiveComponent* PrimComp, class UIGFxActorMovie* Target );
	bool RemoveStyles ( class UIGFxActorMovie* Target );
	void RemoveStyle ( class UGFxMovieDrawStyle* Style );
	void AddStyle ( class UGFxMovieDrawStyle* Style );
	void ShutdownMoviePlayback ( );
	void InitMoviePlayback ( );
	class UTextureRenderTarget2D* GetRenderTexture ( );
	void eventMovieState_OnChanged ( unsigned long bStateWasChanged );
	bool eventMovieState_SetFromMovie ( class UGearboxGFxMovie* Movie );
	bool MovieState_Copy ( struct FMovieStateStruct* StateDst, struct FMovieStateStruct* StateSrc );
	bool MovieState_Compare ( struct FMovieStateStruct* S1, struct FMovieStateStruct* S2 );
	void MovieState_Toggle ( struct FName TheState );
	bool MovieState_Enable ( struct FName TheState, unsigned long bEnable );
	bool MovieState_IsEnabled ( struct FName TheState );
	bool MovieState_SupportsState ( struct FName TheState );
	void MovieState_Init ( );
	void InitFromDefinition ( );
	void MovieState_Apply ( class UGearboxGFxMovie* Movie, class UClass* HandlerClass );
	void MovieState_ApplyState ( struct FName TheState, class UGearboxGFxMovie* Movie );
	void ApplyState ( struct FString StateName, struct FString StateAction );
	void SetRenderingEnabled ( unsigned long bEnabled );
	void GotoAndStop ( struct FString FrameLabel );
	void GotoAndPlay ( struct FString FrameLabel );
	void PlaySpecialUISound ( struct FString SoundString );
	void eventPlayUISound ( struct FName UIEvent );
	void eventSetOtherObject ( class UObject* Obj );
	class UObject* GetInstanceContextObject ( );
	void eventOnTick ( );
	void eventOnClose ( );
	bool eventStart ( unsigned long StartPaused );
	struct FString ColorizeTooltipText ( struct FString S, unsigned long bDisabled );
	struct FString GFxColoredText ( unsigned long bAppendNewline, struct FColor* C, struct FString* S );
	void SingleArgInvokeB ( struct FString Command, unsigned long Arg );
	void SingleArgInvokeS ( struct FString Command, struct FString Arg );
	void SingleArgInvokeF ( struct FString Command, float Arg );
	class ULocalPlayer* GetLocalPlayer ( );
	void OnClosed ( class UGearboxGFxMovie* Movie );
	bool WantsControllerInput ( int ControllerId );
	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
	bool OnInputAxis ( int ControllerId, struct FName ukey, float Delta, float DeltaTime );
};

// Class GearboxFramework.GFxMovie_StateParent
// 0x0004 (0x0258 - 0x0254)
class UGFxMovie_StateParent : public UGearboxGFxMovie
{
public:
	class UClass*                                      StateClass;                                       		// 0x0254 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2968 ];

		return pClassPointer;
	};

	void MovieState_OnChanged ( unsigned long bStateWasChanged );
	bool eventStart ( unsigned long StartPaused );
};

// Class GearboxFramework.GearboxGlobals
// 0x0070 (0x00F4 - 0x0084)
class UGearboxGlobals : public UGearboxEngineGlobals
{
public:
	class UGearboxGlobalsDefinition*                   TheGlobalsDefinition;                             		// 0x0084 (0x0004) [0x0000000000000000]              
	class UClass*                                      ExposureUtilityClass;                             		// 0x0088 (0x0004) [0x0000000000000000]              
	class UClass*                                      ExposureUtilityStrategyClass;                     		// 0x008C (0x0004) [0x0000000000000000]              
	class UExposureUtilityBase*                        TheExposureUtility;                               		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGearboxAIFactory*                           TheAIFactory;                                     		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URuleEngineLoadBalanceManager*               TheRuleEngineLoadBalanceManager;                  		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGBXActorList*                               TheGBXActorList;                                  		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGBXObjectList*                              TheGBXObjectList;                                 		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FValidNameRange >                   ValidNameList;                                    		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class AWireManager*                                TheWireMgr;                                       		// 0x00B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGbxMessageManager*                          TheMessageManager;                                		// 0x00B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGBXActorList*                               TheDynamicTextureActorList;                       		// 0x00B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPopulationMaster*                           ThePopulationMaster;                              		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UBehaviorKernel*                             TheBehaviorKernel;                                		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UScreenSpaceManager*                         TheScreenSpaceManager;                            		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxMovieManager*                            TheGFxManager;                                    		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGearboxRenderTextureManager*                TheRenderTextureManager;                          		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     GlobalInstanceClassName;                          		// 0x00D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                DefaultMaxPopulationActorCost;                    		// 0x00DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FLevelStateRecord >                 StateRecords;                                     		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAkComponent*                                UIAudioComponent;                                 		// 0x00EC (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UGearboxDialogManager*                       TheDialogManager;                                 		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2970 ];

		return pClassPointer;
	};

	class UBehaviorKernel* GetBehaviorKernel ( );
	class UGearboxDialogManager* GetDialogManager ( );
	float GetPopulationRespawnDelay ( );
	class UIDialogBox* eventShowDialog ( class APlayerController* PC );
	void NotifyActorDied ( class AActor* TheActor, unsigned long bKeepBody );
	bool DoesLOSIntersectSpecialOccluder ( struct FVector FromLoc, struct FVector ToLoc, class UPawnAllegiance* AllegianceAffected );
	bool HasPhysXCapableGPU ( );
	unsigned char GetPlatform ( );
	bool ValidatePlayerName ( unsigned long bReplaceCharacters, struct FString* InName );
	bool RegisterStateKey ( struct FName LevelName, struct FName ObjectName, struct FName AdditionalKey );
	bool DoesStateKeyExist ( struct FName LevelName, struct FName ObjectName, struct FName AdditionalKey );
	bool FreeTexture2D ( class UTexture2D* Texture );
	class UTexture2D* GetTexture2D ( );
	class UGearboxRenderTextureManager* GetRenderTextureManager ( );
	class UGFxMovieManager* GetGFxManager ( );
	class UScreenSpaceManager* GetScreenSpaceManager ( );
	class UGbxMessageManager* GetMessageManager ( );
	void RegDynamicTextureStreaming ( class AActor* A, unsigned long bRegister );
	class UGBXActorList* GetDynamicTextureActorList ( );
	class UPopulationMaster* GetPopulationMaster ( );
	class AWireManager* GetWireManager ( );
	class UGBXObjectList* GetGBXObjectList ( );
	class UGBXActorList* GetGBXActorList ( );
	class URuleEngineLoadBalanceManager* GetRuleEngineLoadBalanceManager ( );
	class UGearboxAIFactory* GetGearboxAIFactory ( );
	class UExposureUtilityBase* GetExposureUtility ( );
	class UGearboxGlobals* GetGearboxGlobals ( );
};

// Class GearboxFramework.GearboxGlobalsDefinition
// 0x0008 (0x0044 - 0x003C)
class UGearboxGlobalsDefinition : public UGBXDefinition
{
public:
	float                                              RespawnDelayInSeconds;                            		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGearboxDialogGlobalsDefinition*             Dialog;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2972 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxLocationRequest
// 0x004C (0x0088 - 0x003C)
class UGearboxLocationRequest : public UObject
{
public:
	class USearchOrigin*                               SearchOrigin;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USearchDirection*                            DirectionFromOrigin;                              		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULocationFilter*                             LocationFilterTest;                               		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DirectionCone;                                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MinDistanceFromOrigin;                            		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MaxDistanceFromOrigin;                            		// 0x005C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SearchRandomness;                                 		// 0x006C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SearchOriginResult;                               		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FVector                                     SearchDirectionResult;                            		// 0x007C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2974 ];

		return pClassPointer;
	};

	struct FVector GetLastDirection ( );
	struct FVector GetLastOrigin ( );
	bool GetDirection ( class AActor* ContextActor, struct FVector* OutDirection );
	bool GetOrigin ( class AActor* ContextActor, struct FVector* OutOrigin );
	bool Get ( class AActor* ContextActor, struct FVector* OutLocation );
};

// Class GearboxFramework.PawnMoveLocationRequest
// 0x002C (0x00B4 - 0x0088)
class UPawnMoveLocationRequest : public UGearboxLocationRequest
{
public:
	unsigned long                                      GoToCover : 1;                                    		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CoverSearchFilter;                                		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RepathOption;                                     		// 0x008D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverFailureResponse;                             		// 0x008E (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestinationTestNonCover;                          		// 0x008F (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                RepathDistanceThresh;                             		// 0x0090 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class URuleEventDef*                               FailureEvent;                                     		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                OverrideDistanceForCover;                         		// 0x00A4 (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2976 ];

		return pClassPointer;
	};

	bool Get ( class AActor* ContextActor, struct FVector* OutLocation );
};

// Class GearboxFramework.GearboxPawn
// 0x006C (0x06FC - 0x0690)
class AGearboxPawn : public AGamePawn
{
public:
	struct FPointer                                    VfTable_ISpecialMoveInterface;                    		// 0x0690 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IGearboxDialogInterface;                  		// 0x0694 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FName                                       NPCSightBone;                                     		// 0x0698 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWantsToMove : 1;                                 		// 0x06A0 (0x0004) [0x0000000000000000] [0x00000001] 
	class USpecialMoveComponent*                       SMComponent;                                      		// 0x06A4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FReplicatedSpecialMoveData                  ReplicatedSMData;                                 		// 0x06A8 (0x0014) [0x0000000000000020]              ( CPF_Net )
	struct FFlag                                       HasBeenShotAtRecently;                            		// 0x06BC (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FGearboxCoverState                          CoverState;                                       		// 0x06CC (0x000C) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class UGearboxCoverStateManager*                   CoverManager;                                     		// 0x06D8 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UGearboxDialogComponent*                     DialogComponent;                                  		// 0x06DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FGearboxDialogReplicatedData                DialogReplicatedData;                             		// 0x06E0 (0x0014) [0x0000000000000020]              ( CPF_Net )
	struct FAkPlayingInfo                              DyingScream;                                      		// 0x06F4 (0x0008) [0x0000000000082000]              ( CPF_Transient | CPF_Component )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2978 ];

		return pClassPointer;
	};

	struct FVector GetAimDirection ( );
	void SetDialogNameTag ( class UGearboxDialogNameTag* NewName );
	void eventServerDialog_TriggerEvent ( class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter );
	struct FGearboxDialogReplicatedData GetReplicatedDialogData ( );
	void SetReplicatedDialogData ( class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data );
	void GetDialogGroups ( TArray< class UGearboxDialogGroup* >* Groups );
	class UGearboxDialogComponent* GetDialogComponent ( );
	class UGearboxDialogNameTag* GetDialogNameTag ( );
	bool CanTalk ( );
	void OnCoverStateChanged ( );
	void ServerSetCoverState ( struct FGearboxCoverState NewCoverState );
	void eventSetCoverState ( struct FGearboxCoverState NewCoverState );
	float GetMountAnimDistanceForSpeed ( unsigned char TheSpeed, unsigned char CoverHeight, unsigned char CoverDir );
	struct FVector eventGetSpotOthersShouldLookAt ( );
	void SetReplicatedSMData ( struct FSpecialMoveData* NewSMData );
	void eventServerSpecialMove_StopAny ( );
	void eventServerSpecialMove_Stop ( class USpecialMoveDefinition* OldSMD );
	void eventServerSpecialMove_Queue ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	void eventServerSpecialMove_Play ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	unsigned char GetDefaultRootMotionRotationMode ( );
	unsigned char GetDefaultRootMotionMode ( );
	class USkeletalMeshComponent* GetSkelMesh ( );
	class USpecialMoveComponent* GetSMComponent ( );
	class AActor* GetActor ( );
	class UGearboxNavigationHandle* GetNavigationHandle ( );
	void PlayHit ( class APawn* SomePawn, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, class UDamagePipeline* Pipeline );
	void eventReplicatedEvent ( struct FName VarName );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, class UDamagePipeline* Pipeline );
	void SetMovementPhysics ( );
	void eventPostBeginPlay ( );
	void NotifyShotAtBy ( class AGearboxPawn* ShootingPawn );
	bool HaveIBeenShotAtRecently ( );
};

// Class GearboxFramework.GearboxPlayerController
// 0x00F4 (0x09F0 - 0x08FC)
class AGearboxPlayerController : public AGamePlayerController
{
public:
	struct FGearboxViewShakeInfo                       CurrentViewShake;                                 		// 0x08FC (0x0044) [0x0000000000000000]              
	struct FGearboxViewShakeInfo                       BaseDamageShake;                                  		// 0x0940 (0x0044) [0x0000000000000000]              
	struct FVector                                     ShakeOffset;                                      		// 0x0984 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ShakeRot;                                         		// 0x0990 (0x000C) [0x0000000000000000]              
	float                                              ShakeFOV;                                         		// 0x099C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWantsToShowStorageMenu : 1;                      		// 0x09A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bShouldCheckForProfileDeviceRemoval : 1;          		// 0x09A0 (0x0004) [0x0000000000006000] [0x00000002] ( CPF_Transient | CPF_Config )
	class UAIDebugCamera*                              AIDebugCam;                                       		// 0x09A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AGearboxPawn*                                PreviousDebugPawn;                                		// 0x09A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      AIDebugCamClass;                                  		// 0x09AC (0x0004) [0x0000000000000000]              
	float                                              DamageShakeMagnitudeMultiplier;                   		// 0x09B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DamageShakeMagnitudeMultiplierBaseValue;          		// 0x09B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UAttributeModifier* >                DamageShakeMagnitudeMultiplierModifierStack;      		// 0x09B8 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	float                                              DamageShakeTimeMultiplier;                        		// 0x09C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DamageShakeTimeMultiplierBaseValue;               		// 0x09C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UAttributeModifier* >                DamageShakeTimeMultiplierModifierStack;           		// 0x09CC (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class ULeviathanChannel*                           LeviathanReplicationChannel;                      		// 0x09D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FGuid                                       PlaySessionGuid;                                  		// 0x09DC (0x0010) [0x0000000000002000]              ( CPF_Transient )
	int                                                SessionBundleNumber;                              		// 0x09EC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2980 ];

		return pClassPointer;
	};

	int RequestTitleStorageFile ( struct FString Filename, struct FScriptDelegate TitleStorageRequestCompleteDelegate, unsigned char AcceptsType, struct FString CustomAcceptsType );
	void ShowSparkID ( );
	bool ShouldCheckRemoteControlCheckbox ( unsigned char CheckBoxName, class AHUD* HUD );
	void DisplayDebugSpark ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void AITree ( );
	void AIToggleTargetViewCones ( );
	void AIToggleAwarenessZones ( );
	void AIToggleCombat ( );
	void AIToggleResources ( );
	void AIToggleInactiveRules ( );
	void AIToggleRules ( );
	void AIToggleFlags ( );
	void AIDebugNextSnapshot ( );
	void AIDebugPrevSnapshot ( );
	void ainext ( );
	void aiprev ( );
	void AINextRule ( unsigned long bSkipContainers );
	void AIPrevRule ( unsigned long bSkipContainers );
	void AIDebugSetPawn ( class AGearboxPawn* NewPawn );
	void AIDebugSetPawnByName ( struct FName NewPawnName );
	void debugpawn ( );
	void aisetp ( struct FName NewPawnName );
	void NotifyGameUnPaused ( );
	void NotifyGamePaused ( );
	void SetSettingsFromProfile ( );
	int GetStorageDeviceID ( );
	void SetStorageDeviceID ( int DeviceID );
	void NotifyDeviceSelectComplete ( unsigned long bWasSuccessful );
	void eventDisplayStorageRemovedMenu ( );
	void DisplayProfileRemovedMenu ( );
	void NotifyProfileWriteFromStorageChangeComplete ( unsigned char LocalUser, unsigned long bWasSuccessful );
	bool IsCurrentStorageDeviceValid ( );
	void NotifyStorageDeviceChange ( );
	void eventDestroyOnlineGame ( );
	void ReturnToTitleScreen ( unsigned long bSkipSave, unsigned long bRemoveSplitPlayer );
	struct FString GetConnectionFailureNoticeMsg ( );
	struct FString GetMainMenuMapName ( );
	void NotifyLinkStatusChange ( unsigned long bIsConnected );
	void NotifyLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void NotifyLoginChange ( unsigned char LocalUserNum );
	void ClearOnlineDelegates ( );
	void RegisterOnlineDelegates ( );
	void OnProfileWriteComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void ResetProfile ( );
	void HidePS3WritingProfileDialog ( );
	void ShowPS3WritingProfileDialog ( );
	bool eventWriteProfile ( unsigned long bShouldShowProfileDialog );
	class UGearboxProfileSettings* eventGetProfileSettings ( );
	unsigned char GetMyControllerId ( );
	void ReadProfile ( );
	void RegisterCustomPlayerDataStores ( );
	void SetDataStoreStringValue ( struct FString MarkupString, struct FString NewValue );
	struct FString GetDataStoreStringValue ( struct FString MarkupString );
	void eventClientKeepPlayingLoadingMovie ( );
	void ClientResetCamera ( );
	void eventSpawnPlayerCamera ( );
	void eventInitInputSystem ( );
	void NoTargetAll ( );
	void NoTarget ( );
	bool GetNoTargetPlayers ( );
	void SetNoTargetPlayers ( unsigned long bNoTarget );
	void Possess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void DontTarget ( unsigned long bModeFlag );
	void ClientConsoleCommand ( struct FString Command );
	bool IsPlayerAllowingActiveMoment ( );
	bool IsActiveMomentRunning ( );
	void ViewShake ( float DeltaTime );
	void UpdateShakeRotComponent ( float Time, float DeltaTime, float* Max, int* Current, float* Rate );
	void CheckShake ( float Time, float* MaxOffset, float* Offset, float* Rate );
	void StopViewShaking ( );
	void OnCameraShake ( class UGearboxSeqAct_CameraShake* ShakeAction );
	void ShakeView ( struct FGearboxViewShakeInfo NewViewShake );
	void ClientDamageShake ( int Damage );
	void ConsoleEcho ( struct FString Text, unsigned long bLogOutput );
	void Initialize ( );
	void PostBeginPlay ( );
	void TryAndSpawnLeviathanChannel ( class UNetConnection* Connection );
	void GenerateNewSessionGuid ( );
};

// Class GearboxFramework.GearboxPlayerInput
// 0x0000 (0x017C - 0x017C)
class UGearboxPlayerInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2982 ];

		return pClassPointer;
	};

	void eventPlayerInput ( float DeltaTime );
};

// Class GearboxFramework.GearboxPlayerReplicationInfo
// 0x0008 (0x025C - 0x0254)
class AGearboxPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned char                                      Difficulty;                                       		// 0x0254 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                Dummy;                                            		// 0x0258 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2984 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxProfileSettings
// 0x0000 (0x0098 - 0x0098)
class UGearboxProfileSettings : public UOnlineProfileSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2986 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxRenderTextureManager
// 0x003C (0x0078 - 0x003C)
class UGearboxRenderTextureManager : public UObject
{
public:
	TArray< class UTexture2D* >                        FreeList2D;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTextureRenderTarget2D* >            FreeList;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HoldDuration;                                     		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TimeToNextTick;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FThumbnailRenderData >              Thumbnails;                                       		// 0x005C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< struct FThumbnailLightData >               DefaultLights;                                    		// 0x0068 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	float                                              ThumbnailTextureArea;                             		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2988 ];

		return pClassPointer;
	};

	void SetThumbnailMesh ( class UTexture* Texture, class UMeshComponent* Mesh );
	void FreeContext ( struct FName Context );
	void FreeThumbnail ( class UTexture* Texture );
	class UTexture* GetThumbnail ( struct FName Context, int TextureSizeX, int TextureSizeY, unsigned char UpdateType, int SizeX, int SizeY );
	bool FreeTexture2D ( class UTexture2D* Texture );
	class UTexture2D* GetTexture2D ( );
	bool FreeRenderTexture ( class UTextureRenderTarget2D* Texture );
	class UTextureRenderTarget2D* GetRenderTexture ( int InSizeX, int InSizeY, unsigned long bNeedsTwoCopies );
};

// Class GearboxFramework.GearboxSeqAct_DestroyPopulationActors
// 0x001C (0x00D0 - 0x00B4)
class UGearboxSeqAct_DestroyPopulationActors : public USeqAct_Latent
{
public:
	unsigned long                                      SaveDestroyedActors : 1;                          		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DisablePopulationSpawners : 1;                    		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bActorsDestroyed : 1;                             		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< class APopulationOpportunity* >            Opportunities;                                    		// 0x00B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class APopulationEncounter* >              Encounters;                                       		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2990 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_ResetPopulationCount
// 0x0000 (0x00A4 - 0x00A4)
class UGearboxSeqAct_ResetPopulationCount : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2992 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSkeletalMeshComponent
// 0x0004 (0x06B0 - 0x06AC)
class UGearboxSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                              		// 0x06AC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2994 ];

		return pClassPointer;
	};

	void SetFOV ( float NewFOV );
};

// Class GearboxFramework.GearboxStaticMeshComponent
// 0x0004 (0x024C - 0x0248)
class UGearboxStaticMeshComponent : public UStaticMeshComponent
{
public:
	float                                              FOV;                                              		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2996 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GestaltSkeletalMeshDefinition
// 0x0038 (0x0074 - 0x003C)
class UGestaltSkeletalMeshDefinition : public UGBXDefinition
{
public:
	class USkeletalMesh*                               GestaltSkeletalMesh;                              		// 0x003C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      bStaticMeshRigidBodyMesh : 1;                     		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FGestaltInfo >                      GestaltInfos;                                     		// 0x0044 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FGestaltAccessoryNameEntry >        GestaltAccessoryNames;                            		// 0x0050 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FGestaltSocketRemapEntry >          GestaltSocketMappings;                            		// 0x005C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FGestaltPartBoundsEntry >           GestaltPartBounds;                                		// 0x0068 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2998 ];

		return pClassPointer;
	};

	void InitGestaltAccessoryMeshDataFromParts ( class USkeletalMesh* MeshToBorrowBonesFrom, class UGestaltPartMatrices* AccessoryMatrices, class USkeletalMeshComponent* TargetComponent, TArray< struct FGestaltPartPermutation >* PermutationConfiguration );
	void InitGestaltMeshDataFromParts ( class USkeletalMeshComponent* TargetComponent, TArray< struct FName >* PartMeshNames );
};

// Class GearboxFramework.GFxActorMoviePool
// 0x001C (0x0058 - 0x003C)
class UGFxActorMoviePool : public UObject
{
public:
	class UGFxMovieDefinition*                         MovieDefinition;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FMovieInstanceArray >               Pools;                                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxActorMovie* >                   MovieTargets;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3000 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float X, float* out_YL, float* out_YPos );
	struct FString GetPoolName ( int Index );
	struct FString PoolStyleString ( unsigned char Pooling );
	void MovieStateChanged ( class UGearboxGFxMovie* Movie );
};

// Class GearboxFramework.GFxMovieDefinition
// 0x0080 (0x00BC - 0x003C)
class UGFxMovieDefinition : public UGBXDefinition
{
public:
	class USwfMovie*                                   SwfMovie;                                         		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SwfMovieClass;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0044 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	class UClass*                                      ExternalInterfaceClass;                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsModalGameMenu : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bOverrideWorldLighting : 1;                       		// 0x004C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInputOwnerOnly : 1;                              		// 0x004C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bInputAllKeys : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              FadeInSeconds;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutSeconds;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    WorldLightingDirectionOffset;                     		// 0x0058 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UGFxMovieDrawStyle*                          DrawStyle;                                        		// 0x0064 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                DepthPriority;                                    		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PoolType;                                         		// 0x006C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleMode;                                        		// 0x006D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AlignMode;                                        		// 0x006E (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TimingMode;                                       		// 0x006F (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Pool;                                             		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UGFxMovieState* >                    CustomStates;                                     		// 0x007C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FName >                             AutoActivateStates;                               		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FGFxMenuLink >                      MenuLinks;                                        		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAkEventResolver >                  InteractionOverrideSounds;                        		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UGFxMovieState* >                    BaseMovieStates;                                  		// 0x00B0 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3002 ];

		return pClassPointer;
	};

	class UGFxMovieDefinition* FindMovieLink ( struct FName MovieName );
	void PostMovieStart ( class UGearboxGFxMovie* StartedMovie );
	class UGearboxGFxMovie* SpawnPlayerMovie ( class AGearboxPlayerController* Owner, class UIGFxActorMovie* TargetActor, class UObject* ContextObject );
	bool SupportsStatePooling ( );
	unsigned char GetPoolStyle ( );
};

// Class GearboxFramework.GFxMovieDrawStyle
// 0x000C (0x0048 - 0x003C)
class UGFxMovieDrawStyle : public UObject
{
public:
	class UGearboxGFxMovie*                            Movie;                                            		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0040 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3004 ];

		return pClassPointer;
	};

	struct FString GetStyleDebugString ( );
};

// Class GearboxFramework.GFxMovieDrawStyleHUD
// 0x0040 (0x0088 - 0x0048)
class UGFxMovieDrawStyleHUD : public UGFxMovieDrawStyle
{
public:
	TArray< struct FHUDAnchorPoint >                   AnchorPoints;                                     		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FHUDCoordValue                              MovieDimensions[ 0x2 ];                           		// 0x0054 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCacheValid : 1;                                  		// 0x0074 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              MovieScreenPos[ 0x4 ];                            		// 0x0078 (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3006 ];

		return pClassPointer;
	};

	bool eventRequiresClientInstance ( );
};

// Class GearboxFramework.GFxMovieDrawStyleRTT
// 0x0005 (0x004D - 0x0048)
class UGFxMovieDrawStyleRTT : public UGFxMovieDrawStyle
{
public:
	int                                                TextureSize;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3008 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleComponent
// 0x0003 (0x0050 - 0x004D)
class UGFxMovieDrawStyleComponent : public UGFxMovieDrawStyleRTT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3010 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleMesh
// 0x0030 (0x0080 - 0x0050)
class UGFxMovieDrawStyleMesh : public UGFxMovieDrawStyleComponent
{
public:
	class UMeshComponent*                              MeshComponentArchetype;                           		// 0x0050 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 UseStaticMesh;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               UseSkeletalMesh;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UseMeshInstanceName;                              		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterial*                                   OverrideMaterial;                                 		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TextureParameterName;                             		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMeshComponent*                              Component;                                        		// 0x0074 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   Mati;                                             		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInterface*                          OriginalMaterial;                                 		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3012 ];

		return pClassPointer;
	};

	struct FString GetStyleDebugString ( );
	bool eventRequiresClientInstance ( );
};

// Class GearboxFramework.GFxMovieDrawStyleSprite
// 0x0008 (0x0058 - 0x0050)
class UGFxMovieDrawStyleSprite : public UGFxMovieDrawStyleComponent
{
public:
	int                                                SpriteSize;                                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteRTTComponent*                         TheSprite;                                        		// 0x0054 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3014 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleSplitscreen
// 0x0000 (0x0048 - 0x0048)
class UGFxMovieDrawStyleSplitscreen : public UGFxMovieDrawStyle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3016 ];

		return pClassPointer;
	};

	bool eventRequiresClientInstance ( );
};

// Class GearboxFramework.GFxMovieManager
// 0x0018 (0x0054 - 0x003C)
class UGFxMovieManager : public UObject
{
public:
	TArray< class AGearboxPlayerController* >          Subscribers;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxActorMoviePool* >                MoviePools;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3018 ];

		return pClassPointer;
	};

	void ChangeMovieState ( class UIGFxActorMovie* TargetActor, struct FName State, unsigned char Change, class AGearboxPlayerController* PC );
	void Unsubscribe ( class AGearboxPlayerController* PC );
	void Subscribe ( class AGearboxPlayerController* PC );
	void UnregisterMoviesDrawnTo ( class UPrimitiveComponent* PrimComp, class UIGFxActorMovie* TargetActor );
	void UnregisterTarget ( class UIGFxActorMovie* TargetActor );
	void UnregisterMovie ( class UGFxMovieDefinition* Definition, class UIGFxActorMovie* TargetActor );
	void RegisterMovie ( class UGFxMovieDefinition* Definition, class UIGFxActorMovie* TargetActor );
};

// Class GearboxFramework.GFxMovieState
// 0x0020 (0x005C - 0x003C)
class UGFxMovieState : public UObject
{
public:
	struct FName                                       StateName;                                        		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DefaultState;                                     		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StateType;                                        		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMovieStateData >                   AllStates;                                        		// 0x0050 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3020 ];

		return pClassPointer;
	};

	struct FString GetDebugString ( class UGearboxGFxMovie* Movie, unsigned long bIncludeFlags );
	void ApplyMovieState ( class UGearboxGFxMovie* Movie, class UClass* HandlerClass );
	int FindMovieState ( struct FName TheState );
	bool TestState ( struct FName TheState, struct FMovieStateStruct* MovieState );
	int ToggleState ( struct FName TheState, struct FMovieStateStruct* MovieState );
	int EnableState ( struct FName TheState, unsigned long bEnable, struct FMovieStateStruct* MovieState );
};

// Class GearboxFramework.GFxMovieStateCustom
// 0x000C (0x0068 - 0x005C)
class UGFxMovieStateCustom : public UGFxMovieState
{
public:
	TArray< struct FMovieStateData >                   CustomStates;                                     		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3022 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieStateFlags
// 0x000C (0x0068 - 0x005C)
class UGFxMovieStateFlags : public UGFxMovieState
{
public:
	TArray< struct FName >                             CustomFlags;                                      		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3024 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieStatePlayerAware
// 0x001C (0x0078 - 0x005C)
class UGFxMovieStatePlayerAware : public UGFxMovieState
{
public:
	float                                              LookAtThreshold;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMovieStateData >                   LookStates;                                       		// 0x0060 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< struct FMovieRangeStateData >              RangeStates;                                      		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3026 ];

		return pClassPointer;
	};

	int EnableState ( struct FName TheState, unsigned long bEnable, struct FMovieStateStruct* MovieState );
};

// Class GearboxFramework.IAIInterface
// 0x0000 (0x003C - 0x003C)
class UIAIInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3028 ];

		return pClassPointer;
	};

	void InitSequence ( class UActionSequence* NewSequence );
	class UPawnAllegiance* GetAllegiance ( );
	class UAIDefinition* GetAIDefinition ( );
	class UAIComponent* GetAIComponent ( );
	class UIAIInterface* GetAIParent ( );
	struct FVector GetAILocation ( );
	class AActor* GetAIActor ( );
	bool CanTickAI ( );
};

// Class GearboxFramework.IConstructObject
// 0x0000 (0x003C - 0x003C)
class UIConstructObject : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3030 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.IGFxActorMovie
// 0x0000 (0x003C - 0x003C)
class UIGFxActorMovie : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3032 ];

		return pClassPointer;
	};

	void GFx_NotifyMovieDestroy ( class UGearboxGFxMovie* Movie );
	void GFx_NotifyMovieCreate ( class UGearboxGFxMovie* Movie );
	class AActor* GFx_GetMovieActor ( );
};

// Class GearboxFramework.INounAttributeProvider
// 0x0000 (0x003C - 0x003C)
class UINounAttributeProvider : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3034 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.InterfaceGearboxCamera
// 0x0000 (0x003C - 0x003C)
class UInterfaceGearboxCamera : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3036 ];

		return pClassPointer;
	};

	void eventFinishCameraLookAt ( );
	void EnableThirdPersonLookAt ( float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode );
	void BeginCameraLookAt ( class AActor* LookAtTarget, struct FName LookAtBone, struct FVector TargetLocation, float Zoom, struct FVector2D FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut );
};

// Class GearboxFramework.IStreamingDataEvent
// 0x0000 (0x003C - 0x003C)
class UIStreamingDataEvent : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3038 ];

		return pClassPointer;
	};

	void eventRunStreamingDataEvent ( struct FName EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, int IntParam, float FloatParam );
};

// Class GearboxFramework.LeviathanChannel
// 0x0010 (0x0078 - 0x0068)
class ULeviathanChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3040 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.NoContextNeededAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UNoContextNeededAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3042 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.NounAttributeValueResolver
// 0x0014 (0x0050 - 0x003C)
class UNounAttributeValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      ReplicationStrategy;                              		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                DefaultValue;                                     		// 0x0040 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3044 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ObjectFunctionAttributeValueResolver
// 0x000C (0x0048 - 0x003C)
class UObjectFunctionAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FString                                     FunctionCall;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3046 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ObjectPropertyContextResolver
// 0x0008 (0x0044 - 0x003C)
class UObjectPropertyContextResolver : public UAttributeContextResolver
{
public:
	struct FName                                       PropertyName;                                     		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3048 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PhysicsStateExpressionEvaluator
// 0x0008 (0x0044 - 0x003C)
class UPhysicsStateExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      PhysicsState;                                     		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bIsInState : 1;                                   		// 0x0040 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3050 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.PopulationAspect
// 0x0000 (0x003C - 0x003C)
class UPopulationAspect : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3052 ];

		return pClassPointer;
	};

	void eventDenStatRemoved ( class APawn* DenPawn );
	void eventDenStatAdded ( class APawn* DenPawn );
	void eventEnabledStatusChanged ( unsigned long bIsEnabled, unsigned long bHasActiveActors );
	void eventAllActorsRemoved ( unsigned long bFinishedSpawning );
	void eventOnActorDeath ( class AActor* DeadActor );
	void eventOnSpawnActor ( class AActor* SpawnedActor );
	void eventInitialize ( );
};

// Class GearboxFramework.PopulationBodyTag
// 0x0000 (0x003C - 0x003C)
class UPopulationBodyTag : public UGBXDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3054 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationEncounter
// 0x0044 (0x01CC - 0x0188)
class APopulationEncounter : public AInfo
{
public:
	class UPopulationDefinition*                       EncounterPopulationDef;                           		// 0x0188 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class APopulationOpportunity* >            MemberOutposts;                                   		// 0x018C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class APopulationOpportunity* >            MemberOpportunities;                              		// 0x0198 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FEncounterLimitData >               SpawnLimits;                                      		// 0x01A4 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      IsEnabled : 1;                                    		// 0x01B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AutoEnableOpportunities : 1;                      		// 0x01B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bWaitingForNextWave : 1;                          		// 0x01B0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIsWaitingForRespawn : 1;                         		// 0x01B0 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	TArray< struct FEncounterWaveData >                Waves;                                            		// 0x01B4 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                CurrentWave;                                      		// 0x01C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeToStartNextWave;                              		// 0x01C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RespawnDelayStartTime;                            		// 0x01C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3056 ];

		return pClassPointer;
	};

	void eventTriggerKismetAllSpawnedEvent ( );
	void eventTriggerKismetDeathEvent ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void UpdateOpportunityEnabledStates ( int nWave, unsigned long bUpdateIfOnlyOneWave );
	void UpdateKismetNotifications ( );
};

// Class GearboxFramework.PopulationEncounterRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationEncounterRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3058 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityCombatRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityCombatRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3060 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationSpawnedActorTagDefinition
// 0x0000 (0x003C - 0x003C)
class UPopulationSpawnedActorTagDefinition : public UGBXDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3062 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopUpDebugBarGraph
// 0x0040 (0x007C - 0x003C)
class UPopUpDebugBarGraph : public UObject
{
public:
	TArray< struct FColumnDataStruct >                 Columns;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TitleText;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      BaseLineColor;                                    		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      TitleTextColor;                                   		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ColumnWidth;                                      		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ColumnPadding;                                    		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ColumnMaxHeight;                                  		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TextScale;                                        		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TextPadding;                                      		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TitleTextScale;                                   		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TitleTextPaddingY;                                		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ColumnValueTextOffsetY;                           		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3064 ];

		return pClassPointer;
	};

	void Display ( float DeltaSeconds, class UCanvas* Canvas );
	float GetValue ( int ColumnNdx );
	void SetValue ( int ColumnNdx, float NewValue );
	int AddNewColumn ( struct FColor ColumnColor, struct FString HeaderText, float Value );
	void AddTitleText ( struct FString NewTitleText );
};

// Class GearboxFramework.RandomAttributeValueResolver
// 0x0040 (0x007C - 0x003C)
class URandomAttributeValueResolver : public UAttributeValueResolver
{
public:
	unsigned long                                      bUseIntegerRandomization : 1;                     		// 0x003C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                LowerBound;                                       		// 0x0040 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                UpperBound;                                       		// 0x0050 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                ValueLifetime;                                    		// 0x0060 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FSavedRandomValue >                 SavedRandomValues;                                		// 0x0070 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3066 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RegionDefinition
// 0x0000 (0x003C - 0x003C)
class URegionDefinition : public UGBXDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3068 ];

		return pClassPointer;
	};

	bool GetDefaultRegionGameStage ( int* MinGameStage, int* MaxGameStage, int* AwesomeLevel, int* GameStageIncreaseOverPlayerLevel );
	bool TestRegionGameStage ( unsigned long bDefaultGameStage, int* GameStage, int* AwesomeLevel );
	bool GetRegionGameStage ( unsigned long bDefaultGameStage, int* GameStage, int* AwesomeLevel );
};

// Class GearboxFramework.RootMotionDefinition
// 0x0008 (0x0044 - 0x003C)
class URootMotionDefinition : public UGBXDefinition
{
public:
	unsigned char                                      RootMotionMode;                                   		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      RootBoneOption[ 0x3 ];                            		// 0x003D (0x0003) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      RootRotationMode;                                 		// 0x0040 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      RootRotationOption[ 0x3 ];                        		// 0x0041 (0x0003) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3070 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RuleEngineLoadBalanceManager
// 0x0034 (0x0070 - 0x003C)
class URuleEngineLoadBalanceManager : public UObject
{
public:
	float                                              NumTimeSpentThisFrame;                            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              LastTimeFullUpdate;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FRuleEngineLoadBalanceStruct >      WaitingEngines;                                   		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDebugLoadBalance >                 DebugEngines;                                     		// 0x0050 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FRELBManagerStats >                 ManagerStats;                                     		// 0x005C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bIsDebugging : 1;                                 		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MSPosition;                                       		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3072 ];

		return pClassPointer;
	};

	void SetAsDebugging ( unsigned long bSetDebugging );
};

// Class GearboxFramework.ScreenSpaceManager
// 0x0058 (0x0094 - 0x003C)
class UScreenSpaceManager : public UObject
{
public:
	class ULocalPlayer*                                pLocalPlayer;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                ViewWidth;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ViewHeight;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0048 (0x0008) MISSED OFFSET
	struct FMatrix                                     ViewProjectionMatrix;                             		// 0x0050 (0x0040) [0x0000000000000000]              
	unsigned long                                      bMatricesUpToDate : 1;                            		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3074 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AllPlayersInVolume
// 0x0010 (0x00B4 - 0x00A4)
class USeqAct_AllPlayersInVolume : public USequenceAction
{
public:
	TArray< class AVolume* >                           Volumes;                                          		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bAllActorsInVolumes : 1;                          		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCheckForAllPlayers : 1;                          		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3076 ];

		return pClassPointer;
	};

	bool AllPlayersInVolumes ( );
	bool PlayerIsInAVolume ( class APlayerController* PC );
};

// Class GearboxFramework.SeqCond_CompareLocation
// 0x0004 (0x0090 - 0x008C)
class USeqCond_CompareLocation : public USequenceCondition
{
public:
	float                                              CheckRadius;                                      		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3078 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqCond_CompareString
// 0x0004 (0x0090 - 0x008C)
class USeqCond_CompareString : public USequenceCondition
{
public:
	unsigned long                                      bCaseSensitive : 1;                               		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3080 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqCond_GetLanguage
// 0x000C (0x0098 - 0x008C)
class USeqCond_GetLanguage : public USequenceCondition
{
public:
	TArray< struct FString >                           LangList;                                         		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3082 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SimpleMathValueResolver
// 0x0024 (0x0060 - 0x003C)
class USimpleMathValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      Arg1Option;                                       		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Operand;                                          		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                Arg1Attribute;                                    		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                Argument;                                         		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3084 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SpecialMoveComponent
// 0x003F (0x0098 - 0x0059)
class USpecialMoveComponent : public UActorComponent
{
public:
	unsigned long                                      bLocalPlay : 1;                                   		// 0x005C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              StartTime;                                        		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USpecialMoveInterface*                       SMI;                                              		// 0x0064 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0068 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSpecialMoveData                            CurrentSMData;                                    		// 0x006C (0x001C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FSpecialMoveData >                  SMDQueue;                                         		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAnimNodeSpecialMoveBlend*                   SMBlendNode;                                      		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3086 ];

		return pClassPointer;
	};

	bool IsOwnerAlwaysNetRelevant ( );
	bool CanPlayBehaviorData ( struct FSMBehavior* Data );
	void RunBehaviors ( TArray< struct FSMBehavior >* SMBehaviors );
	class USpecialMoveDefinition* GetCurrent ( );
	float GetPlayRateScale ( );
	float GetDuration ( );
	class UObject* GetData ( );
	void LocalAnimFinished ( class USpecialMoveDefinition* SMD, unsigned long bInterrupted, struct FSpecialMoveData* SMData );
	void ClearQueue ( );
	void StopAnyLocal ( struct FName SMNodeName, unsigned long bInterrupted, class USkeletalMeshComponent* MeshComp );
	void StopLocal ( class USpecialMoveDefinition* OldSMD, unsigned long bInterrupted );
	void StopAny ( unsigned long bClearQueue, unsigned long bInterrupted );
	void Stop ( class USpecialMoveDefinition* OldSMD, unsigned long bClearQueue, unsigned long bInterrupted );
	float PlayLocal ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	void Queue ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	float Play ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	void RemoveFromQueue ( class USpecialMoveDefinition* SMD );
	bool IsQueued ( class USpecialMoveDefinition* SMD );
	bool IsPlayingClass ( class UClass* SMClass );
	bool IsPlayingAny ( );
	bool IsPlaying ( class USpecialMoveDefinition* SMD );
	struct FVector GetAnimDelta ( class UGearboxAnimDefinition* CustomAnimSMD );
	class UAnimNodeSpecialMoveBlend* GetSMNode ( );
	void PlayReplicated ( struct FReplicatedSpecialMoveData NewSMData );
	float GetAnimLength ( class UGearboxAnimDefinition* CustomAnimSMD, unsigned long bIncludeNextSMD, class USkeletalMeshComponent* SMC );
};

// Class GearboxFramework.SpecialMoveDefinition
// 0x000C (0x0048 - 0x003C)
class USpecialMoveDefinition : public UGBXDefinition
{
public:
	class USpecialMoveDefinition*                      NextSpecialMove;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UExpressionEvaluator*                        StopExpression;                                   		// 0x0040 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	unsigned long                                      bOwnerAlwaysRelevant : 1;                         		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bClientHasAuthority : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3088 ];

		return pClassPointer;
	};

	bool eventIsPlayingLocally ( class USpecialMoveInterface* SMI );
	class USpecialMoveDefinition* GetSMDToPlay ( class USpecialMoveInterface* SMI );
	bool Contains ( class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI );
	void eventClientFinished ( class USpecialMoveInterface* SMI, unsigned long bInterrupted );
	void eventServerFinished ( class USpecialMoveInterface* SMI, unsigned long bInterrupted );
	float eventClientStarted ( class USpecialMoveInterface* SMI, struct FSpecialMoveData* SMData );
	void eventServerStarted ( class USpecialMoveInterface* SMI );
	bool IsLocalAuthority ( class USpecialMoveInterface* SMI );
	bool eventAuthorityCanPlay ( class USpecialMoveInterface* SMI );
};

// Class GearboxFramework.SpecialMoveExpressionList
// 0x000C (0x0054 - 0x0048)
class USpecialMoveExpressionList : public USpecialMoveDefinition
{
public:
	TArray< struct FSMExpressionList >                 SpecialMoveList;                                  		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3090 ];

		return pClassPointer;
	};

	bool Contains ( class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI );
	class USpecialMoveDefinition* GetSMDToPlay ( class USpecialMoveInterface* SMI );
};

// Class GearboxFramework.SpecialMoveRandom
// 0x000C (0x0054 - 0x0048)
class USpecialMoveRandom : public USpecialMoveDefinition
{
public:
	TArray< struct FSMRandomPair >                     RandomList;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3092 ];

		return pClassPointer;
	};

	bool Contains ( class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI );
	class USpecialMoveDefinition* GetSMDToPlay ( class USpecialMoveInterface* SMI );
};

// Class GearboxFramework.SpecialMoveInterface
// 0x0000 (0x003C - 0x003C)
class USpecialMoveInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3094 ];

		return pClassPointer;
	};

	void SetReplicatedSMData ( struct FSpecialMoveData* NewSMData );
	void eventServerSpecialMove_StopAny ( );
	void eventServerSpecialMove_Stop ( class USpecialMoveDefinition* OldSMD );
	void eventServerSpecialMove_Queue ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	void eventServerSpecialMove_Play ( class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, struct FName CallbackName, class UObject* CallbackObject, class UObject* Data );
	unsigned char GetDefaultRootMotionRotationMode ( );
	unsigned char GetDefaultRootMotionMode ( );
	class USkeletalMeshComponent* GetSkelMesh ( );
	class USpecialMoveComponent* GetSMComponent ( );
	class AActor* GetActor ( );
};

// Class GearboxFramework.StateAttributeResolver
// 0x0008 (0x0044 - 0x003C)
class UStateAttributeResolver : public UAttributeValueResolver
{
public:
	struct FName                                       NameKey;                                          		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3096 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TimeValueResolver
// 0x0028 (0x0064 - 0x003C)
class UTimeValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      TimeMode;                                         		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0040 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                StartTime;                                        		// 0x0044 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                TotalTime;                                        		// 0x0054 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3098 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.WireManager
// 0x0004 (0x018C - 0x0188)
class AWireManager : public AActor
{
public:
	class UMaterialInterface*                          DefaultMaterial;                                  		// 0x0188 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3100 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.WireTerminal
// 0x0018 (0x01A8 - 0x0190)
class AWireTerminal : public AStaticMeshActor
{
public:
	class AWireTerminal*                               NextTerminal;                                     		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWireLinkage >                      Linkages;                                         		// 0x0194 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInterface*                          WireMaterial;                                     		// 0x01A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTerminalDirty : 1;                               		// 0x01A4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3102 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void NotifyModifiedTerminal ( );
};

// Class GearboxFramework.WiringActor
// 0x0000 (0x0190 - 0x0190)
class AWiringActor : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3104 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.WiringMesh
// 0x0240 (0x0370 - 0x0130)
class UWiringMesh : public UStaticMesh
{
public:
	unsigned char                                      UnknownData00[ 0x240 ];                           		// 0x0130 (0x0240) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3106 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ActionResource
// 0x0000 (0x003C - 0x003C)
class UActionResource : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3108 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ActionSequence
// 0x006C (0x00A8 - 0x003C)
class UActionSequence : public UObject
{
public:
	TArray< class UClass* >                            ResourcesUsed;                                    		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class URuleEngine*                                 MyRuleEngine;                                     		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URule*                                       AttachedRule;                                     		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LatentFloat;                                      		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInitialized : 1;                                 		// 0x0054 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bDoWorkFinished : 1;                              		// 0x0054 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bInAtomicSection : 1;                             		// 0x0054 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bDoNotLoadBalance : 1;                            		// 0x0054 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class UActionSequence*                             ParentSequence;                                   		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UActionSequence*                             ChildSequence;                                    		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAIFactoryBase*                              TheAIFactory;                                     		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ContextMenu;                                      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StoredDeltaTime;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< struct FFlagDefinitionInitialization >     FlagValuesToSetOnBegin;                           		// 0x0074 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FFlagDefinitionInitialization >     FlagValuesToSetOnEnd;                             		// 0x0080 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UIAIInterface*                               AI;                                               		// 0x008C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FName >                             BehaviorOutputs;                                  		// 0x0094 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       BehaviorName;                                     		// 0x00A0 (0x0008) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3110 ];

		return pClassPointer;
	};

	void TriggerBehavior ( struct FName OutputName );
	float GetRangeValue ( struct FAIRange* Range );
	bool RangeIsValid ( struct FAIRange* Range );
	void Finish ( unsigned long bFailed );
	bool IsRunning ( );
	void eventScriptCleanUp ( );
	struct FName eventCanRun ( );
	void eventActivateEvent ( struct FName EventName );
	void eventUpdate ( );
	void eventInit ( );
	void eventStop ( );
	void eventStart ( );
	void eventInterruptSequence ( class UActionSequence* InterruptingSequence );
	void eventStopSequence ( );
	void eventStartSequence ( );
	void ExecuteSequence ( class UActionSequence* SequenceTemplate );
	void Sleep ( float Seconds );
	void RunSubSequence ( class UActionSequence* SubSequence );
	void InterruptLatentAction ( );
	void DoRuleSetPop ( );
	bool DoRuleSetPush ( class URuleSet* NewRuleSet );
	void DoRuleSetSwitch ( class URuleSet* NewRuleSet );
	void PreventNewRulesFromStarting ( );
	class URule* GetRuleNative ( );
	void GetActionSequence ( class UActionSequence* Template, class UActionSequence** OutSequence );
	bool IsInLabel ( struct FName TestLabel );
	bool IsAtomic ( );
	void StopAtomic ( );
	void StartAtomic ( );
	bool IsActionReadyToFinish ( );
};

// Class GearboxFramework.ActionSequenceList
// 0x0004 (0x00AC - 0x00A8)
class UActionSequenceList : public UActionSequence
{
public:
	int                                                CurrentIndex;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3112 ];

		return pClassPointer;
	};

	bool IsActionReadyToFinish ( );
};

// Class GearboxFramework.ActionSequencePawn
// 0x0008 (0x00B0 - 0x00A8)
class UActionSequencePawn : public UActionSequence
{
public:
	class AGearboxMind*                                MyGearboxMind;                                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	class AGearboxPawn*                                MyGearboxPawn;                                    		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3114 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_PawnMovementBase
// 0x00A0 (0x0150 - 0x00B0)
class UAction_PawnMovementBase : public UActionSequencePawn
{
public:
	struct FVector                                     CachedSearchOrigin;                               		// 0x00B0 (0x000C) [0x0000000000000000]              
	struct FFlag                                       CoverCheckThrottle;                               		// 0x00BC (0x0010) [0x0000000000000000]              
	float                                              CoverCheckThrottleInterval;                       		// 0x00CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      ShouldRepeatNavSearch : 1;                        		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Interrupted : 1;                                  		// 0x00D0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      GoToCover : 1;                                    		// 0x00D0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      UsePreciseArrival : 1;                            		// 0x00D0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FVector                                     NewGoalLocation;                                  		// 0x00D4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UPawnMoveLocationRequest*                    OneMoveRequest;                                   		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      MoveRequestClass;                                 		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FAttributeInitializationData >      AttributesToEvaluate;                             		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      AttributeEvalStyle;                               		// 0x00F4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SearchRandomness;                                 		// 0x00F5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverSearchFilter;                                		// 0x00F6 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverFailureResponse;                             		// 0x00F7 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RepathOption;                                     		// 0x00F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USearchOrigin*                               SearchOrigin;                                     		// 0x00FC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class USearchDirection*                            DirectionFromOrigin;                              		// 0x0100 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              DirectionCone;                                    		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULocationFilter*                             LocationFilterTest;                               		// 0x0108 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FAttributeInitializationData                MinDistanceFromOrigin;                            		// 0x010C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MaxDistanceFromOrigin;                            		// 0x011C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                OverrideDistanceForCover;                         		// 0x012C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                RepathDistanceThresh;                             		// 0x013C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class URuleEventDef*                               FailureEvent;                                     		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3116 ];

		return pClassPointer;
	};

	void eventPostMovement ( );
	void eventPreMovement ( );
	void eventPrePathFind ( );
	void eventInterruptSequence ( class UActionSequence* InterruptingSequence );
	void eventStopSequence ( );
	void eventStartSequence ( );
	void MovePawnToDestinationLocation ( struct FVector GoalLocation, unsigned long NewUsePreciseArrival );
	void TakeDebugSnapshotMoveFailure ( unsigned char Cause );
	void SetMaxMovementSpeed ( unsigned char NewMaxSpeed );
	void EndMovePawnToDestinationLocation ( );
};

// Class GearboxFramework.ActionSequenceRandom
// 0x000C (0x00B4 - 0x00A8)
class UActionSequenceRandom : public UActionSequence
{
public:
	TArray< struct FActionSequenceRandomData >         ActionList;                                       		// 0x00A8 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3118 ];

		return pClassPointer;
	};

	void EvaluateActionList ( );
	void OverrideNextSequenceToRun ( class UActionSequence* NewSequence );
	class UActionSequence* GetRandomAction ( );
};

// Class GearboxFramework.AIComponent
// 0x0093 (0x00EC - 0x0059)
class UAIComponent : public UActorComponent
{
public:
	float                                              UpdateRate;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	class UIAIInterface*                               AI;                                               		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bInitialized : 1;                                 		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UAIDefinition*                               AIDef;                                            		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastStateUpdateTime;                              		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    CurrentState;                                     		// 0x0074 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FAIResourceData >                   ResourceData;                                     		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class AActor*                                      CurrentTarget;                                    		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      ScriptedTarget;                                   		// 0x0088 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastTargetUpdateTime;                             		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UMindTargetInfo* >                   Targets;                                          		// 0x0090 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTargetingDefinition*                        TargetingDef;                                     		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      MindTargetInfoClass;                              		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FAIHoldData >                       Holds;                                            		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAIHoldData >                       TargetHolds;                                      		// 0x00B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAIHoldData >                       MovementHolds;                                    		// 0x00BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAIHoldData >                       DemigodHolds;                                     		// 0x00C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAIHoldData >                       GodHolds;                                         		// 0x00D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAIHoldData >                       DialogHolds;                                      		// 0x00E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3120 ];

		return pClassPointer;
	};

	float GetAIRangeTime ( struct FAIRange InRange );
	void DrawAITree ( class UCanvas* Canvas );
	void LogDemigodHolds ( );
	void ReleaseDialog ( struct FName HoldName, class UObject* Tag );
	void HoldDialog ( struct FName HoldName, class UObject* Tag );
	bool DialogOnHold ( );
	void ReleaseGod ( struct FName HoldName, class UObject* Tag );
	void HoldGod ( struct FName HoldName, class UObject* Tag );
	bool GodOnHold ( );
	void ReleaseDemigod ( struct FName HoldName, class UObject* Tag );
	void HoldDemigod ( struct FName HoldName, class UObject* Tag );
	bool DemigodOnHold ( );
	void ReleaseMovement ( struct FName HoldName, class UObject* Tag );
	void HoldMovement ( struct FName HoldName, class UObject* Tag );
	bool MovementOnHold ( );
	void ReleaseTarget ( struct FName HoldName, class UObject* Tag );
	void HoldTarget ( struct FName HoldName, class UObject* Tag );
	bool TargetOnHold ( );
	void Release ( struct FName HoldName, class UObject* Tag );
	void Hold ( struct FName HoldName, class UObject* Tag );
	bool OnHold ( );
	void TargetChanged ( class AActor* OldTarget, class AActor* NewTarget );
	void SetTarget ( class AActor* NewTarget );
	void SetScriptedTarget ( class AActor* NewScriptedTarget );
	class UMindTargetInfo* GetTargetRecordFor ( class AActor* Target, unsigned long bTryParent );
	class UMindTargetInfo* GetTargetRecord ( unsigned long bTryParent );
	bool IsTarget ( class AActor* TestTarget );
	class AActor* GetTarget ( );
	bool HasTarget ( );
	bool ShouldRemoveTarget ( class UMindTargetInfo* TargetRec );
	void TargetRemoved ( class UMindTargetInfo* TargetRec );
	void ForceRemoveTarget ( class AActor* Target );
	bool ValidCurrentTarget ( class UMindTargetInfo* TargetRec );
	bool ValidTarget ( class AActor* Target );
	void PrioritizeTarget ( class UMindTargetInfo* TargetRec );
	void CalcTargetInfo ( class UMindTargetInfo* TargetRec );
	void ChooseBestTarget ( );
	void InheritTargets ( class UAIComponent* Parent );
	void RemoveTargets ( );
	void FindTargets ( );
	void GetTargets ( );
	void InitializeTargetRecord ( class UMindTargetInfo* TargetRec );
	void NotifyAttackedBy ( class AActor* Attacker );
	class UMindTargetInfo* AddTarget ( class AActor* NewTarget );
	class UAIComponent* GetParentComponent ( );
	class UPawnAllegiance* GetAllegiance ( );
	void ClearState ( );
	bool ActivateEvent ( struct FName EventName );
};

// Class GearboxFramework.AICostExpressionEvaluator
// 0x0008 (0x0044 - 0x003C)
class UAICostExpressionEvaluator : public UExpressionEvaluator
{
public:
	int                                                Multiplier;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPopulationDefinition*                       PopDef;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3122 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.AIFactoryBase
// 0x004C (0x0088 - 0x003C)
class UAIFactoryBase : public UObject
{
public:
	TArray< struct FKnowledgeRecordStruct >            KnowledgeRecordList;                              		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRuleSetRecord >                    RuleSets;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRuleRecord >                       Rules;                                            		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FActionSequenceRecord >             ActionSequences;                                  		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTargetInfoRecord >                 TargetRecords;                                    		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIDefinitionRecord >               AIDefinitionRecords;                              		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeStampedRecordLifetime;                        		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3124 ];

		return pClassPointer;
	};

	void FlushPools ( );
	void ReturnAIDef ( class UAIDefinition** InAIDef );
	bool GetAIDef ( class UAIDefinition* AIDefTemplate, class UAIDefinition** OutAIDef );
	void ReturnTargetRecord ( class UMindTargetInfo** InTargetRecord );
	bool GetTargetRecord ( class UClass* InfoClass, class UMindTargetInfo** OutTargetRecord );
	void ReturnActionSequence ( class UActionSequence** InSequence );
	bool GetActionSequence ( class UActionSequence* SequenceTemplate, class UActionSequence** OutSequence );
	void ReturnRuleSet ( class URuleSet** InRuleSet );
	bool GetRuleSetFromArchetype ( class URuleSet* RuleSetArchetype, class URuleSet** OutRuleSet, TArray< class URule* >* CurRunningRules );
	void ReturnKnowledgeRecord ( class UKnowledgeRecord** InKR );
	bool GetKnowledgeRecordListFromArchetypes ( TArray< class UKnowledgeRecord* > KnowledgeRecordTemplates, TArray< class UKnowledgeRecord* >* KnowledgeRecords );
	bool GetKnowledgeRecordFromArchetype ( class UKnowledgeRecord* InKR, class UKnowledgeRecord** OutKR );
	bool GetKnowledgeRecord ( class UClass* KnowledgeRecordClass, class UKnowledgeRecord** OutKR );
	void ReturnRule ( class URule** InRule );
	bool GetRuleFromArchetype ( class URule* InRule, class URule** OutRule );
	bool GetRule ( class UClass* RuleClass, class URule** OutRule );
	void ReturnRuleEngine ( class URuleEngine* InRuleEngine );
};

// Class GearboxFramework.GearboxAIFactory
// 0x0000 (0x0088 - 0x0088)
class UGearboxAIFactory : public UAIFactoryBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3126 ];

		return pClassPointer;
	};

	void FreeRuleEngine ( class URuleEngine* InRuleEngine );
	bool GetRuleEngineFromTemplate ( class URuleEngine* RuleEngineTemplate, class URuleEngine** OutRuleEngine );
};

// Class GearboxFramework.AIResource
// 0x0014 (0x0050 - 0x003C)
class UAIResource : public UGBXDefinition
{
public:
	TArray< struct FAIResourceRestriction >            ResourceRestrictions;                             		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                MaxUsers;                                         		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MinUsers;                                         		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3128 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIResourceExpressionEvaluator
// 0x0008 (0x0044 - 0x003C)
class UAIResourceExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      Option;                                           		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAIResource*                                 Resource;                                         		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3130 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.AllegianceExpressionEvaluator
// 0x0008 (0x0044 - 0x003C)
class UAllegianceExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      AllegianceCheck;                                  		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPawnAllegiance*                             Allegiance;                                       		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3132 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.AwarenessZoneCollectionDefinition
// 0x0014 (0x0050 - 0x003C)
class UAwarenessZoneCollectionDefinition : public UGBXDefinition
{
public:
	TArray< class UAwarenessZoneDefinition* >          DefaultAwarenessZones;                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       CollectionName;                                   		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3134 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AwarenessZoneDefinition
// 0x0030 (0x006C - 0x003C)
class UAwarenessZoneDefinition : public UGBXDefinition
{
public:
	struct FString                                     ZoneName;                                         		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      OuterRimInfinitelyFarAway : 1;                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ViewConeOnlyUsedForUnknownTargets : 1;            		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      NeverForgetHiddenThreats : 1;                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              OuterRimDistance;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ViewConeStyle;                                    		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SpecialExposureBehavior;                          		// 0x0051 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      HearingBehavior;                                  		// 0x0052 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewConeFieldOfViewInDegrees;                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinExposureRatingConsideredVisible;               		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForgetHiddenThreatsAfterXSeconds;                 		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetSelectionPriority;                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ZoneColor;                                        		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeFiringAtLastKnownLocation;                    		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3136 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Behavior_SendGbxMessage
// 0x0024 (0x0070 - 0x004C)
class UBehavior_SendGbxMessage : public UBehaviorBase
{
public:
	class UGbxMessageDefinition*                       MessageDefinition;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AssignSenderTo;                                   		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AssignSubjectTo;                                  		// 0x0051 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TakeLocationFrom;                                 		// 0x0052 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FGbxMessageSimpleMetaData                   MetaData;                                         		// 0x0054 (0x001C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3138 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
	struct FVector GetLocation ( unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject );
	class UObject* GetMessageParameter ( unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject );
};

// Class GearboxFramework.Behavior_SetFlag
// 0x000C (0x0058 - 0x004C)
class UBehavior_SetFlag : public UBehaviorBase
{
public:
	TArray< struct FFlagDefinitionInitialization >     FlagsToSet;                                       		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3140 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.BestTargetAttributeContextResolver
// 0x0004 (0x0040 - 0x003C)
class UBestTargetAttributeContextResolver : public UAttributeContextResolver
{
public:
	unsigned long                                      bGetTargetInfo : 1;                               		// 0x003C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3142 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.CharacterClassMessageDefinition
// 0x000C (0x0048 - 0x003C)
class UCharacterClassMessageDefinition : public UGBXDefinition
{
public:
	TArray< struct FBehaviorTriggerMessageStruct >     BehaviorTriggers;                                 		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3144 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.CoverSearchCriteria
// 0x003C (0x0078 - 0x003C)
class UCoverSearchCriteria : public UGBXDefinition
{
public:
	unsigned long                                      DoDistanceToOriginCandidateTest : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DoProvidesCoverCandidateTest : 1;                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      DoDistanceToThreatCandidateTest : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      DoVantageToBestTargetCandidateTest : 1;           		// 0x003C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      DoVantageToAnyTargetCandidateTest : 1;            		// 0x003C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      DoAssignmentVolumeCandidateTest : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      DoBlacklistedCoverCandidateTest : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      DoScoringForDistanceToOrigin : 1;                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      DoScoringForDistanceToThreat : 1;                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      DoScoringForProvidesCover : 1;                    		// 0x003C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      DoScoringForVantageOnBestTarget : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      DoScoringForVantageOnAnyTarget : 1;               		// 0x003C (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      DoScoringForUnoccupiedLink : 1;                   		// 0x003C (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      DoScoringForNonBlacklistedCover : 1;              		// 0x003C (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	float                                              DistanceToOriginCandidateTestMax;                 		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DistanceToThreatCandidateTest;                    		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDistanceToOrigin;                              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistanceToOrigin;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreDistanceToOrigin;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDistanceToThreat;                              		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistanceToThreat;                              		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreDistanceToThreat;                            		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistanceProvidesCover;                         		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreProvidesCover;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreVantageOnBestTarget;                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreVantageOnAnyTarget;                          		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreUnoccupiedLink;                              		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScoreNonBlacklistedCover;                         		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3146 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityBase
// 0x0008 (0x0044 - 0x003C)
class UExposureUtilityBase : public UObject
{
public:
	unsigned long                                      ExposureEnabled : 1;                              		// 0x003C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	class UExposureUtilityStrategy*                    ExposureStrategy;                                 		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3148 ];

		return pClassPointer;
	};

	float CalculateVantageToPoint ( class AActor* pLooker, struct FVector* TargetPoint );
	float CalculateTargetExposure ( class AGearboxPawn* pLooker, class AActor* pTarget );
};

// Class GearboxFramework.ExposureUtilityBasicCaching
// 0x0040 (0x0084 - 0x0044)
class UExposureUtilityBasicCaching : public UExposureUtilityBase
{
public:
	unsigned long                                      CachingEnabled : 1;                               		// 0x0044 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	float                                              MaxCacheTime;                                     		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DistanceClose;                                    		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DistanceMed;                                      		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheFreshnessTimeClose;                          		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheFreshnessTimeMed;                            		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheFreshnessTimeFar;                            		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheFreshnessTimePlayer;                         		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheTimeFudgeFactorClose;                        		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheTimeFudgeFactorMed;                          		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CacheTimeFudgeFactorFar;                          		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HasMovedDistThreshold;                            		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HasMovedDistThresholdPlayer;                      		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FExposureCacheStruct >              CachedExposures;                                  		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3150 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityFixedCost
// 0x0048 (0x00CC - 0x0084)
class UExposureUtilityFixedCost : public UExposureUtilityBasicCaching
{
public:
	float                                              CloseDistanceSquared;                             		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MedDistanceSquared;                               		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxLineChecksPerFrame;                            		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FBucketStruct >                     Buckets;                                          		// 0x0090 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              MedAccumulatedTime;                               		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              FarAccumulatedTime;                               		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              SkipUpdateForTime;                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                MaxPointData;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                PointLineChecks;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                PointMaxLineChecks;                               		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              PointFreshTime;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              PointStaleTime;                                   		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              PointMaxErrorSq;                                  		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< struct FPointExposureData >                PointData;                                        		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3152 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityStrategy
// 0x0000 (0x003C - 0x003C)
class UExposureUtilityStrategy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3154 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FiringBehaviorDefinition
// 0x000C (0x0048 - 0x003C)
class UFiringBehaviorDefinition : public UGBXDefinition
{
public:
	TArray< struct FConditionalPattern >               ConditionalPatterns;                              		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3156 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FiringBehaviorManager
// 0x0034 (0x0070 - 0x003C)
class UFiringBehaviorManager : public UObject
{
public:
	class UFiringPattern*                              CurrentFiringPattern;                             		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentTargetExposure;                            		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumShotsThisBurst;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FVector                                     CachedTargetPoint;                                		// 0x0048 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasTargetPoint : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSetupWithZoneCollection : 1;                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	class UFiringZoneCollectionDefinition*             CurrentZoneCollection;                            		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UFiringZoneDefinition*                       CurrentZone;                                      		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UFiringBehaviorDefinition*                   CurrentBehavior;                                  		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentConditionalPattern;                        		// 0x0064 (0x0004) [0x0000000000000000]              
	class UFiringBehaviorDefinition*                   DefaultFiringBehaviorDefinition;                  		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UFiringPattern*                              DefaultFiringPatternTemplate;                     		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3158 ];

		return pClassPointer;
	};

	class UClass* eventGetTemplateClass ( class UObject* TemplateObject );
};

// Class GearboxFramework.FiringCondition
// 0x0000 (0x003C - 0x003C)
class UFiringCondition : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3160 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FireCond_IsPlayerTarget
// 0x0000 (0x003C - 0x003C)
class UFireCond_IsPlayerTarget : public UFiringCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3162 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FiringPattern
// 0x0004 (0x0040 - 0x003C)
class UFiringPattern : public UObject
{
public:
	unsigned long                                      bIsHarmlessToPawns : 1;                           		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowFakeShots : 1;                              		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3164 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FirePatt_Cone
// 0x0005 (0x0045 - 0x0040)
class UFirePatt_Cone : public UFiringPattern
{
public:
	float                                              ConeDegrees;                                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ShotSpreadType;                                   		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3166 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FirePatt_ShrinkingCone
// 0x0019 (0x0059 - 0x0040)
class UFirePatt_ShrinkingCone : public UFiringPattern
{
public:
	float                                              CurrentAccuracyConeDeg;                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastDesiredAim;                                   		// 0x0044 (0x000C) [0x0000000000000000]              
	float                                              MaxAccuracyConeDeg;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConeMultiplierPerShot;                            		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ShotSpreadType;                                   		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3168 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FirePatt_StrafeOver
// 0x0028 (0x0068 - 0x0040)
class UFirePatt_StrafeOver : public UFiringPattern
{
public:
	struct FRotator                                    CurrentAimRotation;                               		// 0x0040 (0x000C) [0x0000000000000000]              
	float                                              PitchDeltaPerShot;                                		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              MaxYawDeltaPerShot;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              RefireRate;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              LineOfShotsSpeed;                                 		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LineOfShotsEndZ;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YawDeltaRatio;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetPosition;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3170 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FiringZoneCollectionDefinition
// 0x000C (0x0048 - 0x003C)
class UFiringZoneCollectionDefinition : public UGBXDefinition
{
public:
	TArray< class UFiringZoneDefinition* >             Zones;                                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3172 ];

		return pClassPointer;
	};

	class UFiringZoneDefinition* eventGetZoneForDistance ( float Distance );
};

// Class GearboxFramework.FiringZoneDefinition
// 0x001C (0x0058 - 0x003C)
class UFiringZoneDefinition : public UGBXDefinition
{
public:
	struct FString                                     ZoneName;                                         		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      OuterRimInfinitelyFarAway : 1;                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              OuterRimDistance;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ZoneColor;                                        		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UFiringBehaviorDefinition*                   FiringBehavior;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3174 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.FlagDefinition
// 0x0014 (0x0050 - 0x003C)
class UFlagDefinition : public UGBXDefinition
{
public:
	class UExpressionEvaluator*                        EvaluationExpression;                             		// 0x003C (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	TArray< class UAttributeContextResolver* >         ContextResolverChain;                             		// 0x0040 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	class UFlagValueResolver*                          ValueResolver;                                    		// 0x004C (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3176 ];

		return pClassPointer;
	};

	void ApplyFlagInitializationData ( class UObject* ContextSource, TArray< struct FFlagDefinitionInitialization >* FlagsToSet );
	class UObject* ResolveContext ( class UObject* ContextSource );
	bool SetTrueTimed ( class UObject* ContextSource, float TimeSeconds );
	bool SetValue ( class UObject* ContextSource, unsigned long Value );
};

// Class GearboxFramework.FlagExpressionEvaluator
// 0x000D (0x0049 - 0x003C)
class UFlagExpressionEvaluator : public UExpressionEvaluator
{
public:
	TArray< struct FFlagEvalConditional >              FlagChain;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      FlagChainOperator;                                		// 0x0048 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3178 ];

		return pClassPointer;
	};

	bool Evaluate ( class UObject* ContextSource );
};

// Class GearboxFramework.FlagValueResolver
// 0x0000 (0x003C - 0x003C)
class UFlagValueResolver : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3180 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.MultipleFlagValueResolver
// 0x0005 (0x0041 - 0x003C)
class UMultipleFlagValueResolver : public UFlagValueResolver
{
public:
	class UFlagDefinition*                             FlagToLookUp;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AggregationType;                                  		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3182 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ObjectFunctionFlagValueResolver
// 0x0010 (0x004C - 0x003C)
class UObjectFunctionFlagValueResolver : public UFlagValueResolver
{
public:
	float                                              CheckRate;                                        		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     FunctionCall;                                     		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3184 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ObjectPropertyFlagValueResolver
// 0x0008 (0x0044 - 0x003C)
class UObjectPropertyFlagValueResolver : public UFlagValueResolver
{
public:
	struct FName                                       PropertyName;                                     		// 0x003C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3186 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RuleEngineFlagValueResolver
// 0x0000 (0x003C - 0x003C)
class URuleEngineFlagValueResolver : public UFlagValueResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3188 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GbxMessage
// 0x00D8 (0x0114 - 0x003C)
class UGbxMessage : public UObject
{
public:
	class UGbxMessageDefinition*                       Definition;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       NameKey;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	class UObject*                                     Sender;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	class UObject*                                     Subject;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	class UObject*                                     AdditionalData;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FGbxMessageSimpleMetaData                   SimpleMetaData;                                   		// 0x0054 (0x001C) [0x0000000000000000]              
	struct FGbxMessageSimpleMetaData                   SimpleMetaData2;                                  		// 0x0070 (0x001C) [0x0000000000000000]              
	struct FGbxMessageSimpleMetaData                   SimpleMetaData3;                                  		// 0x008C (0x001C) [0x0000000000000000]              
	struct FGbxMessageSimpleMetaData                   SimpleMetaData4;                                  		// 0x00A8 (0x001C) [0x0000000000000000]              
	class UPawnAllegiance*                             SenderAllegiance;                                 		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UPawnAllegiance*                             SubjectAllegiance;                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      IntendedForAllies : 1;                            		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IntendedForEnemies : 1;                           		// 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      HasLocation : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      HasRadius : 1;                                    		// 0x00CC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      SendRepeatedly : 1;                               		// 0x00CC (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     MessageLocation;                                  		// 0x00D0 (0x000C) [0x0000000000000000]              
	float                                              BroadcastRadius;                                  		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              DeliverTime;                                      		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              TimePosted;                                       		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              TimeSent;                                         		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FFlag                                       DoNotSendRightNow;                                		// 0x00EC (0x0010) [0x0000000000000000]              
	int                                                StopSendingAfterXReceptions;                      		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              MaxDurationToSend;                                		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              TimeBetweenSends;                                 		// 0x0104 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            DupeCriteria;                                     		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3190 ];

		return pClassPointer;
	};

	void InitializeFromDefinition ( class UGbxMessageDefinition* InDefinition, class UObject* RadiusContextSource, class UObject* InSender, class UObject* InSubject, class UPawnAllegiance* ManualSenderAllegiance );
};

// Class GearboxFramework.GbxMessageDefinition
// 0x0034 (0x0070 - 0x003C)
class UGbxMessageDefinition : public UGBXDefinition
{
public:
	struct FName                                       NameKey;                                          		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HasLocation : 1;                                  		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HasRadius : 1;                                    		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      TakeLocationFromSender : 1;                       		// 0x0044 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      IntendedForAllies : 1;                            		// 0x0044 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      IntendedForEnemies : 1;                           		// 0x0044 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      AllowRepeatSends : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      LimitedReception : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	struct FAttributeInitializationData                Radius;                                           		// 0x0048 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              SecondsBetweenSends;                              		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTimeToKeepSending;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            DupeCriteria;                                     		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                MaxRecipients;                                    		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3192 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GbxMessageManager
// 0x0030 (0x006C - 0x003C)
class UGbxMessageManager : public UObject
{
public:
	TArray< class UIGbxMessageListener* >              Listeners;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGbxMessage* >                       MessagesToSend;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFlag                                       SentMessagesRecently;                             		// 0x0054 (0x0010) [0x0000000000000000]              
	float                                              DistributionInterval;                             		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxMessagesPerDistribution;                       		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3194 ];

		return pClassPointer;
	};

	void RemoveListener ( class UIGbxMessageListener* InListener );
	void AddListener ( class UIGbxMessageListener* InListener );
	void PostMessage ( class UGbxMessage* Message );
	class UGbxMessage* AllocateMessage ( );
};

// Class GearboxFramework.GearboxMind
// 0x00E4 (0x0768 - 0x0684)
class AGearboxMind : public AGearboxAIController
{
public:
	struct FPointer                                    VfTable_IIRuleEngineOwner;                        		// 0x0684 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IINounAttributeProvider;                  		// 0x0688 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IIFlagProvider;                           		// 0x068C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IIAIInterface;                            		// 0x0690 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bDisabledDueToPopulationIrrelevance : 1;          		// 0x0694 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsToWalk : 1;                                 		// 0x0694 (0x0004) [0x0000000000000000] [0x00000002] 
	class UGearboxRuleEngine*                          MyRuleEngine;                                     		// 0x0698 (0x0004) [0x0000000000000000]              
	class UGearboxRuleEngine*                          RuleEngineTemplate;                               		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGearboxPawn*                                MyGearboxPawn;                                    		// 0x06A0 (0x0004) [0x0000000000000000]              
	unsigned char                                      FacingPolicy;                                     		// 0x06A4 (0x0001) [0x0000000000000000]              
	unsigned char                                      AtLeastOneKnownThreat;                            		// 0x06A5 (0x0001) [0x0000000000000000]              
	unsigned char                                      NewEnemyAwarenessReason;                          		// 0x06A6 (0x0001) [0x0000000000000000]              
	unsigned char                                      DebugMoveFinishedReason;                          		// 0x06A7 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      FacingActor;                                      		// 0x06A8 (0x0004) [0x0000000000000000]              
	struct FVector                                     FacingVector;                                     		// 0x06AC (0x000C) [0x0000000000000000]              
	float                                              DotProductToFacingPolicy;                         		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              DotProductToCurrentEnemy;                         		// 0x06BC (0x0004) [0x0000000000000000]              
	struct FName                                       MostRecentNewEnemyName;                           		// 0x06C0 (0x0008) [0x0000000000000000]              
	struct FName                                       MostRecentNewEnemyArchName;                       		// 0x06C8 (0x0008) [0x0000000000000000]              
	class UAwarenessZoneCollectionDefinition*          DefaultAwarenessZoneCollection;                   		// 0x06D0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAwarenessZoneCollectionDefinition*          CurrentAwarenessZoneCollection;                   		// 0x06D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAwarenessZoneDefinition*                    CurrentAwarenessZone;                             		// 0x06D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCoverSearchCriteria*                        DefaultCoverSearchCriteria;                       		// 0x06DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVector >                           FailedMoveSpots;                                  		// 0x06E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FNounAttributeState >               NounState;                                        		// 0x06EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     HomeLocation;                                     		// 0x06F8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                PopulationOpportunityIndex;                       		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      MindTargetInfoClass;                              		// 0x0708 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAITracker*                                  MyTracker;                                        		// 0x070C (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UFlagDefinition* >                   DynamicFlagDefinitions;                           		// 0x0710 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FDynamicFlagInstanceData >          DynamicFlags;                                     		// 0x071C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0728 (0x003C) UNKNOWN PROPERTY: MapProperty GearboxFramework.GearboxMind.DynamicFlagDefLookup
	class UAIComponent*                                AIComponent;                                      		// 0x0764 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3196 ];

		return pClassPointer;
	};

	void InitSequence ( class UActionSequence* NewSequence );
	class UPawnAllegiance* GetAllegiance ( );
	class UAIDefinition* GetAIDefinition ( );
	class UAIComponent* GetAIComponent ( );
	class UIAIInterface* GetAIParent ( );
	struct FVector GetAILocation ( );
	class AActor* GetAIActor ( );
	bool CanTickAI ( );
	bool InGodMode ( );
	void PawnDied ( class APawn* inPawn );
	void OnTargetPriority ( class UGearboxSeqAct_TargetPriority* inAction );
	void Behavior_SetCanTarget ( unsigned char ChangeStatus );
	bool GetNoTargetAllEnemies ( );
	void SetNoTargetAllEnemies ( unsigned long bNoTarget );
	void eventClearScriptedMoveTarget ( );
	bool eventIsCloseEnoughToScriptedMoveTarget ( );
	struct FVector eventGetWeaponFireLocation ( );
	int ActivateEventRule ( struct FName RuleEventName );
	void AddHitTargetRecord ( class AGearboxPawn* HitByPawn, struct FVector NewHitLocation, float flNewDamage );
	void StopMovement ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	class UGearboxRuleEngine* GetGearboxRuleEngine ( );
	class URuleEngine* GetRuleEngine ( );
	void NotifyShotAtBy ( class AGearboxPawn* ShootingPawn );
	bool FindCoverAndClaim ( struct FVector CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, unsigned long bEnactCoverChanges, struct FVector* OutDestination );
	void UpdateRuleEngineKnowledge ( class UClass* aKDBClass );
	bool GetCurrentTargetInfo ( class UMindTargetInfo** OutTargetRec );
	bool IsSameAllegianceMind ( class AGearboxMind* aMind );
	bool IsSameAllegiance ( class UObject* anObject );
	bool IsNeutralMind ( class AGearboxMind* aMind );
	bool IsNeutral ( class UObject* anObject );
	bool IsFriendlyMind ( class AGearboxMind* aMind );
	bool IsFriendly ( class UObject* anObject );
	bool IsEnemyMind ( class AGearboxMind* aMind );
	bool IsEnemy ( class UObject* anObject );
	bool WantsToWalk ( );
	void SetWantsToWalk ( unsigned long bInWantsToWalk );
	unsigned char GetFacingPolicy ( );
	void SetFacingPolicy ( unsigned char NewFacingPolicy, class AActor* NewFacingActor, struct FVector NewFacingVector );
	class AActor* GetCurrentTarget ( );
	void RemoveEnemyFromQueue ( class AActor* Target );
	class UGearboxNavigationHandle* GetNavigationHandle ( );
};

// Class GearboxFramework.GearboxAIMoveNodeRenderComponent
// 0x0000 (0x0210 - 0x0210)
class UGearboxAIMoveNodeRenderComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3198 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxCoverStateManager
// 0x00B8 (0x00F4 - 0x003C)
class UGearboxCoverStateManager : public UObject
{
public:
	class AGearboxPawn*                                MyGearboxPawn;                                    		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FGearboxCoverState                          DesiredCoverState;                                		// 0x0040 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FGearboxCoverState                          CurrentCoverState;                                		// 0x004C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FGearboxCoverTransition                     DesiredCoverTransition;                           		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FGearboxCoverTransition                     CurrentCoverTransition;                           		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FCoverSpotInfo                              DesiredCoverInfo;                                 		// 0x0060 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FCoverSpotInfo                              CurrentCoverInfo;                                 		// 0x0078 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FCoverSpotInfo                              LastCoverInfo;                                    		// 0x0090 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      PawnCrouchedPriorToMount : 1;                     		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      CoverDebugSearchWasFinalized : 1;                 		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              CoverDebugInnerRadius;                            		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CoverDebugOuterRadius;                            		// 0x00B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CoverDebugSearchAngle;                            		// 0x00B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CoverDebugSearchDirection;                        		// 0x00B8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FSmartVector                                CoverDebugSearchOrigin;                           		// 0x00C4 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FCoverDebugPriority >               CoverDebugList;                                   		// 0x00E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              HorizontalCoverAngleDegrees;                      		// 0x00EC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              VerticalCoverAngleDegrees;                        		// 0x00F0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3200 ];

		return pClassPointer;
	};

	bool IsChangingDirection ( );
	bool IsMantlingOverCoverInProgress ( );
	bool IsReturnFromPeekInProgress ( );
	bool IsPeekTransitionInProgress ( );
	bool IsPeekedUp ( unsigned long bTransitionCounts );
	bool IsReturnFromLeanOutInProgress ( );
	bool IsLeanOutTransitionInProgress ( );
	bool IsLeanedOut ( unsigned long bTransitionCounts );
	bool IsReturnFromPopUpInProgress ( );
	bool IsPopUpTransitionInProgress ( );
	bool IsPoppedUp ( unsigned long bTransitionCounts );
	bool IsExecutingAnyTransition ( );
	unsigned char GetDesiredState ( );
	unsigned char GetCurrentTransition ( );
	void OnMantleOverCoverAnimEnd ( );
	void OnTransitionAnimEndEx ( );
	void OnTransitionAnimEnd ( unsigned char Transition );
	void OnDismountAnimEnd ( );
	void OnMountAnimEnd ( );
	bool MantleOverCover ( class AActor* CoverActor, int CoverSlotNdx );
	bool ReturnToCover ( );
	bool LeanOutForFiring ( unsigned long BlindFire );
	bool PopUpForFiring ( unsigned long BlindFire );
	bool Peek ( );
	bool DetachFromCover ( );
	bool DismountCover ( unsigned char DismountType );
	bool ClaimAndMountCover ( class ACoverLink* TheCoverLink, int SlotNdx );
	bool MountDesiredCover ( );
	void ClearDesiredCover ( );
	void GetCurrentCoverLocationAndRotation ( struct FVector* CoverLoc, struct FRotator* CoverRot );
	void GetDesiredCoverLocationAndRotation ( struct FVector* CoverLoc, struct FRotator* CoverRot );
	bool HasDesiredCover ( );
	unsigned char GetLastCoverHeight ( );
	unsigned char GetCurrentCoverHeight ( );
	unsigned char GetDesiredCoverHeight ( );
	bool WasCoveredFrom ( struct FVector ThreatLocation );
	bool WillBeCoveredFrom ( struct FVector ThreatLocation );
	bool IsCoveredFrom ( struct FVector ThreatLocation );
	bool IsDismountInProgress ( );
	bool IsMountInProgress ( );
	bool WasMountedOnCover ( );
	bool IsMountedOnCover ( );
	bool IsUsingCover ( );
	void OnCoverStateChanged ( );
	void GetLastCover ( class AActor** OutCoverActor, int* OutSlotNdx );
	void GetCurrentCover ( class AActor** OutCoverActor, int* OutSlotNdx );
	void GetDesiredCover ( class AActor** OutCoverActor, int* OutSlotNdx );
	bool FindCoverAndClaim ( class AGearboxMind* TheMind, struct FVector CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, unsigned long bEnactCoverChanges, struct FVector* OutDestination );
	void Initialize ( class AGearboxPawn* P );
};

// Class GearboxFramework.GearboxMindAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UGearboxMindAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3202 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxNavigationHandle
// 0x0120 (0x02A0 - 0x0180)
class UGearboxNavigationHandle : public UNavigationHandle
{
public:
	unsigned char                                      DesiredMovementSpeed;                             		// 0x0180 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ActiveSpecialNavMeshMove;                         		// 0x0181 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFollowingPath : 1;                               		// 0x0184 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bReachedDestination : 1;                          		// 0x0184 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSpecialMovementFinished : 1;                     		// 0x0184 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bClearPathAfterSpecialMove : 1;                   		// 0x0184 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FBasedPosition                              CurrentGoal;                                      		// 0x0188 (0x0034) [0x0000000000002000]              ( CPF_Transient )
	struct FPathFindData                               CurrentPath;                                      		// 0x01BC (0x0058) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FGBXNavMeshPolyRef                          Anchor;                                           		// 0x0214 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FGBXNavMeshPolyRef                          LastValidAnchor;                                  		// 0x021C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FBasedPosition                              LastAnchorPosition;                               		// 0x0224 (0x0034) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastAnchorDelta;                                  		// 0x0258 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              NextPathObjectDistance;                           		// 0x0264 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CurrentGoalStartLoc;                              		// 0x0268 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    DesiredLookDirection;                             		// 0x0274 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LookDirection;                                    		// 0x0280 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UGBXNavMeshPathFinder*                       PathFinder;                                       		// 0x028C (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	float                                              NearPathCheckDist;                                		// 0x0290 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              NearPathCheckDistMin;                             		// 0x0294 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              NearPathCheckDistMax;                             		// 0x0298 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              NearPathCheckDistRate;                            		// 0x029C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3204 ];

		return pClassPointer;
	};

	void SetDesiredMovementSpeed ( unsigned char Speed );
	void ClearAnchor ( );
	bool GetNearestPositionOnNavMesh ( float Radius, struct FVector TestLoc, unsigned long bAnyHeight, struct FBasedPosition* NearestPos, struct FNavMeshPathParams* PolyUsableCheckParams, struct FGBXNavMeshPolyRef* NearestPoly );
	bool GetNavMeshPolyForPoint ( struct FVector Point, struct FGBXNavMeshPolyRef* FoundPoly, struct FNavMeshPathParams* PolyUsableCheckParams );
	bool IsDoingSpecialMove ( );
	bool InFinalPoly ( struct FVector TestLoc );
	bool NeedsRegularWalkingPhysics ( );
	bool PopulatePathfindingParamCache ( );
	bool TrySpecialMove ( struct FBasedPosition* MoveTarget );
	void Finished ( );
	bool IsGoalValid ( );
	void MovePawnToGoal ( );
	bool PathIsValid ( unsigned long bCheckAnchor, struct FPathFindData* Data );
	bool IsFollowingPath ( );
	bool ClearPath ( unsigned long bStopMovement, unsigned long bAllowDelayedClear );
	bool FollowPath ( struct FPathFindData* Data );
	bool CreatePathToLocation ( struct FVector DestLocation, struct FGBXNavMeshPolyRef DestPoly, unsigned long bAdjustStartForMotion, struct FPathFindData* PathData );
};

// Class GearboxFramework.IFlagProvider
// 0x0000 (0x003C - 0x003C)
class UIFlagProvider : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3206 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.IFlagProviderGroup
// 0x0000 (0x003C - 0x003C)
class UIFlagProviderGroup : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3208 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.IGbxMessageListener
// 0x0000 (0x003C - 0x003C)
class UIGbxMessageListener : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3210 ];

		return pClassPointer;
	};

	bool WantsToStopListening ( );
	class AActor* GetActor ( );
	struct FVector GetListenerLocation ( );
	class UPawnAllegiance* GetAllegiance ( );
	bool ReceiveMessage ( class UGbxMessage* Message );
	bool CaresAboutMessage ( class UGbxMessage* Message );
};

// Class GearboxFramework.IRuleEngineOwner
// 0x0000 (0x003C - 0x003C)
class UIRuleEngineOwner : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3212 ];

		return pClassPointer;
	};

	class URuleEngine* GetRuleEngine ( );
};

// Class GearboxFramework.KnowledgeRecord
// 0x001C (0x0058 - 0x003C)
class UKnowledgeRecord : public UObject
{
public:
	class UAIFactoryBase*                              TheAIFactory;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       TheName;                                          		// 0x0040 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      KCategory;                                        		// 0x0048 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      EvalType;                                         		// 0x0049 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Active;                                           		// 0x004A (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Marked;                                           		// 0x004B (0x0001) [0x0000000000000000]              
	float                                              Frequency;                                        		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              NextUpdateTime;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                FlagIndex;                                        		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3214 ];

		return pClassPointer;
	};

	void eventRecordEvalCallback ( class URuleEngine* EvalRuleEngine );
};

// Class GearboxFramework.LocationFilter
// 0x0000 (0x003C - 0x003C)
class ULocationFilter : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3216 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.LocationFilter_MustHaveLOS
// 0x0000 (0x003C - 0x003C)
class ULocationFilter_MustHaveLOS : public ULocationFilter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3218 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.LocationFilter_MustNotHaveLOS
// 0x0000 (0x003C - 0x003C)
class ULocationFilter_MustNotHaveLOS : public ULocationFilter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3220 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.MindTargetInfo
// 0x009C (0x00D8 - 0x003C)
class UMindTargetInfo : public UObject
{
public:
	class AActor*                                      Target;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShouldRemove : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanSeeOrHearTarget : 1;                          		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      bCanFireAt;                                       		// 0x0048 (0x0001) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              OnePriority;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              TargetExposureToMe;                               		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              MyExposureToTarget;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FHitTargetRecord >                  HitTargetHistory;                                 		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPriorityDebugStruct >              PriorityDebugRecords;                             		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFlag                                       IAmConsciousOfTarget;                             		// 0x0074 (0x0010) [0x0000000000000000]              
	float                                              IAmConsciousTime;                                 		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FFlag                                       TargetHasShotAtMeRecently;                        		// 0x0088 (0x0010) [0x0000000000000000]              
	struct FFlag                                       TargetOccludedBySmoke;                            		// 0x0098 (0x0010) [0x0000000000000000]              
	struct FFlag                                       IHaveSeenOrKnownThisTargetBefore;                 		// 0x00A8 (0x0010) [0x0000000000000000]              
	struct FSmartVector                                LastVisibleOrAudibleLocation;                     		// 0x00B8 (0x001C) [0x0000000000000000]              
	float                                              BonusPriority;                                    		// 0x00D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3222 ];

		return pClassPointer;
	};

	float GetAverageHitTime ( );
	void AddHitTargetRecord ( struct FVector vecNewHitLoc, float flNewDamage );
};

// Class GearboxFramework.Rule
// 0x00C0 (0x00FC - 0x003C)
class URule : public UObject
{
public:
	class URuleEngine*                                 MyRuleEngine;                                     		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Priority;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                BasePriority;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	class UActionSequence*                             StartingSequenceTemplate;                         		// 0x0048 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	unsigned long                                      RuleEnabled : 1;                                  		// 0x004C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      StopWhenStateCodeRunsOut : 1;                     		// 0x004C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      AlwaysExecute : 1;                                		// 0x004C (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bInitialized : 1;                                 		// 0x004C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bIsRunning : 1;                                   		// 0x004C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bCanRunMultipleInstances : 1;                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsTransferable : 1;                              		// 0x004C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bRestartable : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bBlockRuleSetChange : 1;                          		// 0x004C (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      WasTransferred : 1;                               		// 0x004C (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned char                                      ExecutionPattern;                                 		// 0x0050 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                TimeToWaitBeforeFirstExecution;                   		// 0x0054 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                TimeToWaitBeforeNextExecution;                    		// 0x0064 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxTimeToExecute;                                 		// 0x0074 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaxNumberOfExecutions;                            		// 0x0084 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FFlagEvalORConnector >              CanExecuteConditionals;                           		// 0x0088 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FFlagEvalORConnector >              ShouldStopConditionals;                           		// 0x0094 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	class UExpressionEvaluator*                        CanExecuteExpression;                             		// 0x00A0 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UExpressionEvaluator*                        ShouldStopExpression;                             		// 0x00A4 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UActionSequence*                             MyActionSequence;                                 		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAIFactoryBase*                              TheAIFactory;                                     		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URuleEventDef*                               MyRuleEventDef;                                   		// 0x00B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UClass* >                            AssociatedKnowledgeRecords;                       		// 0x00B4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     FlagDebugString;                                  		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       RuleName;                                         		// 0x00CC (0x0008) [0x0000000000000000]              
	class UObject*                                     OtherEventParticipantObject;                      		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FFlag                                       IsTimingRestrictedNow;                            		// 0x00D8 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumExecutions;                                    		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     RuleEventDefPath;                                 		// 0x00EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              StartExecutionTimeStamp;                          		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3224 ];

		return pClassPointer;
	};

	struct FString GetRuleName ( );
	struct FName GetRuleFName ( );
	class UObject* GetOtherEventParticipant ( );
};

// Class GearboxFramework.RuleContainer
// 0x000C (0x0108 - 0x00FC)
class URuleContainer : public URule
{
public:
	class URuleSet*                                    RuleSetTemplate;                                  		// 0x00FC (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class URuleSet*                                    CurRuleSet;                                       		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      AllowAllEventsThrough : 1;                        		// 0x0104 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3226 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RulePlaceholder
// 0x0000 (0x00FC - 0x00FC)
class URulePlaceholder : public URule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3228 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RuleEngine
// 0x00FC (0x0138 - 0x003C)
class URuleEngine : public UObject
{
public:
	struct FPointer                                    VfTable_IIFlagProvider;                           		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAIFactoryBase*                              TheAIFactory;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	class AActor*                                      ActorProxy;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              ThinkRate;                                        		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ElapsedTime;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              TickRate;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	class URuleSet*                                    RuleSetTemplate;                                  		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URuleSet*                                    CurRuleSet;                                       		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URuleSet*                                    PendingRuleSetTemplate;                           		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< struct FFlagDefinitionInitialization >     FlagInitialization;                               		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UFlagDefinition* >                   DynamicFlagDefinitions;                           		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FDynamicFlagInstanceData >          DynamicFlags;                                     		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0084 (0x003C) UNKNOWN PROPERTY: MapProperty GearboxFramework.RuleEngine.DynamicFlagDefLookup
	TArray< class UKnowledgeRecord* >                  KnowledgeDB;                                      		// 0x00C0 (0x000C) [0x0000000004400000]              ( CPF_NeedCtorLink | CPF_EditInline )
	TArray< class URule* >                             RunningRules;                                     		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            ResourcesInUse;                                   		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bRulesEnabled : 1;                                		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasDebugFocus : 1;                               		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bVerboseLoggingEnabled : 1;                       		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInitialized : 1;                                 		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DoLoadBalancing : 1;                              		// 0x00E4 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bForceFullUpdate : 1;                             		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      OnlyIterateRulesForEvents : 1;                    		// 0x00E4 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      bEventsCausedKnowledgeRecordUpdate : 1;           		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      EnableSnapshots : 1;                              		// 0x00E4 (0x0004) [0x0000000000000002] [0x00000100] ( CPF_Const )
	class UAITracker*                                  MyTracker;                                        		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< class URuleSet* >                          RuleSetStack;                                     		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventRecord >                      QueuedRuleEvents;                                 		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastFullUpdateTime;                               		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                MaxRuleSetPasses;                                 		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            KRCache;                                          		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LastTargetIteratorTime;                           		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              LastTargetIteratorRuleEvalDiffTime;               		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              AverageTargetIteratorRuleEvalDiffTime;            		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              WorstTargetIteratorRuleEvalDiffTime;              		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              ActivateTime;                                     		// 0x0128 (0x0004) [0x0000000000000000]              
	TArray< struct FRuleSetReference >                 RuleSetReferences;                                		// 0x012C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3230 ];

		return pClassPointer;
	};

	void ApplyFlagInitializationData ( TArray< struct FFlagDefinitionInitialization >* FlagsToSet );
	bool IsResourceInUse ( class UClass* TestResourceClass );
	class UObject* GetContextSource ( );
	bool IsRunningRuleWhichBlocksRuleSetChange ( );
	bool GetDynamicFlagValue ( class UFlagDefinition* FlagDefinition );
	void SetDynamicFlagDefTrueTimed ( class UFlagDefinition* FlagDefinition, float Time );
	void SetDynamicFlagDefValue ( class UFlagDefinition* FlagDefinition, unsigned long Value );
	class URuleSet* GetRuleSetFromReference ( struct FName ReferenceName );
	void ClearRuleSetStack ( );
	void PopRuleSetSwitch ( );
	bool PushRuleSetSwitch ( class URuleSet* NewRuleSetTemplate );
	void SetRuleSet ( class URuleSet* NewRuleSetTemplate );
	void SwitchActiveRuleSet ( class URuleSet* NewRuleSetTemplate );
	void UpdateKnowledge ( class UClass* pKnowledgeRecordType );
	int ActivateEventRuleEx ( struct FName EventDefName, TArray< class AGearboxPawn* > Participants, class AActor* Subject, unsigned long CastSizeMustMatch );
	void CleanUpRuleEngineData ( );
	int ActivateEventRule ( struct FName EventDefName, class AGearboxPawn* Instigator, class AActor* Subject, unsigned long CastSizeMustMatch );
	int ActivateEventRuleByDefinition ( class URuleEventDef* EventDefinition, class UObject* OtherEventParticipantObject );
};

// Class GearboxFramework.GearboxRuleEngine
// 0x0008 (0x0140 - 0x0138)
class UGearboxRuleEngine : public URuleEngine
{
public:
	class AGearboxPawn*                                MyGearboxPawn;                                    		// 0x0138 (0x0004) [0x0000000000000000]              
	class AGearboxMind*                                MyGearboxMind;                                    		// 0x013C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3232 ];

		return pClassPointer;
	};

	void Initialize ( class AGearboxPawn* NewGearboxPawn, class AGearboxMind* NewMind, class UGearboxAIFactory* NewAIFactory );
	class UObject* GetContextSource ( );
};

// Class GearboxFramework.RuleEventDef
// 0x0030 (0x006C - 0x003C)
class URuleEventDef : public UGBXDefinition
{
public:
	struct FName                                       EventDefName;                                     		// 0x003C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FFlagDefinitionInitialization               FlagActionOnEventTrigger;                         		// 0x0044 (0x0028) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3234 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RuleSet
// 0x0058 (0x0094 - 0x003C)
class URuleSet : public UObject
{
public:
	class UAIFactoryBase*                              TheAIFactory;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class URule* >                             RuleTemplateRefs;                                 		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class URule* >                             Rules;                                            		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class URulePlaceholder* >                  ToDiscard;                                        		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInitialized : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNewRuleEvaluationEnabled : 1;                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       RuleSetName;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
	TArray< struct FFlagDefinitionInitialization >     FlagsOnEntry;                                     		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFlagDefinitionInitialization >     FlagsOnExit;                                      		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class URuleSet* >                          HACK_RuleSetsAllowedToFollow;                     		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3236 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.StateRuleSet
// 0x001C (0x00B0 - 0x0094)
class UStateRuleSet : public URuleSet
{
public:
	TArray< class URule* >                             StateRules;                                       		// 0x0094 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bShowPawnInRadarWhenActive : 1;                   		// 0x00A0 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< struct FStateAttributeData >               StateAttributeMap;                                		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3238 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3240 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_Any
// 0x0000 (0x003C - 0x003C)
class USearchDirection_Any : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3242 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_AwayFromMe
// 0x0000 (0x003C - 0x003C)
class USearchDirection_AwayFromMe : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3244 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_AwayFromTarget
// 0x0000 (0x003C - 0x003C)
class USearchDirection_AwayFromTarget : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3246 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_MyFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_MyFacingDirection : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3248 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_OppositeMyFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_OppositeMyFacingDirection : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3250 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_OppositeTargetsFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_OppositeTargetsFacingDirection : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3252 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_RandomLeftOrRight
// 0x0000 (0x003C - 0x003C)
class USearchDirection_RandomLeftOrRight : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3254 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_TargetsFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TargetsFacingDirection : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3256 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_ToMyLeft
// 0x0000 (0x003C - 0x003C)
class USearchDirection_ToMyLeft : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3258 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_ToMyRight
// 0x0000 (0x003C - 0x003C)
class USearchDirection_ToMyRight : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3260 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_TowardMe
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TowardMe : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3262 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchDirection_TowardTarget
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TowardTarget : public USearchDirection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3264 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchOrigin
// 0x0000 (0x003C - 0x003C)
class USearchOrigin : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3266 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchOrigin_CurrentLocation
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_CurrentLocation : public USearchOrigin
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3268 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchOrigin_ScriptedMoveTarget
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_ScriptedMoveTarget : public USearchOrigin
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3270 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SearchOrigin_TargetLocation
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_TargetLocation : public USearchOrigin
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3272 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SnapshotRecord
// 0x0CC0 (0x0D00 - 0x0040)
class USnapshotRecord : public USnapshotInterface
{
public:
	struct FName                                       MyName;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       RuleSet;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	TArray< struct FRuleInfo >                         CurrentRules;                                     		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRuleInfo                                   ContainedRules[ 0x2D ];                           		// 0x005C (0x0BF4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedRuleIdx;                                  		// 0x0C50 (0x0004) [0x0000000000000000]              
	int                                                SelectedSubRuleIdx;                               		// 0x0C54 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             ResourcesInUse;                                   		// 0x0C58 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             Flags;                                            		// 0x0C64 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Location;                                         		// 0x0C70 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0C7C (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0C88 (0x000C) [0x0000000000000000]              
	struct FName                                       RuleAffected;                                     		// 0x0C94 (0x0008) [0x0000000000000000]              
	struct FName                                       Rule2Affected;                                    		// 0x0C9C (0x0008) [0x0000000000000000]              
	struct FName                                       SequenceAffected;                                 		// 0x0CA4 (0x0008) [0x0000000000000000]              
	struct FName                                       Sequence2Affected;                                		// 0x0CAC (0x0008) [0x0000000000000000]              
	unsigned char                                      Event;                                            		// 0x0CB4 (0x0001) [0x0000000000000000]              
	struct FName                                       RuleStartName;                                    		// 0x0CB8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       RuleEndName;                                      		// 0x0CC0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       RuleInterruptName;                                		// 0x0CC8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       ChildSequenceStartName;                           		// 0x0CD0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       SwitchRuleSetName;                                		// 0x0CD8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PreventNewRulesName;                              		// 0x0CE0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      RunningRulesColor;                                		// 0x0CE8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      StalledRulesColor;                                		// 0x0CEC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      NotRunningRulesColor;                             		// 0x0CF0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      DisabledRulesColor;                               		// 0x0CF4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      FlagsColor;                                       		// 0x0CF8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      ResourcesColor;                                   		// 0x0CFC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3274 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxPawnSnapshotRecord
// 0x02CC (0x0FCC - 0x0D00)
class UGearboxPawnSnapshotRecord : public USnapshotRecord
{
public:
	float                                              PawnIconZOffset;                                  		// 0x0D00 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PawnExposureZOffset;                              		// 0x0D04 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CollectionNameOffset;                             		// 0x0D08 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      LastVisibleConnectionColor;                       		// 0x0D0C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      RouteColor;                                       		// 0x0D10 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      OriginalRouteColor;                               		// 0x0D14 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      DestLineColor;                                    		// 0x0D18 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BestCoverColor;                                   		// 0x0D1C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      PotentialCoverColor;                              		// 0x0D20 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      StandardCoverColor;                               		// 0x0D24 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  AIDebugTexture;                                   		// 0x0D28 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       MyPawnName;                                       		// 0x0D2C (0x0008) [0x0000000000000000]              
	struct FName                                       MyArchetypeName;                                  		// 0x0D34 (0x0008) [0x0000000000000000]              
	float                                              CurrentHealth;                                    		// 0x0D3C (0x0004) [0x0000000000000000]              
	float                                              MaxHealth;                                        		// 0x0D40 (0x0004) [0x0000000000000000]              
	float                                              DistanceToBestTarget;                             		// 0x0D44 (0x0004) [0x0000000000000000]              
	TArray< struct FAwarenessInfo >                    AwarenessZones;                                   		// 0x0D48 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       AwarenessCollectionName;                          		// 0x0D54 (0x0008) [0x0000000000000000]              
	class AActor*                                      BestTarget;                                       		// 0x0D5C (0x0004) [0x0000000000000000]              
	TArray< struct FLocationInfo >                     TargetLocs;                                       		// 0x0D60 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLastVisibleInfo >                  LastVisibleTargetLocs;                            		// 0x0D6C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       AnimTree;                                         		// 0x0D78 (0x0008) [0x0000000000000000]              
	TArray< struct FBoneAtom >                         Bones;                                            		// 0x0D80 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocationInfo >                     ForgottenTargets;                                 		// 0x0D8C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       NewEnemyName;                                     		// 0x0D98 (0x0008) [0x0000000000000000]              
	struct FName                                       NewEnemyArchName;                                 		// 0x0DA0 (0x0008) [0x0000000000000000]              
	unsigned char                                      NewEnemyAwarenessReason;                          		// 0x0DA8 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentMoveSpeed;                                 		// 0x0DA9 (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxDesiredMoveSpeed;                              		// 0x0DAA (0x0001) [0x0000000000000000]              
	unsigned char                                      ReasonForMovementFinish;                          		// 0x0DAB (0x0001) [0x0000000000000000]              
	TArray< struct FDebugExposure >                    Exposure;                                         		// 0x0DAC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               DummyMesh;                                        		// 0x0DB8 (0x0004) [0x0000000000000000]              
	int                                                DummyMesh_LOD;                                    		// 0x0DBC (0x0004) [0x0000000000000000]              
	TArray< struct FViewConeInfo >                     TargetViewCones;                                  		// 0x0DC0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     PawnLocalDestination;                             		// 0x0DCC (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           FailedMoveSpots;                                  		// 0x0DD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           RouteCache;                                       		// 0x0DE4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           OriginalRouteCache;                               		// 0x0DF0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSmartVector                                DesiredCoverLocation;                             		// 0x0DFC (0x001C) [0x0000000000000000]              
	struct FSmartVector                                CurrentCoverLocation;                             		// 0x0E18 (0x001C) [0x0000000000000000]              
	struct FSmartVector                                ScriptedMoveTargetLocation;                       		// 0x0E34 (0x001C) [0x0000000000000000]              
	float                                              CoverSearchInnerRadius;                           		// 0x0E50 (0x0004) [0x0000000000000000]              
	float                                              CoverSearchOuterRadius;                           		// 0x0E54 (0x0004) [0x0000000000000000]              
	float                                              CoverSearchAngle;                                 		// 0x0E58 (0x0004) [0x0000000000000000]              
	struct FSmartVector                                CoverSearchOrigin;                                		// 0x0E5C (0x001C) [0x0000000000000000]              
	struct FVector                                     CoverSearchDirection;                             		// 0x0E78 (0x000C) [0x0000000000000000]              
	TArray< struct FCoverDebugInfo >                   CoverSlotDebugList;                               		// 0x0E84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      CoverSearchWasFinalized : 1;                      		// 0x0E90 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FIconData                                   ICON_BLUELOCATION;                                		// 0x0E94 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_YELLOWLOCATION;                              		// 0x0EA8 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_QUESTIONMARK;                                		// 0x0EBC (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_EXCLAMATIONPOINT;                            		// 0x0ED0 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_REDARROW;                                    		// 0x0EE4 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_GREENARROW;                                  		// 0x0EF8 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_FAILED_MOVE_DEST;                            		// 0x0F0C (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_GREENCIRCLE;                                 		// 0x0F20 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_PATHPOINT;                                   		// 0x0F34 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_CURRENTCOVER;                                		// 0x0F48 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_DESIREDCOVER;                                		// 0x0F5C (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FIconData                                   ICON_SCRIPTEDMOVETARGET;                          		// 0x0F70 (0x0014) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTargetDebugDatum >                 TargetData;                                       		// 0x0F84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIHoldDebugData >                  Holds;                                            		// 0x0F90 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIHoldDebugData >                  TargetHolds;                                      		// 0x0F9C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIHoldDebugData >                  MovementHolds;                                    		// 0x0FA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIHoldDebugData >                  DemigodHolds;                                     		// 0x0FB4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAIHoldDebugData >                  GodHolds;                                         		// 0x0FC0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3276 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetingDefinition
// 0x002C (0x0068 - 0x003C)
class UTargetingDefinition : public UGBXDefinition
{
public:
	TArray< class UTI_Calc* >                          Knowledge;                                        		// 0x003C (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UTI_Prioritize* >                    Prioritization;                                   		// 0x0048 (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UExpressionEvaluator*                        CanTargetIf;                                      		// 0x0054 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UExpressionEvaluator*                        StopTargetingIf;                                  		// 0x0058 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	unsigned long                                      bCanTargetFriendlies : 1;                         		// 0x005C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOverrideSearchRadius : 1;                        		// 0x005C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class UExpressionEvaluator*                        CanTargetFriendliesIf;                            		// 0x0060 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	float                                              SearchRadius;                                     		// 0x0064 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3278 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIterator
// 0x0010 (0x004C - 0x003C)
class UTargetIterator : public UObject
{
public:
	unsigned char                                      IteratorType;                                     		// 0x003C (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     BarGraphShortName;                                		// 0x0040 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3280 ];

		return pClassPointer;
	};

	void eventRecordEvalCallback ( class URuleEngine* EvalRuleEngine );
};

// Class GearboxFramework.TargetIteratorCalculateDistance
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCalculateDistance : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3282 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorCalculateExposure
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCalculateExposure : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3284 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorCheckAwareness
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCheckAwareness : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3286 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorCheckRemoveTarget
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCheckRemoveTarget : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3288 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorForgetAboutTarget
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorForgetAboutTarget : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3290 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeTargetsIAmExposedTo
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorPrioritizeTargetsIAmExposedTo : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3292 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TI_Calc
// 0x0000 (0x004C - 0x004C)
class UTI_Calc : public UTargetIterator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3294 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TI_Prioritize
// 0x0004 (0x0050 - 0x004C)
class UTI_Prioritize : public UTargetIterator
{
public:
	float                                              Weight;                                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3296 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeExposedTargets
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeExposedTargets : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3298 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeHumanTargets
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeHumanTargets : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3300 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeNearbyTarget
// 0x0004 (0x0054 - 0x0050)
class UTargetIteratorPrioritizeNearbyTarget : public UTI_Prioritize
{
public:
	float                                              MaxDistance;                                      		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3302 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizePreviousTarget
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizePreviousTarget : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3304 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeTargetNotBeingShotAt
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeTargetNotBeingShotAt : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3306 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeTargetWhoShootsAtMe
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeTargetWhoShootsAtMe : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3308 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TI_PrioritizeBonus
// 0x0000 (0x0050 - 0x0050)
class UTI_PrioritizeBonus : public UTI_Prioritize
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3310 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.TI_PrioritizeConditional
// 0x0004 (0x0054 - 0x0050)
class UTI_PrioritizeConditional : public UTI_Prioritize
{
public:
	class UExpressionEvaluator*                        Condition;                                        		// 0x0050 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3312 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_PopulationOpportunityLink
// 0x000C (0x00C0 - 0x00B4)
class UGearboxSeqAct_PopulationOpportunityLink : public USeqAct_Latent
{
public:
	TArray< class APopulationOpportunity* >            CloneOpportunities;                               		// 0x00B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3314 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.IPopulationSpawnPoint
// 0x0000 (0x003C - 0x003C)
class UIPopulationSpawnPoint : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3316 ];

		return pClassPointer;
	};

	float GetInitialMovementHoldTime ( );
	class AActor* GetInitialDestination ( );
	unsigned char GetInitialActionType ( );
	unsigned char GetSpawnStyleType ( );
};

// Class GearboxFramework.PopulationDefinition
// 0x0018 (0x0054 - 0x003C)
class UPopulationDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIConstructObject;                        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FPopulationActor >                  ActorArchetypeList;                               		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      RespawnStyle;                                     		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTotalResetOnLevelLoad : 1;                       		// 0x0050 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3318 ];

		return pClassPointer;
	};

	bool IsAllSpawnTypesDebugEnabled ( );
	void ToggleAllSpawnTypesDebug ( );
	class UPopulationFactory* GetRandomFactory ( class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity );
};

// Class GearboxFramework.PopulationFactory
// 0x001C (0x0058 - 0x003C)
class UPopulationFactory : public UObject
{
public:
	struct FPointer                                    VfTable_IIConstructObject;                        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< class UBehaviorBase* >                     OnActorSpawn;                                     		// 0x0040 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	struct FDestructionParameters                      DestructionParams;                                		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bIsCriticalActor : 1;                             		// 0x0050 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bUseSavedLocationWhenRestored : 1;                		// 0x0050 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      UseCostOverride : 1;                              		// 0x0050 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	int                                                SpawnCostOverride;                                		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3320 ];

		return pClassPointer;
	};

	struct FString eventGetDescriptionOfFactoryOutput ( );
	bool eventShouldSavePopulationActor ( class UPopulationMaster* Master, class AActor* ActorToSave );
	bool eventDestroyPopulationActor ( class UPopulationMaster* Master, int nOpportunityIdx, class AActor* ActorToDestroy, class UPopulationFactory* SpawnFactory, int CreationFlags, unsigned long bDontSaveActor );
	class AActor* eventCreatePopulationActor ( class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, struct FVector SpawnLocation, struct FRotator SpawnRotation, int GameStage, int Rarity );
	struct FBoxSphereBounds eventGetSpawnVisibilityBounds ( int GameStage, int Rarity );
	class UPawnAllegiance* GetActorAllegiance ( int GameStage, int Rarity );
	int eventGetActorSpawnCost ( int GameStage, int Rarity, unsigned long bCanSpawnTest );
	void eventOnSpawnActor ( class AActor* aNewActor );
	void eventSetupMatineeForActor ( class AActor* aNewActor );
	class UPopulationFactory* GetSpawnFactory ( class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity );
	float GetSpawnProbabilityAtThisGameStage ( int GameStage, int Rarity );
	bool IsFactoryWithin ( class UPopulationFactory* TestFactory );
	bool CanSpawn ( class APopulationOpportunity* SpawningOpportunity );
};

// Class GearboxFramework.PopulationFactoryGeneric
// 0x0004 (0x005C - 0x0058)
class UPopulationFactoryGeneric : public UPopulationFactory
{
public:
	class AActor*                                      ActorArchetype;                                   		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3322 ];

		return pClassPointer;
	};

	class AActor* eventCreatePopulationActor ( class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, struct FVector SpawnLocation, struct FRotator SpawnRotation, int GameStage, int Rarity );
	struct FBoxSphereBounds eventGetSpawnVisibilityBounds ( int GameStage, int Rarity );
};

// Class GearboxFramework.PopulationFactoryPopulationDefinition
// 0x0004 (0x005C - 0x0058)
class UPopulationFactoryPopulationDefinition : public UPopulationFactory
{
public:
	class UPopulationDefinition*                       PopulationDef;                                    		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3324 ];

		return pClassPointer;
	};

	class UPopulationFactory* GetSpawnFactory ( class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity );
	class UPawnAllegiance* GetActorAllegiance ( int GameStage, int AwesomeLevel );
	bool IsFactoryWithin ( class UPopulationFactory* TestFactory );
};

// Class GearboxFramework.PopulationMaster
// 0x004C (0x0088 - 0x003C)
class UPopulationMaster : public UObject
{
public:
	TArray< struct FPopulationOpportunityTracker >     OpportunityList;                                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActiveActorCost;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                MaxActorCost;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              MasterThinkRate;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              MasterTestForDestroyRate;                         		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              IfIrrelevantDestroyTimeout;                       		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FPopulationMasterStat >             PopulationMasterStats;                            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEncounterTracker >                 EncounterList;                                    		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SecondsElapsed;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              NextOpportunityTickTime;                          		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              NextDestroyTestTickTime;                          		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              PopulationRespawnDelayInSeconds;                  		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasActorsReadyToDeleteIfSpaceIsNeeded : 1;       		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShutdownAIWhenIrrelevant : 1;                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3326 ];

		return pClassPointer;
	};

	class AActor* GetActorSpawnedFromOpportunity ( class APopulationOpportunity* Opportunity, int ActorIndex );
	void GetSavedActorDebugInfoForOpportunity ( int OpportunityIndex, TArray< struct FString >* SavedActorsDebugInfo );
	int GetNumberOfSavedActorsForOpportunity ( int OpportunityIndex );
	bool WillActorsOpportunityBeResetOnLevelLoad ( class AActor* TestActor );
	void ResetRespawn ( );
	class ULevelStreaming* GetStreamingLevelForActor ( class AActor* OpportunityInLevel );
	bool HasCapacityToSpawnFromFactories ( int GameStage, int Rarity, TArray< class UPopulationFactory* >* TheFactories );
	bool HasCapacityToSpawnFromFactory ( class UPopulationFactory* TheFactory, int GameStage, int Rarity );
	bool IsPopulationSystemAtCapacity ( );
	void StatProfileStop ( int nStat );
	void StatProfileStart ( int nStat );
	float GetStatProfileTime ( int nStat );
	void AddSavedActor ( int OpportunityIdx, class AActor* TheActor, class UPopulationFactory* SpawnFactory, int CreationFlags );
	void DisconnectEncounter ( class APopulationEncounter* Encounter );
	void ConnectEncounter ( class APopulationEncounter* Encounter );
	bool DisconnectOpportunity ( class APopulationOpportunity* DeactivatedOpportunity, unsigned long bSaveState );
	bool ConnectOpportunity ( class APopulationOpportunity* ActivatedOpportunity );
	class AWorldInfo* GetWorldInfo ( );
	void DestroySpawnedActors ( class APopulationOpportunity* Opportunity, unsigned long bDontSaveActors );
	void RemoveSpawnedActor ( class AActor* TheActor, unsigned long bKeepBody, unsigned long bActorDied );
	void SetSpawnedActorsReuse ( class AActor* TheActor, unsigned long bReuse );
	void AddExternalActor ( class AActor* SpawnedActor, class UClass* FactoryClass );
	class AActor* SpawnActorFromOpportunity ( class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, struct FVector SpawnLocation, struct FRotator SpawnRotation, int GameStage, int Rarity, int OpportunityIdx, int PopOppFlags, unsigned long bCanSave, unsigned long bForceSpawn );
	class AActor* SpawnActor ( class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, struct FVector SpawnLocation, struct FRotator SpawnRotation, int GameStage, int Rarity );
	int GetPopulationOpportunityIndex ( class APopulationOpportunity* Opportunity );
	class APopulationOpportunity* GetActorsOpportunity ( class AActor* SpawnedActor );
	class AActor* SpawnPopulationControlledActor ( class UClass* SpawnClass, class AActor* SpawnOwner, struct FName SpawnTag, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* ActorTemplate, unsigned long bNoCollisionFail, unsigned long bPersistAcrossLevelTransitions );
};

// Class GearboxFramework.PopulationOpportunity
// 0x005C (0x01E4 - 0x0188)
class APopulationOpportunity : public AInfo
{
public:
	struct FPointer                                    VfTable_IIBodyCompositionInstance;                		// 0x0188 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FOpportunityCleanupParameters               CleanupParams;                                    		// 0x018C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      IsEnabled : 1;                                    		// 0x0194 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNoRespawning : 1;                                		// 0x0194 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bIsWaitingForRespawn : 1;                         		// 0x0194 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bUseRandomSpawns : 1;                             		// 0x0194 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	TArray< class APopulationPoint* >                  SpawnPoints;                                      		// 0x0198 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ULevelStreaming*                             StreamingLevel;                                   		// 0x01A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SystemID;                                         		// 0x01A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NextInitialDestinationIdx;                        		// 0x01AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGearboxSeqAct_PopulationOpportunityLink*    SequenceActionLink;                               		// 0x01B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastTimeBlockedFromSpawningDueToPopLimits;        		// 0x01B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RespawnDelayStartTime;                            		// 0x01B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URegionDefinition*                           GameStageRegion;                                  		// 0x01BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPopulationAspect*                           Aspect;                                           		// 0x01C0 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                SpawnIndex;                                       		// 0x01C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      SpawnList;                                        		// 0x01C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                InclusiveSpawnIndex;                              		// 0x01D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      InclusiveSpawnList;                               		// 0x01D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3328 ];

		return pClassPointer;
	};

	void ClearBodyCompositionInstance ( );
	void ApplyPreviewBodyComposition ( );
	class UIBodyInfoProvider* GetBodyInfoProvider ( );
	void ChangeInstanceDataSwitch ( struct FName SwitchName, unsigned char NewValue );
	void PostInitBodyComposition ( struct FName Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode );
	void PreRemoveBodyComposition ( struct FName Identifier, class UObject* Value, int BodyCompositionIndex );
	float GetNumSpawned ( );
	float GetNumAlive ( );
	float GetNumDied ( );
	void eventDestroyed ( );
	int GetRarity ( );
	int GetGameStage ( );
	bool GetOpportunityGameStage ( int* GameStage, int* Rarity );
	void eventTriggerKismetAllSpawnedEvent ( );
	void eventClearSequenceActionLink ( );
	void eventSetSequenceActionLink ( class UGearboxSeqAct_PopulationOpportunityLink* Link );
	void SetEnabledStatus ( unsigned long bEnable );
	void OnToggle ( class USeqAct_Toggle* Action );
	void GetNumLeftToSpawnAndStillAlive ( int* NumLeftToSpawn, int* NumStillAlive );
	float GetNextSpawnTime ( );
	void RespawnKilledActors ( float PercentageOfKilledActorsToRespawn );
	void DoSpawning ( class UPopulationMaster* PopMaster );
};

// Class GearboxFramework.PopulationOpportunityArea
// 0x0040 (0x0224 - 0x01E4)
class APopulationOpportunityArea : public APopulationOpportunity
{
public:
	TArray< struct FPopulationOptionAreaData >         SpawnOptions;                                     		// 0x01E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bContinueSpawningAfterPlayerDetected : 1;         		// 0x01F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOpportunityVolume : 1;                           		// 0x01F0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOpportunityRadius : 1;                           		// 0x01F0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOpportunityLevel : 1;                            		// 0x01F0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bPlayerHasBeenDetected : 1;                       		// 0x01F0 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	TArray< class AVolume* >                           DetectionVolumes;                                 		// 0x01F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DetectionRadius;                                  		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SelectedSpawnIdx;                                 		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPopulationAreaOptionSpawnData >    SpawnData;                                        		// 0x0208 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class APlayerController* >                 PlayersDetected;                                  		// 0x0214 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                NumPlayersDetected;                               		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3330 ];

		return pClassPointer;
	};

	void ApplyPreviewBodyComposition ( );
	class UIBodyInfoProvider* GetBodyInfoProvider ( );
	void RespawnKilledActors ( float PercentageOfKilledActorsToRespawn );
	void DoSpawning ( class UPopulationMaster* PopMaster );
};

// Class GearboxFramework.PopulationOpportunityCloner
// 0x0028 (0x020C - 0x01E4)
class APopulationOpportunityCloner : public APopulationOpportunity
{
public:
	class UExpressionEvaluator*                        Conditions;                                       		// 0x01E4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UPopulationFactory*                          SpawnFactory;                                     		// 0x01E8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                MaxTotalActors;                                   		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxActiveActors;                                  		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RespawnStyle;                                     		// 0x01F4 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTotalResetOnLevelLoad : 1;                       		// 0x01F8 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bReadyToSpawn : 1;                                		// 0x01F8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              RespawnDelay;                                     		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RespawnDelayAfterDeath;                           		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumTotalActors;                                   		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumActiveActors;                                  		// 0x0208 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3332 ];

		return pClassPointer;
	};

	void ApplyPreviewBodyComposition ( );
	class UIBodyInfoProvider* GetBodyInfoProvider ( );
	void CloneTimer ( );
	void RespawnKilledActors ( float PercentageOfKilledActorsToRespawn );
	void DoSpawning ( class UPopulationMaster* PopMaster );
};

// Class GearboxFramework.PopulationOpportunityCombat
// 0x009C (0x0280 - 0x01E4)
class APopulationOpportunityCombat : public APopulationOpportunity
{
public:
	struct FPointer                                    VfTable_IIGbxMessageListener;                     		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class APopulationEncounter*                        ParentEncounter;                                  		// 0x01E8 (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	int                                                ParentEncounterWave;                              		// 0x01EC (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	class UPopulationDefinition*                       PopulationDef;                                    		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MaxTotalActorsFormula;                            		// 0x01F4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxTotalActors;                                   		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                MaxActiveActorsIsNormal;                          		// 0x0208 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxActiveActorsThreatened;                        		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                RespawnDelayFormula;                              		// 0x0210 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAdjustForPlayerCount : 1;                        		// 0x0220 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOpportunityVolume : 1;                           		// 0x0220 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOpportunityRadius : 1;                           		// 0x0220 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayerHasBeenDetected : 1;                       		// 0x0220 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bShowDebugEnabled : 1;                            		// 0x0220 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< class AVolume* >                           DetectionVolumes;                                 		// 0x0224 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DetectionRadius;                                  		// 0x0230 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OpportunityHeight;                                		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      RadiusDebugColor;                                 		// 0x0238 (0x0004) [0x0000000000000000]              
	float                                              RespawnDelay;                                     		// 0x023C (0x0004) [0x0000000000000000]              
	class UDrawSphereComponent*                        DetectionDrawSphere;                              		// 0x0240 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              ActivePlayerScale;                                		// 0x0244 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AGearboxPawn* >                      SpawnedMembers;                                   		// 0x0248 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPopulationOptionSpawnData                  SpawnData;                                        		// 0x0254 (0x001C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class APlayerController* >                 PlayersDetected;                                  		// 0x0270 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                NumPlayersDetected;                               		// 0x027C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3334 ];

		return pClassPointer;
	};

	void ApplyPreviewBodyComposition ( );
	class UIBodyInfoProvider* GetBodyInfoProvider ( );
	void eventTriggerKismetSingleDeathEvent ( );
	void eventTriggerKismetDeathEvent ( );
	float GetNumSpawned ( );
	float GetNumAlive ( );
	float GetNumDied ( );
	bool WantsToStopListening ( );
	class AActor* GetActor ( );
	struct FVector GetListenerLocation ( );
	class UPawnAllegiance* GetAllegiance ( );
	bool ReceiveMessage ( class UGbxMessage* Message );
	bool CaresAboutMessage ( class UGbxMessage* Message );
	void PostBeginPlay ( );
	void EnableDebugging ( unsigned long bEnabled );
	void RespawnKilledActors ( float PercentageOfKilledActorsToRespawn );
	void DoSpawning ( class UPopulationMaster* PopMaster );
};

// Class GearboxFramework.PopulationOpportunityPoint
// 0x002C (0x0210 - 0x01E4)
class APopulationOpportunityPoint : public APopulationOpportunity
{
public:
	struct FPointer                                    VfTable_IIPopulationSpawnPoint;                   		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPopulationDefinition*                       PopulationDef;                                    		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnAndCullRadius;                               		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UBehaviorBase* >                     SpawnCustomizations;                              		// 0x01F0 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      SpawnedForMatinee : 1;                            		// 0x01FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHasSpawned : 1;                                  		// 0x01FC (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bActiveSpawn : 1;                                 		// 0x01FC (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bDetectedPlayer : 1;                              		// 0x01FC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned char                                      AISpawnStyle;                                     		// 0x0200 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      InitialAction;                                    		// 0x0201 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class AActor* >                            InitialActionDestinations;                        		// 0x0204 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3336 ];

		return pClassPointer;
	};

	void ClearBodyCompositionInstance ( );
	void ApplyPreviewBodyComposition ( );
	class UIBodyInfoProvider* GetBodyInfoProvider ( );
	void ChangeInstanceDataSwitch ( struct FName SwitchName, unsigned char NewValue );
	void PostInitBodyComposition ( struct FName Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode );
	void PreRemoveBodyComposition ( struct FName Identifier, class UObject* Value, int BodyCompositionIndex );
	float GetInitialMovementHoldTime ( );
	class AActor* GetInitialDestination ( );
	unsigned char GetInitialActionType ( );
	unsigned char GetSpawnStyleType ( );
	void RespawnKilledActors ( float PercentageOfKilledActorsToRespawn );
	void DoSpawning ( class UPopulationMaster* PopMaster );
};

// Class GearboxFramework.PopulationOpportunityAreaRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityAreaRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3338 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UPopulationOpportunityAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3340 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityPointRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityPointRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3342 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationPoint
// 0x0040 (0x01C8 - 0x0188)
class APopulationPoint : public AActor
{
public:
	struct FPointer                                    VfTable_IIPopulationSpawnPoint;                   		// 0x0188 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                Flags;                                            		// 0x018C (0x0004) [0x0000000000020000]              ( CPF_EditConst )
	unsigned char                                      AISpawnStyle;                                     		// 0x0190 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      InitialAction;                                    		// 0x0191 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      ConstraintType;                                   		// 0x0192 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class AActor* >                            InitialActionDestinations;                        		// 0x0194 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              InitialMovementHoldTime;                          		// 0x01A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bAttachSpawnedToBase : 1;                         		// 0x01A4 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      IsEnabled : 1;                                    		// 0x01A4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableAfterUse : 1;                             		// 0x01A4 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      TestVisibility : 1;                               		// 0x01A4 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      TestFOV : 1;                                      		// 0x01A4 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	int                                                InitialDestinationIndex;                          		// 0x01A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UPopulationSpawnedActorTagDefinition* > TagsToUseWithConstraint;                          		// 0x01AC (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UBehaviorBase* >                     OnSpawnCustomizations;                            		// 0x01B8 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	float                                              MinSpawnDistance;                                 		// 0x01C4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3344 ];

		return pClassPointer;
	};

	bool CanSpawnFromFactory ( class UPopulationFactory* Factory, int GameStage, int AwesomeLevel );
	struct FRotator GetSpawnRotation ( );
	struct FVector GetSpawnLocation ( );
	void ActorSpawned ( class AActor* SpawnedActor );
	float GetInitialMovementHoldTime ( );
	class AActor* GetInitialDestination ( );
	void RandomizeInitialDestinations ( );
	unsigned char GetInitialActionType ( );
	unsigned char GetSpawnStyleType ( );
	void OnToggle ( class USeqAct_Toggle* Action );
};

// Class GearboxFramework.PopulationPoint_Dynamic
// 0x000C (0x01D4 - 0x01C8)
class APopulationPoint_Dynamic : public APopulationPoint
{
public:
	struct FName                                       DynamicPointName;                                 		// 0x01C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSaveAsInstanceDataOnBase : 1;                    		// 0x01D0 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3346 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationPointRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationPointRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3348 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_EncounterWaveComplete
// 0x0004 (0x00C8 - 0x00C4)
class USeqEvent_EncounterWaveComplete : public USequenceEvent
{
public:
	int                                                CurrentWave;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3350 ];

		return pClassPointer;
	};

	void NotifyWaveComplete ( int nWave );
};

// Class GearboxFramework.SeqEvent_PopulatedActor
// 0x0008 (0x00CC - 0x00C4)
class USeqEvent_PopulatedActor : public USequenceEvent
{
public:
	class APopulationOpportunity*                      DestPopulationOpportunity;                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	class AActor*                                      SpawnPoint;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3352 ];

		return pClassPointer;
	};

	void eventNotifyPopulatedActor ( class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator );
};

// Class GearboxFramework.SeqEvent_PopulatedPoint
// 0x0008 (0x00CC - 0x00C4)
class USeqEvent_PopulatedPoint : public USequenceEvent
{
public:
	class APopulationOpportunity*                      DestPopulationOpportunity;                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	class AActor*                                      SpawnPoint;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3354 ];

		return pClassPointer;
	};

	void eventNotifyPopulatedActor ( class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator );
};

// Class GearboxFramework.GearboxHUD
// 0x0000 (0x0224 - 0x0224)
class AGearboxHUD : public AHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3356 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIDefinition
// 0x0024 (0x0060 - 0x003C)
class UAIDefinition : public UObject
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                       		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                       		// 0x0040 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	class UAIBehaviorProviderDefinition*               AIBehaviorProviderDefinition;                     		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHealOnReset : 1;                                 		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FAITreeData >                       NodeList;                                         		// 0x004C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              TargetSearchRadius;                               		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UTargetingDefinition*                        TargetingDef;                                     		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3358 ];

		return pClassPointer;
	};

	void OnReset ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnHitByVehicle ( class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnRanOver ( class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTimerEvent ( struct FName SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnKilledPawn ( class UObject* Killed, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnLanded ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnStopFiringWeapon ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnStartFiringWeapon ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTargetLost ( class UObject* OldTarget, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTargetChanged ( class UObject* OldTarget, class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTargetAcquired ( class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnSpawned ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTakeHeal ( class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnVehicleTakeDamage ( class UObject* Instigator, class UObject* HitVehicle, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnTakeDamage ( class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnUserCouldNotAffordSecondary ( unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnUserCouldNotAfford ( unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnSecondaryUsed ( unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnUsed ( unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle );
	void SetBehaviorProviderDefinition ( class UBehaviorProviderDefinition* NewBehaviorProviderDefinition );
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition ( );
};

// Class GearboxFramework.BehaviorEventFilterBase
// 0x0004 (0x0040 - 0x003C)
class UBehaviorEventFilterBase : public UObject
{
public:
	unsigned long                                      ShouldBeInstanced : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3360 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.BehaviorKernel
// 0x0088 (0x00C4 - 0x003C)
class UBehaviorKernel : public UObject
{
public:
	struct FStableArray_Mirror                         Processes;                                        		// 0x003C (0x001C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FChunkedList_Mirror                         ProcessDeathList;                                 		// 0x0058 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FChunkedList_Mirror                         WaitingThreads;                                   		// 0x005C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FProviderRecord >                   Providers;                                        		// 0x0060 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FChunkedList_Mirror                         ProvidersIndexFreeList;                           		// 0x006C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FChunkedList_Mirror                         ProvidersPendingRemoval;                          		// 0x0070 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< class UObject* >                           ObjectVariables;                                  		// 0x0074 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FChunkedList_Mirror                         ObjectVariablesIndexFreeList;                     		// 0x0080 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FBehaviorSequenceActionData2 >      DynamicBehaviors;                                 		// 0x0084 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FChunkedList_Mirror                         DynamicBehaviorsIndexFreeList;                    		// 0x0090 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                ProvidersListReserveLength;                       		// 0x0094 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ObjectVariablesListReserveLength;                 		// 0x0098 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DynamicBehaviorsListReserveLength;                		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                WatchedPID;                                       		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FChunkedList_Mirror                         RecentlyRunBehaviors;                             		// 0x00A4 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                CurrentDebugPage;                                 		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           DebugPages;                                       		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UObject* >                           EventFilterObjects;                               		// 0x00B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3362 ];

		return pClassPointer;
	};

	void RecentlyRunBehaviorsForSequence ( int PID, int ProvidersIndex, int SequencesIndex, struct FBehaviorExecutionRecord* ExecutionRecord );
	void AllEventStateForSequence ( int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorEventState* EventState );
	void AllWaitingThreadsForSequence ( int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorThread* Thread );
	void AllSequencesForProvider ( int PID, int ProvidersIndex, struct FBehaviorSequenceState* SequenceState );
	void AllProvidersForProcess ( int PID, class UBehaviorProviderDefinition** ProviderDefinition, int* ProvidersIndex );
	void AllProcesses ( struct FBehaviorProcess* Process );
	void GetVariableStateSummaryForSequence ( int PID, int SequencesDataIndex, TArray< struct FString >* DebugInfo );
	void GetChunkedListSummaries ( TArray< struct FString >* DebugInfo );
	struct FBehaviorKernelStats GetBehaviorKernelStats ( );
	bool IsBehaviorKernelWatchingConsumer ( struct FBehaviorConsumerHandle ConsumerHandle );
	bool IsBehaviorSequenceEnabled ( class UBehaviorProviderDefinition* ProviderDefinition, struct FName BehaviorSequenceName, struct FBehaviorConsumerHandle* ConsumerHandle );
	void ActivateBehaviorOutputLink ( int OutputLinkId, struct FBehaviorKernelInfo* KernelInfo );
	void PublishBoolOutputVariable ( unsigned long Output, struct FBehaviorKernelInfo* KernelInfo );
	void PublishObjectOutputVariable ( class UObject* Output, struct FBehaviorKernelInfo* KernelInfo );
	void PublishVectorOutputVariable ( struct FBehaviorKernelInfo* KernelInfo, struct FVector* Output );
	void PublishFloatOutputVariable ( float Output, struct FBehaviorKernelInfo* KernelInfo );
	void PublishIntOutputVariable ( int Output, struct FBehaviorKernelInfo* KernelInfo );
	void BeginNondeterministicProviderRegistration ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void ProcessReplicatedBehaviorEvent ( struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorEvent* EventData );
	bool ProcessReplicatedBehaviorConsumerState ( struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorConsumerState* ReplicatedConsumerState );
	void ChangeBehaviorSequenceActivationStatus ( class UBehaviorProviderDefinition* ProviderDefinition, struct FName SequenceName, unsigned char ActivationStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle );
	void ChangeBehaviorConsumerSuspensionStatus ( unsigned char SuspensionStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle );
	void BroadcastBehaviorEventFromScript ( struct FName EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray< class UBehaviorProviderDefinition* >* ProvidersToBroadcast, TArray< struct FBehaviorVariableValue >* Parameters );
	void ActivateBehaviorEventFromScript ( class UBehaviorProviderDefinition* ProviderDefinition, struct FName EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray< struct FBehaviorVariableValue >* Parameters );
	void RemoveBehaviorProviderFromConsumer ( class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle );
	void IntializeBehaviorProviderForConsumer ( class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle );
	void ForceUnregisterBehaviorConsumer ( struct FBehaviorConsumerHandle* ConsumerHandle );
	struct FBehaviorConsumerHandle RegisterBehaviorConsumer ( class UObject* BehaviorConsumer );
};

// Class GearboxFramework.BehaviorProviderDefinition
// 0x0010 (0x004C - 0x003C)
class UBehaviorProviderDefinition : public UGBXDefinition
{
public:
	int                                                CurrentVersion;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorSequenceData >             BehaviorSequences;                                		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3364 ];

		return pClassPointer;
	};

	void SetObjectBehaviorVariable ( class UObject* Value, struct FBehaviorVariableValue* BehaviorVariable );
	void SetVectorBehaviorVariable ( struct FBehaviorVariableValue* BehaviorVariable, struct FVector* Value );
	void SetFloatBehaviorVariable ( float Value, struct FBehaviorVariableValue* BehaviorVariable );
	void SetIntBehaviorVariable ( int Value, struct FBehaviorVariableValue* BehaviorVariable );
	void SetBoolBehaviorVariable ( unsigned long Value, struct FBehaviorVariableValue* BehaviorVariable );
};

// Class GearboxFramework.AIBehaviorProviderDefinition
// 0x0000 (0x004C - 0x004C)
class UAIBehaviorProviderDefinition : public UBehaviorProviderDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3366 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.BehaviorSequenceCustomEnableCondition
// 0x0005 (0x0041 - 0x003C)
class UBehaviorSequenceCustomEnableCondition : public UObject
{
public:
	struct FChunkedList_Mirror                         LinkedBehaviorSequences;                          		// 0x003C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned char                                      BehaviorKernelInstanceTagForTransientState;       		// 0x0040 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3368 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.BehaviorSequenceEnableByMultipleConditions
// 0x0010 (0x0051 - 0x0041)
class UBehaviorSequenceEnableByMultipleConditions : public UBehaviorSequenceCustomEnableCondition
{
public:
	TArray< class UBehaviorSequenceCustomEnableCondition* > EnableConditions;                                 		// 0x0044 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      Operator;                                         		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3370 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.IBehaviorConsumer
// 0x0000 (0x003C - 0x003C)
class UIBehaviorConsumer : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3372 ];

		return pClassPointer;
	};

	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle ( );
};

// Class GearboxFramework.IBehaviorProvider
// 0x0000 (0x003C - 0x003C)
class UIBehaviorProvider : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3374 ];

		return pClassPointer;
	};

	void SetBehaviorProviderDefinition ( class UBehaviorProviderDefinition* NewBehaviorProviderDefinition );
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition ( );
};

// Class GearboxFramework.ICustomEvent
// 0x0000 (0x003C - 0x003C)
class UICustomEvent : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3376 ];

		return pClassPointer;
	};

	void eventRunCustomEvent ( struct FName EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData );
};

// Class GearboxFramework.ITimerBehavior
// 0x0000 (0x003C - 0x003C)
class UITimerBehavior : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3378 ];

		return pClassPointer;
	};

	bool SetTimerState ( unsigned char TimerId, struct FBehaviorTimerState TimerState );
	bool GetTimerState ( unsigned char TimerId, struct FBehaviorTimerState* TimerState );
	float GetTimeSeconds ( );
};

// Class GearboxFramework.GearboxAnimDefinition
// 0x0074 (0x00BC - 0x0048)
class UGearboxAnimDefinition : public USpecialMoveDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                       		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FName                                       AnimName;                                         		// 0x004C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BlendInTime;                                      		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BlendOutTime;                                     		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PlayRate;                                         		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      EndingCondition;                                  		// 0x0060 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAnimSet*                                    AnimSet;                                          		// 0x0064 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bMirrored : 1;                                    		// 0x0068 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      BlendPerBone : 1;                                 		// 0x0068 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      DisableAnimSequenceNotifies : 1;                  		// 0x0068 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOnlyPlayNotifiesWhileActive : 1;                 		// 0x0068 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bReverseAnimSearchOrder : 1;                      		// 0x0068 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	struct FName                                       AnimNodeName;                                     		// 0x006C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class URootMotionDefinition*                       RootMotionDef;                                    		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UFeatherBoneBlendDefinition*                 BoneBlendDef;                                     		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FName >                             BoneNames;                                        		// 0x007C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSMBehavior >                       StartBehaviors;                                   		// 0x0088 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FSMNotify >                         SMNotifies;                                       		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSMBehavior >                       StopBehaviors;                                    		// 0x00A0 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FTimedAnimBehaviorEvent >           TimedBehaviorEvents;                              		// 0x00AC (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                       		// 0x00B8 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3380 ];

		return pClassPointer;
	};

	float GetAnimLength ( class USkeletalMeshComponent* SMC );
	bool eventIsPlayingLocally ( class USpecialMoveInterface* SMI );
	class UAnimNodeSpecialMoveBlend* GetSMNode ( class USpecialMoveInterface* SMI );
	float PlayAnim ( class USpecialMoveInterface* SMI, struct FSpecialMoveData* SMData );
	void eventAnimFinished ( class USpecialMoveInterface* SMI, class UAnimNodeSpecialMoveBlend* BlendNode, unsigned long bInterrupted, struct FSpecialMoveData* SMData );
	void eventClientFinished ( class USpecialMoveInterface* SMI, unsigned long bInterrupted );
	float eventClientStarted ( class USpecialMoveInterface* SMI, struct FSpecialMoveData* SMData );
	void eventServerFinished ( class USpecialMoveInterface* SMI, unsigned long bInterrupted );
	void eventServerStarted ( class USpecialMoveInterface* SMI );
	void AddAnimSet ( class USpecialMoveInterface* SMI );
	class USkeletalMeshComponent* GetSkeletalMesh ( class USpecialMoveInterface* SMI );
	bool eventAuthorityCanPlay ( class USpecialMoveInterface* SMI );
	void OnTimedEvent ( struct FName SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnServerStop ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnServerStart ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnStop ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void OnStart ( struct FBehaviorConsumerHandle* ConsumerHandle );
	void SetBehaviorProviderDefinition ( class UBehaviorProviderDefinition* NewBehaviorProviderDefinition );
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition ( );
};

// Class GearboxFramework.Behavior_TriggerDialogEvent
// 0x001C (0x0068 - 0x004C)
class UBehavior_TriggerDialogEvent : public UBehaviorBase
{
public:
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogGroup*                         Group;                                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     Other;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForcePlayImmediate : 1;                          		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCheckCanPreview : 1;                             		// 0x005C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bCanPreview : 1;                                  		// 0x005C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UGearboxDialogEventData*                     MyEventData;                                      		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MyDataUseCount;                                   		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3382 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
	void TriggerDialogEvent ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters* EventData );
};

// Class GearboxFramework.GearboxDialogActor
// 0x0034 (0x01BC - 0x0188)
class AGearboxDialogActor : public AActor
{
public:
	struct FPointer                                    VfTable_IGearboxDialogInterface;                  		// 0x0188 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< class UGearboxDialogGroup* >               DialogGroups;                                     		// 0x018C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x0198 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USpriteComponent*                            EditorSprite;                                     		// 0x019C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UGearboxDialogComponent*                     DialogComponent;                                  		// 0x01A0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FGearboxDialogReplicatedData                DialogReplicatedData;                             		// 0x01A4 (0x0014) [0x0000000000000020]              ( CPF_Net )
	class UGearboxDialogNameTag*                       CurrentNameTag;                                   		// 0x01B8 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3384 ];

		return pClassPointer;
	};

	void SetDialogNameTag ( class UGearboxDialogNameTag* NewName );
	struct FGearboxDialogReplicatedData GetReplicatedDialogData ( );
	void SetReplicatedDialogData ( class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data );
	void GetDialogGroups ( TArray< class UGearboxDialogGroup* >* Groups );
	class UGearboxDialogComponent* GetDialogComponent ( );
	class UGearboxDialogNameTag* GetDialogNameTag ( );
	class AActor* GetActor ( );
	bool CanTalk ( );
	void eventServerDialog_TriggerEvent ( class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter );
	void eventReplicatedEvent ( struct FName VarName );
};

// Class GearboxFramework.GearboxDialogComponent
// 0x0013 (0x006C - 0x0059)
class UGearboxDialogComponent : public UActorComponent
{
public:
	class UGearboxDialogEventData*                     EventData;                                        		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FAkPlayingInfo                              ClientPlayingInfo;                                		// 0x0060 (0x0008) [0x0000000000082000]              ( CPF_Transient | CPF_Component )
	unsigned long                                      bIsReattaching : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3386 ];

		return pClassPointer;
	};

	bool IsTalking ( );
	void StopTalking ( class UGearboxDialogEventTag* EventTag, unsigned long bForceStop );
	void TalkReplicated ( struct FGearboxDialogReplicatedData NewDialogData );
	void Talk ( class UGearboxDialogAct_Talk* TalkAction );
	void GetMatchingEvent ( class UGearboxDialogEventTag* InEventTag, unsigned long bIncludeDisabled, class UGearboxDialogNameTag* OtherNameTag, unsigned long bAllowTemplateGroups, class UGearboxDialogEvent** OutEvent, class UGearboxDialogGroup** OutGroup );
	class UGearboxDialogEventData* TriggerEvent ( class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData );
	class UGearboxDialogInterface* GetDialogInterface ( );
};

// Class GearboxFramework.GearboxDialogEventData
// 0x003C (0x0078 - 0x003C)
class UGearboxDialogEventData : public UObject
{
public:
	struct FDialogEventInfo                            EventInfo;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	class AActor*                                      Instigator;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	class AActor*                                      Other;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	class UObject*                                     ObjectParameter;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	class AActor*                                      LastTalker;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	class UGearboxDialogAct_Talk*                      LiveTalkAction;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                LiveTalkActionDataID;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FDialogEventInfo                            TemplateEventInfo;                                		// 0x005C (0x0008) [0x0000000000000000]              
	class UGearboxDialogAct_Trigger*                   LiveTriggerAction;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FAkPlayingInfo                              PlayingInfo;                                      		// 0x0068 (0x0008) [0x0000000000080000]              ( CPF_Component )
	float                                              TalkFinishTime;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                UseCount;                                         		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3388 ];

		return pClassPointer;
	};

	bool IsActive ( );
};

// Class GearboxFramework.GearboxDialogEventTag
// 0x0008 (0x0044 - 0x003C)
class UGearboxDialogEventTag : public UGBXDefinition
{
public:
	unsigned long                                      bGroupEvent : 1;                                  		// 0x003C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSoundEffect : 1;                                 		// 0x003C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bIsDeathScream : 1;                               		// 0x003C (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	class UGearboxDialogPriority*                      Priority;                                         		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3390 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogGlobalsDefinition
// 0x0010 (0x004C - 0x003C)
class UGearboxDialogGlobalsDefinition : public UGBXDefinition
{
public:
	class UAkRtpc*                                     PitchRTPC;                                        		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UGearboxDialogPriority* >            Priorities;                                       		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3392 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogGroup
// 0x0060 (0x009C - 0x003C)
class UGearboxDialogGroup : public UObject
{
public:
	TArray< class UPackage* >                          EventTagPackages;                                 		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UGearboxDialogNameTag* >             NameTags;                                         		// 0x0048 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UGearboxDialogEventTag* >            EventTags;                                        		// 0x0054 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UGearboxDialogGroup*                         ParentGroup;                                      		// 0x0060 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UGearboxDialogNode* >                Nodes;                                            		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGearboxDialogEvent*                         SharedDialogEvent;                                		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGearboxDialogAct_Talk*                      SharedTalkAct;                                    		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOutputLinkToStruct >               OutputLinksToStructs;                             		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDialogEventData >                  DialogEvents;                                     		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTalkActData >                      TalkActs;                                         		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3394 ];

		return pClassPointer;
	};

	void SimpleEvent ( class AActor* Owner, class UGearboxDialogNameTag* NameTag, class UGearboxDialogEventTag* EventTag );
};

// Class GearboxFramework.GearboxDialogTemplateGroup
// 0x0000 (0x009C - 0x009C)
class UGearboxDialogTemplateGroup : public UGearboxDialogGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3396 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogManager
// 0x0084 (0x00C0 - 0x003C)
class UGearboxDialogManager : public UObject
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x003C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bShowDebug : 1;                                   		// 0x003C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	TArray< class AActor* >                            Talkers;                                          		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class AActor* >                            DisabledTalkers;                                  		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UGearboxDialogGroup* >               Groups;                                           		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGearboxDialogEventData*                     CurrentEventContext;                              		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMap_Mirror                                 GroupEventTagMap;                                 		// 0x0068 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< class UGearboxDialogEventData* >           EventDataPool;                                    		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     EventDataClassPath;                               		// 0x00B0 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	class UClass*                                      EventDataClass;                                   		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3398 ];

		return pClassPointer;
	};

	void DrawDialogDebug ( class AHUD* HUD, float StartY );
	void CheckpointRemoveReferencesBeforeDestroy ( );
	class UGearboxDialogEventTag* GetEventTagForEventInfo ( struct FDialogEventInfo EventInfo );
	class UGearboxDialogEventData* TriggerGroupEvent ( class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag, class AActor* Instigator, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData );
	void Cleanup ( );
	void SetGroupEventTag ( class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag );
	class UGearboxDialogEventTag* GetGroupEventTag ( class UGearboxDialogGroup* Group );
	void SilenceGroup ( class UGearboxDialogGroup* Group );
	void AddGroup ( class UGearboxDialogGroup* Group );
	void UnregisterTalker ( class AActor* Talker );
	void RegisterTalker ( class AActor* Talker );
	void DisableTalker ( class AActor* Talker );
	void EnableTalker ( class AActor* Talker );
	int GetPriority ( class UGearboxDialogPriority* InPriority );
};

// Class GearboxFramework.GearboxDialogNameTag
// 0x000C (0x0048 - 0x003C)
class UGearboxDialogNameTag : public UGBXDefinition
{
public:
	struct FName                                       NameTag;                                          		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogNameTag*                       ParentTag;                                        		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3400 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogPriority
// 0x0000 (0x003C - 0x003C)
class UGearboxDialogPriority : public UGBXDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3402 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogNode
// 0x0004 (0x0070 - 0x006C)
class UGearboxDialogNode : public UGearboxEditorNode
{
public:
	int                                                NodeID;                                           		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3404 ];

		return pClassPointer;
	};

	void ActivateOutput ( int Link );
};

// Class GearboxFramework.GearboxDialogAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogAction : public UGearboxDialogNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3406 ];

		return pClassPointer;
	};

	void eventActivate ( );
};

// Class GearboxFramework.GearboxDialogAct_Chance
// 0x0010 (0x0080 - 0x0070)
class UGearboxDialogAct_Chance : public UGearboxDialogAction
{
public:
	float                                              Chance;                                           		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              QuietTimeMin;                                     		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              QuietTimeMax;                                     		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NextFireTime;                                     		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3408 ];

		return pClassPointer;
	};

	void eventActivate ( );
};

// Class GearboxFramework.GearboxDialogAct_Compare
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogAct_Compare : public UGearboxDialogAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3410 ];

		return pClassPointer;
	};

	void eventActivate ( );
};

// Class GearboxFramework.GearboxDialogAct_ObjectParameterSwitch
// 0x000C (0x007C - 0x0070)
class UGearboxDialogAct_ObjectParameterSwitch : public UGearboxDialogAction
{
public:
	TArray< class UObject* >                           Outputs;                                          		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3412 ];

		return pClassPointer;
	};

	void eventActivate ( );
};

// Class GearboxFramework.GearboxDialogNonTemplateAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogNonTemplateAction : public UGearboxDialogAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3414 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Talk
// 0x0014 (0x0084 - 0x0070)
class UGearboxDialogAct_Talk : public UGearboxDialogNonTemplateAction
{
public:
	float                                              OutputDelay;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShowTalkers : 1;                                 		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPreviewing : 1;                                  		// 0x0074 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bInstigatorTalker : 1;                            		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FGearboxDialogData >                TalkData;                                         		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3416 ];

		return pClassPointer;
	};

	void eventActivate ( );
	void eventTalkFinished ( class AActor* InTalker );
	void eventTalkStarted ( class AActor* InTalker );
};

// Class GearboxFramework.GearboxDialogTemplateAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogTemplateAction : public UGearboxDialogAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3418 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Trigger
// 0x0008 (0x0078 - 0x0070)
class UGearboxDialogAct_Trigger : public UGearboxDialogTemplateAction
{
public:
	class UGearboxDialogEventTag*                      DialogEvent;                                      		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bPreviewing : 1;                                  		// 0x0074 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3420 ];

		return pClassPointer;
	};

	void ActivateOutput ( int Link );
	void eventActivate ( );
};

// Class GearboxFramework.GearboxDialogEvent
// 0x0008 (0x0078 - 0x0070)
class UGearboxDialogEvent : public UGearboxDialogNode
{
public:
	unsigned long                                      bDisabled : 1;                                    		// 0x0070 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	class UGearboxDialogEventTag*                      Tag;                                              		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3422 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogTemplateEvent
// 0x0000 (0x0078 - 0x0078)
class UGearboxDialogTemplateEvent : public UGearboxDialogEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3424 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVariable
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVariable : public UGearboxDialogNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3426 ];

		return pClassPointer;
	};

	void ResolveToArgumentValue ( struct FString* Out_ArgumentValue );
	void GetTalkers ( TArray< class AActor* >* Talkers );
};

// Class GearboxFramework.GearboxDialogVar_Instigator
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_Instigator : public UGearboxDialogVariable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3428 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_LastTalker
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_LastTalker : public UGearboxDialogVariable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3430 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_NameTag
// 0x0004 (0x0074 - 0x0070)
class UGearboxDialogVar_NameTag : public UGearboxDialogVariable
{
public:
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3432 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_Other
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_Other : public UGearboxDialogVariable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3434 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_Random
// 0x0018 (0x0088 - 0x0070)
class UGearboxDialogVar_Random : public UGearboxDialogVariable
{
public:
	unsigned long                                      bNotOther : 1;                                    		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNotInstigator : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNotLastTalker : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UPawnAllegiance*                             Allegiance;                                       		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                DistanceLimit;                                    		// 0x0078 (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3436 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_ToggleDialog
// 0x0004 (0x00A8 - 0x00A4)
class UGearboxSeqAct_ToggleDialog : public USequenceAction
{
public:
	unsigned long                                      bDialogEnabled : 1;                               		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3438 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TriggerDialog
// 0x0018 (0x00CC - 0x00B4)
class UGearboxSeqAct_TriggerDialog : public USeqAct_Latent
{
public:
	class AActor*                                      Other;                                            		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGearboxDialogEventData*                     EventData;                                        		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MyDataUseCount;                                   		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCheckCanPreview : 1;                             		// 0x00C8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bCanPreview : 1;                                  		// 0x00C8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3440 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TriggerDialogName
// 0x0004 (0x00D0 - 0x00CC)
class UGearboxSeqAct_TriggerDialogName : public UGearboxSeqAct_TriggerDialog
{
public:
	class UGearboxDialogGroup*                         Group;                                            		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3442 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountActions
// 0x0048 (0x0084 - 0x003C)
class UGearboxAccountActions : public UObject
{
public:
	int                                                CurrentConsumeCount;                              		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentControllerId;                              		// 0x0040 (0x0001) [0x0000000000000000]              
	class UGearboxAccountEntitlement*                  CurrentEntitlement;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnSignInGearboxAccount__Delegate;               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSignUpGearboxAccount__Delegate;               		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnResetPasswordGearboxAccount__Delegate;        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCodeRedeemed__Delegate;                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEntitlementConsumed__Delegate;                		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3444 ];

		return pClassPointer;
	};

	void HandleOffersNotifiedResponse ( struct FSparkResult* Result );
	void HandleEntitlementConsumedResponse ( struct FSparkResult* Result );
	void HandleCodeRedeemedResponse ( struct FSparkResult* Result );
	void HandleResetPasswordResponse ( struct FSparkResult* Result );
	void HandleSignUpResponse ( struct FSparkResult* Result );
	void HandleSignInResponse ( struct FSparkResult* Result );
	struct FArchwayResult ExtractArchwayResult ( TArray< unsigned char > Data );
	void MarkOffersNotified ( unsigned char ControllerId );
	bool LocallyConsumeEntitlementWithCount ( struct FName EntitlementName, int NumToConsume, unsigned char ControllerId );
	void ConsumeEntitlementWithCount ( struct FName EntitlementName, int Count, unsigned char ControllerId, struct FScriptDelegate EntitlementConsumedDelegate );
	void RedeemCode ( struct FString Code, unsigned char ControllerId, struct FScriptDelegate CodeRedeemedDelegate );
	void ResetPasswordGearboxAccount ( struct FString Email, unsigned char ControllerId, struct FScriptDelegate ResetPasswordDelegate );
	struct FString EscapeJson ( struct FString Input );
	void SignUpGearboxAccount ( struct FString Email, struct FString Password, struct FString PasswordConfirm, struct FString AgeString, unsigned char ControllerId, struct FScriptDelegate SignUpDelegate );
	void SignInGearboxAccount ( struct FString Email, struct FString Password, unsigned char ControllerId, struct FScriptDelegate SignInDelegate );
	void OnEntitlementConsumed ( unsigned char ConsumeResult );
	void OnCodeRedeemed ( unsigned char RedeemResult );
	void OnResetPasswordGearboxAccount ( unsigned char ResetResult );
	void OnSignUpGearboxAccount ( unsigned char SignUpResult );
	void OnSignInGearboxAccount ( unsigned char SignInResult );
};

// Class GearboxFramework.GearboxAccountData
// 0x0054 (0x0090 - 0x003C)
class UGearboxAccountData : public UObject
{
public:
	struct FString                                     RequestId;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      SignedIn : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      HasValidPlatform : 1;                             		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     PlatformLoginName;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDouble                                     NextEntitlementUpdateTime;                        		// 0x0058 (0x0008) [0x0000000000000000]              
	TArray< class UGearboxAccountEntitlement* >        Entitlements;                                     		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGearboxAccountOffer* >              Offers;                                           		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EntitlementsUpdatedDelegates;                     		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USparkServiceConfiguration* >        Services;                                         		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3446 ];

		return pClassPointer;
	};

	int CountEntitlement ( struct FName EntitlementName, unsigned long bIgnoreLocallyConsumed );
	int GetTotalGoldenKeyCount ( );
	int GetGoldenKeyCount ( unsigned long bIgnoreLocallyConsumed );
	bool HasGoldenKey ( unsigned long bIgnoreLocallyConsumed );
	bool HasDeveloperSkin ( );
	bool IsDeveloper ( );
	void MarkOffersNotified ( );
	TArray< class UGearboxAccountOffer* > GetUnnotifiedOffers ( );
	class UGearboxAccountEntitlement* GetEntitlementWithName ( struct FName EntitlementName );
	class UGearboxAccountEntitlement* GetEntitlementWithId ( int Id );
	bool HasEntitlement ( struct FName EntitlementName, unsigned long bIgnoreLocallyConsumed );
	void RemoveEntitlement ( class UGearboxAccountEntitlement* Entitlement );
	void ReplaceEntitlements ( TArray< struct FEntitlementResult >* NewEntitlements, TArray< struct FOfferResult >* NewOffers );
	void ReplaceServices ( TArray< struct FServiceResult >* NewServices );
	void HandleReloadEntitlementsResponse ( struct FSparkResult* Result );
	bool ReloadEntitlements ( );
	void ResetEntitlementUpdateTimer ( );
	bool CanReloadEntitlements ( );
	void TriggerEntitlementsUpdatedDelegates ( );
	void ClearEntitlementsUpdatedDelegate ( struct FScriptDelegate EntitlementsUpdatedDelegate );
	void AddEntitlementsUpdatedDelegate ( struct FScriptDelegate EntitlementsUpdatedDelegate );
	class USparkServiceConfiguration* eventGetService ( struct FName ServiceName );
	void Clear ( );
	bool ExtractArchwayResult ( TArray< unsigned char >* Data, struct FArchwayResult* ArchwayData );
};

// Class GearboxFramework.GearboxProcess
// 0x002C (0x0068 - 0x003C)
class UGearboxProcess : public UObject
{
public:
	int                                                FirstAttemptDelay;                                		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                BaseRetrySeconds;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MaxRetryAttempts;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              RetryMultiplier;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                RetryJitter;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              CurrentRetrySeconds;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Attempts;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              WaitTime;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      Waiting : 1;                                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurrentStep;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                FailureStep;                                      		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3448 ];

		return pClassPointer;
	};

	struct FStepConfiguration GetStepConfiguration ( );
	void GotoStep ( int Step );
	void GotoNextStep ( );
	void GotoFirstStep ( );
	unsigned char eventPerformStep ( );
	void PauseLoop ( );
	void Init ( );
	void ContinueLoop ( );
	void StopLoop ( );
};

// Class GearboxFramework.SparkInitializationProcess
// 0x0024 (0x008C - 0x0068)
class USparkInitializationProcess : public UGearboxProcess
{
public:
	class UGearboxAccountData*                         Data;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                PlayerIndex;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SparkInitializedDelegates;                        		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPrimary : 1;                                     		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ValidAccount : 1;                                 		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     AsyncTicket;                                      		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3450 ];

		return pClassPointer;
	};

	void eventTriggerSparkInitializedDelegates ( unsigned char InitializeResult );
	void ClearSparkInitializedDelegate ( struct FScriptDelegate SparkInitializedDelegate );
	void AddSparkInitializedDelegate ( struct FScriptDelegate SparkInitializedDelegate );
	struct FString GetStepName ( );
	struct FStepConfiguration GetStepConfiguration ( );
	bool IsInitialized ( );
	bool IsDisabled ( );
	bool IsInitializing ( );
	void HandleVerificationReceived ( struct FSparkResult* Result );
	unsigned char eventVerifyAuthentication ( );
	unsigned char AuthenticateTicketStringWithDelegate ( struct FString ticket, struct FScriptDelegate SparkRequestCompleteDelegate );
	void HandleAuthenticationReceived ( struct FSparkResult* Result );
	unsigned char eventAuthenticateAccount ( );
	struct FString GetConfigQuery ( );
	unsigned char CompleteInitialization ( );
	unsigned char HttpInit ( );
	unsigned char CheckForTMS ( );
	unsigned char PerformStep ( );
	bool StartProcess ( );
	void InitWithController ( unsigned char ControllerId, unsigned long bNewPrimary, struct FScriptDelegate SparkInitializedDelegate );
};

// Class GearboxFramework.LeviathanService
// 0x0010 (0x004C - 0x003C)
class ULeviathanService : public UObject
{
public:
	struct FPointer                                    VfTable_ISparkUpdateCallback;                     		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                EventBufferSize;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                StatBufferSize;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AtomTableBufferSize;                              		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3452 ];

		return pClassPointer;
	};

	class USparkServiceConfiguration* eventGetLeviathanServiceConfiguration ( int ControllerNumber );
	void LoadServiceConfigurationForPlayer ( int SplitscreenIndex );
	class ULeviathanService* GetLeviathanService ( );
};

// Class GearboxFramework.SparkInterface
// 0x0000 (0x003C - 0x003C)
class USparkInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3454 ];

		return pClassPointer;
	};

	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration ( );
	struct FString GetTitleStorageUrl ( );
	void ClearGearboxAccountData ( unsigned long IncludePrimaryPlayer );
	void SignOutGearboxAccount ( unsigned char ControllerId );
	void SignInGearboxAccount ( unsigned char ControllerId );
	class UGearboxAccountData* eventGetGearboxAccountData ( unsigned char ControllerId );
	bool eventIsGearboxAccountAuthenticated ( unsigned char ControllerId );
	bool IsGearboxAccountSignedIn ( unsigned char ControllerId );
	struct FString ConvertUtcTimeToLocalTime ( struct FString UtcTime );
	bool ShouldUpdateEmergencyMessage ( );
	struct FString GetEmergencyMessage ( );
	void SetEmergencyMessage ( struct FString Message );
	struct FString eventGetPlatformLoginNameFromSplitscreenIndex ( int SplitscreenIndex );
	struct FString GetPlatformLoginNameFromController ( unsigned char ControllerId );
	void IncreaseInteractionTries ( );
	int GetInteractionTries ( );
	int GetInteractionGraceTries ( );
	int GetInteractionPunishmentMinWaitSeconds ( );
	int GetInteractionMinWaitSeconds ( );
	bool IsTmsComplete ( );
	void SetTmsComplete ( );
	class USparkInitializationProcess* GetSparkInitialization ( );
	void eventRestartSparkInitialization ( unsigned long bPrimary );
	void RestartSparkInitializationFromScript ( unsigned long bPrimary, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate SparkEmergencyMessageDelegate );
	void StartSparkInitialization ( unsigned char ControllerId, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate SparkEmergencyMessageDelegate, struct FScriptDelegate EntitlementsUpdatedDelegate );
	void StartSecondaryInitialization ( unsigned char ControllerId, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate EntitlementsUpdatedDelegate );
	struct FString GetGameName ( );
	struct FString GetHardwareName ( );
	struct FString GetPlatformName ( );
	struct FString GetPlatformTicket ( int ControllerId, unsigned long bPrimary );
	void ClearSparkConfigReceivedDelegate ( struct FScriptDelegate SparkConfigReceivedDelegate );
	void AddSparkConfigReceivedDelegate ( struct FScriptDelegate SparkConfigReceivedDelegate );
	void ResetInitializationStatus ( );
	bool eventIsSparkEnabled ( );
	int IssueSparkStringRequest ( struct FString URL, struct FString RequestData, struct FScriptDelegate SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters );
	int IssueSparkRequest ( struct FString URL, struct FScriptDelegate SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters, TArray< unsigned char >* RequestData );
};

// Class GearboxFramework.SparkInterfaceImpl
// 0x009C (0x00D8 - 0x003C)
class USparkInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_ISparkInterface;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USparkInitializationProcess*                 SparkInitialization;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	class USparkInitializationProcess*                 SecondaryInitialization;                          		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< class UGearboxAccountData* >               Accounts;                                         		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LeviathanServiceClassName;                        		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class ULeviathanService*                           LeviathanSvc;                                     		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ReadBufferSize;                                   		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      TmsInitComplete : 1;                              		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      UpdateEmergencyMessage : 1;                       		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     EmergencyMessage;                                 		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSparkOutstandingRequest >          Requests;                                         		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastHttpRequestRetries;                           		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              LastHttpRequestResponseTime;                      		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                RecentHttpRequestFailures;                        		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                InteractionMinWaitSeconds;                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                InteractionGraceTries;                            		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                InteractionPunishmentMinWaitSeconds;              		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                InteractionTries;                                 		// 0x00A0 (0x0004) [0x0000000000000000]              
	class USparkServiceConfiguration*                  TitleStorageService;                              		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     TitleStorageUrl;                                  		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkRequestComplete__Delegate;               		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkConfigReceived__Delegate;                		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkEmergencyMessageUpdated__Delegate;       		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3456 ];

		return pClassPointer;
	};

	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration ( );
	struct FString GetTitleStorageUrl ( );
	void OnSparkInitialized ( unsigned char InitializedResult );
	void IncreaseInteractionTries ( );
	int GetInteractionTries ( );
	int GetInteractionGraceTries ( );
	int GetInteractionPunishmentMinWaitSeconds ( );
	int GetInteractionMinWaitSeconds ( );
	struct FString ConvertUtcTimeToLocalTime ( struct FString UtcTime );
	bool ShouldUpdateEmergencyMessage ( );
	struct FString GetEmergencyMessage ( );
	void SetEmergencyMessage ( struct FString NewMessage );
	bool IsTmsComplete ( );
	void SetTmsComplete ( );
	void RestartSparkInitializationFromScript ( unsigned long bPrimary, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate SparkEmergencyMessageDelegate );
	void eventRestartSparkInitialization ( unsigned long bPrimary );
	void StartSparkInitialization ( unsigned char ControllerId, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate SparkEmergencyMessageDelegate, struct FScriptDelegate EntitlementsUpdatedDelegate );
	void ResetInitializationStatus ( );
	void ResetSecondaryInitializationStatus ( );
	void StartSecondaryInitialization ( unsigned char ControllerId, struct FScriptDelegate SparkInitializedDelegate, struct FScriptDelegate EntitlementsUpdatedDelegate );
	class USparkInitializationProcess* GetSparkInitialization ( );
	void SignInGearboxAccount ( unsigned char ControllerId );
	class UGearboxAccountData* eventGetGearboxAccountData ( unsigned char ControllerId );
	void SignOutGearboxAccount ( unsigned char ControllerId );
	bool ValidPlayerIndex ( int PlayerIndex );
	int GetPlayerIndex ( int ControllerId );
	void ClearGearboxAccountData ( unsigned long IncludePrimaryPlayer );
	bool IsGearboxAccountSignedIn ( unsigned char ControllerId );
	bool eventIsGearboxAccountAuthenticated ( unsigned char ControllerId );
	struct FString GetGameName ( );
	struct FString GetHardwareName ( );
	struct FString GetPlatformName ( );
	struct FString GetPlatformTicket ( int ControllerId, unsigned long bPrimary );
	void ClearSparkConfigReceivedDelegate ( struct FScriptDelegate SparkConfigReceivedDelegate );
	void AddSparkConfigReceivedDelegate ( struct FScriptDelegate SparkConfigReceivedDelegate );
	struct FString GetPlatformLoginNameFromController ( unsigned char ControllerId );
	struct FString eventGetPlatformLoginNameFromSplitscreenIndex ( int SplitscreenIndex );
	struct FString eventGetPlatformLoginName ( );
	unsigned char eventGetLoginStatus ( );
	bool eventIsShiftEnabled ( );
	bool eventIsSparkEnabled ( );
	bool WithShift ( );
	bool WithSpark ( );
	int IssueSparkStringRequest ( struct FString URL, struct FString RequestData, struct FScriptDelegate SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters );
	int IssueSparkRequest ( struct FString URL, struct FScriptDelegate SparkRequestCompleteDelegate, struct FHttpParameters* HttpParameters, TArray< unsigned char >* RequestData );
	struct FString AlternativeXboxlivePlatformId ( struct FUniqueNetId* NetId );
	void OnSparkEmergencyMessageUpdated ( );
	void OnSparkConfigReceived ( TArray< unsigned char > ConfigArray );
	void OnSparkRequestComplete ( struct FSparkResult* Result );
};

// Class GearboxFramework.SparkServiceConfiguration
// 0x0034 (0x0070 - 0x003C)
class USparkServiceConfiguration : public UObject
{
public:
	struct FName                                       ServiceName;                                      		// 0x003C (0x0008) [0x0000000000000000]              
	struct FName                                       ConfigurationGroup;                               		// 0x0044 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           Keys;                                             		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Values;                                           		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     OverrideUrl;                                      		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3458 ];

		return pClassPointer;
	};

	float GetFloatParameter ( struct FString KeyName, float DefaultValue, float MinimumValue, float MaximumValue );
	int GetIntParameter ( struct FString KeyName, int DefaultValue, int MinimumValue, int MaximumValue );
	struct FString GetStringParameter ( struct FString KeyName, struct FString Default );
	struct FString GetParameter ( struct FString KeyNameToSearchFor );
	void LoadService ( struct FServiceResult* Service );
	void LoadOverrides ( );
};

// Class GearboxFramework.SparkTypes
// 0x003C (0x0078 - 0x003C)
class USparkTypes : public UObject
{
public:
	struct FScriptDelegate                             __OnSparkRequestComplete__Delegate;               		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkConfigReceived__Delegate;                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkInitialized__Delegate;                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSparkEmergencyMessageUpdated__Delegate;       		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEntitlementsUpdated__Delegate;                		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3460 ];

		return pClassPointer;
	};

	void OnEntitlementsUpdated ( class UGearboxAccountData* GbxAccount );
	void OnSparkEmergencyMessageUpdated ( );
	void OnSparkInitialized ( unsigned char InitializedResult );
	void OnSparkConfigReceived ( TArray< unsigned char > ConfigArray );
	void OnSparkRequestComplete ( struct FSparkResult* Result );
};

// Class GearboxFramework.Action_ChangeRuleSet
// 0x0004 (0x00AC - 0x00A8)
class UAction_ChangeRuleSet : public UActionSequence
{
public:
	class URuleSet*                                    NewRuleSet;                                       		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38810 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RES_RuleSetChange
// 0x0000 (0x003C - 0x003C)
class URES_RuleSetChange : public UActionResource
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38814 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_FaceThreat
// 0x0000 (0x00B0 - 0x00B0)
class UAction_FaceThreat : public UActionSequencePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38817 ];

		return pClassPointer;
	};

	void eventStopSequence ( );
};

// Class GearboxFramework.RES_FacingPolicy
// 0x0000 (0x003C - 0x003C)
class URES_FacingPolicy : public UActionResource
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38824 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_MoveRandom
// 0x0000 (0x00B0 - 0x00B0)
class UAction_MoveRandom : public UActionSequencePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38825 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_MoveTo
// 0x0000 (0x00B0 - 0x00B0)
class UAction_MoveTo : public UActionSequencePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38827 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RES_Movement
// 0x0000 (0x003C - 0x003C)
class URES_Movement : public UActionResource
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39055 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_PopRuleSet
// 0x0000 (0x00B0 - 0x00B0)
class UAction_PopRuleSet : public UActionSequencePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39056 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Action_PushRuleSet
// 0x0004 (0x00B4 - 0x00B0)
class UAction_PushRuleSet : public UActionSequencePawn
{
public:
	class URuleSet*                                    NewRuleSet;                                       		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39059 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ActorAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UActorAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39077 ];

		return pClassPointer;
	};

	class UObject* GetAttributeContext ( class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource );
};

// Class GearboxFramework.AIComponentAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UAIComponentAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39193 ];

		return pClassPointer;
	};

	class UObject* GetAttributeContext ( class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource );
};

// Class GearboxFramework.AIStateBase
// 0x0000 (0x006C - 0x006C)
class UAIStateBase : public UGearboxEditorNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39512 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIState
// 0x0000 (0x006C - 0x006C)
class UAIState : public UAIStateBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39514 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIState_Priority
// 0x0000 (0x006C - 0x006C)
class UAIState_Priority : public UAIStateBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39516 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIState_Random
// 0x0000 (0x006C - 0x006C)
class UAIState_Random : public UAIStateBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39518 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.AIState_Sequential
// 0x0000 (0x006C - 0x006C)
class UAIState_Sequential : public UAIStateBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39520 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.Behavior_AIHold
// 0x000A (0x0056 - 0x004C)
class UBehavior_AIHold : public UBehaviorBase
{
public:
	struct FName                                       Reason;                                           		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Action;                                           		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0055 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39609 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_AIPriority
// 0x0014 (0x0060 - 0x004C)
class UBehavior_AIPriority : public UBehaviorBase
{
public:
	float                                              PriorityModifier;                                 		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FBehaviorContextData                        Target;                                           		// 0x0050 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39624 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_AITargeting
// 0x0004 (0x0050 - 0x004C)
class UBehavior_AITargeting : public UBehaviorBase
{
public:
	class UTargetingDefinition*                        NewTargetingDefinition;                           		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39638 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState
// 0x000C (0x0058 - 0x004C)
class UBehavior_ChangeAnyBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                           		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0050 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39660 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState
// 0x000C (0x0058 - 0x004C)
class UBehavior_ChangeLocalBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                           		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0050 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39676 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_CompareBool
// 0x0004 (0x0050 - 0x004C)
class UBehavior_CompareBool : public UBehaviorBase
{
public:
	unsigned long                                      BoolValue : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39744 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_CompareValues
// 0x0030 (0x007C - 0x004C)
class UBehavior_CompareValues : public UBehaviorBase
{
public:
	struct FAttributeInitializationData                ValueA;                                           		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FBehaviorContextData                        ContextB;                                         		// 0x005C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                ValueB;                                           		// 0x006C (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39756 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_CustomEvent
// 0x0008 (0x0054 - 0x004C)
class UBehavior_CustomEvent : public UBehaviorBase
{
public:
	struct FName                                       CustomEventName;                                  		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39769 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_Delay
// 0x0004 (0x0050 - 0x004C)
class UBehavior_Delay : public UBehaviorBase
{
public:
	float                                              Delay;                                            		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39783 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_Gate
// 0x0008 (0x0054 - 0x004C)
class UBehavior_Gate : public UBehaviorBase
{
public:
	int                                                GateCount;                                        		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActivationCount;                                  		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39793 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_GetFloatParam
// 0x0000 (0x0058 - 0x0058)
class UBehavior_GetFloatParam : public UParameterBehaviorBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39805 ];

		return pClassPointer;
	};

	void PublishBehaviorOutput ( float Value, struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_GetObjectParam
// 0x0000 (0x0058 - 0x0058)
class UBehavior_GetObjectParam : public UParameterBehaviorBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39819 ];

		return pClassPointer;
	};

	void PublishBehaviorOutput ( class UObject* Value, struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_GetVectorParam
// 0x0004 (0x005C - 0x0058)
class UBehavior_GetVectorParam : public UParameterBehaviorBase
{
public:
	unsigned long                                      bTreatAsVector : 1;                               		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39833 ];

		return pClassPointer;
	};

	void PublishBehaviorOutput ( float R, float G, float B, float A, struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_InterpolateFloatOverTime
// 0x0010 (0x005C - 0x004C)
class UBehavior_InterpolateFloatOverTime : public UBehaviorBase
{
public:
	float                                              Duration;                                         		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              UpdateInterval;                                   		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              EndingValue;                                      		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BeginningValue;                                   		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39852 ];

		return pClassPointer;
	};

	void PublishBehaviorOutput ( float Result, struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_Metronome
// 0x0014 (0x0060 - 0x004C)
class UBehavior_Metronome : public UBehaviorBase
{
public:
	unsigned long                                      bUseTickCount : 1;                                		// 0x004C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bUseDuration : 1;                                 		// 0x004C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	int                                                MaxTickCount;                                     		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                CurrentTickCount;                                 		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Duration;                                         		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              TickInterval;                                     		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39883 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ModifyTimer
// 0x0014 (0x0060 - 0x004C)
class UBehavior_ModifyTimer : public UBehaviorBase
{
public:
	unsigned char                                      TimerId;                                          		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Operation;                                        		// 0x004D (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                NewTimerDelay;                                    		// 0x0050 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39898 ];

		return pClassPointer;
	};

	void PublishBehaviorOutput ( float TimeRemaining, struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_SetFloatParam
// 0x0004 (0x005C - 0x0058)
class UBehavior_SetFloatParam : public UParameterBehaviorBase
{
public:
	float                                              Value;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40024 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_SetObjectParam
// 0x0004 (0x005C - 0x0058)
class UBehavior_SetObjectParam : public UParameterBehaviorBase
{
public:
	class UObject*                                     Value;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40035 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_SetVectorParam
// 0x0014 (0x006C - 0x0058)
class UBehavior_SetVectorParam : public UParameterBehaviorBase
{
public:
	float                                              RValue;                                           		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GValue;                                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              bValue;                                           		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AValue;                                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bKeepR : 1;                                       		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bKeepG : 1;                                       		// 0x0068 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bKeepB : 1;                                       		// 0x0068 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bKeepA : 1;                                       		// 0x0068 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bTreatAsVector : 1;                               		// 0x0068 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40046 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_SpecialMove
// 0x000C (0x0058 - 0x004C)
class UBehavior_SpecialMove : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecialMove;                                      		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStopCurrentMove : 1;                             		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bQueueIfCannotPlay : 1;                           		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLocal : 1;                                       		// 0x0050 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              Duration;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40067 ];

		return pClassPointer;
	};

	void PlaySpecialMove ( class USpecialMoveComponent* SMC );
	void TriggerOutput ( struct FBehaviorKernelInfo* KernelInfo );
	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_SpecialMoveStop
// 0x0004 (0x0050 - 0x004C)
class UBehavior_SpecialMoveStop : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecificMove;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40101 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_StartAkAmbientSound
// 0x0008 (0x0054 - 0x004C)
class UBehavior_StartAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWwiseSoundGroup*                            SoundGroup;                                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40115 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_StopAkAmbientSound
// 0x0008 (0x0054 - 0x004C)
class UBehavior_StopAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWwiseSoundGroup*                            SoundGroup;                                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40129 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_StopDialog
// 0x0004 (0x0050 - 0x004C)
class UBehavior_StopDialog : public UBehaviorBase
{
public:
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40143 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.Behavior_ToggleDialog
// 0x0001 (0x004D - 0x004C)
class UBehavior_ToggleDialog : public UBehaviorBase
{
public:
	unsigned char                                      Option;                                           		// 0x004C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40157 ];

		return pClassPointer;
	};

	void ApplyBehaviorToContext ( class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData, struct FBehaviorKernelInfo* KernelInfo );
};

// Class GearboxFramework.CameraModifierCrossfade
// 0x001C (0x00A5 - 0x0089)
class UCameraModifierCrossfade : public UGearboxCameraModifier
{
public:
	class UGearboxCameraModifier*                      ModifierA;                                        		// 0x008C (0x0004) [0x0000000000000000]              
	class UGearboxCameraModifier*                      ModifierB;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                CurModifierNdx;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              CurBlendWeight;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              BlendSpeed;                                       		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DebugInset;                                       		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LerpMode;                                         		// 0x00A4 (0x0001) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40516 ];

		return pClassPointer;
	};

	void DoCrossfade ( );
	void UpdateAllLerps ( float DeltaTime, struct FTPOV* OutPOV );
	bool ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV );
	void ProcessCameraBlend ( class ACamera* Camera, float AdjustedDeltaTime, struct FTPOV* OutPOV );
	void InitializeSubModifiers ( );
	void eventEnableModifier ( );
};

// Class GearboxFramework.CameraModifierLookAt
// 0x0037 (0x00C0 - 0x0089)
class UCameraModifierLookAt : public UGearboxCameraModifier
{
public:
	unsigned char                                      LookAtMode;                                       		// 0x008C (0x0001) [0x0000000000000000]              
	unsigned long                                      bActionFinished : 1;                              		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Duration;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              TimeElapsed;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              ThirdPersonPullBackDistance;                      		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              ThirdPersonPushSideDistance;                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              ThirdPersonRaiseUpDistance;                       		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              Zoom;                                             		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              TransitionInTime;                                 		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              TransitionOutTime;                                		// 0x00B0 (0x0004) [0x0000000000000000]              
	class AActor*                                      LookAtTarget;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FName                                       LookAtBone;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40558 ];

		return pClassPointer;
	};

	void ExecuteFadeIfNeeded ( class AGearboxPlayerController** PC );
	struct FVector GetDesiredLocation ( struct FTPOV* OutPOV, class AGearboxPlayerController** PC );
	bool ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV );
	bool GetBoneLocation ( class AActor* Target, struct FName BoneName, struct FVector* BoneLoc );
	void SetLookAtBone ( struct FName NewBone );
	void SetLookAtTarget ( class AActor* newLookAtTarget );
	void SetTargetLocation ( struct FVector NewTargetLocation, float newTransitionTimeIn, float newTransitionTimeOut );
	void SetDuration ( float NewDuration );
	void SetTransitionTimes ( float NewInTime, float NewOutTime );
	void SetZoomFOV ( float newZoom );
	void SetThirdPersonDistances ( float NewX, float NewY, float NewZ );
	void SetLookAtMode ( unsigned char NewMode );
	void DisableModifier ( unsigned long bImmediate );
	void EnableModifier ( );
};

// Class GearboxFramework.DefinitionUITestCaseDefinition
// 0x0040 (0x007C - 0x003C)
class UDefinitionUITestCaseDefinition : public UGBXDefinition
{
public:
	float                                              ConstantFloat;                                    		// 0x003C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< float >                                    ConstantFloatArray;                               		// 0x0040 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              Float;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    FloatArray;                                       		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGBXDefinition*                              EditConstReferencedDefinition;                    		// 0x005C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< class UGBXDefinition* >                    EditConstArrayOfReferences;                       		// 0x0060 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	class UGBXDefinition*                              ReferencedDefinition;                             		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UGBXDefinition* >                    ArrayOfReferences;                                		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40672 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountEntitlement
// 0x0028 (0x0064 - 0x003C)
class UGearboxAccountEntitlement : public UObject
{
public:
	struct FName                                       Identifier;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      Consumable : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ConsumableAmount;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Consumed;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     Payload;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LocallyConsumed;                                  		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41181 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountOffer
// 0x002C (0x0068 - 0x003C)
class UGearboxAccountOffer : public UObject
{
public:
	struct FString                                     TitleEfigs;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionEfigs;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      Notified : 1;                                     		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     DateUnlocked;                                     		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41197 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PatrolDestination
// 0x000C (0x0194 - 0x0188)
class APatrolDestination : public AActor
{
public:
	TArray< class APatrolDestination* >                NextPatrolPoints;                                 		// 0x0188 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41378 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TargetPriority
// 0x0010 (0x00B4 - 0x00A4)
class UGearboxSeqAct_TargetPriority : public USequenceAction
{
public:
	TArray< class AActor* >                            AITargets;                                        		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PriorityModifier;                                 		// 0x00B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42408 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_CameraShake
// 0x0044 (0x00E8 - 0x00A4)
class UGearboxSeqAct_CameraShake : public USequenceAction
{
public:
	struct FGearboxViewShakeInfo                       CameraShake;                                      		// 0x00A4 (0x0044) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42923 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_PawnClonerLink
// 0x0018 (0x00CC - 0x00B4)
class UGearboxSeqAct_PawnClonerLink : public USeqAct_Latent
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsSpawning : 1;                                  		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class AActor* >                            ClonePoints;                                      		// 0x00B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SpawnedCount;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              RemainingDelay;                                   		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43227 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleInstanceData
// 0x002F (0x007C - 0x004D)
class UGFxMovieDrawStyleInstanceData : public UGFxMovieDrawStyleRTT
{
public:
	struct FName                                       ComponentIDName;                                  		// 0x0050 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MatIndexName;                                     		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlwaysInstance : 1;                              		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UMaterial*                                   MatiSource;                                       		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TextureParameterName;                             		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMeshComponent*                              Component;                                        		// 0x0070 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	int                                                MaterialIndex;                                    		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   Mati;                                             		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43400 ];

		return pClassPointer;
	};

	bool eventRequiresClientInstance ( );
};

// Class GearboxFramework.SeqEvent_AllSpawned
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_AllSpawned : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43702 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.PopulationMasterAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UPopulationMasterAttributeContextResolver : public UAttributeContextResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44011 ];

		return pClassPointer;
	};

	class UObject* GetAttributeContext ( class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource );
};

// Class GearboxFramework.SeqEvent_SinglePopulationDeath
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_SinglePopulationDeath : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44189 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RES_Rotation
// 0x0000 (0x003C - 0x003C)
class URES_Rotation : public UActionResource
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44342 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.RES_SpecialMove
// 0x0000 (0x003C - 0x003C)
class URES_SpecialMove : public UActionResource
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44345 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_ArrivedAtMoveNode
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_ArrivedAtMoveNode : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44423 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_LeavingMoveNode
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_LeavingMoveNode : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44428 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.ShowDebugHelpers
// 0x0000 (0x003C - 0x003C)
class UShowDebugHelpers : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44445 ];

		return pClassPointer;
	};

};

// Class GearboxFramework.SkeletalMeshActorGBXMatinee
// 0x0000 (0x01CC - 0x01CC)
class ASkeletalMeshActorGBXMatinee : public ASkeletalMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44459 ];

		return pClassPointer;
	};

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif