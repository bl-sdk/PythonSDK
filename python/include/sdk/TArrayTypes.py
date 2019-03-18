###################################
# Borderlands 2 SDK
# File Contents: TArray definitions
###################################
from ctypes import *
import BL2SDK


class TArray_FInterpCurvePointVector2D(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointVector2D)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInterpCurvePointFloat(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointFloat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInterpCurvePointVector(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointVector)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_float(Structure):
    _fields_ = [("Data", POINTER(c_float)), ("Count", c_int), ("Max", c_int)]


class TArray_FInterpCurvePointLinearColor(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointLinearColor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInterpCurvePointQuat(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointQuat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInterpCurvePointTwoVectors(Structure):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointTwoVectors)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_int(Structure):
    _fields_ = [("Data", POINTER(c_int)), ("Count", c_int), ("Max", c_int)]


class TArray_FString(Structure):
    _fields_ = [("Data", POINTER(FString)), ("Count", c_int), ("Max", c_int)]


class TArray_FStaticMeshLODElement(Structure):
    _fields_ = [
        ("Data", POINTER(FStaticMeshLODElement)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FRigidBodyContactInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FRigidBodyContactInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FKeyValuePair(Structure):
    _fields_ = [("Data", POINTER(FKeyValuePair)), ("Count", c_int), ("Max", c_int)]


class TArray_FPlayerResponseLine(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerResponseLine)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FStringIdToStringMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FStringIdToStringMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FIdToStringMapping(Structure):
    _fields_ = [("Data", POINTER(FIdToStringMapping)), ("Count", c_int), ("Max", c_int)]


class TArray_FSettingsData(Structure):
    _fields_ = [("Data", POINTER(FSettingsData)), ("Count", c_int), ("Max", c_int)]


class TArray_FOnlineRegistrant(Structure):
    _fields_ = [("Data", POINTER(FOnlineRegistrant)), ("Count", c_int), ("Max", c_int)]


class TArray_FOnlineArbitrationRegistrant(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineArbitrationRegistrant)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSettingsProperty(Structure):
    _fields_ = [("Data", POINTER(FSettingsProperty)), ("Count", c_int), ("Max", c_int)]


class TArray_unsigned_char(Structure):
    _fields_ = [("Data", POINTER(c_ubyte)), ("Count", c_int), ("Max", c_int)]


class TArray_FAppIdLicenseInfo(Structure):
    _fields_ = [("Data", POINTER(FAppIdLicenseInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_FNamedOnlineContent(Structure):
    _fields_ = [
        ("Data", POINTER(FNamedOnlineContent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInstanceDataUnion(Structure):
    _fields_ = [("Data", POINTER(FInstanceDataUnion)), ("Count", c_int), ("Max", c_int)]


class TArray_FOnlineGameSearchParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineGameSearchParameter)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineGameSearchORClause(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineGameSearchORClause)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineGameSearchSortClause(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineGameSearchSortClause)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FUniqueNetId(Structure):
    _fields_ = [("Data", POINTER(FUniqueNetId)), ("Count", c_int), ("Max", c_int)]


class TArray_FDouble(Structure):
    _fields_ = [("Data", POINTER(FDouble)), ("Count", c_int), ("Max", c_int)]


class TArray_UTexturePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UTexture))), ("Count", c_int), ("Max", c_int)]


class TArray_FSeqOpOutputInputLink(Structure):
    _fields_ = [
        ("Data", POINTER(FSeqOpOutputInputLink)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USequenceVariablePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USequenceVariable))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USequenceEventPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USequenceEvent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_BOOL(Structure):
    _fields_ = [("Data", POINTER(c_bool)), ("Count", c_int), ("Max", c_int)]


class TArray_FGestaltLODModelFragment(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltLODModelFragment)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGestaltLODModel(Structure):
    _fields_ = [("Data", POINTER(FGestaltLODModel)), ("Count", c_int), ("Max", c_int)]


class TArray_FSocketRemapEntry(Structure):
    _fields_ = [("Data", POINTER(FSocketRemapEntry)), ("Count", c_int), ("Max", c_int)]


class TArray_FGestaltAccessoryEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInputEntry(Structure):
    _fields_ = [("Data", POINTER(FInputEntry)), ("Count", c_int), ("Max", c_int)]


class TArray_FVector(Structure):
    _fields_ = [("Data", POINTER(FVector)), ("Count", c_int), ("Max", c_int)]


class TArray_FPlane(Structure):
    _fields_ = [("Data", POINTER(FPlane)), ("Count", c_int), ("Max", c_int)]


class TArray_FKSphereElem(Structure):
    _fields_ = [("Data", POINTER(FKSphereElem)), ("Count", c_int), ("Max", c_int)]


class TArray_FKBoxElem(Structure):
    _fields_ = [("Data", POINTER(FKBoxElem)), ("Count", c_int), ("Max", c_int)]


class TArray_FKSphylElem(Structure):
    _fields_ = [("Data", POINTER(FKSphylElem)), ("Count", c_int), ("Max", c_int)]


class TArray_FKConvexElem(Structure):
    _fields_ = [("Data", POINTER(FKConvexElem)), ("Count", c_int), ("Max", c_int)]


class TArray_FQuat(Structure):
    _fields_ = [("Data", POINTER(FQuat)), ("Count", c_int), ("Max", c_int)]


class TArray_FTimeModifier(Structure):
    _fields_ = [("Data", POINTER(FTimeModifier)), ("Count", c_int), ("Max", c_int)]


class TArray_FBranchInfo(Structure):
    _fields_ = [("Data", POINTER(FBranchInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_FWeightRule(Structure):
    _fields_ = [("Data", POINTER(FWeightRule)), ("Count", c_int), ("Max", c_int)]


class TArray_FAimComponent(Structure):
    _fields_ = [("Data", POINTER(FAimComponent)), ("Count", c_int), ("Max", c_int)]


class TArray_FBoneAtom(Structure):
    _fields_ = [("Data", POINTER(FBoneAtom)), ("Count", c_int), ("Max", c_int)]


class TArray_UAnimNodeSequencePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAnimNodeSequence))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSubtitleCue(Structure):
    _fields_ = [("Data", POINTER(FSubtitleCue)), ("Count", c_int), ("Max", c_int)]


class TArray_UMorphTargetSetPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMorphTargetSet))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UAnimSetPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAnimSet))), ("Count", c_int), ("Max", c_int)]


class TArray_FNxDestructibleDepthParameters(Structure):
    _fields_ = [
        ("Data", POINTER(FNxDestructibleDepthParameters)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAttributeExpressionData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeExpressionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FConditionalValueExpression(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalValueExpression)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorParameterUnion(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorParameterUnion)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UBehaviorBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBehaviorBase))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UShadowMap2DPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UShadowMap2D))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UObjectPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UObject))), ("Count", c_int), ("Max", c_int)]


class TArray_USequenceOpPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USequenceOp))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPointer(Structure):
    _fields_ = [("Data", POINTER(FPointer)), ("Count", c_int), ("Max", c_int)]


class TArray_FFireLink(Structure):
    _fields_ = [("Data", POINTER(FFireLink)), ("Count", c_int), ("Max", c_int)]


class TArray_FSlotMoveRef(Structure):
    _fields_ = [("Data", POINTER(FSlotMoveRef)), ("Count", c_int), ("Max", c_int)]


class TArray_FCoverInfo(Structure):
    _fields_ = [("Data", POINTER(FCoverInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_FManualCoverTypeInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FManualCoverTypeInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UUIDataStorePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIDataStore))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FStatColorMapEntry(Structure):
    _fields_ = [("Data", POINTER(FStatColorMapEntry)), ("Count", c_int), ("Max", c_int)]


class TArray_FPrimitiveMaterialRef(Structure):
    _fields_ = [
        ("Data", POINTER(FPrimitiveMaterialRef)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPostProcessMaterialRef(Structure):
    _fields_ = [
        ("Data", POINTER(FPostProcessMaterialRef)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPerPlayerSplitscreenData(Structure):
    _fields_ = [
        ("Data", POINTER(FPerPlayerSplitscreenData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGBXNavmeshCrossLevelConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FGBXNavmeshCrossLevelConnection)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGBXNavMeshSpecialMove(Structure):
    _fields_ = [
        ("Data", POINTER(FGBXNavMeshSpecialMove)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGBXNavMeshLookupCell(Structure):
    _fields_ = [
        ("Data", POINTER(FGBXNavMeshLookupCell)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FIGBXNavMeshObstaclePointer(Structure):
    _fields_ = [
        ("Data", POINTER(FIGBXNavMeshObstaclePointer)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGBXNavMeshPathPoint(Structure):
    _fields_ = [
        ("Data", POINTER(FGBXNavMeshPathPoint)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FEdgePointer(Structure):
    _fields_ = [("Data", POINTER(FEdgePointer)), ("Count", c_int), ("Max", c_int)]


class TArray_FGestaltAccessoryPartEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryPartEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGestaltAccessoryGroupEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryGroupEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FHybridNavVisualizationVert(Structure):
    _fields_ = [
        ("Data", POINTER(FHybridNavVisualizationVert)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBodyInstanceDataUnion(Structure):
    _fields_ = [
        ("Data", POINTER(FBodyInstanceDataUnion)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCurveEdEntry(Structure):
    _fields_ = [("Data", POINTER(FCurveEdEntry)), ("Count", c_int), ("Max", c_int)]


class TArray_UMaterialInstanceConstantPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMaterialInstanceConstant))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInterpLookupPoint(Structure):
    _fields_ = [("Data", POINTER(FInterpLookupPoint)), ("Count", c_int), ("Max", c_int)]


class TArray_UMaterialInterfacePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMaterialInterface))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UMorphNodeBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMorphNodeBase))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UUIDataProviderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIDataProvider))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineStatsColumn(Structure):
    _fields_ = [("Data", POINTER(FOnlineStatsColumn)), ("Count", c_int), ("Max", c_int)]


class TArray_UParticleModuleEventSendToGamePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleModuleEventSendToGame))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FParticleEmitterReplayFrame(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEmitterReplayFrame)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FKCachedConvexDataElement(Structure):
    _fields_ = [
        ("Data", POINTER(FKCachedConvexDataElement)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTriangleSortSettings(Structure):
    _fields_ = [
        ("Data", POINTER(FTriangleSortSettings)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FRecognisableWord(Structure):
    _fields_ = [("Data", POINTER(FRecognisableWord)), ("Count", c_int), ("Max", c_int)]


class TArray_FScriptInterface(Structure):
    _fields_ = [("Data", POINTER(FScriptInterface)), ("Count", c_int), ("Max", c_int)]


class TArray_FTerrainDecorationInstance(Structure):
    _fields_ = [
        ("Data", POINTER(FTerrainDecorationInstance)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTerrainDecoration(Structure):
    _fields_ = [("Data", POINTER(FTerrainDecoration)), ("Count", c_int), ("Max", c_int)]


class TArray_UUIDataProvider_SettingsPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIDataProvider_Settings))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UAkComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAkComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AActorPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(AActor))), ("Count", c_int), ("Max", c_int)]


class TArray_USequenceObjectPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USequenceObject))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FImpactInfo(Structure):
    _fields_ = [("Data", POINTER(FImpactInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_ANavigationPointPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ANavigationPoint))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UReachSpecPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UReachSpec))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USequencePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(USequence))), ("Count", c_int), ("Max", c_int)]


class TArray_FOnlineContent(Structure):
    _fields_ = [("Data", POINTER(FOnlineContent)), ("Count", c_int), ("Max", c_int)]


class TArray_FCompatibilityOnlineContent(Structure):
    _fields_ = [
        ("Data", POINTER(FCompatibilityOnlineContent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_APlayerControllerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APlayerController))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRotator(Structure):
    _fields_ = [("Pitch", c_int), ("Yaw", c_int), ("Roll", c_int)]


class TArray_FRotator(Structure):
    _fields_ = [("Data", POINTER(FRotator)), ("Count", c_int), ("Max", c_int)]


class TArray_FCanvasUVTri(Structure):
    _fields_ = [("Data", POINTER(FCanvasUVTri)), ("Count", c_int), ("Max", c_int)]


class TArray_FOnlinePlayerScore(Structure):
    _fields_ = [("Data", POINTER(FOnlinePlayerScore)), ("Count", c_int), ("Max", c_int)]


class TArray_ATriggerPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ATrigger))), ("Count", c_int), ("Max", c_int)]


class TArray_UClassPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UClass))), ("Count", c_int), ("Max", c_int)]


class TArray_ULocalPlayerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULocalPlayer))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UAnimNodePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAnimNode))), ("Count", c_int), ("Max", c_int)]


class TArray_FInfoBarData(Structure):
    _fields_ = [("Data", POINTER(FInfoBarData)), ("Count", c_int), ("Max", c_int)]


class TArray_FLocalizedStringSetting(Structure):
    _fields_ = [
        ("Data", POINTER(FLocalizedStringSetting)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBiasedGoalActor(Structure):
    _fields_ = [("Data", POINTER(FBiasedGoalActor)), ("Count", c_int), ("Max", c_int)]


class TArray_FAnimSlotInfo(Structure):
    _fields_ = [("Data", POINTER(FAnimSlotInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_AVolumePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(AVolume))), ("Count", c_int), ("Max", c_int)]


class TArray_UInterpDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInterpData))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FScriptDelegate(Structure):
    _fields_ = [("Data", POINTER(FScriptDelegate)), ("Count", c_int), ("Max", c_int)]


class TArray_FUIDataProviderField(Structure):
    _fields_ = [
        ("Data", POINTER(FUIDataProviderField)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UUIResourceCombinationProviderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIResourceCombinationProvider))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UUIResourceDataProviderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIResourceDataProvider))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UUIDataProvider_MenuItemPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIDataProvider_MenuItem))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBonePair(Structure):
    _fields_ = [("Data", POINTER(FBonePair)), ("Count", c_int), ("Max", c_int)]


class TArray_ASplineActorPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ASplineActor))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAppliedAttributeEffect(Structure):
    _fields_ = [
        ("Data", POINTER(FAppliedAttributeEffect)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAttributeEffectData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeEffectData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FConditionalSoundData(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalSoundData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UPrimitiveComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPrimitiveComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USkeletalMeshPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkeletalMesh))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlinePartyMember(Structure):
    _fields_ = [("Data", POINTER(FOnlinePartyMember)), ("Count", c_int), ("Max", c_int)]


class TArray_FSpeechRecognizedWord(Structure):
    _fields_ = [
        ("Data", POINTER(FSpeechRecognizedWord)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMarketplaceContent(Structure):
    _fields_ = [
        ("Data", POINTER(FMarketplaceContent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineCrossTitleContent(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineCrossTitleContent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAchievementDetails(Structure):
    _fields_ = [
        ("Data", POINTER(FAchievementDetails)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineFriendMessage(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineFriendMessage)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FOnlineFriend(Structure):
    _fields_ = [("Data", POINTER(FOnlineFriend)), ("Count", c_int), ("Max", c_int)]


class TArray_FFriendsQuery(Structure):
    _fields_ = [("Data", POINTER(FFriendsQuery)), ("Count", c_int), ("Max", c_int)]


class TArray_FCommunityContentFile(Structure):
    _fields_ = [
        ("Data", POINTER(FCommunityContentFile)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCurrentPlayerMet(Structure):
    _fields_ = [("Data", POINTER(FCurrentPlayerMet)), ("Count", c_int), ("Max", c_int)]


class TArray_FGameEvents(Structure):
    _fields_ = [("Data", POINTER(FGameEvents)), ("Count", c_int), ("Max", c_int)]


class TArray_FASValue(Structure):
    _fields_ = [("Data", POINTER(FASValue)), ("Count", c_int), ("Max", c_int)]


class TArray_UGFxObjectPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxObject))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UExpressionEvaluatorPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UExpressionEvaluator))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCoverDebugScoringInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FCoverDebugScoringInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FObjectKey(Structure):
    _fields_ = [("Data", POINTER(FObjectKey)), ("Count", c_int), ("Max", c_int)]


class TArray_FBehaviorVariableLinkData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorActionLinkData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorActionLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorOutputLinkData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorOutputLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorEventData(Structure):
    _fields_ = [("Data", POINTER(FBehaviorEventData)), ("Count", c_int), ("Max", c_int)]


class TArray_FBehaviorEventData2(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorEventData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorSequenceActionData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorSequenceActionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorSequenceActionData2(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorSequenceActionData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorVariableData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorOutputLinkData2(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorOutputLinkData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorVariableLinkData2(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableLinkData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGearboxEditorNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxEditorNode))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FVantageSpot(Structure):
    _fields_ = [("Data", POINTER(FVantageSpot)), ("Count", c_int), ("Max", c_int)]


class TArray_FExposureUpdateStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FExposureUpdateStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UFiringConditionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFiringCondition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FFlagEvalConditional(Structure):
    _fields_ = [
        ("Data", POINTER(FFlagEvalConditional)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FEntitlementResult(Structure):
    _fields_ = [("Data", POINTER(FEntitlementResult)), ("Count", c_int), ("Max", c_int)]


class TArray_FOfferResult(Structure):
    _fields_ = [("Data", POINTER(FOfferResult)), ("Count", c_int), ("Max", c_int)]


class TArray_FServiceParameterResult(Structure):
    _fields_ = [
        ("Data", POINTER(FServiceParameterResult)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FServiceResult(Structure):
    _fields_ = [("Data", POINTER(FServiceResult)), ("Count", c_int), ("Max", c_int)]


class TArray_FGearboxDialogData(Structure):
    _fields_ = [("Data", POINTER(FGearboxDialogData)), ("Count", c_int), ("Max", c_int)]


class TArray_UAttributeModifierPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttributeModifier))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCoverDebugScoringData(Structure):
    _fields_ = [
        ("Data", POINTER(FCoverDebugScoringData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTargetPriorityInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FTargetPriorityInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGestaltPart(Structure):
    _fields_ = [("Data", POINTER(FGestaltPart)), ("Count", c_int), ("Max", c_int)]


class TArray_UGearboxGFxMoviePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxGFxMovie))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UPopulationSpawnedActorTagDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationSpawnedActorTagDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_APopulationOpportunityPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationOpportunity))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FEncounterLimitData(Structure):
    _fields_ = [
        ("Data", POINTER(FEncounterLimitData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSpawnedPopulationActor(Structure):
    _fields_ = [
        ("Data", POINTER(FSpawnedPopulationActor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FRemovedPopulationActor(Structure):
    _fields_ = [
        ("Data", POINTER(FRemovedPopulationActor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FEncounterWaveTracker(Structure):
    _fields_ = [
        ("Data", POINTER(FEncounterWaveTracker)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPopulationOptionAreaPopDefData(Structure):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionAreaPopDefData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPopulationOptionSpawnDefData(Structure):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionSpawnDefData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FDebugStringData(Structure):
    _fields_ = [("Data", POINTER(FDebugStringData)), ("Count", c_int), ("Max", c_int)]


class TArray_AGearboxAIMoveNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxAIMoveNode))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGearboxDialogGroupPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogGroup))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FEULAData(Structure):
    _fields_ = [("Data", POINTER(FEULAData)), ("Count", c_int), ("Max", c_int)]


class TArray_FGestaltPartPermutation(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltPartPermutation)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSMBehavior(Structure):
    _fields_ = [("Data", POINTER(FSMBehavior)), ("Count", c_int), ("Max", c_int)]


class TArray_URulePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(URule))), ("Count", c_int), ("Max", c_int)]


class TArray_UKnowledgeRecordPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UKnowledgeRecord))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FFlagDefinitionInitialization(Structure):
    _fields_ = [
        ("Data", POINTER(FFlagDefinitionInitialization)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AGearboxPawnPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxPawn))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UPopulationFactoryPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationFactory))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UBehaviorProviderDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBehaviorProviderDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBehaviorVariableValue(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGearboxAccountOfferPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountOffer))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGearboxAccountEntitlementPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountEntitlement))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UJsonObjectPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UJsonObject))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FConnectionBandwidthStats(Structure):
    _fields_ = [
        ("Data", POINTER(FConnectionBandwidthStats)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FConfiguredGameSetting(Structure):
    _fields_ = [
        ("Data", POINTER(FConfiguredGameSetting)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInventorySwap(Structure):
    _fields_ = [("Data", POINTER(FInventorySwap)), ("Count", c_int), ("Max", c_int)]


class TArray_FPlayerReservation(Structure):
    _fields_ = [("Data", POINTER(FPlayerReservation)), ("Count", c_int), ("Max", c_int)]


class TArray_FPlayerMember(Structure):
    _fields_ = [("Data", POINTER(FPlayerMember)), ("Count", c_int), ("Max", c_int)]


class TArray_FEnvironmentalEffectInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FEnvironmentalEffectInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPlayerStat(Structure):
    _fields_ = [("Data", POINTER(FPlayerStat)), ("Count", c_int), ("Max", c_int)]


class TArray_FSteamPlayerClanData(Structure):
    _fields_ = [
        ("Data", POINTER(FSteamPlayerClanData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USpecialMove_CringePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMove_Cringe))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UParticleSystemComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleSystemComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAttributeBaseValueData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeBaseValueData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAITransformedName(Structure):
    _fields_ = [("Data", POINTER(FAITransformedName)), ("Count", c_int), ("Max", c_int)]


class TArray_UItemPoolListDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UItemPoolListDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FItemPoolInfo(Structure):
    _fields_ = [("Data", POINTER(FItemPoolInfo)), ("Count", c_int), ("Max", c_int)]


class TArray_FCardInfoRelativeToPanel(Structure):
    _fields_ = [
        ("Data", POINTER(FCardInfoRelativeToPanel)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UMissionObjectiveSetDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMissionObjectiveSetDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FAttributeScalarParam(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeScalarParam)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FScreenParticleModifier(Structure):
    _fields_ = [
        ("Data", POINTER(FScreenParticleModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FScreenParticleScalarParamOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FScreenParticleScalarParamOverTime)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FScreenParticleVectorParamOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FScreenParticleVectorParamOverTime)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMaterialEffectModifier(Structure):
    _fields_ = [
        ("Data", POINTER(FMaterialEffectModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FParticleSysParam(Structure):
    _fields_ = [("Data", POINTER(FParticleSysParam)), ("Count", c_int), ("Max", c_int)]


class TArray_FFontParameterValue(Structure):
    _fields_ = [
        ("Data", POINTER(FFontParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FScalarParameterValue(Structure):
    _fields_ = [
        ("Data", POINTER(FScalarParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTextureParameterValue(Structure):
    _fields_ = [
        ("Data", POINTER(FTextureParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FVectorParameterValue(Structure):
    _fields_ = [
        ("Data", POINTER(FVectorParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FRtpcParameterValue(Structure):
    _fields_ = [
        ("Data", POINTER(FRtpcParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UBodyHitRegionDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBodyHitRegionDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSocketEmitter(Structure):
    _fields_ = [("Data", POINTER(FSocketEmitter)), ("Count", c_int), ("Max", c_int)]


class TArray_FConditionalAnimData(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalAnimData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBodyWeaponActionData(Structure):
    _fields_ = [
        ("Data", POINTER(FBodyWeaponActionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGoreTriggerData(Structure):
    _fields_ = [("Data", POINTER(FGoreTriggerData)), ("Count", c_int), ("Max", c_int)]


class TArray_UWillowAnimNode_SimplePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWillowAnimNode_Simple))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSkillDamagedEventConstraintData(Structure):
    _fields_ = [
        ("Data", POINTER(FSkillDamagedEventConstraintData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USkillDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkillDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USkillExpressionEvaluatorDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkillExpressionEvaluatorDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBonusAttributeModifierUpgrade(Structure):
    _fields_ = [
        ("Data", POINTER(FBonusAttributeModifierUpgrade)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UMissionDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMissionDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGameBalanceDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGameBalanceDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPendingMissionRewardData(Structure):
    _fields_ = [
        ("Data", POINTER(FPendingMissionRewardData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMissionStatusPlayerData(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionStatusPlayerData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FUnloadableDlcMissionStatusData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcMissionStatusData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FUnloadableDlcPendingRewardData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcPendingRewardData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UWillowSkelControl_TurretConstrainedPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWillowSkelControl_TurretConstrained))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTimePosition(Structure):
    _fields_ = [("Data", POINTER(FTimePosition)), ("Count", c_int), ("Max", c_int)]


class TArray_USpecialMove_VehiclePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMove_Vehicle))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UChallengeConditionDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UChallengeConditionDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UDamageTypeDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDamageTypeDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInventoryGameStageGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FInventoryGameStageGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FManufacturerCustomGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FManufacturerCustomGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FItemPartGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FItemPartGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCoordinatedScalarParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedScalarParameter)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCoordinatedVectorParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedVectorParameter)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FLootAttachmentData(Structure):
    _fields_ = [
        ("Data", POINTER(FLootAttachmentData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UInteractiveObjectLootListDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInteractiveObjectLootListDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FLootConfigurationData(Structure):
    _fields_ = [
        ("Data", POINTER(FLootConfigurationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FColiseumStat(Structure):
    _fields_ = [("Data", POINTER(FColiseumStat)), ("Count", c_int), ("Max", c_int)]


class TArray_UWaypointComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWaypointComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMissionStateBalanceAdjustment(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionStateBalanceAdjustment)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UInputActionDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInputActionDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UItemPoolDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UItemPoolDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UInventoryBalanceDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInventoryBalanceDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPartGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FPartGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FRelevanceUpdateStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FRelevanceUpdateStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AWillowPlayerControllerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowPlayerController))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FWeaponMemento(Structure):
    _fields_ = [("Data", POINTER(FWeaponMemento)), ("Count", c_int), ("Max", c_int)]


class TArray_FItemMemento(Structure):
    _fields_ = [("Data", POINTER(FItemMemento)), ("Count", c_int), ("Max", c_int)]


class TArray_FDamageTypeBySpeedStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FDamageTypeBySpeedStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FBoneRotateData(Structure):
    _fields_ = [("Data", POINTER(FBoneRotateData)), ("Count", c_int), ("Max", c_int)]


class TArray_FAnimDeltaDataList(Structure):
    _fields_ = [("Data", POINTER(FAnimDeltaDataList)), ("Count", c_int), ("Max", c_int)]


class TArray_FAnimSwapData(Structure):
    _fields_ = [("Data", POINTER(FAnimSwapData)), ("Count", c_int), ("Max", c_int)]


class TArray_FCoordinatedEffectThread(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedEffectThread)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FColumnLayoutData(Structure):
    _fields_ = [("Data", POINTER(FColumnLayoutData)), ("Count", c_int), ("Max", c_int)]


class TArray_FDialogBoxButton(Structure):
    _fields_ = [("Data", POINTER(FDialogBoxButton)), ("Count", c_int), ("Max", c_int)]


class TArray_FCriticalTextMessage(Structure):
    _fields_ = [
        ("Data", POINTER(FCriticalTextMessage)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInputDeviceButtonAddress(Structure):
    _fields_ = [
        ("Data", POINTER(FInputDeviceButtonAddress)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FVehicleSpawnStationPooledVehicle(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleSpawnStationPooledVehicle)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSpawnAnimPair(Structure):
    _fields_ = [("Data", POINTER(FSpawnAnimPair)), ("Count", c_int), ("Max", c_int)]


class TArray_FColumnData(Structure):
    _fields_ = [("Data", POINTER(FColumnData)), ("Count", c_int), ("Max", c_int)]


class TArray_FGearBuilderWeightedInventoryPart(Structure):
    _fields_ = [
        ("Data", POINTER(FGearBuilderWeightedInventoryPart)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGearBuilderWeightedWeaponPart(Structure):
    _fields_ = [
        ("Data", POINTER(FGearBuilderWeightedWeaponPart)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGearBuilderCustomizationData(Structure):
    _fields_ = [
        ("Data", POINTER(FGearBuilderCustomizationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTempWeaponStruct(Structure):
    _fields_ = [("Data", POINTER(FTempWeaponStruct)), ("Count", c_int), ("Max", c_int)]


class TArray_FLevelBasedStatusEffectChanceScale(Structure):
    _fields_ = [
        ("Data", POINTER(FLevelBasedStatusEffectChanceScale)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FLevelBasedDamageScale(Structure):
    _fields_ = [
        ("Data", POINTER(FLevelBasedDamageScale)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UAIPawnBalanceModifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAIPawnBalanceModifierDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UCustomizationDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UCustomizationDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UGearboxAnimDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAnimDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FModifierValuePresentationData(Structure):
    _fields_ = [
        ("Data", POINTER(FModifierValuePresentationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTopStatData(Structure):
    _fields_ = [("Data", POINTER(FTopStatData)), ("Count", c_int), ("Max", c_int)]


class TArray_FSpawnedDroppedLootData(Structure):
    _fields_ = [
        ("Data", POINTER(FSpawnedDroppedLootData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSpawnedAttachedLootData(Structure):
    _fields_ = [
        ("Data", POINTER(FSpawnedAttachedLootData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMissionDirectorData(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionDirectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UClassModDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UClassModDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FShopItemData(Structure):
    _fields_ = [("Data", POINTER(FShopItemData)), ("Count", c_int), ("Max", c_int)]


class TArray_AWillowWeaponPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowWeapon))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AWillowItemPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowItem))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AWillowInventoryPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowInventory))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMissionRewardPresentationData(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionRewardPresentationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UMissionObjectiveWaypointComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMissionObjectiveWaypointComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UMissionObjectiveDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMissionObjectiveDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FGoldenKeySource(Structure):
    _fields_ = [("Data", POINTER(FGoldenKeySource)), ("Count", c_int), ("Max", c_int)]


class TArray_UKeyedItemPoolDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UKeyedItemPoolDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UChallengeDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UChallengeDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_APawnPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(APawn))), ("Count", c_int), ("Max", c_int)]


class TArray_AWillowPickupPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowPickup))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FMissionRewardData(Structure):
    _fields_ = [("Data", POINTER(FMissionRewardData)), ("Count", c_int), ("Max", c_int)]


class TArray_FWeaponSaveGameData(Structure):
    _fields_ = [
        ("Data", POINTER(FWeaponSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FInventorySaveGameData(Structure):
    _fields_ = [
        ("Data", POINTER(FInventorySaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FStatusMenuMissionEligibilityData(Structure):
    _fields_ = [
        ("Data", POINTER(FStatusMenuMissionEligibilityData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSlaughterMissionChain(Structure):
    _fields_ = [
        ("Data", POINTER(FSlaughterMissionChain)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_USkeletalMeshComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkeletalMeshComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UActorComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UActorComponent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_AWillowPawnPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowPawn))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FActiveStatusEffect(Structure):
    _fields_ = [
        ("Data", POINTER(FActiveStatusEffect)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UStatusEffectDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UStatusEffectDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FCurrencyPresentation(Structure):
    _fields_ = [
        ("Data", POINTER(FCurrencyPresentation)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UPlayerNameIdentifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPlayerNameIdentifierDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UItemNamePartDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UItemNamePartDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UStanceTypeDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UStanceTypeDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPlayerSaveData(Structure):
    _fields_ = [("Data", POINTER(FPlayerSaveData)), ("Count", c_int), ("Max", c_int)]


class TArray_FConditionalAnimationData(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalAnimationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UWeaponNamePartDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWeaponNamePartDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UAttackLocationPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttackLocation))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_Fartifact_datum(Structure):
    _fields_ = [("Data", POINTER(Fartifact_datum)), ("Count", c_int), ("Max", c_int)]


class TArray_UDownloadableExpansionDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableExpansionDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FPCContextMenuItem(Structure):
    _fields_ = [("Data", POINTER(FPCContextMenuItem)), ("Count", c_int), ("Max", c_int)]


class TArray_FCellContentData(Structure):
    _fields_ = [("Data", POINTER(FCellContentData)), ("Count", c_int), ("Max", c_int)]


class TArray_FMessageOfTheDay(Structure):
    _fields_ = [("Data", POINTER(FMessageOfTheDay)), ("Count", c_int), ("Max", c_int)]


class TArray_UMindTargetInfoPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMindTargetInfo))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_UInputRemappingDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInputRemappingDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FTimerData(Structure):
    _fields_ = [("Data", POINTER(FTimerData)), ("Count", c_int), ("Max", c_int)]


class TArray_USeqAct_LatentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USeqAct_Latent))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class TArray_FSkeletalMeshLODInfo(Structure):
    _fields_ = [("Data", POINTER(FSkeletalMeshLODInfo)), ("Count", int), ("Max", int)]


class TArray_FLeaderboardTemplate(Structure):
    _fields_ = [("Data", POINTER(FLeaderboardTemplate)), ("Count", int), ("Max", int)]


class TArray_FManufacturerSelectorData(Structure):
    _fields_ = [
        ("Data", POINTER(FManufacturerSelectorData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_URulePlaceholderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(URulePlaceholder))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UBlockingMeshComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBlockingMeshComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCustomBodyHandIKHoldData(Structure):
    _fields_ = [
        ("Data", POINTER(FCustomBodyHandIKHoldData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVehicleEffect(Structure):
    _fields_ = [("Data", POINTER(FVehicleEffect)), ("Count", int), ("Max", int)]


class TArray_AWeaponShotDebugPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWeaponShotDebug))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AWillowDynamicNavMeshConnectionPointPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowDynamicNavMeshConnectionPoint))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBoneAngleMorph(Structure):
    _fields_ = [("Data", POINTER(FBoneAngleMorph)), ("Count", int), ("Max", int)]


class TArray_FRecogVocabulary(Structure):
    _fields_ = [("Data", POINTER(FRecogVocabulary)), ("Count", int), ("Max", int)]


class TArray_UDownloadablePackageDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadablePackageDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGBXConnectedNavMesh(Structure):
    _fields_ = [("Data", POINTER(FGBXConnectedNavMesh)), ("Count", int), ("Max", int)]


class TArray_FDeathByWeaponStatID(Structure):
    _fields_ = [("Data", POINTER(FDeathByWeaponStatID)), ("Count", int), ("Max", int)]


class TArray_FIniLocFileEntry(Structure):
    _fields_ = [("Data", POINTER(FIniLocFileEntry)), ("Count", int), ("Max", int)]


class TArray_FSeqOpOutputLink(Structure):
    _fields_ = [("Data", POINTER(FSeqOpOutputLink)), ("Count", int), ("Max", int)]


class TArray_FGCReference(Structure):
    _fields_ = [("Data", POINTER(FGCReference)), ("Count", int), ("Max", int)]


class TArray_FScaledHUDElement(Structure):
    _fields_ = [("Data", POINTER(FScaledHUDElement)), ("Count", int), ("Max", int)]


class TArray_FBehaviorTriggerMessageStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorTriggerMessageStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ARallyPointPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ARallyPoint))), ("Count", int), ("Max", int)]


class TArray_FGameplayEventMetaData(Structure):
    _fields_ = [("Data", POINTER(FGameplayEventMetaData)), ("Count", int), ("Max", int)]


class TArray_FSeasonPassPackageCount(Structure):
    _fields_ = [
        ("Data", POINTER(FSeasonPassPackageCount)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FWeightmapLayerAllocationInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FWeightmapLayerAllocationInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FScalarParameterInterpStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FScalarParameterInterpStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FScalarMaterialParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FScalarMaterialParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNewsCacheEntry(Structure):
    _fields_ = [("Data", POINTER(FNewsCacheEntry)), ("Count", int), ("Max", int)]


class TArray_FInputContextData(Structure):
    _fields_ = [("Data", POINTER(FInputContextData)), ("Count", int), ("Max", int)]


class TArray_FPlayerLineInfo(Structure):
    _fields_ = [("Data", POINTER(FPlayerLineInfo)), ("Count", int), ("Max", int)]


class TArray_FActorReference(Structure):
    _fields_ = [("Data", POINTER(FActorReference)), ("Count", int), ("Max", int)]


class TArray_FConditionalExplosionData(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalExplosionData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UCylinderComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UCylinderComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FWillowStatProperty(Structure):
    _fields_ = [("Data", POINTER(FWillowStatProperty)), ("Count", int), ("Max", int)]


class TArray_FTeleportKeyData(Structure):
    _fields_ = [("Data", POINTER(FTeleportKeyData)), ("Count", int), ("Max", int)]


class TArray_UFaceFXAnimSetPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFaceFXAnimSet))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UBlackMarketUpgradeDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBlackMarketUpgradeDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FInteractiveObjectGameStageGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FInteractiveObjectGameStageGradeWeightData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOngoingEffectInfo(Structure):
    _fields_ = [("Data", POINTER(FOngoingEffectInfo)), ("Count", int), ("Max", int)]


class TArray_FPlayerSkillTreeTierData(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeTierData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOnlineStatusContextMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineStatusContextMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBoneMirrorInfo(Structure):
    _fields_ = [("Data", POINTER(FBoneMirrorInfo)), ("Count", int), ("Max", int)]


class TArray_AWillowElevatorButtonPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowElevatorButton))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAttributeSlotUpgradeData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeSlotUpgradeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAIPawnGameStageGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FAIPawnGameStageGradeWeightData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTechDeathData(Structure):
    _fields_ = [("Data", POINTER(FTechDeathData)), ("Count", int), ("Max", int)]


class TArray_FLevelStreamingStatus(Structure):
    _fields_ = [("Data", POINTER(FLevelStreamingStatus)), ("Count", int), ("Max", int)]


class TArray_FSettingsPropertyPropertyMetaData(Structure):
    _fields_ = [
        ("Data", POINTER(FSettingsPropertyPropertyMetaData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLevelStreamingNameCombo(Structure):
    _fields_ = [
        ("Data", POINTER(FLevelStreamingNameCombo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFeatherBoneBlendData(Structure):
    _fields_ = [("Data", POINTER(FFeatherBoneBlendData)), ("Count", int), ("Max", int)]


class TArray_FBucketStruct(Structure):
    _fields_ = [("Data", POINTER(FBucketStruct)), ("Count", int), ("Max", int)]


class TArray_UDownloadableCharacterDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableCharacterDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkillConstraintData(Structure):
    _fields_ = [("Data", POINTER(FSkillConstraintData)), ("Count", int), ("Max", int)]


class TArray_FAIResourceRestriction(Structure):
    _fields_ = [("Data", POINTER(FAIResourceRestriction)), ("Count", int), ("Max", int)]


class TArray_FInstancedStaticMeshMappingInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FInstancedStaticMeshMappingInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTankSensor(Structure):
    _fields_ = [("Data", POINTER(FTankSensor)), ("Count", int), ("Max", int)]


class TArray_UInterpTrackInstPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInterpTrackInst))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeferredSkillActivationData(Structure):
    _fields_ = [
        ("Data", POINTER(FDeferredSkillActivationData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FWorldLightingOverride(Structure):
    _fields_ = [("Data", POINTER(FWorldLightingOverride)), ("Count", int), ("Max", int)]


class TArray_FStateAttributeData(Structure):
    _fields_ = [("Data", POINTER(FStateAttributeData)), ("Count", int), ("Max", int)]


class TArray_FPlayerEvents(Structure):
    _fields_ = [("Data", POINTER(FPlayerEvents)), ("Count", int), ("Max", int)]


class TArray_FDamageClassEventData(Structure):
    _fields_ = [("Data", POINTER(FDamageClassEventData)), ("Count", int), ("Max", int)]


class TArray_FPresetGeneratedPoint(Structure):
    _fields_ = [("Data", POINTER(FPresetGeneratedPoint)), ("Count", int), ("Max", int)]


class TArray_FAuthSession(Structure):
    _fields_ = [("Data", POINTER(FAuthSession)), ("Count", int), ("Max", int)]


class TArray_FMaterialReferenceList(Structure):
    _fields_ = [("Data", POINTER(FMaterialReferenceList)), ("Count", int), ("Max", int)]


class TArray_USplineMeshComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USplineMeshComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBehaviorsSelectionData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorsSelectionData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVehicleCrewMappingStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleCrewMappingStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UInstancedDesignerAttributePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInstancedDesignerAttribute))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAttributePriorityData(Structure):
    _fields_ = [("Data", POINTER(FAttributePriorityData)), ("Count", int), ("Max", int)]


class TArray_FKeyBindInfo(Structure):
    _fields_ = [("Data", POINTER(FKeyBindInfo)), ("Count", int), ("Max", int)]


class TArray_FUnloadableDlcRegionGameStageData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcRegionGameStageData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FHeadTrackingKey(Structure):
    _fields_ = [("Data", POINTER(FHeadTrackingKey)), ("Count", int), ("Max", int)]


class TArray_FSkillDamageEventData(Structure):
    _fields_ = [("Data", POINTER(FSkillDamageEventData)), ("Count", int), ("Max", int)]


class TArray_FNamedSkillEvent(Structure):
    _fields_ = [("Data", POINTER(FNamedSkillEvent)), ("Count", int), ("Max", int)]


class TArray_FDebugConsoleCommand(Structure):
    _fields_ = [("Data", POINTER(FDebugConsoleCommand)), ("Count", int), ("Max", int)]


class TArray_FPrismDataContainer(Structure):
    _fields_ = [("Data", POINTER(FPrismDataContainer)), ("Count", int), ("Max", int)]


class TArray_FSortFilterConfiguration(Structure):
    _fields_ = [
        ("Data", POINTER(FSortFilterConfiguration)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ADroppedPickupPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ADroppedPickup))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UUIConfigSectionProviderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIConfigSectionProvider))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UDownloadableItemSetDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableItemSetDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFontParameterValueOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FFontParameterValueOverTime)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTaggedMarketplaceContent(Structure):
    _fields_ = [
        ("Data", POINTER(FTaggedMarketplaceContent)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSoundEventMapping(Structure):
    _fields_ = [("Data", POINTER(FSoundEventMapping)), ("Count", int), ("Max", int)]


class TArray_FAggregateEventMapping(Structure):
    _fields_ = [("Data", POINTER(FAggregateEventMapping)), ("Count", int), ("Max", int)]


class TArray_FSkillEventResponseData(Structure):
    _fields_ = [
        ("Data", POINTER(FSkillEventResponseData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSplitscreenData(Structure):
    _fields_ = [("Data", POINTER(FSplitscreenData)), ("Count", int), ("Max", int)]


class TArray_UFlagDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFlagDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGBXNavMeshObstacleData(Structure):
    _fields_ = [
        ("Data", POINTER(FGBXNavMeshObstacleData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGFxMenuLink(Structure):
    _fields_ = [("Data", POINTER(FGFxMenuLink)), ("Count", int), ("Max", int)]


class TArray_FDataProviderInfo(Structure):
    _fields_ = [("Data", POINTER(FDataProviderInfo)), ("Count", int), ("Max", int)]


class TArray_FPerBoneMaskInfo(Structure):
    _fields_ = [("Data", POINTER(FPerBoneMaskInfo)), ("Count", int), ("Max", int)]


class TArray_FRawAnimSequenceTrack(Structure):
    _fields_ = [("Data", POINTER(FRawAnimSequenceTrack)), ("Count", int), ("Max", int)]


class TArray_FTitleFileMapping(Structure):
    _fields_ = [("Data", POINTER(FTitleFileMapping)), ("Count", int), ("Max", int)]


class TArray_FDirectorTrackCut(Structure):
    _fields_ = [("Data", POINTER(FDirectorTrackCut)), ("Count", int), ("Max", int)]


class TArray_UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        (
            "Data",
            POINTER(UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData),
        ),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UTrainingMessageDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTrainingMessageDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FParticleReplayTrackKey(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleReplayTrackKey)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGBXCrossLevelReferenceContainerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGBXCrossLevelReferenceContainer))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFoliageMesh(Structure):
    _fields_ = [("Data", POINTER(FFoliageMesh)), ("Count", int), ("Max", int)]


class TArray_FParticleBurst(Structure):
    _fields_ = [("Data", POINTER(FParticleBurst)), ("Count", int), ("Max", int)]


class TArray_FInstancedStaticMeshInstanceData(Structure):
    _fields_ = [
        ("Data", POINTER(FInstancedStaticMeshInstanceData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOnlineStatusPropertyMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineStatusPropertyMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPlaylistPopulation(Structure):
    _fields_ = [("Data", POINTER(FPlaylistPopulation)), ("Count", int), ("Max", int)]


class TArray_UPawnAllegiancePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPawnAllegiance))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCoordinatedEffectProcess(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedEffectProcess)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLabelToLinkageMapping(Structure):
    _fields_ = [("Data", POINTER(FLabelToLinkageMapping)), ("Count", int), ("Max", int)]


class TArray_FRelevanceCacheStruct(Structure):
    _fields_ = [("Data", POINTER(FRelevanceCacheStruct)), ("Count", int), ("Max", int)]


class TArray_APortalTeleporterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APortalTeleporter))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeviceLookAxisData(Structure):
    _fields_ = [("Data", POINTER(FDeviceLookAxisData)), ("Count", int), ("Max", int)]


class TArray_FGBXNavMeshPathSize(Structure):
    _fields_ = [("Data", POINTER(FGBXNavMeshPathSize)), ("Count", int), ("Max", int)]


class TArray_FSwitchObjectCase(Structure):
    _fields_ = [("Data", POINTER(FSwitchObjectCase)), ("Count", int), ("Max", int)]


class TArray_FTerrainDecoLayer(Structure):
    _fields_ = [("Data", POINTER(FTerrainDecoLayer)), ("Count", int), ("Max", int)]


class TArray_ACoverLinkPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ACoverLink))), ("Count", int), ("Max", int)]


class TArray_FEnemyBreadCrumbStruct(Structure):
    _fields_ = [("Data", POINTER(FEnemyBreadCrumbStruct)), ("Count", int), ("Max", int)]


class TArray_FSkillEffectData(Structure):
    _fields_ = [("Data", POINTER(FSkillEffectData)), ("Count", int), ("Max", int)]


class TArray_UGearboxAccountDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountData))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTurretEffect(Structure):
    _fields_ = [("Data", POINTER(FTurretEffect)), ("Count", int), ("Max", int)]


class TArray_FAvailableTrackedSkill(Structure):
    _fields_ = [("Data", POINTER(FAvailableTrackedSkill)), ("Count", int), ("Max", int)]


class TArray_FTextureMaterialParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FTextureMaterialParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FHeavyInventoryElement(Structure):
    _fields_ = [("Data", POINTER(FHeavyInventoryElement)), ("Count", int), ("Max", int)]


class TArray_UPlayerClassIdentifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPlayerClassIdentifierDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FHUDAnchorPoint(Structure):
    _fields_ = [("Data", POINTER(FHUDAnchorPoint)), ("Count", int), ("Max", int)]


class TArray_FTrailSample(Structure):
    _fields_ = [("Data", POINTER(FTrailSample)), ("Count", int), ("Max", int)]


class TArray_FBehaviorAliasReference(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorAliasReference)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FParticleEventCollideData(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEventCollideData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSettingsArrayProvider(Structure):
    _fields_ = [("Data", POINTER(FSettingsArrayProvider)), ("Count", int), ("Max", int)]


class TArray_UFractureMaterialPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFractureMaterial))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FColorParticleSystemParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FColorParticleSystemParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNPCList(Structure):
    _fields_ = [("Data", POINTER(FNPCList)), ("Count", int), ("Max", int)]


class TArray_UAttributeContextResolverPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttributeContextResolver))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAIHoldData(Structure):
    _fields_ = [("Data", POINTER(FAIHoldData)), ("Count", int), ("Max", int)]


class TArray_FNavMeshPathSize(Structure):
    _fields_ = [("Data", POINTER(FNavMeshPathSize)), ("Count", int), ("Max", int)]


class TArray_FDropNoteInfo(Structure):
    _fields_ = [("Data", POINTER(FDropNoteInfo)), ("Count", int), ("Max", int)]


class TArray_USparkServiceConfigurationPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USparkServiceConfiguration))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FServerQueryToPingResponseMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FServerQueryToPingResponseMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AInventoryPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(AInventory))), ("Count", int), ("Max", int)]


class TArray_FWeaponClassEventData(Structure):
    _fields_ = [("Data", POINTER(FWeaponClassEventData)), ("Count", int), ("Max", int)]


class TArray_AWillowReplicatedAmbientSoundSourcePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowReplicatedAmbientSoundSource))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAppliedSkillEffect(Structure):
    _fields_ = [("Data", POINTER(FAppliedSkillEffect)), ("Count", int), ("Max", int)]


class TArray_FLocalizedStringSettingMetaData(Structure):
    _fields_ = [
        ("Data", POINTER(FLocalizedStringSettingMetaData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAIThrowProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Data", POINTER(FAIThrowProjectileBehaviorSequenceStateData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FObstacleData(Structure):
    _fields_ = [("Data", POINTER(FObstacleData)), ("Count", int), ("Max", int)]


class TArray_URB_BodySetupPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(URB_BodySetup))), ("Count", int), ("Max", int)]


class TArray_FDebugExposure(Structure):
    _fields_ = [("Data", POINTER(FDebugExposure)), ("Count", int), ("Max", int)]


class TArray_FLensFlareElement(Structure):
    _fields_ = [("Data", POINTER(FLensFlareElement)), ("Count", int), ("Max", int)]


class TArray_FMapSpecificBalanceModificationList(Structure):
    _fields_ = [
        ("Data", POINTER(FMapSpecificBalanceModificationList)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPendingCustomization(Structure):
    _fields_ = [("Data", POINTER(FPendingCustomization)), ("Count", int), ("Max", int)]


class TArray_FEnvironmentalEffectSetting(Structure):
    _fields_ = [
        ("Data", POINTER(FEnvironmentalEffectSetting)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FInstalledContentInfo(Structure):
    _fields_ = [("Data", POINTER(FInstalledContentInfo)), ("Count", int), ("Max", int)]


class TArray_FClientBeaconConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FClientBeaconConnection)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FIpAddr(Structure):
    _fields_ = [("Data", POINTER(FIpAddr)), ("Count", int), ("Max", int)]


class TArray_FActionSequenceRecord(Structure):
    _fields_ = [("Data", POINTER(FActionSequenceRecord)), ("Count", int), ("Max", int)]


class TArray_ATerrain_FTerrainWeightedMaterial(Structure):
    _fields_ = [
        ("Data", POINTER(ATerrain_FTerrainWeightedMaterial)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVectorParameterValueOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FVectorParameterValueOverTime)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBehaviorContextData(Structure):
    _fields_ = [("Data", POINTER(FBehaviorContextData)), ("Count", int), ("Max", int)]


class TArray_FPopulationAreaOptionSpawnData(Structure):
    _fields_ = [
        ("Data", POINTER(FPopulationAreaOptionSpawnData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAITreeData(Structure):
    _fields_ = [("Data", POINTER(FAITreeData)), ("Count", int), ("Max", int)]


class TArray_FSpeedTravelData(Structure):
    _fields_ = [("Data", POINTER(FSpeedTravelData)), ("Count", int), ("Max", int)]


class TArray_FWaveformSample(Structure):
    _fields_ = [("Data", POINTER(FWaveformSample)), ("Count", int), ("Max", int)]


class TArray_FOnlineProfileSetting(Structure):
    _fields_ = [("Data", POINTER(FOnlineProfileSetting)), ("Count", int), ("Max", int)]


class TArray_FSoftBodyTetraLink(Structure):
    _fields_ = [("Data", POINTER(FSoftBodyTetraLink)), ("Count", int), ("Max", int)]


class TArray_FResourceSaveGameData(Structure):
    _fields_ = [("Data", POINTER(FResourceSaveGameData)), ("Count", int), ("Max", int)]


class TArray_FRejectedContentInfo(Structure):
    _fields_ = [("Data", POINTER(FRejectedContentInfo)), ("Count", int), ("Max", int)]


class TArray_FTargetedPlayerState(Structure):
    _fields_ = [("Data", POINTER(FTargetedPlayerState)), ("Count", int), ("Max", int)]


class TArray_FRegionBalanceData(Structure):
    _fields_ = [("Data", POINTER(FRegionBalanceData)), ("Count", int), ("Max", int)]


class TArray_FOutputLink(Structure):
    _fields_ = [("Data", POINTER(FOutputLink)), ("Count", int), ("Max", int)]


class TArray_FSMRandomPair(Structure):
    _fields_ = [("Data", POINTER(FSMRandomPair)), ("Count", int), ("Max", int)]


class TArray_FMarketplaceOffer(Structure):
    _fields_ = [("Data", POINTER(FMarketplaceOffer)), ("Count", int), ("Max", int)]


class TArray_FGestaltAccessoryNameEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryNameEntry)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSpawnAnimData(Structure):
    _fields_ = [("Data", POINTER(FSpawnAnimData)), ("Count", int), ("Max", int)]


class TArray_UParticleModulePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleModule))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FManufacturerGradeData(Structure):
    _fields_ = [("Data", POINTER(FManufacturerGradeData)), ("Count", int), ("Max", int)]


class TArray_FVectorMaterialParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FVectorMaterialParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOccludedVolume(Structure):
    _fields_ = [("Data", POINTER(FOccludedVolume)), ("Count", int), ("Max", int)]


class TArray_FUIStatData(Structure):
    _fields_ = [("Data", POINTER(FUIStatData)), ("Count", int), ("Max", int)]


class TArray_FExternalTexture(Structure):
    _fields_ = [("Data", POINTER(FExternalTexture)), ("Count", int), ("Max", int)]


class TArray_FPostProcessOverlayInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FPostProcessOverlayInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FEmotePortraitInfo(Structure):
    _fields_ = [("Data", POINTER(FEmotePortraitInfo)), ("Count", int), ("Max", int)]


class TArray_FUIDataStoreInputAlias(Structure):
    _fields_ = [("Data", POINTER(FUIDataStoreInputAlias)), ("Count", int), ("Max", int)]


class TArray_UOnlineStatsReadPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UOnlineStatsRead))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FActiveInteraction(Structure):
    _fields_ = [("Data", POINTER(FActiveInteraction)), ("Count", int), ("Max", int)]


class TArray_FCoverMeshes(Structure):
    _fields_ = [("Data", POINTER(FCoverMeshes)), ("Count", int), ("Max", int)]


class TArray_FGameSearchCfg(Structure):
    _fields_ = [("Data", POINTER(FGameSearchCfg)), ("Count", int), ("Max", int)]


class TArray_FScalarParticleSystemParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FScalarParticleSystemParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGrenadeModBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Data", POINTER(FGrenadeModBehaviorSequenceStateData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FHitActorData(Structure):
    _fields_ = [("Data", POINTER(FHitActorData)), ("Count", int), ("Max", int)]


class TArray_FRemoteTalker(Structure):
    _fields_ = [("Data", POINTER(FRemoteTalker)), ("Count", int), ("Max", int)]


class TArray_FSourceTexture2DRegion(Structure):
    _fields_ = [("Data", POINTER(FSourceTexture2DRegion)), ("Count", int), ("Max", int)]


class TArray_FThumbnailLightData(Structure):
    _fields_ = [("Data", POINTER(FThumbnailLightData)), ("Count", int), ("Max", int)]


class TArray_FSwitchClassInfo(Structure):
    _fields_ = [("Data", POINTER(FSwitchClassInfo)), ("Count", int), ("Max", int)]


class TArray_APerchPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(APerch))), ("Count", int), ("Max", int)]


class TArray_FThumbnailRenderData(Structure):
    _fields_ = [("Data", POINTER(FThumbnailRenderData)), ("Count", int), ("Max", int)]


class TArray_UGFxActorMoviePoolPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxActorMoviePool))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPopulationOptionAreaData(Structure):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionAreaData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FConditionLevel(Structure):
    _fields_ = [("Data", POINTER(FConditionLevel)), ("Count", int), ("Max", int)]


class TArray_FLevelBasedExpScale(Structure):
    _fields_ = [("Data", POINTER(FLevelBasedExpScale)), ("Count", int), ("Max", int)]


class TArray_FPerchAnimData(Structure):
    _fields_ = [("Data", POINTER(FPerchAnimData)), ("Count", int), ("Max", int)]


class TArray_AWillowInteractiveObjectPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowInteractiveObject))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPendingClientTrainingMessage(Structure):
    _fields_ = [
        ("Data", POINTER(FPendingClientTrainingMessage)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGFxWidgetBinding(Structure):
    _fields_ = [("Data", POINTER(FGFxWidgetBinding)), ("Count", int), ("Max", int)]


class TArray_FAIHoldDebugData(Structure):
    _fields_ = [("Data", POINTER(FAIHoldDebugData)), ("Count", int), ("Max", int)]


class TArray_AWillowProjectilePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowProjectile))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDirectionData(Structure):
    _fields_ = [("Data", POINTER(FDirectionData)), ("Count", int), ("Max", int)]


class TArray_UApexComponentBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UApexComponentBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UDamagePipelinePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDamagePipeline))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOnlineStatusMapping(Structure):
    _fields_ = [("Data", POINTER(FOnlineStatusMapping)), ("Count", int), ("Max", int)]


class TArray_FImpactResponseData(Structure):
    _fields_ = [("Data", POINTER(FImpactResponseData)), ("Count", int), ("Max", int)]


class TArray_FInventoryManufacturerBalanceData(Structure):
    _fields_ = [
        ("Data", POINTER(FInventoryManufacturerBalanceData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FInputButtonData(Structure):
    _fields_ = [("Data", POINTER(FInputButtonData)), ("Count", int), ("Max", int)]


class TArray_UGBXDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGBXDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBalanceModification(Structure):
    _fields_ = [("Data", POINTER(FBalanceModification)), ("Count", int), ("Max", int)]


class TArray_FAttributeSlotEffectData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeSlotEffectData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UCameraModifierPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UCameraModifier))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FQueuedActivationInfo(Structure):
    _fields_ = [("Data", POINTER(FQueuedActivationInfo)), ("Count", int), ("Max", int)]


class TArray_FAkEventResolver(Structure):
    _fields_ = [("Data", POINTER(FAkEventResolver)), ("Count", int), ("Max", int)]


class TArray_FConditionalParticleEffectData(Structure):
    _fields_ = [
        ("Data", POINTER(FConditionalParticleEffectData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UWillowAIBlackboardComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWillowAIBlackboardComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UPackageAssetSublibraryPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPackageAssetSublibrary))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FClanMaterialData(Structure):
    _fields_ = [("Data", POINTER(FClanMaterialData)), ("Count", int), ("Max", int)]


class TArray_FMenuItemCallback(Structure):
    _fields_ = [("Data", POINTER(FMenuItemCallback)), ("Count", int), ("Max", int)]


class TArray_FUnloadableDlcItemSaveGameData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcItemSaveGameData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGameClassShortName(Structure):
    _fields_ = [("Data", POINTER(FGameClassShortName)), ("Count", int), ("Max", int)]


class TArray_FStatColorMapping(Structure):
    _fields_ = [("Data", POINTER(FStatColorMapping)), ("Count", int), ("Max", int)]


class TArray_UDLCLegacyPlayerClassIdentifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDLCLegacyPlayerClassIdentifierDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APlayerStandInPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APlayerStandIn))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOnlineStatsRow(Structure):
    _fields_ = [("Data", POINTER(FOnlineStatsRow)), ("Count", int), ("Max", int)]


class TArray_FBulletImpactEventData(Structure):
    _fields_ = [("Data", POINTER(FBulletImpactEventData)), ("Count", int), ("Max", int)]


class TArray_FSkelMeshComponentLODInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FSkelMeshComponentLODInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FExpAwardWeight(Structure):
    _fields_ = [("Data", POINTER(FExpAwardWeight)), ("Count", int), ("Max", int)]


class TArray_FParticleEventTraceData(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEventTraceData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FMarketPlaceFilter(Structure):
    _fields_ = [("Data", POINTER(FMarketPlaceFilter)), ("Count", int), ("Max", int)]


class TArray_FBehaviorCondition(Structure):
    _fields_ = [("Data", POINTER(FBehaviorCondition)), ("Count", int), ("Max", int)]


class TArray_FScreenMessageString(Structure):
    _fields_ = [("Data", POINTER(FScreenMessageString)), ("Count", int), ("Max", int)]


class TArray_FOpinionData(Structure):
    _fields_ = [("Data", POINTER(FOpinionData)), ("Count", int), ("Max", int)]


class TArray_FAnimNotifyEvent(Structure):
    _fields_ = [("Data", POINTER(FAnimNotifyEvent)), ("Count", int), ("Max", int)]


class TArray_FUnloadableDlcLockoutData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcLockoutData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FValidNameRange(Structure):
    _fields_ = [("Data", POINTER(FValidNameRange)), ("Count", int), ("Max", int)]


class TArray_FClientMeshBeaconConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FClientMeshBeaconConnection)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLensFlareElementMaterials(Structure):
    _fields_ = [
        ("Data", POINTER(FLensFlareElementMaterials)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FKnowledgeRecordStruct(Structure):
    _fields_ = [("Data", POINTER(FKnowledgeRecordStruct)), ("Count", int), ("Max", int)]


class TArray_FSelectedTerrainVertex(Structure):
    _fields_ = [("Data", POINTER(FSelectedTerrainVertex)), ("Count", int), ("Max", int)]


class TArray_FTargetDebugDatum(Structure):
    _fields_ = [("Data", POINTER(FTargetDebugDatum)), ("Count", int), ("Max", int)]


class TArray_FViewIdToLeaderboardName(Structure):
    _fields_ = [
        ("Data", POINTER(FViewIdToLeaderboardName)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTitleFileMcp(Structure):
    _fields_ = [("Data", POINTER(FTitleFileMcp)), ("Count", int), ("Max", int)]


class TArray_FQueuedAvatarRequest(Structure):
    _fields_ = [("Data", POINTER(FQueuedAvatarRequest)), ("Count", int), ("Max", int)]


class TArray_APopulationEncounterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationEncounter))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDecalReceiver(Structure):
    _fields_ = [("Data", POINTER(FDecalReceiver)), ("Count", int), ("Max", int)]


class TArray_FTierLayout(Structure):
    _fields_ = [("Data", POINTER(FTierLayout)), ("Count", int), ("Max", int)]


class TArray_FTextureParameterValueOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FTextureParameterValueOverTime)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGestaltPartBoundsEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltPartBoundsEntry)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UFiringZoneDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFiringZoneDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCreditsTextureInfo(Structure):
    _fields_ = [("Data", POINTER(FCreditsTextureInfo)), ("Count", int), ("Max", int)]


class TArray_FExpansionData(Structure):
    _fields_ = [("Data", POINTER(FExpansionData)), ("Count", int), ("Max", int)]


class TArray_FRecentParty(Structure):
    _fields_ = [("Data", POINTER(FRecentParty)), ("Count", int), ("Max", int)]


class TArray_FRarityLevelColor(Structure):
    _fields_ = [("Data", POINTER(FRarityLevelColor)), ("Count", int), ("Max", int)]


class TArray_FMissionStatusData(Structure):
    _fields_ = [("Data", POINTER(FMissionStatusData)), ("Count", int), ("Max", int)]


class TArray_UAttributeValueResolverPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttributeValueResolver))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UTerrainComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTerrainComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPlayerIcon(Structure):
    _fields_ = [("Data", POINTER(FPlayerIcon)), ("Count", int), ("Max", int)]


class TArray_FLightValues(Structure):
    _fields_ = [("Data", POINTER(FLightValues)), ("Count", int), ("Max", int)]


class TArray_FSeasonPassOfferUnion(Structure):
    _fields_ = [("Data", POINTER(FSeasonPassOfferUnion)), ("Count", int), ("Max", int)]


class TArray_FLootData(Structure):
    _fields_ = [("Data", POINTER(FLootData)), ("Count", int), ("Max", int)]


class TArray_FTerrainInfoData(Structure):
    _fields_ = [("Data", POINTER(FTerrainInfoData)), ("Count", int), ("Max", int)]


class TArray_FPlaylist(Structure):
    _fields_ = [("Data", POINTER(FPlaylist)), ("Count", int), ("Max", int)]


class TArray_FPlayerStorageArrayProvider(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerStorageArrayProvider)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FResolution(Structure):
    _fields_ = [("Data", POINTER(FResolution)), ("Count", int), ("Max", int)]


class TArray_UDownloadableContentDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableContentDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FUIStatModifierData(Structure):
    _fields_ = [("Data", POINTER(FUIStatModifierData)), ("Count", int), ("Max", int)]


class TArray_UGearboxDialogEventDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogEventData))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FEventTrackKey(Structure):
    _fields_ = [("Data", POINTER(FEventTrackKey)), ("Count", int), ("Max", int)]


class TArray_FSlotAnimParameters(Structure):
    _fields_ = [("Data", POINTER(FSlotAnimParameters)), ("Count", int), ("Max", int)]


class TArray_UFontPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UFont))), ("Count", int), ("Max", int)]


class TArray_UTextureRenderTarget2DPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTextureRenderTarget2D))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVehicleSeatInstance(Structure):
    _fields_ = [("Data", POINTER(FVehicleSeatInstance)), ("Count", int), ("Max", int)]


class TArray_FDynamicResourceProviderDefinition(Structure):
    _fields_ = [
        ("Data", POINTER(FDynamicResourceProviderDefinition)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_USkillTreeBranchDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkillTreeBranchDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FClothSpecialBoneInfo(Structure):
    _fields_ = [("Data", POINTER(FClothSpecialBoneInfo)), ("Count", int), ("Max", int)]


class TArray_FTaggedGFxMovie(Structure):
    _fields_ = [("Data", POINTER(FTaggedGFxMovie)), ("Count", int), ("Max", int)]


class TArray_UPostProcessChainPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPostProcessChain))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOneOffLevelChallengeData(Structure):
    _fields_ = [
        ("Data", POINTER(FOneOffLevelChallengeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPendingPlayerStats(Structure):
    _fields_ = [("Data", POINTER(FPendingPlayerStats)), ("Count", int), ("Max", int)]


class TArray_UParticleLODLevelPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleLODLevel))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UDownloadableCustomizationSetDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableCustomizationSetDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FToggleTrackKey(Structure):
    _fields_ = [("Data", POINTER(FToggleTrackKey)), ("Count", int), ("Max", int)]


class TArray_ULevelStreamingPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULevelStreaming))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ALevelStreamingVolumePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ALevelStreamingVolume))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAnimBlendChild(Structure):
    _fields_ = [("Data", POINTER(FAnimBlendChild)), ("Count", int), ("Max", int)]


class TArray_FGFxDataStoreBinding(Structure):
    _fields_ = [("Data", POINTER(FGFxDataStoreBinding)), ("Count", int), ("Max", int)]


class TArray_FCullDistanceSizePair(Structure):
    _fields_ = [("Data", POINTER(FCullDistanceSizePair)), ("Count", int), ("Max", int)]


class TArray_FPostProcessSettingsOverride(Structure):
    _fields_ = [
        ("Data", POINTER(FPostProcessSettingsOverride)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPlayerSkillTreeBranchData(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeBranchData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FEventRecord(Structure):
    _fields_ = [("Data", POINTER(FEventRecord)), ("Count", int), ("Max", int)]


class TArray_FActiveDecalInfo(Structure):
    _fields_ = [("Data", POINTER(FActiveDecalInfo)), ("Count", int), ("Max", int)]


class TArray_FLevelTransitionData(Structure):
    _fields_ = [("Data", POINTER(FLevelTransitionData)), ("Count", int), ("Max", int)]


class TArray_FGestaltAccessoryMeshEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryMeshEntry)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UChildConnectionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UChildConnection))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGBXNavMeshPathModifierPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGBXNavMeshPathModifier))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FKeyBind(Structure):
    _fields_ = [("Data", POINTER(FKeyBind)), ("Count", int), ("Max", int)]


class TArray_FBreathingLoopInfo(Structure):
    _fields_ = [("Data", POINTER(FBreathingLoopInfo)), ("Count", int), ("Max", int)]


class TArray_UObjectReferencerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UObjectReferencer))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSoundClassAdjuster(Structure):
    _fields_ = [("Data", POINTER(FSoundClassAdjuster)), ("Count", int), ("Max", int)]


class TArray_FAIResourceData(Structure):
    _fields_ = [("Data", POINTER(FAIResourceData)), ("Count", int), ("Max", int)]


class TArray_FVectorParticleSystemParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FVectorParticleSystemParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPauseTimerData(Structure):
    _fields_ = [("Data", POINTER(FPauseTimerData)), ("Count", int), ("Max", int)]


class TArray_FAIPawnPlaythroughThreeData(Structure):
    _fields_ = [
        ("Data", POINTER(FAIPawnPlaythroughThreeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRecentExplosion(Structure):
    _fields_ = [("Data", POINTER(FRecentExplosion)), ("Count", int), ("Max", int)]


class TArray_UResourcePoolDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UResourcePoolDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPersistentMapDependencies(Structure):
    _fields_ = [
        ("Data", POINTER(FPersistentMapDependencies)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FStatusEffectTypeCommonProperties(Structure):
    _fields_ = [
        ("Data", POINTER(FStatusEffectTypeCommonProperties)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCustomizationItemData(Structure):
    _fields_ = [("Data", POINTER(FCustomizationItemData)), ("Count", int), ("Max", int)]


class TArray_FAnimBlendInfo(Structure):
    _fields_ = [("Data", POINTER(FAnimBlendInfo)), ("Count", int), ("Max", int)]


class TArray_UPostProcessEffectPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPostProcessEffect))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAchievementUnlockData(Structure):
    _fields_ = [("Data", POINTER(FAchievementUnlockData)), ("Count", int), ("Max", int)]


class TArray_AEmitterCameraLensEffectBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AEmitterCameraLensEffectBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSeqOpInputLink(Structure):
    _fields_ = [("Data", POINTER(FSeqOpInputLink)), ("Count", int), ("Max", int)]


class TArray_FDamageTypeSelectorData(Structure):
    _fields_ = [
        ("Data", POINTER(FDamageTypeSelectorData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCameraShakeInstance(Structure):
    _fields_ = [("Data", POINTER(FCameraShakeInstance)), ("Count", int), ("Max", int)]


class TArray_FOneTimeDataElement(Structure):
    _fields_ = [("Data", POINTER(FOneTimeDataElement)), ("Count", int), ("Max", int)]


class TArray_FRandomAnimInfo(Structure):
    _fields_ = [("Data", POINTER(FRandomAnimInfo)), ("Count", int), ("Max", int)]


class TArray_FMoveToCellData(Structure):
    _fields_ = [("Data", POINTER(FMoveToCellData)), ("Count", int), ("Max", int)]


class TArray_FGameResourceDataProvider(Structure):
    _fields_ = [
        ("Data", POINTER(FGameResourceDataProvider)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FEffectSoundData(Structure):
    _fields_ = [("Data", POINTER(FEffectSoundData)), ("Count", int), ("Max", int)]


class TArray_AWillowDialogEchoActorPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowDialogEchoActor))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AWillowSpectatorPointPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowSpectatorPoint))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBalanceMeResourceUpgradePath(Structure):
    _fields_ = [
        ("Data", POINTER(FBalanceMeResourceUpgradePath)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_USoundNodePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(USoundNode))), ("Count", int), ("Max", int)]


class TArray_FFullyLoadedPackagesInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FFullyLoadedPackagesInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFontCharacter(Structure):
    _fields_ = [("Data", POINTER(FFontCharacter)), ("Count", int), ("Max", int)]


class TArray_FSpecialMoveData(Structure):
    _fields_ = [("Data", POINTER(FSpecialMoveData)), ("Count", int), ("Max", int)]


class TArray_FBulletTimerEvent(Structure):
    _fields_ = [("Data", POINTER(FBulletTimerEvent)), ("Count", int), ("Max", int)]


class TArray_UParticleModuleSpawnBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleModuleSpawnBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVectorMaterialParamMICData(Structure):
    _fields_ = [
        ("Data", POINTER(FVectorMaterialParamMICData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGPMCollection(Structure):
    _fields_ = [("Data", POINTER(FGPMCollection)), ("Count", int), ("Max", int)]


class TArray_FVehicleDefaultCrewStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleDefaultCrewStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPanelInfo(Structure):
    _fields_ = [("Data", POINTER(FPanelInfo)), ("Count", int), ("Max", int)]


class TArray_FSpeedKillData(Structure):
    _fields_ = [("Data", POINTER(FSpeedKillData)), ("Count", int), ("Max", int)]


class TArray_FKillSkillDuration(Structure):
    _fields_ = [("Data", POINTER(FKillSkillDuration)), ("Count", int), ("Max", int)]


class TArray_FInventorySerialNumber(Structure):
    _fields_ = [("Data", POINTER(FInventorySerialNumber)), ("Count", int), ("Max", int)]


class TArray_UMarketingUnlockDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMarketingUnlockDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLocalAuthSession(Structure):
    _fields_ = [("Data", POINTER(FLocalAuthSession)), ("Count", int), ("Max", int)]


class TArray_FDamageReactionData(Structure):
    _fields_ = [("Data", POINTER(FDamageReactionData)), ("Count", int), ("Max", int)]


class TArray_FEncounterTracker(Structure):
    _fields_ = [("Data", POINTER(FEncounterTracker)), ("Count", int), ("Max", int)]


class TArray_FListener(Structure):
    _fields_ = [("Data", POINTER(FListener)), ("Count", int), ("Max", int)]


class TArray_UInputSetDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInputSetDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSourceObjectData(Structure):
    _fields_ = [("Data", POINTER(FSourceObjectData)), ("Count", int), ("Max", int)]


class TArray_FMissionData(Structure):
    _fields_ = [("Data", POINTER(FMissionData)), ("Count", int), ("Max", int)]


class TArray_FUnloadableDlcWeaponSaveGameData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcWeaponSaveGameData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkillActionData(Structure):
    _fields_ = [("Data", POINTER(FSkillActionData)), ("Count", int), ("Max", int)]


class TArray_ULineSegmentPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ULineSegment))), ("Count", int), ("Max", int)]


class TArray_FProfileDefinition(Structure):
    _fields_ = [("Data", POINTER(FProfileDefinition)), ("Count", int), ("Max", int)]


class TArray_FGameTypePrefix(Structure):
    _fields_ = [("Data", POINTER(FGameTypePrefix)), ("Count", int), ("Max", int)]


class TArray_FPlayerOwnedComponent(Structure):
    _fields_ = [("Data", POINTER(FPlayerOwnedComponent)), ("Count", int), ("Max", int)]


class TArray_FTerrainHeight(Structure):
    _fields_ = [("Data", POINTER(FTerrainHeight)), ("Count", int), ("Max", int)]


class TArray_FNameBasedObjectPath(Structure):
    _fields_ = [("Data", POINTER(FNameBasedObjectPath)), ("Count", int), ("Max", int)]


class TArray_FStaticMeshComponentLODInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FStaticMeshComponentLODInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AGearboxPlayerControllerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxPlayerController))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeveloperData(Structure):
    _fields_ = [("Data", POINTER(FDeveloperData)), ("Count", int), ("Max", int)]


class TArray_FHitTargetRecord(Structure):
    _fields_ = [("Data", POINTER(FHitTargetRecord)), ("Count", int), ("Max", int)]


class TArray_FSkillSaveGameData(Structure):
    _fields_ = [("Data", POINTER(FSkillSaveGameData)), ("Count", int), ("Max", int)]


class TArray_FFlagEvalORConnector(Structure):
    _fields_ = [("Data", POINTER(FFlagEvalORConnector)), ("Count", int), ("Max", int)]


class TArray_UAnimSequencePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAnimSequence))), ("Count", int), ("Max", int)]


class TArray_UPackagePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UPackage))), ("Count", int), ("Max", int)]


class TArray_FTitleFile(Structure):
    _fields_ = [("Data", POINTER(FTitleFile)), ("Count", int), ("Max", int)]


class TArray_FMarketplaceOfferData(Structure):
    _fields_ = [("Data", POINTER(FMarketplaceOfferData)), ("Count", int), ("Max", int)]


class TArray_FTombstoneData(Structure):
    _fields_ = [("Data", POINTER(FTombstoneData)), ("Count", int), ("Max", int)]


class TArray_URB_ConstraintInstancePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(URB_ConstraintInstance))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPopulationActor(Structure):
    _fields_ = [("Data", POINTER(FPopulationActor)), ("Count", int), ("Max", int)]


class TArray_FAIPawnPlaythroughData(Structure):
    _fields_ = [("Data", POINTER(FAIPawnPlaythroughData)), ("Count", int), ("Max", int)]


class TArray_Fs_actorList(Structure):
    _fields_ = [("Data", POINTER(Fs_actorList)), ("Count", int), ("Max", int)]


class TArray_FServerQueryToRulesResponseMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FServerQueryToRulesResponseMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVariableLink(Structure):
    _fields_ = [("Data", POINTER(FVariableLink)), ("Count", int), ("Max", int)]


class TArray_AStatusEffectReplicatedEmitterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AStatusEffectReplicatedEmitter))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGFxMovieDrawStylePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxMovieDrawStyle))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVehicleSeatDefinition(Structure):
    _fields_ = [("Data", POINTER(FVehicleSeatDefinition)), ("Count", int), ("Max", int)]


class TArray_FTimedAnimBehaviorEvent(Structure):
    _fields_ = [
        ("Data", POINTER(FTimedAnimBehaviorEvent)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FItemBuilderData(Structure):
    _fields_ = [("Data", POINTER(FItemBuilderData)), ("Count", int), ("Max", int)]


class TArray_FBlockedMissionData(Structure):
    _fields_ = [("Data", POINTER(FBlockedMissionData)), ("Count", int), ("Max", int)]


class TArray_FTier(Structure):
    _fields_ = [("Data", POINTER(FTier)), ("Count", int), ("Max", int)]


class TArray_USkeletalMeshSocketPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkeletalMeshSocket))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FEmitterDynamicParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FEmitterDynamicParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FColumnDataStruct(Structure):
    _fields_ = [("Data", POINTER(FColumnDataStruct)), ("Count", int), ("Max", int)]


class TArray_FDefinitionIconDatum(Structure):
    _fields_ = [("Data", POINTER(FDefinitionIconDatum)), ("Count", int), ("Max", int)]


class TArray_FMenuHeaderData(Structure):
    _fields_ = [("Data", POINTER(FMenuHeaderData)), ("Count", int), ("Max", int)]


class TArray_FUIProviderScriptFieldValue(Structure):
    _fields_ = [
        ("Data", POINTER(FUIProviderScriptFieldValue)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPropertyInfo(Structure):
    _fields_ = [("Data", POINTER(FPropertyInfo)), ("Count", int), ("Max", int)]


class TArray_FVehicleGameStageGradeWeightData(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleGameStageGradeWeightData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UDownloadableAssetLibraryDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableAssetLibraryDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FObjectiveUpdateData(Structure):
    _fields_ = [("Data", POINTER(FObjectiveUpdateData)), ("Count", int), ("Max", int)]


class TArray_FDialogueArgument(Structure):
    _fields_ = [("Data", POINTER(FDialogueArgument)), ("Count", int), ("Max", int)]


class TArray_FGrenadeModPartBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Data", POINTER(FGrenadeModPartBehaviorSequenceStateData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRelevanceBucketStruct(Structure):
    _fields_ = [("Data", POINTER(FRelevanceBucketStruct)), ("Count", int), ("Max", int)]


class TArray_FDrunkenWaveFormData(Structure):
    _fields_ = [("Data", POINTER(FDrunkenWaveFormData)), ("Count", int), ("Max", int)]


class TArray_UDownloadableVehicleDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableVehicleDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkillKillEventData(Structure):
    _fields_ = [("Data", POINTER(FSkillKillEventData)), ("Count", int), ("Max", int)]


class TArray_UGearboxDialogNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogNode))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAttributePresentationDamageTypeMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributePresentationDamageTypeMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FKCachedConvexData(Structure):
    _fields_ = [("Data", POINTER(FKCachedConvexData)), ("Count", int), ("Max", int)]


class TArray_UAnimNodeSlotPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAnimNodeSlot))), ("Count", int), ("Max", int)]


class TArray_FHitRegionEmitters(Structure):
    _fields_ = [("Data", POINTER(FHitRegionEmitters)), ("Count", int), ("Max", int)]


class TArray_USkillPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(USkill))), ("Count", int), ("Max", int)]


class TArray_FDynamicNavMeshConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FDynamicNavMeshConnection)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FProjectileClassEventData(Structure):
    _fields_ = [
        ("Data", POINTER(FProjectileClassEventData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFDamageMorphTargets(Structure):
    _fields_ = [("Data", POINTER(FFDamageMorphTargets)), ("Count", int), ("Max", int)]


class TArray_USkelControlLookAtPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkelControlLookAt))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFaceFXSoundCueKey(Structure):
    _fields_ = [("Data", POINTER(FFaceFXSoundCueKey)), ("Count", int), ("Max", int)]


class TArray_FAttachmentLocationData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttachmentLocationData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCompartmentRunList(Structure):
    _fields_ = [("Data", POINTER(FCompartmentRunList)), ("Count", int), ("Max", int)]


class TArray_UMorphTargetPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UMorphTarget))), ("Count", int), ("Max", int)]


class TArray_FRuleSetReference(Structure):
    _fields_ = [("Data", POINTER(FRuleSetReference)), ("Count", int), ("Max", int)]


class TArray_FDamagePair(Structure):
    _fields_ = [("Data", POINTER(FDamagePair)), ("Count", int), ("Max", int)]


class TArray_FLocationInfo(Structure):
    _fields_ = [("Data", POINTER(FLocationInfo)), ("Count", int), ("Max", int)]


class TArray_FUIAxisEmulationDefinition(Structure):
    _fields_ = [
        ("Data", POINTER(FUIAxisEmulationDefinition)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FStaticMeshLODInfo(Structure):
    _fields_ = [("Data", POINTER(FStaticMeshLODInfo)), ("Count", int), ("Max", int)]


class TArray_FCameraCutInfo(Structure):
    _fields_ = [("Data", POINTER(FCameraCutInfo)), ("Count", int), ("Max", int)]


class TArray_FPendingEntry(Structure):
    _fields_ = [("Data", POINTER(FPendingEntry)), ("Count", int), ("Max", int)]


class TArray_FViewParticleEmitterInstanceMotionBlurInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FViewParticleEmitterInstanceMotionBlurInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeathByDamageTypeStatID(Structure):
    _fields_ = [
        ("Data", POINTER(FDeathByDamageTypeStatID)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FShadowRelevanceSizePair(Structure):
    _fields_ = [
        ("Data", POINTER(FShadowRelevanceSizePair)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAIDefinitionRecord(Structure):
    _fields_ = [("Data", POINTER(FAIDefinitionRecord)), ("Count", int), ("Max", int)]


class TArray_FNavigationArea(Structure):
    _fields_ = [("Data", POINTER(FNavigationArea)), ("Count", int), ("Max", int)]


class TArray_FInputDeviceButtonData(Structure):
    _fields_ = [("Data", POINTER(FInputDeviceButtonData)), ("Count", int), ("Max", int)]


class TArray_FPlayerClassAchievementUnlockData(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerClassAchievementUnlockData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBlackMarketUpgradeLevelData(Structure):
    _fields_ = [
        ("Data", POINTER(FBlackMarketUpgradeLevelData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCachedInvData(Structure):
    _fields_ = [("Data", POINTER(FCachedInvData)), ("Count", int), ("Max", int)]


class TArray_FPerkData(Structure):
    _fields_ = [("Data", POINTER(FPerkData)), ("Count", int), ("Max", int)]


class TArray_FParticleSystemReplayFrame(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleSystemReplayFrame)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APylonPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(APylon))), ("Count", int), ("Max", int)]


class TArray_FBoolTrackKey(Structure):
    _fields_ = [("Data", POINTER(FBoolTrackKey)), ("Count", int), ("Max", int)]


class TArray_UGameplayEventsHandlerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGameplayEventsHandler))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSimpleAnimData(Structure):
    _fields_ = [("Data", POINTER(FSimpleAnimData)), ("Count", int), ("Max", int)]


class TArray_FDescriptionEntry(Structure):
    _fields_ = [("Data", POINTER(FDescriptionEntry)), ("Count", int), ("Max", int)]


class TArray_FNamedSession(Structure):
    _fields_ = [("Data", POINTER(FNamedSession)), ("Count", int), ("Max", int)]


class TArray_FHUDWidget_ChallengeData(Structure):
    _fields_ = [
        ("Data", POINTER(FHUDWidget_ChallengeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCoordinatedParticleSystemDefinition(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedParticleSystemDefinition)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APopulationOpportunityDenPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationOpportunityDen))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPendingClientAuth(Structure):
    _fields_ = [("Data", POINTER(FPendingClientAuth)), ("Count", int), ("Max", int)]


class TArray_FDuelTeamPair(Structure):
    _fields_ = [("Data", POINTER(FDuelTeamPair)), ("Count", int), ("Max", int)]


class TArray_FVector2D(Structure):
    _fields_ = [("Data", POINTER(FVector2D)), ("Count", int), ("Max", int)]


class TArray_FInjuredStringReplacementSet(Structure):
    _fields_ = [
        ("Data", POINTER(FInjuredStringReplacementSet)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAutoCompleteCommand(Structure):
    _fields_ = [("Data", POINTER(FAutoCompleteCommand)), ("Count", int), ("Max", int)]


class TArray_FWeaponBoneControllerData(Structure):
    _fields_ = [
        ("Data", POINTER(FWeaponBoneControllerData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDLCMissionData(Structure):
    _fields_ = [("Data", POINTER(FDLCMissionData)), ("Count", int), ("Max", int)]


class TArray_ULightComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULightComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPartyReservation(Structure):
    _fields_ = [("Data", POINTER(FPartyReservation)), ("Count", int), ("Max", int)]


class TArray_FSMMaterialSetterDatum(Structure):
    _fields_ = [("Data", POINTER(FSMMaterialSetterDatum)), ("Count", int), ("Max", int)]


class TArray_FSeqEventLink(Structure):
    _fields_ = [("Data", POINTER(FSeqEventLink)), ("Count", int), ("Max", int)]


class TArray_FSeqVarLink(Structure):
    _fields_ = [("Data", POINTER(FSeqVarLink)), ("Count", int), ("Max", int)]


class TArray_FSortableDataElement(Structure):
    _fields_ = [("Data", POINTER(FSortableDataElement)), ("Count", int), ("Max", int)]


class TArray_FCellInfo(Structure):
    _fields_ = [("Data", POINTER(FCellInfo)), ("Count", int), ("Max", int)]


class TArray_FSuspensionSound(Structure):
    _fields_ = [("Data", POINTER(FSuspensionSound)), ("Count", int), ("Max", int)]


class TArray_UTextureMoviePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UTextureMovie))), ("Count", int), ("Max", int)]


class TArray_FRuleSetRecord(Structure):
    _fields_ = [("Data", POINTER(FRuleSetRecord)), ("Count", int), ("Max", int)]


class TArray_FAlphaMap(Structure):
    _fields_ = [("Data", POINTER(FAlphaMap)), ("Count", int), ("Max", int)]


class TArray_AWillowBoundaryTurretPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowBoundaryTurret))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSMPerchRandomPair(Structure):
    _fields_ = [("Data", POINTER(FSMPerchRandomPair)), ("Count", int), ("Max", int)]


class TArray_UInterpGroupInstPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInterpGroupInst))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFilterKeyToSteamKeyMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FFilterKeyToSteamKeyMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FHitRegionDamage(Structure):
    _fields_ = [("Data", POINTER(FHitRegionDamage)), ("Count", int), ("Max", int)]


class TArray_FLockoutData(Structure):
    _fields_ = [("Data", POINTER(FLockoutData)), ("Count", int), ("Max", int)]


class TArray_FMapObjectData(Structure):
    _fields_ = [("Data", POINTER(FMapObjectData)), ("Count", int), ("Max", int)]


class TArray_FWireLinkage(Structure):
    _fields_ = [("Data", POINTER(FWireLinkage)), ("Count", int), ("Max", int)]


class TArray_UVehicleFamilyDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UVehicleFamilyDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTextMarkupEntry(Structure):
    _fields_ = [("Data", POINTER(FTextMarkupEntry)), ("Count", int), ("Max", int)]


class TArray_FGearBuilderCustomizationUsageData(Structure):
    _fields_ = [
        ("Data", POINTER(FGearBuilderCustomizationUsageData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FThirdPersonMenuView(Structure):
    _fields_ = [("Data", POINTER(FThirdPersonMenuView)), ("Count", int), ("Max", int)]


class TArray_FRuleInfo(Structure):
    _fields_ = [("Data", POINTER(FRuleInfo)), ("Count", int), ("Max", int)]


class TArray_UUIConfigFileProviderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UUIConfigFileProvider))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FClientFilterORClause(Structure):
    _fields_ = [("Data", POINTER(FClientFilterORClause)), ("Count", int), ("Max", int)]


class TArray_FAwarenessInfo(Structure):
    _fields_ = [("Data", POINTER(FAwarenessInfo)), ("Count", int), ("Max", int)]


class TArray_FAnimSetMeshLinkup(Structure):
    _fields_ = [("Data", POINTER(FAnimSetMeshLinkup)), ("Count", int), ("Max", int)]


class TArray_FExposureCacheStruct(Structure):
    _fields_ = [("Data", POINTER(FExposureCacheStruct)), ("Count", int), ("Max", int)]


class TArray_FSKURuntimeLibrarySet(Structure):
    _fields_ = [("Data", POINTER(FSKURuntimeLibrarySet)), ("Count", int), ("Max", int)]


class TArray_UPhysicalMaterialPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPhysicalMaterial))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAnimSetBakeAndPruneStatus(Structure):
    _fields_ = [
        ("Data", POINTER(FAnimSetBakeAndPruneStatus)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UPersistentSequenceDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPersistentSequenceData))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLevelStateRecord(Structure):
    _fields_ = [("Data", POINTER(FLevelStateRecord)), ("Count", int), ("Max", int)]


class TArray_FSparkOutstandingRequest(Structure):
    _fields_ = [
        ("Data", POINTER(FSparkOutstandingRequest)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FClanSwitchData(Structure):
    _fields_ = [("Data", POINTER(FClanSwitchData)), ("Count", int), ("Max", int)]


class TArray_FFlashTextEntry(Structure):
    _fields_ = [("Data", POINTER(FFlashTextEntry)), ("Count", int), ("Max", int)]


class TArray_FDamageOnlyOnceData(Structure):
    _fields_ = [("Data", POINTER(FDamageOnlyOnceData)), ("Count", int), ("Max", int)]


class TArray_UAwarenessZoneDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAwarenessZoneDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FColor(Structure):
    _fields_ = [("Data", POINTER(FColor)), ("Count", int), ("Max", int)]


class TArray_FExplosionScaleData(Structure):
    _fields_ = [("Data", POINTER(FExplosionScaleData)), ("Count", int), ("Max", int)]


class TArray_FChestData(Structure):
    _fields_ = [("Data", POINTER(FChestData)), ("Count", int), ("Max", int)]


class TArray_UAnimMetaDataPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAnimMetaData))), ("Count", int), ("Max", int)]


class TArray_UImpactDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UImpactDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGestaltSocketRemapEntry(Structure):
    _fields_ = [
        ("Data", POINTER(FGestaltSocketRemapEntry)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_URuleSetPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(URuleSet))), ("Count", int), ("Max", int)]


class TArray_FObjectReference(Structure):
    _fields_ = [("Data", POINTER(FObjectReference)), ("Count", int), ("Max", int)]


class TArray_FDeathByWeaponDamageStatID(Structure):
    _fields_ = [
        ("Data", POINTER(FDeathByWeaponDamageStatID)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTouchingPawn(Structure):
    _fields_ = [("Data", POINTER(FTouchingPawn)), ("Count", int), ("Max", int)]


class TArray_FHomingRadiusThreshold(Structure):
    _fields_ = [("Data", POINTER(FHomingRadiusThreshold)), ("Count", int), ("Max", int)]


class TArray_FEventUploadConfig(Structure):
    _fields_ = [("Data", POINTER(FEventUploadConfig)), ("Count", int), ("Max", int)]


class TArray_AWillowMindPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(AWillowMind))), ("Count", int), ("Max", int)]


class TArray_FGuid(Structure):
    _fields_ = [("Data", POINTER(FGuid)), ("Count", int), ("Max", int)]


class TArray_UInputDeviceDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInputDeviceDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FObjectiveIcon(Structure):
    _fields_ = [("Data", POINTER(FObjectiveIcon)), ("Count", int), ("Max", int)]


class TArray_FAkCallBackGetRTPC(Structure):
    _fields_ = [("Data", POINTER(FAkCallBackGetRTPC)), ("Count", int), ("Max", int)]


class TArray_UPhysicsJumpConnectionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPhysicsJumpConnection))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGestaltInfo(Structure):
    _fields_ = [("Data", POINTER(FGestaltInfo)), ("Count", int), ("Max", int)]


class TArray_UGFxMovieStatePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxMovieState))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ULandscapeHeightfieldCollisionComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULandscapeHeightfieldCollisionComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRELBManagerStats(Structure):
    _fields_ = [("Data", POINTER(FRELBManagerStats)), ("Count", int), ("Max", int)]


class TArray_UTexture2DPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UTexture2D))), ("Count", int), ("Max", int)]


class TArray_FSystemOption(Structure):
    _fields_ = [("Data", POINTER(FSystemOption)), ("Count", int), ("Max", int)]


class TArray_UAnimNodeBlendBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAnimNodeBlendBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTerrainFoliageMesh(Structure):
    _fields_ = [("Data", POINTER(FTerrainFoliageMesh)), ("Count", int), ("Max", int)]


class TArray_FGBXNavMeshPoly(Structure):
    _fields_ = [("Data", POINTER(FGBXNavMeshPoly)), ("Count", int), ("Max", int)]


class TArray_FLegacyCustomizationItemData(Structure):
    _fields_ = [
        ("Data", POINTER(FLegacyCustomizationItemData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FActivateOp(Structure):
    _fields_ = [("Data", POINTER(FActivateOp)), ("Count", int), ("Max", int)]


class TArray_USoundCuePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(USoundCue))), ("Count", int), ("Max", int)]


class TArray_FPriorityDebugStruct(Structure):
    _fields_ = [("Data", POINTER(FPriorityDebugStruct)), ("Count", int), ("Max", int)]


class TArray_FResultEntry(Structure):
    _fields_ = [("Data", POINTER(FResultEntry)), ("Count", int), ("Max", int)]


class TArray_FTimedMissionData(Structure):
    _fields_ = [("Data", POINTER(FTimedMissionData)), ("Count", int), ("Max", int)]


class TArray_FEncounterWaveData(Structure):
    _fields_ = [("Data", POINTER(FEncounterWaveData)), ("Count", int), ("Max", int)]


class TArray_FPopulationMasterStat(Structure):
    _fields_ = [("Data", POINTER(FPopulationMasterStat)), ("Count", int), ("Max", int)]


class TArray_FCoverSlot(Structure):
    _fields_ = [("Data", POINTER(FCoverSlot)), ("Count", int), ("Max", int)]


class TArray_FMaterialParticleSystemParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FMaterialParticleSystemParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLoadingMovieExceptionInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FLoadingMovieExceptionInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTargetInfoRecord(Structure):
    _fields_ = [("Data", POINTER(FTargetInfoRecord)), ("Count", int), ("Max", int)]


class TArray_ULevelPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ULevel))), ("Count", int), ("Max", int)]


class TArray_FSwoopAttackData(Structure):
    _fields_ = [("Data", POINTER(FSwoopAttackData)), ("Count", int), ("Max", int)]


class TArray_ULinePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ULine))), ("Count", int), ("Max", int)]


class TArray_FChildBoneBlendInfo(Structure):
    _fields_ = [("Data", POINTER(FChildBoneBlendInfo)), ("Count", int), ("Max", int)]


class TArray_USpecialMove_CloakPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMove_Cloak))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ADynamicSMActorPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ADynamicSMActor))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBlackMarketPostLaunchUpgradeData(Structure):
    _fields_ = [
        ("Data", POINTER(FBlackMarketPostLaunchUpgradeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDamageSurfaceTypeModifier(Structure):
    _fields_ = [
        ("Data", POINTER(FDamageSurfaceTypeModifier)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDebugListItem(Structure):
    _fields_ = [("Data", POINTER(FDebugListItem)), ("Count", int), ("Max", int)]


class TArray_FPainDialogLine(Structure):
    _fields_ = [("Data", POINTER(FPainDialogLine)), ("Count", int), ("Max", int)]


class TArray_FLoadCharacterData(Structure):
    _fields_ = [("Data", POINTER(FLoadCharacterData)), ("Count", int), ("Max", int)]


class TArray_UParticleEmitterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleEmitter))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNamedInterface(Structure):
    _fields_ = [("Data", POINTER(FNamedInterface)), ("Count", int), ("Max", int)]


class TArray_UPopulationBodyTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationBodyTag))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCoverReplicationInfo(Structure):
    _fields_ = [("Data", POINTER(FCoverReplicationInfo)), ("Count", int), ("Max", int)]


class TArray_FConsoleMessage(Structure):
    _fields_ = [("Data", POINTER(FConsoleMessage)), ("Count", int), ("Max", int)]


class TArray_FTeamEvents(Structure):
    _fields_ = [("Data", POINTER(FTeamEvents)), ("Count", int), ("Max", int)]


class TArray_FRotationTrack(Structure):
    _fields_ = [("Data", POINTER(FRotationTrack)), ("Count", int), ("Max", int)]


class TArray_FLocationBoneSocketInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FLocationBoneSocketInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPremiumCustomizationInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FPremiumCustomizationInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UInteractionPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UInteraction))), ("Count", int), ("Max", int)]


class TArray_USVehicleWheelPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USVehicleWheel))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBalancedInventoryData(Structure):
    _fields_ = [("Data", POINTER(FBalancedInventoryData)), ("Count", int), ("Max", int)]


class TArray_FParticleEvent_GenerateInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEvent_GenerateInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UTI_PrioritizePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTI_Prioritize))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFileNameToURLMapping(Structure):
    _fields_ = [("Data", POINTER(FFileNameToURLMapping)), ("Count", int), ("Max", int)]


class TArray_URB_ConstraintSetupPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(URB_ConstraintSetup))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSMNotify(Structure):
    _fields_ = [("Data", POINTER(FSMNotify)), ("Count", int), ("Max", int)]


class TArray_FAttachment(Structure):
    _fields_ = [("Data", POINTER(FAttachment)), ("Count", int), ("Max", int)]


class TArray_FAimAnimTransitionData(Structure):
    _fields_ = [("Data", POINTER(FAimAnimTransitionData)), ("Count", int), ("Max", int)]


class TArray_FMissionWidgetMessage(Structure):
    _fields_ = [("Data", POINTER(FMissionWidgetMessage)), ("Count", int), ("Max", int)]


class TArray_UParticleModuleOrbitPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleModuleOrbit))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDebugDisplayProperty(Structure):
    _fields_ = [("Data", POINTER(FDebugDisplayProperty)), ("Count", int), ("Max", int)]


class TArray_FMinimapObjectiveIconClip(Structure):
    _fields_ = [
        ("Data", POINTER(FMinimapObjectiveIconClip)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FItemBuilderBalanceDefinition(Structure):
    _fields_ = [
        ("Data", POINTER(FItemBuilderBalanceDefinition)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSoftBodySpecialBoneInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FSoftBodySpecialBoneInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FInputAxisData(Structure):
    _fields_ = [("Data", POINTER(FInputAxisData)), ("Count", int), ("Max", int)]


class TArray_FOnlineGameSearchResult(Structure):
    _fields_ = [
        ("Data", POINTER(FOnlineGameSearchResult)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkelMaterialSetterDatum(Structure):
    _fields_ = [
        ("Data", POINTER(FSkelMaterialSetterDatum)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPopulationOpportunityTracker(Structure):
    _fields_ = [
        ("Data", POINTER(FPopulationOpportunityTracker)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAchievementMappingInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FAchievementMappingInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FExtraWeaponSlot(Structure):
    _fields_ = [("Data", POINTER(FExtraWeaponSlot)), ("Count", int), ("Max", int)]


class TArray_FAnimGroup(Structure):
    _fields_ = [("Data", POINTER(FAnimGroup)), ("Count", int), ("Max", int)]


class TArray_FMinimapIconClip(Structure):
    _fields_ = [("Data", POINTER(FMinimapIconClip)), ("Count", int), ("Max", int)]


class TArray_FDlcLevelTravelPair(Structure):
    _fields_ = [("Data", POINTER(FDlcLevelTravelPair)), ("Count", int), ("Max", int)]


class TArray_FDynamicFlagInstanceData(Structure):
    _fields_ = [
        ("Data", POINTER(FDynamicFlagInstanceData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTerrainFilteredMaterial(Structure):
    _fields_ = [
        ("Data", POINTER(FTerrainFilteredMaterial)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCommentTrackKey(Structure):
    _fields_ = [("Data", POINTER(FCommentTrackKey)), ("Count", int), ("Max", int)]


class TArray_FColumnMetaData(Structure):
    _fields_ = [("Data", POINTER(FColumnMetaData)), ("Count", int), ("Max", int)]


class TArray_FAnimTag(Structure):
    _fields_ = [("Data", POINTER(FAnimTag)), ("Count", int), ("Max", int)]


class TArray_FSynchGroup(Structure):
    _fields_ = [("Data", POINTER(FSynchGroup)), ("Count", int), ("Max", int)]


class TArray_FPlayerInformation(Structure):
    _fields_ = [("Data", POINTER(FPlayerInformation)), ("Count", int), ("Max", int)]


class TArray_UParticleModuleEventReceiverBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleModuleEventReceiverBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSMExpressionList(Structure):
    _fields_ = [("Data", POINTER(FSMExpressionList)), ("Count", int), ("Max", int)]


class TArray_UDownloadablePackageLicenseItemPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadablePackageLicenseItem))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UParticleSystemReplayPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleSystemReplay))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTurretDamageEffectData(Structure):
    _fields_ = [
        ("Data", POINTER(FTurretDamageEffectData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAkPlayingInfo(Structure):
    _fields_ = [("Data", POINTER(FAkPlayingInfo)), ("Count", int), ("Max", int)]


class TArray_FGBXNavMeshPolyData(Structure):
    _fields_ = [("Data", POINTER(FGBXNavMeshPolyData)), ("Count", int), ("Max", int)]


class TArray_FAimOffsetProfile(Structure):
    _fields_ = [("Data", POINTER(FAimOffsetProfile)), ("Count", int), ("Max", int)]


class TArray_FObstaclePoint(Structure):
    _fields_ = [("Data", POINTER(FObstaclePoint)), ("Count", int), ("Max", int)]


class TArray_FRagdollDeathImpulseStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FRagdollDeathImpulseStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSplineConnection(Structure):
    _fields_ = [("Data", POINTER(FSplineConnection)), ("Count", int), ("Max", int)]


class TArray_FMissionObserversData(Structure):
    _fields_ = [("Data", POINTER(FMissionObserversData)), ("Count", int), ("Max", int)]


class TArray_FItemCardInfo(Structure):
    _fields_ = [("Data", POINTER(FItemCardInfo)), ("Count", int), ("Max", int)]


class TArray_FMaterialViewRelevance(Structure):
    _fields_ = [("Data", POINTER(FMaterialViewRelevance)), ("Count", int), ("Max", int)]


class TArray_FWorldEventSource(Structure):
    _fields_ = [("Data", POINTER(FWorldEventSource)), ("Count", int), ("Max", int)]


class TArray_FInputDeviceAxisData(Structure):
    _fields_ = [("Data", POINTER(FInputDeviceAxisData)), ("Count", int), ("Max", int)]


class TArray_FDebugLoadBalance(Structure):
    _fields_ = [("Data", POINTER(FDebugLoadBalance)), ("Count", int), ("Max", int)]


class TArray_FPawnClassEventData(Structure):
    _fields_ = [("Data", POINTER(FPawnClassEventData)), ("Count", int), ("Max", int)]


class TArray_APatrolDestinationPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APatrolDestination))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FScalarParameterValueOverTime(Structure):
    _fields_ = [
        ("Data", POINTER(FScalarParameterValueOverTime)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_USpecialMoveDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMoveDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FVehicleCrewAnimSetMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleCrewAnimSetMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FKeyRebindingData(Structure):
    _fields_ = [("Data", POINTER(FKeyRebindingData)), ("Count", int), ("Max", int)]


class TArray_USkelControlBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USkelControlBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGameSettingsCfg(Structure):
    _fields_ = [("Data", POINTER(FGameSettingsCfg)), ("Count", int), ("Max", int)]


class TArray_UApexClothingAssetPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UApexClothingAsset))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGearboxDialogEventTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogEventTag))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCurveKey(Structure):
    _fields_ = [("Data", POINTER(FCurveKey)), ("Count", int), ("Max", int)]


class TArray_FProductCustomizationInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FProductCustomizationInfo)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGearboxDialogPriorityPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogPriority))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_USpecialMove_DodgePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMove_Dodge))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFeatherBoneBlendTarget(Structure):
    _fields_ = [
        ("Data", POINTER(FFeatherBoneBlendTarget)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCoverDebugInfo(Structure):
    _fields_ = [("Data", POINTER(FCoverDebugInfo)), ("Count", int), ("Max", int)]


class TArray_FCoverDebugPriority(Structure):
    _fields_ = [("Data", POINTER(FCoverDebugPriority)), ("Count", int), ("Max", int)]


class TArray_FEmoteStance(Structure):
    _fields_ = [("Data", POINTER(FEmoteStance)), ("Count", int), ("Max", int)]


class TArray_FGameStatGroup(Structure):
    _fields_ = [("Data", POINTER(FGameStatGroup)), ("Count", int), ("Max", int)]


class TArray_FPropertyToColumn(Structure):
    _fields_ = [("Data", POINTER(FPropertyToColumn)), ("Count", int), ("Max", int)]


class TArray_FMovieRangeStateData(Structure):
    _fields_ = [("Data", POINTER(FMovieRangeStateData)), ("Count", int), ("Max", int)]


class TArray_FServerAuthRetry(Structure):
    _fields_ = [("Data", POINTER(FServerAuthRetry)), ("Count", int), ("Max", int)]


class TArray_FFloatMaterialParamMICData(Structure):
    _fields_ = [
        ("Data", POINTER(FFloatMaterialParamMICData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_ULandscapeComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULandscapeComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UBodyWeaponHoldDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBodyWeaponHoldDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FActorParticleSystemParameter(Structure):
    _fields_ = [
        ("Data", POINTER(FActorParticleSystemParameter)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AWwiseSoundVolumePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWwiseSoundVolume))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FFiringPatternLine(Structure):
    _fields_ = [("Data", POINTER(FFiringPatternLine)), ("Count", int), ("Max", int)]


class TArray_FLightProjectile(Structure):
    _fields_ = [("Data", POINTER(FLightProjectile)), ("Count", int), ("Max", int)]


class TArray_UWillowPursuitGridPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWillowPursuitGrid))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPursuitNodeData(Structure):
    _fields_ = [("Data", POINTER(FPursuitNodeData)), ("Count", int), ("Max", int)]


class TArray_FVirtualSeatStruct(Structure):
    _fields_ = [("Data", POINTER(FVirtualSeatStruct)), ("Count", int), ("Max", int)]


class TArray_FPlayerSkillTreeSkillData(Structure):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeSkillData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTeamInformation(Structure):
    _fields_ = [("Data", POINTER(FTeamInformation)), ("Count", int), ("Max", int)]


class TArray_FActionSequenceRandomData(Structure):
    _fields_ = [
        ("Data", POINTER(FActionSequenceRandomData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FParticleEventDeathData(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEventDeathData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APopulationPointPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationPoint))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAkEventTrackKey(Structure):
    _fields_ = [("Data", POINTER(FAkEventTrackKey)), ("Count", int), ("Max", int)]


class TArray_ULevelTravelStationDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(ULevelTravelStationDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UAkEventPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UAkEvent))), ("Count", int), ("Max", int)]


class TArray_FCustomizationUnlockData(Structure):
    _fields_ = [
        ("Data", POINTER(FCustomizationUnlockData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FWeaponTypeSelectorData(Structure):
    _fields_ = [
        ("Data", POINTER(FWeaponTypeSelectorData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkelControlModifier(Structure):
    _fields_ = [("Data", POINTER(FSkelControlModifier)), ("Count", int), ("Max", int)]


class TArray_FShellCasingImpact(Structure):
    _fields_ = [("Data", POINTER(FShellCasingImpact)), ("Count", int), ("Max", int)]


class TArray_FWorldDiscoveryData(Structure):
    _fields_ = [("Data", POINTER(FWorldDiscoveryData)), ("Count", int), ("Max", int)]


class TArray_FAnimControlTrackKey(Structure):
    _fields_ = [("Data", POINTER(FAnimControlTrackKey)), ("Count", int), ("Max", int)]


class TArray_UBadassRewardDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBadassRewardDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNamedNetDriver(Structure):
    _fields_ = [("Data", POINTER(FNamedNetDriver)), ("Count", int), ("Max", int)]


class TArray_FBodyWeaponActionPostureData(Structure):
    _fields_ = [
        ("Data", POINTER(FBodyWeaponActionPostureData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APlayerReplicationInfoPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APlayerReplicationInfo))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeferredLeaderboardWrite(Structure):
    _fields_ = [
        ("Data", POINTER(FDeferredLeaderboardWrite)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSavedRandomValue(Structure):
    _fields_ = [("Data", POINTER(FSavedRandomValue)), ("Count", int), ("Max", int)]


class TArray_FGroupAnimationAndSoundIdentifier(Structure):
    _fields_ = [
        ("Data", POINTER(FGroupAnimationAndSoundIdentifier)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FInputRemappingButtonData(Structure):
    _fields_ = [
        ("Data", POINTER(FInputRemappingButtonData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCoordinatedAudioDefinition(Structure):
    _fields_ = [
        ("Data", POINTER(FCoordinatedAudioDefinition)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_APortalVolumePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(APortalVolume))), ("Count", int), ("Max", int)]


class TArray_UMaterialExpressionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMaterialExpression))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCameraLerpKeyFrame(Structure):
    _fields_ = [("Data", POINTER(FCameraLerpKeyFrame)), ("Count", int), ("Max", int)]


class TArray_UInputContextDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UInputContextDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UTI_CalcPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UTI_Calc))), ("Count", int), ("Max", int)]


class TArray_FLevelStreamingData(Structure):
    _fields_ = [("Data", POINTER(FLevelStreamingData)), ("Count", int), ("Max", int)]


class TArray_FLeaderboardEntry(Structure):
    _fields_ = [("Data", POINTER(FLeaderboardEntry)), ("Count", int), ("Max", int)]


class TArray_FPathSizeInfo(Structure):
    _fields_ = [("Data", POINTER(FPathSizeInfo)), ("Count", int), ("Max", int)]


class TArray_FSkelControlListHead(Structure):
    _fields_ = [("Data", POINTER(FSkelControlListHead)), ("Count", int), ("Max", int)]


class TArray_UBehaviorSequenceCustomEnableConditionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBehaviorSequenceCustomEnableCondition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLocalizedSubtitle(Structure):
    _fields_ = [("Data", POINTER(FLocalizedSubtitle)), ("Count", int), ("Max", int)]


class TArray_FCurveTrack(Structure):
    _fields_ = [("Data", POINTER(FCurveTrack)), ("Count", int), ("Max", int)]


class TArray_URB_BodyInstancePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(URB_BodyInstance))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FProviderRecord(Structure):
    _fields_ = [("Data", POINTER(FProviderRecord)), ("Count", int), ("Max", int)]


class TArray_FIndependentSelectionData(Structure):
    _fields_ = [
        ("Data", POINTER(FIndependentSelectionData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCustomCringeData(Structure):
    _fields_ = [("Data", POINTER(FCustomCringeData)), ("Count", int), ("Max", int)]


class TArray_FUnlockItemData(Structure):
    _fields_ = [("Data", POINTER(FUnlockItemData)), ("Count", int), ("Max", int)]


class TArray_FMovieInstanceArray(Structure):
    _fields_ = [("Data", POINTER(FMovieInstanceArray)), ("Count", int), ("Max", int)]


class TArray_USpecialMove_MotionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMove_Motion))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FWeaponAmmoResourceSelectorData(Structure):
    _fields_ = [
        ("Data", POINTER(FWeaponAmmoResourceSelectorData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGBXNavMeshVertex(Structure):
    _fields_ = [("Data", POINTER(FGBXNavMeshVertex)), ("Count", int), ("Max", int)]


class TArray_FDefendMissionData(Structure):
    _fields_ = [("Data", POINTER(FDefendMissionData)), ("Count", int), ("Max", int)]


class TArray_FTranslationTrack(Structure):
    _fields_ = [("Data", POINTER(FTranslationTrack)), ("Count", int), ("Max", int)]


class TArray_FChallengeData(Structure):
    _fields_ = [("Data", POINTER(FChallengeData)), ("Count", int), ("Max", int)]


class TArray_AWillowElevatorPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowElevator))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AAIDebugDummyBasePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AAIDebugDummyBase))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UAudioComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAudioComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FLinearColor(Structure):
    _fields_ = [("Data", POINTER(FLinearColor)), ("Count", int), ("Max", int)]


class TArray_FVehicleHandlingWheelData(Structure):
    _fields_ = [
        ("Data", POINTER(FVehicleHandlingWheelData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FOutputLinkToStruct(Structure):
    _fields_ = [("Data", POINTER(FOutputLinkToStruct)), ("Count", int), ("Max", int)]


class TArray_FRuleRecord(Structure):
    _fields_ = [("Data", POINTER(FRuleRecord)), ("Count", int), ("Max", int)]


class TArray_FTalkActData(Structure):
    _fields_ = [("Data", POINTER(FTalkActData)), ("Count", int), ("Max", int)]


class TArray_FPlayThroughData(Structure):
    _fields_ = [("Data", POINTER(FPlayThroughData)), ("Count", int), ("Max", int)]


class TArray_FTestMapsListDatum(Structure):
    _fields_ = [("Data", POINTER(FTestMapsListDatum)), ("Count", int), ("Max", int)]


class TArray_FRuleEngineLoadBalanceStruct(Structure):
    _fields_ = [
        ("Data", POINTER(FRuleEngineLoadBalanceStruct)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FConditionalPattern(Structure):
    _fields_ = [("Data", POINTER(FConditionalPattern)), ("Count", int), ("Max", int)]


class TArray_UBalanceModifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBalanceModifierDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNodeData(Structure):
    _fields_ = [("Data", POINTER(FNodeData)), ("Count", int), ("Max", int)]


class TArray_FInjuredLoopOverride(Structure):
    _fields_ = [("Data", POINTER(FInjuredLoopOverride)), ("Count", int), ("Max", int)]


class TArray_FWeaponBoneControllerInstance(Structure):
    _fields_ = [
        ("Data", POINTER(FWeaponBoneControllerInstance)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UStaticMeshComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UStaticMeshComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FCurveEdTab(Structure):
    _fields_ = [("Data", POINTER(FCurveEdTab)), ("Count", int), ("Max", int)]


class TArray_FParticleSystemLOD(Structure):
    _fields_ = [("Data", POINTER(FParticleSystemLOD)), ("Count", int), ("Max", int)]


class TArray_FParticleEventSpawnData(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEventSpawnData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRTPCSetting(Structure):
    _fields_ = [("Data", POINTER(FRTPCSetting)), ("Count", int), ("Max", int)]


class TArray_FDeferredLeaderboardRead(Structure):
    _fields_ = [
        ("Data", POINTER(FDeferredLeaderboardRead)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDeltaTrackInfo(Structure):
    _fields_ = [("Data", POINTER(FDeltaTrackInfo)), ("Count", int), ("Max", int)]


class TArray_FBankSlot(Structure):
    _fields_ = [("Data", POINTER(FBankSlot)), ("Count", int), ("Max", int)]


class TArray_FLandscapeLayerInfo(Structure):
    _fields_ = [("Data", POINTER(FLandscapeLayerInfo)), ("Count", int), ("Max", int)]


class TArray_FCardInfo(Structure):
    _fields_ = [("Data", POINTER(FCardInfo)), ("Count", int), ("Max", int)]


class TArray_FUIMenuInputMap(Structure):
    _fields_ = [("Data", POINTER(FUIMenuInputMap)), ("Count", int), ("Max", int)]


class TArray_FDialogEventData(Structure):
    _fields_ = [("Data", POINTER(FDialogEventData)), ("Count", int), ("Max", int)]


class TArray_FHybridNavVisualizationVertsForNavPoint(Structure):
    _fields_ = [
        ("Data", POINTER(FHybridNavVisualizationVertsForNavPoint)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNetworkChannelData(Structure):
    _fields_ = [("Data", POINTER(FNetworkChannelData)), ("Count", int), ("Max", int)]


class TArray_FVisibilityTrackKey(Structure):
    _fields_ = [("Data", POINTER(FVisibilityTrackKey)), ("Count", int), ("Max", int)]


class TArray_UCameraAnimInstPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UCameraAnimInst))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGeomSelection(Structure):
    _fields_ = [("Data", POINTER(FGeomSelection)), ("Count", int), ("Max", int)]


class TArray_FScreenParticleRecord(Structure):
    _fields_ = [("Data", POINTER(FScreenParticleRecord)), ("Count", int), ("Max", int)]


class TArray_FSKULibrarySet(Structure):
    _fields_ = [("Data", POINTER(FSKULibrarySet)), ("Count", int), ("Max", int)]


class TArray_UGearboxDialogNameTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogNameTag))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AWillowPlayerPawnPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowPlayerPawn))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBalancedInventoryDataMirror(Structure):
    _fields_ = [
        ("Data", POINTER(FBalancedInventoryDataMirror)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UAttributePresentationDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttributePresentationDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData(
    Structure
):
    _fields_ = [
        (
            "Data",
            POINTER(
                UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData
            ),
        ),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FMatrix(Structure):
    _fields_ = [("Data", POINTER(FMatrix)), ("Count", int), ("Max", int)]


class TArray_FBehaviorSequenceData(Structure):
    _fields_ = [("Data", POINTER(FBehaviorSequenceData)), ("Count", int), ("Max", int)]


class TArray_UTerrainWeightMapTexturePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTerrainWeightMapTexture))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AWillowVehiclePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AWillowVehicle))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AEnvironmentVolumePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AEnvironmentVolume))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UMissionWeaponBalanceDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMissionWeaponBalanceDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UTranslatorTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTranslatorTag))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UGbxMessagePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UGbxMessage))), ("Count", int), ("Max", int)]


class TArray_FChosenVehicleCustomization(Structure):
    _fields_ = [
        ("Data", POINTER(FChosenVehicleCustomization)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FMissionPlaythroughSaveGameData(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionPlaythroughSaveGameData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRemoveObject(Structure):
    _fields_ = [("Data", POINTER(FRemoveObject)), ("Count", int), ("Max", int)]


class TArray_FEmitterBaseInfo(Structure):
    _fields_ = [("Data", POINTER(FEmitterBaseInfo)), ("Count", int), ("Max", int)]


class TArray_UVertexPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UVertex))), ("Count", int), ("Max", int)]


class TArray_FNamedInterfaceDef(Structure):
    _fields_ = [("Data", POINTER(FNamedInterfaceDef)), ("Count", int), ("Max", int)]


class TArray_FLastVisibleInfo(Structure):
    _fields_ = [("Data", POINTER(FLastVisibleInfo)), ("Count", int), ("Max", int)]


class TArray_FPhysicalMaterialTireModel(Structure):
    _fields_ = [
        ("Data", POINTER(FPhysicalMaterialTireModel)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPointExposureData(Structure):
    _fields_ = [("Data", POINTER(FPointExposureData)), ("Count", int), ("Max", int)]


class TArray_FVisiblePortalInfo(Structure):
    _fields_ = [("Data", POINTER(FVisiblePortalInfo)), ("Count", int), ("Max", int)]


class TArray_FDebugTextInfo(Structure):
    _fields_ = [("Data", POINTER(FDebugTextInfo)), ("Count", int), ("Max", int)]


class TArray_FTerrainLayer(Structure):
    _fields_ = [("Data", POINTER(FTerrainLayer)), ("Count", int), ("Max", int)]


class TArray_FPendingMissionRewardsData(Structure):
    _fields_ = [
        ("Data", POINTER(FPendingMissionRewardsData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FSkelMeshActorControlTarget(Structure):
    _fields_ = [
        ("Data", POINTER(FSkelMeshActorControlTarget)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FParticleEventKismetData(Structure):
    _fields_ = [
        ("Data", POINTER(FParticleEventKismetData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FtMenuData(Structure):
    _fields_ = [("Data", POINTER(FtMenuData)), ("Count", int), ("Max", int)]


class TArray_FStatusEffectNameMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FStatusEffectNameMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UInterpGroupPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UInterpGroup))), ("Count", int), ("Max", int)]


class TArray_FMissionWaypointsData(Structure):
    _fields_ = [("Data", POINTER(FMissionWaypointsData)), ("Count", int), ("Max", int)]


class TArray_FAudioComponentParam(Structure):
    _fields_ = [("Data", POINTER(FAudioComponentParam)), ("Count", int), ("Max", int)]


class TArray_FInputRemappingAxisData(Structure):
    _fields_ = [
        ("Data", POINTER(FInputRemappingAxisData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FDamageTypeExpModifier(Structure):
    _fields_ = [("Data", POINTER(FDamageTypeExpModifier)), ("Count", int), ("Max", int)]


class TArray_ATeamInfoPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(ATeamInfo))), ("Count", int), ("Max", int)]


class TArray_FDynamicLinkInfo(Structure):
    _fields_ = [("Data", POINTER(FDynamicLinkInfo)), ("Count", int), ("Max", int)]


class TArray_FDropProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Data", POINTER(FDropProjectileBehaviorSequenceStateData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FRegionGameStageData(Structure):
    _fields_ = [("Data", POINTER(FRegionGameStageData)), ("Count", int), ("Max", int)]


class TArray_FCreditsLine(Structure):
    _fields_ = [("Data", POINTER(FCreditsLine)), ("Count", int), ("Max", int)]


class TArray_FNetViewer(Structure):
    _fields_ = [("Data", POINTER(FNetViewer)), ("Count", int), ("Max", int)]


class TArray_UInterpTrackPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UInterpTrack))), ("Count", int), ("Max", int)]


class TArray_FEvalActionData(Structure):
    _fields_ = [("Data", POINTER(FEvalActionData)), ("Count", int), ("Max", int)]


class TArray_FDialogBoxLayout(Structure):
    _fields_ = [("Data", POINTER(FDialogBoxLayout)), ("Count", int), ("Max", int)]


class TArray_UDownloadableBalanceModifierDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDownloadableBalanceModifierDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FActiveMorph(Structure):
    _fields_ = [("Data", POINTER(FActiveMorph)), ("Count", int), ("Max", int)]


class TArray_FBeamState(Structure):
    _fields_ = [("Data", POINTER(FBeamState)), ("Count", int), ("Max", int)]


class TArray_FSoundTrackKey(Structure):
    _fields_ = [("Data", POINTER(FSoundTrackKey)), ("Count", int), ("Max", int)]


class TArray_FMovieStateData(Structure):
    _fields_ = [("Data", POINTER(FMovieStateData)), ("Count", int), ("Max", int)]


class TArray_UFastTravelStationDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFastTravelStationDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UNavMeshGoal_FilterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UNavMeshGoal_Filter))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FConnectedPeerInfo(Structure):
    _fields_ = [("Data", POINTER(FConnectedPeerInfo)), ("Count", int), ("Max", int)]


class TArray_AControllerPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(AController))), ("Count", int), ("Max", int)]


class TArray_FPursuitNode(Structure):
    _fields_ = [("Data", POINTER(FPursuitNode)), ("Count", int), ("Max", int)]


class TArray_FInputMatchRequest(Structure):
    _fields_ = [("Data", POINTER(FInputMatchRequest)), ("Count", int), ("Max", int)]


class TArray_FMorphNodeConn(Structure):
    _fields_ = [("Data", POINTER(FMorphNodeConn)), ("Count", int), ("Max", int)]


class TArray_FKismetDrawTextInfo(Structure):
    _fields_ = [("Data", POINTER(FKismetDrawTextInfo)), ("Count", int), ("Max", int)]


class TArray_FPlayerDataStoreGroup(Structure):
    _fields_ = [("Data", POINTER(FPlayerDataStoreGroup)), ("Count", int), ("Max", int)]


class TArray_FViewConeInfo(Structure):
    _fields_ = [("Data", POINTER(FViewConeInfo)), ("Count", int), ("Max", int)]


class TArray_FSoundThemeBinding(Structure):
    _fields_ = [("Data", POINTER(FSoundThemeBinding)), ("Count", int), ("Max", int)]


class TArray_FFishtailingInfo(Structure):
    _fields_ = [("Data", POINTER(FFishtailingInfo)), ("Count", int), ("Max", int)]


class TArray_FAttributeCategory(Structure):
    _fields_ = [("Data", POINTER(FAttributeCategory)), ("Count", int), ("Max", int)]


class TArray_FCustomInput(Structure):
    _fields_ = [("Data", POINTER(FCustomInput)), ("Count", int), ("Max", int)]


class TArray_FFadePickupParticle(Structure):
    _fields_ = [("Data", POINTER(FFadePickupParticle)), ("Count", int), ("Max", int)]


class TArray_FAttributeInitializationData(Structure):
    _fields_ = [
        ("Data", POINTER(FAttributeInitializationData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FAchievementProgressStat(Structure):
    _fields_ = [
        ("Data", POINTER(FAchievementProgressStat)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UWillowImpactDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UWillowImpactDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_AMassiveLODOverrideVolumePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AMassiveLODOverrideVolume))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UParticleSystemPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UParticleSystem))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FPostProcessChainRecord(Structure):
    _fields_ = [
        ("Data", POINTER(FPostProcessChainRecord)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FMissionPlaythroughData(Structure):
    _fields_ = [
        ("Data", POINTER(FMissionPlaythroughData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FBehaviorKeyFrameEventData(Structure):
    _fields_ = [
        ("Data", POINTER(FBehaviorKeyFrameEventData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FTrailSamplePoint(Structure):
    _fields_ = [("Data", POINTER(FTrailSamplePoint)), ("Count", int), ("Max", int)]


class TArray_FNounAttributeState(Structure):
    _fields_ = [("Data", POINTER(FNounAttributeState)), ("Count", int), ("Max", int)]


class TArray_FLiftBodyPair(Structure):
    _fields_ = [("Data", POINTER(FLiftBodyPair)), ("Count", int), ("Max", int)]


class TArray_FUnloadableDlcChallengeData(Structure):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcChallengeData)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FStoredFoliageInstance(Structure):
    _fields_ = [("Data", POINTER(FStoredFoliageInstance)), ("Count", int), ("Max", int)]


class TArray_FFaceFXTrackKey(Structure):
    _fields_ = [("Data", POINTER(FFaceFXTrackKey)), ("Count", int), ("Max", int)]


class TArray_FNewsArticle(Structure):
    _fields_ = [("Data", POINTER(FNewsArticle)), ("Count", int), ("Max", int)]


class TArray_FCustomizationSizeMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FCustomizationSizeMapping)),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FGFxTextEntry(Structure):
    _fields_ = [("Data", POINTER(FGFxTextEntry)), ("Count", int), ("Max", int)]


class TArray_UVSSUIDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UVSSUIDefinition))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_UDecalComponentPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UDecalComponent))),
        ("Count", int),
        ("Max", int),
    ]


class TArray_FNamedObjectProperty(Structure):
    _fields_ = [("Data", POINTER(FNamedObjectProperty)), ("Count", int), ("Max", int)]


class TArray_FNameEntryPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(FNameEntry))), ("Count", int), ("Max", int)]


BL2SDK.g_TArrayTypes = [
    "FName",
    "char",
    "FInterpCurvePointVector2D",
    "FInterpCurvePointFloat",
    "FInterpCurvePointVector",
    "float",
    "FInterpCurvePointLinearColor",
    "FInterpCurvePointQuat",
    "FInterpCurvePointTwoVectors",
    "int",
    "FString",
    "FStaticMeshLODElement",
    "FRigidBodyContactInfo",
    "FKeyValuePair",
    "FPlayerResponseLine",
    "FStringIdToStringMapping",
    "FIdToStringMapping",
    "FSettingsData",
    "FOnlineRegistrant",
    "FOnlineArbitrationRegistrant",
    "FSettingsProperty",
    "unsigned_char",
    "FAppIdLicenseInfo",
    "FNamedOnlineContent",
    "FInstanceDataUnion",
    "FOnlineGameSearchParameter",
    "FOnlineGameSearchORClause",
    "FOnlineGameSearchSortClause",
    "FUniqueNetId",
    "FDouble",
    "UTexturePtr",
    "FSeqOpOutputInputLink",
    "USequenceVariablePtr",
    "USequenceEventPtr",
    "BOOL",
    "FGestaltLODModelFragment",
    "FGestaltLODModel",
    "FSocketRemapEntry",
    "FGestaltAccessoryEntry",
    "FInputEntry",
    "FVector",
    "FPlane",
    "FKSphereElem",
    "FKBoxElem",
    "FKSphylElem",
    "FKConvexElem",
    "FQuat",
    "FTimeModifier",
    "FBranchInfo",
    "FWeightRule",
    "FAimComponent",
    "FBoneAtom",
    "UAnimNodeSequencePtr",
    "FSubtitleCue",
    "UMorphTargetSetPtr",
    "UAnimSetPtr",
    "FNxDestructibleDepthParameters",
    "FAttributeExpressionData",
    "FConditionalValueExpression",
    "FBehaviorParameterUnion",
    "UBehaviorBasePtr",
    "UShadowMap2DPtr",
    "UObjectPtr",
    "USequenceOpPtr",
    "FPointer",
    "FFireLink",
    "FSlotMoveRef",
    "FCoverInfo",
    "FManualCoverTypeInfo",
    "UUIDataStorePtr",
    "FStatColorMapEntry",
    "FPrimitiveMaterialRef",
    "FPostProcessMaterialRef",
    "FPerPlayerSplitscreenData",
    "FGBXNavmeshCrossLevelConnection",
    "FGBXNavMeshSpecialMove",
    "FGBXNavMeshLookupCell",
    "FIGBXNavMeshObstaclePointer",
    "FGBXNavMeshPathPoint",
    "FEdgePointer",
    "FGestaltAccessoryPartEntry",
    "FGestaltAccessoryGroupEntry",
    "FHybridNavVisualizationVert",
    "FBodyInstanceDataUnion",
    "FCurveEdEntry",
    "UMaterialInstanceConstantPtr",
    "FInterpLookupPoint",
    "UMaterialInterfacePtr",
    "UMorphNodeBasePtr",
    "UUIDataProviderPtr",
    "FOnlineStatsColumn",
    "UParticleModuleEventSendToGamePtr",
    "FParticleEmitterReplayFrame",
    "FKCachedConvexDataElement",
    "FTriangleSortSettings",
    "FRecognisableWord",
    "FScriptInterface",
    "FTerrainDecorationInstance",
    "FTerrainDecoration",
    "UUIDataProvider_SettingsPtr",
    "UAkComponentPtr",
    "AActorPtr",
    "USequenceObjectPtr",
    "FImpactInfo",
    "ANavigationPointPtr",
    "UReachSpecPtr",
    "USequencePtr",
    "FOnlineContent",
    "FCompatibilityOnlineContent",
    "APlayerControllerPtr",
    "FRotator",
    "FCanvasUVTri",
    "FOnlinePlayerScore",
    "ATriggerPtr",
    "UClassPtr",
    "ULocalPlayerPtr",
    "UAnimNodePtr",
    "FInfoBarData",
    "FLocalizedStringSetting",
    "FBiasedGoalActor",
    "FAnimSlotInfo",
    "AVolumePtr",
    "UInterpDataPtr",
    "FScriptDelegate",
    "FUIDataProviderField",
    "UUIResourceCombinationProviderPtr",
    "UUIResourceDataProviderPtr",
    "UUIDataProvider_MenuItemPtr",
    "FBonePair",
    "ASplineActorPtr",
    "FAppliedAttributeEffect",
    "FAttributeEffectData",
    "FConditionalSoundData",
    "UPrimitiveComponentPtr",
    "USkeletalMeshPtr",
    "FOnlinePartyMember",
    "FSpeechRecognizedWord",
    "FMarketplaceContent",
    "FOnlineCrossTitleContent",
    "FAchievementDetails",
    "FOnlineFriendMessage",
    "FOnlineFriend",
    "FFriendsQuery",
    "FCommunityContentFile",
    "FCurrentPlayerMet",
    "FGameEvents",
    "FASValue",
    "UGFxObjectPtr",
    "UExpressionEvaluatorPtr",
    "FCoverDebugScoringInfo",
    "FObjectKey",
    "FBehaviorVariableLinkData",
    "FBehaviorActionLinkData",
    "FBehaviorOutputLinkData",
    "FBehaviorEventData",
    "FBehaviorEventData2",
    "FBehaviorSequenceActionData",
    "FBehaviorSequenceActionData2",
    "FBehaviorVariableData",
    "FBehaviorOutputLinkData2",
    "FBehaviorVariableLinkData2",
    "UGearboxEditorNodePtr",
    "FVantageSpot",
    "FExposureUpdateStruct",
    "UFiringConditionPtr",
    "FFlagEvalConditional",
    "FEntitlementResult",
    "FOfferResult",
    "FServiceParameterResult",
    "FServiceResult",
    "FGearboxDialogData",
    "UAttributeModifierPtr",
    "FCoverDebugScoringData",
    "FTargetPriorityInfo",
    "FGestaltPart",
    "UGearboxGFxMoviePtr",
    "UPopulationSpawnedActorTagDefinitionPtr",
    "APopulationOpportunityPtr",
    "FEncounterLimitData",
    "FSpawnedPopulationActor",
    "FRemovedPopulationActor",
    "FEncounterWaveTracker",
    "FPopulationOptionAreaPopDefData",
    "FPopulationOptionSpawnDefData",
    "FDebugStringData",
    "AGearboxAIMoveNodePtr",
    "UGearboxDialogGroupPtr",
    "FEULAData",
    "FGestaltPartPermutation",
    "FSMBehavior",
    "URulePtr",
    "UKnowledgeRecordPtr",
    "FFlagDefinitionInitialization",
    "AGearboxPawnPtr",
    "UPopulationFactoryPtr",
    "UBehaviorProviderDefinitionPtr",
    "FBehaviorVariableValue",
    "UGearboxAccountOfferPtr",
    "UGearboxAccountEntitlementPtr",
    "UJsonObjectPtr",
    "FConnectionBandwidthStats",
    "FConfiguredGameSetting",
    "FInventorySwap",
    "FPlayerReservation",
    "FPlayerMember",
    "FEnvironmentalEffectInfo",
    "FPlayerStat",
    "FSteamPlayerClanData",
    "USpecialMove_CringePtr",
    "UParticleSystemComponentPtr",
    "FAttributeBaseValueData",
    "FAITransformedName",
    "UItemPoolListDefinitionPtr",
    "FItemPoolInfo",
    "FCardInfoRelativeToPanel",
    "UMissionObjectiveSetDefinitionPtr",
    "FAttributeScalarParam",
    "FScreenParticleModifier",
    "FScreenParticleScalarParamOverTime",
    "FScreenParticleVectorParamOverTime",
    "FMaterialEffectModifier",
    "FParticleSysParam",
    "FFontParameterValue",
    "FScalarParameterValue",
    "FTextureParameterValue",
    "FVectorParameterValue",
    "FRtpcParameterValue",
    "UBodyHitRegionDefinitionPtr",
    "FSocketEmitter",
    "FConditionalAnimData",
    "FBodyWeaponActionData",
    "FGoreTriggerData",
    "UWillowAnimNode_SimplePtr",
    "FSkillDamagedEventConstraintData",
    "USkillDefinitionPtr",
    "USkillExpressionEvaluatorDefinitionPtr",
    "FBonusAttributeModifierUpgrade",
    "UMissionDefinitionPtr",
    "UGameBalanceDefinitionPtr",
    "FPendingMissionRewardData",
    "FMissionStatusPlayerData",
    "FUnloadableDlcMissionStatusData",
    "FUnloadableDlcPendingRewardData",
    "UWillowSkelControl_TurretConstrainedPtr",
    "FTimePosition",
    "USpecialMove_VehiclePtr",
    "UChallengeConditionDefinitionPtr",
    "UDamageTypeDefinitionPtr",
    "FInventoryGameStageGradeWeightData",
    "FManufacturerCustomGradeWeightData",
    "FItemPartGradeWeightData",
    "FCoordinatedScalarParameter",
    "FCoordinatedVectorParameter",
    "FLootAttachmentData",
    "UInteractiveObjectLootListDefinitionPtr",
    "FLootConfigurationData",
    "FColiseumStat",
    "UWaypointComponentPtr",
    "FMissionStateBalanceAdjustment",
    "UInputActionDefinitionPtr",
    "UItemPoolDefinitionPtr",
    "UInventoryBalanceDefinitionPtr",
    "FPartGradeWeightData",
    "FRelevanceUpdateStruct",
    "AWillowPlayerControllerPtr",
    "FWeaponMemento",
    "FItemMemento",
    "FDamageTypeBySpeedStruct",
    "FBoneRotateData",
    "FAnimDeltaDataList",
    "FAnimSwapData",
    "FCoordinatedEffectThread",
    "FColumnLayoutData",
    "FDialogBoxButton",
    "FCriticalTextMessage",
    "FInputDeviceButtonAddress",
    "FVehicleSpawnStationPooledVehicle",
    "FSpawnAnimPair",
    "FColumnData",
    "FGearBuilderWeightedInventoryPart",
    "FGearBuilderWeightedWeaponPart",
    "FGearBuilderCustomizationData",
    "FTempWeaponStruct",
    "FLevelBasedStatusEffectChanceScale",
    "FLevelBasedDamageScale",
    "UAIPawnBalanceModifierDefinitionPtr",
    "UCustomizationDefinitionPtr",
    "UGearboxAnimDefinitionPtr",
    "FModifierValuePresentationData",
    "FTopStatData",
    "FSpawnedDroppedLootData",
    "FSpawnedAttachedLootData",
    "FMissionDirectorData",
    "UClassModDefinitionPtr",
    "FShopItemData",
    "AWillowWeaponPtr",
    "AWillowItemPtr",
    "AWillowInventoryPtr",
    "FMissionRewardPresentationData",
    "UMissionObjectiveWaypointComponentPtr",
    "UMissionObjectiveDefinitionPtr",
    "FGoldenKeySource",
    "UKeyedItemPoolDefinitionPtr",
    "UChallengeDefinitionPtr",
    "APawnPtr",
    "AWillowPickupPtr",
    "FMissionRewardData",
    "FWeaponSaveGameData",
    "FInventorySaveGameData",
    "FStatusMenuMissionEligibilityData",
    "FSlaughterMissionChain",
    "USkeletalMeshComponentPtr",
    "UActorComponentPtr",
    "AWillowPawnPtr",
    "FActiveStatusEffect",
    "UStatusEffectDefinitionPtr",
    "FCurrencyPresentation",
    "UPlayerNameIdentifierDefinitionPtr",
    "UItemNamePartDefinitionPtr",
    "UStanceTypeDefinitionPtr",
    "FPlayerSaveData",
    "FConditionalAnimationData",
    "UWeaponNamePartDefinitionPtr",
    "UAttackLocationPtr",
    "Fartifact_datum",
    "UDownloadableExpansionDefinitionPtr",
    "FPCContextMenuItem",
    "FCellContentData",
    "FMessageOfTheDay",
    "UMindTargetInfoPtr",
    "UInputRemappingDefinitionPtr",
    "FTimerData",
    "USeqAct_LatentPtr",
    "FSkeletalMeshLODInfo",
    "FLeaderboardTemplate",
    "FManufacturerSelectorData",
    "URulePlaceholderPtr",
    "UBlockingMeshComponentPtr",
    "FCustomBodyHandIKHoldData",
    "FVehicleEffect",
    "AWeaponShotDebugPtr",
    "AWillowDynamicNavMeshConnectionPointPtr",
    "FBoneAngleMorph",
    "FRecogVocabulary",
    "UDownloadablePackageDefinitionPtr",
    "FGBXConnectedNavMesh",
    "FDeathByWeaponStatID",
    "FIniLocFileEntry",
    "FSeqOpOutputLink",
    "FGCReference",
    "FScaledHUDElement",
    "FBehaviorTriggerMessageStruct",
    "ARallyPointPtr",
    "FGameplayEventMetaData",
    "FSeasonPassPackageCount",
    "FWeightmapLayerAllocationInfo",
    "FScalarParameterInterpStruct",
    "FScalarMaterialParameter",
    "FNewsCacheEntry",
    "FInputContextData",
    "FPlayerLineInfo",
    "FActorReference",
    "FConditionalExplosionData",
    "UCylinderComponentPtr",
    "FWillowStatProperty",
    "FTeleportKeyData",
    "UFaceFXAnimSetPtr",
    "UBlackMarketUpgradeDefinitionPtr",
    "FInteractiveObjectGameStageGradeWeightData",
    "FOngoingEffectInfo",
    "FPlayerSkillTreeTierData",
    "FOnlineStatusContextMapping",
    "FBoneMirrorInfo",
    "AWillowElevatorButtonPtr",
    "FAttributeSlotUpgradeData",
    "FAIPawnGameStageGradeWeightData",
    "FTechDeathData",
    "FLevelStreamingStatus",
    "FSettingsPropertyPropertyMetaData",
    "FLevelStreamingNameCombo",
    "FFeatherBoneBlendData",
    "FBucketStruct",
    "UDownloadableCharacterDefinitionPtr",
    "FSkillConstraintData",
    "FAIResourceRestriction",
    "FInstancedStaticMeshMappingInfo",
    "FTankSensor",
    "UInterpTrackInstPtr",
    "FDeferredSkillActivationData",
    "FWorldLightingOverride",
    "FStateAttributeData",
    "FPlayerEvents",
    "FDamageClassEventData",
    "FPresetGeneratedPoint",
    "FAuthSession",
    "FMaterialReferenceList",
    "USplineMeshComponentPtr",
    "FBehaviorsSelectionData",
    "FVehicleCrewMappingStruct",
    "UInstancedDesignerAttributePtr",
    "FAttributePriorityData",
    "FKeyBindInfo",
    "FUnloadableDlcRegionGameStageData",
    "FHeadTrackingKey",
    "FSkillDamageEventData",
    "FNamedSkillEvent",
    "FDebugConsoleCommand",
    "FPrismDataContainer",
    "FSortFilterConfiguration",
    "ADroppedPickupPtr",
    "UUIConfigSectionProviderPtr",
    "UDownloadableItemSetDefinitionPtr",
    "FFontParameterValueOverTime",
    "FTaggedMarketplaceContent",
    "FSoundEventMapping",
    "FAggregateEventMapping",
    "FSkillEventResponseData",
    "FSplitscreenData",
    "UFlagDefinitionPtr",
    "FGBXNavMeshObstacleData",
    "FGFxMenuLink",
    "FDataProviderInfo",
    "FPerBoneMaskInfo",
    "FRawAnimSequenceTrack",
    "FTitleFileMapping",
    "FDirectorTrackCut",
    "UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData",
    "UTrainingMessageDefinitionPtr",
    "FParticleReplayTrackKey",
    "UGBXCrossLevelReferenceContainerPtr",
    "FFoliageMesh",
    "FParticleBurst",
    "FInstancedStaticMeshInstanceData",
    "FOnlineStatusPropertyMapping",
    "FPlaylistPopulation",
    "UPawnAllegiancePtr",
    "FCoordinatedEffectProcess",
    "FLabelToLinkageMapping",
    "FRelevanceCacheStruct",
    "APortalTeleporterPtr",
    "FDeviceLookAxisData",
    "FGBXNavMeshPathSize",
    "FSwitchObjectCase",
    "FTerrainDecoLayer",
    "ACoverLinkPtr",
    "FEnemyBreadCrumbStruct",
    "FSkillEffectData",
    "UGearboxAccountDataPtr",
    "FTurretEffect",
    "FAvailableTrackedSkill",
    "FTextureMaterialParameter",
    "FHeavyInventoryElement",
    "UPlayerClassIdentifierDefinitionPtr",
    "FHUDAnchorPoint",
    "FTrailSample",
    "FBehaviorAliasReference",
    "FParticleEventCollideData",
    "FSettingsArrayProvider",
    "UFractureMaterialPtr",
    "FColorParticleSystemParameter",
    "FNPCList",
    "UAttributeContextResolverPtr",
    "FAIHoldData",
    "FNavMeshPathSize",
    "FDropNoteInfo",
    "USparkServiceConfigurationPtr",
    "FServerQueryToPingResponseMapping",
    "AInventoryPtr",
    "FWeaponClassEventData",
    "AWillowReplicatedAmbientSoundSourcePtr",
    "FAppliedSkillEffect",
    "FLocalizedStringSettingMetaData",
    "FAIThrowProjectileBehaviorSequenceStateData",
    "FObstacleData",
    "URB_BodySetupPtr",
    "FDebugExposure",
    "FLensFlareElement",
    "FMapSpecificBalanceModificationList",
    "FPendingCustomization",
    "FEnvironmentalEffectSetting",
    "FInstalledContentInfo",
    "FClientBeaconConnection",
    "FIpAddr",
    "FActionSequenceRecord",
    "ATerrain_FTerrainWeightedMaterial",
    "FVectorParameterValueOverTime",
    "FBehaviorContextData",
    "FPopulationAreaOptionSpawnData",
    "FAITreeData",
    "FSpeedTravelData",
    "FWaveformSample",
    "FOnlineProfileSetting",
    "FSoftBodyTetraLink",
    "FResourceSaveGameData",
    "FRejectedContentInfo",
    "FTargetedPlayerState",
    "FRegionBalanceData",
    "FOutputLink",
    "FSMRandomPair",
    "FMarketplaceOffer",
    "FGestaltAccessoryNameEntry",
    "FSpawnAnimData",
    "UParticleModulePtr",
    "FManufacturerGradeData",
    "FVectorMaterialParameter",
    "FOccludedVolume",
    "FUIStatData",
    "FExternalTexture",
    "FPostProcessOverlayInfo",
    "FEmotePortraitInfo",
    "FUIDataStoreInputAlias",
    "UOnlineStatsReadPtr",
    "FActiveInteraction",
    "FCoverMeshes",
    "FGameSearchCfg",
    "FScalarParticleSystemParameter",
    "FGrenadeModBehaviorSequenceStateData",
    "FHitActorData",
    "FRemoteTalker",
    "FSourceTexture2DRegion",
    "FThumbnailLightData",
    "FSwitchClassInfo",
    "APerchPtr",
    "FThumbnailRenderData",
    "UGFxActorMoviePoolPtr",
    "FPopulationOptionAreaData",
    "FConditionLevel",
    "FLevelBasedExpScale",
    "FPerchAnimData",
    "AWillowInteractiveObjectPtr",
    "FPendingClientTrainingMessage",
    "FGFxWidgetBinding",
    "FAIHoldDebugData",
    "AWillowProjectilePtr",
    "FDirectionData",
    "UApexComponentBasePtr",
    "UDamagePipelinePtr",
    "FOnlineStatusMapping",
    "FImpactResponseData",
    "FInventoryManufacturerBalanceData",
    "FInputButtonData",
    "UGBXDefinitionPtr",
    "FBalanceModification",
    "FAttributeSlotEffectData",
    "UCameraModifierPtr",
    "FQueuedActivationInfo",
    "FAkEventResolver",
    "FConditionalParticleEffectData",
    "UWillowAIBlackboardComponentPtr",
    "UPackageAssetSublibraryPtr",
    "FClanMaterialData",
    "FMenuItemCallback",
    "FUnloadableDlcItemSaveGameData",
    "FGameClassShortName",
    "FStatColorMapping",
    "UDLCLegacyPlayerClassIdentifierDefinitionPtr",
    "APlayerStandInPtr",
    "FOnlineStatsRow",
    "FBulletImpactEventData",
    "FSkelMeshComponentLODInfo",
    "FExpAwardWeight",
    "FParticleEventTraceData",
    "FMarketPlaceFilter",
    "FBehaviorCondition",
    "FScreenMessageString",
    "FOpinionData",
    "FAnimNotifyEvent",
    "FUnloadableDlcLockoutData",
    "FValidNameRange",
    "FClientMeshBeaconConnection",
    "FLensFlareElementMaterials",
    "FKnowledgeRecordStruct",
    "FSelectedTerrainVertex",
    "FTargetDebugDatum",
    "FViewIdToLeaderboardName",
    "FTitleFileMcp",
    "FQueuedAvatarRequest",
    "APopulationEncounterPtr",
    "FDecalReceiver",
    "FTierLayout",
    "FTextureParameterValueOverTime",
    "FGestaltPartBoundsEntry",
    "UFiringZoneDefinitionPtr",
    "FCreditsTextureInfo",
    "FExpansionData",
    "FRecentParty",
    "FRarityLevelColor",
    "FMissionStatusData",
    "UAttributeValueResolverPtr",
    "UTerrainComponentPtr",
    "FPlayerIcon",
    "FLightValues",
    "FSeasonPassOfferUnion",
    "FLootData",
    "FTerrainInfoData",
    "FPlaylist",
    "FPlayerStorageArrayProvider",
    "FResolution",
    "UDownloadableContentDefinitionPtr",
    "FUIStatModifierData",
    "UGearboxDialogEventDataPtr",
    "FEventTrackKey",
    "FSlotAnimParameters",
    "UFontPtr",
    "UTextureRenderTarget2DPtr",
    "FVehicleSeatInstance",
    "FDynamicResourceProviderDefinition",
    "USkillTreeBranchDefinitionPtr",
    "FClothSpecialBoneInfo",
    "FTaggedGFxMovie",
    "UPostProcessChainPtr",
    "FOneOffLevelChallengeData",
    "FPendingPlayerStats",
    "UParticleLODLevelPtr",
    "UDownloadableCustomizationSetDefinitionPtr",
    "FToggleTrackKey",
    "ULevelStreamingPtr",
    "ALevelStreamingVolumePtr",
    "FAnimBlendChild",
    "FGFxDataStoreBinding",
    "FCullDistanceSizePair",
    "FPostProcessSettingsOverride",
    "FPlayerSkillTreeBranchData",
    "FEventRecord",
    "FActiveDecalInfo",
    "FLevelTransitionData",
    "FGestaltAccessoryMeshEntry",
    "UChildConnectionPtr",
    "UGBXNavMeshPathModifierPtr",
    "FKeyBind",
    "FBreathingLoopInfo",
    "UObjectReferencerPtr",
    "FSoundClassAdjuster",
    "FAIResourceData",
    "FVectorParticleSystemParameter",
    "FPauseTimerData",
    "FAIPawnPlaythroughThreeData",
    "FRecentExplosion",
    "UResourcePoolDefinitionPtr",
    "FPersistentMapDependencies",
    "FStatusEffectTypeCommonProperties",
    "FCustomizationItemData",
    "FAnimBlendInfo",
    "UPostProcessEffectPtr",
    "FAchievementUnlockData",
    "AEmitterCameraLensEffectBasePtr",
    "FSeqOpInputLink",
    "FDamageTypeSelectorData",
    "FCameraShakeInstance",
    "FOneTimeDataElement",
    "FRandomAnimInfo",
    "FMoveToCellData",
    "FGameResourceDataProvider",
    "FEffectSoundData",
    "AWillowDialogEchoActorPtr",
    "AWillowSpectatorPointPtr",
    "FBalanceMeResourceUpgradePath",
    "USoundNodePtr",
    "FFullyLoadedPackagesInfo",
    "FFontCharacter",
    "FSpecialMoveData",
    "FBulletTimerEvent",
    "UParticleModuleSpawnBasePtr",
    "FVectorMaterialParamMICData",
    "FGPMCollection",
    "FVehicleDefaultCrewStruct",
    "FPanelInfo",
    "FSpeedKillData",
    "FKillSkillDuration",
    "FInventorySerialNumber",
    "UMarketingUnlockDefinitionPtr",
    "FLocalAuthSession",
    "FDamageReactionData",
    "FEncounterTracker",
    "FListener",
    "UInputSetDefinitionPtr",
    "FSourceObjectData",
    "FMissionData",
    "FUnloadableDlcWeaponSaveGameData",
    "FSkillActionData",
    "ULineSegmentPtr",
    "FProfileDefinition",
    "FGameTypePrefix",
    "FPlayerOwnedComponent",
    "FTerrainHeight",
    "FNameBasedObjectPath",
    "FStaticMeshComponentLODInfo",
    "AGearboxPlayerControllerPtr",
    "FDeveloperData",
    "FHitTargetRecord",
    "FSkillSaveGameData",
    "FFlagEvalORConnector",
    "UAnimSequencePtr",
    "UPackagePtr",
    "FTitleFile",
    "FMarketplaceOfferData",
    "FTombstoneData",
    "URB_ConstraintInstancePtr",
    "FPopulationActor",
    "FAIPawnPlaythroughData",
    "Fs_actorList",
    "FServerQueryToRulesResponseMapping",
    "FVariableLink",
    "AStatusEffectReplicatedEmitterPtr",
    "UGFxMovieDrawStylePtr",
    "FVehicleSeatDefinition",
    "FTimedAnimBehaviorEvent",
    "FItemBuilderData",
    "FBlockedMissionData",
    "FTier",
    "USkeletalMeshSocketPtr",
    "FEmitterDynamicParameter",
    "FColumnDataStruct",
    "FDefinitionIconDatum",
    "FMenuHeaderData",
    "FUIProviderScriptFieldValue",
    "FPropertyInfo",
    "FVehicleGameStageGradeWeightData",
    "UDownloadableAssetLibraryDefinitionPtr",
    "FObjectiveUpdateData",
    "FDialogueArgument",
    "FGrenadeModPartBehaviorSequenceStateData",
    "FRelevanceBucketStruct",
    "FDrunkenWaveFormData",
    "UDownloadableVehicleDefinitionPtr",
    "FSkillKillEventData",
    "UGearboxDialogNodePtr",
    "FAttributePresentationDamageTypeMapping",
    "FKCachedConvexData",
    "UAnimNodeSlotPtr",
    "FHitRegionEmitters",
    "USkillPtr",
    "FDynamicNavMeshConnection",
    "FProjectileClassEventData",
    "FFDamageMorphTargets",
    "USkelControlLookAtPtr",
    "FFaceFXSoundCueKey",
    "FAttachmentLocationData",
    "FCompartmentRunList",
    "UMorphTargetPtr",
    "FRuleSetReference",
    "FDamagePair",
    "FLocationInfo",
    "FUIAxisEmulationDefinition",
    "FStaticMeshLODInfo",
    "FCameraCutInfo",
    "FPendingEntry",
    "FViewParticleEmitterInstanceMotionBlurInfo",
    "FDeathByDamageTypeStatID",
    "FShadowRelevanceSizePair",
    "FAIDefinitionRecord",
    "FNavigationArea",
    "FInputDeviceButtonData",
    "FPlayerClassAchievementUnlockData",
    "FBlackMarketUpgradeLevelData",
    "FCachedInvData",
    "FPerkData",
    "FParticleSystemReplayFrame",
    "APylonPtr",
    "FBoolTrackKey",
    "UGameplayEventsHandlerPtr",
    "FSimpleAnimData",
    "FDescriptionEntry",
    "FNamedSession",
    "FHUDWidget_ChallengeData",
    "FCoordinatedParticleSystemDefinition",
    "APopulationOpportunityDenPtr",
    "FPendingClientAuth",
    "FDuelTeamPair",
    "FVector2D",
    "FInjuredStringReplacementSet",
    "FAutoCompleteCommand",
    "FWeaponBoneControllerData",
    "FDLCMissionData",
    "ULightComponentPtr",
    "FPartyReservation",
    "FSMMaterialSetterDatum",
    "FSeqEventLink",
    "FSeqVarLink",
    "FSortableDataElement",
    "FCellInfo",
    "FSuspensionSound",
    "UTextureMoviePtr",
    "FRuleSetRecord",
    "FAlphaMap",
    "AWillowBoundaryTurretPtr",
    "FSMPerchRandomPair",
    "UInterpGroupInstPtr",
    "FFilterKeyToSteamKeyMapping",
    "FHitRegionDamage",
    "FLockoutData",
    "FMapObjectData",
    "FWireLinkage",
    "UVehicleFamilyDefinitionPtr",
    "FTextMarkupEntry",
    "FGearBuilderCustomizationUsageData",
    "FThirdPersonMenuView",
    "FRuleInfo",
    "UUIConfigFileProviderPtr",
    "FClientFilterORClause",
    "FAwarenessInfo",
    "FAnimSetMeshLinkup",
    "FExposureCacheStruct",
    "FSKURuntimeLibrarySet",
    "UPhysicalMaterialPtr",
    "FAnimSetBakeAndPruneStatus",
    "UPersistentSequenceDataPtr",
    "FLevelStateRecord",
    "FSparkOutstandingRequest",
    "FClanSwitchData",
    "FFlashTextEntry",
    "FDamageOnlyOnceData",
    "UAwarenessZoneDefinitionPtr",
    "FColor",
    "FExplosionScaleData",
    "FChestData",
    "UAnimMetaDataPtr",
    "UImpactDefinitionPtr",
    "FGestaltSocketRemapEntry",
    "URuleSetPtr",
    "FObjectReference",
    "FDeathByWeaponDamageStatID",
    "FTouchingPawn",
    "FHomingRadiusThreshold",
    "FEventUploadConfig",
    "AWillowMindPtr",
    "FGuid",
    "UInputDeviceDefinitionPtr",
    "FObjectiveIcon",
    "FAkCallBackGetRTPC",
    "UPhysicsJumpConnectionPtr",
    "FGestaltInfo",
    "UGFxMovieStatePtr",
    "ULandscapeHeightfieldCollisionComponentPtr",
    "FRELBManagerStats",
    "UTexture2DPtr",
    "FSystemOption",
    "UAnimNodeBlendBasePtr",
    "FTerrainFoliageMesh",
    "FGBXNavMeshPoly",
    "FLegacyCustomizationItemData",
    "FActivateOp",
    "USoundCuePtr",
    "FPriorityDebugStruct",
    "FResultEntry",
    "FTimedMissionData",
    "FEncounterWaveData",
    "FPopulationMasterStat",
    "FCoverSlot",
    "FMaterialParticleSystemParameter",
    "FLoadingMovieExceptionInfo",
    "FTargetInfoRecord",
    "ULevelPtr",
    "FSwoopAttackData",
    "ULinePtr",
    "FChildBoneBlendInfo",
    "USpecialMove_CloakPtr",
    "ADynamicSMActorPtr",
    "FBlackMarketPostLaunchUpgradeData",
    "FDamageSurfaceTypeModifier",
    "FDebugListItem",
    "FPainDialogLine",
    "FLoadCharacterData",
    "UParticleEmitterPtr",
    "FNamedInterface",
    "UPopulationBodyTagPtr",
    "FCoverReplicationInfo",
    "FConsoleMessage",
    "FTeamEvents",
    "FRotationTrack",
    "FLocationBoneSocketInfo",
    "FPremiumCustomizationInfo",
    "UInteractionPtr",
    "USVehicleWheelPtr",
    "FBalancedInventoryData",
    "FParticleEvent_GenerateInfo",
    "UTI_PrioritizePtr",
    "FFileNameToURLMapping",
    "URB_ConstraintSetupPtr",
    "FSMNotify",
    "FAttachment",
    "FAimAnimTransitionData",
    "FMissionWidgetMessage",
    "UParticleModuleOrbitPtr",
    "FDebugDisplayProperty",
    "FMinimapObjectiveIconClip",
    "FItemBuilderBalanceDefinition",
    "FSoftBodySpecialBoneInfo",
    "FInputAxisData",
    "FOnlineGameSearchResult",
    "FSkelMaterialSetterDatum",
    "FPopulationOpportunityTracker",
    "FAchievementMappingInfo",
    "FExtraWeaponSlot",
    "FAnimGroup",
    "FMinimapIconClip",
    "FDlcLevelTravelPair",
    "FDynamicFlagInstanceData",
    "FTerrainFilteredMaterial",
    "FCommentTrackKey",
    "FColumnMetaData",
    "FAnimTag",
    "FSynchGroup",
    "FPlayerInformation",
    "UParticleModuleEventReceiverBasePtr",
    "FSMExpressionList",
    "UDownloadablePackageLicenseItemPtr",
    "UParticleSystemReplayPtr",
    "FTurretDamageEffectData",
    "FAkPlayingInfo",
    "FGBXNavMeshPolyData",
    "FAimOffsetProfile",
    "FObstaclePoint",
    "FRagdollDeathImpulseStruct",
    "FSplineConnection",
    "FMissionObserversData",
    "FItemCardInfo",
    "FMaterialViewRelevance",
    "FWorldEventSource",
    "FInputDeviceAxisData",
    "FDebugLoadBalance",
    "FPawnClassEventData",
    "APatrolDestinationPtr",
    "FScalarParameterValueOverTime",
    "USpecialMoveDefinitionPtr",
    "FVehicleCrewAnimSetMapping",
    "FKeyRebindingData",
    "USkelControlBasePtr",
    "FGameSettingsCfg",
    "UApexClothingAssetPtr",
    "UGearboxDialogEventTagPtr",
    "FCurveKey",
    "FProductCustomizationInfo",
    "UGearboxDialogPriorityPtr",
    "USpecialMove_DodgePtr",
    "FFeatherBoneBlendTarget",
    "FCoverDebugInfo",
    "FCoverDebugPriority",
    "FEmoteStance",
    "FGameStatGroup",
    "FPropertyToColumn",
    "FMovieRangeStateData",
    "FServerAuthRetry",
    "FFloatMaterialParamMICData",
    "ULandscapeComponentPtr",
    "UBodyWeaponHoldDefinitionPtr",
    "FActorParticleSystemParameter",
    "AWwiseSoundVolumePtr",
    "FFiringPatternLine",
    "FLightProjectile",
    "UWillowPursuitGridPtr",
    "FPursuitNodeData",
    "FVirtualSeatStruct",
    "FPlayerSkillTreeSkillData",
    "FTeamInformation",
    "FActionSequenceRandomData",
    "FParticleEventDeathData",
    "APopulationPointPtr",
    "FAkEventTrackKey",
    "ULevelTravelStationDefinitionPtr",
    "UAkEventPtr",
    "FCustomizationUnlockData",
    "FWeaponTypeSelectorData",
    "FSkelControlModifier",
    "FShellCasingImpact",
    "FWorldDiscoveryData",
    "FAnimControlTrackKey",
    "UBadassRewardDefinitionPtr",
    "FNamedNetDriver",
    "FBodyWeaponActionPostureData",
    "APlayerReplicationInfoPtr",
    "FDeferredLeaderboardWrite",
    "FSavedRandomValue",
    "FGroupAnimationAndSoundIdentifier",
    "FInputRemappingButtonData",
    "FCoordinatedAudioDefinition",
    "APortalVolumePtr",
    "UMaterialExpressionPtr",
    "FCameraLerpKeyFrame",
    "UInputContextDefinitionPtr",
    "UTI_CalcPtr",
    "FLevelStreamingData",
    "FLeaderboardEntry",
    "FPathSizeInfo",
    "FSkelControlListHead",
    "UBehaviorSequenceCustomEnableConditionPtr",
    "FLocalizedSubtitle",
    "FCurveTrack",
    "URB_BodyInstancePtr",
    "FProviderRecord",
    "FIndependentSelectionData",
    "FCustomCringeData",
    "FUnlockItemData",
    "FMovieInstanceArray",
    "USpecialMove_MotionPtr",
    "FWeaponAmmoResourceSelectorData",
    "FGBXNavMeshVertex",
    "FDefendMissionData",
    "FTranslationTrack",
    "FChallengeData",
    "AWillowElevatorPtr",
    "AAIDebugDummyBasePtr",
    "UAudioComponentPtr",
    "FLinearColor",
    "FVehicleHandlingWheelData",
    "FOutputLinkToStruct",
    "FRuleRecord",
    "FTalkActData",
    "FPlayThroughData",
    "FTestMapsListDatum",
    "FRuleEngineLoadBalanceStruct",
    "FConditionalPattern",
    "UBalanceModifierDefinitionPtr",
    "FNodeData",
    "FInjuredLoopOverride",
    "FWeaponBoneControllerInstance",
    "UStaticMeshComponentPtr",
    "FCurveEdTab",
    "FParticleSystemLOD",
    "FParticleEventSpawnData",
    "FRTPCSetting",
    "FDeferredLeaderboardRead",
    "FDeltaTrackInfo",
    "FBankSlot",
    "FLandscapeLayerInfo",
    "FCardInfo",
    "FUIMenuInputMap",
    "FDialogEventData",
    "FHybridNavVisualizationVertsForNavPoint",
    "FNetworkChannelData",
    "FVisibilityTrackKey",
    "UCameraAnimInstPtr",
    "FGeomSelection",
    "FScreenParticleRecord",
    "FSKULibrarySet",
    "UGearboxDialogNameTagPtr",
    "AWillowPlayerPawnPtr",
    "FBalancedInventoryDataMirror",
    "UAttributePresentationDefinitionPtr",
    "UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData",
    "FMatrix",
    "FBehaviorSequenceData",
    "UTerrainWeightMapTexturePtr",
    "AWillowVehiclePtr",
    "AEnvironmentVolumePtr",
    "UMissionWeaponBalanceDefinitionPtr",
    "UTranslatorTagPtr",
    "UGbxMessagePtr",
    "FChosenVehicleCustomization",
    "FMissionPlaythroughSaveGameData",
    "FRemoveObject",
    "FEmitterBaseInfo",
    "UVertexPtr",
    "FNamedInterfaceDef",
    "FLastVisibleInfo",
    "FPhysicalMaterialTireModel",
    "FPointExposureData",
    "FVisiblePortalInfo",
    "FDebugTextInfo",
    "FTerrainLayer",
    "FPendingMissionRewardsData",
    "FSkelMeshActorControlTarget",
    "FParticleEventKismetData",
    "FtMenuData",
    "FStatusEffectNameMapping",
    "UInterpGroupPtr",
    "FMissionWaypointsData",
    "FAudioComponentParam",
    "FInputRemappingAxisData",
    "FDamageTypeExpModifier",
    "ATeamInfoPtr",
    "FDynamicLinkInfo",
    "FDropProjectileBehaviorSequenceStateData",
    "FRegionGameStageData",
    "FCreditsLine",
    "FNetViewer",
    "UInterpTrackPtr",
    "FEvalActionData",
    "FDialogBoxLayout",
    "UDownloadableBalanceModifierDefinitionPtr",
    "FActiveMorph",
    "FBeamState",
    "FSoundTrackKey",
    "FMovieStateData",
    "UFastTravelStationDefinitionPtr",
    "UNavMeshGoal_FilterPtr",
    "FConnectedPeerInfo",
    "AControllerPtr",
    "FPursuitNode",
    "FInputMatchRequest",
    "FMorphNodeConn",
    "FKismetDrawTextInfo",
    "FPlayerDataStoreGroup",
    "FViewConeInfo",
    "FSoundThemeBinding",
    "FFishtailingInfo",
    "FAttributeCategory",
    "FCustomInput",
    "FFadePickupParticle",
    "FAttributeInitializationData",
    "FAchievementProgressStat",
    "UWillowImpactDefinitionPtr",
    "AMassiveLODOverrideVolumePtr",
    "UParticleSystemPtr",
    "FPostProcessChainRecord",
    "FMissionPlaythroughData",
    "FBehaviorKeyFrameEventData",
    "FTrailSamplePoint",
    "FNounAttributeState",
    "FLiftBodyPair",
    "FUnloadableDlcChallengeData",
    "FStoredFoliageInstance",
    "FFaceFXTrackKey",
    "FNewsArticle",
    "FCustomizationSizeMapping",
    "FGFxTextEntry",
    "UVSSUIDefinitionPtr",
    "UDecalComponentPtr",
    "FNamedObjectProperty",
    "FNameEntryPtr",
]
