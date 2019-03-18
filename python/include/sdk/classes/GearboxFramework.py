from ctypes import *
import BL2SDK


class UActorFactoryClone_Data(Structure):
    _fields_ = [("CloneArchetype", TArray_AGearboxPawnPtr), ("NewCloneTag", FName)]


class UActorFactoryClone(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryClone", UActorFactoryClone_Data),
    ]


class UActorFactoryWireTerminal_Data(Structure):
    _fields_ = []


class UActorFactoryWireTerminal(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryWireTerminal", UActorFactoryWireTerminal_Data),
    ]


class UAIDebugCamera_Data(Structure):
    _fields_ = [
        ("Mind", POINTER(AGearboxMind)),
        ("RuleEngine", POINTER(URuleEngine)),
        ("DisplayList", TArray_FDebugListItem),
        ("bSnapshotModeOn", c_bool, 1),
        ("bShowFlags", c_bool, 1),
        ("bShowRules", c_bool, 1),
        ("bShowInactiveRules", c_bool, 1),
        ("bShowResources", c_bool, 1),
        ("bShowCombat", c_bool, 1),
        ("bShowRuleEngineLoadBalance", c_bool, 1),
        ("bShowAwarenessZones", c_bool, 1),
        ("bShowTargetViewCones", c_bool, 1),
        ("bShowTimers", c_bool, 1),
        ("bShowAITree", c_bool, 1),
        ("", c_ulong, 0),
        ("SnapshotNdx", c_int),
        ("CurSnapshot", POINTER(USnapshotRecord)),
        ("PopUpGraphTop", POINTER(UPopUpDebugBarGraph)),
        ("PopUpGraphCenter", POINTER(UPopUpDebugBarGraph)),
        ("CurrentInspectedTargetName", FName),
        ("TopBarGraphStartXPct", c_float),
        ("TopBarGraphStartYPct", c_float),
        ("CenterBarGraphStartXPct", c_float),
        ("CenterBarGraphStartYPct", c_float),
        ("Column2XOffset", c_float),
        ("Column1LastY", c_float),
        ("Column2LastY", c_float),
        ("LastColumnDrawnTo", c_int),
    ]


class UAIDebugCamera(Structure):
    _fields_ = [("UObject", UObject_Data), ("UAIDebugCamera", UAIDebugCamera_Data)]


class UAITracker_Data(Structure):
    _fields_ = [
        ("Snapshots", POINTER(USnapshotRecord) * 50),
        ("SnapshotSize", c_int),
        ("SnapshotIndex", c_int),
        ("DebugOwner", POINTER(AActor)),
    ]


class UAITracker(Structure):
    _fields_ = [("UObject", UObject_Data), ("UAITracker", UAITracker_Data)]


class UAnimNodeSpecialMoveBlend_Data(Structure):
    _fields_ = [
        ("AnimState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SavedBlendOutTime", c_float),
        ("SMI", FScriptInterface),
        ("AnimParameters", TArray_FSlotAnimParameters),
        ("bForceLocalSpaceBlend", c_bool, 1),
        ("IssueNotifiesWhenZeroWeight", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UAnimNodeSpecialMoveBlend(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAnimObject", UAnimObject_Data),
        ("UAnimNode", UAnimNode_Data),
        ("UAnimNodeBlendBase", UAnimNodeBlendBase_Data),
        ("UAnimNodeSlot", UAnimNodeSlot_Data),
        ("UAnimNodeSpecialMoveBlend", UAnimNodeSpecialMoveBlend_Data),
    ]


class UAttributeExpressionEvaluator_Data(Structure):
    _fields_ = [("Expression", FAttributeExpressionData)]


class UAttributeExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAttributeExpressionEvaluator", UAttributeExpressionEvaluator_Data),
    ]


class UBehavior_CallFunction_Data(Structure):
    _fields_ = [("FunctionName", FName)]


class UBehavior_CallFunction(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CallFunction", UBehavior_CallFunction_Data),
    ]


class UBehavior_ChangeRemoteBehaviorSequenceState_Data(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
        ("SequenceProvider", POINTER(UObject)),
        ("ProviderDefinitionPathName", FNameBasedObjectPath),
    ]


class UBehavior_ChangeRemoteBehaviorSequenceState(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeRemoteBehaviorSequenceState",
            UBehavior_ChangeRemoteBehaviorSequenceState_Data,
        ),
    ]


class UBehavior_ChangeTimer_Data(Structure):
    _fields_ = [
        ("TimerId", c_ubyte),
        ("Reaction", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("bSetNewTimerDelay", c_bool, 1),
        ("", c_ulong, 0),
        ("NewTimerDelayFormula", FAttributeInitializationData),
        ("NewTimerDelay", c_float),
    ]


class UBehavior_ChangeTimer(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ChangeTimer", UBehavior_ChangeTimer_Data),
    ]


class UBehavior_IsSequenceEnabled_Data(Structure):
    _fields_ = [
        ("SequenceName", FName),
        ("SequenceProvider", POINTER(UObject)),
        ("ProviderDefinitionPathName", FNameBasedObjectPath),
    ]


class UBehavior_IsSequenceEnabled(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_IsSequenceEnabled", UBehavior_IsSequenceEnabled_Data),
    ]


class UBehavior_PostAkEvent_Data(Structure):
    _fields_ = [
        ("Event", POINTER(UAkEvent)),
        ("bReplicateEvent", c_bool, 1),
        ("bForLocalPlayerOnly", c_bool, 1),
        ("bForcePlayImmediate", c_bool, 1),
        ("bPlayFromActor", c_bool, 1),
        ("bLatentWhenNoConnections", c_bool, 1),
        ("", c_ulong, 0),
        ("PlayingInfo", FAkPlayingInfo),
    ]


class UBehavior_PostAkEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_PostAkEvent", UBehavior_PostAkEvent_Data),
    ]


class UBehaviorHelpers_Data(Structure):
    _fields_ = [
        ("__BehaviorSetStrategy__Delegate", FScriptDelegate),
        ("__BehaviorStrategy__Delegate", FScriptDelegate),
    ]


class UBehaviorHelpers(Structure):
    _fields_ = [("UObject", UObject_Data), ("UBehaviorHelpers", UBehaviorHelpers_Data)]


class UCompoundExpressionEvaluator_Data(Structure):
    _fields_ = [
        ("Expression1", POINTER(UExpressionEvaluator)),
        ("Operator", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Expression2", POINTER(UExpressionEvaluator)),
    ]


class UCompoundExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UCompoundExpressionEvaluator", UCompoundExpressionEvaluator_Data),
    ]


class UConditionalAttributeValueResolver_Data(Structure):
    _fields_ = [("ValueExpressions", FConditionalInitializationExpressions)]


class UConditionalAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConditionalAttributeValueResolver", UConditionalAttributeValueResolver_Data),
    ]


class UConstantAttributeValueResolver_Data(Structure):
    _fields_ = [("ConstantValue", c_float)]


class UConstantAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConstantAttributeValueResolver", UConstantAttributeValueResolver_Data),
    ]


class UConstraintAttributeValueResolver_Data(Structure):
    _fields_ = [("Constraints", FRange)]


class UConstraintAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConstraintAttributeValueResolver", UConstraintAttributeValueResolver_Data),
    ]


class UFeatherBoneBlendDefinition_Data(Structure):
    _fields_ = [("BoneBlends", TArray_FFeatherBoneBlendData)]


class UFeatherBoneBlendDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFeatherBoneBlendDefinition", UFeatherBoneBlendDefinition_Data),
    ]


class UGBXActorList_Data(Structure):
    _fields_ = [("ActorList", TArray_Fs_actorList)]


class UGBXActorList(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGBXActorList", UGBXActorList_Data)]


class UGBXObjectList_Data(Structure):
    _fields_ = [("ObjectList", TArray_UObjectPtr)]


class UGBXObjectList(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGBXObjectList", UGBXObjectList_Data)]


class AGearboxAIController_Data(Structure):
    _fields_ = []


class AGearboxAIController(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("AAIController", AAIController_Data),
        ("AGearboxAIController", AGearboxAIController_Data),
    ]


class AGearboxAIMoveNode_Data(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bFaceNodeDirection", c_bool, 1),
        ("", c_ulong, 0),
        ("NextNodes", TArray_FNodeData),
        ("PreviousNodes", TArray_AGearboxAIMoveNodePtr),
        ("HoldTime", c_float),
        ("Behaviors", TArray_UBehaviorBasePtr),
        ("SpecialMoves", TArray_USpecialMoveDefinitionPtr),
        ("Sprite", POINTER(USpriteComponent)),
    ]


class AGearboxAIMoveNode(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AGearboxAIMoveNode", AGearboxAIMoveNode_Data),
    ]


class AGearboxCameraBasic_Data(Structure):
    _fields_ = [("VfTable_IInterfaceGearboxCamera", FPointer)]


class AGearboxCameraBasic(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("ACamera", ACamera_Data),
        ("AGearboxCameraBasic", AGearboxCameraBasic_Data),
    ]


class UGearboxCameraModifier_Data(Structure):
    _fields_ = [
        ("GBXCameraOwner", POINTER(AGearboxCameraBasic)),
        ("DesiredPOV", FTPOV),
        ("MasterFadeValue", c_float),
        ("FadeElapsedTime", c_float),
        ("FadeTimeSpan", c_float),
        ("FadeStarted", c_bool, 1),
        ("FadingUpwards", c_bool, 1),
        ("DisableWhenFadedOut", c_bool, 1),
        ("AdjustForTimeDilation", c_bool, 1),
        ("", c_ulong, 0),
        ("FadeMode", c_ubyte),
    ]


class UGearboxCameraModifier(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
    ]


class UGearboxCheatManager_Data(Structure):
    _fields_ = []


class UGearboxCheatManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UCheatManager", UCheatManager_Data),
        ("UGearboxCheatManager", UGearboxCheatManager_Data),
    ]


class UGearboxDialogInterface_Data(Structure):
    _fields_ = []


class UGearboxDialogInterface(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UGearboxDialogInterface", UGearboxDialogInterface_Data),
    ]


class UGearboxEditorNode_Data(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("OutputLinks", TArray_FOutputLink),
        ("InputLinks", TArray_UGearboxEditorNodePtr),
        ("VariableLinks", TArray_FVariableLink),
        ("bAllowInputs", c_bool, 1),
        ("bAllowOutputs", c_bool, 1),
        ("bAllowVariables", c_bool, 1),
        ("bAllowMovement", c_bool, 1),
        ("bAllowMultipleInputs", c_bool, 1),
        ("bAllowMultipleOutputs", c_bool, 1),
        ("bAllowMultipleVariables", c_bool, 1),
        ("", c_ulong, 0),
        ("SliderPosition", c_float),
    ]


class UGearboxEditorNode(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
    ]


class UGearboxEngine_Data(Structure):
    _fields_ = [
        ("CurrentUserID", c_int),
        ("CurrentDeviceID", c_int),
        ("bHasSelectedValidStorageDevice", c_bool, 1),
        ("", c_ulong, 0),
        ("DefaultSparkInterfaceName", FString),
        ("SparkInterface", FScriptInterface),
    ]


class UGearboxEngine(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("UEngine", UEngine_Data),
        ("UGameEngine", UGameEngine_Data),
        ("UGearboxEngine", UGearboxEngine_Data),
    ]


class AGearboxGameInfo_Data(Structure):
    _fields_ = []


class AGearboxGameInfo(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AGameInfo", AGameInfo_Data),
        ("AGearboxGameInfo", AGearboxGameInfo_Data),
    ]


class UGearboxGFxMovie_Data(Structure):
    _fields_ = [
        ("InteractionOverrideSounds", TArray_FAkEventResolver),
        ("TickRateSeconds", c_float),
        ("bTickScript", c_bool, 1),
        ("bTickFirstFrame", c_bool, 1),
        ("bRenderingDisabled", c_bool, 1),
        ("bSupportsStatePooling", c_bool, 1),
        ("bIsUsingFlashMouse", c_bool, 1),
        ("bBlockingMovie", c_bool, 1),
        ("bCloseOnDeath", c_bool, 1),
        ("", c_ulong, 0),
        ("AllStyles", TArray_UGFxMovieDrawStylePtr),
        ("MyDefinition", POINTER(UGFxMovieDefinition)),
        ("MyPool", POINTER(UGFxActorMoviePool)),
        ("PlayerOwners", TArray_AGearboxPlayerControllerPtr),
        ("ContextObject", POINTER(UObject)),
        ("LastTickTime", c_float),
        ("PoolParent", POINTER(UGearboxGFxMovie)),
        ("CurrentMovieState", FMovieStateStruct),
        ("BaseMovieStates", TArray_UGFxMovieStatePtr),
        ("AllMovieStates", TArray_UGFxMovieStatePtr),
        ("bMouseable", c_int),
        ("__OnInputAxis__Delegate", FScriptDelegate),
        ("__OnClosed__Delegate", FScriptDelegate),
    ]


class UGearboxGFxMovie(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
    ]


class UGFxMovie_StateParent_Data(Structure):
    _fields_ = [("StateClass", POINTER(UClass))]


class UGFxMovie_StateParent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
        ("UGFxMovie_StateParent", UGFxMovie_StateParent_Data),
    ]


class UGearboxGlobals_Data(Structure):
    _fields_ = [
        ("TheGlobalsDefinition", POINTER(UGearboxGlobalsDefinition)),
        ("ExposureUtilityClass", POINTER(UClass)),
        ("ExposureUtilityStrategyClass", POINTER(UClass)),
        ("TheExposureUtility", POINTER(UExposureUtilityBase)),
        ("TheAIFactory", POINTER(UGearboxAIFactory)),
        ("TheRuleEngineLoadBalanceManager", POINTER(URuleEngineLoadBalanceManager)),
        ("TheGBXActorList", POINTER(UGBXActorList)),
        ("TheGBXObjectList", POINTER(UGBXObjectList)),
        ("ValidNameList", TArray_FValidNameRange),
        ("TheWireMgr", POINTER(AWireManager)),
        ("TheMessageManager", POINTER(UGbxMessageManager)),
        ("TheDynamicTextureActorList", POINTER(UGBXActorList)),
        ("ThePopulationMaster", POINTER(UPopulationMaster)),
        ("TheBehaviorKernel", POINTER(UBehaviorKernel)),
        ("TheScreenSpaceManager", POINTER(UScreenSpaceManager)),
        ("TheGFxManager", POINTER(UGFxMovieManager)),
        ("TheRenderTextureManager", POINTER(UGearboxRenderTextureManager)),
        ("GlobalInstanceClassName", FString),
        ("DefaultMaxPopulationActorCost", c_int),
        ("StateRecords", TArray_FLevelStateRecord),
        ("UIAudioComponent", POINTER(UAkComponent)),
        ("TheDialogManager", POINTER(UGearboxDialogManager)),
    ]


class UGearboxGlobals(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEngineGlobals", UGearboxEngineGlobals_Data),
        ("UGearboxGlobals", UGearboxGlobals_Data),
    ]


class UGearboxGlobalsDefinition_Data(Structure):
    _fields_ = [
        ("RespawnDelayInSeconds", c_float),
        ("Dialog", POINTER(UGearboxDialogGlobalsDefinition)),
        ("EulaMovieDefinition", POINTER(UGFxMovieDefinition)),
    ]


class UGearboxGlobalsDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxGlobalsDefinition", UGearboxGlobalsDefinition_Data),
    ]


class UGearboxLocationRequest_Data(Structure):
    _fields_ = [
        ("SearchOrigin", POINTER(USearchOrigin)),
        ("DirectionFromOrigin", POINTER(USearchDirection)),
        ("LocationFilterTest", POINTER(ULocationFilter)),
        ("DirectionCone", c_float),
        ("MinDistanceFromOrigin", FAttributeInitializationData),
        ("MaxDistanceFromOrigin", FAttributeInitializationData),
        ("SearchRandomness", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SearchOriginResult", FVector),
        ("SearchDirectionResult", FVector),
    ]


class UGearboxLocationRequest(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxLocationRequest", UGearboxLocationRequest_Data),
    ]


class UPawnMoveLocationRequest_Data(Structure):
    _fields_ = [
        ("GoToCover", c_bool, 1),
        ("", c_ulong, 0),
        ("CoverSearchFilter", c_ubyte),
        ("RepathOption", c_ubyte),
        ("CoverFailureResponse", c_ubyte),
        ("DestinationTestNonCover", c_ubyte),
        ("RepathDistanceThresh", FAttributeInitializationData),
        ("FailureEvent", POINTER(URuleEventDef)),
        ("OverrideDistanceForCover", FAttributeInitializationData),
    ]


class UPawnMoveLocationRequest(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxLocationRequest", UGearboxLocationRequest_Data),
        ("UPawnMoveLocationRequest", UPawnMoveLocationRequest_Data),
    ]


class AGearboxPawn_Data(Structure):
    _fields_ = [
        ("VfTable_ISpecialMoveInterface", FPointer),
        ("VfTable_IGearboxDialogInterface", FPointer),
        ("NPCSightBone", FName),
        ("bWantsToMove", c_bool, 1),
        ("", c_ulong, 0),
        ("SMComponent", POINTER(USpecialMoveComponent)),
        ("ReplicatedSMData", FReplicatedSpecialMoveData),
        ("HasBeenShotAtRecently", FFlag),
        ("CoverState", FGearboxCoverState),
        ("CoverManager", POINTER(UGearboxCoverStateManager)),
        ("DialogComponent", POINTER(UGearboxDialogComponent)),
        ("DialogReplicatedData", FGearboxDialogReplicatedData),
        ("DyingScream", FAkPlayingInfo),
    ]


class AGearboxPawn(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APawn", APawn_Data),
        ("AGamePawn", AGamePawn_Data),
        ("AGearboxPawn", AGearboxPawn_Data),
    ]


class AGearboxPlayerController_Data(Structure):
    _fields_ = [
        ("CurrentViewShake", FGearboxViewShakeInfo),
        ("BaseDamageShake", FGearboxViewShakeInfo),
        ("ShakeOffset", FVector),
        ("ShakeRot", FRotator),
        ("ShakeFOV", c_float),
        ("bWantsToShowStorageMenu", c_bool, 1),
        ("bShouldCheckForProfileDeviceRemoval", c_bool, 1),
        ("", c_ulong, 0),
        ("AIDebugCam", POINTER(UAIDebugCamera)),
        ("PreviousDebugPawn", POINTER(AGearboxPawn)),
        ("AIDebugCamClass", POINTER(UClass)),
        ("DamageShakeMagnitudeMultiplier", c_float),
        ("DamageShakeMagnitudeMultiplierBaseValue", c_float),
        ("DamageShakeMagnitudeMultiplierModifierStack", TArray_UAttributeModifierPtr),
        ("DamageShakeTimeMultiplier", c_float),
        ("DamageShakeTimeMultiplierBaseValue", c_float),
        ("DamageShakeTimeMultiplierModifierStack", TArray_UAttributeModifierPtr),
        ("LeviathanReplicationChannel", POINTER(ULeviathanChannel)),
        ("PlaySessionGuid", FGuid),
        ("SessionBundleNumber", c_int),
        ("CachedProfileSettings", POINTER(UGearboxProfileSettings)),
    ]


class AGearboxPlayerController(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("APlayerController", APlayerController_Data),
        ("AGamePlayerController", AGamePlayerController_Data),
        ("AGearboxPlayerController", AGearboxPlayerController_Data),
    ]


class UGearboxPlayerInput_Data(Structure):
    _fields_ = []


class UGearboxPlayerInput(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UUIRoot", UUIRoot_Data),
        ("UInteraction", UInteraction_Data),
        ("UInput", UInput_Data),
        ("UPlayerInput", UPlayerInput_Data),
        ("UGearboxPlayerInput", UGearboxPlayerInput_Data),
    ]


class AGearboxPlayerReplicationInfo_Data(Structure):
    _fields_ = [("Difficulty", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("Dummy", c_int)]


class AGearboxPlayerReplicationInfo(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AReplicationInfo", AReplicationInfo_Data),
        ("APlayerReplicationInfo", APlayerReplicationInfo_Data),
        ("AGearboxPlayerReplicationInfo", AGearboxPlayerReplicationInfo_Data),
    ]


class UGearboxProfileSettings_Data(Structure):
    _fields_ = []


class UGearboxProfileSettings(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UOnlinePlayerStorage", UOnlinePlayerStorage_Data),
        ("UOnlineProfileSettings", UOnlineProfileSettings_Data),
        ("UGearboxProfileSettings", UGearboxProfileSettings_Data),
    ]


class UGearboxRenderTextureManager_Data(Structure):
    _fields_ = [
        ("FreeList2D", TArray_UTexture2DPtr),
        ("FreeList", TArray_UTextureRenderTarget2DPtr),
        ("HoldDuration", c_float),
        ("TimeToNextTick", c_float),
        ("Thumbnails", TArray_FThumbnailRenderData),
        ("DefaultLights", TArray_FThumbnailLightData),
        ("ThumbnailTextureArea", c_float),
    ]


class UGearboxRenderTextureManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxRenderTextureManager", UGearboxRenderTextureManager_Data),
    ]


class UGearboxSeqAct_DestroyPopulationActors_Data(Structure):
    _fields_ = [
        ("SaveDestroyedActors", c_bool, 1),
        ("DisablePopulationSpawners", c_bool, 1),
        ("bActorsDestroyed", c_bool, 1),
        ("", c_ulong, 0),
        ("Opportunities", TArray_APopulationOpportunityPtr),
        ("Encounters", TArray_APopulationEncounterPtr),
    ]


class UGearboxSeqAct_DestroyPopulationActors(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        (
            "UGearboxSeqAct_DestroyPopulationActors",
            UGearboxSeqAct_DestroyPopulationActors_Data,
        ),
    ]


class UGearboxSeqAct_ResetPopulationCount_Data(Structure):
    _fields_ = []


class UGearboxSeqAct_ResetPopulationCount(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        (
            "UGearboxSeqAct_ResetPopulationCount",
            UGearboxSeqAct_ResetPopulationCount_Data,
        ),
    ]


class UGearboxSkeletalMeshComponent_Data(Structure):
    _fields_ = [("FOV", c_float)]


class UGearboxSkeletalMeshComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UMeshComponent", UMeshComponent_Data),
        ("USkeletalMeshComponent", USkeletalMeshComponent_Data),
        ("UGearboxSkeletalMeshComponent", UGearboxSkeletalMeshComponent_Data),
    ]


class UGearboxStaticMeshComponent_Data(Structure):
    _fields_ = [("FOV", c_float)]


class UGearboxStaticMeshComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UMeshComponent", UMeshComponent_Data),
        ("UStaticMeshComponent", UStaticMeshComponent_Data),
        ("UGearboxStaticMeshComponent", UGearboxStaticMeshComponent_Data),
    ]


class UGestaltSkeletalMeshDefinition_Data(Structure):
    _fields_ = [
        ("GestaltSkeletalMesh", POINTER(USkeletalMesh)),
        ("bStaticMeshRigidBodyMesh", c_bool, 1),
        ("", c_ulong, 0),
        ("GestaltInfos", TArray_FGestaltInfo),
        ("GestaltAccessoryNames", TArray_FGestaltAccessoryNameEntry),
        ("GestaltSocketMappings", TArray_FGestaltSocketRemapEntry),
        ("GestaltPartBounds", TArray_FGestaltPartBoundsEntry),
    ]


class UGestaltSkeletalMeshDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGestaltSkeletalMeshDefinition", UGestaltSkeletalMeshDefinition_Data),
    ]


class UGFxActorMoviePool_Data(Structure):
    _fields_ = [
        ("MovieDefinition", POINTER(UGFxMovieDefinition)),
        ("Pools", TArray_FMovieInstanceArray),
        ("MovieTargets", TArray_FScriptInterface),
    ]


class UGFxActorMoviePool(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxActorMoviePool", UGFxActorMoviePool_Data),
    ]


class UGFxMovieDefinition_Data(Structure):
    _fields_ = [
        ("SwfMovie", POINTER(USwfMovie)),
        ("SwfMovieClass", POINTER(UClass)),
        ("Movie", POINTER(UGearboxGFxMovie)),
        ("ExternalInterfaceClass", POINTER(UClass)),
        ("bTakeFocus", c_bool, 1),
        ("bCaptureInput", c_bool, 1),
        ("bStartPaused", c_bool, 1),
        ("bIsModalGameMenu", c_bool, 1),
        ("bOverrideWorldLighting", c_bool, 1),
        ("bInputOwnerOnly", c_bool, 1),
        ("bInputAllKeys", c_bool, 1),
        ("", c_ulong, 0),
        ("FadeInSeconds", c_float),
        ("FadeOutSeconds", c_float),
        ("WorldLightingDirectionOffset", FRotator),
        ("DrawStyle", POINTER(UGFxMovieDrawStyle)),
        ("DepthPriority", c_int),
        ("PoolType", c_ubyte),
        ("ScaleMode", c_ubyte),
        ("AlignMode", c_ubyte),
        ("TimingMode", c_ubyte),
        ("RenderTextureMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Pool", FName),
        ("CustomStates", TArray_UGFxMovieStatePtr),
        ("AutoActivateStates", TArray_FName),
        ("MenuLinks", TArray_FGFxMenuLink),
        ("RenderTexture", POINTER(UTextureRenderTarget2D)),
        ("InteractionOverrideSounds", TArray_FAkEventResolver),
        ("BaseMovieStates", TArray_UGFxMovieStatePtr),
    ]


class UGFxMovieDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGFxMovieDefinition", UGFxMovieDefinition_Data),
    ]


class UGearboxEULAGFxMovieDefinition_Data(Structure):
    _fields_ = []


class UGearboxEULAGFxMovieDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGFxMovieDefinition", UGFxMovieDefinition_Data),
        ("UGearboxEULAGFxMovieDefinition", UGearboxEULAGFxMovieDefinition_Data),
    ]


class UGFxMovieDrawStyle_Data(Structure):
    _fields_ = [("Movie", POINTER(UGearboxGFxMovie)), ("TargetActor", FScriptInterface)]


class UGFxMovieDrawStyle(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
    ]


class UGFxMovieDrawStyleHUD_Data(Structure):
    _fields_ = [
        ("AnchorPoints", TArray_FHUDAnchorPoint),
        ("MovieDimensions", FHUDCoordValue * 2),
        ("bCacheValid", c_bool, 1),
        ("", c_ulong, 0),
        ("MovieScreenPos", c_float * 4),
    ]


class UGFxMovieDrawStyleHUD(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleHUD", UGFxMovieDrawStyleHUD_Data),
    ]


class UGFxMovieDrawStyleRTT_Data(Structure):
    _fields_ = [("TextureSize", c_int), ("RenderTextureMode", c_ubyte)]


class UGFxMovieDrawStyleRTT(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
    ]


class UGFxMovieDrawStyleComponent_Data(Structure):
    _fields_ = []


class UGFxMovieDrawStyleComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
    ]


class UGFxMovieDrawStyleMesh_Data(Structure):
    _fields_ = [
        ("MeshComponentArchetype", POINTER(UMeshComponent)),
        ("UseStaticMesh", POINTER(UStaticMesh)),
        ("UseSkeletalMesh", POINTER(USkeletalMesh)),
        ("UseMeshInstanceName", FName),
        ("MaterialIndex", c_int),
        ("OverrideMaterial", POINTER(UMaterial)),
        ("TextureParameterName", FName),
        ("Component", POINTER(UMeshComponent)),
        ("Mati", POINTER(UMaterialInstanceConstant)),
        ("OriginalMaterial", POINTER(UMaterialInterface)),
    ]


class UGFxMovieDrawStyleMesh(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
        ("UGFxMovieDrawStyleMesh", UGFxMovieDrawStyleMesh_Data),
    ]


class UGFxMovieDrawStyleSprite_Data(Structure):
    _fields_ = [("SpriteSize", c_int), ("TheSprite", POINTER(USpriteRTTComponent))]


class UGFxMovieDrawStyleSprite(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
        ("UGFxMovieDrawStyleSprite", UGFxMovieDrawStyleSprite_Data),
    ]


class UGFxMovieDrawStyleSplitscreen_Data(Structure):
    _fields_ = []


class UGFxMovieDrawStyleSplitscreen(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleSplitscreen", UGFxMovieDrawStyleSplitscreen_Data),
    ]


class UGFxMovieManager_Data(Structure):
    _fields_ = [
        ("Subscribers", TArray_AGearboxPlayerControllerPtr),
        ("MoviePools", TArray_UGFxActorMoviePoolPtr),
    ]


class UGFxMovieManager(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGFxMovieManager", UGFxMovieManager_Data)]


class UGFxMovieState_Data(Structure):
    _fields_ = [
        ("StateName", FName),
        ("DefaultState", FName),
        ("StateType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("AllStates", TArray_FMovieStateData),
    ]


class UGFxMovieState(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGFxMovieState", UGFxMovieState_Data)]


class UGFxMovieStateCustom_Data(Structure):
    _fields_ = [("CustomStates", TArray_FMovieStateData)]


class UGFxMovieStateCustom(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStateCustom", UGFxMovieStateCustom_Data),
    ]


class UGFxMovieStateFlags_Data(Structure):
    _fields_ = [("CustomFlags", TArray_FName)]


class UGFxMovieStateFlags(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStateFlags", UGFxMovieStateFlags_Data),
    ]


class UGFxMovieStatePlayerAware_Data(Structure):
    _fields_ = [
        ("LookAtThreshold", c_float),
        ("LookStates", TArray_FMovieStateData),
        ("RangeStates", TArray_FMovieRangeStateData),
    ]


class UGFxMovieStatePlayerAware(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStatePlayerAware", UGFxMovieStatePlayerAware_Data),
    ]


class UIAIInterface_Data(Structure):
    _fields_ = []


class UIAIInterface(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIAIInterface", UIAIInterface_Data),
    ]


class UIConstructObject_Data(Structure):
    _fields_ = []


class UIConstructObject(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIConstructObject", UIConstructObject_Data),
    ]


class UIGFxActorMovie_Data(Structure):
    _fields_ = []


class UIGFxActorMovie(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIGFxActorMovie", UIGFxActorMovie_Data),
    ]


class UINounAttributeProvider_Data(Structure):
    _fields_ = []


class UINounAttributeProvider(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UINounAttributeProvider", UINounAttributeProvider_Data),
    ]


class UInterfaceGearboxCamera_Data(Structure):
    _fields_ = []


class UInterfaceGearboxCamera(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UInterfaceGearboxCamera", UInterfaceGearboxCamera_Data),
    ]


class UIStreamingDataEvent_Data(Structure):
    _fields_ = []


class UIStreamingDataEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIStreamingDataEvent", UIStreamingDataEvent_Data),
    ]


class ULeviathanChannel_Data(Structure):
    _fields_ = [("Unknown1", c_ubyte, 0x10)]


class ULeviathanChannel(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UChannel", UChannel_Data),
        ("ULeviathanChannel", ULeviathanChannel_Data),
    ]


class UNoContextNeededAttributeContextResolver_Data(Structure):
    _fields_ = []


class UNoContextNeededAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UNoContextNeededAttributeContextResolver",
            UNoContextNeededAttributeContextResolver_Data,
        ),
    ]


class UNounAttributeValueResolver_Data(Structure):
    _fields_ = [
        ("ReplicationStrategy", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("DefaultValue", FAttributeInitializationData),
    ]


class UNounAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UNounAttributeValueResolver", UNounAttributeValueResolver_Data),
    ]


class UObjectFunctionAttributeValueResolver_Data(Structure):
    _fields_ = [("FunctionCall", FString)]


class UObjectFunctionAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        (
            "UObjectFunctionAttributeValueResolver",
            UObjectFunctionAttributeValueResolver_Data,
        ),
    ]


class UObjectPropertyContextResolver_Data(Structure):
    _fields_ = [("PropertyName", FName)]


class UObjectPropertyContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        ("UObjectPropertyContextResolver", UObjectPropertyContextResolver_Data),
    ]


class UPhysicsStateExpressionEvaluator_Data(Structure):
    _fields_ = [
        ("PhysicsState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bIsInState", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UPhysicsStateExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UPhysicsStateExpressionEvaluator", UPhysicsStateExpressionEvaluator_Data),
    ]


class UPopulationAspect_Data(Structure):
    _fields_ = []


class UPopulationAspect(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationAspect", UPopulationAspect_Data),
    ]


class UPopulationBodyTag_Data(Structure):
    _fields_ = []


class UPopulationBodyTag(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UPopulationBodyTag", UPopulationBodyTag_Data),
    ]


class APopulationEncounter_Data(Structure):
    _fields_ = [
        ("EncounterPopulationDef", POINTER(UPopulationDefinition)),
        ("MemberOutposts", TArray_APopulationOpportunityPtr),
        ("MemberOpportunities", TArray_APopulationOpportunityPtr),
        ("SpawnLimits", TArray_FEncounterLimitData),
        ("IsEnabled", c_bool, 1),
        ("AutoEnableOpportunities", c_bool, 1),
        ("bWaitingForNextWave", c_bool, 1),
        ("bIsWaitingForRespawn", c_bool, 1),
        ("", c_ulong, 0),
        ("Waves", TArray_FEncounterWaveData),
        ("CurrentWave", c_int),
        ("TimeToStartNextWave", c_float),
        ("RespawnDelayStartTime", c_float),
    ]


class APopulationEncounter(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationEncounter", APopulationEncounter_Data),
    ]


class UPopulationEncounterRenderingComponent_Data(Structure):
    _fields_ = []


class UPopulationEncounterRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationEncounterRenderingComponent",
            UPopulationEncounterRenderingComponent_Data,
        ),
    ]


class UPopulationOpportunityCombatRenderingComponent_Data(Structure):
    _fields_ = []


class UPopulationOpportunityCombatRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityCombatRenderingComponent",
            UPopulationOpportunityCombatRenderingComponent_Data,
        ),
    ]


class UPopulationSpawnedActorTagDefinition_Data(Structure):
    _fields_ = []


class UPopulationSpawnedActorTagDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        (
            "UPopulationSpawnedActorTagDefinition",
            UPopulationSpawnedActorTagDefinition_Data,
        ),
    ]


class UPopUpDebugBarGraph_Data(Structure):
    _fields_ = [
        ("Columns", TArray_FColumnDataStruct),
        ("TitleText", FString),
        ("BaseLineColor", FColor),
        ("TitleTextColor", FColor),
        ("ColumnWidth", c_float),
        ("ColumnPadding", c_float),
        ("ColumnMaxHeight", c_float),
        ("TextScale", c_float),
        ("TextPadding", c_float),
        ("TitleTextScale", c_float),
        ("TitleTextPaddingY", c_float),
        ("ColumnValueTextOffsetY", c_float),
    ]


class UPopUpDebugBarGraph(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopUpDebugBarGraph", UPopUpDebugBarGraph_Data),
    ]


class URandomAttributeValueResolver_Data(Structure):
    _fields_ = [
        ("bUseIntegerRandomization", c_bool, 1),
        ("", c_ulong, 0),
        ("LowerBound", FAttributeInitializationData),
        ("UpperBound", FAttributeInitializationData),
        ("ValueLifetime", FAttributeInitializationData),
        ("SavedRandomValues", TArray_FSavedRandomValue),
    ]


class URandomAttributeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("URandomAttributeValueResolver", URandomAttributeValueResolver_Data),
    ]


class URegionDefinition_Data(Structure):
    _fields_ = []


class URegionDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URegionDefinition", URegionDefinition_Data),
    ]


class URootMotionDefinition_Data(Structure):
    _fields_ = [
        ("RootMotionMode", c_ubyte),
        ("RootBoneOption", c_ubyte * 3),
        ("RootRotationMode", c_ubyte),
        ("RootRotationOption", c_ubyte * 3),
    ]


class URootMotionDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URootMotionDefinition", URootMotionDefinition_Data),
    ]


class URuleEngineLoadBalanceManager_Data(Structure):
    _fields_ = [
        ("NumTimeSpentThisFrame", c_float),
        ("LastTimeFullUpdate", c_float),
        ("WaitingEngines", TArray_FRuleEngineLoadBalanceStruct),
        ("DebugEngines", TArray_FDebugLoadBalance),
        ("ManagerStats", TArray_FRELBManagerStats),
        ("bIsDebugging", c_bool, 1),
        ("", c_ulong, 0),
        ("MSPosition", c_int),
    ]


class URuleEngineLoadBalanceManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("URuleEngineLoadBalanceManager", URuleEngineLoadBalanceManager_Data),
    ]


class UScreenSpaceManager_Data(Structure):
    _fields_ = [
        ("pLocalPlayer", POINTER(ULocalPlayer)),
        ("ViewWidth", c_int),
        ("ViewHeight", c_int),
        ("Unknown1", c_ubyte, 0x8),
        ("ViewProjectionMatrix", FMatrix),
        ("bMatricesUpToDate", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UScreenSpaceManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UScreenSpaceManager", UScreenSpaceManager_Data),
    ]


class USeqAct_AllPlayersInVolume_Data(Structure):
    _fields_ = [
        ("Volumes", TArray_AVolumePtr),
        ("bAllActorsInVolumes", c_bool, 1),
        ("bCheckForAllPlayers", c_bool, 1),
        ("", c_ulong, 0),
    ]


class USeqAct_AllPlayersInVolume(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AllPlayersInVolume", USeqAct_AllPlayersInVolume_Data),
    ]


class USeqCond_CompareLocation_Data(Structure):
    _fields_ = [("CheckRadius", c_float)]


class USeqCond_CompareLocation(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_CompareLocation", USeqCond_CompareLocation_Data),
    ]


class USeqCond_CompareString_Data(Structure):
    _fields_ = [("bCaseSensitive", c_bool, 1), ("", c_ulong, 0)]


class USeqCond_CompareString(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_CompareString", USeqCond_CompareString_Data),
    ]


class USeqCond_GetLanguage_Data(Structure):
    _fields_ = [("LangList", TArray_FString)]


class USeqCond_GetLanguage(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_GetLanguage", USeqCond_GetLanguage_Data),
    ]


class USimpleMathValueResolver_Data(Structure):
    _fields_ = [
        ("Arg1Option", c_ubyte),
        ("Operand", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("Arg1Attribute", FAttributeInitializationData),
        ("Argument", FAttributeInitializationData),
    ]


class USimpleMathValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("USimpleMathValueResolver", USimpleMathValueResolver_Data),
    ]


class USpecialMoveComponent_Data(Structure):
    _fields_ = [
        ("bLocalPlay", c_bool, 1),
        ("", c_ulong, 0),
        ("StartTime", c_float),
        ("SMI", FScriptInterface),
        ("CurrentSMData", FSpecialMoveData),
        ("SMDQueue", TArray_FSpecialMoveData),
        ("SMBlendNode", POINTER(UAnimNodeSpecialMoveBlend)),
    ]


class USpecialMoveComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("USpecialMoveComponent", USpecialMoveComponent_Data),
    ]


class USpecialMoveDefinition_Data(Structure):
    _fields_ = [
        ("NextSpecialMove", POINTER(USpecialMoveDefinition)),
        ("StopExpression", POINTER(UExpressionEvaluator)),
        ("bOwnerAlwaysRelevant", c_bool, 1),
        ("bClientHasAuthority", c_bool, 1),
        ("", c_ulong, 0),
    ]


class USpecialMoveDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
    ]


class USpecialMoveExpressionList_Data(Structure):
    _fields_ = [("SpecialMoveList", TArray_FSMExpressionList)]


class USpecialMoveExpressionList(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("USpecialMoveExpressionList", USpecialMoveExpressionList_Data),
    ]


class USpecialMoveRandom_Data(Structure):
    _fields_ = [("RandomList", TArray_FSMRandomPair)]


class USpecialMoveRandom(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("USpecialMoveRandom", USpecialMoveRandom_Data),
    ]


class USpecialMoveInterface_Data(Structure):
    _fields_ = []


class USpecialMoveInterface(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("USpecialMoveInterface", USpecialMoveInterface_Data),
    ]


class UStateAttributeResolver_Data(Structure):
    _fields_ = [("NameKey", FName)]


class UStateAttributeResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UStateAttributeResolver", UStateAttributeResolver_Data),
    ]


class UTimeValueResolver_Data(Structure):
    _fields_ = [
        ("TimeMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("StartTime", FAttributeInitializationData),
        ("TotalTime", FAttributeInitializationData),
    ]


class UTimeValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UTimeValueResolver", UTimeValueResolver_Data),
    ]


class AWireManager_Data(Structure):
    _fields_ = [("DefaultMaterial", POINTER(UMaterialInterface))]


class AWireManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AWireManager", AWireManager_Data),
    ]


class AWireTerminal_Data(Structure):
    _fields_ = [
        ("NextTerminal", POINTER(AWireTerminal)),
        ("Linkages", TArray_FWireLinkage),
        ("WireMaterial", POINTER(UMaterialInterface)),
        ("bTerminalDirty", c_bool, 1),
        ("", c_ulong, 0),
    ]


class AWireTerminal(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AStaticMeshActorBase", AStaticMeshActorBase_Data),
        ("AStaticMeshActor", AStaticMeshActor_Data),
        ("AWireTerminal", AWireTerminal_Data),
    ]


class AWiringActor_Data(Structure):
    _fields_ = []


class AWiringActor(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AStaticMeshActorBase", AStaticMeshActorBase_Data),
        ("AStaticMeshActor", AStaticMeshActor_Data),
        ("AWiringActor", AWiringActor_Data),
    ]


class UWiringMesh_Data(Structure):
    _fields_ = [("Unknown1", c_ubyte, 0x240)]


class UWiringMesh(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UStaticMesh", UStaticMesh_Data),
        ("UWiringMesh", UWiringMesh_Data),
    ]


class UActionResource_Data(Structure):
    _fields_ = []


class UActionResource(Structure):
    _fields_ = [("UObject", UObject_Data), ("UActionResource", UActionResource_Data)]


class UActionSequence_Data(Structure):
    _fields_ = [
        ("ResourcesUsed", TArray_UClassPtr),
        ("MyRuleEngine", POINTER(URuleEngine)),
        ("AttachedRule", POINTER(URule)),
        ("LatentFloat", c_float),
        ("bInitialized", c_bool, 1),
        ("bDoWorkFinished", c_bool, 1),
        ("bInAtomicSection", c_bool, 1),
        ("bDoNotLoadBalance", c_bool, 1),
        ("", c_ulong, 0),
        ("ParentSequence", POINTER(UActionSequence)),
        ("ChildSequence", POINTER(UActionSequence)),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("ContextMenu", FString),
        ("StoredDeltaTime", c_float),
        ("FlagValuesToSetOnBegin", TArray_FFlagDefinitionInitialization),
        ("FlagValuesToSetOnEnd", TArray_FFlagDefinitionInitialization),
        ("AI", FScriptInterface),
        ("BehaviorOutputs", TArray_FName),
        ("BehaviorName", FName),
    ]


class UActionSequence(Structure):
    _fields_ = [("UObject", UObject_Data), ("UActionSequence", UActionSequence_Data)]


class UActionSequenceList_Data(Structure):
    _fields_ = [("CurrentIndex", c_int)]


class UActionSequenceList(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequenceList", UActionSequenceList_Data),
    ]


class UActionSequencePawn_Data(Structure):
    _fields_ = [
        ("MyGearboxMind", POINTER(AGearboxMind)),
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
    ]


class UActionSequencePawn(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
    ]


class UAction_PawnMovementBase_Data(Structure):
    _fields_ = [
        ("CachedSearchOrigin", FVector),
        ("CoverCheckThrottle", FFlag),
        ("CoverCheckThrottleInterval", c_float),
        ("ShouldRepeatNavSearch", c_bool, 1),
        ("Interrupted", c_bool, 1),
        ("GoToCover", c_bool, 1),
        ("UsePreciseArrival", c_bool, 1),
        ("", c_ulong, 0),
        ("NewGoalLocation", FVector),
        ("OneMoveRequest", POINTER(UPawnMoveLocationRequest)),
        ("MoveRequestClass", POINTER(UClass)),
        ("AttributesToEvaluate", TArray_FAttributeInitializationData),
        ("AttributeEvalStyle", c_ubyte),
        ("SearchRandomness", c_ubyte),
        ("CoverSearchFilter", c_ubyte),
        ("CoverFailureResponse", c_ubyte),
        ("RepathOption", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SearchOrigin", POINTER(USearchOrigin)),
        ("DirectionFromOrigin", POINTER(USearchDirection)),
        ("DirectionCone", c_float),
        ("LocationFilterTest", POINTER(ULocationFilter)),
        ("MinDistanceFromOrigin", FAttributeInitializationData),
        ("MaxDistanceFromOrigin", FAttributeInitializationData),
        ("OverrideDistanceForCover", FAttributeInitializationData),
        ("RepathDistanceThresh", FAttributeInitializationData),
        ("FailureEvent", POINTER(URuleEventDef)),
    ]


class UAction_PawnMovementBase(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PawnMovementBase", UAction_PawnMovementBase_Data),
    ]


class UActionSequenceRandom_Data(Structure):
    _fields_ = [("ActionList", TArray_FActionSequenceRandomData)]


class UActionSequenceRandom(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequenceRandom", UActionSequenceRandom_Data),
    ]


class UAIComponent_Data(Structure):
    _fields_ = [
        ("UpdateRate", c_float),
        ("AI", FScriptInterface),
        ("bInitialized", c_bool, 1),
        ("", c_ulong, 0),
        ("AIDef", POINTER(UAIDefinition)),
        ("LastStateUpdateTime", c_float),
        ("CurrentState", FPointer),
        ("ResourceData", TArray_FAIResourceData),
        ("CurrentTarget", POINTER(AActor)),
        ("ScriptedTarget", POINTER(AActor)),
        ("LastTargetUpdateTime", c_float),
        ("Targets", TArray_UMindTargetInfoPtr),
        ("TargetingDef", POINTER(UTargetingDefinition)),
        ("MindTargetInfoClass", POINTER(UClass)),
        ("Holds", TArray_FAIHoldData),
        ("TargetHolds", TArray_FAIHoldData),
        ("MovementHolds", TArray_FAIHoldData),
        ("DemigodHolds", TArray_FAIHoldData),
        ("GodHolds", TArray_FAIHoldData),
        ("DialogHolds", TArray_FAIHoldData),
    ]


class UAIComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UAIComponent", UAIComponent_Data),
    ]


class UAICostExpressionEvaluator_Data(Structure):
    _fields_ = [("Multiplier", c_int), ("PopDef", POINTER(UPopulationDefinition))]


class UAICostExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAICostExpressionEvaluator", UAICostExpressionEvaluator_Data),
    ]


class UAIFactoryBase_Data(Structure):
    _fields_ = [
        ("KnowledgeRecordList", TArray_FKnowledgeRecordStruct),
        ("RuleSets", TArray_FRuleSetRecord),
        ("Rules", TArray_FRuleRecord),
        ("ActionSequences", TArray_FActionSequenceRecord),
        ("TargetRecords", TArray_FTargetInfoRecord),
        ("AIDefinitionRecords", TArray_FAIDefinitionRecord),
        ("TimeStampedRecordLifetime", c_float),
    ]


class UAIFactoryBase(Structure):
    _fields_ = [("UObject", UObject_Data), ("UAIFactoryBase", UAIFactoryBase_Data)]


class UGearboxAIFactory_Data(Structure):
    _fields_ = []


class UGearboxAIFactory(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAIFactoryBase", UAIFactoryBase_Data),
        ("UGearboxAIFactory", UGearboxAIFactory_Data),
    ]


class UAIResource_Data(Structure):
    _fields_ = [
        ("ResourceRestrictions", TArray_FAIResourceRestriction),
        ("MaxUsers", c_int),
        ("MinUsers", c_int),
    ]


class UAIResource(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAIResource", UAIResource_Data),
    ]


class UAIResourceExpressionEvaluator_Data(Structure):
    _fields_ = [
        ("Option", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Resource", POINTER(UAIResource)),
    ]


class UAIResourceExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAIResourceExpressionEvaluator", UAIResourceExpressionEvaluator_Data),
    ]


class UAllegianceExpressionEvaluator_Data(Structure):
    _fields_ = [
        ("AllegianceCheck", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Allegiance", POINTER(UPawnAllegiance)),
    ]


class UAllegianceExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAllegianceExpressionEvaluator", UAllegianceExpressionEvaluator_Data),
    ]


class UAwarenessZoneCollectionDefinition_Data(Structure):
    _fields_ = [
        ("DefaultAwarenessZones", TArray_UAwarenessZoneDefinitionPtr),
        ("CollectionName", FName),
    ]


class UAwarenessZoneCollectionDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAwarenessZoneCollectionDefinition", UAwarenessZoneCollectionDefinition_Data),
    ]


class UAwarenessZoneDefinition_Data(Structure):
    _fields_ = [
        ("ZoneName", FString),
        ("OuterRimInfinitelyFarAway", c_bool, 1),
        ("ViewConeOnlyUsedForUnknownTargets", c_bool, 1),
        ("NeverForgetHiddenThreats", c_bool, 1),
        ("", c_ulong, 0),
        ("OuterRimDistance", c_float),
        ("ViewConeStyle", c_ubyte),
        ("SpecialExposureBehavior", c_ubyte),
        ("HearingBehavior", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("ViewConeFieldOfViewInDegrees", c_float),
        ("MinExposureRatingConsideredVisible", c_float),
        ("ForgetHiddenThreatsAfterXSeconds", c_float),
        ("TargetSelectionPriority", c_float),
        ("ZoneColor", FColor),
        ("TimeFiringAtLastKnownLocation", c_float),
    ]


class UAwarenessZoneDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAwarenessZoneDefinition", UAwarenessZoneDefinition_Data),
    ]


class UBehavior_SendGbxMessage_Data(Structure):
    _fields_ = [
        ("MessageDefinition", POINTER(UGbxMessageDefinition)),
        ("AssignSenderTo", c_ubyte),
        ("AssignSubjectTo", c_ubyte),
        ("TakeLocationFrom", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("MetaData", FGbxMessageSimpleMetaData),
    ]


class UBehavior_SendGbxMessage(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SendGbxMessage", UBehavior_SendGbxMessage_Data),
    ]


class UBehavior_SetFlag_Data(Structure):
    _fields_ = [("FlagsToSet", TArray_FFlagDefinitionInitialization)]


class UBehavior_SetFlag(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SetFlag", UBehavior_SetFlag_Data),
    ]


class UBestTargetAttributeContextResolver_Data(Structure):
    _fields_ = [("bGetTargetInfo", c_bool, 1), ("", c_ulong, 0)]


class UBestTargetAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UBestTargetAttributeContextResolver",
            UBestTargetAttributeContextResolver_Data,
        ),
    ]


class UCharacterClassMessageDefinition_Data(Structure):
    _fields_ = [("BehaviorTriggers", TArray_FBehaviorTriggerMessageStruct)]


class UCharacterClassMessageDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UCharacterClassMessageDefinition", UCharacterClassMessageDefinition_Data),
    ]


class UCoverSearchCriteria_Data(Structure):
    _fields_ = [
        ("DoDistanceToOriginCandidateTest", c_bool, 1),
        ("DoProvidesCoverCandidateTest", c_bool, 1),
        ("DoDistanceToThreatCandidateTest", c_bool, 1),
        ("DoVantageToBestTargetCandidateTest", c_bool, 1),
        ("DoVantageToAnyTargetCandidateTest", c_bool, 1),
        ("DoAssignmentVolumeCandidateTest", c_bool, 1),
        ("DoBlacklistedCoverCandidateTest", c_bool, 1),
        ("DoScoringForDistanceToOrigin", c_bool, 1),
        ("DoScoringForDistanceToThreat", c_bool, 1),
        ("DoScoringForProvidesCover", c_bool, 1),
        ("DoScoringForVantageOnBestTarget", c_bool, 1),
        ("DoScoringForVantageOnAnyTarget", c_bool, 1),
        ("DoScoringForUnoccupiedLink", c_bool, 1),
        ("DoScoringForNonBlacklistedCover", c_bool, 1),
        ("", c_ulong, 0),
        ("DistanceToOriginCandidateTestMax", c_float),
        ("DistanceToThreatCandidateTest", c_float),
        ("MinDistanceToOrigin", c_float),
        ("MaxDistanceToOrigin", c_float),
        ("ScoreDistanceToOrigin", c_float),
        ("MinDistanceToThreat", c_float),
        ("MaxDistanceToThreat", c_float),
        ("ScoreDistanceToThreat", c_float),
        ("MaxDistanceProvidesCover", c_float),
        ("ScoreProvidesCover", c_float),
        ("ScoreVantageOnBestTarget", c_float),
        ("ScoreVantageOnAnyTarget", c_float),
        ("ScoreUnoccupiedLink", c_float),
        ("ScoreNonBlacklistedCover", c_float),
    ]


class UCoverSearchCriteria(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UCoverSearchCriteria", UCoverSearchCriteria_Data),
    ]


class UExposureUtilityBase_Data(Structure):
    _fields_ = [
        ("ExposureEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("ExposureStrategy", POINTER(UExposureUtilityStrategy)),
    ]


class UExposureUtilityBase(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
    ]


class UExposureUtilityBasicCaching_Data(Structure):
    _fields_ = [
        ("CachingEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxCacheTime", c_float),
        ("DistanceClose", c_float),
        ("DistanceMed", c_float),
        ("CacheFreshnessTimeClose", c_float),
        ("CacheFreshnessTimeMed", c_float),
        ("CacheFreshnessTimeFar", c_float),
        ("CacheFreshnessTimePlayer", c_float),
        ("CacheTimeFudgeFactorClose", c_float),
        ("CacheTimeFudgeFactorMed", c_float),
        ("CacheTimeFudgeFactorFar", c_float),
        ("HasMovedDistThreshold", c_float),
        ("HasMovedDistThresholdPlayer", c_float),
        ("CachedExposures", TArray_FExposureCacheStruct),
    ]


class UExposureUtilityBasicCaching(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
        ("UExposureUtilityBasicCaching", UExposureUtilityBasicCaching_Data),
    ]


class UExposureUtilityFixedCost_Data(Structure):
    _fields_ = [
        ("CloseDistanceSquared", c_float),
        ("MedDistanceSquared", c_float),
        ("MaxLineChecksPerFrame", c_int),
        ("Buckets", TArray_FBucketStruct),
        ("MedAccumulatedTime", c_float),
        ("FarAccumulatedTime", c_float),
        ("SkipUpdateForTime", c_float),
        ("MaxPointData", c_int),
        ("PointLineChecks", c_int),
        ("PointMaxLineChecks", c_int),
        ("PointFreshTime", c_float),
        ("PointStaleTime", c_float),
        ("PointMaxErrorSq", c_float),
        ("PointData", TArray_FPointExposureData),
    ]


class UExposureUtilityFixedCost(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
        ("UExposureUtilityBasicCaching", UExposureUtilityBasicCaching_Data),
        ("UExposureUtilityFixedCost", UExposureUtilityFixedCost_Data),
    ]


class UExposureUtilityStrategy_Data(Structure):
    _fields_ = []


class UExposureUtilityStrategy(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityStrategy", UExposureUtilityStrategy_Data),
    ]


class UFiringBehaviorDefinition_Data(Structure):
    _fields_ = [("ConditionalPatterns", TArray_FConditionalPattern)]


class UFiringBehaviorDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringBehaviorDefinition", UFiringBehaviorDefinition_Data),
    ]


class UFiringBehaviorManager_Data(Structure):
    _fields_ = [
        ("CurrentFiringPattern", POINTER(UFiringPattern)),
        ("CurrentTargetExposure", c_float),
        ("NumShotsThisBurst", c_int),
        ("CachedTargetPoint", FVector),
        ("bHasTargetPoint", c_bool, 1),
        ("bSetupWithZoneCollection", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentZoneCollection", POINTER(UFiringZoneCollectionDefinition)),
        ("CurrentZone", POINTER(UFiringZoneDefinition)),
        ("CurrentBehavior", POINTER(UFiringBehaviorDefinition)),
        ("CurrentConditionalPattern", c_int),
        ("DefaultFiringBehaviorDefinition", POINTER(UFiringBehaviorDefinition)),
        ("DefaultFiringPatternTemplate", POINTER(UFiringPattern)),
    ]


class UFiringBehaviorManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFiringBehaviorManager", UFiringBehaviorManager_Data),
    ]


class UFiringCondition_Data(Structure):
    _fields_ = []


class UFiringCondition(Structure):
    _fields_ = [("UObject", UObject_Data), ("UFiringCondition", UFiringCondition_Data)]


class UFireCond_IsPlayerTarget_Data(Structure):
    _fields_ = []


class UFireCond_IsPlayerTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFiringCondition", UFiringCondition_Data),
        ("UFireCond_IsPlayerTarget", UFireCond_IsPlayerTarget_Data),
    ]


class UFiringPattern_Data(Structure):
    _fields_ = [
        ("bIsHarmlessToPawns", c_bool, 1),
        ("bAllowFakeShots", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UFiringPattern(Structure):
    _fields_ = [("UObject", UObject_Data), ("UFiringPattern", UFiringPattern_Data)]


class UFirePatt_Cone_Data(Structure):
    _fields_ = [("ConeDegrees", c_float), ("ShotSpreadType", c_ubyte)]


class UFirePatt_Cone(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_Cone", UFirePatt_Cone_Data),
    ]


class UFirePatt_ShrinkingCone_Data(Structure):
    _fields_ = [
        ("CurrentAccuracyConeDeg", c_float),
        ("LastDesiredAim", FRotator),
        ("MaxAccuracyConeDeg", c_float),
        ("ConeMultiplierPerShot", c_float),
        ("ShotSpreadType", c_ubyte),
    ]


class UFirePatt_ShrinkingCone(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_ShrinkingCone", UFirePatt_ShrinkingCone_Data),
    ]


class UFirePatt_StrafeOver_Data(Structure):
    _fields_ = [
        ("CurrentAimRotation", FRotator),
        ("PitchDeltaPerShot", c_float),
        ("MaxYawDeltaPerShot", c_float),
        ("RefireRate", c_float),
        ("LineOfShotsSpeed", c_float),
        ("LineOfShotsEndZ", c_float),
        ("YawDeltaRatio", c_float),
        ("TargetPosition", c_float),
    ]


class UFirePatt_StrafeOver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_StrafeOver", UFirePatt_StrafeOver_Data),
    ]


class UFiringZoneCollectionDefinition_Data(Structure):
    _fields_ = [("Zones", TArray_UFiringZoneDefinitionPtr)]


class UFiringZoneCollectionDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringZoneCollectionDefinition", UFiringZoneCollectionDefinition_Data),
    ]


class UFiringZoneDefinition_Data(Structure):
    _fields_ = [
        ("ZoneName", FString),
        ("OuterRimInfinitelyFarAway", c_bool, 1),
        ("", c_ulong, 0),
        ("OuterRimDistance", c_float),
        ("ZoneColor", FColor),
        ("FiringBehavior", POINTER(UFiringBehaviorDefinition)),
    ]


class UFiringZoneDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringZoneDefinition", UFiringZoneDefinition_Data),
    ]


class UFlagDefinition_Data(Structure):
    _fields_ = [
        ("EvaluationExpression", POINTER(UExpressionEvaluator)),
        ("ContextResolverChain", TArray_UAttributeContextResolverPtr),
        ("ValueResolver", POINTER(UFlagValueResolver)),
    ]


class UFlagDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFlagDefinition", UFlagDefinition_Data),
    ]


class UFlagExpressionEvaluator_Data(Structure):
    _fields_ = [
        ("FlagChain", TArray_FFlagEvalConditional),
        ("FlagChainOperator", c_ubyte),
    ]


class UFlagExpressionEvaluator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UFlagExpressionEvaluator", UFlagExpressionEvaluator_Data),
    ]


class UFlagValueResolver_Data(Structure):
    _fields_ = []


class UFlagValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
    ]


class UMultipleFlagValueResolver_Data(Structure):
    _fields_ = [
        ("FlagToLookUp", POINTER(UFlagDefinition)),
        ("AggregationType", c_ubyte),
    ]


class UMultipleFlagValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UMultipleFlagValueResolver", UMultipleFlagValueResolver_Data),
    ]


class UObjectFunctionFlagValueResolver_Data(Structure):
    _fields_ = [("CheckRate", c_float), ("FunctionCall", FString)]


class UObjectFunctionFlagValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UObjectFunctionFlagValueResolver", UObjectFunctionFlagValueResolver_Data),
    ]


class UObjectPropertyFlagValueResolver_Data(Structure):
    _fields_ = [("PropertyName", FName)]


class UObjectPropertyFlagValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UObjectPropertyFlagValueResolver", UObjectPropertyFlagValueResolver_Data),
    ]


class URuleEngineFlagValueResolver_Data(Structure):
    _fields_ = []


class URuleEngineFlagValueResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("URuleEngineFlagValueResolver", URuleEngineFlagValueResolver_Data),
    ]


class UGbxMessage_Data(Structure):
    _fields_ = [
        ("Definition", POINTER(UGbxMessageDefinition)),
        ("NameKey", FName),
        ("Sender", POINTER(UObject)),
        ("Subject", POINTER(UObject)),
        ("AdditionalData", POINTER(UObject)),
        ("SimpleMetaData", FGbxMessageSimpleMetaData),
        ("SimpleMetaData2", FGbxMessageSimpleMetaData),
        ("SimpleMetaData3", FGbxMessageSimpleMetaData),
        ("SimpleMetaData4", FGbxMessageSimpleMetaData),
        ("SenderAllegiance", POINTER(UPawnAllegiance)),
        ("SubjectAllegiance", POINTER(UPawnAllegiance)),
        ("IntendedForAllies", c_bool, 1),
        ("IntendedForEnemies", c_bool, 1),
        ("HasLocation", c_bool, 1),
        ("HasRadius", c_bool, 1),
        ("SendRepeatedly", c_bool, 1),
        ("", c_ulong, 0),
        ("MessageLocation", FVector),
        ("BroadcastRadius", c_float),
        ("DeliverTime", c_float),
        ("TimePosted", c_float),
        ("TimeSent", c_float),
        ("DoNotSendRightNow", FFlag),
        ("StopSendingAfterXReceptions", c_int),
        ("MaxDurationToSend", c_float),
        ("TimeBetweenSends", c_float),
        ("DupeCriteria", TArray_unsigned_char),
    ]


class UGbxMessage(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGbxMessage", UGbxMessage_Data)]


class UGbxMessageDefinition_Data(Structure):
    _fields_ = [
        ("NameKey", FName),
        ("HasLocation", c_bool, 1),
        ("HasRadius", c_bool, 1),
        ("TakeLocationFromSender", c_bool, 1),
        ("IntendedForAllies", c_bool, 1),
        ("IntendedForEnemies", c_bool, 1),
        ("AllowRepeatSends", c_bool, 1),
        ("LimitedReception", c_bool, 1),
        ("", c_ulong, 0),
        ("Radius", FAttributeInitializationData),
        ("SecondsBetweenSends", c_float),
        ("MaxTimeToKeepSending", c_float),
        ("DupeCriteria", TArray_unsigned_char),
        ("MaxRecipients", c_int),
    ]


class UGbxMessageDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGbxMessageDefinition", UGbxMessageDefinition_Data),
    ]


class UGbxMessageManager_Data(Structure):
    _fields_ = [
        ("Listeners", TArray_FScriptInterface),
        ("MessagesToSend", TArray_UGbxMessagePtr),
        ("SentMessagesRecently", FFlag),
        ("DistributionInterval", c_float),
        ("MaxMessagesPerDistribution", c_int),
    ]


class UGbxMessageManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGbxMessageManager", UGbxMessageManager_Data),
    ]


class AGearboxMind_Data(Structure):
    _fields_ = [
        ("VfTable_IIRuleEngineOwner", FPointer),
        ("VfTable_IINounAttributeProvider", FPointer),
        ("VfTable_IIFlagProvider", FPointer),
        ("VfTable_IIAIInterface", FPointer),
        ("bDisabledDueToPopulationIrrelevance", c_bool, 1),
        ("bWantsToWalk", c_bool, 1),
        ("", c_ulong, 0),
        ("MyRuleEngine", POINTER(UGearboxRuleEngine)),
        ("RuleEngineTemplate", POINTER(UGearboxRuleEngine)),
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("FacingPolicy", c_ubyte),
        ("AtLeastOneKnownThreat", c_ubyte),
        ("NewEnemyAwarenessReason", c_ubyte),
        ("DebugMoveFinishedReason", c_ubyte),
        ("FacingActor", POINTER(AActor)),
        ("FacingVector", FVector),
        ("DotProductToFacingPolicy", c_float),
        ("DotProductToCurrentEnemy", c_float),
        ("MostRecentNewEnemyName", FName),
        ("MostRecentNewEnemyArchName", FName),
        ("DefaultAwarenessZoneCollection", POINTER(UAwarenessZoneCollectionDefinition)),
        ("CurrentAwarenessZoneCollection", POINTER(UAwarenessZoneCollectionDefinition)),
        ("CurrentAwarenessZone", POINTER(UAwarenessZoneDefinition)),
        ("DefaultCoverSearchCriteria", POINTER(UCoverSearchCriteria)),
        ("FailedMoveSpots", TArray_FVector),
        ("NounState", TArray_FNounAttributeState),
        ("HomeLocation", FVector),
        ("PopulationOpportunityIndex", c_int),
        ("MindTargetInfoClass", POINTER(UClass)),
        ("MyTracker", POINTER(UAITracker)),
        ("DynamicFlagDefinitions", TArray_UFlagDefinitionPtr),
        ("DynamicFlags", TArray_FDynamicFlagInstanceData),
        ("Unknown1", c_ubyte, 0x3C),
        ("AIComponent", POINTER(UAIComponent)),
    ]


class AGearboxMind(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("AAIController", AAIController_Data),
        ("AGearboxAIController", AGearboxAIController_Data),
        ("AGearboxMind", AGearboxMind_Data),
    ]


class UGearboxAIMoveNodeRenderComponent_Data(Structure):
    _fields_ = []


class UGearboxAIMoveNodeRenderComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UGearboxAIMoveNodeRenderComponent", UGearboxAIMoveNodeRenderComponent_Data),
    ]


class UGearboxCoverStateManager_Data(Structure):
    _fields_ = [
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("DesiredCoverState", FGearboxCoverState),
        ("CurrentCoverState", FGearboxCoverState),
        ("DesiredCoverTransition", FGearboxCoverTransition),
        ("CurrentCoverTransition", FGearboxCoverTransition),
        ("DesiredCoverInfo", FCoverSpotInfo),
        ("CurrentCoverInfo", FCoverSpotInfo),
        ("LastCoverInfo", FCoverSpotInfo),
        ("PawnCrouchedPriorToMount", c_bool, 1),
        ("CoverDebugSearchWasFinalized", c_bool, 1),
        ("", c_ulong, 0),
        ("CoverDebugInnerRadius", c_float),
        ("CoverDebugOuterRadius", c_float),
        ("CoverDebugSearchAngle", c_float),
        ("CoverDebugSearchDirection", FVector),
        ("CoverDebugSearchOrigin", FSmartVector),
        ("CoverDebugList", TArray_FCoverDebugPriority),
        ("HorizontalCoverAngleDegrees", c_float),
        ("VerticalCoverAngleDegrees", c_float),
    ]


class UGearboxCoverStateManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxCoverStateManager", UGearboxCoverStateManager_Data),
    ]


class UGearboxMindAttributeContextResolver_Data(Structure):
    _fields_ = []


class UGearboxMindAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UGearboxMindAttributeContextResolver",
            UGearboxMindAttributeContextResolver_Data,
        ),
    ]


class UGearboxNavigationHandle_Data(Structure):
    _fields_ = [
        ("DesiredMovementSpeed", c_ubyte),
        ("ActiveSpecialNavMeshMove", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("bFollowingPath", c_bool, 1),
        ("bReachedDestination", c_bool, 1),
        ("bSpecialMovementFinished", c_bool, 1),
        ("bClearPathAfterSpecialMove", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentGoal", FBasedPosition),
        ("CurrentPath", FPathFindData),
        ("Anchor", FGBXNavMeshPolyRef),
        ("LastValidAnchor", FGBXNavMeshPolyRef),
        ("LastAnchorPosition", FBasedPosition),
        ("LastAnchorDelta", FVector),
        ("NextPathObjectDistance", c_float),
        ("CurrentGoalStartLoc", FVector),
        ("DesiredLookDirection", FRotator),
        ("LookDirection", FRotator),
        ("PathFinder", POINTER(UGBXNavMeshPathFinder)),
        ("NearPathCheckDist", c_float),
        ("NearPathCheckDistMin", c_float),
        ("NearPathCheckDistMax", c_float),
        ("NearPathCheckDistRate", c_float),
    ]


class UGearboxNavigationHandle(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UNavigationHandle", UNavigationHandle_Data),
        ("UGearboxNavigationHandle", UGearboxNavigationHandle_Data),
    ]


class UIFlagProvider_Data(Structure):
    _fields_ = []


class UIFlagProvider(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIFlagProvider", UIFlagProvider_Data),
    ]


class UIFlagProviderGroup_Data(Structure):
    _fields_ = []


class UIFlagProviderGroup(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIFlagProviderGroup", UIFlagProviderGroup_Data),
    ]


class UIGbxMessageListener_Data(Structure):
    _fields_ = []


class UIGbxMessageListener(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIGbxMessageListener", UIGbxMessageListener_Data),
    ]


class UIRuleEngineOwner_Data(Structure):
    _fields_ = []


class UIRuleEngineOwner(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIRuleEngineOwner", UIRuleEngineOwner_Data),
    ]


class UKnowledgeRecord_Data(Structure):
    _fields_ = [
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("TheName", FName),
        ("KCategory", c_ubyte),
        ("EvalType", c_ubyte),
        ("Active", c_ubyte),
        ("Marked", c_ubyte),
        ("Frequency", c_float),
        ("NextUpdateTime", c_float),
        ("FlagIndex", c_int),
    ]


class UKnowledgeRecord(Structure):
    _fields_ = [("UObject", UObject_Data), ("UKnowledgeRecord", UKnowledgeRecord_Data)]


class ULocationFilter_Data(Structure):
    _fields_ = []


class ULocationFilter(Structure):
    _fields_ = [("UObject", UObject_Data), ("ULocationFilter", ULocationFilter_Data)]


class ULocationFilter_MustHaveLOS_Data(Structure):
    _fields_ = []


class ULocationFilter_MustHaveLOS(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("ULocationFilter", ULocationFilter_Data),
        ("ULocationFilter_MustHaveLOS", ULocationFilter_MustHaveLOS_Data),
    ]


class ULocationFilter_MustNotHaveLOS_Data(Structure):
    _fields_ = []


class ULocationFilter_MustNotHaveLOS(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("ULocationFilter", ULocationFilter_Data),
        ("ULocationFilter_MustNotHaveLOS", ULocationFilter_MustNotHaveLOS_Data),
    ]


class UMindTargetInfo_Data(Structure):
    _fields_ = [
        ("Target", POINTER(AActor)),
        ("Distance", c_float),
        ("bShouldRemove", c_bool, 1),
        ("bCanSeeOrHearTarget", c_bool, 1),
        ("", c_ulong, 0),
        ("bCanFireAt", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Priority", c_float),
        ("OnePriority", c_float),
        ("TargetExposureToMe", c_float),
        ("MyExposureToTarget", c_float),
        ("HitTargetHistory", TArray_FHitTargetRecord),
        ("PriorityDebugRecords", TArray_FPriorityDebugStruct),
        ("IAmConsciousOfTarget", FFlag),
        ("IAmConsciousTime", c_float),
        ("TargetHasShotAtMeRecently", FFlag),
        ("TargetOccludedBySmoke", FFlag),
        ("IHaveSeenOrKnownThisTargetBefore", FFlag),
        ("LastVisibleOrAudibleLocation", FSmartVector),
        ("BonusPriority", c_float),
    ]


class UMindTargetInfo(Structure):
    _fields_ = [("UObject", UObject_Data), ("UMindTargetInfo", UMindTargetInfo_Data)]


class URule_Data(Structure):
    _fields_ = [
        ("MyRuleEngine", POINTER(URuleEngine)),
        ("Priority", c_int),
        ("BasePriority", c_int),
        ("StartingSequenceTemplate", POINTER(UActionSequence)),
        ("RuleEnabled", c_bool, 1),
        ("StopWhenStateCodeRunsOut", c_bool, 1),
        ("AlwaysExecute", c_bool, 1),
        ("bInitialized", c_bool, 1),
        ("bIsRunning", c_bool, 1),
        ("bCanRunMultipleInstances", c_bool, 1),
        ("bIsTransferable", c_bool, 1),
        ("bRestartable", c_bool, 1),
        ("bBlockRuleSetChange", c_bool, 1),
        ("WasTransferred", c_bool, 1),
        ("", c_ulong, 0),
        ("ExecutionPattern", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TimeToWaitBeforeFirstExecution", FAttributeInitializationData),
        ("TimeToWaitBeforeNextExecution", FAttributeInitializationData),
        ("MaxTimeToExecute", FAttributeInitializationData),
        ("MaxNumberOfExecutions", c_int),
        ("CanExecuteConditionals", TArray_FFlagEvalORConnector),
        ("ShouldStopConditionals", TArray_FFlagEvalORConnector),
        ("CanExecuteExpression", POINTER(UExpressionEvaluator)),
        ("ShouldStopExpression", POINTER(UExpressionEvaluator)),
        ("MyActionSequence", POINTER(UActionSequence)),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("MyRuleEventDef", POINTER(URuleEventDef)),
        ("AssociatedKnowledgeRecords", TArray_UClassPtr),
        ("FlagDebugString", FString),
        ("RuleName", FName),
        ("OtherEventParticipantObject", POINTER(UObject)),
        ("IsTimingRestrictedNow", FFlag),
        ("NumExecutions", c_int),
        ("RuleEventDefPath", FString),
        ("StartExecutionTimeStamp", c_float),
    ]


class URule(Structure):
    _fields_ = [("UObject", UObject_Data), ("URule", URule_Data)]


class URuleContainer_Data(Structure):
    _fields_ = [
        ("RuleSetTemplate", POINTER(URuleSet)),
        ("CurRuleSet", POINTER(URuleSet)),
        ("AllowAllEventsThrough", c_bool, 1),
        ("", c_ulong, 0),
    ]


class URuleContainer(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("URule", URule_Data),
        ("URuleContainer", URuleContainer_Data),
    ]


class URulePlaceholder_Data(Structure):
    _fields_ = []


class URulePlaceholder(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("URule", URule_Data),
        ("URulePlaceholder", URulePlaceholder_Data),
    ]


class URuleEngine_Data(Structure):
    _fields_ = [
        ("VfTable_IIFlagProvider", FPointer),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("ActorProxy", POINTER(AActor)),
        ("ThinkRate", c_float),
        ("ElapsedTime", c_float),
        ("TickRate", c_float),
        ("RuleSetTemplate", POINTER(URuleSet)),
        ("CurRuleSet", POINTER(URuleSet)),
        ("PendingRuleSetTemplate", POINTER(URuleSet)),
        ("FlagInitialization", TArray_FFlagDefinitionInitialization),
        ("DynamicFlagDefinitions", TArray_UFlagDefinitionPtr),
        ("DynamicFlags", TArray_FDynamicFlagInstanceData),
        ("Unknown1", c_ubyte, 0x3C),
        ("KnowledgeDB", TArray_UKnowledgeRecordPtr),
        ("RunningRules", TArray_URulePtr),
        ("ResourcesInUse", TArray_UClassPtr),
        ("bRulesEnabled", c_bool, 1),
        ("bHasDebugFocus", c_bool, 1),
        ("bVerboseLoggingEnabled", c_bool, 1),
        ("bInitialized", c_bool, 1),
        ("DoLoadBalancing", c_bool, 1),
        ("bForceFullUpdate", c_bool, 1),
        ("OnlyIterateRulesForEvents", c_bool, 1),
        ("bEventsCausedKnowledgeRecordUpdate", c_bool, 1),
        ("EnableSnapshots", c_bool, 1),
        ("", c_ulong, 0),
        ("MyTracker", POINTER(UAITracker)),
        ("RuleSetStack", TArray_URuleSetPtr),
        ("QueuedRuleEvents", TArray_FEventRecord),
        ("LastFullUpdateTime", c_float),
        ("MaxRuleSetPasses", c_int),
        ("KRCache", TArray_UClassPtr),
        ("LastTargetIteratorTime", c_float),
        ("LastTargetIteratorRuleEvalDiffTime", c_float),
        ("AverageTargetIteratorRuleEvalDiffTime", c_float),
        ("WorstTargetIteratorRuleEvalDiffTime", c_float),
        ("ActivateTime", c_float),
        ("RuleSetReferences", TArray_FRuleSetReference),
    ]


class URuleEngine(Structure):
    _fields_ = [("UObject", UObject_Data), ("URuleEngine", URuleEngine_Data)]


class UGearboxRuleEngine_Data(Structure):
    _fields_ = [
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("MyGearboxMind", POINTER(AGearboxMind)),
    ]


class UGearboxRuleEngine(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("URuleEngine", URuleEngine_Data),
        ("UGearboxRuleEngine", UGearboxRuleEngine_Data),
    ]


class URuleEventDef_Data(Structure):
    _fields_ = [
        ("EventDefName", FName),
        ("FlagActionOnEventTrigger", FFlagDefinitionInitialization),
    ]


class URuleEventDef(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URuleEventDef", URuleEventDef_Data),
    ]


class URuleSet_Data(Structure):
    _fields_ = [
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("RuleTemplateRefs", TArray_URulePtr),
        ("Rules", TArray_URulePtr),
        ("ToDiscard", TArray_URulePlaceholderPtr),
        ("bInitialized", c_bool, 1),
        ("bNewRuleEvaluationEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("RuleSetName", FName),
        ("FlagsOnEntry", TArray_FFlagDefinitionInitialization),
        ("FlagsOnExit", TArray_FFlagDefinitionInitialization),
        ("HACK_RuleSetsAllowedToFollow", TArray_URuleSetPtr),
    ]


class URuleSet(Structure):
    _fields_ = [("UObject", UObject_Data), ("URuleSet", URuleSet_Data)]


class UStateRuleSet_Data(Structure):
    _fields_ = [
        ("StateRules", TArray_URulePtr),
        ("bShowPawnInRadarWhenActive", c_bool, 1),
        ("", c_ulong, 0),
        ("StateAttributeMap", TArray_FStateAttributeData),
    ]


class UStateRuleSet(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("URuleSet", URuleSet_Data),
        ("UStateRuleSet", UStateRuleSet_Data),
    ]


class USearchDirection_Data(Structure):
    _fields_ = []


class USearchDirection(Structure):
    _fields_ = [("UObject", UObject_Data), ("USearchDirection", USearchDirection_Data)]


class USearchDirection_Any_Data(Structure):
    _fields_ = []


class USearchDirection_Any(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_Any", USearchDirection_Any_Data),
    ]


class USearchDirection_AwayFromMe_Data(Structure):
    _fields_ = []


class USearchDirection_AwayFromMe(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_AwayFromMe", USearchDirection_AwayFromMe_Data),
    ]


class USearchDirection_AwayFromTarget_Data(Structure):
    _fields_ = []


class USearchDirection_AwayFromTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_AwayFromTarget", USearchDirection_AwayFromTarget_Data),
    ]


class USearchDirection_MyFacingDirection_Data(Structure):
    _fields_ = []


class USearchDirection_MyFacingDirection(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_MyFacingDirection", USearchDirection_MyFacingDirection_Data),
    ]


class USearchDirection_OppositeMyFacingDirection_Data(Structure):
    _fields_ = []


class USearchDirection_OppositeMyFacingDirection(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_OppositeMyFacingDirection",
            USearchDirection_OppositeMyFacingDirection_Data,
        ),
    ]


class USearchDirection_OppositeTargetsFacingDirection_Data(Structure):
    _fields_ = []


class USearchDirection_OppositeTargetsFacingDirection(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_OppositeTargetsFacingDirection",
            USearchDirection_OppositeTargetsFacingDirection_Data,
        ),
    ]


class USearchDirection_RandomLeftOrRight_Data(Structure):
    _fields_ = []


class USearchDirection_RandomLeftOrRight(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_RandomLeftOrRight", USearchDirection_RandomLeftOrRight_Data),
    ]


class USearchDirection_TargetsFacingDirection_Data(Structure):
    _fields_ = []


class USearchDirection_TargetsFacingDirection(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_TargetsFacingDirection",
            USearchDirection_TargetsFacingDirection_Data,
        ),
    ]


class USearchDirection_ToMyLeft_Data(Structure):
    _fields_ = []


class USearchDirection_ToMyLeft(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_ToMyLeft", USearchDirection_ToMyLeft_Data),
    ]


class USearchDirection_ToMyRight_Data(Structure):
    _fields_ = []


class USearchDirection_ToMyRight(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_ToMyRight", USearchDirection_ToMyRight_Data),
    ]


class USearchDirection_TowardMe_Data(Structure):
    _fields_ = []


class USearchDirection_TowardMe(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_TowardMe", USearchDirection_TowardMe_Data),
    ]


class USearchDirection_TowardTarget_Data(Structure):
    _fields_ = []


class USearchDirection_TowardTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_TowardTarget", USearchDirection_TowardTarget_Data),
    ]


class USearchOrigin_Data(Structure):
    _fields_ = []


class USearchOrigin(Structure):
    _fields_ = [("UObject", UObject_Data), ("USearchOrigin", USearchOrigin_Data)]


class USearchOrigin_CurrentLocation_Data(Structure):
    _fields_ = []


class USearchOrigin_CurrentLocation(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_CurrentLocation", USearchOrigin_CurrentLocation_Data),
    ]


class USearchOrigin_ScriptedMoveTarget_Data(Structure):
    _fields_ = []


class USearchOrigin_ScriptedMoveTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_ScriptedMoveTarget", USearchOrigin_ScriptedMoveTarget_Data),
    ]


class USearchOrigin_TargetLocation_Data(Structure):
    _fields_ = []


class USearchOrigin_TargetLocation(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_TargetLocation", USearchOrigin_TargetLocation_Data),
    ]


class USnapshotRecord_Data(Structure):
    _fields_ = [
        ("MyName", FName),
        ("RuleSet", FName),
        ("CurrentRules", TArray_FRuleInfo),
        ("ContainedRules", FRuleInfo * 45),
        ("SelectedRuleIdx", c_int),
        ("SelectedSubRuleIdx", c_int),
        ("ResourcesInUse", TArray_FName),
        ("Flags", TArray_FName),
        ("Location", FVector),
        ("Velocity", FVector),
        ("Rotation", FRotator),
        ("RuleAffected", FName),
        ("Rule2Affected", FName),
        ("SequenceAffected", FName),
        ("Sequence2Affected", FName),
        ("Event", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("RuleStartName", FName),
        ("RuleEndName", FName),
        ("RuleInterruptName", FName),
        ("ChildSequenceStartName", FName),
        ("SwitchRuleSetName", FName),
        ("PreventNewRulesName", FName),
        ("RunningRulesColor", FColor),
        ("StalledRulesColor", FColor),
        ("NotRunningRulesColor", FColor),
        ("DisabledRulesColor", FColor),
        ("FlagsColor", FColor),
        ("ResourcesColor", FColor),
    ]


class USnapshotRecord(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USnapshotInterface", USnapshotInterface_Data),
        ("USnapshotRecord", USnapshotRecord_Data),
    ]


class UGearboxPawnSnapshotRecord_Data(Structure):
    _fields_ = [
        ("PawnIconZOffset", c_float),
        ("PawnExposureZOffset", c_float),
        ("CollectionNameOffset", c_float),
        ("LastVisibleConnectionColor", FColor),
        ("RouteColor", FColor),
        ("OriginalRouteColor", FColor),
        ("DestLineColor", FColor),
        ("BestCoverColor", FColor),
        ("PotentialCoverColor", FColor),
        ("StandardCoverColor", FColor),
        ("AIDebugTexture", POINTER(UTexture2D)),
        ("MyPawnName", FName),
        ("MyArchetypeName", FName),
        ("CurrentHealth", c_float),
        ("MaxHealth", c_float),
        ("DistanceToBestTarget", c_float),
        ("AwarenessZones", TArray_FAwarenessInfo),
        ("AwarenessCollectionName", FName),
        ("BestTarget", POINTER(AActor)),
        ("TargetLocs", TArray_FLocationInfo),
        ("LastVisibleTargetLocs", TArray_FLastVisibleInfo),
        ("AnimTree", FName),
        ("Bones", TArray_FBoneAtom),
        ("ForgottenTargets", TArray_FLocationInfo),
        ("NewEnemyName", FName),
        ("NewEnemyArchName", FName),
        ("NewEnemyAwarenessReason", c_ubyte),
        ("CurrentMoveSpeed", c_ubyte),
        ("MaxDesiredMoveSpeed", c_ubyte),
        ("ReasonForMovementFinish", c_ubyte),
        ("Exposure", TArray_FDebugExposure),
        ("DummyMesh", POINTER(USkeletalMesh)),
        ("DummyMesh_LOD", c_int),
        ("TargetViewCones", TArray_FViewConeInfo),
        ("PawnLocalDestination", FVector),
        ("FailedMoveSpots", TArray_FVector),
        ("RouteCache", TArray_FVector),
        ("OriginalRouteCache", TArray_FVector),
        ("DesiredCoverLocation", FSmartVector),
        ("CurrentCoverLocation", FSmartVector),
        ("ScriptedMoveTargetLocation", FSmartVector),
        ("CoverSearchInnerRadius", c_float),
        ("CoverSearchOuterRadius", c_float),
        ("CoverSearchAngle", c_float),
        ("CoverSearchOrigin", FSmartVector),
        ("CoverSearchDirection", FVector),
        ("CoverSlotDebugList", TArray_FCoverDebugInfo),
        ("CoverSearchWasFinalized", c_bool, 1),
        ("", c_ulong, 0),
        ("ICON_BLUELOCATION", FIconData),
        ("ICON_YELLOWLOCATION", FIconData),
        ("ICON_QUESTIONMARK", FIconData),
        ("ICON_EXCLAMATIONPOINT", FIconData),
        ("ICON_REDARROW", FIconData),
        ("ICON_GREENARROW", FIconData),
        ("ICON_FAILED_MOVE_DEST", FIconData),
        ("ICON_GREENCIRCLE", FIconData),
        ("ICON_PATHPOINT", FIconData),
        ("ICON_CURRENTCOVER", FIconData),
        ("ICON_DESIREDCOVER", FIconData),
        ("ICON_SCRIPTEDMOVETARGET", FIconData),
        ("TargetData", TArray_FTargetDebugDatum),
        ("Holds", TArray_FAIHoldDebugData),
        ("TargetHolds", TArray_FAIHoldDebugData),
        ("MovementHolds", TArray_FAIHoldDebugData),
        ("DemigodHolds", TArray_FAIHoldDebugData),
        ("GodHolds", TArray_FAIHoldDebugData),
    ]


class UGearboxPawnSnapshotRecord(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USnapshotInterface", USnapshotInterface_Data),
        ("USnapshotRecord", USnapshotRecord_Data),
        ("UGearboxPawnSnapshotRecord", UGearboxPawnSnapshotRecord_Data),
    ]


class UTargetingDefinition_Data(Structure):
    _fields_ = [
        ("Knowledge", TArray_UTI_CalcPtr),
        ("Prioritization", TArray_UTI_PrioritizePtr),
        ("CanTargetIf", POINTER(UExpressionEvaluator)),
        ("StopTargetingIf", POINTER(UExpressionEvaluator)),
        ("bCanTargetFriendlies", c_bool, 1),
        ("bOverrideSearchRadius", c_bool, 1),
        ("", c_ulong, 0),
        ("CanTargetFriendliesIf", POINTER(UExpressionEvaluator)),
        ("SearchRadius", c_float),
    ]


class UTargetingDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UTargetingDefinition", UTargetingDefinition_Data),
    ]


class UTargetIterator_Data(Structure):
    _fields_ = [
        ("IteratorType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BarGraphShortName", FString),
    ]


class UTargetIterator(Structure):
    _fields_ = [("UObject", UObject_Data), ("UTargetIterator", UTargetIterator_Data)]


class UTargetIteratorCalculateDistance_Data(Structure):
    _fields_ = []


class UTargetIteratorCalculateDistance(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCalculateDistance", UTargetIteratorCalculateDistance_Data),
    ]


class UTargetIteratorCalculateExposure_Data(Structure):
    _fields_ = []


class UTargetIteratorCalculateExposure(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCalculateExposure", UTargetIteratorCalculateExposure_Data),
    ]


class UTargetIteratorCheckAwareness_Data(Structure):
    _fields_ = []


class UTargetIteratorCheckAwareness(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCheckAwareness", UTargetIteratorCheckAwareness_Data),
    ]


class UTargetIteratorCheckRemoveTarget_Data(Structure):
    _fields_ = []


class UTargetIteratorCheckRemoveTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCheckRemoveTarget", UTargetIteratorCheckRemoveTarget_Data),
    ]


class UTargetIteratorForgetAboutTarget_Data(Structure):
    _fields_ = []


class UTargetIteratorForgetAboutTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorForgetAboutTarget", UTargetIteratorForgetAboutTarget_Data),
    ]


class UTargetIteratorPrioritizeTargetsIAmExposedTo_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizeTargetsIAmExposedTo(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        (
            "UTargetIteratorPrioritizeTargetsIAmExposedTo",
            UTargetIteratorPrioritizeTargetsIAmExposedTo_Data,
        ),
    ]


class UTI_Calc_Data(Structure):
    _fields_ = []


class UTI_Calc(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Calc", UTI_Calc_Data),
    ]


class UTI_Prioritize_Data(Structure):
    _fields_ = [("Weight", c_float)]


class UTI_Prioritize(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
    ]


class UTargetIteratorPrioritizeExposedTargets_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizeExposedTargets(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeExposedTargets",
            UTargetIteratorPrioritizeExposedTargets_Data,
        ),
    ]


class UTargetIteratorPrioritizeHumanTargets_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizeHumanTargets(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeHumanTargets",
            UTargetIteratorPrioritizeHumanTargets_Data,
        ),
    ]


class UTargetIteratorPrioritizeNearbyTarget_Data(Structure):
    _fields_ = [("MaxDistance", c_float)]


class UTargetIteratorPrioritizeNearbyTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeNearbyTarget",
            UTargetIteratorPrioritizeNearbyTarget_Data,
        ),
    ]


class UTargetIteratorPrioritizePreviousTarget_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizePreviousTarget(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizePreviousTarget",
            UTargetIteratorPrioritizePreviousTarget_Data,
        ),
    ]


class UTargetIteratorPrioritizeTargetNotBeingShotAt_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizeTargetNotBeingShotAt(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeTargetNotBeingShotAt",
            UTargetIteratorPrioritizeTargetNotBeingShotAt_Data,
        ),
    ]


class UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data(Structure):
    _fields_ = []


class UTargetIteratorPrioritizeTargetWhoShootsAtMe(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeTargetWhoShootsAtMe",
            UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data,
        ),
    ]


class UTI_PrioritizeBonus_Data(Structure):
    _fields_ = []


class UTI_PrioritizeBonus(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        ("UTI_PrioritizeBonus", UTI_PrioritizeBonus_Data),
    ]


class UTI_PrioritizeConditional_Data(Structure):
    _fields_ = [("Condition", POINTER(UExpressionEvaluator))]


class UTI_PrioritizeConditional(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        ("UTI_PrioritizeConditional", UTI_PrioritizeConditional_Data),
    ]


class UGearboxSeqAct_PopulationOpportunityLink_Data(Structure):
    _fields_ = [("CloneOpportunities", TArray_APopulationOpportunityPtr)]


class UGearboxSeqAct_PopulationOpportunityLink(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        (
            "UGearboxSeqAct_PopulationOpportunityLink",
            UGearboxSeqAct_PopulationOpportunityLink_Data,
        ),
    ]


class UIPopulationSpawnPoint_Data(Structure):
    _fields_ = []


class UIPopulationSpawnPoint(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIPopulationSpawnPoint", UIPopulationSpawnPoint_Data),
    ]


class UPopulationDefinition_Data(Structure):
    _fields_ = [
        ("VfTable_IIConstructObject", FPointer),
        ("ActorArchetypeList", TArray_FPopulationActor),
        ("RespawnStyle", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bTotalResetOnLevelLoad", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UPopulationDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UPopulationDefinition", UPopulationDefinition_Data),
    ]


class UPopulationFactory_Data(Structure):
    _fields_ = [
        ("VfTable_IIConstructObject", FPointer),
        ("OnActorSpawn", TArray_UBehaviorBasePtr),
        ("DestructionParams", FDestructionParameters),
        ("bIsCriticalActor", c_bool, 1),
        ("bUseSavedLocationWhenRestored", c_bool, 1),
        ("UseCostOverride", c_bool, 1),
        ("", c_ulong, 0),
        ("SpawnCostOverride", c_int),
    ]


class UPopulationFactory(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
    ]


class UPopulationFactoryGeneric_Data(Structure):
    _fields_ = [("ActorArchetype", POINTER(AActor))]


class UPopulationFactoryGeneric(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
        ("UPopulationFactoryGeneric", UPopulationFactoryGeneric_Data),
    ]


class UPopulationFactoryPopulationDefinition_Data(Structure):
    _fields_ = [("PopulationDef", POINTER(UPopulationDefinition))]


class UPopulationFactoryPopulationDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
        (
            "UPopulationFactoryPopulationDefinition",
            UPopulationFactoryPopulationDefinition_Data,
        ),
    ]


class UPopulationMaster_Data(Structure):
    _fields_ = [
        ("OpportunityList", TArray_FPopulationOpportunityTracker),
        ("ActiveActorCost", c_int),
        ("MaxActorCost", c_int),
        ("MasterThinkRate", c_float),
        ("MasterTestForDestroyRate", c_float),
        ("IfIrrelevantDestroyTimeout", c_float),
        ("PopulationMasterStats", TArray_FPopulationMasterStat),
        ("EncounterList", TArray_FEncounterTracker),
        ("SecondsElapsed", c_float),
        ("NextOpportunityTickTime", c_float),
        ("NextDestroyTestTickTime", c_float),
        ("PopulationRespawnDelayInSeconds", c_float),
        ("bHasActorsReadyToDeleteIfSpaceIsNeeded", c_bool, 1),
        ("bShutdownAIWhenIrrelevant", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UPopulationMaster(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationMaster", UPopulationMaster_Data),
    ]


class APopulationOpportunity_Data(Structure):
    _fields_ = [
        ("VfTable_IIBodyCompositionInstance", FPointer),
        ("CleanupParams", FOpportunityCleanupParameters),
        ("IsEnabled", c_bool, 1),
        ("bNoRespawning", c_bool, 1),
        ("bIsWaitingForRespawn", c_bool, 1),
        ("bUseRandomSpawns", c_bool, 1),
        ("", c_ulong, 0),
        ("SpawnPoints", TArray_APopulationPointPtr),
        ("StreamingLevel", POINTER(ULevelStreaming)),
        ("SystemID", c_int),
        ("NextInitialDestinationIdx", c_int),
        ("SequenceActionLink", POINTER(UGearboxSeqAct_PopulationOpportunityLink)),
        ("LastTimeBlockedFromSpawningDueToPopLimits", c_float),
        ("RespawnDelayStartTime", c_float),
        ("GameStageRegion", POINTER(URegionDefinition)),
        ("Aspect", POINTER(UPopulationAspect)),
        ("SpawnIndex", c_int),
        ("SpawnList", TArray_int),
        ("InclusiveSpawnIndex", c_int),
        ("InclusiveSpawnList", TArray_int),
    ]


class APopulationOpportunity(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
    ]


class APopulationOpportunityArea_Data(Structure):
    _fields_ = [
        ("SpawnOptions", TArray_FPopulationOptionAreaData),
        ("bContinueSpawningAfterPlayerDetected", c_bool, 1),
        ("bOpportunityVolume", c_bool, 1),
        ("bOpportunityRadius", c_bool, 1),
        ("bOpportunityLevel", c_bool, 1),
        ("bPlayerHasBeenDetected", c_bool, 1),
        ("", c_ulong, 0),
        ("DetectionVolumes", TArray_AVolumePtr),
        ("DetectionRadius", c_float),
        ("SelectedSpawnIdx", c_int),
        ("SpawnData", TArray_FPopulationAreaOptionSpawnData),
        ("PlayersDetected", TArray_APlayerControllerPtr),
        ("NumPlayersDetected", c_int),
    ]


class APopulationOpportunityArea(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityArea", APopulationOpportunityArea_Data),
    ]


class APopulationOpportunityCloner_Data(Structure):
    _fields_ = [
        ("Conditions", POINTER(UExpressionEvaluator)),
        ("SpawnFactory", POINTER(UPopulationFactory)),
        ("MaxTotalActors", c_int),
        ("MaxActiveActors", c_int),
        ("RespawnStyle", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bTotalResetOnLevelLoad", c_bool, 1),
        ("bReadyToSpawn", c_bool, 1),
        ("", c_ulong, 0),
        ("RespawnDelay", c_float),
        ("RespawnDelayAfterDeath", c_float),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
    ]


class APopulationOpportunityCloner(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityCloner", APopulationOpportunityCloner_Data),
    ]


class APopulationOpportunityCombat_Data(Structure):
    _fields_ = [
        ("VfTable_IIGbxMessageListener", FPointer),
        ("ParentEncounter", POINTER(APopulationEncounter)),
        ("ParentEncounterWave", c_int),
        ("PopulationDef", POINTER(UPopulationDefinition)),
        ("MaxTotalActorsFormula", FAttributeInitializationData),
        ("MaxTotalActors", c_int),
        ("MaxActiveActorsIsNormal", c_int),
        ("MaxActiveActorsThreatened", c_int),
        ("RespawnDelayFormula", FAttributeInitializationData),
        ("bAdjustForPlayerCount", c_bool, 1),
        ("bOpportunityVolume", c_bool, 1),
        ("bOpportunityRadius", c_bool, 1),
        ("bPlayerHasBeenDetected", c_bool, 1),
        ("bShowDebugEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("DetectionVolumes", TArray_AVolumePtr),
        ("DetectionRadius", c_float),
        ("OpportunityHeight", c_float),
        ("RadiusDebugColor", FColor),
        ("RespawnDelay", c_float),
        ("DetectionDrawSphere", POINTER(UDrawSphereComponent)),
        ("ActivePlayerScale", c_float),
        ("SpawnedMembers", TArray_AGearboxPawnPtr),
        ("SpawnData", FPopulationOptionSpawnData),
        ("PlayersDetected", TArray_APlayerControllerPtr),
        ("NumPlayersDetected", c_int),
    ]


class APopulationOpportunityCombat(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityCombat", APopulationOpportunityCombat_Data),
    ]


class APopulationOpportunityPoint_Data(Structure):
    _fields_ = [
        ("VfTable_IIPopulationSpawnPoint", FPointer),
        ("PopulationDef", POINTER(UPopulationDefinition)),
        ("SpawnAndCullRadius", c_float),
        ("SpawnCustomizations", TArray_UBehaviorBasePtr),
        ("SpawnedForMatinee", c_bool, 1),
        ("bHasSpawned", c_bool, 1),
        ("bActiveSpawn", c_bool, 1),
        ("bDetectedPlayer", c_bool, 1),
        ("", c_ulong, 0),
        ("AISpawnStyle", c_ubyte),
        ("InitialAction", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("InitialActionDestinations", TArray_AActorPtr),
    ]


class APopulationOpportunityPoint(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityPoint", APopulationOpportunityPoint_Data),
    ]


class UPopulationOpportunityAreaRenderingComponent_Data(Structure):
    _fields_ = []


class UPopulationOpportunityAreaRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityAreaRenderingComponent",
            UPopulationOpportunityAreaRenderingComponent_Data,
        ),
    ]


class UPopulationOpportunityAttributeContextResolver_Data(Structure):
    _fields_ = []


class UPopulationOpportunityAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UPopulationOpportunityAttributeContextResolver",
            UPopulationOpportunityAttributeContextResolver_Data,
        ),
    ]


class UPopulationOpportunityPointRenderingComponent_Data(Structure):
    _fields_ = []


class UPopulationOpportunityPointRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityPointRenderingComponent",
            UPopulationOpportunityPointRenderingComponent_Data,
        ),
    ]


class APopulationPoint_Data(Structure):
    _fields_ = [
        ("VfTable_IIPopulationSpawnPoint", FPointer),
        ("Flags", c_int),
        ("AISpawnStyle", c_ubyte),
        ("InitialAction", c_ubyte),
        ("ConstraintType", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("InitialActionDestinations", TArray_AActorPtr),
        ("InitialMovementHoldTime", c_float),
        ("bAttachSpawnedToBase", c_bool, 1),
        ("IsEnabled", c_bool, 1),
        ("bDisableAfterUse", c_bool, 1),
        ("TestVisibility", c_bool, 1),
        ("TestFOV", c_bool, 1),
        ("", c_ulong, 0),
        ("InitialDestinationIndex", c_int),
        ("TagsToUseWithConstraint", TArray_UPopulationSpawnedActorTagDefinitionPtr),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("MinSpawnDistance", c_float),
    ]


class APopulationPoint(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APopulationPoint", APopulationPoint_Data),
    ]


class APopulationPoint_Dynamic_Data(Structure):
    _fields_ = [
        ("DynamicPointName", FName),
        ("bSaveAsInstanceDataOnBase", c_bool, 1),
        ("", c_ulong, 0),
    ]


class APopulationPoint_Dynamic(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APopulationPoint", APopulationPoint_Data),
        ("APopulationPoint_Dynamic", APopulationPoint_Dynamic_Data),
    ]


class UPopulationPointRenderingComponent_Data(Structure):
    _fields_ = []


class UPopulationPointRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UPopulationPointRenderingComponent", UPopulationPointRenderingComponent_Data),
    ]


class USeqEvent_EncounterWaveComplete_Data(Structure):
    _fields_ = [("CurrentWave", c_int)]


class USeqEvent_EncounterWaveComplete(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_EncounterWaveComplete", USeqEvent_EncounterWaveComplete_Data),
    ]


class USeqEvent_PopulatedActor_Data(Structure):
    _fields_ = [
        ("DestPopulationOpportunity", POINTER(APopulationOpportunity)),
        ("SpawnPoint", POINTER(AActor)),
    ]


class USeqEvent_PopulatedActor(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_PopulatedActor", USeqEvent_PopulatedActor_Data),
    ]


class USeqEvent_PopulatedPoint_Data(Structure):
    _fields_ = [
        ("DestPopulationOpportunity", POINTER(APopulationOpportunity)),
        ("SpawnPoint", POINTER(AActor)),
    ]


class USeqEvent_PopulatedPoint(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_PopulatedPoint", USeqEvent_PopulatedPoint_Data),
    ]


class AGearboxHUD_Data(Structure):
    _fields_ = []


class AGearboxHUD(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AHUD", AHUD_Data),
        ("AGearboxHUD", AGearboxHUD_Data),
    ]


class UAIDefinition_Data(Structure):
    _fields_ = [
        ("VfTable_IIBehaviorProvider", FPointer),
        ("BehaviorProviderDefinition", POINTER(UBehaviorProviderDefinition)),
        ("AIBehaviorProviderDefinition", POINTER(UAIBehaviorProviderDefinition)),
        ("bHealOnReset", c_bool, 1),
        ("", c_ulong, 0),
        ("NodeList", TArray_FAITreeData),
        ("TargetSearchRadius", c_float),
        ("TargetingDef", POINTER(UTargetingDefinition)),
    ]


class UAIDefinition(Structure):
    _fields_ = [("UObject", UObject_Data), ("UAIDefinition", UAIDefinition_Data)]


class UBehaviorEventFilterBase_Data(Structure):
    _fields_ = [("ShouldBeInstanced", c_bool, 1), ("", c_ulong, 0)]


class UBehaviorEventFilterBase(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorEventFilterBase", UBehaviorEventFilterBase_Data),
    ]


class UBehaviorKernel_Data(Structure):
    _fields_ = [
        ("Processes", FStableArray_Mirror),
        ("ProcessDeathList", FChunkedList_Mirror),
        ("WaitingThreads", FChunkedList_Mirror),
        ("Providers", TArray_FProviderRecord),
        ("ProvidersIndexFreeList", FChunkedList_Mirror),
        ("ProvidersPendingRemoval", FChunkedList_Mirror),
        ("ObjectVariables", TArray_UObjectPtr),
        ("ObjectVariablesIndexFreeList", FChunkedList_Mirror),
        ("DynamicBehaviors", TArray_FBehaviorSequenceActionData2),
        ("DynamicBehaviorsIndexFreeList", FChunkedList_Mirror),
        ("ProvidersListReserveLength", c_int),
        ("ObjectVariablesListReserveLength", c_int),
        ("DynamicBehaviorsListReserveLength", c_int),
        ("WatchedPID", c_int),
        ("RecentlyRunBehaviors", FChunkedList_Mirror),
        ("CurrentDebugPage", c_int),
        ("DebugPages", TArray_FString),
        ("EventFilterObjects", TArray_UObjectPtr),
    ]


class UBehaviorKernel(Structure):
    _fields_ = [("UObject", UObject_Data), ("UBehaviorKernel", UBehaviorKernel_Data)]


class UBehaviorProviderDefinition_Data(Structure):
    _fields_ = [
        ("CurrentVersion", c_int),
        ("BehaviorSequences", TArray_FBehaviorSequenceData),
    ]


class UBehaviorProviderDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UBehaviorProviderDefinition", UBehaviorProviderDefinition_Data),
    ]


class UAIBehaviorProviderDefinition_Data(Structure):
    _fields_ = []


class UAIBehaviorProviderDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UBehaviorProviderDefinition", UBehaviorProviderDefinition_Data),
        ("UAIBehaviorProviderDefinition", UAIBehaviorProviderDefinition_Data),
    ]


class UBehaviorSequenceCustomEnableCondition_Data(Structure):
    _fields_ = [
        ("LinkedBehaviorSequences", FChunkedList_Mirror),
        ("BehaviorKernelInstanceTagForTransientState", c_ubyte),
    ]


class UBehaviorSequenceCustomEnableCondition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        (
            "UBehaviorSequenceCustomEnableCondition",
            UBehaviorSequenceCustomEnableCondition_Data,
        ),
    ]


class UBehaviorSequenceEnableByMultipleConditions_Data(Structure):
    _fields_ = [
        ("EnableConditions", TArray_UBehaviorSequenceCustomEnableConditionPtr),
        ("Operator", c_ubyte),
    ]


class UBehaviorSequenceEnableByMultipleConditions(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        (
            "UBehaviorSequenceCustomEnableCondition",
            UBehaviorSequenceCustomEnableCondition_Data,
        ),
        (
            "UBehaviorSequenceEnableByMultipleConditions",
            UBehaviorSequenceEnableByMultipleConditions_Data,
        ),
    ]


class UIBehaviorConsumer_Data(Structure):
    _fields_ = []


class UIBehaviorConsumer(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIBehaviorConsumer", UIBehaviorConsumer_Data),
    ]


class UIBehaviorProvider_Data(Structure):
    _fields_ = []


class UIBehaviorProvider(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIBehaviorProvider", UIBehaviorProvider_Data),
    ]


class UICustomEvent_Data(Structure):
    _fields_ = []


class UICustomEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UICustomEvent", UICustomEvent_Data),
    ]


class UITimerBehavior_Data(Structure):
    _fields_ = []


class UITimerBehavior(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UITimerBehavior", UITimerBehavior_Data),
    ]


class UGearboxAnimDefinition_Data(Structure):
    _fields_ = [
        ("VfTable_IIBehaviorProvider", FPointer),
        ("AnimName", FName),
        ("BlendInTime", c_float),
        ("BlendOutTime", c_float),
        ("PlayRate", c_float),
        ("EndingCondition", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("AnimSet", POINTER(UAnimSet)),
        ("bMirrored", c_bool, 1),
        ("BlendPerBone", c_bool, 1),
        ("DisableAnimSequenceNotifies", c_bool, 1),
        ("bOnlyPlayNotifiesWhileActive", c_bool, 1),
        ("bReverseAnimSearchOrder", c_bool, 1),
        ("", c_ulong, 0),
        ("AnimNodeName", FName),
        ("RootMotionDef", POINTER(URootMotionDefinition)),
        ("BoneBlendDef", POINTER(UFeatherBoneBlendDefinition)),
        ("BoneNames", TArray_FName),
        ("StartBehaviors", TArray_FSMBehavior),
        ("SMNotifies", TArray_FSMNotify),
        ("StopBehaviors", TArray_FSMBehavior),
        ("TimedBehaviorEvents", TArray_FTimedAnimBehaviorEvent),
        ("BehaviorProviderDefinition", POINTER(UBehaviorProviderDefinition)),
    ]


class UGearboxAnimDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("UGearboxAnimDefinition", UGearboxAnimDefinition_Data),
    ]


class UBehavior_TriggerDialogEvent_Data(Structure):
    _fields_ = [
        ("EventTag", POINTER(UGearboxDialogEventTag)),
        ("Group", POINTER(UGearboxDialogGroup)),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("Other", POINTER(UObject)),
        ("bForcePlayImmediate", c_bool, 1),
        ("bCheckCanPreview", c_bool, 1),
        ("bCanPreview", c_bool, 1),
        ("", c_ulong, 0),
        ("MyEventData", POINTER(UGearboxDialogEventData)),
        ("MyDataUseCount", c_int),
    ]


class UBehavior_TriggerDialogEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_TriggerDialogEvent", UBehavior_TriggerDialogEvent_Data),
    ]


class AGearboxDialogActor_Data(Structure):
    _fields_ = [
        ("VfTable_IGearboxDialogInterface", FPointer),
        ("DialogGroups", TArray_UGearboxDialogGroupPtr),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("EditorSprite", POINTER(USpriteComponent)),
        ("DialogComponent", POINTER(UGearboxDialogComponent)),
        ("DialogReplicatedData", FGearboxDialogReplicatedData),
        ("CurrentNameTag", POINTER(UGearboxDialogNameTag)),
    ]


class AGearboxDialogActor(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AGearboxDialogActor", AGearboxDialogActor_Data),
    ]


class UGearboxDialogComponent_Data(Structure):
    _fields_ = [
        ("EventData", POINTER(UGearboxDialogEventData)),
        ("ClientPlayingInfo", FAkPlayingInfo),
        ("bIsReattaching", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UGearboxDialogComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UGearboxDialogComponent", UGearboxDialogComponent_Data),
    ]


class UGearboxDialogEventData_Data(Structure):
    _fields_ = [
        ("EventInfo", FDialogEventInfo),
        ("Instigator", POINTER(AActor)),
        ("Other", POINTER(AActor)),
        ("ObjectParameter", POINTER(UObject)),
        ("LastTalker", POINTER(AActor)),
        ("LiveTalkAction", POINTER(UGearboxDialogAct_Talk)),
        ("LiveTalkActionDataID", c_int),
        ("TemplateEventInfo", FDialogEventInfo),
        ("LiveTriggerAction", POINTER(UGearboxDialogAct_Trigger)),
        ("PlayingInfo", FAkPlayingInfo),
        ("TalkFinishTime", c_float),
        ("UseCount", c_int),
    ]


class UGearboxDialogEventData(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogEventData", UGearboxDialogEventData_Data),
    ]


class UGearboxDialogEventTag_Data(Structure):
    _fields_ = [
        ("bGroupEvent", c_bool, 1),
        ("bSoundEffect", c_bool, 1),
        ("bIsDeathScream", c_bool, 1),
        ("", c_ulong, 0),
        ("Priority", POINTER(UGearboxDialogPriority)),
    ]


class UGearboxDialogEventTag(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogEventTag", UGearboxDialogEventTag_Data),
    ]


class UGearboxDialogGlobalsDefinition_Data(Structure):
    _fields_ = [
        ("PitchRTPC", POINTER(UAkRtpc)),
        ("Priorities", TArray_UGearboxDialogPriorityPtr),
    ]


class UGearboxDialogGlobalsDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogGlobalsDefinition", UGearboxDialogGlobalsDefinition_Data),
    ]


class UGearboxDialogGroup_Data(Structure):
    _fields_ = [
        ("EventTagPackages", TArray_UPackagePtr),
        ("NameTags", TArray_UGearboxDialogNameTagPtr),
        ("EventTags", TArray_UGearboxDialogEventTagPtr),
        ("ParentGroup", POINTER(UGearboxDialogGroup)),
        ("Nodes", TArray_UGearboxDialogNodePtr),
        ("SharedDialogEvent", POINTER(UGearboxDialogEvent)),
        ("SharedTalkAct", POINTER(UGearboxDialogAct_Talk)),
        ("OutputLinksToStructs", TArray_FOutputLinkToStruct),
        ("DialogEvents", TArray_FDialogEventData),
        ("TalkActs", TArray_FTalkActData),
    ]


class UGearboxDialogGroup(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogGroup", UGearboxDialogGroup_Data),
    ]


class UGearboxDialogTemplateGroup_Data(Structure):
    _fields_ = []


class UGearboxDialogTemplateGroup(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogGroup", UGearboxDialogGroup_Data),
        ("UGearboxDialogTemplateGroup", UGearboxDialogTemplateGroup_Data),
    ]


class UGearboxDialogManager_Data(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bShowDebug", c_bool, 1),
        ("", c_ulong, 0),
        ("Talkers", TArray_AActorPtr),
        ("DisabledTalkers", TArray_AActorPtr),
        ("Groups", TArray_UGearboxDialogGroupPtr),
        ("CurrentEventContext", POINTER(UGearboxDialogEventData)),
        ("GroupEventTagMap", FMap_Mirror),
        ("EventDataPool", TArray_UGearboxDialogEventDataPtr),
        ("EventDataClassPath", FString),
        ("EventDataClass", POINTER(UClass)),
    ]


class UGearboxDialogManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogManager", UGearboxDialogManager_Data),
    ]


class UGearboxDialogNameTag_Data(Structure):
    _fields_ = [("NameTag", FName), ("ParentTag", POINTER(UGearboxDialogNameTag))]


class UGearboxDialogNameTag(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogNameTag", UGearboxDialogNameTag_Data),
    ]


class UGearboxDialogPriority_Data(Structure):
    _fields_ = []


class UGearboxDialogPriority(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogPriority", UGearboxDialogPriority_Data),
    ]


class UGearboxDialogNode_Data(Structure):
    _fields_ = [("NodeID", c_int)]


class UGearboxDialogNode(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
    ]


class UGearboxDialogAction_Data(Structure):
    _fields_ = []


class UGearboxDialogAction(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
    ]


class UGearboxDialogAct_Chance_Data(Structure):
    _fields_ = [
        ("Chance", c_float),
        ("QuietTimeMin", c_float),
        ("QuietTimeMax", c_float),
        ("NextFireTime", c_float),
    ]


class UGearboxDialogAct_Chance(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogAct_Chance", UGearboxDialogAct_Chance_Data),
    ]


class UGearboxDialogAct_Compare_Data(Structure):
    _fields_ = []


class UGearboxDialogAct_Compare(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogAct_Compare", UGearboxDialogAct_Compare_Data),
    ]


class UGearboxDialogAct_ObjectParameterSwitch_Data(Structure):
    _fields_ = [("Outputs", TArray_UObjectPtr)]


class UGearboxDialogAct_ObjectParameterSwitch(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        (
            "UGearboxDialogAct_ObjectParameterSwitch",
            UGearboxDialogAct_ObjectParameterSwitch_Data,
        ),
    ]


class UGearboxDialogNonTemplateAction_Data(Structure):
    _fields_ = []


class UGearboxDialogNonTemplateAction(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogNonTemplateAction", UGearboxDialogNonTemplateAction_Data),
    ]


class UGearboxDialogAct_Talk_Data(Structure):
    _fields_ = [
        ("OutputDelay", c_float),
        ("bShowTalkers", c_bool, 1),
        ("bPreviewing", c_bool, 1),
        ("bInstigatorTalker", c_bool, 1),
        ("", c_ulong, 0),
        ("TalkData", TArray_FGearboxDialogData),
    ]


class UGearboxDialogAct_Talk(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogNonTemplateAction", UGearboxDialogNonTemplateAction_Data),
        ("UGearboxDialogAct_Talk", UGearboxDialogAct_Talk_Data),
    ]


class UGearboxDialogTemplateAction_Data(Structure):
    _fields_ = []


class UGearboxDialogTemplateAction(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogTemplateAction", UGearboxDialogTemplateAction_Data),
    ]


class UGearboxDialogAct_Trigger_Data(Structure):
    _fields_ = [
        ("DialogEvent", POINTER(UGearboxDialogEventTag)),
        ("bPreviewing", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UGearboxDialogAct_Trigger(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogTemplateAction", UGearboxDialogTemplateAction_Data),
        ("UGearboxDialogAct_Trigger", UGearboxDialogAct_Trigger_Data),
    ]


class UGearboxDialogEvent_Data(Structure):
    _fields_ = [
        ("bDisabled", c_bool, 1),
        ("", c_ulong, 0),
        ("Tag", POINTER(UGearboxDialogEventTag)),
    ]


class UGearboxDialogEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogEvent", UGearboxDialogEvent_Data),
    ]


class UGearboxDialogTemplateEvent_Data(Structure):
    _fields_ = []


class UGearboxDialogTemplateEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogEvent", UGearboxDialogEvent_Data),
        ("UGearboxDialogTemplateEvent", UGearboxDialogTemplateEvent_Data),
    ]


class UGearboxDialogVariable_Data(Structure):
    _fields_ = []


class UGearboxDialogVariable(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
    ]


class UGearboxDialogVar_Instigator_Data(Structure):
    _fields_ = []


class UGearboxDialogVar_Instigator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Instigator", UGearboxDialogVar_Instigator_Data),
    ]


class UGearboxDialogVar_LastTalker_Data(Structure):
    _fields_ = []


class UGearboxDialogVar_LastTalker(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_LastTalker", UGearboxDialogVar_LastTalker_Data),
    ]


class UGearboxDialogVar_NameTag_Data(Structure):
    _fields_ = [("NameTag", POINTER(UGearboxDialogNameTag))]


class UGearboxDialogVar_NameTag(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_NameTag", UGearboxDialogVar_NameTag_Data),
    ]


class UGearboxDialogVar_Other_Data(Structure):
    _fields_ = []


class UGearboxDialogVar_Other(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Other", UGearboxDialogVar_Other_Data),
    ]


class UGearboxDialogVar_Random_Data(Structure):
    _fields_ = [
        ("bNotOther", c_bool, 1),
        ("bNotInstigator", c_bool, 1),
        ("bNotLastTalker", c_bool, 1),
        ("", c_ulong, 0),
        ("Allegiance", POINTER(UPawnAllegiance)),
        ("DistanceLimit", FAttributeInitializationData),
    ]


class UGearboxDialogVar_Random(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Random", UGearboxDialogVar_Random_Data),
    ]


class UGearboxSeqAct_ToggleDialog_Data(Structure):
    _fields_ = [("bDialogEnabled", c_bool, 1), ("", c_ulong, 0)]


class UGearboxSeqAct_ToggleDialog(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_ToggleDialog", UGearboxSeqAct_ToggleDialog_Data),
    ]


class UGearboxSeqAct_TriggerDialog_Data(Structure):
    _fields_ = [
        ("Other", POINTER(AActor)),
        ("EventTag", POINTER(UGearboxDialogEventTag)),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("EventData", POINTER(UGearboxDialogEventData)),
        ("MyDataUseCount", c_int),
        ("bCheckCanPreview", c_bool, 1),
        ("bCanPreview", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UGearboxSeqAct_TriggerDialog(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_TriggerDialog", UGearboxSeqAct_TriggerDialog_Data),
    ]


class UGearboxSeqAct_TriggerDialogName_Data(Structure):
    _fields_ = [("Group", POINTER(UGearboxDialogGroup))]


class UGearboxSeqAct_TriggerDialogName(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_TriggerDialog", UGearboxSeqAct_TriggerDialog_Data),
        ("UGearboxSeqAct_TriggerDialogName", UGearboxSeqAct_TriggerDialogName_Data),
    ]


class UGearboxAccountActions_Data(Structure):
    _fields_ = [
        ("CurrentConsumeCount", c_int),
        ("CurrentControllerId", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CurrentEntitlement", POINTER(UGearboxAccountEntitlement)),
        ("CurrentBulkConsumeEntitlements", TArray_UGearboxAccountEntitlementPtr),
        ("CurrentBulkConsumeControllerIds", TArray_int),
        ("CurrentBulkConsumeCounts", TArray_int),
        ("__OnSignInGearboxAccount__Delegate", FScriptDelegate),
        ("__OnSignUpGearboxAccount__Delegate", FScriptDelegate),
        ("__OnResetPasswordGearboxAccount__Delegate", FScriptDelegate),
        ("__OnCodeRedeemed__Delegate", FScriptDelegate),
        ("__OnEntitlementConsumed__Delegate", FScriptDelegate),
    ]


class UGearboxAccountActions(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountActions", UGearboxAccountActions_Data),
    ]


class UGearboxAccountData_Data(Structure):
    _fields_ = [
        ("RequestId", FString),
        ("SignedIn", c_bool, 1),
        ("HasValidPlatform", c_bool, 1),
        ("", c_ulong, 0),
        ("PlatformLoginName", FString),
        ("NextEntitlementUpdateTime", FDouble),
        ("Entitlements", TArray_UGearboxAccountEntitlementPtr),
        ("Offers", TArray_UGearboxAccountOfferPtr),
        ("EntitlementsUpdatedDelegates", TArray_FScriptDelegate),
        ("Services", TArray_USparkServiceConfigurationPtr),
        ("AgreementsSigning", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SupportId", FString),
    ]


class UGearboxAccountData(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountData", UGearboxAccountData_Data),
    ]


class UGearboxProcess_Data(Structure):
    _fields_ = [
        ("FirstAttemptDelay", c_int),
        ("BaseRetrySeconds", c_int),
        ("MaxRetryAttempts", c_int),
        ("RetryMultiplier", c_float),
        ("RetryJitter", c_int),
        ("CurrentRetrySeconds", c_float),
        ("Attempts", c_int),
        ("WaitTime", c_float),
        ("Waiting", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentStep", c_int),
        ("FailureStep", c_int),
    ]


class UGearboxProcess(Structure):
    _fields_ = [("UObject", UObject_Data), ("UGearboxProcess", UGearboxProcess_Data)]


class USparkInitializationProcess_Data(Structure):
    _fields_ = [
        ("Data", POINTER(UGearboxAccountData)),
        ("PlayerIndex", c_int),
        ("SparkInitializedDelegates", TArray_FScriptDelegate),
        ("bPrimary", c_bool, 1),
        ("ValidAccount", c_bool, 1),
        ("", c_ulong, 0),
        ("AsyncTicket", FString),
    ]


class USparkInitializationProcess(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxProcess", UGearboxProcess_Data),
        ("USparkInitializationProcess", USparkInitializationProcess_Data),
    ]


class ULeviathanService_Data(Structure):
    _fields_ = [
        ("VfTable_ISparkUpdateCallback", FPointer),
        ("EventBufferSize", c_int),
        ("StatBufferSize", c_int),
        ("AtomTableBufferSize", c_int),
    ]


class ULeviathanService(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("ULeviathanService", ULeviathanService_Data),
    ]


class USparkInterface_Data(Structure):
    _fields_ = []


class USparkInterface(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("USparkInterface", USparkInterface_Data),
    ]


class USparkInterfaceImpl_Data(Structure):
    _fields_ = [
        ("VfTable_ISparkInterface", FPointer),
        ("VfTable_FTickableObject", FPointer),
        ("SparkInitialization", POINTER(USparkInitializationProcess)),
        ("SecondaryInitialization", POINTER(USparkInitializationProcess)),
        ("Accounts", TArray_UGearboxAccountDataPtr),
        ("LeviathanServiceClassName", FString),
        ("LeviathanSvc", POINTER(ULeviathanService)),
        ("ReadBufferSize", c_int),
        ("TmsInitComplete", c_bool, 1),
        ("UpdateEmergencyMessage", c_bool, 1),
        ("", c_ulong, 0),
        ("EmergencyMessage", FString),
        ("Requests", TArray_FSparkOutstandingRequest),
        ("LastHttpRequestRetries", c_int),
        ("LastHttpRequestResponseTime", c_float),
        ("RecentHttpRequestFailures", c_int),
        ("InteractionMinWaitSeconds", c_int),
        ("InteractionGraceTries", c_int),
        ("InteractionPunishmentMinWaitSeconds", c_int),
        ("InteractionTries", c_int),
        ("TitleStorageService", POINTER(USparkServiceConfiguration)),
        ("TitleStorageUrl", FString),
        ("NewsService", POINTER(USparkNews)),
        ("__OnSparkRequestComplete__Delegate", FScriptDelegate),
        ("__OnSparkConfigReceived__Delegate", FScriptDelegate),
        ("__OnSparkEmergencyMessageUpdated__Delegate", FScriptDelegate),
    ]


class USparkInterfaceImpl(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USparkInterfaceImpl", USparkInterfaceImpl_Data),
    ]


class USparkServiceConfiguration_Data(Structure):
    _fields_ = [
        ("ServiceName", FName),
        ("ConfigurationGroup", FName),
        ("Keys", TArray_FString),
        ("Values", TArray_FString),
        ("OverrideUrl", FString),
    ]


class USparkServiceConfiguration(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USparkServiceConfiguration", USparkServiceConfiguration_Data),
    ]


class USparkTypes_Data(Structure):
    _fields_ = [
        ("__OnSparkRequestComplete__Delegate", FScriptDelegate),
        ("__OnSparkConfigReceived__Delegate", FScriptDelegate),
        ("__OnSparkInitialized__Delegate", FScriptDelegate),
        ("__OnSparkEmergencyMessageUpdated__Delegate", FScriptDelegate),
        ("__OnEntitlementsUpdated__Delegate", FScriptDelegate),
    ]


class USparkTypes(Structure):
    _fields_ = [("UObject", UObject_Data), ("USparkTypes", USparkTypes_Data)]


class UAction_ChangeRuleSet_Data(Structure):
    _fields_ = [("NewRuleSet", POINTER(URuleSet))]


class UAction_ChangeRuleSet(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UAction_ChangeRuleSet", UAction_ChangeRuleSet_Data),
    ]


class URES_RuleSetChange_Data(Structure):
    _fields_ = []


class URES_RuleSetChange(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_RuleSetChange", URES_RuleSetChange_Data),
    ]


class UAction_FaceThreat_Data(Structure):
    _fields_ = []


class UAction_FaceThreat(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_FaceThreat", UAction_FaceThreat_Data),
    ]


class URES_FacingPolicy_Data(Structure):
    _fields_ = []


class URES_FacingPolicy(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_FacingPolicy", URES_FacingPolicy_Data),
    ]


class UAction_MoveRandom_Data(Structure):
    _fields_ = []


class UAction_MoveRandom(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_MoveRandom", UAction_MoveRandom_Data),
    ]


class UAction_MoveTo_Data(Structure):
    _fields_ = []


class UAction_MoveTo(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_MoveTo", UAction_MoveTo_Data),
    ]


class URES_Movement_Data(Structure):
    _fields_ = []


class URES_Movement(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_Movement", URES_Movement_Data),
    ]


class UAction_PopRuleSet_Data(Structure):
    _fields_ = []


class UAction_PopRuleSet(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PopRuleSet", UAction_PopRuleSet_Data),
    ]


class UAction_PushRuleSet_Data(Structure):
    _fields_ = [("NewRuleSet", POINTER(URuleSet))]


class UAction_PushRuleSet(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PushRuleSet", UAction_PushRuleSet_Data),
    ]


class UActorAttributeContextResolver_Data(Structure):
    _fields_ = []


class UActorAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        ("UActorAttributeContextResolver", UActorAttributeContextResolver_Data),
    ]


class UAIComponentAttributeContextResolver_Data(Structure):
    _fields_ = []


class UAIComponentAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UAIComponentAttributeContextResolver",
            UAIComponentAttributeContextResolver_Data,
        ),
    ]


class UAIStateBase_Data(Structure):
    _fields_ = []


class UAIStateBase(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
    ]


class UAIState_Data(Structure):
    _fields_ = []


class UAIState(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState", UAIState_Data),
    ]


class UAIState_Priority_Data(Structure):
    _fields_ = []


class UAIState_Priority(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Priority", UAIState_Priority_Data),
    ]


class UAIState_Random_Data(Structure):
    _fields_ = []


class UAIState_Random(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Random", UAIState_Random_Data),
    ]


class UAIState_Sequential_Data(Structure):
    _fields_ = []


class UAIState_Sequential(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Sequential", UAIState_Sequential_Data),
    ]


class UBehavior_AIHold_Data(Structure):
    _fields_ = [("Reason", FName), ("Action", c_ubyte), ("Type", c_ubyte)]


class UBehavior_AIHold(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AIHold", UBehavior_AIHold_Data),
    ]


class UBehavior_AIPriority_Data(Structure):
    _fields_ = [("PriorityModifier", c_float), ("Target", FBehaviorContextData)]


class UBehavior_AIPriority(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AIPriority", UBehavior_AIPriority_Data),
    ]


class UBehavior_AITargeting_Data(Structure):
    _fields_ = [("NewTargetingDefinition", POINTER(UTargetingDefinition))]


class UBehavior_AITargeting(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AITargeting", UBehavior_AITargeting_Data),
    ]


class UBehavior_ChangeAnyBehaviorSequenceState_Data(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class UBehavior_ChangeAnyBehaviorSequenceState(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeAnyBehaviorSequenceState",
            UBehavior_ChangeAnyBehaviorSequenceState_Data,
        ),
    ]


class UBehavior_ChangeLocalBehaviorSequenceState_Data(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class UBehavior_ChangeLocalBehaviorSequenceState(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeLocalBehaviorSequenceState",
            UBehavior_ChangeLocalBehaviorSequenceState_Data,
        ),
    ]


class UBehavior_CompareBool_Data(Structure):
    _fields_ = [("BoolValue", c_bool, 1), ("", c_ulong, 0)]


class UBehavior_CompareBool(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CompareBool", UBehavior_CompareBool_Data),
    ]


class UBehavior_CompareValues_Data(Structure):
    _fields_ = [
        ("ValueA", FAttributeInitializationData),
        ("ContextB", FBehaviorContextData),
        ("ValueB", FAttributeInitializationData),
    ]


class UBehavior_CompareValues(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CompareValues", UBehavior_CompareValues_Data),
    ]


class UBehavior_CustomEvent_Data(Structure):
    _fields_ = [("CustomEventName", FName)]


class UBehavior_CustomEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CustomEvent", UBehavior_CustomEvent_Data),
    ]


class UBehavior_Delay_Data(Structure):
    _fields_ = [("Delay", c_float)]


class UBehavior_Delay(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Delay", UBehavior_Delay_Data),
    ]


class UBehavior_Gate_Data(Structure):
    _fields_ = [("GateCount", c_int), ("ActivationCount", c_int)]


class UBehavior_Gate(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Gate", UBehavior_Gate_Data),
    ]


class UBehavior_GetFloatParam_Data(Structure):
    _fields_ = []


class UBehavior_GetFloatParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetFloatParam", UBehavior_GetFloatParam_Data),
    ]


class UBehavior_GetObjectParam_Data(Structure):
    _fields_ = []


class UBehavior_GetObjectParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetObjectParam", UBehavior_GetObjectParam_Data),
    ]


class UBehavior_GetVectorParam_Data(Structure):
    _fields_ = [("bTreatAsVector", c_bool, 1), ("", c_ulong, 0)]


class UBehavior_GetVectorParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetVectorParam", UBehavior_GetVectorParam_Data),
    ]


class UBehavior_InterpolateFloatOverTime_Data(Structure):
    _fields_ = [
        ("Duration", c_float),
        ("UpdateInterval", c_float),
        ("EndingValue", c_float),
        ("BeginningValue", c_float),
    ]


class UBehavior_InterpolateFloatOverTime(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_InterpolateFloatOverTime", UBehavior_InterpolateFloatOverTime_Data),
    ]


class UBehavior_Metronome_Data(Structure):
    _fields_ = [
        ("bUseTickCount", c_bool, 1),
        ("bUseDuration", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxTickCount", c_int),
        ("CurrentTickCount", c_int),
        ("Duration", c_float),
        ("TickInterval", c_float),
    ]


class UBehavior_Metronome(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Metronome", UBehavior_Metronome_Data),
    ]


class UBehavior_ModifyTimer_Data(Structure):
    _fields_ = [
        ("TimerId", c_ubyte),
        ("Operation", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("NewTimerDelay", FAttributeInitializationData),
    ]


class UBehavior_ModifyTimer(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ModifyTimer", UBehavior_ModifyTimer_Data),
    ]


class UBehavior_SetFloatParam_Data(Structure):
    _fields_ = [("Value", c_float)]


class UBehavior_SetFloatParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetFloatParam", UBehavior_SetFloatParam_Data),
    ]


class UBehavior_SetObjectParam_Data(Structure):
    _fields_ = [("Value", POINTER(UObject))]


class UBehavior_SetObjectParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetObjectParam", UBehavior_SetObjectParam_Data),
    ]


class UBehavior_SetVectorParam_Data(Structure):
    _fields_ = [
        ("RValue", c_float),
        ("GValue", c_float),
        ("bValue", c_float),
        ("AValue", c_float),
        ("bKeepR", c_bool, 1),
        ("bKeepG", c_bool, 1),
        ("bKeepB", c_bool, 1),
        ("bKeepA", c_bool, 1),
        ("bTreatAsVector", c_bool, 1),
        ("", c_ulong, 0),
    ]


class UBehavior_SetVectorParam(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetVectorParam", UBehavior_SetVectorParam_Data),
    ]


class UBehavior_SpecialMove_Data(Structure):
    _fields_ = [
        ("SpecialMove", POINTER(USpecialMoveDefinition)),
        ("bStopCurrentMove", c_bool, 1),
        ("bQueueIfCannotPlay", c_bool, 1),
        ("bLocal", c_bool, 1),
        ("", c_ulong, 0),
        ("Duration", c_float),
    ]


class UBehavior_SpecialMove(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SpecialMove", UBehavior_SpecialMove_Data),
    ]


class UBehavior_SpecialMoveStop_Data(Structure):
    _fields_ = [("SpecificMove", POINTER(USpecialMoveDefinition))]


class UBehavior_SpecialMoveStop(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SpecialMoveStop", UBehavior_SpecialMoveStop_Data),
    ]


class UBehavior_StartAkAmbientSound_Data(Structure):
    _fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("SoundGroup", POINTER(AWwiseSoundGroup)),
    ]


class UBehavior_StartAkAmbientSound(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StartAkAmbientSound", UBehavior_StartAkAmbientSound_Data),
    ]


class UBehavior_StopAkAmbientSound_Data(Structure):
    _fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("SoundGroup", POINTER(AWwiseSoundGroup)),
    ]


class UBehavior_StopAkAmbientSound(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StopAkAmbientSound", UBehavior_StopAkAmbientSound_Data),
    ]


class UBehavior_StopDialog_Data(Structure):
    _fields_ = [("EventTag", POINTER(UGearboxDialogEventTag))]


class UBehavior_StopDialog(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StopDialog", UBehavior_StopDialog_Data),
    ]


class UBehavior_ToggleDialog_Data(Structure):
    _fields_ = [("Option", c_ubyte)]


class UBehavior_ToggleDialog(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ToggleDialog", UBehavior_ToggleDialog_Data),
    ]


class UCameraModifierCrossfade_Data(Structure):
    _fields_ = [
        ("ModifierA", POINTER(UGearboxCameraModifier)),
        ("ModifierB", POINTER(UGearboxCameraModifier)),
        ("CurModifierNdx", c_int),
        ("CurBlendWeight", c_float),
        ("BlendSpeed", c_float),
        ("DebugInset", c_int),
        ("LerpMode", c_ubyte),
    ]


class UCameraModifierCrossfade(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
        ("UCameraModifierCrossfade", UCameraModifierCrossfade_Data),
    ]


class UCameraModifierLookAt_Data(Structure):
    _fields_ = [
        ("LookAtMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bActionFinished", c_bool, 1),
        ("", c_ulong, 0),
        ("Duration", c_float),
        ("TimeElapsed", c_float),
        ("ThirdPersonPullBackDistance", c_float),
        ("ThirdPersonPushSideDistance", c_float),
        ("ThirdPersonRaiseUpDistance", c_float),
        ("Zoom", c_float),
        ("TransitionInTime", c_float),
        ("TransitionOutTime", c_float),
        ("LookAtTarget", POINTER(AActor)),
        ("LookAtBone", FName),
    ]


class UCameraModifierLookAt(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
        ("UCameraModifierLookAt", UCameraModifierLookAt_Data),
    ]


class UDefinitionUITestCaseDefinition_Data(Structure):
    _fields_ = [
        ("ConstantFloat", c_float),
        ("ConstantFloatArray", TArray_float),
        ("Float", c_float),
        ("FloatArray", TArray_float),
        ("EditConstReferencedDefinition", POINTER(UGBXDefinition)),
        ("EditConstArrayOfReferences", TArray_UGBXDefinitionPtr),
        ("ReferencedDefinition", POINTER(UGBXDefinition)),
        ("ArrayOfReferences", TArray_UGBXDefinitionPtr),
    ]


class UDefinitionUITestCaseDefinition(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UDefinitionUITestCaseDefinition", UDefinitionUITestCaseDefinition_Data),
    ]


class USparkNews_Data(Structure):
    _fields_ = [
        ("Articles", TArray_FNewsArticle),
        ("__OnNewsRetrieved__Delegate", FScriptDelegate),
    ]


class USparkNews(Structure):
    _fields_ = [("UObject", UObject_Data), ("USparkNews", USparkNews_Data)]


class UGearboxAccountEntitlement_Data(Structure):
    _fields_ = [
        ("Identifier", FName),
        ("Id", c_int),
        ("Consumable", c_bool, 1),
        ("", c_ulong, 0),
        ("ConsumableAmount", c_int),
        ("Consumed", c_int),
        ("Payload", FString),
        ("LocallyConsumed", c_int),
    ]


class UGearboxAccountEntitlement(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountEntitlement", UGearboxAccountEntitlement_Data),
    ]


class UGearboxAccountOffer_Data(Structure):
    _fields_ = [
        ("TitleEfigs", FString),
        ("DescriptionEfigs", FString),
        ("Id", c_int),
        ("Notified", c_bool, 1),
        ("", c_ulong, 0),
        ("DateUnlocked", FString),
    ]


class UGearboxAccountOffer(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountOffer", UGearboxAccountOffer_Data),
    ]


class APatrolDestination_Data(Structure):
    _fields_ = [("NextPatrolPoints", TArray_APatrolDestinationPtr)]


class APatrolDestination(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APatrolDestination", APatrolDestination_Data),
    ]


class UGearboxSeqAct_TargetPriority_Data(Structure):
    _fields_ = [("AITargets", TArray_AActorPtr), ("PriorityModifier", c_float)]


class UGearboxSeqAct_TargetPriority(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_TargetPriority", UGearboxSeqAct_TargetPriority_Data),
    ]


class UGearboxSeqAct_CameraShake_Data(Structure):
    _fields_ = [("CameraShake", FGearboxViewShakeInfo)]


class UGearboxSeqAct_CameraShake(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_CameraShake", UGearboxSeqAct_CameraShake_Data),
    ]


class UGearboxSeqAct_PawnClonerLink_Data(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bIsSpawning", c_bool, 1),
        ("", c_ulong, 0),
        ("ClonePoints", TArray_AActorPtr),
        ("SpawnedCount", c_int),
        ("RemainingDelay", c_float),
    ]


class UGearboxSeqAct_PawnClonerLink(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_PawnClonerLink", UGearboxSeqAct_PawnClonerLink_Data),
    ]


class UGFxMovieDrawStyleInstanceData_Data(Structure):
    _fields_ = [
        ("ComponentIDName", FName),
        ("MatIndexName", FName),
        ("bAlwaysInstance", c_bool, 1),
        ("", c_ulong, 0),
        ("MatiSource", POINTER(UMaterial)),
        ("TextureParameterName", FName),
        ("Component", POINTER(UMeshComponent)),
        ("MaterialIndex", c_int),
        ("Mati", POINTER(UMaterialInstanceConstant)),
    ]


class UGFxMovieDrawStyleInstanceData(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleInstanceData", UGFxMovieDrawStyleInstanceData_Data),
    ]


class USeqEvent_AllSpawned_Data(Structure):
    _fields_ = []


class USeqEvent_AllSpawned(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_AllSpawned", USeqEvent_AllSpawned_Data),
    ]


class UPopulationMasterAttributeContextResolver_Data(Structure):
    _fields_ = []


class UPopulationMasterAttributeContextResolver(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UPopulationMasterAttributeContextResolver",
            UPopulationMasterAttributeContextResolver_Data,
        ),
    ]


class USeqEvent_SinglePopulationDeath_Data(Structure):
    _fields_ = []


class USeqEvent_SinglePopulationDeath(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_SinglePopulationDeath", USeqEvent_SinglePopulationDeath_Data),
    ]


class URES_Rotation_Data(Structure):
    _fields_ = []


class URES_Rotation(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_Rotation", URES_Rotation_Data),
    ]


class URES_SpecialMove_Data(Structure):
    _fields_ = []


class URES_SpecialMove(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_SpecialMove", URES_SpecialMove_Data),
    ]


class USeqEvent_ArrivedAtMoveNode_Data(Structure):
    _fields_ = []


class USeqEvent_ArrivedAtMoveNode(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_ArrivedAtMoveNode", USeqEvent_ArrivedAtMoveNode_Data),
    ]


class USeqEvent_LeavingMoveNode_Data(Structure):
    _fields_ = []


class USeqEvent_LeavingMoveNode(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_LeavingMoveNode", USeqEvent_LeavingMoveNode_Data),
    ]


class UShowDebugHelpers_Data(Structure):
    _fields_ = []


class UShowDebugHelpers(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UShowDebugHelpers", UShowDebugHelpers_Data),
    ]


class ASkeletalMeshActorGBXMatinee_Data(Structure):
    _fields_ = []


class ASkeletalMeshActorGBXMatinee(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("ASkeletalMeshActor", ASkeletalMeshActor_Data),
        ("ASkeletalMeshActorGBXMatinee", ASkeletalMeshActorGBXMatinee_Data),
    ]


class UGearboxEULAGFxMovie_Data(Structure):
    _fields_ = [
        ("GearboxEULAObj", POINTER(UGearboxEULAGFxObject)),
        ("CurrentControllerId", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EULAs", TArray_FEULAData),
        ("EULAIndexToDisplay", c_int),
        ("__OnEULAInteractionComplete__Delegate", FScriptDelegate),
    ]


class UGearboxEULAGFxMovie(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
        ("UGearboxEULAGFxMovie", UGearboxEULAGFxMovie_Data),
    ]


class UGearboxEULAGFxObject_Data(Structure):
    _fields_ = []


class UGearboxEULAGFxObject(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UGFxObject", UGFxObject_Data),
        ("UGearboxEULAGFxObject", UGearboxEULAGFxObject_Data),
    ]


BL2SDK.g_loadedClasses += [("UActorFactoryClone", 2910, "UActorFactory")]
BL2SDK.g_loadedClasses += [("UActorFactoryWireTerminal", 2912, "UActorFactory")]
BL2SDK.g_loadedClasses += [("UAIDebugCamera", 2914, "UObject")]
BL2SDK.g_loadedClasses += [("UAITracker", 2916, "UObject")]
BL2SDK.g_loadedClasses += [("UAnimNodeSpecialMoveBlend", 2918, "UAnimNodeSlot")]
BL2SDK.g_loadedClasses += [
    ("UAttributeExpressionEvaluator", 2920, "UExpressionEvaluator")
]
BL2SDK.g_loadedClasses += [("UBehavior_CallFunction", 2922, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UBehavior_ChangeRemoteBehaviorSequenceState", 2924, "UBehaviorBase")
]
BL2SDK.g_loadedClasses += [("UBehavior_ChangeTimer", 2926, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_IsSequenceEnabled", 2928, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_PostAkEvent", 2930, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehaviorHelpers", 2932, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UCompoundExpressionEvaluator", 2934, "UExpressionEvaluator")
]
BL2SDK.g_loadedClasses += [
    ("UConditionalAttributeValueResolver", 2936, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [
    ("UConstantAttributeValueResolver", 2938, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [
    ("UConstraintAttributeValueResolver", 2940, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [("UFeatherBoneBlendDefinition", 2942, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGBXActorList", 2944, "UObject")]
BL2SDK.g_loadedClasses += [("UGBXObjectList", 2946, "UObject")]
BL2SDK.g_loadedClasses += [("AGearboxAIController", 2948, "AAIController")]
BL2SDK.g_loadedClasses += [("AGearboxAIMoveNode", 2950, "AActor")]
BL2SDK.g_loadedClasses += [("AGearboxCameraBasic", 2952, "ACamera")]
BL2SDK.g_loadedClasses += [("UGearboxCameraModifier", 2954, "UCameraModifier")]
BL2SDK.g_loadedClasses += [("UGearboxCheatManager", 2956, "UCheatManager")]
BL2SDK.g_loadedClasses += [("UGearboxDialogInterface", 2958, "UInterface")]
BL2SDK.g_loadedClasses += [("UGearboxEditorNode", 2960, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxEngine", 2962, "UGameEngine")]
BL2SDK.g_loadedClasses += [("AGearboxGameInfo", 2964, "AGameInfo")]
BL2SDK.g_loadedClasses += [("UGearboxGFxMovie", 2966, "UGFxMovie")]
BL2SDK.g_loadedClasses += [("UGFxMovie_StateParent", 2968, "UGearboxGFxMovie")]
BL2SDK.g_loadedClasses += [("UGearboxGlobals", 2970, "UGearboxEngineGlobals")]
BL2SDK.g_loadedClasses += [("UGearboxGlobalsDefinition", 2972, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGearboxLocationRequest", 2974, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UPawnMoveLocationRequest", 2976, "UGearboxLocationRequest")
]
BL2SDK.g_loadedClasses += [("AGearboxPawn", 2978, "AGamePawn")]
BL2SDK.g_loadedClasses += [("AGearboxPlayerController", 2980, "AGamePlayerController")]
BL2SDK.g_loadedClasses += [("UGearboxPlayerInput", 2982, "UPlayerInput")]
BL2SDK.g_loadedClasses += [
    ("AGearboxPlayerReplicationInfo", 2984, "APlayerReplicationInfo")
]
BL2SDK.g_loadedClasses += [("UGearboxProfileSettings", 2986, "UOnlineProfileSettings")]
BL2SDK.g_loadedClasses += [("UGearboxRenderTextureManager", 2988, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UGearboxSeqAct_DestroyPopulationActors", 2990, "USeqAct_Latent")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxSeqAct_ResetPopulationCount", 2992, "USequenceAction")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxSkeletalMeshComponent", 2994, "USkeletalMeshComponent")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxStaticMeshComponent", 2996, "UStaticMeshComponent")
]
BL2SDK.g_loadedClasses += [("UGestaltSkeletalMeshDefinition", 2998, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGFxActorMoviePool", 3000, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxMovieDefinition", 3002, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [
    ("UGearboxEULAGFxMovieDefinition", 3004, "UGFxMovieDefinition")
]
BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyle", 3006, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyleHUD", 3008, "UGFxMovieDrawStyle")]
BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyleRTT", 3010, "UGFxMovieDrawStyle")]
BL2SDK.g_loadedClasses += [
    ("UGFxMovieDrawStyleComponent", 3012, "UGFxMovieDrawStyleRTT")
]
BL2SDK.g_loadedClasses += [
    ("UGFxMovieDrawStyleMesh", 3014, "UGFxMovieDrawStyleComponent")
]
BL2SDK.g_loadedClasses += [
    ("UGFxMovieDrawStyleSprite", 3016, "UGFxMovieDrawStyleComponent")
]
BL2SDK.g_loadedClasses += [
    ("UGFxMovieDrawStyleSplitscreen", 3018, "UGFxMovieDrawStyle")
]
BL2SDK.g_loadedClasses += [("UGFxMovieManager", 3020, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxMovieState", 3022, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxMovieStateCustom", 3024, "UGFxMovieState")]
BL2SDK.g_loadedClasses += [("UGFxMovieStateFlags", 3026, "UGFxMovieState")]
BL2SDK.g_loadedClasses += [("UGFxMovieStatePlayerAware", 3028, "UGFxMovieState")]
BL2SDK.g_loadedClasses += [("UIAIInterface", 3030, "UInterface")]
BL2SDK.g_loadedClasses += [("UIConstructObject", 3032, "UInterface")]
BL2SDK.g_loadedClasses += [("UIGFxActorMovie", 3034, "UInterface")]
BL2SDK.g_loadedClasses += [("UINounAttributeProvider", 3036, "UInterface")]
BL2SDK.g_loadedClasses += [("UInterfaceGearboxCamera", 3038, "UInterface")]
BL2SDK.g_loadedClasses += [("UIStreamingDataEvent", 3040, "UInterface")]
BL2SDK.g_loadedClasses += [("ULeviathanChannel", 3042, "UChannel")]
BL2SDK.g_loadedClasses += [
    ("UNoContextNeededAttributeContextResolver", 3044, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [
    ("UNounAttributeValueResolver", 3046, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [
    ("UObjectFunctionAttributeValueResolver", 3048, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [
    ("UObjectPropertyContextResolver", 3050, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [
    ("UPhysicsStateExpressionEvaluator", 3052, "UExpressionEvaluator")
]
BL2SDK.g_loadedClasses += [("UPopulationAspect", 3054, "UObject")]
BL2SDK.g_loadedClasses += [("UPopulationBodyTag", 3056, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("APopulationEncounter", 3058, "AInfo")]
BL2SDK.g_loadedClasses += [
    ("UPopulationEncounterRenderingComponent", 3060, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [
    ("UPopulationOpportunityCombatRenderingComponent", 3062, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [
    ("UPopulationSpawnedActorTagDefinition", 3064, "UGBXDefinition")
]
BL2SDK.g_loadedClasses += [("UPopUpDebugBarGraph", 3066, "UObject")]
BL2SDK.g_loadedClasses += [
    ("URandomAttributeValueResolver", 3068, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [("URegionDefinition", 3070, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("URootMotionDefinition", 3072, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("URuleEngineLoadBalanceManager", 3074, "UObject")]
BL2SDK.g_loadedClasses += [("UScreenSpaceManager", 3076, "UObject")]
BL2SDK.g_loadedClasses += [("USeqAct_AllPlayersInVolume", 3078, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqCond_CompareLocation", 3080, "USequenceCondition")]
BL2SDK.g_loadedClasses += [("USeqCond_CompareString", 3082, "USequenceCondition")]
BL2SDK.g_loadedClasses += [("USeqCond_GetLanguage", 3084, "USequenceCondition")]
BL2SDK.g_loadedClasses += [
    ("USimpleMathValueResolver", 3086, "UAttributeValueResolver")
]
BL2SDK.g_loadedClasses += [("USpecialMoveComponent", 3088, "UActorComponent")]
BL2SDK.g_loadedClasses += [("USpecialMoveDefinition", 3090, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [
    ("USpecialMoveExpressionList", 3092, "USpecialMoveDefinition")
]
BL2SDK.g_loadedClasses += [("USpecialMoveRandom", 3094, "USpecialMoveDefinition")]
BL2SDK.g_loadedClasses += [("USpecialMoveInterface", 3096, "UInterface")]
BL2SDK.g_loadedClasses += [("UStateAttributeResolver", 3098, "UAttributeValueResolver")]
BL2SDK.g_loadedClasses += [("UTimeValueResolver", 3100, "UAttributeValueResolver")]
BL2SDK.g_loadedClasses += [("AWireManager", 3102, "AActor")]
BL2SDK.g_loadedClasses += [("AWireTerminal", 3104, "AStaticMeshActor")]
BL2SDK.g_loadedClasses += [("AWiringActor", 3106, "AStaticMeshActor")]
BL2SDK.g_loadedClasses += [("UWiringMesh", 3108, "UStaticMesh")]
BL2SDK.g_loadedClasses += [("UActionResource", 3110, "UObject")]
BL2SDK.g_loadedClasses += [("UActionSequence", 3112, "UObject")]
BL2SDK.g_loadedClasses += [("UActionSequenceList", 3114, "UActionSequence")]
BL2SDK.g_loadedClasses += [("UActionSequencePawn", 3116, "UActionSequence")]
BL2SDK.g_loadedClasses += [("UAction_PawnMovementBase", 3118, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [("UActionSequenceRandom", 3120, "UActionSequence")]
BL2SDK.g_loadedClasses += [("UAIComponent", 3122, "UActorComponent")]
BL2SDK.g_loadedClasses += [("UAICostExpressionEvaluator", 3124, "UExpressionEvaluator")]
BL2SDK.g_loadedClasses += [("UAIFactoryBase", 3126, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxAIFactory", 3128, "UAIFactoryBase")]
BL2SDK.g_loadedClasses += [("UAIResource", 3130, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [
    ("UAIResourceExpressionEvaluator", 3132, "UExpressionEvaluator")
]
BL2SDK.g_loadedClasses += [
    ("UAllegianceExpressionEvaluator", 3134, "UExpressionEvaluator")
]
BL2SDK.g_loadedClasses += [
    ("UAwarenessZoneCollectionDefinition", 3136, "UGBXDefinition")
]
BL2SDK.g_loadedClasses += [("UAwarenessZoneDefinition", 3138, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UBehavior_SendGbxMessage", 3140, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_SetFlag", 3142, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UBestTargetAttributeContextResolver", 3144, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [("UCharacterClassMessageDefinition", 3146, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UCoverSearchCriteria", 3148, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UExposureUtilityBase", 3150, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UExposureUtilityBasicCaching", 3152, "UExposureUtilityBase")
]
BL2SDK.g_loadedClasses += [
    ("UExposureUtilityFixedCost", 3154, "UExposureUtilityBasicCaching")
]
BL2SDK.g_loadedClasses += [("UExposureUtilityStrategy", 3156, "UObject")]
BL2SDK.g_loadedClasses += [("UFiringBehaviorDefinition", 3158, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UFiringBehaviorManager", 3160, "UObject")]
BL2SDK.g_loadedClasses += [("UFiringCondition", 3162, "UObject")]
BL2SDK.g_loadedClasses += [("UFireCond_IsPlayerTarget", 3164, "UFiringCondition")]
BL2SDK.g_loadedClasses += [("UFiringPattern", 3166, "UObject")]
BL2SDK.g_loadedClasses += [("UFirePatt_Cone", 3168, "UFiringPattern")]
BL2SDK.g_loadedClasses += [("UFirePatt_ShrinkingCone", 3170, "UFiringPattern")]
BL2SDK.g_loadedClasses += [("UFirePatt_StrafeOver", 3172, "UFiringPattern")]
BL2SDK.g_loadedClasses += [("UFiringZoneCollectionDefinition", 3174, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UFiringZoneDefinition", 3176, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UFlagDefinition", 3178, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UFlagExpressionEvaluator", 3180, "UExpressionEvaluator")]
BL2SDK.g_loadedClasses += [("UFlagValueResolver", 3182, "UObject")]
BL2SDK.g_loadedClasses += [("UMultipleFlagValueResolver", 3184, "UFlagValueResolver")]
BL2SDK.g_loadedClasses += [
    ("UObjectFunctionFlagValueResolver", 3186, "UFlagValueResolver")
]
BL2SDK.g_loadedClasses += [
    ("UObjectPropertyFlagValueResolver", 3188, "UFlagValueResolver")
]
BL2SDK.g_loadedClasses += [("URuleEngineFlagValueResolver", 3190, "UFlagValueResolver")]
BL2SDK.g_loadedClasses += [("UGbxMessage", 3192, "UObject")]
BL2SDK.g_loadedClasses += [("UGbxMessageDefinition", 3194, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGbxMessageManager", 3196, "UObject")]
BL2SDK.g_loadedClasses += [("AGearboxMind", 3198, "AGearboxAIController")]
BL2SDK.g_loadedClasses += [
    ("UGearboxAIMoveNodeRenderComponent", 3200, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [("UGearboxCoverStateManager", 3202, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UGearboxMindAttributeContextResolver", 3204, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [("UGearboxNavigationHandle", 3206, "UNavigationHandle")]
BL2SDK.g_loadedClasses += [("UIFlagProvider", 3208, "UInterface")]
BL2SDK.g_loadedClasses += [("UIFlagProviderGroup", 3210, "UInterface")]
BL2SDK.g_loadedClasses += [("UIGbxMessageListener", 3212, "UInterface")]
BL2SDK.g_loadedClasses += [("UIRuleEngineOwner", 3214, "UInterface")]
BL2SDK.g_loadedClasses += [("UKnowledgeRecord", 3216, "UObject")]
BL2SDK.g_loadedClasses += [("ULocationFilter", 3218, "UObject")]
BL2SDK.g_loadedClasses += [("ULocationFilter_MustHaveLOS", 3220, "ULocationFilter")]
BL2SDK.g_loadedClasses += [("ULocationFilter_MustNotHaveLOS", 3222, "ULocationFilter")]
BL2SDK.g_loadedClasses += [("UMindTargetInfo", 3224, "UObject")]
BL2SDK.g_loadedClasses += [("URule", 3226, "UObject")]
BL2SDK.g_loadedClasses += [("URuleContainer", 3228, "URule")]
BL2SDK.g_loadedClasses += [("URulePlaceholder", 3230, "URule")]
BL2SDK.g_loadedClasses += [("URuleEngine", 3232, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxRuleEngine", 3234, "URuleEngine")]
BL2SDK.g_loadedClasses += [("URuleEventDef", 3236, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("URuleSet", 3238, "UObject")]
BL2SDK.g_loadedClasses += [("UStateRuleSet", 3240, "URuleSet")]
BL2SDK.g_loadedClasses += [("USearchDirection", 3242, "UObject")]
BL2SDK.g_loadedClasses += [("USearchDirection_Any", 3244, "USearchDirection")]
BL2SDK.g_loadedClasses += [("USearchDirection_AwayFromMe", 3246, "USearchDirection")]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_AwayFromTarget", 3248, "USearchDirection")
]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_MyFacingDirection", 3250, "USearchDirection")
]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_OppositeMyFacingDirection", 3252, "USearchDirection")
]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_OppositeTargetsFacingDirection", 3254, "USearchDirection")
]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_RandomLeftOrRight", 3256, "USearchDirection")
]
BL2SDK.g_loadedClasses += [
    ("USearchDirection_TargetsFacingDirection", 3258, "USearchDirection")
]
BL2SDK.g_loadedClasses += [("USearchDirection_ToMyLeft", 3260, "USearchDirection")]
BL2SDK.g_loadedClasses += [("USearchDirection_ToMyRight", 3262, "USearchDirection")]
BL2SDK.g_loadedClasses += [("USearchDirection_TowardMe", 3264, "USearchDirection")]
BL2SDK.g_loadedClasses += [("USearchDirection_TowardTarget", 3266, "USearchDirection")]
BL2SDK.g_loadedClasses += [("USearchOrigin", 3268, "UObject")]
BL2SDK.g_loadedClasses += [("USearchOrigin_CurrentLocation", 3270, "USearchOrigin")]
BL2SDK.g_loadedClasses += [("USearchOrigin_ScriptedMoveTarget", 3272, "USearchOrigin")]
BL2SDK.g_loadedClasses += [("USearchOrigin_TargetLocation", 3274, "USearchOrigin")]
BL2SDK.g_loadedClasses += [("USnapshotRecord", 3276, "USnapshotInterface")]
BL2SDK.g_loadedClasses += [("UGearboxPawnSnapshotRecord", 3278, "USnapshotRecord")]
BL2SDK.g_loadedClasses += [("UTargetingDefinition", 3280, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UTargetIterator", 3282, "UObject")]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorCalculateDistance", 3284, "UTargetIterator")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorCalculateExposure", 3286, "UTargetIterator")
]
BL2SDK.g_loadedClasses += [("UTargetIteratorCheckAwareness", 3288, "UTargetIterator")]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorCheckRemoveTarget", 3290, "UTargetIterator")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorForgetAboutTarget", 3292, "UTargetIterator")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeTargetsIAmExposedTo", 3294, "UTargetIterator")
]
BL2SDK.g_loadedClasses += [("UTI_Calc", 3296, "UTargetIterator")]
BL2SDK.g_loadedClasses += [("UTI_Prioritize", 3298, "UTargetIterator")]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeExposedTargets", 3300, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeHumanTargets", 3302, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeNearbyTarget", 3304, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizePreviousTarget", 3306, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeTargetNotBeingShotAt", 3308, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [
    ("UTargetIteratorPrioritizeTargetWhoShootsAtMe", 3310, "UTI_Prioritize")
]
BL2SDK.g_loadedClasses += [("UTI_PrioritizeBonus", 3312, "UTI_Prioritize")]
BL2SDK.g_loadedClasses += [("UTI_PrioritizeConditional", 3314, "UTI_Prioritize")]
BL2SDK.g_loadedClasses += [
    ("UGearboxSeqAct_PopulationOpportunityLink", 3316, "USeqAct_Latent")
]
BL2SDK.g_loadedClasses += [("UIPopulationSpawnPoint", 3318, "UInterface")]
BL2SDK.g_loadedClasses += [("UPopulationDefinition", 3320, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UPopulationFactory", 3322, "UObject")]
BL2SDK.g_loadedClasses += [("UPopulationFactoryGeneric", 3324, "UPopulationFactory")]
BL2SDK.g_loadedClasses += [
    ("UPopulationFactoryPopulationDefinition", 3326, "UPopulationFactory")
]
BL2SDK.g_loadedClasses += [("UPopulationMaster", 3328, "UObject")]
BL2SDK.g_loadedClasses += [("APopulationOpportunity", 3330, "AInfo")]
BL2SDK.g_loadedClasses += [
    ("APopulationOpportunityArea", 3332, "APopulationOpportunity")
]
BL2SDK.g_loadedClasses += [
    ("APopulationOpportunityCloner", 3334, "APopulationOpportunity")
]
BL2SDK.g_loadedClasses += [
    ("APopulationOpportunityCombat", 3336, "APopulationOpportunity")
]
BL2SDK.g_loadedClasses += [
    ("APopulationOpportunityPoint", 3338, "APopulationOpportunity")
]
BL2SDK.g_loadedClasses += [
    ("UPopulationOpportunityAreaRenderingComponent", 3340, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [
    (
        "UPopulationOpportunityAttributeContextResolver",
        3342,
        "UAttributeContextResolver",
    )
]
BL2SDK.g_loadedClasses += [
    ("UPopulationOpportunityPointRenderingComponent", 3344, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [("APopulationPoint", 3346, "AActor")]
BL2SDK.g_loadedClasses += [("APopulationPoint_Dynamic", 3348, "APopulationPoint")]
BL2SDK.g_loadedClasses += [
    ("UPopulationPointRenderingComponent", 3350, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [("USeqEvent_EncounterWaveComplete", 3352, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("USeqEvent_PopulatedActor", 3354, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("USeqEvent_PopulatedPoint", 3356, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("AGearboxHUD", 3358, "AHUD")]
BL2SDK.g_loadedClasses += [("UAIDefinition", 3360, "UObject")]
BL2SDK.g_loadedClasses += [("UBehaviorEventFilterBase", 3362, "UObject")]
BL2SDK.g_loadedClasses += [("UBehaviorKernel", 3364, "UObject")]
BL2SDK.g_loadedClasses += [("UBehaviorProviderDefinition", 3366, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [
    ("UAIBehaviorProviderDefinition", 3368, "UBehaviorProviderDefinition")
]
BL2SDK.g_loadedClasses += [("UBehaviorSequenceCustomEnableCondition", 3370, "UObject")]
BL2SDK.g_loadedClasses += [
    (
        "UBehaviorSequenceEnableByMultipleConditions",
        3372,
        "UBehaviorSequenceCustomEnableCondition",
    )
]
BL2SDK.g_loadedClasses += [("UIBehaviorConsumer", 3374, "UInterface")]
BL2SDK.g_loadedClasses += [("UIBehaviorProvider", 3376, "UInterface")]
BL2SDK.g_loadedClasses += [("UICustomEvent", 3378, "UInterface")]
BL2SDK.g_loadedClasses += [("UITimerBehavior", 3380, "UInterface")]
BL2SDK.g_loadedClasses += [("UGearboxAnimDefinition", 3382, "USpecialMoveDefinition")]
BL2SDK.g_loadedClasses += [("UBehavior_TriggerDialogEvent", 3384, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("AGearboxDialogActor", 3386, "AActor")]
BL2SDK.g_loadedClasses += [("UGearboxDialogComponent", 3388, "UActorComponent")]
BL2SDK.g_loadedClasses += [("UGearboxDialogEventData", 3390, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxDialogEventTag", 3392, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGearboxDialogGlobalsDefinition", 3394, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGearboxDialogGroup", 3396, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxDialogTemplateGroup", 3398, "UGearboxDialogGroup")]
BL2SDK.g_loadedClasses += [("UGearboxDialogManager", 3400, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxDialogNameTag", 3402, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGearboxDialogPriority", 3404, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGearboxDialogNode", 3406, "UGearboxEditorNode")]
BL2SDK.g_loadedClasses += [("UGearboxDialogAction", 3408, "UGearboxDialogNode")]
BL2SDK.g_loadedClasses += [("UGearboxDialogAct_Chance", 3410, "UGearboxDialogAction")]
BL2SDK.g_loadedClasses += [("UGearboxDialogAct_Compare", 3412, "UGearboxDialogAction")]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogAct_ObjectParameterSwitch", 3414, "UGearboxDialogAction")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogNonTemplateAction", 3416, "UGearboxDialogAction")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogAct_Talk", 3418, "UGearboxDialogNonTemplateAction")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogTemplateAction", 3420, "UGearboxDialogAction")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogAct_Trigger", 3422, "UGearboxDialogTemplateAction")
]
BL2SDK.g_loadedClasses += [("UGearboxDialogEvent", 3424, "UGearboxDialogNode")]
BL2SDK.g_loadedClasses += [("UGearboxDialogTemplateEvent", 3426, "UGearboxDialogEvent")]
BL2SDK.g_loadedClasses += [("UGearboxDialogVariable", 3428, "UGearboxDialogNode")]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogVar_Instigator", 3430, "UGearboxDialogVariable")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogVar_LastTalker", 3432, "UGearboxDialogVariable")
]
BL2SDK.g_loadedClasses += [
    ("UGearboxDialogVar_NameTag", 3434, "UGearboxDialogVariable")
]
BL2SDK.g_loadedClasses += [("UGearboxDialogVar_Other", 3436, "UGearboxDialogVariable")]
BL2SDK.g_loadedClasses += [("UGearboxDialogVar_Random", 3438, "UGearboxDialogVariable")]
BL2SDK.g_loadedClasses += [("UGearboxSeqAct_ToggleDialog", 3440, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGearboxSeqAct_TriggerDialog", 3442, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [
    ("UGearboxSeqAct_TriggerDialogName", 3444, "UGearboxSeqAct_TriggerDialog")
]
BL2SDK.g_loadedClasses += [("UGearboxAccountActions", 3446, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxAccountData", 3448, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxProcess", 3450, "UObject")]
BL2SDK.g_loadedClasses += [("USparkInitializationProcess", 3452, "UGearboxProcess")]
BL2SDK.g_loadedClasses += [("ULeviathanService", 3454, "UObject")]
BL2SDK.g_loadedClasses += [("USparkInterface", 3456, "UInterface")]
BL2SDK.g_loadedClasses += [("USparkInterfaceImpl", 3458, "UObject")]
BL2SDK.g_loadedClasses += [("USparkServiceConfiguration", 3460, "UObject")]
BL2SDK.g_loadedClasses += [("USparkTypes", 3462, "UObject")]
BL2SDK.g_loadedClasses += [("UAction_ChangeRuleSet", 38895, "UActionSequence")]
BL2SDK.g_loadedClasses += [("URES_RuleSetChange", 38899, "UActionResource")]
BL2SDK.g_loadedClasses += [("UAction_FaceThreat", 38902, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [("URES_FacingPolicy", 38909, "UActionResource")]
BL2SDK.g_loadedClasses += [("UAction_MoveRandom", 38910, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [("UAction_MoveTo", 38912, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [("URES_Movement", 39140, "UActionResource")]
BL2SDK.g_loadedClasses += [("UAction_PopRuleSet", 39141, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [("UAction_PushRuleSet", 39144, "UActionSequencePawn")]
BL2SDK.g_loadedClasses += [
    ("UActorAttributeContextResolver", 39162, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [
    ("UAIComponentAttributeContextResolver", 39278, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [("UAIStateBase", 39597, "UGearboxEditorNode")]
BL2SDK.g_loadedClasses += [("UAIState", 39599, "UAIStateBase")]
BL2SDK.g_loadedClasses += [("UAIState_Priority", 39601, "UAIStateBase")]
BL2SDK.g_loadedClasses += [("UAIState_Random", 39603, "UAIStateBase")]
BL2SDK.g_loadedClasses += [("UAIState_Sequential", 39605, "UAIStateBase")]
BL2SDK.g_loadedClasses += [("UBehavior_AIHold", 39694, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_AIPriority", 39709, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_AITargeting", 39723, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UBehavior_ChangeAnyBehaviorSequenceState", 39746, "UBehaviorBase")
]
BL2SDK.g_loadedClasses += [
    ("UBehavior_ChangeLocalBehaviorSequenceState", 39762, "UBehaviorBase")
]
BL2SDK.g_loadedClasses += [("UBehavior_CompareBool", 39830, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_CompareValues", 39842, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_CustomEvent", 39855, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_Delay", 39869, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_Gate", 39879, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_GetFloatParam", 39891, "UParameterBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UBehavior_GetObjectParam", 39905, "UParameterBehaviorBase")
]
BL2SDK.g_loadedClasses += [
    ("UBehavior_GetVectorParam", 39919, "UParameterBehaviorBase")
]
BL2SDK.g_loadedClasses += [
    ("UBehavior_InterpolateFloatOverTime", 39938, "UBehaviorBase")
]
BL2SDK.g_loadedClasses += [("UBehavior_Metronome", 39969, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_ModifyTimer", 39984, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_SetFloatParam", 40110, "UParameterBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UBehavior_SetObjectParam", 40121, "UParameterBehaviorBase")
]
BL2SDK.g_loadedClasses += [
    ("UBehavior_SetVectorParam", 40132, "UParameterBehaviorBase")
]
BL2SDK.g_loadedClasses += [("UBehavior_SpecialMove", 40153, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_SpecialMoveStop", 40187, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_StartAkAmbientSound", 40201, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_StopAkAmbientSound", 40215, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_StopDialog", 40229, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [("UBehavior_ToggleDialog", 40243, "UBehaviorBase")]
BL2SDK.g_loadedClasses += [
    ("UCameraModifierCrossfade", 40602, "UGearboxCameraModifier")
]
BL2SDK.g_loadedClasses += [("UCameraModifierLookAt", 40644, "UGearboxCameraModifier")]
BL2SDK.g_loadedClasses += [("UDefinitionUITestCaseDefinition", 40758, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("USparkNews", 41097, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxAccountEntitlement", 41281, "UObject")]
BL2SDK.g_loadedClasses += [("UGearboxAccountOffer", 41298, "UObject")]
BL2SDK.g_loadedClasses += [("APatrolDestination", 41561, "AActor")]
BL2SDK.g_loadedClasses += [("UGearboxSeqAct_TargetPriority", 42592, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGearboxSeqAct_CameraShake", 43108, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGearboxSeqAct_PawnClonerLink", 43421, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [
    ("UGFxMovieDrawStyleInstanceData", 43594, "UGFxMovieDrawStyleRTT")
]
BL2SDK.g_loadedClasses += [("USeqEvent_AllSpawned", 43898, "USequenceEvent")]
BL2SDK.g_loadedClasses += [
    ("UPopulationMasterAttributeContextResolver", 44207, "UAttributeContextResolver")
]
BL2SDK.g_loadedClasses += [("USeqEvent_SinglePopulationDeath", 44385, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("URES_Rotation", 44538, "UActionResource")]
BL2SDK.g_loadedClasses += [("URES_SpecialMove", 44541, "UActionResource")]
BL2SDK.g_loadedClasses += [("USeqEvent_ArrivedAtMoveNode", 44619, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("USeqEvent_LeavingMoveNode", 44624, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("UShowDebugHelpers", 44641, "UObject")]
BL2SDK.g_loadedClasses += [
    ("ASkeletalMeshActorGBXMatinee", 44655, "ASkeletalMeshActor")
]
BL2SDK.g_loadedClasses += [("UGearboxEULAGFxMovie", 45051, "UGearboxGFxMovie")]
BL2SDK.g_loadedClasses += [("UGearboxEULAGFxObject", 45059, "UGFxObject")]
