#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_MAX_VANTAGES_PER_LOOKER                            3
#define CONST_MAX_HIT_TARGET_RECORDS                             5
#define CONST_SNAPSHOT_MAX                                       50
#define CONST_SecondsToRememberRecentIncomingShots               3.0
#define CONST_MaxContainedRules                                  45
#define CONST_TimeToMarkTargetsWhoShotAtMe                       10.0
#define CONST_OFFSCREEN_BUCKET                                   3
#define CONST_SKIP_UPDATE_TIME                                   0.1f
#define CONST_SPLITSCREEN_CHARACTER_COUNT                        2
#define CONST_MaxTimeMSAllowedPerFrame                           1.f
#define CONST_ScreenBaseX                                        640
#define CONST_ScreenBaseY                                        480

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GearboxFramework.AIComponent.AINodeType
//enum class EAINodeType : uint8_t
//{
//	NodeType_Blank                 = 0,
//	NodeType_Action                = 1,
//	NodeType_Random                = 2,
//	NodeType_Priority              = 3,
//	NodeType_Sequential            = 4,
//	NodeType_MAX                   = 5
//};


// Enum GearboxFramework.AIComponent.AIFailReason
//enum class EAIFailReason : uint8_t
//{
//	AIFail_None                    = 0,
//	AIFail_Timer                   = 1,
//	AIFail_Failed                  = 2,
//	AIFail_Action                  = 3,
//	AIFail_Resource                = 4,
//	AIFail_Conditional             = 5,
//	AIFail_MAX                     = 6
//};


// Enum GearboxFramework.GearboxGlobals.EGBXPlatform
//enum class EGBXPlatform : uint8_t
//{
//	GBXPlatform_PC                 = 0,
//	GBXPlatform                    = 1,
//	GBXPlatform_PS3                = 2,
//	GBXPlatform_MAX                = 3
//};


// Enum GearboxFramework.GearboxGlobals.EDifficultyLevel
//enum class EDifficultyLevel : uint8_t
//{
//	DL_Casual                      = 0,
//	DL_Normal                      = 1,
//	DL_Hardcore                    = 2,
//	DL_Insane                      = 3,
//	DL_MAX                         = 4
//};


// Enum GearboxFramework.GearboxGlobals.EGearboxCoverTransition
//enum class EGearboxCoverTransition : uint8_t
//{
//	GBXCOVERTRANS_None             = 0,
//	GBXCOVERTRANS_Detach           = 1,
//	GBXCOVERTRANS_PoppingUp        = 2,
//	GBXCOVERTRANS_LeaningOut       = 3,
//	GBXCOVERTRANS_PeekingUp        = 4,
//	GBXCOVERTRANS_BlindFiringUp    = 5,
//	GBXCOVERTRANS_ReturnToCover    = 6,
//	GBXCOVERTRANS_Mounting         = 7,
//	GBXCOVERTRANS_Dismounting      = 8,
//	GBXCOVERTRANS_Mantling         = 9,
//	GBXCOVERTRANS_ChangingDirection = 10,
//	GBXCOVERTRANS_GameSpecific     = 11,
//	GBXCOVERTRANS_Reserved1        = 12,
//	GBXCOVERTRANS_Reserved2        = 13,
//	GBXCOVERTRANS_Reserved3        = 14,
//	GBXCOVERTRANS_Reserved4        = 15,
//	GBXCOVERTRANS_Reserved5        = 16,
//	GBXCOVERTRANS_Reserved6        = 17,
//	GBXCOVERTRANS_Reserved7        = 18,
//	GBXCOVERTRANS_Reserved8        = 19,
//	GBXCOVERTRANS_Reserved9        = 20,
//	GBXCOVERTRANS_MAX              = 21
//};


// Enum GearboxFramework.GearboxGlobals.EGearboxCoverStateMetaData
//enum class EGearboxCoverStateMetaData : uint8_t
//{
//	GBXCOVERMETA_None              = 0,
//	GBXCOVERMETA_Detach            = 1,
//	GBXCOVERMETA_Left              = 2,
//	GBXCOVERMETA_Right             = 3,
//	GBXCOVERMETA_Interior          = 4,
//	GBXCOVERMETA_Dismount_SurpriseLeft = 5,
//	GBXCOVERMETA_Dismount_SurpriseRight = 6,
//	GBXCOVERMETA_Dismount_SurpriseTowardCover = 7,
//	GBXCOVERMETA_Dismount_SurpriseWith180Turn = 8,
//	GBXCOVERMETA_Dismount_Wallhop  = 9,
//	GBXCOVERMETA_Dismount_TowardCover = 10,
//	GBXCOVERMETA_Dismount_With180Turn = 11,
//	GBXCOVERMETA_GameSpecific      = 12,
//	GBXCOVERMETA_Reserved1         = 13,
//	GBXCOVERMETA_Reserved2         = 14,
//	GBXCOVERMETA_Reserved3         = 15,
//	GBXCOVERMETA_Reserved4         = 16,
//	GBXCOVERMETA_Reserved5         = 17,
//	GBXCOVERMETA_Reserved6         = 18,
//	GBXCOVERMETA_Reserved7         = 19,
//	GBXCOVERMETA_Reserved8         = 20,
//	GBXCOVERMETA_Reserved9         = 21,
//	GBXCOVERMETA_MAX               = 22
//};


// Enum GearboxFramework.GearboxGlobals.EGearboxCoverState
//enum class EGearboxCoverState : uint8_t
//{
//	GBXCOVERSTATE_Uncovered        = 0,
//	GBXCOVERSTATE_Covered          = 1,
//	GBXCOVERSTATE_PoppedUp         = 2,
//	GBXCOVERSTATE_LeanedOut        = 3,
//	GBXCOVERSTATE_Peeking          = 4,
//	GBXCOVERSTATE_BlindFiring      = 5,
//	GBXCOVERSTATE_Mantling         = 6,
//	GBXCOVERSTATE_GameSpecific     = 7,
//	GBXCOVERSTATE_Reserved1        = 8,
//	GBXCOVERSTATE_Reserved2        = 9,
//	GBXCOVERSTATE_Reserved3        = 10,
//	GBXCOVERSTATE_Reserved4        = 11,
//	GBXCOVERSTATE_Reserved5        = 12,
//	GBXCOVERSTATE_Reserved6        = 13,
//	GBXCOVERSTATE_Reserved7        = 14,
//	GBXCOVERSTATE_Reserved8        = 15,
//	GBXCOVERSTATE_Reserved9        = 16,
//	GBXCOVERSTATE_MAX              = 17
//};


// Enum GearboxFramework.GearboxGlobals.EVantageType
//enum class EVantageType : uint8_t
//{
//	VTYPE_Normal                   = 0,
//	VTYPE_StandingUp               = 1,
//	VTYPE_OverWall                 = 2,
//	VTYPE_AroundCorner             = 3,
//	VTYPE_MAX                      = 4
//};


// Enum GearboxFramework.GearboxGlobals.AwarenessReason
//enum class EAwarenessReason : uint8_t
//{
//	AWAREREASON_SawEnemy           = 0,
//	AWAREREASON_HeardEnemy         = 1,
//	AWAREREASON_HeardWeaponNoise   = 2,
//	AWAREREASON_NotifiedByFireTeam = 3,
//	AWAREREASON_NotifiedByPlayer   = 4,
//	AWAREREASON_SuppressOrderGiven = 5,
//	AWAREREASON_AttackedByEnemy    = 6,
//	AWAREREASON_BulletImpactOrWhiz = 7,
//	AWAREREASON_GrenadeFromEnemy   = 8,
//	AWAREREASON_LevelDesignForceSee = 9,
//	AWAREREASON_FriendlyKilled     = 10,
//	AWAREREASON_MAX                = 11
//};


// Enum GearboxFramework.GearboxGlobals.ELocationSearchRandomness
//enum class ELocationSearchRandomness : uint8_t
//{
//	ELOCRAND_PreferIdealDirection  = 0,
//	ELOCRAND_PreferRandomLight     = 1,
//	ELOCRAND_PreferRandomHeavy     = 2,
//	ELOCRAND_MAX                   = 3
//};


// Enum GearboxFramework.GearboxGlobals.ERepathBehavior
//enum class ERepathBehavior : uint8_t
//{
//	REPATH_None                    = 0,
//	REPATH_IfOriginMoves           = 1,
//	REPATH_IfCoverBecomesInvalid   = 2,
//	REPATH_MAX                     = 3
//};


// Enum GearboxFramework.GearboxGlobals.ECoverFailureBehavior
//enum class ECoverFailureBehavior : uint8_t
//{
//	COVERFAIL_TryToFindNonCoverSpot = 0,
//	COVERFAIL_StopSearch           = 1,
//	COVERFAIL_MAX                  = 2
//};


// Enum GearboxFramework.GearboxGlobals.ECoverSearchFilter
//enum class ECoverSearchFilter : uint8_t
//{
//	COVERSEARCH_Normal             = 0,
//	COVERSEARCH_IgnoreCurrentCover = 1,
//	COVERSEARCH_MAX                = 2
//};


// Enum GearboxFramework.GearboxGlobals.EDestinationAdditionalTest
//enum class EDestinationAdditionalTest : uint8_t
//{
//	DESTTEST_None                  = 0,
//	DESTTEST_HasLOSToTarget        = 1,
//	DESTTEST_BlockedLOSToTarget    = 2,
//	DESTTEST_MAX                   = 3
//};


// Enum GearboxFramework.GearboxGlobals.EMaterialParamType
//enum class EMaterialParamType : uint8_t
//{
//	MatParmType_None               = 0,
//	MatParmType_Color              = 1,
//	MatParmType_Font               = 2,
//	MatParmType_Scalar             = 3,
//	MatParmType_Texture            = 4,
//	MatParmType_Vector             = 5,
//	MatParmType_MAX                = 6
//};


// Enum GearboxFramework.GearboxGlobals.ECameraZoomScale
//enum class ECameraZoomScale : uint8_t
//{
//	EZOOM_NoChange                 = 0,
//	EZOOM_UltraClose               = 1,
//	EZOOM_Close                    = 2,
//	EZOOM_MidRange                 = 3,
//	EZOOM_Wide                     = 4,
//	EZOOM_MAX                      = 5
//};


// Enum GearboxFramework.GearboxGlobals.ECameraInterpolationMode
//enum class ECameraInterpolationMode : uint8_t
//{
//	IM_Logarithmic                 = 0,
//	IM_Linear                      = 1,
//	IM_SineCurve                   = 2,
//	IM_MAX                         = 3
//};


// Enum GearboxFramework.GearboxGlobals.EFacingPolicy
//enum class EFacingPolicy : uint8_t
//{
//	FACE_Unknown                   = 0,
//	FACE_NoChange                  = 1,
//	FACE_Actor                     = 2,
//	FACE_Vector                    = 3,
//	FACE_Destination               = 4,
//	FACE_CoverRegionIdle           = 5,
//	FACE_MAX                       = 6
//};


// Enum GearboxFramework.GearboxGlobals.EMovementSpeed
//enum class EMovementSpeed : uint8_t
//{
//	MOVESPEED_Stationary           = 0,
//	MOVESPEED_Walking              = 1,
//	MOVESPEED_Running              = 2,
//	MOVESPEED_Sprinting            = 3,
//	MOVESPEED_FastSprinting        = 4,
//	MOVESPEED_MAX                  = 5
//};


// Enum GearboxFramework.GearboxGlobals.EMovementFinishedCause
//enum class EMovementFinishedCause : uint8_t
//{
//	MOVEFINISHED_None              = 0,
//	MOVEFINISHED_FailedToFindCover = 1,
//	MOVEFINISHED_FailedFindSearchOrigin = 2,
//	MOVEFINISHED_FailedFindSearchDirection = 3,
//	MOVEFINISHED_FailedFindNavMeshSpot = 4,
//	MOVEFINISHED_FailedToGeneratePath = 5,
//	MOVEFINISHED_FailedToCompleteNavigation = 6,
//	MOVEFINISHED_Repath            = 7,
//	MOVEFINISHED_MovementInterrupted = 8,
//	MOVEFINISHED_MoveSuccessfullyEnded = 9,
//	MOVEFINISHED_MAX               = 10
//};


// Enum GearboxFramework.Action_PawnMovementBase.EAttributeEvaluationStyle
//enum class EAttributeEvaluationStyle : uint8_t
//{
//	ATTREVALSTYLE_Once             = 0,
//	ATTREVALSTYLE_EveryFrame       = 1,
//	ATTREVALSTYLE_MAX              = 2
//};


// Enum GearboxFramework.BehaviorProviderDefinition.EBehaviorVariableType
//enum class EBehaviorVariableType : uint8_t
//{
//	BVAR_None                      = 0,
//	BVAR_Bool                      = 1,
//	BVAR_Int                       = 2,
//	BVAR_Float                     = 3,
//	BVAR_Vector                    = 4,
//	BVAR_Object                    = 5,
//	BVAR_AllPlayers                = 6,
//	BVAR_Attribute                 = 7,
//	BVAR_InstanceData              = 8,
//	BVAR_NamedVariable             = 9,
//	BVAR_NamedKismetVariable       = 10,
//	BVAR_DirectionVector           = 11,
//	BVAR_AttachmentLocation        = 12,
//	BVAR_UnaryMath                 = 13,
//	BVAR_BinaryMath                = 14,
//	BVAR_Flag                      = 15,
//	BVAR_MAX                       = 16
//};


// Enum GearboxFramework.BehaviorProviderDefinition.EBehaviorVariableLinkType
//enum class EBehaviorVariableLinkType : uint8_t
//{
//	BVARLINK_Unknown               = 0,
//	BVARLINK_Context               = 1,
//	BVARLINK_Input                 = 2,
//	BVARLINK_Output                = 3,
//	BVARLINK_MAX                   = 4
//};


// Enum GearboxFramework.AIDebugCamera.EDebugItemType
//enum class EDebugItemType : uint8_t
//{
//	DEBUGITEM_String               = 0,
//	DEBUGITEM_StringSpacer         = 1,
//	DEBUGITEM_ScreenIcon           = 2,
//	DEBUGITEM_WorldString          = 3,
//	DEBUGITEM_Icon                 = 4,
//	DEBUGITEM_Line                 = 5,
//	DEBUGITEM_Box                  = 6,
//	DEBUGITEM_Circle               = 7,
//	DEBUGITEM_Cone                 = 8,
//	DEBUGITEM_BarGraphScreenTop    = 9,
//	DEBUGITEM_BarGraphScreenTopTitle = 10,
//	DEBUGITEM_BarGraphScreenCenter = 11,
//	DEBUGITEM_BarGraphScreenCenterTitle = 12,
//	DEBUGITEM_MAX                  = 13
//};


// Enum GearboxFramework.AIDebugCamera.EDebugAlignment
//enum class EDebugAlignment : uint8_t
//{
//	DEBUGALIGN_Left                = 0,
//	DEBUGALIGN_Center              = 1,
//	DEBUGALIGN_Right               = 2,
//	DEBUGALIGN_LeftNoWrap          = 3,
//	DEBUGALIGN_LeftColumn2         = 4,
//	DEBUGALIGN_LeftColumn2NoWrap   = 5,
//	DEBUGALIGN_MAX                 = 6
//};


// Enum GearboxFramework.AIDefinition.ENPCOnUsedOutputs
//enum class ENPCOnUsedOutputs : uint8_t
//{
//	USEDNPC_HasMissions            = 0,
//	USEDNPC_NoMissions             = 1,
//	USEDNPC_Generic                = 2,
//	USEDNPC_MAX                    = 3
//};


// Enum GearboxFramework.AIResourceExpressionEvaluator.AIResourceOption
//enum class EAIResourceOption : uint8_t
//{
//	AIResourceOption_On            = 0,
//	AIResourceOption_Off           = 1,
//	AIResourceOption_MAX           = 2
//};


// Enum GearboxFramework.GearboxEditorNode.NodeType
//enum class ENodeType : uint8_t
//{
//	NT_Event                       = 0,
//	NT_Action                      = 1,
//	NT_Variable                    = 2,
//	NT_MAX                         = 3
//};


// Enum GearboxFramework.AITracker.ESnapshotEventType
//enum class ESnapshotEventType : uint8_t
//{
//	SNAP_NoEvent                   = 0,
//	SNAP_ChildSequenceStart        = 1,
//	SNAP_RuleStart                 = 2,
//	SNAP_RuleEnd                   = 3,
//	SNAP_RuleInterrupt             = 4,
//	SNAP_SwitchRuleSet             = 5,
//	SNAP_PreventNewRules           = 6,
//	SNAP_MAX                       = 7
//};


// Enum GearboxFramework.AllegianceExpressionEvaluator.EAllegianceExpression
//enum class EAllegianceExpression : uint8_t
//{
//	EAllegianceExpression_IsAllegiance = 0,
//	EAllegianceExpression_IsNotAllegiance = 1,
//	EAllegianceExpression_MAX      = 2
//};


// Enum GearboxFramework.AnimNodeSpecialMoveBlend.EAnimState
//enum class EAnimState : uint8_t
//{
//	EAnimState_None                = 0,
//	EAnimState_Playing             = 1,
//	EAnimState_Finished            = 2,
//	EAnimState_BlendingOut         = 3,
//	EAnimState_MAX                 = 4
//};


// Enum GearboxFramework.AwarenessZoneDefinition.EViewConeStyle
//enum class EViewConeStyle : uint8_t
//{
//	VIEWCONE_UseSightBone          = 0,
//	VIEWCONE_UsePawnRotation       = 1,
//	VIEWCONE_MAX                   = 2
//};


// Enum GearboxFramework.AwarenessZoneDefinition.ESpecialExposureBehavior
//enum class ESpecialExposureBehavior : uint8_t
//{
//	EXPOSUREBEHAVIOR_Normal        = 0,
//	EXPOSUREBEHAVIOR_AlwaysSeeThreats = 1,
//	EXPOSUREBEHAVIOR_NeverSeeThreats = 2,
//	EXPOSUREBEHAVIOR_MAX           = 3
//};


// Enum GearboxFramework.AwarenessZoneDefinition.EHearingBehavior
//enum class EHearingBehavior : uint8_t
//{
//	HEARINGBEHAVIOR_NeverHear      = 0,
//	HEARINGBEHAVIOR_HearIfExposed  = 1,
//	HEARINGBEHAVIOR_AlwaysHear     = 2,
//	HEARINGBEHAVIOR_MAX            = 3
//};


// Enum GearboxFramework.Behavior_AIHold.AIHoldAction
//enum class EAIHoldAction : uint8_t
//{
//	AIHold_Hold                    = 0,
//	AIHold_Release                 = 1,
//	AIHold_MAX                     = 2
//};


// Enum GearboxFramework.Behavior_AIHold.AIHoldType
//enum class EAIHoldType : uint8_t
//{
//	AIHoldType_AI                  = 0,
//	AIHoldType_Target              = 1,
//	AIHoldType_Movement            = 2,
//	AIHoldType_Demigod             = 3,
//	AIHoldType_God                 = 4,
//	AIHoldType_Dialog              = 5,
//	AIHoldType_MAX                 = 6
//};


// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerID
//enum class EBehaviorTimerID : uint8_t
//{
//	BTIMER                         = 0,
//	BTIMER01                       = 1,
//	BTIMER02                       = 2,
//	BTIMER_MAX                     = 3
//};


// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerEvent
//enum class EBehaviorTimerEvent : uint8_t
//{
//	TIMEREVENT_Timer1Elapsed       = 0,
//	TIMEREVENT_Timer2Elapsed       = 1,
//	TIMEREVENT_Timer3Elapsed       = 2,
//	TIMEREVENT_MAX                 = 3
//};


// Enum GearboxFramework.Behavior_ChangeTimer.EBehaviorTimerReaction
//enum class EBehaviorTimerReaction : uint8_t
//{
//	TR_NoChange                    = 0,
//	TR_Start                       = 1,
//	TR_Stop                        = 2,
//	TR_Toggle                      = 3,
//	TR_ResetValue                  = 4,
//	TR_MAX                         = 5
//};


// Enum GearboxFramework.Behavior_CompareBool.ECompareBoolOutputLinkIds
//enum class ECompareBoolOutputLinkIds : uint8_t
//{
//	OUTPUT_True                    = 0,
//	OUTPUT_False                   = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum GearboxFramework.Behavior_CompareValues.ECompareValuesOutputLinkIds
//enum class ECompareValuesOutputLinkIds : uint8_t
//{
//	OUTPUT_LessThanOrEqual         = 0,
//	OUTPUT_GreaterThan             = 1,
//	OUTPUT_Equal                   = 2,
//	OUTPUT_LessThan                = 3,
//	OUTPUT_GreaterThanOrEqual      = 4,
//	OUTPUT_MAX                     = 5
//};


// Enum GearboxFramework.Behavior_IsSequenceEnabled.EIsSequenceOutputLinkIds
//enum class EIsSequenceOutputLinkIds : uint8_t
//{
//	OUTPUT_SequenceIsEnabled       = 0,
//	OUTPUT_SequenceIsDisabled      = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum GearboxFramework.Behavior_ModifyTimer.BehaviorTimerFunction
//enum class EBehaviorTimerFunction : uint8_t
//{
//	BETF_None                      = 0,
//	BETF_Start                     = 1,
//	BETF_Pause                     = 2,
//	BETF_Toggle                    = 3,
//	BETF_Resume                    = 4,
//	BETF_Stop                      = 5,
//	BETF_MAX                       = 6
//};


// Enum GearboxFramework.Behavior_PostAkEvent.EPostAkEventOutputLinks
//enum class EPostAkEventOutputLinks : uint8_t
//{
//	POSTAK_Out                     = 0,
//	POSTAK_Finished                = 1,
//	POSTAK_MAX                     = 2
//};


// Enum GearboxFramework.Behavior_SendGbxMessage.MessageBehaviorLogic
//enum class EMessageBehaviorLogic : uint8_t
//{
//	SENDERLOGIC_None               = 0,
//	SENDERLOGIC_UseBehaviorContext = 1,
//	SENDERLOGIC_Self               = 2,
//	SENDERLOGIC_MyInstigator       = 3,
//	SENDERLOGIC_Other              = 4,
//	SENDERLOGIC_MAX                = 5
//};


// Enum GearboxFramework.GbxMessageDefinition.EGbxMessageDupeStruct
//enum class EGbxMessageDupeStruct : uint8_t
//{
//	GBXMSGDUPE_SameSender          = 0,
//	GBXMSGDUPE_SameSubject         = 1,
//	GBXMSGDUPE_SameNameData        = 2,
//	GBXMSGDUPE_SameIntData         = 3,
//	GBXMSGDUPE_SameFloatData       = 4,
//	GBXMSGDUPE_SameMetaData1       = 5,
//	GBXMSGDUPE_SameMetaData2       = 6,
//	GBXMSGDUPE_SameMetaData3       = 7,
//	GBXMSGDUPE_SameMetaData4       = 8,
//	GBXMSGDUPE_MAX                 = 9
//};


// Enum GearboxFramework.Behavior_SpecialMove.ETriggerSpecialMoveOutputLinks
//enum class ETriggerSpecialMoveOutputLinks : uint8_t
//{
//	TRIGGER_SPECIALMOVE_Out        = 0,
//	TRIGGER_SPECIALMOVE_Finished   = 1,
//	TRIGGER_SPECIALMOVE_MAX        = 2
//};


// Enum GearboxFramework.Behavior_ToggleDialog.EToggleDialogOption
//enum class EToggleDialogOption : uint8_t
//{
//	ToggleDialog_Toggle            = 0,
//	ToggleDialog_Enable            = 1,
//	ToggleDialog_Disable           = 2,
//	ToggleDialog_MAX               = 3
//};


// Enum GearboxFramework.Behavior_TriggerDialogEvent.ETriggerDialogEventOutputLinks
//enum class ETriggerDialogEventOutputLinks : uint8_t
//{
//	TRIGGER_EVENT_Out              = 0,
//	TRIGGER_EVENT_Finished         = 1,
//	TRIGGER_EVENT_MAX              = 2
//};


// Enum GearboxFramework.BehaviorHelpers.EFireSocketSelectionMethod
//enum class EFireSocketSelectionMethod : uint8_t
//{
//	FSSM_Increment                 = 0,
//	FSSM_Random                    = 1,
//	FSSM_RandomLooping             = 2,
//	FSSM_MAX                       = 3
//};


// Enum GearboxFramework.BehaviorHelpers.EDirectionRelativeToParent
//enum class EDirectionRelativeToParent : uint8_t
//{
//	DIRECTION_Default              = 0,
//	DIRECTION_ParentOrientation    = 1,
//	DIRECTION_InverseParentOrientation = 2,
//	DIRECTION_ParentVelocity       = 3,
//	DIRECTION_InverseParentVelocity = 4,
//	DIRECTION_Random               = 5,
//	DIRECTION_RandomUpwards        = 6,
//	DIRECTION_RandomDownwards      = 7,
//	DIRECTION_RandomOnHorizontalPlane = 8,
//	DIRECTION_StraightUp           = 9,
//	DIRECTION_StraightDown         = 10,
//	DIRECTION_StraightTowardTarget = 11,
//	DIRECTION_ParentAimDirection   = 12,
//	DIRECTION_InverseParentAimDirection = 13,
//	DIRECTION_InverseTearOffMomentum = 14,
//	DIRECTION_MAX                  = 15
//};


// Enum GearboxFramework.BehaviorKernel.EBehaviorProcessState
//enum class EBehaviorProcessState : uint8_t
//{
//	BPROCESS_Uninitialized         = 0,
//	BPROCESS_Terminated            = 1,
//	BPROCESS_Running               = 2,
//	BPROCESS_Suspended             = 3,
//	BPROCESS_MAX                   = 4
//};


// Enum GearboxFramework.BehaviorKernel.EBehaviorThreadState
//enum class EBehaviorThreadState : uint8_t
//{
//	BTHREAD_Waiting                = 0,
//	BTHREAD_Running                = 1,
//	BTHREAD_Terminated             = 2,
//	BTHREAD_Unknown                = 3,
//	BTHREAD_MAX                    = 4
//};


// Enum GearboxFramework.BehaviorSequenceEnableByMultipleConditions.EMultiConditionOperator
//enum class EMultiConditionOperator : uint8_t
//{
//	EMCL_OR                        = 0,
//	EMCL_AND                       = 1,
//	EMCL_MAX                       = 2
//};


// Enum GearboxFramework.InterfaceGearboxCamera.ECameraLookAtMode
//enum class ECameraLookAtMode : uint8_t
//{
//	CLAM_FirstPerson               = 0,
//	CLAM_ThirdPersonAlignWithPlayer = 1,
//	CLAM_ThirdPersonAlignBetweenPlayerAndTarget = 2,
//	CLAM_MAX                       = 3
//};


// Enum GearboxFramework.CharacterClassMessageDefinition.EBehaviorMsgInstigator
//enum class EBehaviorMsgInstigator : uint8_t
//{
//	BEHAVMSGINST_NoInstigator      = 0,
//	BEHAVMSGINST_UseMsgSender      = 1,
//	BEHAVMSGINST_UseMsgSubject     = 2,
//	BEHAVMSGINST_UseAddlData       = 3,
//	BEHAVMSGINST_MAX               = 4
//};


// Enum GearboxFramework.CharacterClassMessageDefinition.EBehaviorMsgEventParticipant
//enum class EBehaviorMsgEventParticipant : uint8_t
//{
//	BEHAVMSGPART_NoInstigator      = 0,
//	BEHAVMSGPART_UseMsgSender      = 1,
//	BEHAVMSGPART_UseMsgSubject     = 2,
//	BEHAVMSGPART_UseAddlData       = 3,
//	BEHAVMSGPART_MAX               = 4
//};


// Enum GearboxFramework.CompoundExpressionEvaluator.ECExpressionOperatorType
//enum class ECExpressionOperatorType : uint8_t
//{
//	CEOP_Or                        = 0,
//	CEOP_And                       = 1,
//	CEOP_MAX                       = 2
//};


// Enum GearboxFramework.FiringPattern.EPointSpreadType
//enum class EPointSpreadType : uint8_t
//{
//	POINTSPREAD_Linear             = 0,
//	POINTSPREAD_Squared            = 1,
//	POINTSPREAD_InverseSquared     = 2,
//	POINTSPREAD_Cubed              = 3,
//	POINTSPREAD_InverseCubed       = 4,
//	POINTSPREAD_MAX                = 5
//};


// Enum GearboxFramework.Rule.ExecutionPatternType
//enum class ExecutionPatternType : uint8_t
//{
//	RULEEXEC_Normal                = 0,
//	RULEEXEC_Limited               = 1,
//	RULEEXEC_MAX                   = 2
//};


// Enum GearboxFramework.Rule.EFlagEvalType
//enum class EFlagEvalType : uint8_t
//{
//	FLAG_IsTrue                    = 0,
//	FLAG_IsFalse                   = 1,
//	FLAG_HasBeenTrueForXSeconds    = 2,
//	FLAG_HasBeenFalseForXSeconds   = 3,
//	FLAG_MAX                       = 4
//};


// Enum GearboxFramework.SparkTypes.EInitializedResult
//enum class EInitializedResult : uint8_t
//{
//	INITIALIZED_ValidWithAccount   = 0,
//	INITIALIZED_ValidNoAccount     = 1,
//	INITIALIZED_InProgress         = 2,
//	INITIALIZED_NetworkFailure     = 3,
//	INITIALIZED_PlatformFailure    = 4,
//	INITIALIZED_NotValid           = 5,
//	INITIALIZED_MAX                = 6
//};


// Enum GearboxFramework.SparkTypes.EHttpError
//enum class EHttpError : uint8_t
//{
//	HE_Success                     = 0,
//	HE_UnknownFailure              = 1,
//	HE_Timeout                     = 2,
//	HE_BadUrl                      = 3,
//	HE_Connect                     = 4,
//	HE_SendRequest                 = 5,
//	HE_ReceiveResponse             = 6,
//	HE_ReadResponse                = 7,
//	HE_WriteData                   = 8,
//	HE_HttpStatus                  = 9,
//	HE_ServerCertificate           = 10,
//	HE_MAX                         = 11
//};


// Enum GearboxFramework.SparkTypes.ESparkStepResult
//enum class ESparkStepResult : uint8_t
//{
//	STEP_Success                   = 0,
//	STEP_Fail                      = 1,
//	STEP_Async                     = 2,
//	STEP_Disable                   = 3,
//	STEP_Final                     = 4,
//	STEP_MAX                       = 5
//};


// Enum GearboxFramework.SparkTypes.EAgreementsSigning
//enum class EAgreementsSigning : uint8_t
//{
//	AGREEMENTS_Undefined           = 0,
//	AGREEMENTS_NoAgreementsToSign  = 1,
//	AGREEMENTS_AgreementsToSignPending = 2,
//	AGREEMENTS_AgreementsToSignDeclined = 3,
//	AGREEMENTS_MAX                 = 4
//};


// Enum GearboxFramework.SparkTypes.ESparkInitializationStatus
//enum class ESparkInitializationStatus : uint8_t
//{
//	SPARKINIT_Uninitialized        = 0,
//	SPARKINIT_TMSDownloaded        = 1,
//	SPARKINIT_PendingAuthentication = 2,
//	SPARKINIT_PendingVerification  = 3,
//	SPARKINIT_VerificationComplete = 4,
//	SPARKINIT_Initialized          = 5,
//	SPARKINIT_Disabled             = 6,
//	SPARKINIT_UnrecoverableError   = 7,
//	SPARKINIT_MAX                  = 8
//};


// Enum GearboxFramework.SparkInterface.HttpMethod
//enum class EHttpMethod : uint8_t
//{
//	HM_POST                        = 0,
//	HM_GET                         = 1,
//	HM_PUT                         = 2,
//	HM_MAX                         = 3
//};


// Enum GearboxFramework.SparkInterface.HttpMimeType
//enum class EHttpMimeType : uint8_t
//{
//	HMT_Default                    = 0,
//	HMT_TEXT_PLAIN                 = 1,
//	HMT_JSON                       = 2,
//	HMT_PROTOBUF                   = 3,
//	HMT_CUSTOM                     = 4,
//	HMT_MAX                        = 5
//};


// Enum GearboxFramework.GearboxAccountActions.ESignInResult
//enum class ESignInResult : uint8_t
//{
//	SIGNIN_Success                 = 0,
//	SIGNIN_PlatformTakenByOther    = 1,
//	SIGNIN_PlatformTakenBySelf     = 2,
//	SIGNIN_LoginFail               = 3,
//	SIGNIN_NetworkFailure          = 4,
//	SIGNIN_GeneralFailure          = 5,
//	SIGNIN_Timeout                 = 6,
//	SIGNIN_MAX                     = 7
//};


// Enum GearboxFramework.GearboxAccountActions.ESignUpResult
//enum class ESignUpResult : uint8_t
//{
//	SIGNUP_Success                 = 0,
//	SIGNUP_EmailTaken              = 1,
//	SIGNUP_PlatformTaken           = 2,
//	SIGNUP_GeneralFailure          = 3,
//	SIGNUP_PasswordNotSet          = 4,
//	SIGNUP_PasswordTooShort        = 5,
//	SIGNUP_PasswordTooLong         = 6,
//	SIGNUP_PasswordInvalid         = 7,
//	SIGNUP_EmailNotSet             = 8,
//	SIGNUP_EmailNotValid           = 9,
//	SIGNUP_NetworkFailure          = 10,
//	SIGNUP_Timeout                 = 11,
//	SIGNUP_MAX                     = 12
//};


// Enum GearboxFramework.GearboxAccountActions.EAgeGateResult
//enum class EAgeGateResult : uint8_t
//{
//	AGE_Valid                      = 0,
//	AGE_InvalidDate                = 1,
//	AGE_BelowMinimum               = 2,
//	AGE_MAX                        = 3
//};


// Enum GearboxFramework.GearboxAccountActions.EResetPasswordResult
//enum class EResetPasswordResult : uint8_t
//{
//	RESETP_Success                 = 0,
//	RESETP_GeneralFailure          = 1,
//	RESETP_NetworkFailure          = 2,
//	RESETP_Timeout                 = 3,
//	RESETP_MAX                     = 4
//};


// Enum GearboxFramework.GearboxAccountActions.ECodeRedeemedResult
//enum class ECodeRedeemedResult : uint8_t
//{
//	REDEEM_Success                 = 0,
//	REDEEM_Expired                 = 1,
//	REDEEM_NotValid                = 2,
//	REDEEM_Taken                   = 3,
//	REDEEM_GeneralFailure          = 4,
//	REDEEM_NetworkFailure          = 5,
//	REDEEM_Timeout                 = 6,
//	REDEEM_Duplicate               = 7,
//	REDEEM_MAX                     = 8
//};


// Enum GearboxFramework.GearboxAccountActions.EEntitlementConsumedResult
//enum class EEntitlementConsumedResult : uint8_t
//{
//	CONSUME_Success                = 0,
//	CONSUME_GeneralFailure         = 1,
//	CONSUME_NetworkFailure         = 2,
//	CONSUME_Timeout                = 3,
//	CONSUME_MAX                    = 4
//};


// Enum GearboxFramework.GearboxAnimDefinition.EEndingCondition
//enum class EEndingCondition : uint8_t
//{
//	EC_StopOnLastFrame             = 0,
//	EC_OnAnimEnd                   = 1,
//	EC_OnBlendOut                  = 2,
//	EC_Loop                        = 3,
//	EC_MAX                         = 4
//};


// Enum GearboxFramework.GearboxDialogEventTag.EDialogEventMatchQuality
//enum class EDialogEventMatchQuality : uint8_t
//{
//	MQ_NoMatch                     = 0,
//	MQ_Match                       = 1,
//	MQ_ForceMatch                  = 2,
//	MQ_MAX                         = 3
//};


// Enum GearboxFramework.GFxMovieState.EMovieStateMode
//enum class EMovieStateMode : uint8_t
//{
//	MOVIESTATE_Any                 = 0,
//	MOVIESTATE_StateMachine        = 1,
//	MOVIESTATE_Flags               = 2,
//	MOVIESTATE_Custom              = 3,
//	MOVIESTATE_MAX                 = 4
//};


// Enum GearboxFramework.GFxMovieState.EStateApplyMode
//enum class EStateApplyMode : uint8_t
//{
//	SAM_None                       = 0,
//	SAM_GotoAndStop                = 1,
//	SAM_GotoAndPlay                = 2,
//	SAM_ActionScript               = 3,
//	SAM_MAX                        = 4
//};


// Enum GearboxFramework.GFxActorMoviePool.EGFxMoviePooling
//enum class EGFxMoviePooling : uint8_t
//{
//	GMP_Pooled                     = 0,
//	GMP_Shared                     = 1,
//	GMP_Instanced                  = 2,
//	GMP_MAX                        = 3
//};


// Enum GearboxFramework.INounAttributeProvider.ENounReplicationStrategy
//enum class ENounReplicationStrategy : uint8_t
//{
//	NOUNREP_NoReplication          = 0,
//	NOUNREP_RepToOwnerOnly         = 1,
//	NOUNREP_RepToEveryone          = 2,
//	NOUNREP_MAX                    = 3
//};


// Enum GearboxFramework.GearboxProfileSettings.EGenericYesOrNo
//enum class EGenericYesOrNo : uint8_t
//{
//	GPID_VALUE_NO                  = 0,
//	GPID_VALUE_YES                 = 1,
//	GPID_VALUE_MAX                 = 2
//};


// Enum GearboxFramework.GearboxRenderTextureManager.EThumbnailUpdate
//enum class EThumbnailUpdate : uint8_t
//{
//	Thumbnail_Static               = 0,
//	Thumbnail_Update               = 1,
//	Thumbnail_StreamTextures       = 2,
//	Thumbnail_Dynamic              = 3,
//	Thumbnail_MAX                  = 4
//};


// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDAnchorPoint
//enum class EHUDAnchorPoint : uint8_t
//{
//	HAP_None                       = 0,
//	HAP_Center                     = 1,
//	HAP_TopLeft                    = 2,
//	HAP_TopRight                   = 3,
//	HAP_BottomLeft                 = 4,
//	HAP_BottomRight                = 5,
//	HAP_Left                       = 6,
//	HAP_Top                        = 7,
//	HAP_Right                      = 8,
//	HAP_Bottom                     = 9,
//	HAP_Projected                  = 10,
//	HAP_ProjectedScaled            = 11,
//	HAP_MAX                        = 12
//};


// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDOrientation
//enum class EHUDOrientation : uint8_t
//{
//	HO_Horizontal                  = 0,
//	HO_Vertical                    = 1,
//	HO_MAX                         = 2
//};


// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDCoordType
//enum class EHUDCoordType : uint8_t
//{
//	HCT_Scaled                     = 0,
//	HCT_Fixed                      = 1,
//	HCT_MovieRelative              = 2,
//	HCT_MAX                        = 3
//};


// Enum GearboxFramework.IPopulationSpawnPoint.EInitialActionType
//enum class EInitialActionType : uint8_t
//{
//	INITIALACTION_None             = 0,
//	INITIALACTION_MoveForward      = 1,
//	INITIALACTION_MoveToActor      = 2,
//	INITIALACTION_MoveToCover      = 3,
//	INITIALACTION_Burrow           = 4,
//	INITIALACTION_MAX              = 5
//};


// Enum GearboxFramework.IPopulationSpawnPoint.ESpawnStyleType
//enum class ESpawnStyleType : uint8_t
//{
//	ENTRANCE_None                  = 0,
//	ENTRANCE_WalkOut               = 1,
//	ENTRANCE_CrawlOut              = 2,
//	ENTRANCE_ClimbOver1            = 3,
//	ENTRANCE_ClimbOver2            = 4,
//	ENTRANCE_PushTarpAside1        = 5,
//	ENTRANCE_PushTarpAside2        = 6,
//	ENTRANCE_PhaseIn               = 7,
//	ENTRANCE_PerchedLeft           = 8,
//	ENTRANCE_PerchedRight          = 9,
//	ENTRANCE_MAX                   = 10
//};


// Enum GearboxFramework.KnowledgeRecord.KDBCategory
//enum class EKDBCategory : uint8_t
//{
//	KDB_None                       = 0,
//	KDB_Standard                   = 1,
//	KDB_MAX                        = 2
//};


// Enum GearboxFramework.KnowledgeRecord.KDBEvalType
//enum class EKDBEvalType : uint8_t
//{
//	Eval_Poll                      = 0,
//	Eval_TargetIterator            = 1,
//	Eval_MAX                       = 2
//};


// Enum GearboxFramework.MultipleFlagValueResolver.ValueResolveAggregationType
//enum class EValueResolveAggregationType : uint8_t
//{
//	AGGREG_AtLeastOne              = 0,
//	AGGREG_All                     = 1,
//	AGGREG_None                    = 2,
//	AGGREG_MAX                     = 3
//};


// Enum GearboxFramework.PopulationDefinition.EPopulationRespawnOptions
//enum class EPopulationRespawnOptions : uint8_t
//{
//	POPRESPAWN_Never               = 0,
//	POPRESPAWN_OnTimeDelay         = 1,
//	POPRESPAWN_OnlyOnLevelLoad     = 2,
//	POPRESPAWN_MAX                 = 3
//};


// Enum GearboxFramework.PopulationEncounter.EEncounterConstraintType
//enum class EEncounterConstraintType : uint8_t
//{
//	ENCOUNTERCONSTAINT_All         = 0,
//	ENCOUNTERCONSTAINT_Any         = 1,
//	ENCOUNTERCONSTAINT_NotAll      = 2,
//	ENCOUNTERCONSTAINT_NotAny      = 3,
//	ENCOUNTERCONSTAINT_MAX         = 4
//};


// Enum GearboxFramework.PopulationMaster.EPopulationStats
//enum class EPopulationStats : uint8_t
//{
//	STATTYPE_SpawnActor            = 0,
//	STATTYPE_PointSearch           = 1,
//	STATTYPE_MAX                   = 2
//};


// Enum GearboxFramework.PopulationPoint.EPopPointContraintType
//enum class EPopPointContraintType : uint8_t
//{
//	POPOINTCONSTRAINT_None         = 0,
//	POPOINTCONSTRAINT_Inclusion    = 1,
//	POPOINTCONSTRAINT_Exclusion    = 2,
//	POPOINTCONSTRAINT_InclusionOr  = 3,
//	POPOINTCONSTRAINT_ExclusionOr  = 4,
//	POPOINTCONSTRAINT_MAX          = 5
//};


// Enum GearboxFramework.PopulationPoint.EPopulationPointType
//enum class EPopulationPointType : uint8_t
//{
//	POINT_Ambush                   = 0,
//	POINT_PointOfInterest          = 1,
//	POINT_Vehicle                  = 2,
//	POINT_MAX                      = 3
//};


// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverOperand
//enum class EMathValueResolverOperand : uint8_t
//{
//	MATHRESOLVEROPERAND_Add        = 0,
//	MATHRESOLVEROPERAND_Sub        = 1,
//	MATHRESOLVEROPERAND_Mul        = 2,
//	MATHRESOLVEROPERAND_Div        = 3,
//	MATHRESOLVEROPERAND_MAX        = 4
//};


// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverArg1Option
//enum class EMathValueResolverArg1Option : uint8_t
//{
//	MATHRESOLVEARG1_UsePreviousValue = 0,
//	MATHRESOLVEARG1_FromAttribute  = 1,
//	MATHRESOLVEARG1_MAX            = 2
//};


// Enum GearboxFramework.SparkInterfaceImpl.SparkRequestState
//enum class ESparkRequestState : uint8_t
//{
//	SRS_IDLE                       = 0,
//	SRS_AWAITING_RETRY             = 1,
//	SRS_IN_FLIGHT                  = 2,
//	SRS_AWAITING_AUTHENTICATE      = 3,
//	SRS_START                      = 4,
//	SRS_FAIL                       = 5,
//	SRS_QUEUED                     = 6,
//	SRS_CLEANUP                    = 7,
//	SRS_MAX                        = 8
//};


// Enum GearboxFramework.SparkNews.ENewsRetrievalResult
//enum class ENewsRetrievalResult : uint8_t
//{
//	NEWSRETRIEVE_Success           = 0,
//	NEWSRETRIEVE_GeneralFailure    = 1,
//	NEWSRETRIEVE_NetworkFailure    = 2,
//	NEWSRETRIEVE_Timeout           = 3,
//	NEWSRETRIEVE_MAX               = 4
//};


// Enum GearboxFramework.TargetIterator.ETargetIterator
//enum class ETargetIterator : uint8_t
//{
//	TARGITER_UpdateState           = 0,
//	TARGITER_PriorityCalc          = 1,
//	TARGITER_ForgetTarget          = 2,
//	TARGITER_RemoveTarget          = 3,
//	TARGITER_PostProcess           = 4,
//	TARGITER_MAX                   = 5
//};


// Enum GearboxFramework.TimeValueResolver.ETimeValueResolverMode
//enum class ETimeValueResolverMode : uint8_t
//{
//	TVRM_CurrentTime               = 0,
//	TVRM_FrameTime                 = 1,
//	TVRM_ElapsedTime               = 2,
//	TVRM_MAX                       = 3
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GearboxFramework.AIDebugCamera.DebugListItem
// 0x0051
struct FDebugListItem
{
	unsigned char                                      DisplayType;                                              // 0x0000(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (AlwaysInit)
	struct FVector                                     Location2;                                                // 0x0010(0x000C) (AlwaysInit)
	struct FVector                                     Location3;                                                // 0x001C(0x000C) (AlwaysInit)
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0004) (AlwaysInit)
	float                                              U;                                                        // 0x002C(0x0004) (AlwaysInit)
	float                                              V;                                                        // 0x0030(0x0004) (AlwaysInit)
	float                                              UL;                                                       // 0x0034(0x0004) (AlwaysInit)
	float                                              VL;                                                       // 0x0038(0x0004) (AlwaysInit)
	float                                              Scale;                                                    // 0x003C(0x0004) (AlwaysInit)
	struct FString                                     TextString;                                               // 0x0040(0x000C) (AlwaysInit, NeedCtorLink)
	struct FColor                                      TextColor;                                                // 0x004C(0x0004) (AlwaysInit)
	unsigned char                                      Alignment;                                                // 0x0050(0x0001) (AlwaysInit)
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.SpecialMoveData
// 0x001C
struct FSpecialMoveData
{
	class UObject*                                     Data;                                                     // 0x0000(0x0004)
	float                                              PlayRateScale;                                            // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	struct FName                                       CallbackName;                                             // 0x000C(0x0008)
	class UObject*                                     CallbackObject;                                           // 0x0014(0x0004)
	class USpecialMoveDefinition*                      SMD;                                                      // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.AnimNodeSpecialMoveBlend.SlotAnimParameters
// 0x0044
struct FSlotAnimParameters
{
	struct FSpecialMoveData                            SMData;                                                   // 0x0000(0x001C)
	class UGearboxAnimDefinition*                      CustomAnimDef;                                            // 0x001C(0x0004)
	struct FName                                       CustomAnimName;                                           // 0x0020(0x0008)
	TArray<float>                                      PerBoneWeights;                                           // 0x0028(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              TransformReqBone;                                         // 0x0034(0x000C) (NeedCtorLink)
	int                                                TransformReqBoneIndex;                                    // 0x0040(0x0004)
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.BehaviorConsumerHandle
// 0x0004
struct FBehaviorConsumerHandle
{
	int                                                PID;                                                      // 0x0000(0x0004)
};

// ScriptStruct GearboxFramework.ITimerBehavior.BehaviorTimerState
// 0x000C
struct FBehaviorTimerState
{
	unsigned long                                      bIsRunning : 1;                                           // 0x0000(0x0004)
	float                                              Delay;                                                    // 0x0004(0x0004)
	float                                              EventTime;                                                // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorHelpers.AttachmentLocationData
// 0x001C
struct FAttachmentLocationData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit)
	FScriptInterface                                   AttachmentBase;                                           // 0x000C(0x0008)
	struct FName                                       AttachmentName;                                           // 0x0014(0x0008)
};

// ScriptStruct GearboxFramework.BehaviorHelpers.RelativeDirectionData
// 0x0020
struct FRelativeDirectionData
{
	unsigned char                                      Direction;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                ConeAroundDirection;                                      // 0x0004(0x0010) (Edit)
	struct FRotator                                    AdditionalRotation;                                       // 0x0014(0x000C) (Edit)
};

// ScriptStruct GearboxFramework.FeatherBoneBlendDefinition.FeatherBoneBlendData
// 0x000C
struct FFeatherBoneBlendData
{
	struct FName                                       StartBoneName;                                            // 0x0000(0x0008) (Edit)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GBXActorList.s_actorList
// 0x000C
struct Fs_actorList
{
	struct FName                                       LevelName;                                                // 0x0000(0x0008)
	class AActor*                                      Actor;                                                    // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.GearboxAIMoveNode.NodeData
// 0x0008
struct FNodeData
{
	class AGearboxAIMoveNode*                          Node;                                                     // 0x0000(0x0004) (Edit)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GearboxDialogInterface.GearboxDialogReplicatedData
// 0x0014
struct FGearboxDialogReplicatedData
{
	float                                              Pitch;                                                    // 0x0000(0x0004)
	class UAkEvent*                                    TalkAkEvent;                                              // 0x0004(0x0004)
	int                                                AkAudioUniqueID;                                          // 0x0008(0x0004)
	class UGearboxDialogAct_Talk*                      TalkAct;                                                  // 0x000C(0x0004)
	class UGearboxDialogEventTag*                      EventTag;                                                 // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.GearboxDialogInterface.GearboxDialogData
// 0x0010
struct FGearboxDialogData
{
	class UGearboxDialogNameTag*                       NameTag;                                                  // 0x0000(0x0004) (Edit)
	class UAkEvent*                                    TalkAkEvent;                                              // 0x0004(0x0004) (Edit)
	int                                                AkAudioUniqueID;                                          // 0x0008(0x0004)
	float                                              Pitch;                                                    // 0x000C(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GearboxEditorNode.OutputLink
// 0x000C
struct FOutputLink
{
	TArray<class UGearboxEditorNode*>                  Links;                                                    // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxEditorNode.VariableLink
// 0x000C
struct FVariableLink
{
	TArray<class UGearboxEditorNode*>                  Links;                                                    // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateData
// 0x0024
struct FMovieStateData
{
	struct FName                                       State;                                                    // 0x0000(0x0008) (Edit)
	unsigned char                                      Mode;                                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     Context;                                                  // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FASValue>                            ASArgs;                                                   // 0x0018(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateStruct
// 0x0018
struct FMovieStateStruct
{
	TArray<struct FName>                               States;                                                   // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FName>                               Flags;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxGlobals.ValidNameRange
// 0x0008
struct FValidNameRange
{
	int                                                Start;                                                    // 0x0000(0x0004) (AlwaysInit)
	int                                                End;                                                      // 0x0004(0x0004) (AlwaysInit)
};

// ScriptStruct GearboxFramework.GearboxGlobals.ObjectKey
// 0x0010
struct FObjectKey
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (AlwaysInit)
	struct FName                                       AdditionalKey;                                            // 0x0008(0x0008) (AlwaysInit)
};

// ScriptStruct GearboxFramework.GearboxGlobals.LevelStateRecord
// 0x0018
struct FLevelStateRecord
{
	struct FName                                       LevelName;                                                // 0x0000(0x0008) (AlwaysInit)
	unsigned char                                      LevelLoaded;                                              // 0x0008(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<struct FObjectKey>                          ObjectKeys;                                               // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxGlobals.GearboxCoverState
// 0x000C
struct FGearboxCoverState
{
	class AActor*                                      TheCoverActor;                                            // 0x0000(0x0004)
	int                                                SlotIndex;                                                // 0x0004(0x0004)
	unsigned char                                      State;                                                    // 0x0008(0x0001)
	unsigned char                                      ExtendedState;                                            // 0x0009(0x0001)
	unsigned char                                      MetaData;                                                 // 0x000A(0x0001)
	unsigned char                                      ExtendedMetaData;                                         // 0x000B(0x0001)
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.ReplicatedSpecialMoveData
// 0x0014
struct FReplicatedSpecialMoveData
{
	class UObject*                                     Data;                                                     // 0x0000(0x0004)
	float                                              PlayRateScale;                                            // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	unsigned char                                      DirtyCounter;                                             // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class USpecialMoveDefinition*                      SMD;                                                      // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.SparkTypes.SparkResult
// 0x0018
struct FSparkResult
{
	unsigned long                                      RequestSucceeded : 1;                                     // 0x0000(0x0004)
	unsigned char                                      ErrorCode;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                HttpStatusCode;                                           // 0x0008(0x0004)
	TArray<unsigned char>                              ResponseBody;                                             // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxAccountData.EntitlementResult
// 0x0024
struct FEntitlementResult
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (AlwaysInit)
	struct FString                                     Payload;                                                  // 0x0008(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Id;                                                       // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      Consumable : 1;                                           // 0x0018(0x0004) (AlwaysInit)
	int                                                Consumed;                                                 // 0x001C(0x0004) (AlwaysInit)
	int                                                ConsumableAmount;                                         // 0x0020(0x0004) (AlwaysInit)
};

// ScriptStruct GearboxFramework.GearboxAccountData.OfferResult
// 0x002C
struct FOfferResult
{
	struct FString                                     TitleEfigs;                                               // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     DescriptionEfigs;                                         // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Id;                                                       // 0x0018(0x0004) (AlwaysInit)
	unsigned long                                      Notified : 1;                                             // 0x001C(0x0004) (AlwaysInit)
	struct FString                                     DateUnlocked;                                             // 0x0020(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxAccountData.ServiceParameterResult
// 0x0018
struct FServiceParameterResult
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxAccountData.ServiceResult
// 0x001C
struct FServiceResult
{
	struct FName                                       ServiceName;                                              // 0x0000(0x0008) (AlwaysInit)
	struct FName                                       ConfigurationGroup;                                       // 0x0008(0x0008) (AlwaysInit)
	TArray<struct FServiceParameterResult>             Parameters;                                               // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkInterface.HttpParameters
// 0x0038
struct FHttpParameters
{
	class USparkServiceConfiguration*                  ServiceConfiguration;                                     // 0x0000(0x0004)
	struct FString                                     SubService;                                               // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      ContentType;                                              // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FString                                     CustomContentType;                                        // 0x0014(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      AcceptsType;                                              // 0x0020(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FString                                     CustomAcceptsType;                                        // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      Method;                                                   // 0x0030(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned long                                      IsResponseDesired : 1;                                    // 0x0034(0x0004)
	unsigned long                                      NoRetry : 1;                                              // 0x0034(0x0004)
};

// ScriptStruct GearboxFramework.GearboxAccountData.ArchwayResult
// 0x0080
struct FArchwayResult
{
	struct FString                                     RequestId;                                                // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     GearboxUserToken;                                         // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     GearboxUserEmail;                                         // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             Messages;                                                 // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FEntitlementResult>                  Entitlements;                                             // 0x0030(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FOfferResult>                        Offers;                                                   // 0x003C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FServiceResult>                      Services;                                                 // 0x0048(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      InProgress : 1;                                           // 0x0054(0x0004) (AlwaysInit)
	unsigned long                                      Success : 1;                                              // 0x0054(0x0004) (AlwaysInit)
	unsigned long                                      DisableSpark : 1;                                         // 0x0054(0x0004) (AlwaysInit)
	unsigned long                                      TimeOut : 1;                                              // 0x0054(0x0004) (AlwaysInit)
	unsigned long                                      HasShiftAccount : 1;                                      // 0x0054(0x0004) (AlwaysInit)
	struct FString                                     EmergencyMessage;                                         // 0x0058(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     NeedsSignAgreements;                                      // 0x0064(0x000C) (AlwaysInit, NeedCtorLink)
	class UJsonObject*                                 EulaArray;                                                // 0x0070(0x0004) (AlwaysInit)
	struct FString                                     SupportId;                                                // 0x0074(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxAccountActions.EULAData
// 0x002C
struct FEULAData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     Version;                                                  // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     Title;                                                    // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     Text;                                                     // 0x001C(0x000C) (NeedCtorLink)
	unsigned long                                      bLocalSigned : 1;                                         // 0x0028(0x0004)
	unsigned long                                      bSeen : 1;                                                // 0x0028(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPlayerController.GearboxViewShakeInfo
// 0x0044
struct FGearboxViewShakeInfo
{
	struct FVector                                     OffsetMag;                                                // 0x0000(0x000C) (Edit)
	struct FVector                                     OffsetRate;                                               // 0x000C(0x000C) (Edit)
	float                                              OffsetTime;                                               // 0x0018(0x0004) (Edit)
	struct FVector                                     RotMag;                                                   // 0x001C(0x000C) (Edit)
	struct FVector                                     RotRate;                                                  // 0x0028(0x000C) (Edit)
	float                                              RotTime;                                                  // 0x0034(0x0004) (Edit)
	float                                              FOVMag;                                                   // 0x0038(0x0004) (Edit)
	float                                              FOVRate;                                                  // 0x003C(0x0004) (Edit)
	float                                              FOVTime;                                                  // 0x0040(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailRenderData
// 0x0038
struct FThumbnailRenderData
{
	struct FName                                       Context;                                                  // 0x0000(0x0008) (Const)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0008(0x0004) (Const)
	class UTexture*                                    ResultTexture;                                            // 0x000C(0x0004) (Const)
	unsigned char                                      UpdateType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	class UMeshComponent*                              Mesh;                                                     // 0x0014(0x0004) (ExportObject, Component, EditInline)
	int                                                TextureSizeX;                                             // 0x0018(0x0004) (Const)
	int                                                TextureSizeY;                                             // 0x001C(0x0004) (Const)
	int                                                SizeX;                                                    // 0x0020(0x0004) (Const)
	int                                                SizeY;                                                    // 0x0024(0x0004) (Const)
	TArray<class UTexture*>                            ReferencedTextures;                                       // 0x0028(0x000C) (NeedCtorLink)
	float                                              StopStreamTexturesTime;                                   // 0x0034(0x0004)
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailLightData
// 0x0010
struct FThumbnailLightData
{
	struct FRotator                                    Direction;                                                // 0x0000(0x000C) (Edit)
	class ULightComponent*                             Light;                                                    // 0x000C(0x0004) (Edit, ExportObject, Component, EditInline)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartPermutation
// 0x0018
struct FGestaltPartPermutation
{
	struct FName                                       MeshName;                                                 // 0x0000(0x0008) (Edit, EditConst)
	struct FName                                       GroupName;                                                // 0x0008(0x0008) (Edit, EditConst)
	struct FName                                       PartName;                                                 // 0x0010(0x0008) (Edit, EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPart
// 0x0018
struct FGestaltPart
{
	class USkeletalMesh*                               SkeletalMeshFragment;                                     // 0x0000(0x0004) (EditConst, Deprecated)
	struct FName                                       SkeletalMeshFragmentName;                                 // 0x0004(0x0008) (Edit, EditConst)
	int                                                MaterialIndex;                                            // 0x000C(0x0004) (Edit, EditConst)
	int                                                FirstIndex;                                               // 0x0010(0x0004) (Edit, EditConst)
	int                                                NumPrimitives;                                            // 0x0014(0x0004) (Edit, EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltInfo
// 0x000C
struct FGestaltInfo
{
	TArray<struct FGestaltPart>                        Parts;                                                    // 0x0000(0x000C) (Edit, EditConst, NeedCtorLink)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltAccessoryNameEntry
// 0x0008
struct FGestaltAccessoryNameEntry
{
	struct FName                                       SkeletalMeshFragmentName;                                 // 0x0000(0x0008) (Edit, EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltSocketRemapEntry
// 0x001C
struct FGestaltSocketRemapEntry
{
	class USkeletalMesh*                               SkeletalMeshFragment;                                     // 0x0000(0x0004) (EditConst, Deprecated)
	struct FName                                       SkeletalMeshFragmentName;                                 // 0x0004(0x0008) (Edit, EditConst)
	struct FName                                       OriginalSocketName;                                       // 0x000C(0x0008) (Edit, EditConst)
	struct FName                                       MangledSocketName;                                        // 0x0014(0x0008) (Edit, EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartBoundsEntry
// 0x0024
struct FGestaltPartBoundsEntry
{
	struct FName                                       SkeletalMeshFragmentName;                                 // 0x0000(0x0008) (Edit, EditConst)
	struct FBoxSphereBounds                            ReferencePoseBounds;                                      // 0x0008(0x001C) (Edit, EditConst)
};

// ScriptStruct GearboxFramework.GFxActorMoviePool.MovieInstanceArray
// 0x0010
struct FMovieInstanceArray
{
	TArray<class UGearboxGFxMovie*>                    Movies;                                                   // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	class UGearboxGFxMovie*                            PoolParent;                                               // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.GFxMovieDefinition.GFxMenuLink
// 0x000C
struct FGFxMenuLink
{
	struct FName                                       MenuName;                                                 // 0x0000(0x0008) (Edit)
	class UGFxMovieDefinition*                         Definition;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDCoordValue
// 0x0010
struct FHUDCoordValue
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit)
	float                                              CurrentValue;                                             // 0x0008(0x0004) (Transient)
	unsigned long                                      bCacheValid : 1;                                          // 0x000C(0x0004) (Transient)
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDAnchorPoint
// 0x0024
struct FHUDAnchorPoint
{
	unsigned char                                      MoviePoint;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      ScreenPoint;                                              // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FHUDCoordValue                              Offset[0x2];                                              // 0x0004(0x0010) (Edit)
};

// ScriptStruct GearboxFramework.GFxMovieStatePlayerAware.MovieRangeStateData
// 0x0004 (0x0024 - 0x0028)
struct FMovieRangeStateData : public FMovieStateData
{
	float                                              Distance;                                                 // 0x0024(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterLimitState
// 0x0008
struct FEncounterLimitState
{
	int                                                NumTotalSpawned;                                          // 0x0000(0x0004) (Transient)
	int                                                NumCurrentlyActive;                                       // 0x0004(0x0004) (Transient)
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterLimitData
// 0x0038
struct FEncounterLimitData
{
	TArray<class UPopulationSpawnedActorTagDefinition*> ActorTags;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FAttributeInitializationData                MaxTotalToSpawn;                                          // 0x000C(0x0010) (Edit)
	struct FAttributeInitializationData                MaxActiveAtATime;                                         // 0x001C(0x0010) (Edit)
	unsigned char                                      ConstraintType;                                           // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FEncounterLimitState                        LimitState;                                               // 0x0030(0x0008) (Transient)
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterWaveData
// 0x0028
struct FEncounterWaveData
{
	float                                              InitialDelay;                                             // 0x0000(0x0004) (Edit, Const)
	float                                              PercentToComplete;                                        // 0x0004(0x0004) (Edit, Const)
	class UPopulationDefinition*                       EncounterPopulationDef;                                   // 0x0008(0x0004) (Edit, Const)
	TArray<class APopulationOpportunity*>              MemberOpportunities;                                      // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FEncounterLimitData>                 SpawnLimits;                                              // 0x0018(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      WaveComplete : 1;                                         // 0x0024(0x0004) (Transient)
	unsigned long                                      AllKilledInWave : 1;                                      // 0x0024(0x0004) (Transient)
};

// ScriptStruct GearboxFramework.PopUpDebugBarGraph.ColumnDataStruct
// 0x0014
struct FColumnDataStruct
{
	struct FString                                     HeaderText;                                               // 0x0000(0x000C) (NeedCtorLink)
	float                                              Value;                                                    // 0x000C(0x0004)
	struct FColor                                      BarColor;                                                 // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.RandomAttributeValueResolver.SavedRandomValue
// 0x0010
struct FSavedRandomValue
{
	struct FName                                       ContextName;                                              // 0x0000(0x0008)
	float                                              SavedValue;                                               // 0x0008(0x0004)
	float                                              ExpirationTime;                                           // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.RuleEngineLoadBalanceStruct
// 0x000C
struct FRuleEngineLoadBalanceStruct
{
	class URuleEngine*                                 RuleEngine;                                               // 0x0000(0x0004)
	float                                              TimeSinceLastUpdate;                                      // 0x0004(0x0004)
	int                                                Priority;                                                 // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.DebugLoadBalance
// 0x0018
struct FDebugLoadBalance
{
	struct FName                                       RuleEngine;                                               // 0x0000(0x0008)
	unsigned long                                      bIsInQueue : 1;                                           // 0x0008(0x0004)
	float                                              TimeSinceUpdate;                                          // 0x000C(0x0004)
	float                                              TimeToDoLastUpdate;                                       // 0x0010(0x0004)
	int                                                Priority;                                                 // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.RELBManagerStats
// 0x0018
struct FRELBManagerStats
{
	float                                              TotalTimeUpdated;                                         // 0x0000(0x0004)
	float                                              MaxTimeUpdating;                                          // 0x0004(0x0004)
	int                                                NumUpdated;                                               // 0x0008(0x0004)
	int                                                AveragePriority;                                          // 0x000C(0x0004)
	int                                                LowestPriority;                                           // 0x0010(0x0004)
	int                                                HighestPriority;                                          // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMBehavior
// 0x0010
struct FSMBehavior
{
	unsigned long                                      PlayServer : 1;                                           // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      PlayClient : 1;                                           // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      PlayLocal : 1;                                            // 0x0000(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0004(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct GearboxFramework.SpecialMoveExpressionList.SMExpressionList
// 0x0008
struct FSMExpressionList
{
	class UExpressionEvaluator*                        Expression;                                               // 0x0000(0x0004) (Edit, Const, EditInline)
	class USpecialMoveDefinition*                      SMD;                                                      // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.SpecialMoveRandom.SMRandomPair
// 0x0008
struct FSMRandomPair
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit)
	class USpecialMoveDefinition*                      SMD;                                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.WireTerminal.WireLinkage
// 0x001C
struct FWireLinkage
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit)
	float                                              Width;                                                    // 0x000C(0x0004) (Edit)
	float                                              Slack;                                                    // 0x0010(0x0004) (Edit)
	unsigned char                                      Segments;                                                 // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Link;                                                     // 0x0018(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.AIComponent.AIHoldData
// 0x000C
struct FAIHoldData
{
	struct FName                                       HoldName;                                                 // 0x0000(0x0008)
	class UObject*                                     HoldTag;                                                  // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.AIComponent.AIResourceData
// 0x001C
struct FAIResourceData
{
	class UAIResource*                                 Resource;                                                 // 0x0000(0x0004)
	TArray<struct FPointer>                            CanRun;                                                   // 0x0004(0x000C) (Const, Native)
	TArray<struct FPointer>                            Running;                                                  // 0x0010(0x000C) (Const, Native)
};

// ScriptStruct GearboxFramework.AIComponent.AIRange
// 0x0008
struct FAIRange
{
	float                                              MinVal;                                                   // 0x0000(0x0004) (Edit)
	float                                              MaxVal;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.FlagDefinition.FlagDefinitionInitialization
// 0x0028
struct FFlagDefinitionInitialization
{
	class UFlagDefinition*                             FlagToSet;                                                // 0x0000(0x0004) (Edit, Const)
	struct FAttributeInitializationData                ChanceTrue;                                               // 0x0004(0x0010) (Edit, Const)
	float                                              ProbabilityTrue;                                          // 0x0014(0x0004) (Const)
	struct FAttributeInitializationData                Duration;                                                 // 0x0018(0x0010) (Edit, Const)
};

// ScriptStruct GearboxFramework.ActionSequenceRandom.ActionSequenceRandomData
// 0x0014
struct FActionSequenceRandomData
{
	struct FAttributeInitializationData                ProbabilityData;                                          // 0x0000(0x0010) (Edit, Const)
	class UActionSequence*                             ActionToRunWhenTrue;                                      // 0x0010(0x0004) (Edit, Const, EditInline)
};

// ScriptStruct GearboxFramework.AIFactoryBase.TimeStampedRecord
// 0x0004
struct FTimeStampedRecord
{
	float                                              DeathTimeStamp;                                           // 0x0000(0x0004)
};

// ScriptStruct GearboxFramework.AIFactoryBase.KnowledgeRecordStruct
// 0x0005 (0x0004 - 0x0009)
struct FKnowledgeRecordStruct : public FTimeStampedRecord
{
	class UKnowledgeRecord*                            TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIFactoryBase.RuleSetRecord
// 0x0005 (0x0004 - 0x0009)
struct FRuleSetRecord : public FTimeStampedRecord
{
	class URuleSet*                                    TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIFactoryBase.RuleRecord
// 0x0005 (0x0004 - 0x0009)
struct FRuleRecord : public FTimeStampedRecord
{
	class URule*                                       TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIFactoryBase.ActionSequenceRecord
// 0x0005 (0x0004 - 0x0009)
struct FActionSequenceRecord : public FTimeStampedRecord
{
	class UActionSequence*                             TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIFactoryBase.TargetInfoRecord
// 0x0005 (0x0004 - 0x0009)
struct FTargetInfoRecord : public FTimeStampedRecord
{
	class UMindTargetInfo*                             TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIFactoryBase.AIDefinitionRecord
// 0x0005 (0x0004 - 0x0009)
struct FAIDefinitionRecord : public FTimeStampedRecord
{
	class UAIDefinition*                               TheObj;                                                   // 0x0004(0x0004)
	unsigned char                                      InUse;                                                    // 0x0008(0x0001)
};

// ScriptStruct GearboxFramework.AIResource.AIResourceRestriction
// 0x000C
struct FAIResourceRestriction
{
	int                                                MaxUsers;                                                 // 0x0000(0x0004) (Edit, Const)
	int                                                MinUsers;                                                 // 0x0004(0x0004) (Edit, Const)
	class UAIResource*                                 Resource;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GbxMessage.GbxMessageSimpleMetaData
// 0x001C
struct FGbxMessageSimpleMetaData
{
	float                                              FloatData;                                                // 0x0000(0x0004) (Edit)
	int                                                IntData;                                                  // 0x0004(0x0004) (Edit)
	struct FName                                       NameData;                                                 // 0x0008(0x0008) (Edit)
	struct FVector                                     VectorData;                                               // 0x0010(0x000C) (Edit)
};

// ScriptStruct GearboxFramework.CharacterClassMessageDefinition.BehaviorTriggerMessageStruct
// 0x0014
struct FBehaviorTriggerMessageStruct
{
	class UGbxMessageDefinition*                       MessageDefinition;                                        // 0x0000(0x0004) (Edit)
	unsigned char                                      Instigator;                                               // 0x0004(0x0001) (Edit)
	unsigned char                                      OtherEventParticipant;                                    // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0008(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct GearboxFramework.GearboxGlobals.VantageSpot
// 0x000D
struct FVantageSpot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	unsigned char                                      VantageType;                                              // 0x000C(0x0001)
};

// ScriptStruct GearboxFramework.ExposureUtilityBasicCaching.ExposureCacheStruct
// 0x0040
struct FExposureCacheStruct
{
	struct FName                                       FromPawnName;                                             // 0x0000(0x0008) (AlwaysInit)
	struct FName                                       ToActorName;                                              // 0x0008(0x0008) (AlwaysInit)
	float                                              TimeCached;                                               // 0x0010(0x0004) (AlwaysInit)
	float                                              NextUpdateTime;                                           // 0x0014(0x0004) (AlwaysInit)
	float                                              Exposure;                                                 // 0x0018(0x0004) (AlwaysInit)
	struct FVector                                     FromLoc;                                                  // 0x001C(0x000C) (AlwaysInit)
	struct FVector                                     ToLoc;                                                    // 0x0028(0x000C) (AlwaysInit)
	TArray<struct FVantageSpot>                        Vantage;                                                  // 0x0034(0x000C) (Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.ExposureUpdateStruct
// 0x001D
struct FExposureUpdateStruct
{
	class AGearboxPawn*                                FromPawn;                                                 // 0x0000(0x0004) (AlwaysInit)
	class AActor*                                      ToActor;                                                  // 0x0004(0x0004) (AlwaysInit)
	float                                              TimeRequested;                                            // 0x0008(0x0004) (AlwaysInit)
	float                                              Exposure;                                                 // 0x000C(0x0004) (AlwaysInit)
	TArray<struct FVantageSpot>                        Vantage;                                                  // 0x0010(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	unsigned char                                      ShouldRemove;                                             // 0x001C(0x0001) (AlwaysInit)
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.BucketStruct
// 0x001C
struct FBucketStruct
{
	int                                                NdxToStartCheckFrom;                                      // 0x0000(0x0004) (AlwaysInit)
	float                                              DistanceSquared;                                          // 0x0004(0x0004) (AlwaysInit)
	int                                                MaxLineChecksPerFrame;                                    // 0x0008(0x0004) (AlwaysInit)
	int                                                MaxIterationsPerFrame;                                    // 0x000C(0x0004) (AlwaysInit)
	TArray<struct FExposureUpdateStruct>               Exposures;                                                // 0x0010(0x000C) (Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.PointExposureData
// 0x0028
struct FPointExposureData
{
	class AActor*                                      Looker;                                                   // 0x0000(0x0004)
	struct FVector                                     Point;                                                    // 0x0004(0x000C)
	struct FVector                                     Point2;                                                   // 0x0010(0x000C)
	float                                              Exposure;                                                 // 0x001C(0x0004)
	float                                              LastCheckTime;                                            // 0x0020(0x0004)
	float                                              LastUpdateTime;                                           // 0x0024(0x0004)
};

// ScriptStruct GearboxFramework.FiringBehaviorDefinition.ConditionalPattern
// 0x0010
struct FConditionalPattern
{
	TArray<class UFiringCondition*>                    Conditions;                                               // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UFiringPattern*                              Pattern;                                                  // 0x000C(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.Rule.FlagEvalORConnector
// 0x000C
struct FFlagEvalORConnector
{
	TArray<struct FFlagEvalConditional>                ANDChain;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.Rule.FlagEvalConditional
// 0x0018
struct FFlagEvalConditional
{
	unsigned char                                      FlagEvalType;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UFlagDefinition*                             FlagDefinition;                                           // 0x0004(0x0004) (Edit)
	struct FAttributeInitializationData                TimeSeconds;                                              // 0x0008(0x0010) (Edit)
};

// ScriptStruct GearboxFramework.INounAttributeProvider.NounAttributeState
// 0x0024
struct FNounAttributeState
{
	struct FName                                       NounName;                                                 // 0x0000(0x0008)
	float                                              Value;                                                    // 0x0008(0x0004)
	float                                              BaseValue;                                                // 0x000C(0x0004)
	TArray<class UAttributeModifier*>                  ModifierStack;                                            // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      ReplicationStrategy;                                      // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                IndexInReplicationArray;                                  // 0x0020(0x0004)
};

// ScriptStruct GearboxFramework.RuleEngine.EventRecord
// 0x0008
struct FEventRecord
{
	class URuleEventDef*                               EventDefinition;                                          // 0x0000(0x0004)
	class UObject*                                     OtherEventParticipantObject;                              // 0x0004(0x0004)
};

// ScriptStruct GearboxFramework.RuleEngine.RuleSetReference
// 0x000C
struct FRuleSetReference
{
	struct FName                                       ReferenceName;                                            // 0x0000(0x0008) (Edit)
	class URuleSet*                                    ReferenceRuleSet;                                         // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.RuleEngine.DynamicFlagInstanceData
// 0x0014
struct FDynamicFlagInstanceData
{
	struct FFlag                                       DynamicFlag;                                              // 0x0000(0x0010)
	float                                              LastEvaluatedExpressionTime;                              // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.GearboxGlobals.GearboxCoverTransition
// 0x0004
struct FGearboxCoverTransition
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001)
	unsigned char                                      ExtendedAction;                                           // 0x0001(0x0001)
	unsigned char                                      Padding[0x2];                                             // 0x0002(0x0001)
};

// ScriptStruct GearboxFramework.GearboxCoverStateManager.CoverSpotInfo
// 0x0018
struct FCoverSpotInfo
{
	class AActor*                                      TheCoverActor;                                            // 0x0000(0x0004)
	int                                                CoverSlotIndex;                                           // 0x0004(0x0004)
	struct FVector                                     CoverSpotWorldLocation;                                   // 0x0008(0x000C)
	unsigned char                                      CoverHeight;                                              // 0x0014(0x0001)
	unsigned char                                      ExtendedInfo1;                                            // 0x0015(0x0001)
	unsigned char                                      ExtendedInfo2;                                            // 0x0016(0x0001)
	unsigned char                                      ExtendedInfo3;                                            // 0x0017(0x0001)
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverDebugScoringInfo
// 0x000C
struct FCoverDebugScoringInfo
{
	struct FName                                       PriorityName;                                             // 0x0000(0x0008)
	float                                              Score;                                                    // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverDebugPriority
// 0x002C
struct FCoverDebugPriority
{
	float                                              Score;                                                    // 0x0000(0x0004)
	float                                              Distance;                                                 // 0x0004(0x0004)
	unsigned long                                      IsACandidate : 1;                                         // 0x0008(0x0004)
	unsigned long                                      IsBestCandidate : 1;                                      // 0x0008(0x0004)
	class AActor*                                      TheCoverActor;                                            // 0x000C(0x0004)
	int                                                SlotNdx;                                                  // 0x0010(0x0004)
	struct FString                                     FailString;                                               // 0x0014(0x000C) (NeedCtorLink)
	TArray<struct FCoverDebugScoringInfo>              ScoringInfo;                                              // 0x0020(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.PathFindData
// 0x0058
struct FPathFindData
{
	struct FGBXNavMeshPath                             Path;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FBasedPosition                              FinalDest;                                                // 0x0010(0x0034)
	unsigned long                                      bFinalDestIsActor : 1;                                    // 0x0044(0x0004)
	float                                              MaxRangeToDest;                                           // 0x0048(0x0004)
	struct FGBXNavMeshPolyRef                          AnchorPoly;                                               // 0x004C(0x0008)
	unsigned long                                      bCanArriveEarly : 1;                                      // 0x0054(0x0004)
};

// ScriptStruct GearboxFramework.MindTargetInfo.HitTargetRecord
// 0x0014
struct FHitTargetRecord
{
	struct FVector                                     vecHitLoc;                                                // 0x0000(0x000C)
	float                                              flDamage;                                                 // 0x000C(0x0004)
	float                                              flHitTime;                                                // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.MindTargetInfo.PriorityDebugStruct
// 0x001C
struct FPriorityDebugStruct
{
	struct FName                                       IteratorName;                                             // 0x0000(0x0008)
	struct FString                                     ShortName;                                                // 0x0008(0x000C) (NeedCtorLink)
	float                                              PriorityValue;                                            // 0x0014(0x0004)
	unsigned long                                      AutomaticTopPriority : 1;                                 // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.StateRuleSet.StateAttributeData
// 0x000C
struct FStateAttributeData
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	class UAttributeDefinition*                        Attribute;                                                // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.SnapshotRecord.RuleInfo
// 0x0044
struct FRuleInfo
{
	struct FName                                       RuleName;                                                 // 0x0000(0x0008)
	struct FString                                     RuleNameString;                                           // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     RunningSequence;                                          // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     LatentAction;                                             // 0x0020(0x000C) (NeedCtorLink)
	unsigned long                                      bIsRunning : 1;                                           // 0x002C(0x0004)
	unsigned long                                      bHasFinishedCode : 1;                                     // 0x002C(0x0004)
	unsigned long                                      bIsDisabled : 1;                                          // 0x002C(0x0004)
	unsigned long                                      bIsContainer : 1;                                         // 0x002C(0x0004)
	TArray<struct FString>                             ColorCodedStrings;                                        // 0x0030(0x000C) (NeedCtorLink)
	int                                                ContainerRuleStartNdx;                                    // 0x003C(0x0004)
	int                                                ContainerRuleNumSubRules;                                 // 0x0040(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.AwarenessInfo
// 0x0020
struct FAwarenessInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	float                                              Radius;                                                   // 0x000C(0x0004)
	struct FName                                       AwarenessZoneName;                                        // 0x0010(0x0008)
	unsigned long                                      IsInfinitelyFarAway : 1;                                  // 0x0018(0x0004)
	struct FColor                                      ZoneColor;                                                // 0x001C(0x0004)
};

// ScriptStruct GearboxFramework.GearboxGlobals.LocationInfo
// 0x0010
struct FLocationInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	unsigned long                                      IsPlayerInfo : 1;                                         // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.LastVisibleInfo
// 0x0018
struct FLastVisibleInfo
{
	struct FVector                                     LastVisibleLocation;                                      // 0x0000(0x000C)
	struct FVector                                     CurrentLocation;                                          // 0x000C(0x000C)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.DebugExposure
// 0x0018
struct FDebugExposure
{
	float                                              TargetExposure;                                           // 0x0000(0x0004)
	float                                              MyExposure;                                               // 0x0004(0x0004)
	struct FVector                                     InWorldLocation;                                          // 0x0008(0x000C)
	unsigned long                                      IsPlayerInfo : 1;                                         // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.ViewConeInfo
// 0x0028
struct FViewConeInfo
{
	struct FVector                                     ConeOrigin;                                               // 0x0000(0x000C)
	struct FVector                                     ConeDirection;                                            // 0x000C(0x000C)
	float                                              ConeAngle;                                                // 0x0018(0x0004)
	float                                              ConeLength;                                               // 0x001C(0x0004)
	struct FColor                                      ConeColor;                                                // 0x0020(0x0004)
	unsigned long                                      Has360DegreesAwareness : 1;                               // 0x0024(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugScoringData
// 0x000C
struct FCoverDebugScoringData
{
	struct FName                                       PriorityName;                                             // 0x0000(0x0008)
	float                                              Score;                                                    // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugInfo
// 0x0050
struct FCoverDebugInfo
{
	struct FName                                       CoverRegionName;                                          // 0x0000(0x0008)
	float                                              Score;                                                    // 0x0008(0x0004)
	float                                              Distance;                                                 // 0x000C(0x0004)
	unsigned long                                      IsACandidate : 1;                                         // 0x0010(0x0004)
	unsigned long                                      IsBestCandidate : 1;                                      // 0x0010(0x0004)
	struct FString                                     FailString;                                               // 0x0014(0x000C) (AlwaysInit, NeedCtorLink)
	struct FVector                                     LeftEndPoint;                                             // 0x0020(0x000C)
	struct FVector                                     RightEndPoint;                                            // 0x002C(0x000C)
	struct FVector                                     CoverDirection;                                           // 0x0038(0x000C)
	TArray<struct FCoverDebugScoringData>              ScoringInfo;                                              // 0x0044(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.SnapshotRecord.IconData
// 0x0014
struct FIconData
{
	float                                              U;                                                        // 0x0000(0x0004)
	float                                              V;                                                        // 0x0004(0x0004)
	float                                              UL;                                                       // 0x0008(0x0004)
	float                                              VL;                                                       // 0x000C(0x0004)
	float                                              Scale;                                                    // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetPriorityInfo
// 0x001C
struct FTargetPriorityInfo
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008)
	struct FString                                     ShortName;                                                // 0x0008(0x000C) (NeedCtorLink)
	float                                              Value;                                                    // 0x0014(0x0004)
	struct FColor                                      BarColor;                                                 // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetDebugDatum
// 0x0020
struct FTargetDebugDatum
{
	unsigned long                                      bCurrent : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bIsPlayer : 1;                                            // 0x0000(0x0004)
	struct FString                                     TargetName;                                               // 0x0004(0x000C) (NeedCtorLink)
	float                                              TotalPriority;                                            // 0x0010(0x0004)
	TArray<struct FTargetPriorityInfo>                 PriorityData;                                             // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.AIHoldDebugData
// 0x0014
struct FAIHoldDebugData
{
	struct FName                                       HoldName;                                                 // 0x0000(0x0008)
	struct FString                                     HoldTag;                                                  // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxGlobals.PopulationActor
// 0x0028
struct FPopulationActor
{
	class UPopulationFactory*                          SpawnFactory;                                             // 0x0000(0x0004) (Edit, Const, EditInline)
	struct FAttributeInitializationData                Probability;                                              // 0x0004(0x0010) (Edit, Const)
	struct FAttributeInitializationData                MaxActiveAtOneTime;                                       // 0x0014(0x0010) (Edit)
	unsigned long                                      TestVisibility : 1;                                       // 0x0024(0x0004) (Edit, Const)
	unsigned long                                      TestFOV : 1;                                              // 0x0024(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.PopulationFactory.DestructionParameters
// 0x0004
struct FDestructionParameters
{
	unsigned long                                      bActorExemptFromIrrelevancyTests : 1;                     // 0x0000(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.PopulationMaster.SpawnedPopulationActor
// 0x001C
struct FSpawnedPopulationActor
{
	class AActor*                                      SpawnedActor;                                             // 0x0000(0x0004)
	class UPopulationFactory*                          SpawnFactory;                                             // 0x0004(0x0004)
	struct FDestructionParameters                      FactoryDestructionParams;                                 // 0x0008(0x0004)
	float                                              flLastInRadiusOrVisible;                                  // 0x000C(0x0004)
	int                                                SpawnCost;                                                // 0x0010(0x0004)
	int                                                CreationFlags;                                            // 0x0014(0x0004)
	unsigned long                                      Reuse : 1;                                                // 0x0018(0x0004)
	unsigned long                                      bIsDead : 1;                                              // 0x0018(0x0004)
	unsigned long                                      bCanSave : 1;                                             // 0x0018(0x0004)
	unsigned long                                      bShouldRemove : 1;                                        // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.PopulationMaster.RemovedPopulationActor
// 0x003C
struct FRemovedPopulationActor
{
	unsigned long                                      bReuseActor : 1;                                          // 0x0000(0x0004)
	int                                                CreationFlags;                                            // 0x0004(0x0004)
	struct FNameBasedObjectPath                        FactoryPath;                                              // 0x0008(0x0034)
};

// ScriptStruct GearboxFramework.PopulationOpportunity.OpportunityCleanupParameters
// 0x0008
struct FOpportunityCleanupParameters
{
	unsigned long                                      bCleanupActorsWhenIrrelevant : 1;                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bRequireOpportunityToBeInactive : 1;                      // 0x0000(0x0004)
	float                                              ActorIrrelvantDistance;                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.PopulationOpportunity.OpportunitySavedState
// 0x0010
struct FOpportunitySavedState
{
	int                                                SelectedSpawnIdx;                                         // 0x0000(0x0004)
	int                                                NumTotalActors;                                           // 0x0004(0x0004)
	unsigned char                                      MaxActiveActors;                                          // 0x0008(0x0001)
	unsigned char                                      NumActiveActors;                                          // 0x0009(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              NextSpawnTime;                                            // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunityTracker
// 0x0054
struct FPopulationOpportunityTracker
{
	struct FName                                       OpportunityOutermostName;                                 // 0x0000(0x0008)
	struct FName                                       OpportunityName;                                          // 0x0008(0x0008)
	class APopulationOpportunity*                      LoadedOpportunity;                                        // 0x0010(0x0004)
	TArray<struct FSpawnedPopulationActor>             SpawnedActors;                                            // 0x0014(0x000C) (NeedCtorLink)
	struct FPointer                                    SavedActorsList;                                          // 0x0020(0x0004) (Native, Transient)
	TArray<struct FRemovedPopulationActor>             ActorsRemovedWhileUnloaded;                               // 0x0024(0x000C) (NeedCtorLink)
	unsigned long                                      DynamicOpportunity : 1;                                   // 0x0030(0x0004)
	unsigned long                                      bHasSavedState : 1;                                       // 0x0030(0x0004)
	unsigned char                                      bTotalResetOnLevelLoad;                                   // 0x0034(0x0001)
	unsigned char                                      RespawnStyle;                                             // 0x0035(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              RespawnDelayStartTime;                                    // 0x0038(0x0004)
	struct FOpportunitySavedState                      SavedState;                                               // 0x003C(0x0010)
	struct FOpportunityCleanupParameters               OpportunityCleanupParams;                                 // 0x004C(0x0008)
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationMasterStat
// 0x0018
struct FPopulationMasterStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008)
	float                                              StatTime;                                                 // 0x0008(0x0004)
	float                                              StatMaxTime;                                              // 0x000C(0x0004)
	int                                                StatIterations;                                           // 0x0010(0x0004)
	int                                                IterationStartTime;                                       // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.PopulationMaster.EncounterWaveTracker
// 0x0010
struct FEncounterWaveTracker
{
	int                                                nWaveIdx;                                                 // 0x0000(0x0004)
	int                                                nLimitStateIdx;                                           // 0x0004(0x0004)
	struct FEncounterLimitState                        LimitSaveState;                                           // 0x0008(0x0008)
};

// ScriptStruct GearboxFramework.PopulationMaster.EncounterTracker
// 0x005C
struct FEncounterTracker
{
	class APopulationEncounter*                        LoadedEncounter;                                          // 0x0000(0x0004)
	class ULevelStreaming*                             EncountersLevel;                                          // 0x0004(0x0004)
	struct FNameBasedObjectPath                        EncounterPath;                                            // 0x0008(0x0034)
	unsigned long                                      bNeedsKismetUpdate : 1;                                   // 0x003C(0x0004)
	TArray<unsigned char>                              EncounterCompletionSaveState;                             // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FEncounterWaveTracker>               EncounterSaveState;                                       // 0x004C(0x000C) (NeedCtorLink)
	float                                              RespawnDelayStartTime;                                    // 0x0058(0x0004)
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionAreaPopDefData
// 0x0024
struct FPopulationOptionAreaPopDefData
{
	class UPopulationDefinition*                       PopulationDef;                                            // 0x0000(0x0004) (Edit)
	struct FAttributeInitializationData                MaxTotalActorsFormula;                                    // 0x0004(0x0010) (Edit)
	int                                                MaxTotalActors;                                           // 0x0014(0x0004)
	int                                                MaxActiveActors;                                          // 0x0018(0x0004) (Edit)
	float                                              RespawnDelay;                                             // 0x001C(0x0004) (Edit)
	float                                              RespawnDelayAfterDeath;                                   // 0x0020(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionAreaData
// 0x0010
struct FPopulationOptionAreaData
{
	class UExpressionEvaluatorDefinition*              ExpressionDef;                                            // 0x0000(0x0004) (Edit)
	TArray<struct FPopulationOptionAreaPopDefData>     PopulationDefinitions;                                    // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionSpawnDefData
// 0x0018
struct FPopulationOptionSpawnDefData
{
	struct FString                                     PopulationDefName;                                        // 0x0000(0x000C) (NeedCtorLink)
	int                                                NumTotalActors;                                           // 0x000C(0x0004)
	int                                                NumActiveActors;                                          // 0x0010(0x0004)
	float                                              NextSpawnTime;                                            // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationAreaOptionSpawnData
// 0x000C
struct FPopulationAreaOptionSpawnData
{
	TArray<struct FPopulationOptionSpawnDefData>       Data;                                                     // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.PopulationOpportunityCombat.PopulationOptionSpawnData
// 0x001C
struct FPopulationOptionSpawnData
{
	struct FString                                     PopulationDefName;                                        // 0x0000(0x000C) (NeedCtorLink)
	int                                                MaxActiveActors;                                          // 0x000C(0x0004)
	int                                                NumTotalActors;                                           // 0x0010(0x0004)
	int                                                NumActiveActors;                                          // 0x0014(0x0004)
	float                                              NextSpawnTime;                                            // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.AIComponent.AITreeData
// 0x00AD
struct FAITreeData
{
	FScriptInterface                                   AI;                                                       // 0x0000(0x0008) (Const)
	unsigned char                                      Type;                                                     // 0x0008(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        Children;                                                 // 0x000C(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	class UAIResource*                                 Resource;                                                 // 0x0018(0x0004) (Edit, Const, EditConst)
	class UExpressionEvaluator*                        CanRunIf;                                                 // 0x001C(0x0004) (Edit, Const, EditConst)
	struct FAIRange                                    TimedStart;                                               // 0x0020(0x0008) (Edit, Const, EditConst)
	struct FAIRange                                    TimedReset;                                               // 0x0028(0x0008) (Edit, Const, EditConst)
	struct FAIRange                                    TimedFail;                                                // 0x0030(0x0008) (Edit, Const, EditConst)
	unsigned long                                      bStopIfCannotRun : 1;                                     // 0x0038(0x0004) (Edit, Const, EditConst)
	int                                                ActiveChild;                                              // 0x003C(0x0004) (Const)
	int                                                NextActiveChild;                                          // 0x0040(0x0004) (Const)
	float                                              LastFailTime;                                             // 0x0044(0x0004) (Const)
	float                                              NextTimedRun;                                             // 0x0048(0x0004) (Const)
	float                                              NextTimedFail;                                            // 0x004C(0x0004) (Const)
	float                                              NextTimedResource;                                        // 0x0050(0x0004) (Const)
	unsigned long                                      bHoldingResource : 1;                                     // 0x0054(0x0004) (Const)
	class UActionSequence*                             Action;                                                   // 0x0058(0x0004) (Edit, Const, EditConst)
	int                                                LoopCount;                                                // 0x005C(0x0004) (Transient)
	int                                                LastRandomChild;                                          // 0x0060(0x0004) (Transient)
	TArray<float>                                      Weights;                                                  // 0x0064(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	TArray<int>                                        LoopCountMax;                                             // 0x0070(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	unsigned long                                      bInterrupt : 1;                                           // 0x007C(0x0004) (Edit, Const, EditConst)
	TArray<class UExpressionEvaluator*>                Conditions;                                               // 0x0080(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	int                                                NextSequentialChild;                                      // 0x008C(0x0004) (Transient)
	int                                                PosX;                                                     // 0x0090(0x0004) (Const)
	int                                                PosY;                                                     // 0x0094(0x0004) (Const)
	struct FString                                     NodeName;                                                 // 0x0098(0x000C) (Const, NeedCtorLink)
	struct FName                                       ActionFailName;                                           // 0x00A4(0x0008) (Const)
	unsigned char                                      FailReason;                                               // 0x00AC(0x0001) (Const)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorExecutionRecord
// 0x001C
struct FBehaviorExecutionRecord
{
	int                                                OwningProcessID;                                          // 0x0000(0x0004)
	int                                                ProvidersIndex;                                           // 0x0004(0x0004)
	int                                                SequencesDataIndex;                                       // 0x0008(0x0004)
	int                                                BehaviorNumber;                                           // 0x000C(0x0004)
	struct FName                                       BehaviorName;                                             // 0x0010(0x0008)
	float                                              TimeOfExecution;                                          // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorEventState
// 0x000C
struct FBehaviorEventState
{
	int                                                TriggerCount;                                             // 0x0000(0x0004)
	float                                              LastTriggerTime;                                          // 0x0004(0x0004)
	class UBehaviorEventFilterBase*                    FilterObject;                                             // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorThread
// 0x0018
struct FBehaviorThread
{
	unsigned char                                      ThreadState;                                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OwningProcessID;                                          // 0x0004(0x0004)
	struct FPointer                                    ThreadSequenceState;                                      // 0x0008(0x0004) (Native)
	int                                                NextBehavior;                                             // 0x000C(0x0004)
	float                                              ActivateTime;                                             // 0x0010(0x0004)
	float                                              BehaviorStartedTime;                                      // 0x0014(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorSequenceState
// 0x0018
struct FBehaviorSequenceState
{
	unsigned long                                      bIsEnabled : 1;                                           // 0x0000(0x0004)
	int                                                ProvidersIndex;                                           // 0x0004(0x0004)
	int                                                SequencesDataIndex;                                       // 0x0008(0x0004)
	int                                                SequenceEnabledBitIndex;                                  // 0x000C(0x0004)
	struct FPointer                                    EventStateHead;                                           // 0x0010(0x0004) (Native)
	struct FPointer                                    VariableStateHead;                                        // 0x0014(0x0004) (Native)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorProcess
// 0x001C
struct FBehaviorProcess
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0004)
	int                                                ProcessID;                                                // 0x0004(0x0004)
	int                                                SequenceEnabledBitField;                                  // 0x0008(0x0004)
	unsigned char                                      ProcessState;                                             // 0x000C(0x0001)
	unsigned char                                      NextSequenceEnabledBitIndexToUse;                         // 0x000D(0x0001)
	unsigned char                                      bSupportsReplicatedSequenceState;                         // 0x000E(0x0001)
	unsigned char                                      NumPendingProviderRemovalRequests;                        // 0x000F(0x0001)
	struct FChunkedList_Mirror                         Sequences;                                                // 0x0010(0x0004) (Native)
	struct FChunkedList_Mirror                         Events;                                                   // 0x0014(0x0004) (Native)
	struct FChunkedList_Mirror                         Variables;                                                // 0x0018(0x0004) (Native)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorKernelArrayStats
// 0x0010
struct FBehaviorKernelArrayStats
{
	int                                                UsedSlots;                                                // 0x0000(0x0004)
	int                                                UnusedSlots;                                              // 0x0004(0x0004)
	int                                                PeakUsage;                                                // 0x0008(0x0004)
	int                                                ContainerSlack;                                           // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorKernelStats
// 0x0068
struct FBehaviorKernelStats
{
	int                                                NumProcessesCreated;                                      // 0x0000(0x0004)
	int                                                NumThreadsCreated;                                        // 0x0004(0x0004)
	int                                                NumWaitingThreads;                                        // 0x0008(0x0004)
	int                                                NumEventsActivated;                                       // 0x000C(0x0004)
	int                                                NumEventsIgnored;                                         // 0x0010(0x0004)
	int                                                NumBehaviorsRun;                                          // 0x0014(0x0004)
	struct FBehaviorKernelArrayStats                   ProcessListStats;                                         // 0x0018(0x0010)
	struct FBehaviorKernelArrayStats                   ProviderListStats;                                        // 0x0028(0x0010)
	struct FBehaviorKernelArrayStats                   ObjectVariablesListStats;                                 // 0x0038(0x0010)
	struct FBehaviorKernelArrayStats                   DynamicBehaviorsListStats;                                // 0x0048(0x0010)
	int                                                ProvidersIndexFreeListLength;                             // 0x0058(0x0004)
	int                                                ObjectVariablesFreeListLength;                            // 0x005C(0x0004)
	int                                                TotalMemoryUsed;                                          // 0x0060(0x0004)
	int                                                MemoryUsedBySlack;                                        // 0x0064(0x0004)
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorEvent
// 0x0004
struct FReplicatedBehaviorEvent
{
	unsigned char                                      SequenceIndex;                                            // 0x0000(0x0001)
	unsigned char                                      EventCounter;                                             // 0x0001(0x0001)
	unsigned char                                      EventIndex;                                               // 0x0002(0x0001)
	unsigned char                                      EventOutput;                                              // 0x0003(0x0001)
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorConsumerState
// 0x000C
struct FReplicatedBehaviorConsumerState
{
	unsigned long                                      bIsProcessSuspended : 1;                                  // 0x0000(0x0004)
	int                                                BehaviorSequenceEnabledFlags;                             // 0x0004(0x0004)
	unsigned long                                      bNeedToApplyThisState : 1;                                // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventUserData
// 0x0018
struct FBehaviorEventUserData
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, EditConst)
	unsigned long                                      bEnabled : 1;                                             // 0x0008(0x0004) (Edit)
	unsigned long                                      bReplicate : 1;                                           // 0x0008(0x0004)
	int                                                MaxTriggerCount;                                          // 0x000C(0x0004) (Edit)
	float                                              ReTriggerDelay;                                           // 0x0010(0x0004) (Edit)
	class UBehaviorEventFilterBase*                    FilterObject;                                             // 0x0014(0x0004) (Edit, ExportObject, EditConst, NeedCtorLink, EditInline)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableLinkData
// 0x001C
struct FBehaviorVariableLinkData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, Const)
	int                                                ConnectionIndex;                                          // 0x0008(0x0004) (Edit, Const)
	TArray<int>                                        LinkedVariables;                                          // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
	class UProperty*                                   CachedProperty;                                           // 0x0018(0x0004) (Transient)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorActionLinkData
// 0x0008
struct FBehaviorActionLinkData
{
	int                                                LinkedBehavior;                                           // 0x0000(0x0004) (Edit, Const)
	float                                              ActivateDelay;                                            // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorOutputLinkData
// 0x0010
struct FBehaviorOutputLinkData
{
	int                                                LinkId;                                                   // 0x0000(0x0004) (Edit, Const)
	TArray<struct FBehaviorActionLinkData>             LinkedActions;                                            // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventData
// 0x0030
struct FBehaviorEventData
{
	struct FBehaviorEventUserData                      UserData;                                                 // 0x0000(0x0018) (Edit, Const, NeedCtorLink)
	TArray<struct FBehaviorVariableLinkData>           OutputVariables;                                          // 0x0018(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FBehaviorOutputLinkData>             OutputLinks;                                              // 0x0024(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.SubarrayData
// 0x0004
struct FSubarrayData
{
	int                                                ArrayIndexAndLength;                                      // 0x0000(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventData2
// 0x0020
struct FBehaviorEventData2
{
	struct FBehaviorEventUserData                      UserData;                                                 // 0x0000(0x0018) (Edit, Const, NeedCtorLink)
	struct FSubarrayData                               OutputVariables;                                          // 0x0018(0x0004) (Edit, Const)
	struct FSubarrayData                               OutputLinks;                                              // 0x001C(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceActionData
// 0x0044
struct FBehaviorSequenceActionData
{
	class UBehaviorBase*                               Behavior;                                                 // 0x0000(0x0004) (Edit, Const)
	struct FBehaviorVariableLinkData                   ContextVariables;                                         // 0x0004(0x001C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorVariableLinkData>           LinkedVariables;                                          // 0x0020(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FBehaviorVariableLinkData>           OutputVariables;                                          // 0x002C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FBehaviorOutputLinkData>             OutputLinks;                                              // 0x0038(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceActionData2
// 0x000C
struct FBehaviorSequenceActionData2
{
	class UBehaviorBase*                               Behavior;                                                 // 0x0000(0x0004) (Edit, Const)
	struct FSubarrayData                               LinkedVariables;                                          // 0x0004(0x0004) (Edit, Const)
	struct FSubarrayData                               OutputLinks;                                              // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableValueUnion_Mirror
// 0x0004
struct FBehaviorVariableValueUnion_Mirror
{
	struct FPointer                                    Data;                                                     // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableData
// 0x0010
struct FBehaviorVariableData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	unsigned char                                      Type;                                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FBehaviorVariableValueUnion_Mirror          Value;                                                    // 0x000C(0x0004) (Native, NoExport)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorOutputLinkData2
// 0x0008
struct FBehaviorOutputLinkData2
{
	int                                                LinkIdAndLinkedBehavior;                                  // 0x0000(0x0004) (Edit, Const)
	float                                              ActivateDelay;                                            // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableLinkData2
// 0x0014
struct FBehaviorVariableLinkData2
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, Const)
	unsigned char                                      VariableLinkType;                                         // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      ConnectionIndex;                                          // 0x0009(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FSubarrayData                               LinkedVariables;                                          // 0x000C(0x0004) (Edit, Const)
	class UProperty*                                   CachedProperty;                                           // 0x0010(0x0004) (Transient)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceData
// 0x0070
struct FBehaviorSequenceData
{
	struct FName                                       BehaviorSequenceName;                                     // 0x0000(0x0008) (Edit, Const)
	unsigned long                                      bEnabledOnSpawn : 1;                                      // 0x0008(0x0004) (Edit, Const)
	unsigned long                                      bSequenceEnabledMutex : 1;                                // 0x0008(0x0004) (Edit, Const)
	class UBehaviorSequenceCustomEnableCondition*      CustomEnableCondition;                                    // 0x000C(0x0004) (Edit, Const, EditInline)
	TArray<struct FBehaviorEventData>                  EventData;                                                // 0x0010(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink, Deprecated)
	TArray<struct FBehaviorEventData2>                 EventData2;                                               // 0x001C(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
	TArray<struct FBehaviorSequenceActionData>         BehaviorData;                                             // 0x0028(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink, Deprecated)
	TArray<struct FBehaviorSequenceActionData2>        BehaviorData2;                                            // 0x0034(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
	TArray<struct FBehaviorVariableData>               VariableData;                                             // 0x0040(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
	TArray<struct FBehaviorOutputLinkData2>            ConsolidatedOutputLinkData;                               // 0x004C(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
	TArray<struct FBehaviorVariableLinkData2>          ConsolidatedVariableLinkData;                             // 0x0058(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
	TArray<int>                                        ConsolidatedLinkedVariables;                              // 0x0064(0x000C) (Const, EditConst, DuplicateTransient, NeedCtorLink)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableValue
// 0x0019
struct FBehaviorVariableValue
{
	int                                                IntValue;                                                 // 0x0000(0x0004) (Const)
	float                                              FloatValue;                                               // 0x0004(0x0004) (Const)
	struct FVector                                     VectorValue;                                              // 0x0008(0x000C) (Const)
	class UObject*                                     ObjectValue;                                              // 0x0014(0x0004) (Const)
	unsigned char                                      VariableType;                                             // 0x0018(0x0001) (Const)
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRecord
// 0x0008
struct FProviderRecord
{
	class UBehaviorProviderDefinition*                 ProviderDefinition;                                       // 0x0000(0x0004)
	int                                                ReferenceCount;                                           // 0x0004(0x0004)
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMNotify
// 0x0004 (0x0010 - 0x0014)
struct FSMNotify : public FSMBehavior
{
	float                                              Time;                                                     // 0x0010(0x0004) (Edit, Const)
};

// ScriptStruct GearboxFramework.IBehaviorProvider.SpecializedBehaviorEvent
// 0x0008
struct FSpecializedBehaviorEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, Const)
};

// ScriptStruct GearboxFramework.GearboxAnimDefinition.TimedAnimBehaviorEvent
// 0x0008 (0x0008 - 0x0010)
struct FTimedAnimBehaviorEvent : public FSpecializedBehaviorEvent
{
	float                                              Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned long                                      bServerOnly : 1;                                          // 0x000C(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.OutputLinkToStruct
// 0x000C
struct FOutputLinkToStruct
{
	int                                                FromNodeID;                                               // 0x0000(0x0004)
	int                                                LinkNumber;                                               // 0x0004(0x0004)
	int                                                ToNodeID;                                                 // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.DialogEventData
// 0x000C
struct FDialogEventData
{
	class UGearboxDialogEventTag*                      Tag;                                                      // 0x0000(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x0004(0x0004)
	class UGearboxDialogAction*                        OutputAction;                                             // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.TalkActData
// 0x001C
struct FTalkActData
{
	float                                              OutputDelay;                                              // 0x0000(0x0004)
	TArray<struct FGearboxDialogData>                  TalkData;                                                 // 0x0004(0x000C) (NeedCtorLink)
	class UGearboxDialogVariable*                      TalkerVariable;                                           // 0x0010(0x0004)
	class UGearboxDialogAction*                        OutputAction;                                             // 0x0014(0x0004)
	unsigned long                                      bInstigatorTalker : 1;                                    // 0x0018(0x0004)
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.DialogEventInfo
// 0x0008
struct FDialogEventInfo
{
	class UGearboxDialogEvent*                         Event;                                                    // 0x0000(0x0004)
	int                                                NodeID;                                                   // 0x0004(0x0004)
};

// ScriptStruct GearboxFramework.GearboxProcess.StepConfiguration
// 0x0014
struct FStepConfiguration
{
	int                                                FirstAttemptDelay;                                        // 0x0000(0x0004)
	int                                                BaseRetrySeconds;                                         // 0x0004(0x0004)
	float                                              RetryMultiplier;                                          // 0x0008(0x0004)
	int                                                MaxRetryAttempts;                                         // 0x000C(0x0004)
	int                                                RetryJitter;                                              // 0x0010(0x0004)
};

// ScriptStruct GearboxFramework.SparkInterfaceImpl.SparkOutstandingRequest
// 0x007C
struct FSparkOutstandingRequest
{
	unsigned char                                      State;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDouble                                     SleepUntil;                                               // 0x0004(0x0008)
	unsigned long                                      WantResponse : 1;                                         // 0x000C(0x0004)
	unsigned long                                      ScriptCallback : 1;                                       // 0x000C(0x0004)
	struct FScriptDelegate                             RequestCompleteDelegate;                                  // 0x0010(0x000C) (NeedCtorLink)
	int                                                RequestIdentifier;                                        // 0x001C(0x0004)
	struct FPointer                                    SparkUpdateCallback;                                      // 0x0020(0x0004) (Native)
	struct FPointer                                    HttpRequest;                                              // 0x0024(0x0004) (Native)
	struct FPointer                                    RequestBody;                                              // 0x0028(0x0004) (Native)
	struct FPointer                                    ResponseBody;                                             // 0x002C(0x0004) (Native)
	int                                                RetryNumber;                                              // 0x0030(0x0004)
	int                                                BaseRetryIntervalSeconds;                                 // 0x0034(0x0004)
	int                                                MaxRetryAttempts;                                         // 0x0038(0x0004)
	float                                              RetryMultiplier;                                          // 0x003C(0x0004)
	int                                                RetryJitter;                                              // 0x0040(0x0004)
	int                                                HttpTimeout;                                              // 0x0044(0x0004)
	int                                                ReadBufferSize;                                           // 0x0048(0x0004)
	struct FString                                     Accept;                                                   // 0x004C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ContentType;                                              // 0x0058(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      Method;                                                   // 0x0064(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0068(0x000C) (AlwaysInit, NeedCtorLink)
	struct FDouble                                     RequestStartTime;                                         // 0x0074(0x0008)
};

// ScriptStruct GearboxFramework.AIComponent.PriorityData
// 0x0010
struct FPriorityData
{
	struct FString                                     Description;                                              // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UExpressionEvaluator*                        Condition;                                                // 0x000C(0x0004) (Edit, EditInline)
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverCandidate
// 0x000C
struct FCoverCandidate
{
	class AActor*                                      TheCoverActor;                                            // 0x0000(0x0004)
	int                                                SlotNdx;                                                  // 0x0004(0x0004)
	float                                              Score;                                                    // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionDataSpecialized
// 0x0000 (0x0008 - 0x0008)
struct FTimerEventReactionDataSpecialized : public FSpecializedBehaviorEvent
{

};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerBehaviorUserState
// 0x0024
struct FTimerBehaviorUserState
{
	struct FBehaviorTimerState                         Timers[0x3];                                              // 0x0000(0x000C)
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionData
// 0x0010
struct FTimerEventReactionData
{
	unsigned char                                      EventType;                                                // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0004(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorVariableState
// 0x0010
struct FBehaviorVariableState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	unsigned char                                      Type;                                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FBehaviorVariableValueUnion_Mirror          Value;                                                    // 0x000C(0x0004) (Native, NoExport)
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRemovalRequest
// 0x0008
struct FProviderRemovalRequest
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // 0x0000(0x0004)
	int                                                ProvidersIndex;                                           // 0x0004(0x0004)
};

// ScriptStruct GearboxFramework.BehaviorSequenceCustomEnableCondition.LinkedBehaviorSequence
// 0x0008
struct FLinkedBehaviorSequence
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                           // 0x0000(0x0004)
	struct FPointer                                    SequenceState;                                            // 0x0004(0x0004) (Native)
};

// ScriptStruct GearboxFramework.FiringPattern.FiringBehaviorBurstInfo
// 0x0019
struct FFiringBehaviorBurstInfo
{
	class AGearboxPawn*                                Instigator;                                               // 0x0000(0x0004)
	class AWeapon*                                     InstigatorWeapon;                                         // 0x0004(0x0004)
	class AActor*                                      TargetActor;                                              // 0x0008(0x0004)
	int                                                NumShots;                                                 // 0x000C(0x0004)
	float                                              RefireRate;                                               // 0x0010(0x0004)
	class UMindTargetInfo*                             TargetInfo;                                               // 0x0014(0x0004)
	unsigned char                                      FireType;                                                 // 0x0018(0x0001)
};

// ScriptStruct GearboxFramework.SparkNews.NewsArticle
// 0x0018
struct FNewsArticle
{
	struct FString                                     Header;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Body;                                                     // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.INounAttributeProvider.ReplicatedNounAttributeState
// 0x0010
struct FReplicatedNounAttributeState
{
	struct FName                                       NounName;                                                 // 0x0000(0x0008)
	float                                              Value;                                                    // 0x0008(0x0004)
	unsigned long                                      bOnlyRelevantToOwner : 1;                                 // 0x000C(0x0004) (Const)
};

// ScriptStruct GearboxFramework.GearboxMind.TargetIteratorData
// 0x0008
struct FTargetIteratorData
{
	class UClass*                                      Iterator;                                                 // 0x0000(0x0004) (Edit)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.GFxMovieManager.GearboxGFxPlayParameters
// 0x000C
struct FGearboxGFxPlayParameters
{
	class UGFxMovieDefinition*                         Definition;                                               // 0x0000(0x0004)
	class UObject*                                     OtherObject;                                              // 0x0004(0x0004)
	class APlayerController*                           PlayerOwner;                                              // 0x0008(0x0004)
};

// ScriptStruct GearboxFramework.IAIInterface.AttributeValuePair
// 0x0018
struct FAttributeValuePair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	struct FAttributeInitializationData                Value;                                                    // 0x0008(0x0010) (Edit)
};

// ScriptStruct GearboxFramework.IAIInterface.SpecialMoveValuePair
// 0x000C
struct FSpecialMoveValuePair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	class USpecialMoveDefinition*                      Value;                                                    // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionData
// 0x0018
struct FCustomEventReactionData
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit)
	unsigned long                                      bReplicateEvent : 1;                                      // 0x0008(0x0004) (Edit)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x000C(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionDataSpecialized
// 0x0004 (0x0008 - 0x000C)
struct FCustomEventReactionDataSpecialized : public FSpecializedBehaviorEvent
{
	unsigned long                                      bReplicateEvent : 1;                                      // 0x0008(0x0004) (Edit)
};

// ScriptStruct GearboxFramework.PopulationEncounter.SpawnOption
// 0x0008
struct FSpawnOption
{
	class UPopulationFactory*                          Factory;                                                  // 0x0000(0x0004)
	float                                              ComputedProbability;                                      // 0x0004(0x0004)
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunityStat
// 0x0004
struct FPopulationOpportunityStat
{
	float                                              PercentNodeReduction;                                     // 0x0000(0x0004)
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunitySavedActor
// 0x0058
struct FPopulationOpportunitySavedActor
{
	struct FNameBasedObjectPath                        FactoryPath;                                              // 0x0000(0x0034)
	float                                              TimeActorSaved;                                           // 0x0034(0x0004)
	struct FVector                                     SpawnActorLocation;                                       // 0x0038(0x000C)
	struct FRotator                                    SpawnActorRotation;                                       // 0x0044(0x000C)
	int                                                CreationFlags;                                            // 0x0050(0x0004)
	class UObject*                                     CustomActorData;                                          // 0x0054(0x0004)
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugStringData
// 0x0010
struct FDebugStringData
{
	struct FString                                     DebugStr;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FColor                                      StrColor;                                                 // 0x000C(0x0004)
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugEntryData
// 0x000C
struct FDebugEntryData
{
	TArray<struct FDebugStringData>                    DebugStrs;                                                // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkServiceConfiguration.SparkMicropatch
// 0x0034
struct FSparkMicropatch
{
	struct FString                                     ObjectPath;                                               // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     PropertyPath;                                             // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     OriginalValue;                                            // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     NewValue;                                                 // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bApplied : 1;                                             // 0x0030(0x0004)
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
