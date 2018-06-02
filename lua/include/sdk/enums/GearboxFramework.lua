enum.MakeEnum("AINodeType", {
	"NodeType_Blank",
	"NodeType_Action",
	"NodeType_Random",
	"NodeType_Priority",
	"NodeType_Sequential",
	"NodeType_MAX"
})

enum.MakeEnum("AIFailReason", {
	"AIFail_None",
	"AIFail_Timer",
	"AIFail_Failed",
	"AIFail_Action",
	"AIFail_Resource",
	"AIFail_Conditional",
	"AIFail_MAX"
})

enum.MakeEnum("EGBXPlatform", {
	"GBXPlatform_PC",
	"GBXPlatform",
	"GBXPlatform_PS3",
	"GBXPlatform_MAX"
})

enum.MakeEnum("EDifficultyLevel", {
	"DL_Casual",
	"DL_Normal",
	"DL_Hardcore",
	"DL_Insane",
	"DL_MAX"
})

enum.MakeEnum("EGearboxCoverTransition", {
	"GBXCOVERTRANS_None",
	"GBXCOVERTRANS_Detach",
	"GBXCOVERTRANS_PoppingUp",
	"GBXCOVERTRANS_LeaningOut",
	"GBXCOVERTRANS_PeekingUp",
	"GBXCOVERTRANS_BlindFiringUp",
	"GBXCOVERTRANS_ReturnToCover",
	"GBXCOVERTRANS_Mounting",
	"GBXCOVERTRANS_Dismounting",
	"GBXCOVERTRANS_Mantling",
	"GBXCOVERTRANS_ChangingDirection",
	"GBXCOVERTRANS_GameSpecific",
	"GBXCOVERTRANS_Reserved1",
	"GBXCOVERTRANS_Reserved2",
	"GBXCOVERTRANS_Reserved3",
	"GBXCOVERTRANS_Reserved4",
	"GBXCOVERTRANS_Reserved5",
	"GBXCOVERTRANS_Reserved6",
	"GBXCOVERTRANS_Reserved7",
	"GBXCOVERTRANS_Reserved8",
	"GBXCOVERTRANS_Reserved9",
	"GBXCOVERTRANS_MAX"
})

enum.MakeEnum("EGearboxCoverStateMetaData", {
	"GBXCOVERMETA_None",
	"GBXCOVERMETA_Detach",
	"GBXCOVERMETA_Left",
	"GBXCOVERMETA_Right",
	"GBXCOVERMETA_Interior",
	"GBXCOVERMETA_Dismount_SurpriseLeft",
	"GBXCOVERMETA_Dismount_SurpriseRight",
	"GBXCOVERMETA_Dismount_SurpriseTowardCover",
	"GBXCOVERMETA_Dismount_SurpriseWith180Turn",
	"GBXCOVERMETA_Dismount_Wallhop",
	"GBXCOVERMETA_Dismount_TowardCover",
	"GBXCOVERMETA_Dismount_With180Turn",
	"GBXCOVERMETA_GameSpecific",
	"GBXCOVERMETA_Reserved1",
	"GBXCOVERMETA_Reserved2",
	"GBXCOVERMETA_Reserved3",
	"GBXCOVERMETA_Reserved4",
	"GBXCOVERMETA_Reserved5",
	"GBXCOVERMETA_Reserved6",
	"GBXCOVERMETA_Reserved7",
	"GBXCOVERMETA_Reserved8",
	"GBXCOVERMETA_Reserved9",
	"GBXCOVERMETA_MAX"
})

enum.MakeEnum("EGearboxCoverState", {
	"GBXCOVERSTATE_Uncovered",
	"GBXCOVERSTATE_Covered",
	"GBXCOVERSTATE_PoppedUp",
	"GBXCOVERSTATE_LeanedOut",
	"GBXCOVERSTATE_Peeking",
	"GBXCOVERSTATE_BlindFiring",
	"GBXCOVERSTATE_Mantling",
	"GBXCOVERSTATE_GameSpecific",
	"GBXCOVERSTATE_Reserved1",
	"GBXCOVERSTATE_Reserved2",
	"GBXCOVERSTATE_Reserved3",
	"GBXCOVERSTATE_Reserved4",
	"GBXCOVERSTATE_Reserved5",
	"GBXCOVERSTATE_Reserved6",
	"GBXCOVERSTATE_Reserved7",
	"GBXCOVERSTATE_Reserved8",
	"GBXCOVERSTATE_Reserved9",
	"GBXCOVERSTATE_MAX"
})

enum.MakeEnum("EVantageType", {
	"VTYPE_Normal",
	"VTYPE_StandingUp",
	"VTYPE_OverWall",
	"VTYPE_AroundCorner",
	"VTYPE_MAX"
})

enum.MakeEnum("AwarenessReason", {
	"AWAREREASON_SawEnemy",
	"AWAREREASON_HeardEnemy",
	"AWAREREASON_HeardWeaponNoise",
	"AWAREREASON_NotifiedByFireTeam",
	"AWAREREASON_NotifiedByPlayer",
	"AWAREREASON_SuppressOrderGiven",
	"AWAREREASON_AttackedByEnemy",
	"AWAREREASON_BulletImpactOrWhiz",
	"AWAREREASON_GrenadeFromEnemy",
	"AWAREREASON_LevelDesignForceSee",
	"AWAREREASON_FriendlyKilled",
	"AWAREREASON_MAX"
})

enum.MakeEnum("ELocationSearchRandomness", {
	"ELOCRAND_PreferIdealDirection",
	"ELOCRAND_PreferRandomLight",
	"ELOCRAND_PreferRandomHeavy",
	"ELOCRAND_MAX"
})

enum.MakeEnum("ERepathBehavior", {
	"REPATH_None",
	"REPATH_IfOriginMoves",
	"REPATH_IfCoverBecomesInvalid",
	"REPATH_MAX"
})

enum.MakeEnum("ECoverFailureBehavior", {
	"COVERFAIL_TryToFindNonCoverSpot",
	"COVERFAIL_StopSearch",
	"COVERFAIL_MAX"
})

enum.MakeEnum("ECoverSearchFilter", {
	"COVERSEARCH_Normal",
	"COVERSEARCH_IgnoreCurrentCover",
	"COVERSEARCH_MAX"
})

enum.MakeEnum("EDestinationAdditionalTest", {
	"DESTTEST_None",
	"DESTTEST_HasLOSToTarget",
	"DESTTEST_BlockedLOSToTarget",
	"DESTTEST_MAX"
})

enum.MakeEnum("EMaterialParamType", {
	"MatParmType_None",
	"MatParmType_Color",
	"MatParmType_Font",
	"MatParmType_Scalar",
	"MatParmType_Texture",
	"MatParmType_Vector",
	"MatParmType_MAX"
})

enum.MakeEnum("ECameraZoomScale", {
	"EZOOM_NoChange",
	"EZOOM_UltraClose",
	"EZOOM_Close",
	"EZOOM_MidRange",
	"EZOOM_Wide",
	"EZOOM_MAX"
})

enum.MakeEnum("ECameraInterpolationMode", {
	"IM_Logarithmic",
	"IM_Linear",
	"IM_SineCurve",
	"IM_MAX"
})

enum.MakeEnum("EFacingPolicy", {
	"FACE_Unknown",
	"FACE_NoChange",
	"FACE_Actor",
	"FACE_Vector",
	"FACE_Destination",
	"FACE_CoverRegionIdle",
	"FACE_MAX"
})

enum.MakeEnum("EMovementSpeed", {
	"MOVESPEED_Stationary",
	"MOVESPEED_Walking",
	"MOVESPEED_Running",
	"MOVESPEED_Sprinting",
	"MOVESPEED_FastSprinting",
	"MOVESPEED_MAX"
})

enum.MakeEnum("EMovementFinishedCause", {
	"MOVEFINISHED_None",
	"MOVEFINISHED_FailedToFindCover",
	"MOVEFINISHED_FailedFindSearchOrigin",
	"MOVEFINISHED_FailedFindSearchDirection",
	"MOVEFINISHED_FailedFindNavMeshSpot",
	"MOVEFINISHED_FailedToGeneratePath",
	"MOVEFINISHED_FailedToCompleteNavigation",
	"MOVEFINISHED_Repath",
	"MOVEFINISHED_MovementInterrupted",
	"MOVEFINISHED_MoveSuccessfullyEnded",
	"MOVEFINISHED_MAX"
})

enum.MakeEnum("EAttributeEvaluationStyle", {
	"ATTREVALSTYLE_Once",
	"ATTREVALSTYLE_EveryFrame",
	"ATTREVALSTYLE_MAX"
})

enum.MakeEnum("EBehaviorVariableType", {
	"BVAR_None",
	"BVAR_Bool",
	"BVAR_Int",
	"BVAR_Float",
	"BVAR_Vector",
	"BVAR_Object",
	"BVAR_AllPlayers",
	"BVAR_Attribute",
	"BVAR_InstanceData",
	"BVAR_NamedVariable",
	"BVAR_NamedKismetVariable",
	"BVAR_DirectionVector",
	"BVAR_AttachmentLocation",
	"BVAR_UnaryMath",
	"BVAR_BinaryMath",
	"BVAR_Flag",
	"BVAR_MAX"
})

enum.MakeEnum("EBehaviorVariableLinkType", {
	"BVARLINK_Unknown",
	"BVARLINK_Context",
	"BVARLINK_Input",
	"BVARLINK_Output",
	"BVARLINK_MAX"
})

enum.MakeEnum("EDebugItemType", {
	"DEBUGITEM_String",
	"DEBUGITEM_StringSpacer",
	"DEBUGITEM_ScreenIcon",
	"DEBUGITEM_WorldString",
	"DEBUGITEM_Icon",
	"DEBUGITEM_Line",
	"DEBUGITEM_Box",
	"DEBUGITEM_Circle",
	"DEBUGITEM_Cone",
	"DEBUGITEM_BarGraphScreenTop",
	"DEBUGITEM_BarGraphScreenTopTitle",
	"DEBUGITEM_BarGraphScreenCenter",
	"DEBUGITEM_BarGraphScreenCenterTitle",
	"DEBUGITEM_MAX"
})

enum.MakeEnum("EDebugAlignment", {
	"DEBUGALIGN_Left",
	"DEBUGALIGN_Center",
	"DEBUGALIGN_Right",
	"DEBUGALIGN_LeftNoWrap",
	"DEBUGALIGN_LeftColumn2",
	"DEBUGALIGN_LeftColumn2NoWrap",
	"DEBUGALIGN_MAX"
})

enum.MakeEnum("ENPCOnUsedOutputs", {
	"USEDNPC_HasMissions",
	"USEDNPC_NoMissions",
	"USEDNPC_Generic",
	"USEDNPC_MAX"
})

enum.MakeEnum("AIResourceOption", {
	"AIResourceOption_On",
	"AIResourceOption_Off",
	"AIResourceOption_MAX"
})

enum.MakeEnum("NodeType", {
	"NT_Event",
	"NT_Action",
	"NT_Variable",
	"NT_MAX"
})

enum.MakeEnum("ESnapshotEventType", {
	"SNAP_NoEvent",
	"SNAP_ChildSequenceStart",
	"SNAP_RuleStart",
	"SNAP_RuleEnd",
	"SNAP_RuleInterrupt",
	"SNAP_SwitchRuleSet",
	"SNAP_PreventNewRules",
	"SNAP_MAX"
})

enum.MakeEnum("EAllegianceExpression", {
	"EAllegianceExpression_IsAllegiance",
	"EAllegianceExpression_IsNotAllegiance",
	"EAllegianceExpression_MAX"
})

enum.MakeEnum("EAnimState", {
	"EAnimState_None",
	"EAnimState_Playing",
	"EAnimState_Finished",
	"EAnimState_BlendingOut",
	"EAnimState_MAX"
})

enum.MakeEnum("EViewConeStyle", {
	"VIEWCONE_UseSightBone",
	"VIEWCONE_UsePawnRotation",
	"VIEWCONE_MAX"
})

enum.MakeEnum("ESpecialExposureBehavior", {
	"EXPOSUREBEHAVIOR_Normal",
	"EXPOSUREBEHAVIOR_AlwaysSeeThreats",
	"EXPOSUREBEHAVIOR_NeverSeeThreats",
	"EXPOSUREBEHAVIOR_MAX"
})

enum.MakeEnum("EHearingBehavior", {
	"HEARINGBEHAVIOR_NeverHear",
	"HEARINGBEHAVIOR_HearIfExposed",
	"HEARINGBEHAVIOR_AlwaysHear",
	"HEARINGBEHAVIOR_MAX"
})

enum.MakeEnum("AIHoldAction", {
	"AIHold_Hold",
	"AIHold_Release",
	"AIHold_MAX"
})

enum.MakeEnum("AIHoldType", {
	"AIHoldType_AI",
	"AIHoldType_Target",
	"AIHoldType_Movement",
	"AIHoldType_Demigod",
	"AIHoldType_God",
	"AIHoldType_Dialog",
	"AIHoldType_MAX"
})

enum.MakeEnum("EBehaviorTimerID", {
	"BTIMER",
	"BTIMER1",
	"BTIMER2",
	"BTIMER_MAX"
})

enum.MakeEnum("EBehaviorTimerEvent", {
	"TIMEREVENT_Timer1Elapsed",
	"TIMEREVENT_Timer2Elapsed",
	"TIMEREVENT_Timer3Elapsed",
	"TIMEREVENT_MAX"
})

enum.MakeEnum("EBehaviorTimerReaction", {
	"TR_NoChange",
	"TR_Start",
	"TR_Stop",
	"TR_Toggle",
	"TR_ResetValue",
	"TR_MAX"
})

enum.MakeEnum("ECompareBoolOutputLinkIds", {
	"OUTPUT_True",
	"OUTPUT_False",
	"OUTPUT_MAX"
})

enum.MakeEnum("ECompareValuesOutputLinkIds", {
	"OUTPUT_LessThanOrEqual",
	"OUTPUT_GreaterThan",
	"OUTPUT_Equal",
	"OUTPUT_LessThan",
	"OUTPUT_GreaterThanOrEqual",
	"OUTPUT_MAX"
})

enum.MakeEnum("EIsSequenceOutputLinkIds", {
	"OUTPUT_SequenceIsEnabled",
	"OUTPUT_SequenceIsDisabled",
	"OUTPUT_MAX"
})

enum.MakeEnum("BehaviorTimerFunction", {
	"BETF_None",
	"BETF_Start",
	"BETF_Pause",
	"BETF_Toggle",
	"BETF_Resume",
	"BETF_Stop",
	"BETF_MAX"
})

enum.MakeEnum("EPostAkEventOutputLinks", {
	"POSTAK_Out",
	"POSTAK_Finished",
	"POSTAK_MAX"
})

enum.MakeEnum("MessageBehaviorLogic", {
	"SENDERLOGIC_None",
	"SENDERLOGIC_UseBehaviorContext",
	"SENDERLOGIC_Self",
	"SENDERLOGIC_MyInstigator",
	"SENDERLOGIC_Other",
	"SENDERLOGIC_MAX"
})

enum.MakeEnum("EGbxMessageDupeStruct", {
	"GBXMSGDUPE_SameSender",
	"GBXMSGDUPE_SameSubject",
	"GBXMSGDUPE_SameNameData",
	"GBXMSGDUPE_SameIntData",
	"GBXMSGDUPE_SameFloatData",
	"GBXMSGDUPE_SameMetaData1",
	"GBXMSGDUPE_SameMetaData2",
	"GBXMSGDUPE_SameMetaData3",
	"GBXMSGDUPE_SameMetaData4",
	"GBXMSGDUPE_MAX"
})

enum.MakeEnum("ETriggerSpecialMoveOutputLinks", {
	"TRIGGER_SPECIALMOVE_Out",
	"TRIGGER_SPECIALMOVE_Finished",
	"TRIGGER_SPECIALMOVE_MAX"
})

enum.MakeEnum("EToggleDialogOption", {
	"ToggleDialog_Toggle",
	"ToggleDialog_Enable",
	"ToggleDialog_Disable",
	"ToggleDialog_MAX"
})

enum.MakeEnum("ETriggerDialogEventOutputLinks", {
	"TRIGGER_EVENT_Out",
	"TRIGGER_EVENT_Finished",
	"TRIGGER_EVENT_MAX"
})

enum.MakeEnum("EFireSocketSelectionMethod", {
	"FSSM_Increment",
	"FSSM_Random",
	"FSSM_RandomLooping",
	"FSSM_MAX"
})

enum.MakeEnum("EDirectionRelativeToParent", {
	"DIRECTION_Default",
	"DIRECTION_ParentOrientation",
	"DIRECTION_InverseParentOrientation",
	"DIRECTION_ParentVelocity",
	"DIRECTION_InverseParentVelocity",
	"DIRECTION_Random",
	"DIRECTION_RandomUpwards",
	"DIRECTION_RandomDownwards",
	"DIRECTION_RandomOnHorizontalPlane",
	"DIRECTION_StraightUp",
	"DIRECTION_StraightDown",
	"DIRECTION_StraightTowardTarget",
	"DIRECTION_ParentAimDirection",
	"DIRECTION_InverseParentAimDirection",
	"DIRECTION_InverseTearOffMomentum",
	"DIRECTION_MAX"
})

enum.MakeEnum("EBehaviorProcessState", {
	"BPROCESS_Uninitialized",
	"BPROCESS_Terminated",
	"BPROCESS_Running",
	"BPROCESS_Suspended",
	"BPROCESS_MAX"
})

enum.MakeEnum("EBehaviorThreadState", {
	"BTHREAD_Waiting",
	"BTHREAD_Running",
	"BTHREAD_Terminated",
	"BTHREAD_Unknown",
	"BTHREAD_MAX"
})

enum.MakeEnum("EMultiConditionOperator", {
	"EMCL_OR",
	"EMCL_AND",
	"EMCL_MAX"
})

enum.MakeEnum("ECameraLookAtMode", {
	"CLAM_FirstPerson",
	"CLAM_ThirdPersonAlignWithPlayer",
	"CLAM_ThirdPersonAlignBetweenPlayerAndTarget",
	"CLAM_MAX"
})

enum.MakeEnum("EBehaviorMsgInstigator", {
	"BEHAVMSGINST_NoInstigator",
	"BEHAVMSGINST_UseMsgSender",
	"BEHAVMSGINST_UseMsgSubject",
	"BEHAVMSGINST_UseAddlData",
	"BEHAVMSGINST_MAX"
})

enum.MakeEnum("EBehaviorMsgEventParticipant", {
	"BEHAVMSGPART_NoInstigator",
	"BEHAVMSGPART_UseMsgSender",
	"BEHAVMSGPART_UseMsgSubject",
	"BEHAVMSGPART_UseAddlData",
	"BEHAVMSGPART_MAX"
})

enum.MakeEnum("ECExpressionOperatorType", {
	"CEOP_Or",
	"CEOP_And",
	"CEOP_MAX"
})

enum.MakeEnum("EPointSpreadType", {
	"POINTSPREAD_Linear",
	"POINTSPREAD_Squared",
	"POINTSPREAD_InverseSquared",
	"POINTSPREAD_Cubed",
	"POINTSPREAD_InverseCubed",
	"POINTSPREAD_MAX"
})

enum.MakeEnum("ExecutionPatternType", {
	"RULEEXEC_Normal",
	"RULEEXEC_Limited",
	"RULEEXEC_MAX"
})

enum.MakeEnum("EFlagEvalType", {
	"FLAG_IsTrue",
	"FLAG_IsFalse",
	"FLAG_HasBeenTrueForXSeconds",
	"FLAG_HasBeenFalseForXSeconds",
	"FLAG_MAX"
})

enum.MakeEnum("EInitializedResult", {
	"INITIALIZED_ValidWithAccount",
	"INITIALIZED_ValidNoAccount",
	"INITIALIZED_InProgress",
	"INITIALIZED_NetworkFailure",
	"INITIALIZED_PlatformFailure",
	"INITIALIZED_NotValid",
	"INITIALIZED_MAX"
})

enum.MakeEnum("EAgreementsSigning", {
	"AGREEMENTS_Undefined",
	"AGREEMENTS_NoAgreementsToSign",
	"AGREEMENTS_AgreementsToSignPending",
	"AGREEMENTS_AgreementsToSignDeclined",
	"AGREEMENTS_MAX"
})

enum.MakeEnum("EHttpError", {
	"HE_Success",
	"HE_UnknownFailure",
	"HE_Timeout",
	"HE_BadUrl",
	"HE_Connect",
	"HE_SendRequest",
	"HE_ReceiveResponse",
	"HE_ReadResponse",
	"HE_WriteData",
	"HE_HttpStatus",
	"HE_ServerCertificate",
	"HE_MAX"
})

enum.MakeEnum("ESparkStepResult", {
	"STEP_Success",
	"STEP_Fail",
	"STEP_Async",
	"STEP_Disable",
	"STEP_Final",
	"STEP_MAX"
})

enum.MakeEnum("ESparkInitializationStatus", {
	"SPARKINIT_Uninitialized",
	"SPARKINIT_TMSDownloaded",
	"SPARKINIT_PendingAuthentication",
	"SPARKINIT_PendingVerification",
	"SPARKINIT_VerificationComplete",
	"SPARKINIT_Initialized",
	"SPARKINIT_Disabled",
	"SPARKINIT_UnrecoverableError",
	"SPARKINIT_MAX"
})

enum.MakeEnum("EEntitlementConsumedResult", {
	"CONSUME_Success",
	"CONSUME_GeneralFailure",
	"CONSUME_NetworkFailure",
	"CONSUME_Timeout",
	"CONSUME_MAX"
})

enum.MakeEnum("EResetPasswordResult", {
	"RESETP_Success",
	"RESETP_GeneralFailure",
	"RESETP_NetworkFailure",
	"RESETP_Timeout",
	"RESETP_MAX"
})

enum.MakeEnum("ECodeRedeemedResult", {
	"REDEEM_Success",
	"REDEEM_Expired",
	"REDEEM_NotValid",
	"REDEEM_Taken",
	"REDEEM_GeneralFailure",
	"REDEEM_NetworkFailure",
	"REDEEM_Timeout",
	"REDEEM_Duplicate",
	"REDEEM_MAX"
})

enum.MakeEnum("ESignInResult", {
	"SIGNIN_Success",
	"SIGNIN_PlatformTakenByOther",
	"SIGNIN_PlatformTakenBySelf",
	"SIGNIN_LoginFail",
	"SIGNIN_NetworkFailure",
	"SIGNIN_GeneralFailure",
	"SIGNIN_Timeout",
	"SIGNIN_MAX"
})

enum.MakeEnum("ESignUpResult", {
	"SIGNUP_Success",
	"SIGNUP_EmailTaken",
	"SIGNUP_PlatformTaken",
	"SIGNUP_GeneralFailure",
	"SIGNUP_PasswordNotSet",
	"SIGNUP_PasswordTooShort",
	"SIGNUP_PasswordTooLong",
	"SIGNUP_PasswordInvalid",
	"SIGNUP_EmailNotSet",
	"SIGNUP_EmailNotValid",
	"SIGNUP_NetworkFailure",
	"SIGNUP_Timeout",
	"SIGNUP_MAX"
})

enum.MakeEnum("EAgeGateResult", {
	"AGE_Valid",
	"AGE_InvalidDate",
	"AGE_BelowMinimum",
	"AGE_MAX"
})

enum.MakeEnum("HttpMethod", {
	"HM_POST",
	"HM_GET",
	"HM_PUT",
	"HM_MAX"
})

enum.MakeEnum("HttpMimeType", {
	"HMT_Default",
	"HMT_TEXT_PLAIN",
	"HMT_JSON",
	"HMT_PROTOBUF",
	"HMT_CUSTOM",
	"HMT_MAX"
})

enum.MakeEnum("EEndingCondition", {
	"EC_StopOnLastFrame",
	"EC_OnAnimEnd",
	"EC_OnBlendOut",
	"EC_Loop",
	"EC_MAX"
})

enum.MakeEnum("EDialogEventMatchQuality", {
	"MQ_NoMatch",
	"MQ_Match",
	"MQ_ForceMatch",
	"MQ_MAX"
})

enum.MakeEnum("EMovieStateMode", {
	"MOVIESTATE_Any",
	"MOVIESTATE_StateMachine",
	"MOVIESTATE_Flags",
	"MOVIESTATE_Custom",
	"MOVIESTATE_MAX"
})

enum.MakeEnum("EStateApplyMode", {
	"SAM_None",
	"SAM_GotoAndStop",
	"SAM_GotoAndPlay",
	"SAM_ActionScript",
	"SAM_MAX"
})

enum.MakeEnum("ENounReplicationStrategy", {
	"NOUNREP_NoReplication",
	"NOUNREP_RepToOwnerOnly",
	"NOUNREP_RepToEveryone",
	"NOUNREP_MAX"
})

enum.MakeEnum("EGenericYesOrNo", {
	"GPID_VALUE_NO",
	"GPID_VALUE_YES",
	"GPID_VALUE_MAX"
})

enum.MakeEnum("EThumbnailUpdate", {
	"Thumbnail_Static",
	"Thumbnail_Update",
	"Thumbnail_StreamTextures",
	"Thumbnail_Dynamic",
	"Thumbnail_MAX"
})

enum.MakeEnum("EGFxMoviePooling", {
	"GMP_Pooled",
	"GMP_Shared",
	"GMP_Instanced",
	"GMP_MAX"
})

enum.MakeEnum("EHUDAnchorPoint", {
	"HAP_None",
	"HAP_Center",
	"HAP_TopLeft",
	"HAP_TopRight",
	"HAP_BottomLeft",
	"HAP_BottomRight",
	"HAP_Left",
	"HAP_Top",
	"HAP_Right",
	"HAP_Bottom",
	"HAP_Projected",
	"HAP_ProjectedScaled",
	"HAP_MAX"
})

enum.MakeEnum("EHUDOrientation", {
	"HO_Horizontal",
	"HO_Vertical",
	"HO_MAX"
})

enum.MakeEnum("EHUDCoordType", {
	"HCT_Scaled",
	"HCT_Fixed",
	"HCT_MovieRelative",
	"HCT_MAX"
})

enum.MakeEnum("EInitialActionType", {
	"INITIALACTION_None",
	"INITIALACTION_MoveForward",
	"INITIALACTION_MoveToActor",
	"INITIALACTION_MoveToCover",
	"INITIALACTION_Burrow",
	"INITIALACTION_MAX"
})

enum.MakeEnum("ESpawnStyleType", {
	"ENTRANCE_None",
	"ENTRANCE_WalkOut",
	"ENTRANCE_CrawlOut",
	"ENTRANCE_ClimbOver1",
	"ENTRANCE_ClimbOver2",
	"ENTRANCE_PushTarpAside1",
	"ENTRANCE_PushTarpAside2",
	"ENTRANCE_PhaseIn",
	"ENTRANCE_PerchedLeft",
	"ENTRANCE_PerchedRight",
	"ENTRANCE_MAX"
})

enum.MakeEnum("KDBCategory", {
	"KDB_None",
	"KDB_Standard",
	"KDB_MAX"
})

enum.MakeEnum("KDBEvalType", {
	"Eval_Poll",
	"Eval_TargetIterator",
	"Eval_MAX"
})

enum.MakeEnum("ValueResolveAggregationType", {
	"AGGREG_AtLeastOne",
	"AGGREG_All",
	"AGGREG_None",
	"AGGREG_MAX"
})

enum.MakeEnum("EPopulationRespawnOptions", {
	"POPRESPAWN_Never",
	"POPRESPAWN_OnTimeDelay",
	"POPRESPAWN_OnlyOnLevelLoad",
	"POPRESPAWN_MAX"
})

enum.MakeEnum("EEncounterConstraintType", {
	"ENCOUNTERCONSTAINT_All",
	"ENCOUNTERCONSTAINT_Any",
	"ENCOUNTERCONSTAINT_NotAll",
	"ENCOUNTERCONSTAINT_NotAny",
	"ENCOUNTERCONSTAINT_MAX"
})

enum.MakeEnum("EPopulationStats", {
	"STATTYPE_SpawnActor",
	"STATTYPE_PointSearch",
	"STATTYPE_MAX"
})

enum.MakeEnum("EPopPointContraintType", {
	"POPOINTCONSTRAINT_None",
	"POPOINTCONSTRAINT_Inclusion",
	"POPOINTCONSTRAINT_Exclusion",
	"POPOINTCONSTRAINT_InclusionOr",
	"POPOINTCONSTRAINT_ExclusionOr",
	"POPOINTCONSTRAINT_MAX"
})

enum.MakeEnum("EPopulationPointType", {
	"POINT_Ambush",
	"POINT_PointOfInterest",
	"POINT_Vehicle",
	"POINT_MAX"
})

enum.MakeEnum("EMathValueResolverOperand", {
	"MATHRESOLVEROPERAND_Add",
	"MATHRESOLVEROPERAND_Sub",
	"MATHRESOLVEROPERAND_Mul",
	"MATHRESOLVEROPERAND_Div",
	"MATHRESOLVEROPERAND_MAX"
})

enum.MakeEnum("EMathValueResolverArg1Option", {
	"MATHRESOLVEARG1_UsePreviousValue",
	"MATHRESOLVEARG1_FromAttribute",
	"MATHRESOLVEARG1_MAX"
})

enum.MakeEnum("SparkRequestState", {
	"SRS_IDLE",
	"SRS_AWAITING_RETRY",
	"SRS_IN_FLIGHT",
	"SRS_AWAITING_AUTHENTICATE",
	"SRS_START",
	"SRS_FAIL",
	"SRS_QUEUED",
	"SRS_CLEANUP",
	"SRS_MAX"
})

enum.MakeEnum("ETargetIterator", {
	"TARGITER_UpdateState",
	"TARGITER_PriorityCalc",
	"TARGITER_ForgetTarget",
	"TARGITER_RemoveTarget",
	"TARGITER_PostProcess",
	"TARGITER_MAX"
})

enum.MakeEnum("ETimeValueResolverMode", {
	"TVRM_CurrentTime",
	"TVRM_FrameTime",
	"TVRM_ElapsedTime",
	"TVRM_MAX"
})

enum.MakeEnum("ENewsRetrievalResult", {
	"NEWSRETRIEVE_Success",
	"NEWSRETRIEVE_GeneralFailure",
	"NEWSRETRIEVE_NetworkFailure",
	"NEWSRETRIEVE_Timeout",
	"NEWSRETRIEVE_MAX"
})

