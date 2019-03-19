from ctypes import *
import BL2SDK


class FAchievementUnlockData(Structure):
    pass


class TArray_FAchievementUnlockData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAchievementUnlockData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerRecentDamageEventData(Structure):
    pass


class FVehicleCrewMappingStruct(Structure):
    pass


class TArray_FVehicleCrewMappingStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleCrewMappingStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInjuredLoopOverride(Structure):
    pass


class TArray_FInjuredLoopOverride(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInjuredLoopOverride)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBreathingLoopInfo(Structure):
    pass


class TArray_FBreathingLoopInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBreathingLoopInfo)), ("Count", c_int), ("Max", c_int)]


class FCustomCringeData(Structure):
    pass


class TArray_FCustomCringeData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCustomCringeData)), ("Count", c_int), ("Max", c_int)]


class FPainDialogLine(Structure):
    pass


class TArray_FPainDialogLine(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPainDialogLine)), ("Count", c_int), ("Max", c_int)]


class FExtraWeaponSlot(Structure):
    pass


class TArray_FExtraWeaponSlot(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FExtraWeaponSlot)), ("Count", c_int), ("Max", c_int)]


class FTurnData(Structure):
    pass


class FCombatZone(Structure):
    pass


class FCoverExposureData(Structure):
    pass


class FCombatPointDebugData(Structure):
    pass


class FCombatPointData(Structure):
    pass


class FCombatZoneSearchData(Structure):
    pass


class FCombatPointSearchData(Structure):
    pass


class FPerchAnimData(Structure):
    pass


class TArray_FPerchAnimData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPerchAnimData)), ("Count", c_int), ("Max", c_int)]


class FWillowCoverState(Structure):
    pass


class FEnemyBreadCrumbStruct(Structure):
    pass


class TArray_FEnemyBreadCrumbStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FEnemyBreadCrumbStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSplineAnimPathData(Structure):
    pass


class FTrajectoryData(Structure):
    pass


class FBeamDamageData(Structure):
    pass


class FServerBeamState(Structure):
    pass


class FBeamLocationData(Structure):
    pass


class FReplicatedBeamState(Structure):
    pass


class FBeamState(Structure):
    pass


class TArray_FBeamState(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBeamState)), ("Count", c_int), ("Max", c_int)]


class FLightProjectile(Structure):
    pass


class TArray_FLightProjectile(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLightProjectile)), ("Count", c_int), ("Max", c_int)]


class FReplicatedLightProjectile(Structure):
    pass


class FReplicatedBeamEndPoints(Structure):
    pass


class FSwoopAttackData(Structure):
    pass


class TArray_FSwoopAttackData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSwoopAttackData)), ("Count", c_int), ("Max", c_int)]


class FActionSkillCustomEventReplicationData(Structure):
    pass


class FCachedWeaponInfo(Structure):
    pass


class FWillowStatProperty(Structure):
    pass


class TArray_FWillowStatProperty(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWillowStatProperty)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAttributeCategory(Structure):
    pass


class TArray_FAttributeCategory(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAttributeCategory)), ("Count", c_int), ("Max", c_int)]


class FDeathByWeaponStatID(Structure):
    pass


class TArray_FDeathByWeaponStatID(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeathByWeaponStatID)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDeathByDamageTypeStatID(Structure):
    pass


class TArray_FDeathByDamageTypeStatID(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeathByDamageTypeStatID)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDeathByWeaponDamageStatID(Structure):
    pass


class TArray_FDeathByWeaponDamageStatID(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeathByWeaponDamageStatID)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInteractionIconWithOverrides(Structure):
    pass


class FServerDynamicRadarIconData(Structure):
    pass


class FRemoteDynamicRadarIconData(Structure):
    pass


class FAITransformedName(Structure):
    pass


class TArray_FAITransformedName(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAITransformedName)), ("Count", c_int), ("Max", c_int)]


class FItemPoolInfo(Structure):
    pass


class TArray_FItemPoolInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FItemPoolInfo)), ("Count", c_int), ("Max", c_int)]


class FAIPawnPlaythroughData(Structure):
    pass


class TArray_FAIPawnPlaythroughData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIPawnPlaythroughData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAIPawnGradeModifierData(Structure):
    pass


class FAIPawnGameStageGradeWeightData(Structure):
    pass


class TArray_FAIPawnGameStageGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIPawnGameStageGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCellInfo(Structure):
    pass


class TArray_FCellInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCellInfo)), ("Count", c_int), ("Max", c_int)]


class FCellContentData(Structure):
    pass


class TArray_FCellContentData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCellContentData)), ("Count", c_int), ("Max", c_int)]


class FPanelInfo(Structure):
    pass


class TArray_FPanelInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPanelInfo)), ("Count", c_int), ("Max", c_int)]


class FCardInfoRelativeToPanel(Structure):
    pass


class TArray_FCardInfoRelativeToPanel(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCardInfoRelativeToPanel)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCardInfo(Structure):
    pass


class TArray_FCardInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCardInfo)), ("Count", c_int), ("Max", c_int)]


class FWeaponAccessorySetup(Structure):
    pass


class FWeaponDefinitionData(Structure):
    pass


class FItemDefinitionData(Structure):
    pass


class FPendingMissionRewardData(Structure):
    pass


class TArray_FPendingMissionRewardData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPendingMissionRewardData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnloadableDlcPendingRewardData(Structure):
    pass


class TArray_FUnloadableDlcPendingRewardData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcPendingRewardData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionStatusPresentation(Structure):
    pass


class FItemBehaviorSet(Structure):
    pass


class FSKULibrarySet(Structure):
    pass


class TArray_FSKULibrarySet(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSKULibrarySet)), ("Count", c_int), ("Max", c_int)]


class FSKURuntimeLibrarySet(Structure):
    pass


class TArray_FSKURuntimeLibrarySet(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSKURuntimeLibrarySet)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAssetLibConfig(Structure):
    pass


class FAttributePresentationValueRemappingData(Structure):
    pass


class FModifierValuePresentationData(Structure):
    pass


class TArray_FModifierValuePresentationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FModifierValuePresentationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCustomizationUnlockData(Structure):
    pass


class TArray_FCustomizationUnlockData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCustomizationUnlockData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionRewardPresentationData(Structure):
    pass


class TArray_FMissionRewardPresentationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionRewardPresentationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FReplicatedMissionFilterData(Structure):
    pass


class FReplicatedMissionObjectiveData(Structure):
    pass


class FReplicatedMissionStatusData(Structure):
    pass


class FReplicatedMissionData(Structure):
    pass


class FMissionDirectorData(Structure):
    pass


class TArray_FMissionDirectorData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionDirectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FReplicatedMissionDirectiveData(Structure):
    pass


class FMissionStatusData(Structure):
    pass


class TArray_FMissionStatusData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMissionStatusData)), ("Count", c_int), ("Max", c_int)]


class FUnloadableDlcMissionStatusData(Structure):
    pass


class TArray_FUnloadableDlcMissionStatusData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcMissionStatusData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionRewardData(Structure):
    pass


class TArray_FMissionRewardData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMissionRewardData)), ("Count", c_int), ("Max", c_int)]


class FMissionStatusPlayerData(Structure):
    pass


class TArray_FMissionStatusPlayerData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionStatusPlayerData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionData(Structure):
    pass


class TArray_FMissionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMissionData)), ("Count", c_int), ("Max", c_int)]


class FObjectiveStatusData(Structure):
    pass


class FTradeSlot(Structure):
    pass


class FHUDWidget_ChallengeData(Structure):
    pass


class TArray_FHUDWidget_ChallengeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FHUDWidget_ChallengeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFadePickupParticle(Structure):
    pass


class TArray_FFadePickupParticle(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFadePickupParticle)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerSaveData(Structure):
    pass


class TArray_FPlayerSaveData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlayerSaveData)), ("Count", c_int), ("Max", c_int)]


class FLoadInfo(Structure):
    pass


class FAttributeDefinitionDefault(Structure):
    pass


class FAttributeScalarParam(Structure):
    pass


class TArray_FAttributeScalarParam(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAttributeScalarParam)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FScreenParticleModifier(Structure):
    pass


class TArray_FScreenParticleModifier(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FScreenParticleModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FScreenParticleScalarParamOverTime(Structure):
    pass


class TArray_FScreenParticleScalarParamOverTime(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FScreenParticleScalarParamOverTime)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FScreenParticleVectorParamOverTime(Structure):
    pass


class TArray_FScreenParticleVectorParamOverTime(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FScreenParticleVectorParamOverTime)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FScreenParticleParamOverTime(Structure):
    pass


class FScreenParticleInitParams(Structure):
    pass


class FScreenParticleRecord(Structure):
    pass


class TArray_FScreenParticleRecord(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FScreenParticleRecord)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPostProcessOverlay(Structure):
    pass


class FMaterialEffectModifier(Structure):
    pass


class TArray_FMaterialEffectModifier(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMaterialEffectModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDOFEffectModifierData(Structure):
    pass


class FPostProcessChainOptions(Structure):
    pass


class FDOFEffectData(Structure):
    pass


class FPostProcessChainRecord(Structure):
    pass


class TArray_FPostProcessChainRecord(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPostProcessChainRecord)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRtpcParameterValue(Structure):
    pass


class TArray_FRtpcParameterValue(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRtpcParameterValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FImpactResponseParameters(Structure):
    pass


class FImpactResponseEffect(Structure):
    pass


class FImpactResponseData(Structure):
    pass


class TArray_FImpactResponseData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FImpactResponseData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWheelSlipModifierData(Structure):
    pass


class FDamageSurfaceTypeModifier(Structure):
    pass


class TArray_FDamageSurfaceTypeModifier(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageSurfaceTypeModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FActiveStatusEffect(Structure):
    pass


class TArray_FActiveStatusEffect(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FActiveStatusEffect)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSocketEmitter(Structure):
    pass


class TArray_FSocketEmitter(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSocketEmitter)), ("Count", c_int), ("Max", c_int)]


class FHitRegionEmitters(Structure):
    pass


class TArray_FHitRegionEmitters(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FHitRegionEmitters)), ("Count", c_int), ("Max", c_int)]


class FEffectSoundData(Structure):
    pass


class TArray_FEffectSoundData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEffectSoundData)), ("Count", c_int), ("Max", c_int)]


class FOngoingEffectInfo(Structure):
    pass


class TArray_FOngoingEffectInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FOngoingEffectInfo)), ("Count", c_int), ("Max", c_int)]


class FShopItemData(Structure):
    pass


class TArray_FShopItemData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FShopItemData)), ("Count", c_int), ("Max", c_int)]


class FConditionalAnimData(Structure):
    pass


class TArray_FConditionalAnimData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FConditionalAnimData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBodyWeaponActionData(Structure):
    pass


class TArray_FBodyWeaponActionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBodyWeaponActionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBodyWeaponActionPostureData(Structure):
    pass


class TArray_FBodyWeaponActionPostureData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBodyWeaponActionPostureData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBodyHandIKHoldData(Structure):
    pass


class FCustomBodyHandIKHoldData(Structure):
    pass


class TArray_FCustomBodyHandIKHoldData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCustomBodyHandIKHoldData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FExtraMuzzleEffect(Structure):
    pass


class FWeaponBoneControllerData(Structure):
    pass


class TArray_FWeaponBoneControllerData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWeaponBoneControllerData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWeaponMemento(Structure):
    pass


class TArray_FWeaponMemento(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FWeaponMemento)), ("Count", c_int), ("Max", c_int)]


class FBloodSplatterTrace(Structure):
    pass


class FGoreEffect(Structure):
    pass


class FMaterialScalarFadeReplication(Structure):
    pass


class FHolsteredGearDisplaySlot(Structure):
    pass


class FGoreTriggerData(Structure):
    pass


class TArray_FGoreTriggerData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGoreTriggerData)), ("Count", c_int), ("Max", c_int)]


class FDamageReactionData(Structure):
    pass


class TArray_FDamageReactionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageReactionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWeaponPartAttachmentData(Structure):
    pass


class FMeleeOverTimeState(Structure):
    pass


class FObstacleData(Structure):
    pass


class TArray_FObstacleData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FObstacleData)), ("Count", c_int), ("Max", c_int)]


class FSimpleAnimData(Structure):
    pass


class TArray_FSimpleAnimData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSimpleAnimData)), ("Count", c_int), ("Max", c_int)]


class FSkillDamagedEventConstraintData(Structure):
    pass


class TArray_FSkillDamagedEventConstraintData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSkillDamagedEventConstraintData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillKillEventData(Structure):
    pass


class TArray_FSkillKillEventData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSkillKillEventData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillDamageEventData(Structure):
    pass


class TArray_FSkillDamageEventData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSkillDamageEventData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FNamedSkillEvent(Structure):
    pass


class TArray_FNamedSkillEvent(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FNamedSkillEvent)), ("Count", c_int), ("Max", c_int)]


class FSkillActionData(Structure):
    pass


class TArray_FSkillActionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSkillActionData)), ("Count", c_int), ("Max", c_int)]


class FSkillEventResponseData(Structure):
    pass


class TArray_FSkillEventResponseData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSkillEventResponseData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillConstraintData(Structure):
    pass


class TArray_FSkillConstraintData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSkillConstraintData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBonusAttributeModifierUpgrade(Structure):
    pass


class TArray_FBonusAttributeModifierUpgrade(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBonusAttributeModifierUpgrade)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillEffectData(Structure):
    pass


class TArray_FSkillEffectData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSkillEffectData)), ("Count", c_int), ("Max", c_int)]


class FInputContextData(Structure):
    pass


class TArray_FInputContextData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FInputContextData)), ("Count", c_int), ("Max", c_int)]


class FSlaughterMissionChain(Structure):
    pass


class TArray_FSlaughterMissionChain(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSlaughterMissionChain)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLevelBasedExpScale(Structure):
    pass


class TArray_FLevelBasedExpScale(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLevelBasedExpScale)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FStatusEffectTypeCommonProperties(Structure):
    pass


class TArray_FStatusEffectTypeCommonProperties(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FStatusEffectTypeCommonProperties)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLevelBasedStatusEffectChanceScale(Structure):
    pass


class TArray_FLevelBasedStatusEffectChanceScale(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLevelBasedStatusEffectChanceScale)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayThroughData(Structure):
    pass


class TArray_FPlayThroughData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlayThroughData)), ("Count", c_int), ("Max", c_int)]


class FLevelBasedDamageScale(Structure):
    pass


class TArray_FLevelBasedDamageScale(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLevelBasedDamageScale)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRarityLevelColor(Structure):
    pass


class TArray_FRarityLevelColor(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRarityLevelColor)), ("Count", c_int), ("Max", c_int)]


class FExpAwardWeight(Structure):
    pass


class TArray_FExpAwardWeight(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FExpAwardWeight)), ("Count", c_int), ("Max", c_int)]


class FKillSkillDuration(Structure):
    pass


class TArray_FKillSkillDuration(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FKillSkillDuration)), ("Count", c_int), ("Max", c_int)]


class FDamageTypeExpModifier(Structure):
    pass


class TArray_FDamageTypeExpModifier(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageTypeExpModifier)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerClassAchievementUnlockData(Structure):
    pass


class TArray_FPlayerClassAchievementUnlockData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPlayerClassAchievementUnlockData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPendingClientTrainingMessage(Structure):
    pass


class TArray_FPendingClientTrainingMessage(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPendingClientTrainingMessage)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPendingMissionRewardsData(Structure):
    pass


class TArray_FPendingMissionRewardsData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPendingMissionRewardsData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOneOffLevelChallengeData(Structure):
    pass


class TArray_FOneOffLevelChallengeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOneOffLevelChallengeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerUIPreferences(Structure):
    pass


class FCurrencyState(Structure):
    pass


class FBankSlot(Structure):
    pass


class TArray_FBankSlot(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBankSlot)), ("Count", c_int), ("Max", c_int)]


class FChestData(Structure):
    pass


class TArray_FChestData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FChestData)), ("Count", c_int), ("Max", c_int)]


class FMissionPlaythroughData(Structure):
    pass


class TArray_FMissionPlaythroughData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionPlaythroughData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FStatusMenuMissionEligibilityData(Structure):
    pass


class TArray_FStatusMenuMissionEligibilityData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FStatusMenuMissionEligibilityData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInventorySaveGameData(Structure):
    pass


class TArray_FInventorySaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInventorySaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLoginState(Structure):
    pass


class FLungeData(Structure):
    pass


class FTimePosition(Structure):
    pass


class TArray_FTimePosition(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTimePosition)), ("Count", c_int), ("Max", c_int)]


class FVehicleSeatInstance(Structure):
    pass


class TArray_FVehicleSeatInstance(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleSeatInstance)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTombstoneData(Structure):
    pass


class TArray_FTombstoneData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTombstoneData)), ("Count", c_int), ("Max", c_int)]


class FResourceSaveGameData(Structure):
    pass


class TArray_FResourceSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FResourceSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInventorySlotSaveGameData(Structure):
    pass


class FWeaponSaveGameData(Structure):
    pass


class TArray_FWeaponSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWeaponSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWorldDiscoveryData(Structure):
    pass


class TArray_FWorldDiscoveryData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWorldDiscoveryData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionPlaythroughSaveGameData(Structure):
    pass


class TArray_FMissionPlaythroughSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionPlaythroughSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillSaveGameData(Structure):
    pass


class TArray_FSkillSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSkillSaveGameData)), ("Count", c_int), ("Max", c_int)]


class FUnloadableDlcItemSaveGameData(Structure):
    pass


class TArray_FUnloadableDlcItemSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcItemSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnloadableDlcWeaponSaveGameData(Structure):
    pass


class TArray_FUnloadableDlcWeaponSaveGameData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcWeaponSaveGameData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPostProcessOverlayInfo(Structure):
    pass


class TArray_FPostProcessOverlayInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPostProcessOverlayInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSpeedKillData(Structure):
    pass


class TArray_FSpeedKillData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSpeedKillData)), ("Count", c_int), ("Max", c_int)]


class FLurchData(Structure):
    pass


class FSkillTreeSkillStateData(Structure):
    pass


class FPlayerSkillTreeSkillData(Structure):
    pass


class TArray_FPlayerSkillTreeSkillData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeSkillData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAppliedSkillEffect(Structure):
    pass


class TArray_FAppliedSkillEffect(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAppliedSkillEffect)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FVehicleSeatDefinition(Structure):
    pass


class TArray_FVehicleSeatDefinition(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleSeatDefinition)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FConditionLevel(Structure):
    pass


class TArray_FConditionLevel(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FConditionLevel)), ("Count", c_int), ("Max", c_int)]


class FChallengeData(Structure):
    pass


class TArray_FChallengeData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FChallengeData)), ("Count", c_int), ("Max", c_int)]


class FTrainingData(Structure):
    pass


class FTaggedGFxMovie(Structure):
    pass


class TArray_FTaggedGFxMovie(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTaggedGFxMovie)), ("Count", c_int), ("Max", c_int)]


class FSpawnedAttachedLootData(Structure):
    pass


class TArray_FSpawnedAttachedLootData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSpawnedAttachedLootData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSpawnedDroppedLootData(Structure):
    pass


class TArray_FSpawnedDroppedLootData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSpawnedDroppedLootData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerSkillTreeBranchData(Structure):
    pass


class TArray_FPlayerSkillTreeBranchData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeBranchData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerSkillTreeTierData(Structure):
    pass


class TArray_FPlayerSkillTreeTierData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPlayerSkillTreeTierData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FKillMissionData(Structure):
    pass


class FBalancedInventoryData(Structure):
    pass


class TArray_FBalancedInventoryData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBalancedInventoryData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGoldenKeySource(Structure):
    pass


class TArray_FGoldenKeySource(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGoldenKeySource)), ("Count", c_int), ("Max", c_int)]


class FSeasonPassOfferUnion(Structure):
    pass


class TArray_FSeasonPassOfferUnion(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSeasonPassOfferUnion)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSeasonPassPackageCount(Structure):
    pass


class TArray_FSeasonPassPackageCount(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSeasonPassPackageCount)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDLCMissionData(Structure):
    pass


class TArray_FDLCMissionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDLCMissionData)), ("Count", c_int), ("Max", c_int)]


class FCompatibilityVersionInfo(Structure):
    pass


class FContentState(Structure):
    pass


class FRecentlyResistedAttackData(Structure):
    pass


class FExpansionData(Structure):
    pass


class TArray_FExpansionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FExpansionData)), ("Count", c_int), ("Max", c_int)]


class FRegionGameStageData(Structure):
    pass


class TArray_FRegionGameStageData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRegionGameStageData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnloadableDlcRegionGameStageData(Structure):
    pass


class TArray_FUnloadableDlcRegionGameStageData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcRegionGameStageData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnloadableDlcChallengeData(Structure):
    pass


class TArray_FUnloadableDlcChallengeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcChallengeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLockoutData(Structure):
    pass


class TArray_FLockoutData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLockoutData)), ("Count", c_int), ("Max", c_int)]


class FUnloadableDlcLockoutData(Structure):
    pass


class TArray_FUnloadableDlcLockoutData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUnloadableDlcLockoutData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FChosenVehicleCustomization(Structure):
    pass


class TArray_FChosenVehicleCustomization(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FChosenVehicleCustomization)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FThirdPersonMenuView(Structure):
    pass


class TArray_FThirdPersonMenuView(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FThirdPersonMenuView)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOneTimeDataElement(Structure):
    pass


class TArray_FOneTimeDataElement(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOneTimeDataElement)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSortableDataElement(Structure):
    pass


class TArray_FSortableDataElement(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSortableDataElement)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGFxTextEntry(Structure):
    pass


class TArray_FGFxTextEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGFxTextEntry)), ("Count", c_int), ("Max", c_int)]


class FSortFilterConfiguration(Structure):
    pass


class TArray_FSortFilterConfiguration(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSortFilterConfiguration)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FHeavyInventoryElement(Structure):
    pass


class TArray_FHeavyInventoryElement(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FHeavyInventoryElement)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FItemCardInfo(Structure):
    pass


class TArray_FItemCardInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FItemCardInfo)), ("Count", c_int), ("Max", c_int)]


class FAIThrowProjectileBehaviorSequenceStateData(Structure):
    pass


class TArray_FAIThrowProjectileBehaviorSequenceStateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIThrowProjectileBehaviorSequenceStateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPerchStateData(Structure):
    pass


class FBehaviorCondition(Structure):
    pass


class TArray_FBehaviorCondition(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBehaviorCondition)), ("Count", c_int), ("Max", c_int)]


class FDropProjectileBehaviorSequenceStateData(Structure):
    pass


class TArray_FDropProjectileBehaviorSequenceStateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDropProjectileBehaviorSequenceStateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorsSelectionData(Structure):
    pass


class TArray_FBehaviorsSelectionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorsSelectionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRemoveObject(Structure):
    pass


class TArray_FRemoveObject(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRemoveObject)), ("Count", c_int), ("Max", c_int)]


class FTurretConstraintData(Structure):
    pass


class UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData(Structure):
    pass


class TArray_UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData(BL2SDK.TArray_Base):
    _fields_ = [
        (
            "Data",
            POINTER(UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData),
        ),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData(
    Structure
):
    pass


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
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCustomizationItemData(Structure):
    pass


class TArray_FCustomizationItemData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCustomizationItemData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorAliasReference(Structure):
    pass


class TArray_FBehaviorAliasReference(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorAliasReference)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionObjectiveStateSelectionData(Structure):
    pass


class FMissionStateSelectionData(Structure):
    pass


class FBlackMarketUpgradeLevelData(Structure):
    pass


class TArray_FBlackMarketUpgradeLevelData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBlackMarketUpgradeLevelData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTechDeathData(Structure):
    pass


class TArray_FTechDeathData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTechDeathData)), ("Count", c_int), ("Max", c_int)]


class FVehicleHandlingWheelData(Structure):
    pass


class TArray_FVehicleHandlingWheelData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleHandlingWheelData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFishtailingInfo(Structure):
    pass


class TArray_FFishtailingInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FFishtailingInfo)), ("Count", c_int), ("Max", c_int)]


class FMoveToCellData(Structure):
    pass


class TArray_FMoveToCellData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMoveToCellData)), ("Count", c_int), ("Max", c_int)]


class FInventoryGradeModifierData(Structure):
    pass


class FInventoryGameStageGradeWeightData(Structure):
    pass


class TArray_FInventoryGameStageGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInventoryGameStageGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInventoryManufacturerBalanceData(Structure):
    pass


class TArray_FInventoryManufacturerBalanceData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInventoryManufacturerBalanceData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FItemPartGradeWeightData(Structure):
    pass


class TArray_FItemPartGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FItemPartGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FItemCustomPartTypeData(Structure):
    pass


class FTargetedPlayerState(Structure):
    pass


class TArray_FTargetedPlayerState(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FTargetedPlayerState)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedVectorParameter(Structure):
    pass


class TArray_FCoordinatedVectorParameter(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedVectorParameter)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedScalarParameter(Structure):
    pass


class TArray_FCoordinatedScalarParameter(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedScalarParameter)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedParticleSystemDefinition(Structure):
    pass


class TArray_FCoordinatedParticleSystemDefinition(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedParticleSystemDefinition)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedAudioDefinition(Structure):
    pass


class TArray_FCoordinatedAudioDefinition(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedAudioDefinition)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCreditsLine(Structure):
    pass


class TArray_FCreditsLine(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCreditsLine)), ("Count", c_int), ("Max", c_int)]


class FCreditsTextureInfo(Structure):
    pass


class TArray_FCreditsTextureInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCreditsTextureInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCurrencyPresentation(Structure):
    pass


class TArray_FCurrencyPresentation(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCurrencyPresentation)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSkillTreeTierStateData(Structure):
    pass


class FSkillTreeBranchStateData(Structure):
    pass


class FTaggedMarketplaceContent(Structure):
    pass


class TArray_FTaggedMarketplaceContent(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FTaggedMarketplaceContent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSourceObjectData(Structure):
    pass


class TArray_FSourceObjectData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSourceObjectData)), ("Count", c_int), ("Max", c_int)]


class FDamageOnlyOnceData(Structure):
    pass


class TArray_FDamageOnlyOnceData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageOnlyOnceData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDamageTypeSelectorData(Structure):
    pass


class TArray_FDamageTypeSelectorData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageTypeSelectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDefinitionIconDatum(Structure):
    pass


class TArray_FDefinitionIconDatum(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDefinitionIconDatum)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDamageLocationData(Structure):
    pass


class FRagdollDeathImpulseStruct(Structure):
    pass


class TArray_FRagdollDeathImpulseStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRagdollDeathImpulseStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FStaggerStateData(Structure):
    pass


class FStaggeredRecoveryRotationData(Structure):
    pass


class FTurretEffect(Structure):
    pass


class TArray_FTurretEffect(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTurretEffect)), ("Count", c_int), ("Max", c_int)]


class FTurretDamageEffectData(Structure):
    pass


class TArray_FTurretDamageEffectData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FTurretDamageEffectData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDeveloperData(Structure):
    pass


class TArray_FDeveloperData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDeveloperData)), ("Count", c_int), ("Max", c_int)]


class FPerkData(Structure):
    pass


class TArray_FPerkData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPerkData)), ("Count", c_int), ("Max", c_int)]


class FDlcLevelTravelPair(Structure):
    pass


class TArray_FDlcLevelTravelPair(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDlcLevelTravelPair)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDrunkenWaveFormData(Structure):
    pass


class TArray_FDrunkenWaveFormData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDrunkenWaveFormData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FConditionalParticleEffectData(Structure):
    pass


class TArray_FConditionalParticleEffectData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FConditionalParticleEffectData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FConditionalExplosionData(Structure):
    pass


class TArray_FConditionalExplosionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FConditionalExplosionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FExplosionScaleData(Structure):
    pass


class TArray_FExplosionScaleData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FExplosionScaleData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRecentExplosion(Structure):
    pass


class TArray_FRecentExplosion(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRecentExplosion)), ("Count", c_int), ("Max", c_int)]


class FLootAttachmentData(Structure):
    pass


class TArray_FLootAttachmentData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLootAttachmentData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLootConfigurationData(Structure):
    pass


class TArray_FLootConfigurationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLootConfigurationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInteractiveObjectReplicatedStateData(Structure):
    pass


class FInteractiveObjectGradeModifierData(Structure):
    pass


class FInteractiveObjectGameStageGradeWeightData(Structure):
    pass


class TArray_FInteractiveObjectGameStageGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInteractiveObjectGameStageGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBulletImpactEventData(Structure):
    pass


class TArray_FBulletImpactEventData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBulletImpactEventData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBulletEventResponse(Structure):
    pass


class FBulletTimerEvent(Structure):
    pass


class TArray_FBulletTimerEvent(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBulletTimerEvent)), ("Count", c_int), ("Max", c_int)]


class FWaveMotionData(Structure):
    pass


class FFiringPatternLine(Structure):
    pass


class TArray_FFiringPatternLine(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FFiringPatternLine)), ("Count", c_int), ("Max", c_int)]


class FActiveAreaWaypointData(Structure):
    pass


class FActiveWaypointData(Structure):
    pass


class FColiseumStat(Structure):
    pass


class TArray_FColiseumStat(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FColiseumStat)), ("Count", c_int), ("Max", c_int)]


class FColiseumPlayerInfo(Structure):
    pass


class FAreaWaypointData(Structure):
    pass


class FWaypointActorData(Structure):
    pass


class FMessageOfTheDay(Structure):
    pass


class TArray_FMessageOfTheDay(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMessageOfTheDay)), ("Count", c_int), ("Max", c_int)]


class FDataProviderInfo(Structure):
    pass


class TArray_FDataProviderInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDataProviderInfo)), ("Count", c_int), ("Max", c_int)]


class FDialogBoxButton(Structure):
    pass


class TArray_FDialogBoxButton(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDialogBoxButton)), ("Count", c_int), ("Max", c_int)]


class FPauseTimerData(Structure):
    pass


class TArray_FPauseTimerData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPauseTimerData)), ("Count", c_int), ("Max", c_int)]


class FMissionStateBalanceAdjustment(Structure):
    pass


class TArray_FMissionStateBalanceAdjustment(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionStateBalanceAdjustment)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRegionBalanceData(Structure):
    pass


class TArray_FRegionBalanceData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRegionBalanceData)), ("Count", c_int), ("Max", c_int)]


class FFlashTextEntry(Structure):
    pass


class TArray_FFlashTextEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FFlashTextEntry)), ("Count", c_int), ("Max", c_int)]


class FGrenadeModBehaviorSequenceStateData(Structure):
    pass


class TArray_FGrenadeModBehaviorSequenceStateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGrenadeModBehaviorSequenceStateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGrenadeModPartBehaviorSequenceStateData(Structure):
    pass


class TArray_FGrenadeModPartBehaviorSequenceStateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGrenadeModPartBehaviorSequenceStateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FHitRegionDamage(Structure):
    pass


class TArray_FHitRegionDamage(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FHitRegionDamage)), ("Count", c_int), ("Max", c_int)]


class FMinimapIconClip(Structure):
    pass


class TArray_FMinimapIconClip(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMinimapIconClip)), ("Count", c_int), ("Max", c_int)]


class FMinimapObjectiveIconClip(Structure):
    pass


class TArray_FMinimapObjectiveIconClip(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMinimapObjectiveIconClip)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnloadableDlcEchoCallData(Structure):
    pass


class FMissionWidgetMessage(Structure):
    pass


class TArray_FMissionWidgetMessage(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionWidgetMessage)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWorldSpaceIcon(Structure):
    pass


class FObjectiveIcon(Structure):
    pass


class TArray_FObjectiveIcon(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FObjectiveIcon)), ("Count", c_int), ("Max", c_int)]


class FPlayerIcon(Structure):
    pass


class TArray_FPlayerIcon(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlayerIcon)), ("Count", c_int), ("Max", c_int)]


class FWorldSpacePlayerInfo(Structure):
    pass


class FDesignerAttributeDefaultValueData(Structure):
    pass


class FTopStatData(Structure):
    pass


class TArray_FTopStatData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTopStatData)), ("Count", c_int), ("Max", c_int)]


class FInputDeviceAxisData(Structure):
    pass


class TArray_FInputDeviceAxisData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInputDeviceAxisData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInputDeviceButtonData(Structure):
    pass


class TArray_FInputDeviceButtonData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInputDeviceButtonData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLookAxisDefinitionData(Structure):
    pass


class FInputRemappingAxisData(Structure):
    pass


class TArray_FInputRemappingAxisData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInputRemappingAxisData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInputRemappingButtonData(Structure):
    pass


class TArray_FInputRemappingButtonData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInputRemappingButtonData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorKeyFrameEventData(Structure):
    pass


class TArray_FBehaviorKeyFrameEventData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorKeyFrameEventData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSimpleAnimStateData(Structure):
    pass


class FResultEntry(Structure):
    pass


class TArray_FResultEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FResultEntry)), ("Count", c_int), ("Max", c_int)]


class FPersistentMapDependencies(Structure):
    pass


class TArray_FPersistentMapDependencies(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPersistentMapDependencies)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLiftBodyPair(Structure):
    pass


class TArray_FLiftBodyPair(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLiftBodyPair)), ("Count", c_int), ("Max", c_int)]


class FLootData(Structure):
    pass


class TArray_FLootData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLootData)), ("Count", c_int), ("Max", c_int)]


class FManufacturerSelectorData(Structure):
    pass


class TArray_FManufacturerSelectorData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FManufacturerSelectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FUnlockItemData(Structure):
    pass


class TArray_FUnlockItemData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FUnlockItemData)), ("Count", c_int), ("Max", c_int)]


class FMarketPlaceFilter(Structure):
    pass


class TArray_FMarketPlaceFilter(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMarketPlaceFilter)), ("Count", c_int), ("Max", c_int)]


class FMatchmakingResultEntry(Structure):
    pass


class FRewardData(Structure):
    pass


class FObjectiveDependencyData(Structure):
    pass


class FMissionObjectiveWaypointData(Structure):
    pass


class FMissionItemPoolData(Structure):
    pass


class FMissionKickoffData(Structure):
    pass


class FMinimapIconHelper_Director(Structure):
    pass


class FObjectiveUpdateData(Structure):
    pass


class TArray_FObjectiveUpdateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FObjectiveUpdateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBlockedMissionData(Structure):
    pass


class TArray_FBlockedMissionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBlockedMissionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDefendTargetData(Structure):
    pass


class FDefendMissionData(Structure):
    pass


class TArray_FDefendMissionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDefendMissionData)), ("Count", c_int), ("Max", c_int)]


class FTimedMissionData(Structure):
    pass


class TArray_FTimedMissionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTimedMissionData)), ("Count", c_int), ("Max", c_int)]


class FLevelTransitionData(Structure):
    pass


class TArray_FLevelTransitionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLevelTransitionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionWaypointsData(Structure):
    pass


class TArray_FMissionWaypointsData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionWaypointsData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionObserversData(Structure):
    pass


class TArray_FMissionObserversData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMissionObserversData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMissionSetData(Structure):
    pass


class FPartGradeWeightData(Structure):
    pass


class TArray_FPartGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPartGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWeaponCustomPartTypeData(Structure):
    pass


class FNPCList(Structure):
    pass


class TArray_FNPCList(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FNPCList)), ("Count", c_int), ("Max", c_int)]


class FSystemOption(Structure):
    pass


class TArray_FSystemOption(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSystemOption)), ("Count", c_int), ("Max", c_int)]


class FCameraLerpKeyFrame(Structure):
    pass


class TArray_FCameraLerpKeyFrame(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCameraLerpKeyFrame)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRelevanceCacheStruct(Structure):
    pass


class TArray_FRelevanceCacheStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRelevanceCacheStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRelevanceUpdateStruct(Structure):
    pass


class TArray_FRelevanceUpdateStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRelevanceUpdateStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRelevanceBucketStruct(Structure):
    pass


class TArray_FRelevanceBucketStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRelevanceBucketStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPCContextMenuItem(Structure):
    pass


class TArray_FPCContextMenuItem(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPCContextMenuItem)), ("Count", c_int), ("Max", c_int)]


class FEvalActionData(Structure):
    pass


class TArray_FEvalActionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEvalActionData)), ("Count", c_int), ("Max", c_int)]


class FPlayerClassCountOverride(Structure):
    pass


class FActiveInteraction(Structure):
    pass


class TArray_FActiveInteraction(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FActiveInteraction)), ("Count", c_int), ("Max", c_int)]


class FSkillTreeTierLayoutData(Structure):
    pass


class FItemMemento(Structure):
    pass


class TArray_FItemMemento(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FItemMemento)), ("Count", c_int), ("Max", c_int)]


class FPopulatedAIPawnMemento(Structure):
    pass


class FPopulatedInteractiveObjectMemento(Structure):
    pass


class FFeaturedItemData(Structure):
    pass


class FPickupMemento(Structure):
    pass


class FPopulatedPickupMemento(Structure):
    pass


class FVehicleDefaultCrewStruct(Structure):
    pass


class TArray_FVehicleDefaultCrewStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleDefaultCrewStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FVehicleGradeModifierData(Structure):
    pass


class FVehicleGameStageGradeWeightData(Structure):
    pass


class TArray_FVehicleGameStageGradeWeightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleGameStageGradeWeightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationOptionDenSpawnData(Structure):
    pass


class FHomingRadiusThreshold(Structure):
    pass


class TArray_FHomingRadiusThreshold(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FHomingRadiusThreshold)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FObjectReference(Structure):
    pass


class TArray_FObjectReference(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FObjectReference)), ("Count", c_int), ("Max", c_int)]


class FDeferredSkillActivationData(Structure):
    pass


class TArray_FDeferredSkillActivationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeferredSkillActivationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTier(Structure):
    pass


class TArray_FTier(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTier)), ("Count", c_int), ("Max", c_int)]


class FTierLayout(Structure):
    pass


class TArray_FTierLayout(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTierLayout)), ("Count", c_int), ("Max", c_int)]


class FSkillTreeUICell(Structure):
    pass


class Fartifact_datum(Structure):
    pass


class TArray_Fartifact_datum(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(Fartifact_datum)), ("Count", c_int), ("Max", c_int)]


class FSMPerchRandomPair(Structure):
    pass


class TArray_FSMPerchRandomPair(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSMPerchRandomPair)), ("Count", c_int), ("Max", c_int)]


class FCachedInvData(Structure):
    pass


class TArray_FCachedInvData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCachedInvData)), ("Count", c_int), ("Max", c_int)]


class FDirectionData(Structure):
    pass


class TArray_FDirectionData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDirectionData)), ("Count", c_int), ("Max", c_int)]


class FClipRect(Structure):
    pass


class FMapObjectData(Structure):
    pass


class TArray_FMapObjectData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMapObjectData)), ("Count", c_int), ("Max", c_int)]


class FTestMapsListDatum(Structure):
    pass


class TArray_FTestMapsListDatum(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTestMapsListDatum)), ("Count", c_int), ("Max", c_int)]


class FTextMarkupEntry(Structure):
    pass


class TArray_FTextMarkupEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTextMarkupEntry)), ("Count", c_int), ("Max", c_int)]


class FConditionalAnimationData(Structure):
    pass


class TArray_FConditionalAnimationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FConditionalAnimationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FNameExpressionData(Structure):
    pass


class FDamageTypeBySpeedStruct(Structure):
    pass


class TArray_FDamageTypeBySpeedStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDamageTypeBySpeedStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCollisionDamageCalculation(Structure):
    pass


class FVStatusEffectResistance(Structure):
    pass


class FVehicleCrewAnimSetMapping(Structure):
    pass


class TArray_FVehicleCrewAnimSetMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleCrewAnimSetMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FVSSUsageTracking(Structure):
    pass


class FWeaponAmmoResourceSelectorData(Structure):
    pass


class TArray_FWeaponAmmoResourceSelectorData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWeaponAmmoResourceSelectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLabelToLinkageMapping(Structure):
    pass


class TArray_FLabelToLinkageMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLabelToLinkageMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAttributePresentationDamageTypeMapping(Structure):
    pass


class TArray_FAttributePresentationDamageTypeMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAttributePresentationDamageTypeMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWeaponTypeSelectorData(Structure):
    pass


class TArray_FWeaponTypeSelectorData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWeaponTypeSelectorData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAimAnimTransitionData(Structure):
    pass


class TArray_FAimAnimTransitionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAimAnimTransitionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBoneRotateData(Structure):
    pass


class TArray_FBoneRotateData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBoneRotateData)), ("Count", c_int), ("Max", c_int)]


class FAnimDeltaDataList(Structure):
    pass


class TArray_FAnimDeltaDataList(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAnimDeltaDataList)), ("Count", c_int), ("Max", c_int)]


class FAnimSwapData(Structure):
    pass


class TArray_FAnimSwapData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAnimSwapData)), ("Count", c_int), ("Max", c_int)]


class FPrismDataContainer(Structure):
    pass


class TArray_FPrismDataContainer(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPrismDataContainer)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFeatherBoneBlendTarget(Structure):
    pass


class TArray_FFeatherBoneBlendTarget(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFeatherBoneBlendTarget)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FReplicatedInventoryCardData(Structure):
    pass


class FUIStatModifierData(Structure):
    pass


class TArray_FUIStatModifierData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FUIStatModifierData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FProfileDefinition(Structure):
    pass


class TArray_FProfileDefinition(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FProfileDefinition)), ("Count", c_int), ("Max", c_int)]


class FLockOnProfile(Structure):
    pass


class FViewProfile(Structure):
    pass


class FBalanceMeResourceUpgradePath(Structure):
    pass


class TArray_FBalanceMeResourceUpgradePath(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBalanceMeResourceUpgradePath)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FStatusEffectNameMapping(Structure):
    pass


class TArray_FStatusEffectNameMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FStatusEffectNameMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FClanMaterialData(Structure):
    pass


class TArray_FClanMaterialData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FClanMaterialData)), ("Count", c_int), ("Max", c_int)]


class FClanSwitchData(Structure):
    pass


class TArray_FClanSwitchData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FClanSwitchData)), ("Count", c_int), ("Max", c_int)]


class FPendingCustomization(Structure):
    pass


class TArray_FPendingCustomization(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPendingCustomization)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FProductCustomizationInfo(Structure):
    pass


class TArray_FProductCustomizationInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FProductCustomizationInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCustomizationSizeMapping(Structure):
    pass


class TArray_FCustomizationSizeMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCustomizationSizeMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FQueuedPersonalEchoLog(Structure):
    pass


class FScaleformPortraitData(Structure):
    pass


class FVideoPortraitData(Structure):
    pass


class FEchoPortraitInfo(Structure):
    pass


class FEmotePortraitInfo(Structure):
    pass


class TArray_FEmotePortraitInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEmotePortraitInfo)), ("Count", c_int), ("Max", c_int)]


class FEmoteStance(Structure):
    pass


class TArray_FEmoteStance(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEmoteStance)), ("Count", c_int), ("Max", c_int)]


class FDynamicNavMeshConnection(Structure):
    pass


class TArray_FDynamicNavMeshConnection(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDynamicNavMeshConnection)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedEffectIndices(Structure):
    pass


class FCoordinatedEffectThread(Structure):
    pass


class TArray_FCoordinatedEffectThread(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedEffectThread)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoordinatedEffectProcess(Structure):
    pass


class TArray_FCoordinatedEffectProcess(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoordinatedEffectProcess)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFloatParameter(Structure):
    pass


class FVectorParameter(Structure):
    pass


class FColorParameter(Structure):
    pass


class FEmitterTemplateOptions(Structure):
    pass


class FDecalData(Structure):
    pass


class FGamepadState(Structure):
    pass


class FSubtitleProfile(Structure):
    pass


class FtMenuTextPos(Structure):
    pass


class FColumnLayoutData(Structure):
    pass


class TArray_FColumnLayoutData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FColumnLayoutData)), ("Count", c_int), ("Max", c_int)]


class FtMenuLayout(Structure):
    pass


class FPlayerLineInfo(Structure):
    pass


class TArray_FPlayerLineInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlayerLineInfo)), ("Count", c_int), ("Max", c_int)]


class FDialogBoxLayout(Structure):
    pass


class TArray_FDialogBoxLayout(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDialogBoxLayout)), ("Count", c_int), ("Max", c_int)]


class FMenuItemCallback(Structure):
    pass


class TArray_FMenuItemCallback(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMenuItemCallback)), ("Count", c_int), ("Max", c_int)]


class FLoadCharacterData(Structure):
    pass


class TArray_FLoadCharacterData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLoadCharacterData)), ("Count", c_int), ("Max", c_int)]


class FSaveResult(Structure):
    pass


class FLoadingMovieExceptionInfo(Structure):
    pass


class TArray_FLoadingMovieExceptionInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLoadingMovieExceptionInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAvailableTrackedSkill(Structure):
    pass


class TArray_FAvailableTrackedSkill(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAvailableTrackedSkill)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTrackedSkillIconState(Structure):
    pass


class FHUDInteractionIcon(Structure):
    pass


class FCriticalTextMessage(Structure):
    pass


class TArray_FCriticalTextMessage(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCriticalTextMessage)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCriticalTextMessageArray(Structure):
    pass


class FInjuredStringReplacementSet(Structure):
    pass


class TArray_FInjuredStringReplacementSet(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInjuredStringReplacementSet)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTrackedSkillState(Structure):
    pass


class FReplicatedStandInGear(Structure):
    pass


class FScaledHUDElement(Structure):
    pass


class TArray_FScaledHUDElement(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FScaledHUDElement)), ("Count", c_int), ("Max", c_int)]


class FTouchingPawn(Structure):
    pass


class TArray_FTouchingPawn(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTouchingPawn)), ("Count", c_int), ("Max", c_int)]


class FHitActorData(Structure):
    pass


class TArray_FHitActorData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FHitActorData)), ("Count", c_int), ("Max", c_int)]


class FHomingTargetedActorInfo(Structure):
    pass


class FObstaclePoint(Structure):
    pass


class TArray_FObstaclePoint(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FObstaclePoint)), ("Count", c_int), ("Max", c_int)]


class FObstacleSegment(Structure):
    pass


class FVelocityObstacle(Structure):
    pass


class FInputDeviceButtonAddress(Structure):
    pass


class TArray_FInputDeviceButtonAddress(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInputDeviceButtonAddress)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInputButtonData(Structure):
    pass


class TArray_FInputButtonData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FInputButtonData)), ("Count", c_int), ("Max", c_int)]


class FDeviceLookAxisData(Structure):
    pass


class TArray_FDeviceLookAxisData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeviceLookAxisData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FKeyRebindingData(Structure):
    pass


class TArray_FKeyRebindingData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FKeyRebindingData)), ("Count", c_int), ("Max", c_int)]


class FInputDeviceAxisAddress(Structure):
    pass


class FAccelStateData(Structure):
    pass


class FInputAxisData(Structure):
    pass


class TArray_FInputAxisData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FInputAxisData)), ("Count", c_int), ("Max", c_int)]


class FSpeedTravelData(Structure):
    pass


class TArray_FSpeedTravelData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSpeedTravelData)), ("Count", c_int), ("Max", c_int)]


class FWeatherSystemEffects(Structure):
    pass


class FAttachmentData(Structure):
    pass


class FAsyncDataRequest(Structure):
    pass


class FLightValues(Structure):
    pass


class TArray_FLightValues(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLightValues)), ("Count", c_int), ("Max", c_int)]


class FVehicleSpawnStationPooledVehicle(Structure):
    pass


class TArray_FVehicleSpawnStationPooledVehicle(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FVehicleSpawnStationPooledVehicle)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FVehicleSpawnStationSlot(Structure):
    pass


class FPopOppSummary(Structure):
    pass


class FSpawnAnimPair(Structure):
    pass


class TArray_FSpawnAnimPair(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSpawnAnimPair)), ("Count", c_int), ("Max", c_int)]


class FSpawnAnimData(Structure):
    pass


class TArray_FSpawnAnimData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSpawnAnimData)), ("Count", c_int), ("Max", c_int)]


class FPursuitNode(Structure):
    pass


class TArray_FPursuitNode(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPursuitNode)), ("Count", c_int), ("Max", c_int)]


class FPursuitNodeData(Structure):
    pass


class TArray_FPursuitNodeData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPursuitNodeData)), ("Count", c_int), ("Max", c_int)]


class FDescriptionEntry(Structure):
    pass


class TArray_FDescriptionEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDescriptionEntry)), ("Count", c_int), ("Max", c_int)]


class FKeyBindInfo(Structure):
    pass


class TArray_FKeyBindInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FKeyBindInfo)), ("Count", c_int), ("Max", c_int)]


class FReferencePoint(Structure):
    pass


class FReferencePointComparisonData(Structure):
    pass


class FResolution(Structure):
    pass


class TArray_FResolution(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FResolution)), ("Count", c_int), ("Max", c_int)]


class FLockOnTargetStateStruct(Structure):
    pass


class FWeaponBoneControllerInstance(Structure):
    pass


class TArray_FWeaponBoneControllerInstance(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FWeaponBoneControllerInstance)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FShellCasingImpact(Structure):
    pass


class TArray_FShellCasingImpact(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FShellCasingImpact)), ("Count", c_int), ("Max", c_int)]


class FColumnData(Structure):
    pass


class TArray_FColumnData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FColumnData)), ("Count", c_int), ("Max", c_int)]


class FtMenuData(Structure):
    pass


class TArray_FtMenuData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FtMenuData)), ("Count", c_int), ("Max", c_int)]


class FMenuHeaderData(Structure):
    pass


class TArray_FMenuHeaderData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMenuHeaderData)), ("Count", c_int), ("Max", c_int)]


class FSkillIndexLevelRequirementPair(Structure):
    pass


class FDebugConsoleCommand(Structure):
    pass


class TArray_FDebugConsoleCommand(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDebugConsoleCommand)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FNetworkChannelData(Structure):
    pass


class TArray_FNetworkChannelData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FNetworkChannelData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FItemPartSettings(Structure):
    pass


class FGearBuilderWeightedInventoryPart(Structure):
    pass


class TArray_FGearBuilderWeightedInventoryPart(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGearBuilderWeightedInventoryPart)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGearBuilderInventoryPartSlot(Structure):
    pass


class FItemSettings(Structure):
    pass


class FGearBuilderWeightedWeaponPart(Structure):
    pass


class TArray_FGearBuilderWeightedWeaponPart(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGearBuilderWeightedWeaponPart)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGearBuilderWeaponPartSlot(Structure):
    pass


class FWeaponSettings(Structure):
    pass


class FItemBuilderData(Structure):
    pass


class TArray_FItemBuilderData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FItemBuilderData)), ("Count", c_int), ("Max", c_int)]


class FItemBuilderBalanceDefinition(Structure):
    pass


class TArray_FItemBuilderBalanceDefinition(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FItemBuilderBalanceDefinition)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGearBuilderCustomizationData(Structure):
    pass


class TArray_FGearBuilderCustomizationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGearBuilderCustomizationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGearBuilderCustomizationUsageData(Structure):
    pass


class TArray_FGearBuilderCustomizationUsageData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGearBuilderCustomizationUsageData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FVirtualSeatStruct(Structure):
    pass


class TArray_FVirtualSeatStruct(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVirtualSeatStruct)), ("Count", c_int), ("Max", c_int)]


class FVehicleEffect(Structure):
    pass


class TArray_FVehicleEffect(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVehicleEffect)), ("Count", c_int), ("Max", c_int)]


class FFDamageMorphTargets(Structure):
    pass


class TArray_FFDamageMorphTargets(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFDamageMorphTargets)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSuspensionSound(Structure):
    pass


class TArray_FSuspensionSound(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSuspensionSound)), ("Count", c_int), ("Max", c_int)]


class FIndexPair(Structure):
    pass


class FTankSensor(Structure):
    pass


class TArray_FTankSensor(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTankSensor)), ("Count", c_int), ("Max", c_int)]


class FPhysicalMaterialTireModel(Structure):
    pass


class TArray_FPhysicalMaterialTireModel(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPhysicalMaterialTireModel)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDuelTeamInfo(Structure):
    pass


class FDuelTeamPair(Structure):
    pass


class TArray_FDuelTeamPair(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDuelTeamPair)), ("Count", c_int), ("Max", c_int)]


class FTempWeaponStruct(Structure):
    pass


class TArray_FTempWeaponStruct(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTempWeaponStruct)), ("Count", c_int), ("Max", c_int)]


class FTempProfileStruct(Structure):
    pass


class FBalanceModification(Structure):
    pass


class TArray_FBalanceModification(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBalanceModification)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBlackMarketPostLaunchUpgradeData(Structure):
    pass


class TArray_FBlackMarketPostLaunchUpgradeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBlackMarketPostLaunchUpgradeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMapSpecificBalanceModificationList(Structure):
    pass


class TArray_FMapSpecificBalanceModificationList(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMapSpecificBalanceModificationList)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBalancedInventoryDataMirror(Structure):
    pass


class TArray_FBalancedInventoryDataMirror(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBalancedInventoryDataMirror)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLegacyCustomizationItemData(Structure):
    pass


class TArray_FLegacyCustomizationItemData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLegacyCustomizationItemData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPremiumCustomizationInfo(Structure):
    pass


class TArray_FPremiumCustomizationInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPremiumCustomizationInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAIPawnPlaythroughThreeData(Structure):
    pass


class TArray_FAIPawnPlaythroughThreeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIPawnPlaythroughThreeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDirChangeRateRange(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *


def init():

    FAchievementUnlockData._fields_ = [
        ("UnlockType", c_ubyte),
        ("Achievement", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("StringData", FString),
        ("IntData", c_int),
    ]

    FPlayerRecentDamageEventData._fields_ = [
        ("DamageTypeDefinition", POINTER(UWillowDamageTypeDefinition)),
        ("DamageLocation", FVector),
        ("TotalDamageForDamageType", c_float),
        ("DamageEventFlags", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bDirty", c_bool, 1),
        ("DamageTime", c_float),
        ("DamagedActor", POINTER(AActor)),
    ]

    FVehicleCrewMappingStruct._fields_ = [
        ("VehicleArchetypeName", FName),
        ("AnimSet", POINTER(UAnimSet)),
    ]

    FInjuredLoopOverride._fields_ = [
        ("NameTag", POINTER(UWillowDialogNameTag)),
        ("StartAkEvent", POINTER(UAkEvent)),
    ]

    FBreathingLoopInfo._fields_ = [
        ("Condition", POINTER(UExpressionEvaluator)),
        ("StartAkEvent", POINTER(UAkEvent)),
        ("StopAkEvent", POINTER(UAkEvent)),
    ]

    FCustomCringeData._fields_ = [
        ("bDOT", c_bool, 1),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Cringes", TArray_USpecialMove_CringePtr),
    ]

    FPainDialogLine._fields_ = [
        ("DET_Pain", POINTER(UGearboxDialogEventTag)),
        ("DamageThresholdPct", c_float),
        ("ChanceToPlay", c_float),
        ("AkEvent", POINTER(UAkEvent)),
        ("bDeathSound", c_bool, 1),
        ("bCriticalHitSound", c_bool, 1),
        ("bRanOverSound", c_bool, 1),
        ("bGoreTechDeathSound", c_bool, 1),
        ("FlinchAnimType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("FlinchImpulseStrength", c_float),
        ("PainBehaviors", TArray_UBehaviorBasePtr),
    ]

    FExtraWeaponSlot._fields_ = [
        ("Socket", FName),
        ("bShowWeaponMesh", c_bool, 1),
        ("Mesh", POINTER(USkeletalMeshComponent)),
        ("MuzzleFlash", POINTER(UParticleSystemComponent)),
        ("AltMuzzleFlashes", TArray_UParticleSystemComponentPtr),
        ("MuzzleFlashLight", POINTER(UWillowPointLight)),
    ]

    FTurnData._fields_ = [
        ("MinRepeatTime", c_float),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
    ]

    FCombatZone._fields_ = [("Index", c_int), ("Bounds", FBox)]

    FCoverExposureData._fields_ = [
        ("bExposedUp", c_bool, 1),
        ("bExposedLeft", c_bool, 1),
        ("bExposedRight", c_bool, 1),
    ]

    FCombatPointDebugData._fields_ = [
        ("bBest", c_bool, 1),
        ("Score", c_float),
        ("Location", FVector),
    ]

    FCombatPointData._fields_ = [
        ("Slot", c_int),
        ("Location", FVector),
        ("Actor", FActorReference),
        ("ConstraintType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ConstraintTags", TArray_UPopulationSpawnedActorTagDefinitionPtr),
        ("bClaimed", c_bool, 1),
    ]

    FCombatZoneSearchData._fields_ = [
        ("ZoneMoveDist", c_float),
        ("ZoneTimeLimit", FAIRange),
        ("TargetRange", FAIRange),
        ("MinHeight", c_float),
        ("bCanFail", c_bool, 1),
        ("LineOfSight", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LineOfSightTimeLimit", FAIRange),
    ]

    FCombatPointSearchData._fields_ = [
        ("ZoneMoveDist", c_float),
        ("ZoneTimeLimit", FAIRange),
        ("TargetRange", FAIRange),
        ("MinHeight", c_float),
        ("bCanFail", c_bool, 1),
        ("LineOfSight", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LineOfSightTimeLimit", FAIRange),
        ("bUseCover", c_bool, 1),
        ("PointRadius", c_float),
    ]

    FPerchAnimData._fields_ = [
        ("Key", POINTER(UPopulationBodyTag)),
        ("StartAnim", POINTER(USpecialMove_Perch)),
        ("StopAnim", POINTER(USpecialMove_Perch)),
        ("IdleAnim", POINTER(USpecialMove_PerchLoop)),
    ]

    FWillowCoverState._fields_ = [
        ("Action", FName),
        ("Cover", FCoverInfo),
        ("Stance", POINTER(UWillowCoverStanceDefinition)),
    ]

    FEnemyBreadCrumbStruct._fields_ = [
        ("pos", FVector),
        ("CombatArea", POINTER(AWillowVehicleCombatArea)),
    ]

    FSplineAnimPathData._fields_ = [
        ("StartSpline", POINTER(ASplineActor)),
        ("AnimSeqName", FName),
        ("bReverse", c_bool, 1),
    ]

    FTrajectoryData._fields_ = [
        ("Speed", c_float),
        ("AnglePct", c_float),
        ("Angle", c_float),
        ("Error", c_float),
        ("Offset", FVector),
        ("PredictDistMax", c_float),
    ]

    FBeamDamageData._fields_ = [
        ("Momentum", c_float),
        ("Amount", c_float),
        ("Radius", c_float),
        ("Source", POINTER(UClass)),
        ("TypeDefinition", POINTER(UDamageTypeDefinition)),
        ("BarrelSourceTime", c_float),
        ("PlantSourceTime", c_float),
        ("DamageCauser", FScriptInterface),
        ("bCanDamageFriendlies", c_bool, 1),
    ]

    FServerBeamState._fields_ = [
        ("bDeleteMe", c_bool, 1),
        ("DamageData", FBeamDamageData),
        ("DamageInstigator", POINTER(AController)),
        ("StartTime", c_float),
        ("LockTime", c_float),
        ("NextTraceTime", c_float),
        ("BeamNetUpdateTime", c_float),
        ("LastDamageApplicationTime", c_float),
        ("LastDamagedActor", POINTER(AActor)),
        ("NextRandomBoneTime", c_float),
        ("ParentBeamIndex", c_int),
        ("ChildBeamsIndicies", TArray_int),
    ]

    FBeamLocationData._fields_ = [
        ("Actor", POINTER(AActor)),
        ("Socket", FName),
        ("Offset", FVector),
        ("bUseWeapon", c_bool, 1),
        ("WorldBody", FScriptInterface),
    ]

    FReplicatedBeamState._fields_ = [
        ("bEnabled", c_bool, 1),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
        ("bLocked", c_bool, 1),
        ("SourceData", FBeamLocationData),
        ("TargetData", FBeamLocationData),
        ("bPlayImpactAudio", c_bool, 1),
    ]

    FBeamState._fields_ = [
        ("BeamIndex", c_int),
        ("ServerOnlyState", FServerBeamState),
        ("CoreBeamState", FReplicatedBeamState),
        ("PartRef", POINTER(UParticleSystemComponent)),
        ("BeamAudioInfo", FAkPlayingInfo),
        ("BeamImpactAudioInfo", FAkPlayingInfo),
        ("CurrentStartPoint", FVector),
        ("CurrentEndPoint", FVector),
        ("CurrentStartTangent", FVector),
        ("CurrentEndTangent", FVector),
        ("CurrentDirection", FRotator),
        ("LastImpactLocation", FVector),
    ]

    FLightProjectile._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bPendingAdd", c_bool, 1),
        ("bNeedsConstantTrace", c_bool, 1),
        ("bStartParticleTracerAtWeapon", c_bool, 1),
        ("bActorReflected", c_bool, 1),
        ("bEnemyPenetrating", c_bool, 1),
        ("bOvercharged", c_bool, 1),
        ("bRicochetTowardsEnemy", c_bool, 1),
        ("bPenetrateUsingOriginalTraceDirection", c_bool, 1),
        ("Location", FVector),
        ("PartLocation", FVector),
        ("Velocity", FVector),
        ("PartRef", POINTER(UParticleSystemComponent)),
        ("AudioRef", FAkPlayingInfo),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("StartTime", c_float),
        ("NumRicochets", c_int),
        ("LastTraceTime", c_float),
        ("LastSafeTraceStartLocation", FVector),
        ("LastHitActor", POINTER(AActor)),
        ("Instigator", POINTER(APawn)),
        ("Damage", c_float),
        ("FiringPatternIdx", c_int),
        ("BulletFromClipType", c_ubyte),
        ("bHitWater", c_ubyte),
        ("PenetrationCount", c_ubyte),
        ("Id", c_ubyte),
        ("StartTrace", FVector),
        ("EndTrace", FVector),
        ("OriginalStartTrace", FVector),
    ]

    FReplicatedLightProjectile._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bStartParticleTracerAtWeapon", c_bool, 1),
        ("bActorReflected", c_bool, 1),
        ("bEnemyPenetrating", c_bool, 1),
        ("bOvercharged", c_bool, 1),
        ("bRicochetTowardsEnemy", c_bool, 1),
        ("Id", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StartTrace", FVector),
        ("EndTrace", FVector),
        ("ReflectSpeed", c_float),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("FiringPatternIdx", c_int),
        ("Instigator", POINTER(APawn)),
        ("StartTime", c_float),
    ]

    FReplicatedBeamEndPoints._fields_ = [("StartPoint", FVector), ("EndPoint", FVector)]

    FSwoopAttackData._fields_ = [
        ("bTriggered", c_bool, 1),
        ("bCacheTargetLocation", c_bool, 1),
        ("Distance", c_float),
    ]

    FActionSkillCustomEventReplicationData._fields_ = [
        ("EventCountForReplication", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EventName", FName),
    ]

    FCachedWeaponInfo._fields_ = [
        ("CachedClipSize", c_int),
        ("CachedAmmoInClip", c_int),
        ("CachedAmmoNotInClip", c_int),
        ("CachedWeaponIsReloading", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CachedWeaponType", FString),
        ("CachedWeaponTypeDLCClip", POINTER(USwfMovie)),
        ("IsReloadIconDisplayed", c_int),
        ("IsInteractionIconDisplayed", c_int),
    ]

    FWillowStatProperty._fields_ = [
        ("Id", FName),
        ("Data", FSettingsData),
        ("MaxData", FSettingsData),
        ("ChallengeBaseData", FSettingsData),
        ("OnlineId", c_int),
        ("bSparkStatDirty", c_bool, 1),
        ("bSparkStatInFlight", c_bool, 1),
    ]

    FAttributeCategory._fields_ = [
        ("Category", FString),
        ("Attributes", TArray_FAttributeBaseValueData),
    ]

    FDeathByWeaponStatID._fields_ = [
        ("DamageCauserType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StatId", FName),
    ]

    FDeathByDamageTypeStatID._fields_ = [
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StatId", FName),
    ]

    FDeathByWeaponDamageStatID._fields_ = [
        ("DamageType", c_ubyte),
        ("DamageCauserType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("StatId", FName),
    ]

    FInteractionIconWithOverrides._fields_ = [
        ("IconDef", POINTER(UInteractionIconDefinition)),
        ("OverrideIconDef", POINTER(UInteractionIconDefinition)),
        ("bOverrideIcon", c_bool, 1),
        ("bOverrideAction", c_bool, 1),
        ("bOverrideText", c_bool, 1),
        ("bCostsToUse", c_ubyte),
        ("CostsCurrencyType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("CostsAmount", c_int),
    ]

    FServerDynamicRadarIconData._fields_ = [
        ("SourceObject", POINTER(UObject)),
        ("Duration", c_float),
        ("StartTime", c_float),
    ]

    FRemoteDynamicRadarIconData._fields_ = [
        ("IconType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Location", FVector),
        ("bActive", c_bool, 1),
    ]

    FAITransformedName._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TransformedName", FString),
        ("TransformedKillStat", FName),
    ]

    FItemPoolInfo._fields_ = [
        ("ItemPool", POINTER(UItemPoolDefinition)),
        ("PoolProbability", FAttributeInitializationData),
    ]

    FAIPawnPlaythroughData._fields_ = [
        ("PlayThrough", c_int),
        ("DisplayName", FString),
        ("TransformedNames", TArray_FAITransformedName),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("AttributeStartingValues", TArray_FAttributeBaseValueData),
        ("CustomItemPoolIncludedLists", TArray_UItemPoolListDefinitionPtr),
        ("CustomItemPoolList", TArray_FItemPoolInfo),
        ("MeshMaterial", POINTER(UMaterialInstance)),
    ]

    FAIPawnGradeModifierData._fields_ = [
        ("CustomAIPawnArchetype", POINTER(AWillowAIPawn)),
        ("DisplayName", FString),
        ("ExpLevel", c_int),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("AttributeStartingValues", TArray_FAttributeBaseValueData),
        ("CustomItemPoolIncludedLists", TArray_UItemPoolListDefinitionPtr),
        ("CustomItemPoolList", TArray_FItemPoolInfo),
        ("TransformedNames", TArray_FAITransformedName),
    ]

    FAIPawnGameStageGradeWeightData._fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FAIPawnGradeModifierData),
    ]

    FCellInfo._fields_ = [
        ("AbsolutePosition", FVector),
        ("Width", c_float),
        ("Height", c_float),
        ("CellName", FString),
    ]

    FCellContentData._fields_ = [
        ("Tex", POINTER(UTexture)),
        ("Mesh", POINTER(UMeshComponent)),
        ("Inv", POINTER(AWillowInventory)),
        ("ExtArrayIndex", c_int),
    ]

    FPanelInfo._fields_ = [
        ("PanelName", FName),
        ("PanelFocused", FVector),
        ("PanelUnfocused", FVector),
        ("PanelCompare", FVector),
        ("PanelBackground", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CellWidth", c_int),
        ("CellHeight", c_int),
        ("TextureWidth", c_int),
        ("TextureHeight", c_int),
    ]

    FCardInfoRelativeToPanel._fields_ = [
        ("PanelName", FName),
        ("ComparePosition", FVector),
        ("CompareScale", c_float),
    ]

    FCardInfo._fields_ = [
        ("CardName", FName),
        ("CellWidth", c_int),
        ("CellHeight", c_int),
        ("TextureWidth", c_int),
        ("TextureHeight", c_int),
        ("MainPlayerLinkageName", FString),
        ("SplitPlayerLinkageName", FString),
        ("CompareSettings", TArray_FCardInfoRelativeToPanel),
    ]

    FWeaponAccessorySetup._fields_ = [
        ("WeaponArchetypeName", FName),
        ("AccessoryDefinition", POINTER(UGestaltSkeletalMeshDefinition)),
        ("AccessoryTransforms", POINTER(UGestaltPartMatrices)),
        ("AccessoryParts", TArray_FGestaltPartPermutation),
    ]

    FWeaponDefinitionData._fields_ = [
        ("WeaponTypeDefinition", POINTER(UWeaponTypeDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("BodyPartDefinition", POINTER(UWeaponPartDefinition)),
        ("GripPartDefinition", POINTER(UWeaponPartDefinition)),
        ("BarrelPartDefinition", POINTER(UWeaponPartDefinition)),
        ("SightPartDefinition", POINTER(UWeaponPartDefinition)),
        ("StockPartDefinition", POINTER(UWeaponPartDefinition)),
        ("ElementalPartDefinition", POINTER(UWeaponPartDefinition)),
        ("Accessory1PartDefinition", POINTER(UWeaponPartDefinition)),
        ("Accessory2PartDefinition", POINTER(UWeaponPartDefinition)),
        ("MaterialPartDefinition", POINTER(UWeaponPartDefinition)),
        ("PrefixPartDefinition", POINTER(UWeaponNamePartDefinition)),
        ("TitlePartDefinition", POINTER(UWeaponNamePartDefinition)),
        ("GameStage", c_int),
        ("UniqueId", c_int),
    ]

    FItemDefinitionData._fields_ = [
        ("ItemDefinition", POINTER(UItemDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("AlphaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("BetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("GammaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("DeltaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("EpsilonItemPartDefinition", POINTER(UItemPartDefinition)),
        ("ZetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("EtaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("ThetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("MaterialItemPartDefinition", POINTER(UItemPartDefinition)),
        ("PrefixItemNamePartDefinition", POINTER(UItemNamePartDefinition)),
        ("TitleItemNamePartDefinition", POINTER(UItemNamePartDefinition)),
        ("GameStage", c_int),
        ("UniqueId", c_int),
    ]

    FPendingMissionRewardData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("WeaponRewards", FWeaponDefinitionData * 2),
        ("ItemRewards", FItemDefinitionData * 2),
        ("bGrantAltReward", c_bool, 1),
    ]

    FUnloadableDlcPendingRewardData._fields_ = [
        ("MissionDefName", FString),
        ("WeaponRewards", FInventorySerialNumber * 2),
        ("ItemRewards", FInventorySerialNumber * 2),
        ("DlcPackageId", c_int),
        ("bGrantAltReward", c_bool, 1),
    ]

    FMissionStatusPresentation._fields_ = [
        ("TextColor", FColor),
        ("IconFrame", FString),
    ]

    FItemBehaviorSet._fields_ = [("OnUsed", TArray_UBehaviorBasePtr)]

    FSKULibrarySet._fields_ = [
        ("Id", c_int),
        ("NameID", FString),
        ("LibrarySetPackage", FString),
        ("CachedDlcALDefRef", POINTER(UObject)),
    ]

    FSKURuntimeLibrarySet._fields_ = [
        ("Id", c_int),
        ("Libraries", POINTER(UPackageAssetLibrary) * 6),
    ]

    FAssetLibConfig._fields_ = [
        ("SublibraryBits", c_int),
        ("AssetBits", c_int),
        ("Desc", FString),
        ("LibraryType", POINTER(UClass)),
    ]

    FAttributePresentationValueRemappingData._fields_ = [
        ("bUseContextOverride", c_bool, 1),
        ("InputValueMn", FAttributeInitializationData),
        ("InputValueMx", FAttributeInitializationData),
        ("OutputValueMn", FAttributeInitializationData),
        ("OutputValueMx", FAttributeInitializationData),
    ]

    FModifierValuePresentationData._fields_ = [
        ("AttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("OptionalConstraintPresentation", POINTER(UAttributePresentationDefinition)),
        ("ModifierValue", c_float),
        ("bShouldDisplay", c_bool, 1),
    ]

    FCustomizationUnlockData._fields_ = [
        ("ProductID", c_int),
        ("NumUnlockedCustomizations", c_int),
        ("UnlockedMask", TArray_unsigned_char),
    ]

    FMissionRewardPresentationData._fields_ = [
        ("PresentationDefinition", POINTER(UInventoryCardPresentationDefinition)),
        ("Rarity", c_ubyte),
    ]

    FReplicatedMissionFilterData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("bFiltered", c_bool, 1),
    ]

    FReplicatedMissionObjectiveData._fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveBit", c_int),
    ]

    FReplicatedMissionStatusData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
    ]

    FReplicatedMissionData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bTimerRunning", c_bool, 1),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", POINTER(UMissionObjectiveSetDefinition) * 4),
        ("SecondsLeft", c_int),
        ("ObjectiveCounts", c_int * 20),
        ("GameStage", c_int),
        ("bFiltered", c_bool, 1),
    ]

    FMissionDirectorData._fields_ = [
        ("MissionDefinition", POINTER(UMissionDefinition)),
        ("bBeginsMission", c_bool, 1),
        ("bEndsMission", c_bool, 1),
        ("BranchEnding", c_ubyte),
    ]

    FReplicatedMissionDirectiveData._fields_ = [
        ("MissionDirector", FScriptInterface),
        ("MissionDirective", FMissionDirectorData),
    ]

    FMissionStatusData._fields_ = [
        ("MissionDefinition", POINTER(UMissionDefinition)),
        ("MissionStatus", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsObjectiveSpecific", c_bool, 1),
        ("MissionObjective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveStatus", c_ubyte),
    ]

    FUnloadableDlcMissionStatusData._fields_ = [
        ("MissionDefName", FString),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("DlcPackageId", c_int),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSetIndex", c_int),
        ("SubObjectiveSetsIndices", TArray_int),
        ("GameStage", c_int),
        ("NeedsRewards", c_int),
        ("HeardKickoff", c_int),
    ]

    FMissionRewardData._fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("bGrantAltReward", c_bool, 1),
    ]

    FMissionStatusPlayerData._fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", TArray_UMissionObjectiveSetDefinitionPtr),
        ("GameStage", c_int),
        ("bNeedsRewards", c_bool, 1),
        ("bHeardKickoff", c_bool, 1),
    ]

    FMissionData._fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", TArray_UMissionObjectiveSetDefinitionPtr),
        ("bInitialized", c_bool, 1),
        ("bHeardKickoff", c_bool, 1),
        ("bFiltered", c_bool, 1),
    ]

    FObjectiveStatusData._fields_ = [("Objectives", TArray_int)]

    FTradeSlot._fields_ = [
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("WeaponData", FWeaponDefinitionData),
        ("ItemData", FItemDefinitionData),
        ("Quantity", c_int),
        ("WInv", POINTER(AWillowInventory)),
    ]

    FHUDWidget_ChallengeData._fields_ = [
        ("Challenge", POINTER(UChallengeDefinition)),
        ("LevelIndex", c_int),
        ("ConditionIndex", c_int),
        ("CurrStatVal", c_int),
        ("GoalStatVal", c_int),
        ("bComplete", c_bool, 1),
    ]

    FFadePickupParticle._fields_ = [
        ("SourceActor", POINTER(AActor)),
        ("Particle", POINTER(UParticleSystemComponent)),
        ("FadeEndTime", c_float),
    ]

    FPlayerSaveData._fields_ = [
        ("FilePath", FString),
        ("TimeStamp", FDouble),
        ("PlayerClassDefName", FString),
        ("ClassName", FString),
        ("CharacterName", FString),
        ("ExpLevel", c_int),
        ("CurrencyOnHand", c_int * 13),
        ("UICharacterName", FString),
        ("PlaythroughsCompleted", c_int),
        ("LastVisitedTeleporter", FString),
        ("ActiveMissionNumber", c_int),
        ("PlotMissionNumber", c_int),
        ("TotalPlayTime", c_int),
        ("LastPlaythroughNumber", c_int),
        ("LastSaveDate", FString),
        ("SaveGuid", FGuid),
        ("bIsUnloadedDlcCharacter", c_bool, 1),
        ("SaveGameFileId", c_int),
        ("ExpPoints", c_int),
    ]

    FLoadInfo._fields_ = [
        ("CharacterData", FPlayerSaveData),
        ("LoadInfoReady", c_bool, 1),
        ("LoadSucceeded", c_bool, 1),
        ("LoadCancelled", c_bool, 1),
    ]

    FAttributeDefinitionDefault._fields_ = [
        ("Attribute", POINTER(UAttributeDefinition)),
        ("DefaultValue", c_float),
    ]

    FAttributeScalarParam._fields_ = [
        ("ParamName", FName),
        ("bVectorParam", c_bool, 1),
        ("bClampInput", c_bool, 1),
        ("Input", FAttributeDefinitionDefault),
        ("MinInput", FAttributeDefinitionDefault),
        ("MaxInput", FAttributeDefinitionDefault),
        ("MinOutput", FAttributeDefinitionDefault),
        ("MaxOutput", FAttributeDefinitionDefault),
        ("ScalarParamOperand", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CurrentValue", c_float),
    ]

    FScreenParticleModifier._fields_ = [
        ("ScalarParams", TArray_FAttributeScalarParam),
        ("CachedValue", c_float),
    ]

    FScreenParticleScalarParamOverTime._fields_ = [
        ("ParameterName", FName),
        ("TotalTime", c_float),
        ("StartValue", c_float),
        ("EndValue", c_float),
        ("LastValue", c_float),
    ]

    FScreenParticleVectorParamOverTime._fields_ = [
        ("ParameterName", FName),
        ("TotalTime", c_float),
        ("VectorStartValue", FVector),
        ("VectorEndValue", FVector),
        ("LastValue", FVector),
    ]

    FScreenParticleParamOverTime._fields_ = [
        ("ScalarParams", TArray_FScreenParticleScalarParamOverTime),
        ("VectorParams", TArray_FScreenParticleVectorParamOverTime),
    ]

    FScreenParticleInitParams._fields_ = [
        ("Template", POINTER(UParticleSystem)),
        ("ScreenParticleModifiers", TArray_FScreenParticleModifier),
        ("TemplateScreenParticleMaterial", POINTER(UMaterialInterface)),
        ("MatParamName", FName),
        ("bHideWhenFinished", c_bool, 1),
        ("ParticleTag", FName),
        ("ContentDims", FVector2D),
        ("ParticleDepth", c_float),
        ("ScalingMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StopParamsOT", FScreenParticleParamOverTime),
        ("bOnlyOwnerSee", c_bool, 1),
    ]

    FScreenParticleRecord._fields_ = [
        ("Tag", FName),
        ("Template", POINTER(UParticleSystem)),
        ("MatParamName", FName),
        ("Component", POINTER(UParticleSystemComponent)),
        ("AppliedModifiers", TArray_FScreenParticleModifier),
        ("ContentDims", FVector2D),
        ("ParticleDepth", c_float),
        ("ScalingMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StopParamsOT", FScreenParticleParamOverTime),
        ("StopTime", c_float),
    ]

    FPostProcessOverlay._fields_ = [
        ("OverlayName", FName),
        ("DestPostProcessOverlay", FPostProcessSettings),
        ("MinTransitionInDuration", c_float),
        ("MinTransitionHoldDuration", c_float),
        ("MinTransitionOutDuration", c_float),
        ("MaxTransitionInDuration", c_float),
        ("MaxTransitionHoldDuration", c_float),
        ("MaxTransitionOutDuration", c_float),
        ("ClearOverlayQueueAfterTransition", c_bool, 1),
    ]

    FMaterialEffectModifier._fields_ = [
        ("EffectName", FName),
        ("ScalarParams", TArray_FAttributeScalarParam),
        ("CachedValue", c_float),
        ("MaterialInstance", POINTER(UMaterialInstanceConstant)),
    ]

    FDOFEffectModifierData._fields_ = [
        ("AutoRelcalculateFocusDistance", c_bool, 1),
        ("RecalculateFocusDistanceRate", c_float),
        ("FocusDistanceLerpRate", c_float),
    ]

    FPostProcessChainOptions._fields_ = [
        ("MaterialEffectModifiers", TArray_FMaterialEffectModifier),
        ("DOFEffectModifier", FDOFEffectModifierData),
    ]

    FDOFEffectData._fields_ = [
        ("FalloffExponent", c_float),
        ("BlurKernelSize", c_float),
        ("MaxNearBlurAmount", c_float),
        ("MaxFarBlurAmount", c_float),
        ("ModulateBlurColor", FColor),
        ("FocusType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("FocusInnerRadius", c_float),
        ("FocusDistance", c_float),
        ("FocusPosition", FVector),
    ]

    FPostProcessChainRecord._fields_ = [
        ("Template", POINTER(UPostProcessChain)),
        ("Instance", POINTER(UPostProcessChain)),
        ("AppliedModifiers", TArray_FMaterialEffectModifier),
        ("PopWhenScalarParamIsMaxedOut", c_bool, 1),
        ("DOFEffectModifier", FDOFEffectModifierData),
        ("NextDOFUpdateTime", c_float),
    ]

    FRtpcParameterValue._fields_ = [("AkRtpc", POINTER(UAkRtpc)), ("Value", c_float)]

    FImpactResponseParameters._fields_ = [
        ("ParticleParameters", TArray_FParticleSysParam),
        ("FontParameterValues", TArray_FFontParameterValue),
        ("ScalarParameterValues", TArray_FScalarParameterValue),
        ("TextureParameterValues", TArray_FTextureParameterValue),
        ("VectorParameterValues", TArray_FVectorParameterValue),
        ("RtpcParameterValues", TArray_FRtpcParameterValue),
        ("bNoSound", c_bool, 1),
    ]

    FImpactResponseEffect._fields_ = [
        ("bCensorThisEffect", c_bool, 1),
        ("CensoredEffectAlternative", POINTER(UWillowImpactDefinition)),
        ("DamageModifierPercent", c_float),
        ("ImpactEvent", POINTER(UAkEvent)),
        ("AINoiseLevel", c_float),
        ("ParticleTemplate", POINTER(UParticleSystem)),
        ("bAttachParticleToHitActor", c_bool, 1),
        ("bHideEffectFromHitActor", c_bool, 1),
        ("MaxEffectDistance", c_float),
        ("DecalMaterials", TArray_UMaterialInterfacePtr),
        ("DecalWidth", c_float),
        ("DecalHeight", c_float),
        ("DecalMinScale", c_float),
        ("DecalMaxScale", c_float),
        ("DecalDepth", c_float),
        ("DecalRandomRotation", c_bool, 1),
        ("DecalCreateNewMaterialInstanceConstant", c_bool, 1),
        ("ImpactFlashLightClass", POINTER(UClass)),
        ("EffectParameters", FImpactResponseParameters),
    ]

    FImpactResponseData._fields_ = [
        ("ImpactType", POINTER(UWillowImpactDefinition)),
        ("ResponseEffect", FImpactResponseEffect),
    ]

    FWheelSlipModifierData._fields_ = [
        ("LongSlipFactor", c_float),
        ("LatSlipFactor", c_float),
    ]

    FDamageSurfaceTypeModifier._fields_ = [
        ("SurfaceType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BaseChance", FAttributeInitializationData),
        ("BaseSpreadChance", FAttributeInitializationData),
        ("SpreadChanceDecayMultiplier", FAttributeInitializationData),
    ]

    FActiveStatusEffect._fields_ = [
        ("Duration", c_float),
        ("TotalElapsedTime", c_float),
        ("AccumulatedTime", c_float),
        ("DamagePerSecond", c_float),
        ("EventInstigator", POINTER(AActor)),
        ("DamageCauser", FScriptInterface),
        ("DamageSource", POINTER(UClass)),
        ("StatusEffectDefinition", POINTER(UStatusEffectDefinition)),
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("HitInfo", FTraceHitInfo),
        ("DamageNumberSocket", FName),
        ("AccumulatedSpreadTime", c_float),
        ("SpreadTimeInterval", c_float),
        ("SpreadCount", c_int),
        ("SpreadAttempt", c_int),
        ("SpreadRadius", c_float),
        ("TravelledRegions", TArray_UBodyHitRegionDefinitionPtr),
        ("TravelledTargets", TArray_FScriptInterface),
        ("OwnerComponent", POINTER(UStatusEffectsComponent)),
        ("SpreadCap", c_int),
        ("bIsInfiniteDuration", c_bool, 1),
    ]

    FSocketEmitter._fields_ = [("Emitter", POINTER(AEmitter)), ("SocketName", FName)]

    FHitRegionEmitters._fields_ = [
        ("Emitters", TArray_FSocketEmitter),
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("bDeleteOnDeactivation", c_bool, 1),
        ("TimeWaitingToDie", c_float),
    ]

    FEffectSoundData._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AkPlayingId", c_int),
    ]

    FOngoingEffectInfo._fields_ = [
        ("TotalDamageDealtToHealth", c_float),
        ("TotalDamageDealtToShields", c_float),
        ("Duration", c_float),
    ]

    FShopItemData._fields_ = [
        ("Item", POINTER(AWillowInventory)),
        ("Price", c_int),
        ("ItemStatus", c_ubyte),
    ]

    FConditionalAnimData._fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("SpecialMove", POINTER(USpecialMoveDefinition)),
    ]

    FBodyWeaponActionData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Expression", POINTER(UExpressionEvaluator)),
        ("Animations", TArray_FConditionalAnimData),
    ]

    FBodyWeaponActionPostureData._fields_ = [
        ("Posture", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Actions", TArray_FBodyWeaponActionData),
    ]

    FBodyHandIKHoldData._fields_ = [
        ("JointLocation", FVector),
        ("HandLocation", FVector),
        ("HandRotation", FRotator),
    ]

    FCustomBodyHandIKHoldData._fields_ = [
        ("HoldName", FName),
        ("IKData", FBodyHandIKHoldData),
    ]

    FExtraMuzzleEffect._fields_ = [
        ("Particles", POINTER(UParticleSystem)),
        ("Sound", POINTER(UAkEvent)),
    ]

    FWeaponBoneControllerData._fields_ = [
        ("BoneName", FName),
        ("ControlType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bUseInFirstPerson", c_bool, 1),
        ("bUseInThirdPerson", c_bool, 1),
        ("ControlTemplate", POINTER(USkelControlBase)),
    ]

    FWeaponMemento._fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("StoredAmmo", c_int),
        ("bEquipped", c_bool, 1),
        ("bDropOnDeath", c_bool, 1),
    ]

    FBloodSplatterTrace._fields_ = [
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
        ("DamageSeverityPercent", c_float),
    ]

    FGoreEffect._fields_ = [
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("GoreDataIndex", c_int),
        ("InstigatedBy", POINTER(AController)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
    ]

    FMaterialScalarFadeReplication._fields_ = [
        ("Name", FName),
        ("StartValue", c_float),
        ("EndValue", c_float),
        ("FadeTime", c_float),
        ("bRunning", c_bool, 1),
        ("bIsForGoreDeath", c_bool, 1),
    ]

    FHolsteredGearDisplaySlot._fields_ = [
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Item", POINTER(AWillowInventory)),
    ]

    FGoreTriggerData._fields_ = [
        ("DamageTypeTrigger", POINTER(UDamageTypeDefinition)),
        ("DamageSourceTrigger", POINTER(UClass)),
        ("HealthPctDamageThreshold", c_float),
    ]

    FDamageReactionData._fields_ = [
        ("EventName", FName),
        ("DamageTriggers", TArray_FGoreTriggerData),
        ("PercentOfHealthTrigger", c_float),
        ("DamageSpecialMove", POINTER(USpecialMoveDefinition)),
        ("ReactionBehaviors", TArray_UBehaviorBasePtr),
        ("bDamageThreshold", c_bool, 1),
        ("bRepeatableEvent", c_bool, 1),
        ("bCensored", c_bool, 1),
        ("bOnlyTriggeredOnOwnerDeath", c_bool, 1),
    ]

    FWeaponPartAttachmentData._fields_ = [
        ("FirstPersonAttachmentSocket", FName),
        ("ThirdPersonAttachmentSocket", FName),
        ("FirstPersonOffHandAttachmentSocket", FName),
        ("ThirdPersonOffHandAttachmentSocket", FName),
    ]

    FMeleeOverTimeState._fields_ = [
        ("bIsMeleeActive", c_bool, 1),
        ("MeleeDefinition", POINTER(UMeleeDefinition)),
        ("MeleeStartTime", c_float),
        ("TimeElapsedSinceLastMelee", c_float),
        ("HitActors", TArray_AActorPtr),
        ("MeleeStartLocation", FVector),
        ("MeleeStartRotation", FRotator),
    ]

    FObstacleData._fields_ = [
        ("Actor", POINTER(AActor)),
        ("Leader", POINTER(AActor)),
        ("Radius", c_float),
        ("HalfHeight", c_float),
        ("MaxSpeed", c_float),
        ("Location", FVector),
        ("Velocity", FVector),
        ("OldVelocity", FVector),
        ("LastOffset", FVector2D),
        ("IDO", FScriptInterface),
        ("bWasAvoiding", c_bool, 1),
    ]

    FSimpleAnimData._fields_ = [
        ("AnimName", FName),
        ("Tree", POINTER(UWillowAnimTree)),
        ("Nodes", TArray_UWillowAnimNode_SimplePtr),
    ]

    FSkillDamagedEventConstraintData._fields_ = [
        ("DamageTypeConstraint", POINTER(UDamageTypeDefinition)),
        ("DamageSourceConstraint", POINTER(UClass)),
        ("bMustBeCriticalDamage", c_bool, 1),
        ("bMustBeOneShotKill", c_bool, 1),
    ]

    FSkillKillEventData._fields_ = [
        ("EventName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EventConstraints", TArray_FSkillDamagedEventConstraintData),
    ]

    FSkillDamageEventData._fields_ = [
        ("EventName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EventConstraints", TArray_FSkillDamagedEventConstraintData),
    ]

    FNamedSkillEvent._fields_ = [
        ("EventName", FName),
        ("RequiredSkills", TArray_USkillDefinitionPtr),
        ("EventResponses", TArray_UBehaviorBasePtr),
        ("RequiredActionSkillState", c_ubyte),
    ]

    FSkillActionData._fields_ = [
        ("ClientConsoleCommand", FString),
        ("bSkillOnInstigator", c_bool, 1),
        ("bSkillOnRecipient", c_bool, 1),
        ("GradeType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("HardcodedGrade", c_int),
        ("SkillToActivate", POINTER(USkillDefinition)),
        ("SkillToDeactivate", POINTER(USkillDefinition)),
        ("AkEvent", POINTER(UAkEvent)),
        ("bInstigatorPlaysSound", c_bool, 1),
        ("bRecipientPlaysSound", c_bool, 1),
    ]

    FSkillEventResponseData._fields_ = [
        ("bPredictOnClient", c_bool, 1),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Action", FSkillActionData),
    ]

    FSkillConstraintData._fields_ = [
        ("bApplyConstraintOnActivatation", c_bool, 1),
        ("bApplyConstraintWhileActive", c_bool, 1),
        ("bApplyConstraintWhilePaused", c_bool, 1),
        ("OnFailure", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Evaluator", POINTER(UExpressionEvaluator)),
        ("EvaluatorDefinitions", TArray_USkillExpressionEvaluatorDefinitionPtr),
    ]

    FBonusAttributeModifierUpgrade._fields_ = [
        ("GradeToApplyAt", c_int),
        ("Modifier", c_float),
    ]

    FSkillEffectData._fields_ = [
        ("AttributeToModify", POINTER(UAttributeDefinitionBase)),
        ("bIncludeDuelingTargets", c_bool, 1),
        ("bIncludeSelfAsTarget", c_bool, 1),
        ("bOnlyEffectTargetsInRange", c_bool, 1),
        ("bExcludeNonPlayerCharacters", c_bool, 1),
        ("EffectTarget", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TargetInstanceDataName", FName),
        ("TargetCriteria", c_ubyte),
        ("ModifierType", c_ubyte),
        ("Unknown2", c_ubyte * 0x2),
        ("BaseModifierValue", FAttributeInitializationData),
        ("GradeToStartApplyingEffect", c_int),
        ("PerGradeUpgradeInterval", c_int),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("BonusUpgradeList", TArray_FBonusAttributeModifierUpgrade),
    ]

    FInputContextData._fields_ = [
        ("ContextName", FName),
        ("Definition", POINTER(UInputContextDefinition)),
    ]

    FSlaughterMissionChain._fields_ = [
        ("SlaughterMissions", TArray_UMissionDefinitionPtr)
    ]

    FLevelBasedExpScale._fields_ = [
        ("LevelDifference", c_int),
        ("HigherLevelEnemyExpScale", c_float),
        ("LowerLevelEnemyExpScale", c_float),
    ]

    FStatusEffectTypeCommonProperties._fields_ = [
        ("StatusEffectType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EffectStartAkEvent", POINTER(UAkEvent)),
        ("EffectStopAkEvent", POINTER(UAkEvent)),
    ]

    FLevelBasedStatusEffectChanceScale._fields_ = [
        ("LevelDifference", c_int),
        ("HigherLevelChanceScale", c_float),
        ("LowerLevelChanceScale", c_float),
    ]

    FPlayThroughData._fields_ = [
        ("PlayThroughNumber", c_int),
        ("BalanceDefinitions", TArray_UGameBalanceDefinitionPtr),
    ]

    FLevelBasedDamageScale._fields_ = [
        ("LevelDifference", c_int),
        ("HigherLevelAttackerDmgScale", c_float),
        ("LowerLevelAttackerDmgScale", c_float),
    ]

    FRarityLevelColor._fields_ = [
        ("MinLevel", c_int),
        ("MaxLevel", c_int),
        ("Color", FColor),
        ("DropLifeSpanType", c_ubyte),
        ("RarityRating", c_ubyte),
    ]

    FExpAwardWeight._fields_ = [
        ("Players", c_int),
        ("KillerExpBonus", c_float),
        ("ExpWeight", c_float),
    ]

    FKillSkillDuration._fields_ = [("Players", c_int), ("Duration", c_float)]

    FDamageTypeExpModifier._fields_ = [
        ("DamageSource", POINTER(UClass)),
        ("TypeDefinition", POINTER(UDamageTypeDefinition)),
        ("Multiplier", c_float),
    ]

    FPlayerClassAchievementUnlockData._fields_ = [
        ("UnlockType", c_ubyte),
        ("Achievement", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("IntData", c_int),
    ]

    FPendingClientTrainingMessage._fields_ = [
        ("Message", POINTER(UClass)),
        ("TrainingDefinition", POINTER(UTrainingMessageDefinition)),
        ("Duration", c_float),
    ]

    FPendingMissionRewardsData._fields_ = [
        ("PendingMissionRewards", TArray_FPendingMissionRewardData),
        ("PlaythroughIndex", c_int),
    ]

    FOneOffLevelChallengeData._fields_ = [
        ("PackageId", c_ubyte),
        ("ContentId", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("Completion", TArray_int),
    ]

    FPlayerUIPreferences._fields_ = [
        ("CharacterName", FString),
        ("PrimaryColor", FColor),
        ("SecondaryColor", FColor),
        ("TertiaryColor", FColor),
    ]

    FCurrencyState._fields_ = [
        ("FormOfCurrency", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StatName", FName),
        ("CurrentAmount", c_int),
        ("LastKnownAmount", c_int),
    ]

    FBankSlot._fields_ = [("InventorySerialNumber", FInventorySerialNumber)]

    FChestData._fields_ = [
        ("InventoryClass", POINTER(UClass)),
        ("InventorySerialNumber", FInventorySerialNumber),
        ("Inventory", POINTER(AWillowInventory)),
    ]

    FMissionPlaythroughData._fields_ = [
        ("MissionList", TArray_FMissionStatusPlayerData),
        ("UnloadableDlcMissionList", TArray_FUnloadableDlcMissionStatusData),
        ("UnloadableDlcPendingMissionRewards", TArray_FUnloadableDlcPendingRewardData),
        ("FilteredMissions", TArray_UMissionDefinitionPtr),
        ("ActiveMission", POINTER(UMissionDefinition)),
        ("PlayThroughNumber", c_int),
    ]

    FStatusMenuMissionEligibilityData._fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("MissionStatus", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsBlocked", c_bool, 1),
        ("bIsFiltered", c_bool, 1),
    ]

    FInventorySaveGameData._fields_ = [
        ("DefinitionData", FItemDefinitionData),
        ("Quantity", c_int),
        ("bEquipped", c_bool, 1),
        ("Mark", c_ubyte),
    ]

    FLoginState._fields_ = [("LoginName", FString), ("bIsDirty", c_bool, 1)]

    FLungeData._fields_ = [
        ("Target", POINTER(AActor)),
        ("Length", c_float),
        ("Start", c_float),
        ("SavedAccelRate", c_float),
    ]

    FTimePosition._fields_ = [("Position", FVector), ("Time", c_float)]

    FVehicleSeatInstance._fields_ = [
        ("StoragePawn", POINTER(APawn)),
        ("LastStoragePawn", POINTER(APawn)),
        ("SeatPawn", POINTER(AVehicle)),
        ("Gun", POINTER(AWillowVehicleWeapon)),
        ("GunMesh", POINTER(UMeshComponent)),
        ("GunDefinition", POINTER(UWeaponTypeDefinition)),
        ("BarrelIndex", c_int),
        ("WeaponRotationName", FName),
        ("FlashLocationName", FName),
        ("FlashCountName", FName),
        ("FiringModeName", FName),
        ("AttachedWeaponName", FName),
        ("TurretControllers", TArray_UWillowSkelControl_TurretConstrainedPtr),
        ("WeaponFireSMD", POINTER(USpecialMoveDefinition)),
        ("OldPositions", TArray_FTimePosition),
        ("SmoothedCameraOffset", FVector),
        ("IncomingSeatIndex", c_int),
        ("SeatLockTime", c_float),
        ("bDontStopAnimOnExit", c_bool, 1),
        ("bSwitchingSeats", c_bool, 1),
        ("bExiting", c_bool, 1),
    ]

    FTombstoneData._fields_ = [
        ("TotalTimePlayed", c_int),
        ("CharacterLevel", c_int),
        ("PercentMissionsComplete", c_int),
        ("PercentChallengesComplete", c_int),
        ("CharacterName", FString),
        ("FavoriteManufacturer", FString),
        ("FavoriteWeaponType", FString),
        ("KilledByDescription", FString),
        ("ScreenshotFilename", FString),
    ]

    FResourceSaveGameData._fields_ = [
        ("ResourceDefinition", POINTER(UResourceDefinition)),
        ("ResourcePoolDefinition", POINTER(UResourcePoolDefinition)),
        ("Amount", c_float),
        ("UpgradeLevel", c_int),
    ]

    FInventorySlotSaveGameData._fields_ = [
        ("InventorySlotMax_Misc", c_int),
        ("WeaponReadyMax", c_int),
        ("NumQuickSlotsFlourished", c_int),
    ]

    FWeaponSaveGameData._fields_ = [
        ("WeaponDefinitionData", FWeaponDefinitionData),
        ("QuickSlot", c_ubyte),
        ("Mark", c_ubyte),
    ]

    FWorldDiscoveryData._fields_ = [
        ("DiscoveryName", FName),
        ("HasBeenUncovered", c_bool, 1),
    ]

    FMissionPlaythroughSaveGameData._fields_ = [
        ("PlayThroughNumber", c_int),
        ("MissionData", TArray_FMissionStatusPlayerData),
        ("UnloadableDlcMissionData", TArray_FUnloadableDlcMissionStatusData),
        ("PendingMissionRewards", TArray_FPendingMissionRewardData),
        ("UnloadableDlcPendingMissionRewards", TArray_FUnloadableDlcPendingRewardData),
        ("ActiveMission", FString),
        ("FilteredMissions", TArray_UMissionDefinitionPtr),
    ]

    FSkillSaveGameData._fields_ = [
        ("SkillDefinition", POINTER(USkillDefinition)),
        ("Grade", c_int),
        ("GradePoints", c_int),
        ("EquippedSlotIndex", c_int),
    ]

    FUnloadableDlcItemSaveGameData._fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("Quantity", c_int),
        ("bEquipped", c_bool, 1),
        ("Mark", c_ubyte),
    ]

    FUnloadableDlcWeaponSaveGameData._fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("QuickSlot", c_ubyte),
        ("Mark", c_ubyte),
    ]

    FPostProcessOverlayInfo._fields_ = [
        ("PostProcessOverlay", FPostProcessOverlay),
        ("SceneInterpolationPhaseTime", c_float),
        ("SceneInterpolationDuration", c_float),
        ("PostProcessOverlayPhase", c_ubyte),
    ]

    FSpeedKillData._fields_ = [("VictimName", FString), ("VictimKillTime", c_float)]

    FLurchData._fields_ = [
        ("StartTime", c_float),
        ("LocMagnitude", c_float),
        ("RotMagnitude", c_float),
        ("Duration", c_float),
        ("FalloffRate", c_float),
    ]

    FSkillTreeSkillStateData._fields_ = [
        ("SkillDefinition", POINTER(USkillDefinition)),
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("SkillGrade", c_int),
        ("bIsUnlocked", c_bool, 1),
    ]

    FPlayerSkillTreeSkillData._fields_ = [
        ("Definition", POINTER(USkillDefinition)),
        ("Index", c_int),
        ("PrevSkillIndex", c_int),
        ("NextSkillIndex", c_int),
        ("ParentTierIndex", c_int),
        ("PrevSkillTypeIndex", c_int),
        ("NextSkillTypeIndex", c_int),
        ("Grade", c_int),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]

    FAppliedSkillEffect._fields_ = [
        ("EffectData", FSkillEffectData),
        ("Contexts", TArray_UObjectPtr),
        ("Modifier", POINTER(UAttributeModifier)),
    ]

    FVehicleSeatDefinition._fields_ = [
        ("SeatDefinition", POINTER(UWillowVehicleSeatDefinition)),
        ("bDoNotUseThisSeat", c_bool, 1),
        ("WeaponBalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("WeaponFireSMD", POINTER(USpecialMoveDefinition)),
        ("NextSeatIndex", c_int),
        ("Anim_SeatSwap", TArray_USpecialMove_VehiclePtr),
        ("SeatAIDef", POINTER(UAIDefinition)),
        ("SeatInteractTextDefinition", POINTER(ULocalizedStringDefinition)),
        ("GunSocket", TArray_FName),
        ("SeatNameEnter", FName),
        ("SeatNameExit", FName),
    ]

    FConditionLevel._fields_ = [
        ("ConditionDefinitions", TArray_UChallengeConditionDefinitionPtr),
        ("ProgressNotificationOverride", TArray_float),
        ("CompletedAttributeEffects", TArray_FAttributeEffectData),
        ("BadassPointReward", FAttributeInitializationData),
        ("RewardItemPool", POINTER(UItemPoolDefinition)),
        ("RewardTextKey", FName),
    ]

    FChallengeData._fields_ = [
        ("PCOwner", POINTER(AWillowPlayerController)),
        ("ChallengeDefinition", POINTER(UChallengeDefinition)),
    ]

    FTrainingData._fields_ = [
        ("PCOwner", POINTER(AWillowPlayerController)),
        ("TrainingDefinition", POINTER(UTrainingMessageDefinition)),
    ]

    FTaggedGFxMovie._fields_ = [("Movie", POINTER(UGearboxGFxMovie)), ("Tag", FName)]

    FSpawnedAttachedLootData._fields_ = [
        ("Inv", POINTER(AWillowInventory)),
        ("AttachmentPointName", FName),
    ]

    FSpawnedDroppedLootData._fields_ = [
        ("Inv", POINTER(AWillowInventory)),
        ("bDisableRigidBodyPhysics", c_bool, 1),
    ]

    FPlayerSkillTreeBranchData._fields_ = [
        ("Definition", POINTER(USkillTreeBranchDefinition)),
        ("BranchPointsToUnlockNextBranch", c_int),
        ("Index", c_int),
        ("ParentBranchIndex", c_int),
        ("PrevBranchIndex", c_int),
        ("NextBranchIndex", c_int),
        ("ChildBranchIndices", TArray_int),
        ("TierIndices", TArray_int),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]

    FPlayerSkillTreeTierData._fields_ = [
        ("SkillIndices", TArray_int),
        ("BranchPointsToUnlockTier", c_int),
        ("Index", c_int),
        ("PrevTierIndex", c_int),
        ("NextTierIndex", c_int),
        ("ParentBranchIndex", c_int),
        ("TierNumber", c_int),
        ("bUnlocked", c_bool, 1),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]

    FKillMissionData._fields_ = [
        ("bUseKillRestrictions", c_bool, 1),
        ("bCriticalHit", c_bool, 1),
        ("bNotCriticalHit", c_bool, 1),
        ("bNotHitRegion", c_bool, 1),
        ("bMissionWeapon", c_bool, 1),
        ("DamageCauserType", c_ubyte),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("HitRegionName", FName),
    ]

    FBalancedInventoryData._fields_ = [
        ("ItmPoolDefinition", POINTER(UItemPoolDefinition)),
        ("InvBalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("Probability", FAttributeInitializationData),
        ("bDropOnDeath", c_bool, 1),
    ]

    FGoldenKeySource._fields_ = [
        ("SourceId", c_ubyte),
        ("NumKeys", c_ubyte),
        ("NumKeysSpent", c_ubyte),
        ("Empty", c_ubyte),
    ]

    FSeasonPassOfferUnion._fields_ = [
        ("AssociatedSeasonPassOfferId", c_int),
        ("PaidOfferId", c_int),
        ("FreeOfferId", c_int),
        ("SeasonPassId", c_int),
    ]

    FSeasonPassPackageCount._fields_ = [
        ("SeasonPassId", c_int),
        ("PackageCount", c_int),
        ("bPreOrder", c_bool, 1),
    ]

    FDLCMissionData._fields_ = [
        ("MinMissionNumber", c_int),
        ("MaxMissionNumber", c_int),
        ("MissionNameLocKey", FString),
    ]

    FCompatibilityVersionInfo._fields_ = [
        ("CurrentCompatPackVersion", c_int),
        ("CurrentCompatibilityMask", FDlcCompatibilityData),
    ]

    FContentState._fields_ = [("LicensedMask", c_int), ("InstalledMask", c_int)]

    FRecentlyResistedAttackData._fields_ = [
        ("DamagedActor", POINTER(AActor)),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LastResistTime", c_float),
    ]

    FExpansionData._fields_ = [("Tag", c_int), ("Data", TArray_unsigned_char)]

    FRegionGameStageData._fields_ = [
        ("RegionDef", POINTER(URegionDefinition)),
        ("GameStage", c_int),
        ("PlaythroughIdx", c_int),
    ]

    FUnloadableDlcRegionGameStageData._fields_ = [
        ("RegionDefName", FString),
        ("GameStage", c_int),
        ("PlaythroughIdx", c_int),
        ("DlcPackageId", c_int),
    ]

    FUnloadableDlcChallengeData._fields_ = [
        ("ChallengeDefName", FString),
        ("DlcPackageId", c_int),
    ]

    FLockoutData._fields_ = [
        ("LockoutDef", POINTER(ULockoutDefinition)),
        ("LockoutTime", c_int),
    ]

    FUnloadableDlcLockoutData._fields_ = [
        ("LockoutDefName", FString),
        ("LockoutTime", c_int),
        ("DlcPackageId", c_int),
    ]

    FChosenVehicleCustomization._fields_ = [
        ("FamilyDef", POINTER(UVehicleFamilyDefinition)),
        ("CustomizationDef", POINTER(UCustomizationDefinition) * 2),
    ]

    FThirdPersonMenuView._fields_ = [
        ("RelativeCameraLocation", FVector),
        ("RelativeCameraRotation", FRotator),
        ("RelativeMenuLocation", FVector),
        ("RelativeMenuRotation", FRotator),
        ("CameraYawMin", c_float),
        ("CameraYawMax", c_float),
        ("VerticalSplitscreenCameraOffset", c_float),
        ("VerticalSplitscreenCameraSpread", c_float),
        ("FocusBoneName", FName),
        ("FocusScreenYaw", c_float),
    ]

    FOneTimeDataElement._fields_ = [
        ("Text", FString),
        ("Icon", FString),
        ("IconOverride", FString),
        ("TextColor", FColor),
        ("Data", POINTER(UObject)),
    ]

    FSortableDataElement._fields_ = [
        ("bFiltered", c_bool, 1),
        ("OneTimeIdx", c_int),
        ("CategoryIdx", c_int),
        ("Data", POINTER(UObject)),
    ]

    FGFxTextEntry._fields_ = [("ArrayIdx", c_int), ("Kind", c_ubyte)]

    FSortFilterConfiguration._fields_ = [
        ("SortType", c_ubyte),
        ("FilterType", c_ubyte),
        ("CategoryType", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("SortTitleLookupKey", FString),
    ]

    FHeavyInventoryElement._fields_ = [
        ("Text", FString),
        ("Color", FColor),
        ("Data", POINTER(UObject)),
    ]

    FItemCardInfo._fields_ = [
        ("CardName", FName),
        ("ContentIdx", c_int),
        ("ItemCard", POINTER(UItemCardGFxObject)),
    ]

    FAIThrowProjectileBehaviorSequenceStateData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    FPerchStateData._fields_ = [
        ("AttachmentName", FName),
        ("StaticMesh", POINTER(UStaticMesh)),
        ("SkelMesh", POINTER(USkeletalMesh)),
        ("LocOffset", FVector),
        ("RotOffset", FRotator),
        ("Scale", c_float),
        ("Actor", POINTER(AActor)),
    ]

    FBehaviorCondition._fields_ = [
        ("ConditionId", c_int),
        ("Condition", POINTER(UExpressionEvaluator)),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FDropProjectileBehaviorSequenceStateData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    FBehaviorsSelectionData._fields_ = [
        ("Weight", FAttributeInitializationData),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FRemoveObject._fields_ = [("Name", FName)]

    FTurretConstraintData._fields_ = [
        ("PitchConstraint", c_int),
        ("YawConstraint", c_int),
        ("RollConstraint", c_int),
    ]

    UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData_fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    FCustomizationItemData._fields_ = [
        ("ItemPoolKey", c_int),
        ("CustomizationItemPool", POINTER(UItemPoolDefinition)),
    ]

    FBehaviorAliasReference._fields_ = [
        ("BehaviorAlias", POINTER(UBehaviorAliasDefinition)),
        ("BehaviorList", TArray_UBehaviorBasePtr),
    ]

    FMissionObjectiveStateSelectionData._fields_ = [
        ("bNotStarted", c_bool, 1),
        ("bActive", c_bool, 1),
        ("bComplete", c_bool, 1),
    ]

    FMissionStateSelectionData._fields_ = [
        ("bNotStarted", c_bool, 1),
        ("bActive", c_bool, 1),
        ("bRequiredObjectivesComplete", c_bool, 1),
        ("bReadyToTurnIn", c_bool, 1),
        ("bComplete", c_bool, 1),
        ("bFailed", c_bool, 1),
    ]

    FBlackMarketUpgradeLevelData._fields_ = [
        ("UpgradeDefinition", POINTER(UBlackMarketUpgradeDefinition)),
        ("MaxUpgradeLevel", c_int),
    ]

    FTechDeathData._fields_ = [
        ("EventName", FName),
        ("DamageTypeTriggers", TArray_UDamageTypeDefinitionPtr),
        ("DeathAnimation", POINTER(USpecialMoveDefinition)),
    ]

    FVehicleHandlingWheelData._fields_ = [
        ("BoneName", FName),
        ("WheelDef", POINTER(UVehicleWheelDefinition)),
    ]

    FFishtailingInfo._fields_ = [("ContactPoint", FVector), ("Impulse", FVector)]

    FMoveToCellData._fields_ = [
        ("IndexInCellsList", c_int),
        ("DistanceFromCurrentCell", c_float),
        ("CosAngle", c_float),
    ]

    FInventoryGradeModifierData._fields_ = [
        ("ExpLevel", c_int),
        ("CustomInventoryDefinition", POINTER(UWillowInventoryDefinition)),
    ]

    FInventoryGameStageGradeWeightData._fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FInventoryGradeModifierData),
    ]

    FInventoryManufacturerBalanceData._fields_ = [
        ("Manufacturer", POINTER(UManufacturerDefinition)),
        ("Grades", TArray_FInventoryGameStageGradeWeightData),
    ]

    FItemPartGradeWeightData._fields_ = [
        ("Part", POINTER(UItemPartDefinition)),
        ("Manufacturers", TArray_FManufacturerCustomGradeWeightData),
        ("MinGameStageIndex", c_ubyte),
        ("MaxGameStageIndex", c_ubyte),
        ("DefaultWeightIndex", c_ubyte),
    ]

    FItemCustomPartTypeData._fields_ = [
        ("bEnabled", c_bool, 1),
        ("WeightedParts", TArray_FItemPartGradeWeightData),
    ]

    FTargetedPlayerState._fields_ = [
        ("Enemy", POINTER(AWillowMind)),
        ("Player", POINTER(AActor)),
        ("InitialThreat", c_float),
        ("StoppedTargetingPlayerTime", c_float),
        ("bIsPlayerPet", c_bool, 1),
    ]

    FCoordinatedVectorParameter._fields_ = [
        ("ParamName", FName),
        ("ParamValueOverTime", FInterpCurveVector),
    ]

    FCoordinatedScalarParameter._fields_ = [
        ("ParamName", FName),
        ("ParamValueOverTime", FInterpCurveFloat),
        ("BoundsScale", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bConvertAxisToWorldSpace", c_bool, 1),
    ]

    FCoordinatedParticleSystemDefinition._fields_ = [
        ("ParticleSystem", POINTER(UParticleSystem)),
        ("LocationOffset", FVector),
        ("RotationOffset", FRotator),
        ("TriggerTime", c_float),
        ("ParticleScale", c_float),
        ("Parameters", TArray_FCoordinatedScalarParameter),
        ("VectorParameters", TArray_FCoordinatedVectorParameter),
        ("ScaleByObjectSize", c_ubyte),
    ]

    FCoordinatedAudioDefinition._fields_ = [
        ("TriggerEvent", POINTER(UAkEvent)),
        ("TriggerTime", c_float),
        ("RTPC", POINTER(UAkRtpc)),
        ("RTPCOverTime", FInterpCurveFloat),
    ]

    FCreditsLine._fields_ = [
        ("LineType", POINTER(UCreditsLineDefinition)),
        ("Text", FString),
    ]

    FCreditsTextureInfo._fields_ = [("TexturePath", FString)]

    FCurrencyPresentation._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("WidgetFrame", FString),
        ("WidgetClip", POINTER(USwfMovie)),
    ]

    FSkillTreeTierStateData._fields_ = [
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("PointsSpentInTier", c_int),
        ("bIsUnlocked", c_bool, 1),
    ]

    FSkillTreeBranchStateData._fields_ = [
        ("BranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("PointsSpentInBranch", c_int),
        ("MaxPointsForBranch", c_int),
        ("bIsUnlocked", c_bool, 1),
    ]

    FTaggedMarketplaceContent._fields_ = [
        ("Tag", FString),
        ("OfferId", c_int),
        ("OfferIdText", FString),
        ("OfferName", FString),
        ("SellText", FString),
        ("ContentCategory", c_int),
        ("PackageId", c_int),
        ("ContentId", c_int),
        ("bShowInStore", c_bool, 1),
    ]

    FSourceObjectData._fields_ = [
        ("UniqueId", c_int),
        ("SourceObject", POINTER(UObject)),
        ("SourceLocation", FVector),
        ("InstigatedByController", POINTER(AController)),
        ("DamageContext", FScriptInterface),
        ("StartDamageTime", c_float),
        ("TimeElapsedSinceLastDamage", c_float),
        ("ExplosionDef", POINTER(UExplosionDefinition)),
        ("ExplosionScaleIndex", c_int),
        ("InitialDamageRadius", c_float),
        ("Damage", c_float),
        ("bFullDamage", c_bool, 1),
        ("Momentum", c_float),
        ("DamageSource", POINTER(UClass)),
        ("DamageTypeDef", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
        ("bCanDamageFriendlies", c_bool, 1),
        ("DamageCauser", FScriptInterface),
        ("bSkipTraceTest", c_bool, 1),
        ("HitObject", POINTER(UObject)),
        ("BarrelSourceTime", c_float),
        ("PlantSourceTime", c_float),
    ]

    FDamageOnlyOnceData._fields_ = [("UniqueId", c_int), ("HurtActor", POINTER(AActor))]

    FDamageTypeSelectorData._fields_ = [
        ("AssociatedDamageTypeName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]

    FDefinitionIconDatum._fields_ = [
        ("DefColor", FColor),
        ("DefIcon", POINTER(UTexture2D)),
        ("DefClass", POINTER(UClass)),
    ]

    FDamageLocationData._fields_ = [("Time", c_float), ("Location", FVector)]

    FRagdollDeathImpulseStruct._fields_ = [
        ("Impulse", FVector),
        ("Offset", FVector),
        ("BoneName", FName),
        ("VelocityRatherThanForce", c_bool, 1),
        ("TransformImpulseByVelocityDirection", c_bool, 1),
    ]

    FStaggerStateData._fields_ = [
        ("bIsStaggered", c_bool, 1),
        ("bIsUnstaggering", c_bool, 1),
        ("bForced", c_bool, 1),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StaggerStartTime", c_float),
        ("StaggerEndTime", c_float),
        ("StaggerEndRagdollTime", c_float),
        ("StaggerRecoveryStartTime", c_float),
        ("NextUnstaggerCheckTime", c_float),
        ("PreviousOverridePhysicalMaterial", POINTER(UPhysicalMaterial)),
        ("PreviousCollisionChannel", c_ubyte),
        ("Unknown2", c_ubyte * 0x3),
        ("PreviousCollisionComponent", POINTER(UPrimitiveComponent)),
        ("StaggerInstigator", POINTER(APawn)),
        ("RestaggeredCount", c_int),
    ]

    FStaggeredRecoveryRotationData._fields_ = [
        ("BoneName", FName),
        ("BoneAxis", c_ubyte),
    ]

    FTurretEffect._fields_ = [
        ("EffectStartTag", FName),
        ("EffectEndTag", FName),
        ("EffectTemplate", POINTER(UParticleSystem)),
        ("EffectSocket", FName),
        ("EffectRef", POINTER(UParticleSystemComponent)),
        ("EffectAudioStartAkEvent", POINTER(UAkEvent)),
        ("EffectAudioStopAkEvent", POINTER(UAkEvent)),
        ("bShutOffOnDeath", c_bool, 1),
    ]

    FTurretDamageEffectData._fields_ = [
        ("DamageThreshold", c_float),
        ("DamageStartTagName", FName),
        ("DamageEndTagName", FName),
        ("EffectActive", c_bool, 1),
    ]

    FDeveloperData._fields_ = [
        ("Gamertag", FString),
        ("UniqueId", FString),
        ("Platform", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("UnlocksGamerpics", TArray_unsigned_char),
        ("bEligibleForGearboxCustomizations", c_bool, 1),
    ]

    FPerkData._fields_ = [
        ("ButtonChain", TArray_FName),
        ("Command", FString),
        ("bMustBeDeveloper", c_bool, 1),
    ]

    FDlcLevelTravelPair._fields_ = [
        ("NonDlcStationDef", POINTER(ULevelTravelStationDefinition)),
        ("DlcStationDef", POINTER(ULevelTravelStationDefinition)),
    ]

    FDrunkenWaveFormData._fields_ = [
        ("WaveFreq", FVector2D),
        ("WaveAmp", FVector2D),
        ("WavePhase", FVector2D),
    ]

    FConditionalParticleEffectData._fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("ParticleEffect", POINTER(UParticleSystem)),
    ]

    FConditionalExplosionData._fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("Explosion", POINTER(UExplosionDefinition)),
    ]

    FExplosionScaleData._fields_ = [
        ("ExplosionPSTemplate", POINTER(UParticleSystem)),
        ("MinRadius", c_int),
        ("MaxRadius", c_int),
        ("MinParticleScale", c_float),
        ("MaxParticleScale", c_float),
        ("ExplosionAkEvent", POINTER(UAkEvent)),
        ("CameraAnim", POINTER(UCameraAnim)),
        ("MinCameraEffectDistance", c_float),
        ("MaxCameraEffectDistance", c_float),
        ("FFWaveform", POINTER(UForceFeedbackWaveform)),
        ("ImpactEffect", POINTER(UWillowExplosionImpactDefinition)),
        ("bDamageOverPeriodOfTime", c_bool, 1),
        ("MaxDamageDuration", c_float),
        ("DamageInterval", c_float),
        ("bDamageEachTargetOnlyOnce", c_bool, 1),
        ("bExpandRadiusOverTime", c_bool, 1),
    ]

    FRecentExplosion._fields_ = [
        ("ExplosionInstigatorName", FName),
        ("ExplosionLocation", FVector),
        ("ExpirationTime", c_float),
    ]

    FLootAttachmentData._fields_ = [
        ("ItemPool", POINTER(UItemPoolDefinition)),
        ("PoolProbability", FAttributeInitializationData),
        ("AttachmentPointName", FName),
    ]

    FLootConfigurationData._fields_ = [
        ("ConfigurationName", FName),
        ("LootGameStageVarianceFormula", POINTER(UAttributeInitializationDefinition)),
        ("Weight", FAttributeInitializationData),
        ("ItemAttachments", TArray_FLootAttachmentData),
    ]

    FInteractiveObjectReplicatedStateData._fields_ = [
        ("ReplicatedBehaviorConsumerState", FReplicatedBehaviorConsumerState),
        ("ReplicatedInstanceDataState", FReplicatedInstanceDataState),
    ]

    FInteractiveObjectGradeModifierData._fields_ = [
        ("CustomInteractiveObject", POINTER(UInteractiveObjectDefinition)),
        ("DisplayName", FString),
        ("ExpLevel", FAttributeInitializationData),
        ("IncludedCustomLootLists", TArray_UInteractiveObjectLootListDefinitionPtr),
        ("CustomLoot", TArray_FLootConfigurationData),
    ]

    FInteractiveObjectGameStageGradeWeightData._fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FInteractiveObjectGradeModifierData),
    ]

    FBulletImpactEventData._fields_ = [
        ("DamageSurfaceType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bDisableRegularBulletDamage", c_bool, 1),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FBulletEventResponse._fields_ = [
        ("SplitNum", c_int),
        ("SplitAngle", c_float),
        ("SplitAngleOffset", c_float),
        ("SplitDistance", c_float),
        ("SplitFire", POINTER(UFiringModeDefinition)),
        ("NewSpeed", c_float),
        ("bDetonate", c_bool, 1),
        ("bRespawnTracer", c_bool, 1),
        ("bUpdateBeamSourceLocation", c_bool, 1),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FBulletTimerEvent._fields_ = [("Time", c_float), ("Response", FBulletEventResponse)]

    FWaveMotionData._fields_ = [
        ("bUseCustomWaveMotion", c_bool, 1),
        ("WaveFreq", FVector),
        ("WaveAmp", FVector),
        ("WavePhase", FVector),
    ]

    FFiringPatternLine._fields_ = [
        ("StartPoint", FRotator),
        ("EndPoint", FRotator),
        ("bUseStartPointOnly", c_bool, 1),
        ("CustomWaveMotion", FWaveMotionData),
    ]

    FActiveAreaWaypointData._fields_ = [
        ("WaypointLocation", FVector),
        ("WaypointRadius", c_int),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
    ]

    FActiveWaypointData._fields_ = [
        ("WaypointLocation", FVector),
        ("WaypointActor", POINTER(AActor)),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
        ("bCanTransition", c_bool, 1),
    ]

    FColiseumStat._fields_ = [
        ("StatType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StatValue", c_int),
    ]

    FColiseumPlayerInfo._fields_ = [
        ("WPC", POINTER(AWillowPlayerController)),
        ("Stats", TArray_FColiseumStat),
    ]

    FAreaWaypointData._fields_ = [
        ("WaypointActor", POINTER(AActor)),
        ("WaypointRadius", c_int),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
    ]

    FWaypointActorData._fields_ = [
        ("WaypointActor", POINTER(AActor)),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
        ("Waypoints", TArray_UWaypointComponentPtr),
    ]

    FMessageOfTheDay._fields_ = [
        ("Header", FString),
        ("Body", FString),
        ("DisplayTime", c_int),
    ]

    FDataProviderInfo._fields_ = [
        ("DataProvider", FScriptInterface),
        ("SelectedIndex", c_int),
    ]

    FDialogBoxButton._fields_ = [
        ("Caption", FString),
        ("TipText", FString),
        ("Tag", FName),
        ("Keys", TArray_FName),
        ("OnButtonClicked", FScriptDelegate),
    ]

    FPauseTimerData._fields_ = [
        ("FuncName", FName),
        ("bLoop", c_bool, 1),
        ("Rate", c_float),
        ("Count", c_float),
        ("TimerObj", POINTER(UObject)),
    ]

    FMissionStateBalanceAdjustment._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("MinGameStage", FAttributeInitializationData),
        ("MaxGameStage", FAttributeInitializationData),
        ("AwesomeLevel", FAttributeInitializationData),
    ]

    FRegionBalanceData._fields_ = [
        ("Region", POINTER(URegionDefinition)),
        ("MinDefaultGameStage", FAttributeInitializationData),
        ("MaxDefaultGameStage", FAttributeInitializationData),
        ("DefaultAwesomeLevel", FAttributeInitializationData),
        ("bSpecifyBoostAbovePlayer", c_bool, 1),
        ("GameStageIncreaseAbovePlayer", FAttributeInitializationData),
        ("MissionOverrides", TArray_FMissionStateBalanceAdjustment),
    ]

    FFlashTextEntry._fields_ = [
        ("TextEntry", FString),
        ("IconFrameLabel", FString),
        ("ArrayType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Obj", POINTER(UObject)),
    ]

    FGrenadeModBehaviorSequenceStateData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    FGrenadeModPartBehaviorSequenceStateData._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    FHitRegionDamage._fields_ = [
        ("BodyHitRegion", POINTER(UBodyHitRegionDefinition)),
        ("Damage", c_float),
        ("RecentDamage", c_float),
        ("bHasGored", c_bool, 1),
        ("LastPctHealthForRunDamageTriggeredBehaviors", TArray_float),
        ("LastPctHealthForRunHealingTriggeredBehaviors", TArray_float),
    ]

    FMinimapIconClip._fields_ = [
        ("Object", POINTER(UGFxObject)),
        ("bVisible", c_bool, 1),
        ("MapPos", FVector2D),
    ]

    FMinimapObjectiveIconClip._fields_ = [
        ("Object", POINTER(UGFxObject)),
        ("bVisible", c_bool, 1),
        ("MapPos", FVector2D),
        ("OptionalClip", POINTER(UGFxObject)),
        ("AboveClip", POINTER(UGFxObject)),
        ("BelowClip", POINTER(UGFxObject)),
    ]

    FUnloadableDlcEchoCallData._fields_ = [
        ("CallDefName", FString),
        ("DlcPackageId", c_int),
    ]

    FMissionWidgetMessage._fields_ = [
        ("Type", c_ubyte),
        ("Category", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("MissDef", POINTER(UMissionDefinition)),
        ("ObjDef", POINTER(UMissionObjectiveDefinition)),
        ("bBranch", c_bool, 1),
        ("Slot", c_int),
        ("SwapFromSlot", c_int),
        ("bSkipAnim", c_bool, 1),
        ("ModuleNum", c_int),
        ("EventTime", c_float),
    ]

    FWorldSpaceIcon._fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
    ]

    FObjectiveIcon._fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
        ("bInWorldSpace", c_bool, 1),
        ("TransitionStartTime", c_float),
        ("LastLocation", FVector),
        ("FadeAlpha", c_float),
        ("FadeScale", c_float),
        ("ObjectiveClip", POINTER(UGFxObject)),
        ("AboveClip", POINTER(UGFxObject)),
        ("BelowClip", POINTER(UGFxObject)),
        ("OptionalClip", POINTER(UGFxObject)),
    ]

    FPlayerIcon._fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
        ("TextClip", POINTER(UGFxObject)),
        ("StateClip", POINTER(UGFxObject)),
    ]

    FWorldSpacePlayerInfo._fields_ = [
        ("WPRI", POINTER(AWillowPlayerReplicationInfo)),
        ("WPP", POINTER(AWillowPlayerPawn)),
    ]

    FDesignerAttributeDefaultValueData._fields_ = [
        ("DesignerAttribute", POINTER(UDesignerAttributeDefinition)),
        ("BaseValue", FAttributeInitializationData),
    ]

    FTopStatData._fields_ = [
        ("LabelText", FString),
        ("ValueText", FString),
        ("AuxText", FString),
        ("Arrow", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("IconName", FString),
    ]

    FInputDeviceAxisData._fields_ = [
        ("AxisName", FName),
        ("AxisParameter", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("DeadZone", c_float),
        ("Speed", c_float),
        ("AbsoluteAxis", c_float),
        ("InvertMultiplier", c_int),
        ("ActionName", FName),
        ("Caption", FString),
        ("KeyBindGroup", FName),
    ]

    FInputDeviceButtonData._fields_ = [
        ("KeyName", FName),
        ("PressActions", TArray_UInputActionDefinitionPtr),
        ("TapActions", TArray_UInputActionDefinitionPtr),
        ("HoldActions", TArray_UInputActionDefinitionPtr),
        ("Caption", FString),
        ("KeyBindGroup", FName),
        ("RemapToDefaultLayoutInputAction", POINTER(UInputActionDefinition)),
    ]

    FLookAxisDefinitionData._fields_ = [
        ("Horizontal", POINTER(ULookAxisDefinition)),
        ("Vertical", POINTER(ULookAxisDefinition)),
    ]

    FInputRemappingAxisData._fields_ = [
        ("DefaultAxisName", FName),
        ("RemappedAxisName", FName),
        ("RemappedAxisParameter", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bInvertInput", c_bool, 1),
        ("Caption", FString),
    ]

    FInputRemappingButtonData._fields_ = [
        ("DefaultKeyName", FName),
        ("RemappedKeyName", FName),
        ("RemappedPressActions", TArray_UInputActionDefinitionPtr),
        ("RemappedTapActions", TArray_UInputActionDefinitionPtr),
        ("RemappedHoldActions", TArray_UInputActionDefinitionPtr),
        ("Caption", FString),
    ]

    FBehaviorKeyFrameEventData._fields_ = [("EventName", FName), ("KeyTime", c_float)]

    FSimpleAnimStateData._fields_ = [("AnimState", c_int)]

    FResultEntry._fields_ = [
        ("Game", FOnlineGameSearchResult),
        ("Name", FString),
        ("ExpLevel", c_int),
        ("Mission", c_int),
        ("PlayThrough", c_int),
        ("NumPlayers", c_int),
        ("MaxPlayers", c_int),
        ("Ping", c_int),
    ]

    FPersistentMapDependencies._fields_ = [
        ("PersistentMap", FName),
        ("SecondaryMaps", TArray_FName),
        ("ConnectedPersistents", TArray_FName),
        ("LevelName", FString),
        ("GameReleaseDef", POINTER(UGameReleaseDefinition)),
        ("DiscoveryAchievements", TArray_unsigned_char),
    ]

    FLiftBodyPair._fields_ = [
        ("BodyTag", POINTER(UPopulationBodyTag)),
        ("PhaseLockDef", POINTER(UPhaseLockDefinition)),
    ]

    FLootData._fields_ = [
        ("Weight", FAttributeInitializationData),
        ("ItemPools", TArray_UItemPoolDefinitionPtr),
    ]

    FManufacturerSelectorData._fields_ = [
        ("AssociatedManufacturerName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]

    FUnlockItemData._fields_ = [
        ("GameStage", c_int),
        ("UnlockItems", TArray_UInventoryBalanceDefinitionPtr),
        ("UnlockItemPools", TArray_UItemPoolDefinitionPtr),
    ]

    FMarketPlaceFilter._fields_ = [
        ("Tag", FString),
        ("Caption", FString),
        ("Filter", FString),
    ]

    FMatchmakingResultEntry._fields_ = [
        ("MatchTypeIconFrameName", FString),
        ("StatusIconFrameName", FString),
        ("Message", FString),
    ]

    FRewardData._fields_ = [
        ("ExperienceRewardPercentage", FAttributeInitializationData),
        ("CurrencyRewardType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CreditRewardMultiplier", FAttributeInitializationData),
        ("OtherCurrencyReward", FAttributeInitializationData),
        ("RewardItems", TArray_UInventoryBalanceDefinitionPtr),
        ("RewardItemPools", TArray_UItemPoolDefinitionPtr),
    ]

    FObjectiveDependencyData._fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("Status", c_ubyte),
    ]

    FMissionObjectiveWaypointData._fields_ = [
        ("LinkedObjective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveSetRestrictions", TArray_UMissionObjectiveSetDefinitionPtr),
    ]

    FMissionItemPoolData._fields_ = [
        ("bItemAlwaysGranted", c_bool, 1),
        ("ItemObjective", POINTER(UMissionObjectiveDefinition)),
        ("DirectiveDefinition", POINTER(UMissionDefinition)),
        ("ItemPool", POINTER(UItemPoolDefinition)),
    ]

    FMissionKickoffData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("PlayerThatAcceptedMission", POINTER(AWillowPlayerController)),
        ("bFromActivation", c_bool, 1),
    ]

    FMinimapIconHelper_Director._fields_ = [
        ("Director", FScriptInterface),
        ("Location", FVector),
        ("ActionableMissionDefinition", POINTER(UMissionDefinition)),
        ("bHasMoreActionableMissions", c_bool, 1),
        ("bBegins", c_bool, 1),
        ("bEnds", c_bool, 1),
    ]

    FObjectiveUpdateData._fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveBit", c_int),
    ]

    FBlockedMissionData._fields_ = [
        ("BlockedMission", POINTER(UMissionDefinition)),
        ("MissionBlockers", TArray_UMissionDefinitionPtr),
    ]

    FDefendTargetData._fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("PercentHealth", c_int),
    ]

    FDefendMissionData._fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("Target", FScriptInterface),
    ]

    FTimedMissionData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("SecondsLeft", c_float),
        ("bTimerRunning", c_bool, 1),
    ]

    FLevelTransitionData._fields_ = [
        ("TargetLevel", FName),
        ("LevelTransition", POINTER(ALevelTravelStation)),
    ]

    FMissionWaypointsData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Waypoints", TArray_UWaypointComponentPtr),
    ]

    FMissionObserversData._fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Observers", TArray_FScriptInterface),
    ]

    FMissionSetData._fields_ = [
        ("PackageName", FName),
        ("Missions", TArray_UMissionDefinitionPtr),
    ]

    FPartGradeWeightData._fields_ = [
        ("Part", POINTER(UWeaponPartDefinition)),
        ("Manufacturers", TArray_FManufacturerCustomGradeWeightData),
        ("MinGameStageIndex", c_ubyte),
        ("MaxGameStageIndex", c_ubyte),
        ("DefaultWeightIndex", c_ubyte),
    ]

    FWeaponCustomPartTypeData._fields_ = [
        ("bEnabled", c_bool, 1),
        ("WeightedParts", TArray_FPartGradeWeightData),
    ]

    FNPCList._fields_ = [
        ("Mind", POINTER(AWillowMind)),
        ("LastPathTime", c_float),
        ("PathRequestTime", c_float),
        ("bWantsToPath", c_bool, 1),
        ("bOnPerch", c_bool, 1),
        ("bForceStopped", c_bool, 1),
        ("bIsPathing", c_bool, 1),
        ("bCanPath", c_bool, 1),
        ("Score", c_float),
    ]

    FSystemOption._fields_ = [
        ("Name", FName),
        ("ValueCount", c_int),
        ("CurrValue", c_int),
        ("ValueStrings", TArray_FString),
    ]

    FCameraLerpKeyFrame._fields_ = [
        ("Alpha", c_float),
        ("CameraTargetThisKeyFrame", c_ubyte),
        ("CameraRotationBehavior", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("BaseCameraPosition", FVector),
        ("CameraOffset", c_float),
        ("ForcedCameraRotation", FRotator),
    ]

    FRelevanceCacheStruct._fields_ = [
        ("RealViewerName", FName),
        ("ToPawnName", FName),
        ("TimeCached", c_float),
        ("NextUpdateTime", c_float),
        ("bIsRelevant", c_bool, 1),
        ("FromLoc", FVector),
        ("ToLoc", FVector),
        ("RotatingIndex", c_int),
    ]

    FRelevanceUpdateStruct._fields_ = [
        ("FromRealViewer", POINTER(APlayerController)),
        ("SrcLocation", FVector),
        ("ToPawn", POINTER(AWillowPawn)),
        ("TimeRequested", c_float),
        ("bRelevant", c_bool, 1),
        ("ShouldRemove", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsForcedValue", c_bool, 1),
        ("bForceNextCheckTrue", c_bool, 1),
        ("NextUpdateTime", c_float),
    ]

    FRelevanceBucketStruct._fields_ = [
        ("NdxToStartCheckFrom", c_int),
        ("DistanceSquared", c_float),
        ("MinLineChecksPerFrame", c_int),
        ("MaxLineChecksPerFrame", c_int),
        ("MaxIterationsPerFrame", c_int),
        ("Relevance", TArray_FRelevanceUpdateStruct),
    ]

    FPCContextMenuItem._fields_ = [("Caption", FString), ("Action", FString)]

    FEvalActionData._fields_ = [("bIsActive", c_bool, 1), ("Action", c_ubyte)]

    FPlayerClassCountOverride._fields_ = [
        ("Override", c_int),
        ("PlayerClassIdDef", POINTER(UPlayerClassIdentifierDefinition)),
    ]

    FActiveInteraction._fields_ = [
        ("TimeLength", c_float),
        ("TimeRemaining", c_float),
        ("InteractionServer", POINTER(UPlayerInteractionServer)),
        ("Players", TArray_AWillowPlayerControllerPtr),
        ("Instigator", POINTER(AWillowPlayerController)),
        ("IsValid", c_bool, 1),
    ]

    FSkillTreeTierLayoutData._fields_ = [
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("DependencyBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("DependencyTierNumber", c_int),
        ("Skills", TArray_USkillDefinitionPtr),
    ]

    FItemMemento._fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("bEquipped", c_bool, 1),
        ("bDropOnDeath", c_bool, 1),
        ("bShopsHaveInfiniteQuantity", c_bool, 1),
        ("bGrenadeStored", c_bool, 1),
    ]

    FPopulatedAIPawnMemento._fields_ = [
        ("PawnWeapons", TArray_FWeaponMemento),
        ("PawnItems", TArray_FItemMemento),
    ]

    FPopulatedInteractiveObjectMemento._fields_ = [
        ("BehaviorSequenceState", c_int),
        ("bCanBeUsed", c_ubyte * 2),
    ]

    FFeaturedItemData._fields_ = [
        ("CommerceMarkup", FAttributeInitializationData),
        ("LootConfiguration", FName),
        ("GameStageValue", FAttributeInitializationData),
        ("AwesomeLevelValue", FAttributeInitializationData),
    ]

    FPickupMemento._fields_ = [
        ("Rotation", FRotator),
        ("bIsAttachedToSomething", c_bool, 1),
    ]

    FPopulatedPickupMemento._fields_ = [
        ("SavedInventoryClass", POINTER(UClass)),
        ("PickupMemento", FPickupMemento),
        ("WeaponMemento", FWeaponMemento),
        ("ItemMemento", FItemMemento),
    ]

    FVehicleDefaultCrewStruct._fields_ = [
        ("PopulationDefForRole", POINTER(UPopulationDefinition)),
        ("Role", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ProbabilityOfSpawn", FAttributeInitializationData),
        ("OverrideDefaultSeat", c_bool, 1),
        ("PreferredSeat", c_int),
    ]

    FVehicleGradeModifierData._fields_ = [
        ("CustomVehicle", POINTER(AWillowVehicle)),
        ("DisplayName", FString),
        ("ExpLevel", c_int),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
    ]

    FVehicleGameStageGradeWeightData._fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FVehicleGradeModifierData),
    ]

    FPopulationOptionDenSpawnData._fields_ = [
        ("PopulationDefName", FString),
        ("MaxActiveActors", c_int),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
        ("NextSpawnTime", c_float),
        ("NumTotalExternalActors", c_int),
        ("NumActiveExternalActors", c_int),
    ]

    FHomingRadiusThreshold._fields_ = [
        ("Radius", c_float),
        ("MaxAngleCos", c_float),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FObjectReference._fields_ = [("Obj", POINTER(UObject))]

    FDeferredSkillActivationData._fields_ = [
        ("SkillInstigator", POINTER(AController)),
        ("Definition", POINTER(USkillDefinition)),
        ("AdditionalSkillTarget", POINTER(UObject)),
        ("SkillGrade", c_int),
        ("StateChangeDelegate", FScriptDelegate),
    ]

    FTier._fields_ = [
        ("Skills", TArray_USkillDefinitionPtr),
        ("PointsToUnlockNextTier", c_int),
    ]

    FTierLayout._fields_ = [("bCellIsOccupied", TArray_BOOL)]

    FSkillTreeUICell._fields_ = [
        ("BranchNum", c_int),
        ("TierNum", c_int),
        ("CellNum", c_int),
        ("Clip_Cell", POINTER(UGFxObject)),
        ("Clip_Highlight", POINTER(UGFxObject)),
        ("Clip_Outline", POINTER(UGFxObject)),
        ("Clip_Overclocked", POINTER(UGFxObject)),
    ]

    Fartifact_datum._fields_ = [
        ("SkillIndex", c_int),
        ("Grade", c_int),
        ("Name", FString),
    ]

    FSMPerchRandomPair._fields_ = [
        ("Weight", c_float),
        ("SMD", POINTER(USpecialMove_Perch)),
    ]

    FCachedInvData._fields_ = [
        ("Inv", POINTER(AWillowInventory)),
        ("bReadied", c_bool, 1),
        ("TrashOrFavorite", c_ubyte),
    ]

    FDirectionData._fields_ = [
        ("This", FName),
        ("Left", FName),
        ("Right", FName),
        ("Up", FName),
        ("Down", FName),
    ]

    FClipRect._fields_ = [
        ("Top", c_float),
        ("Right", c_float),
        ("Bottom", c_float),
        ("Left", c_float),
    ]

    FMapObjectData._fields_ = [
        ("Player", POINTER(AWillowPlayerController)),
        ("Vehicle", POINTER(AWillowVehicle)),
        ("Landmark", POINTER(ALevelLandmark)),
        ("ClientInteractiveObject", POINTER(AWillowInteractiveObject)),
        ("WPRI", POINTER(AWillowPlayerReplicationInfo)),
        ("bWaypoint", c_bool, 1),
        ("bAreaWaypoint", c_bool, 1),
        ("bOptional", c_bool, 1),
        ("WaypointIndex", c_int),
        ("CustomObjectLoc", FVector),
        ("bIsDirty", c_bool, 1),
        ("TransformedLocation", FVector2D),
        ("Angle", c_float),
        ("Scale", c_float),
        ("AS_IconClipPath", FString),
        ("AS_IconClipFrame", FString),
        ("AS_IconClipInnerFrame", FString),
        ("AS_IconPath", FString),
        ("bShowInfoBox", c_bool, 1),
        ("InfoBoxTitle", FString),
        ("InfoBoxDesc", FString),
    ]

    FTestMapsListDatum._fields_ = [
        ("bUseLoader", c_bool, 1),
        ("MapDisplayName", FString),
        ("MapName", FName),
    ]

    FTextMarkupEntry._fields_ = [
        ("MarkupTag", FString),
        ("HTMLMarkupBeginText", FString),
        ("HTMLMarkupEndText", FString),
        ("MarkupBeginTag", FString),
        ("MarkupEndTag", FString),
    ]

    FConditionalAnimationData._fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("AnimationName", FName),
        ("CameraAnim", POINTER(UCameraAnim)),
        ("AnimSet", POINTER(UAnimSet)),
    ]

    FNameExpressionData._fields_ = [
        ("Expressions", TArray_FAttributeExpressionData),
        ("PreModifier", FString),
        ("PostModifier", FString),
    ]

    FDamageTypeBySpeedStruct._fields_ = [
        ("Speed", c_float),
        ("DamageType", POINTER(UDamageTypeDefinition)),
    ]

    FCollisionDamageCalculation._fields_ = [
        ("DamageType", POINTER(UDamageTypeDefinition)),
        ("DamageTypes", TArray_FDamageTypeBySpeedStruct),
        ("Formula", FAttributeInitializationData),
        ("MomentumFactor", c_float),
        ("AddZMomentum", c_float),
        ("bApplyReverseMomentum", c_bool, 1),
        ("bPercentOfTargetHealth", c_bool, 1),
        ("bApplySpeedDamage", c_bool, 1),
        ("bApplySpeedMomentum", c_bool, 1),
    ]

    FVStatusEffectResistance._fields_ = [
        ("ChanceResistance", FAttributeInitializationData),
        ("DurationResistance", FAttributeInitializationData),
    ]

    FVehicleCrewAnimSetMapping._fields_ = [
        ("CharacterName", FName),
        ("TheAnimSet", POINTER(UAnimSet)),
    ]

    FVSSUsageTracking._fields_ = [
        ("TheTerminal", POINTER(AVehicleSpawnStationTerminal)),
        ("ThePlayerName", FName),
    ]

    FWeaponAmmoResourceSelectorData._fields_ = [
        ("AssociatedResourceName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]

    FLabelToLinkageMapping._fields_ = [("LabelName", FString), ("LinkageName", FString)]

    FAttributePresentationDamageTypeMapping._fields_ = [
        ("Presentation", POINTER(UAttributePresentationDefinition)),
        ("DamageType", POINTER(UDamageTypeDefinition)),
    ]

    FWeaponTypeSelectorData._fields_ = [
        ("WeaponType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ValueIfMatched", FAttributeInitializationData),
    ]

    FAimAnimTransitionData._fields_ = [
        ("FromState", c_ubyte),
        ("ToState", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("AnimName", FName),
        ("BlendInTime", c_float),
        ("BlendOutTime", c_float),
        ("bPlayInReverse", c_bool, 1),
    ]

    FBoneRotateData._fields_ = [("Index", c_int), ("Rotation", FRotator)]

    FAnimDeltaDataList._fields_ = [("IndexList", TArray_int)]

    FAnimSwapData._fields_ = [("Index1", c_int), ("Index2", c_int)]

    FPrismDataContainer._fields_ = [
        ("RotateBoneTranslation", TArray_FBoneRotateData),
        ("RotateBone", TArray_FBoneRotateData),
        ("RotateRefBone", TArray_FBoneRotateData),
        ("AnimDeltaList", TArray_FAnimDeltaDataList),
        ("AnimDeltaRefList", TArray_FAnimDeltaDataList),
        ("SwapList", TArray_FAnimSwapData),
        ("RotateRootMotion", FRotator),
    ]

    FFeatherBoneBlendTarget._fields_ = [
        ("StartBoneName", FName),
        ("BlendWeight", c_float),
    ]

    FReplicatedInventoryCardData._fields_ = [
        ("ModifierValue", c_float),
        ("ModifierStatIndex", c_int),
    ]

    FUIStatModifierData._fields_ = [
        ("AttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("ConstraintAttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("AttributeStyle", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ModifierTotal", c_float),
        ("CompareModifierTotal", c_float),
        ("DefinitionIndex", c_int),
        (
            "SupplementalAttributePresentation",
            POINTER(UAttributePresentationDefinition),
        ),
        ("SupplementalAttributeStyle", c_ubyte),
        ("Unknown2", c_ubyte * 0x3),
        ("SupplementalModifierTotal", c_float),
        ("bUseSupplementalModifier", c_bool, 1),
        ("StatCombinationMethod", c_ubyte),
    ]

    FProfileDefinition._fields_ = [
        ("Profile", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Definition", POINTER(UWillowAutoAimProfileDefinition)),
    ]

    FLockOnProfile._fields_ = [
        ("Target", FScriptInterface),
        ("Intersection", FVector),
        ("MagneticCenterToIntersect", FVector),
        ("bWithinWorldSpaceRadius", c_bool, 1),
    ]

    FViewProfile._fields_ = [
        ("InPlayer", POINTER(AWillowPlayerController)),
        ("ViewNormal", FVector),
        ("ViewLocation", FVector),
        ("ViewRotation", FRotator),
        ("ViewNormalDotViewNormal", c_float),
        ("Unknown1", c_ubyte * 0x4),
        ("ViewMatrix", FMatrix),
    ]

    FBalanceMeResourceUpgradePath._fields_ = [
        ("ResourceName", FString),
        ("PlayerLevelForEachUpgrade", TArray_int),
    ]

    FStatusEffectNameMapping._fields_ = [
        ("StatusEffectName", FString),
        ("StatusEffectDefinitionName", FString),
    ]

    FClanMaterialData._fields_ = [
        ("SourceMaterial", POINTER(UMaterialInstance)),
        ("ReplacementMaterial", POINTER(UMaterialInstance)),
    ]

    FClanSwitchData._fields_ = [("SwitchName", FName), ("SwitchValue", c_int)]

    FPendingCustomization._fields_ = [
        ("Definition", POINTER(UCustomizationDefinition)),
        ("Targets", TArray_FScriptInterface),
    ]

    FProductCustomizationInfo._fields_ = [
        ("ProductID", c_int),
        ("NumUnlockableCustomizations", c_int),
        ("NumCustomizations", c_int),
    ]

    FCustomizationSizeMapping._fields_ = [
        ("ProductID", c_int),
        ("NumCustomizations", c_int),
    ]

    FQueuedPersonalEchoLog._fields_ = [
        ("Event", POINTER(UWillowDialogEventTag)),
        ("Group", POINTER(UGearboxDialogGroup)),
    ]

    FScaleformPortraitData._fields_ = [
        ("ScaleformName", FString),
        ("PortraitMovie", POINTER(USwfMovie)),
    ]

    FVideoPortraitData._fields_ = [("VideoMovie", POINTER(UTextureMovie))]

    FEchoPortraitInfo._fields_ = [
        ("PortraitType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ScaleformPortrait", FScaleformPortraitData),
        ("VideoPortrait", FVideoPortraitData),
    ]

    FEmotePortraitInfo._fields_ = [
        ("Emote", POINTER(UWillowDialogEmoteDefinition)),
        ("EmotePortrait", FEchoPortraitInfo),
    ]

    FEmoteStance._fields_ = [
        ("Emote", POINTER(UWillowDialogEmoteDefinition)),
        ("StanceSpecialMove", POINTER(USpecialMoveDefinition)),
    ]

    FDynamicNavMeshConnection._fields_ = [
        ("MaxConnectionDistance", c_float),
        ("ConnectedPoint", POINTER(AWillowDynamicNavMeshConnectionPoint)),
    ]

    FCoordinatedEffectIndices._fields_ = [
        ("StartingIndex", c_int),
        ("EndingIndex", c_int),
    ]

    FCoordinatedEffectThread._fields_ = [
        ("EffectDefinition", POINTER(UCoordinatedEffectDefinition)),
        ("IgnoreInstanceData", FName),
        ("LatentFloat", c_float),
        ("TargetFloat", c_float),
        ("ParticleSpeedMultiplier", c_float),
        ("CriticalParticleEffects", FCoordinatedEffectIndices),
        ("ParticleEffects", FCoordinatedEffectIndices),
        ("AudioEffects", FCoordinatedEffectIndices),
        ("HiddenParticles", FCoordinatedEffectIndices),
        ("EffectOwner", POINTER(AActor)),
        ("EffectID", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bHideInstanceDataParticles", c_bool, 1),
        ("bPendingDelete", c_bool, 1),
        ("EffectCompleteDelegate", FScriptDelegate),
    ]

    FCoordinatedEffectProcess._fields_ = [
        ("Target", POINTER(UObject)),
        ("Threads", TArray_FCoordinatedEffectThread),
        ("Player0MatIndex", c_ubyte),
        ("Player1MatIndex", c_ubyte),
    ]

    FFloatParameter._fields_ = [("Name", FName), ("Value", c_float)]

    FVectorParameter._fields_ = [("Name", FName), ("Value", FVector)]

    FColorParameter._fields_ = [("Name", FName), ("Value", FColor)]

    FEmitterTemplateOptions._fields_ = [
        ("DefaultTemplate", POINTER(UParticleSystem)),
        ("CensoredTemplateAlternative", POINTER(UParticleSystem)),
        ("bEffectEligibleForCensoring", c_bool, 1),
    ]

    FDecalData._fields_ = [
        ("Materials", TArray_UMaterialInterfacePtr),
        ("Width", c_float),
        ("Height", c_float),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("RandomRotation", c_bool, 1),
        ("CreateNewMaterialInstanceConstant", c_bool, 1),
    ]

    FGamepadState._fields_ = [("bConnected", c_bool, 1)]

    FSubtitleProfile._fields_ = [
        ("MinX", c_float),
        ("MaxX", c_float),
        ("MinY", c_float),
        ("MaxY", c_float),
    ]

    FtMenuTextPos._fields_ = [
        ("TextHAlign", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TextXPos", c_int),
        ("TextVAlign", c_ubyte),
        ("Unknown2", c_ubyte * 0x3),
        ("TextYPos", c_int),
    ]

    FColumnLayoutData._fields_ = [
        ("HeaderHAlign", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Header", FString),
        ("Width", c_float),
        ("DataHAlign", c_ubyte),
    ]

    FtMenuLayout._fields_ = [
        ("Background", POINTER(UTexture2D)),
        ("BackgroundXPos", c_int),
        ("BackgroundYPos", c_int),
        ("BackgroundXL", c_int),
        ("BackgroundYL", c_int),
        ("bDrawOutlineToShowInputFocus", c_bool, 1),
        ("ColumnDataYL", c_int),
        ("ItemDetailYL", c_int),
        ("DescriptionBoxHeader", FString),
        ("DescriptionBoxHeaderHAlign", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bUnderlineDescriptionBoxHeader", c_bool, 1),
        ("DescriptionBoxXPos", c_int),
        ("DescriptionBoxYPos", c_int),
        ("DescriptionBoxXL", c_int),
        ("TitlePos", FtMenuTextPos),
        ("bDrawHintSeparatorLine", c_bool, 1),
        ("HintPos", FtMenuTextPos),
        ("ColumnPadding", c_int),
        ("ColumnLayout", TArray_FColumnLayoutData),
        ("ColumnDataFont", POINTER(UFont)),
    ]

    FPlayerLineInfo._fields_ = [
        ("bUpdatedThisRound", c_bool, 1),
        ("Avatar", FString),
        ("PRI", POINTER(APlayerReplicationInfo)),
        ("PlayerID", c_int),
        ("RoundKills", c_int),
        ("TotalKills", c_int),
    ]

    FDialogBoxLayout._fields_ = [
        ("LayoutTag", FName),
        ("CancelTag", FName),
        ("Buttons", TArray_FDialogBoxButton),
    ]

    FMenuItemCallback._fields_ = [("Tag", FName), ("OnClicked", FScriptDelegate)]

    FLoadCharacterData._fields_ = [
        ("SaveDataId", c_int),
        ("CharLevel", c_int),
        ("CharName", FString),
        ("CharClass", FString),
        ("PlayThrough", FString),
        ("ActiveMission", FString),
        ("PlotMission", FString),
        ("CharSaveDate", FString),
        ("CharPlayedTime", FString),
        ("CharPlayedTimeInt", c_int),
        ("SaveGuid", FGuid),
        ("DlcCharDef", POINTER(UDownloadableCharacterDefinition)),
    ]

    FSaveResult._fields_ = [("charID", c_int), ("Data", FPlayerSaveData)]

    FLoadingMovieExceptionInfo._fields_ = [("PersistentMapName", FName), ("Tag", FName)]

    FAvailableTrackedSkill._fields_ = [
        ("SkillDef", POINTER(USkillDefinition)),
        ("RemappedSlot", c_int),
    ]

    FTrackedSkillIconState._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Icon", POINTER(USwfMovie)),
        ("PercentComplete", c_int),
        ("StackCount", c_int),
    ]

    FHUDInteractionIcon._fields_ = [("Icons", FInteractionIconWithOverrides * 2)]

    FCriticalTextMessage._fields_ = [
        ("Message", FString),
        ("Title", FString),
        ("DestroyTime", c_float),
        ("DrawColor", FColor),
    ]

    FCriticalTextMessageArray._fields_ = [("MessageArray", TArray_FCriticalTextMessage)]

    FInjuredStringReplacementSet._fields_ = [
        ("Skills", TArray_FName),
        ("NewPlayerInjuredString", FString),
        ("NewInjuredTooltipString1", FString),
        ("NewInjuredTooltipString2", FString),
    ]

    FTrackedSkillState._fields_ = [
        ("SkillDef", POINTER(USkillDefinition)),
        ("PackedStackCountAndPercentComplete", c_int),
    ]

    FReplicatedStandInGear._fields_ = [
        ("Weapon1Data", FWeaponDefinitionData),
        ("Weapon2Data", FWeaponDefinitionData),
        ("ShieldData", FItemDefinitionData),
        ("GrenadeModData", FItemDefinitionData),
        ("ClassModData", FItemDefinitionData),
    ]

    FScaledHUDElement._fields_ = [
        ("ElementName", FString),
        ("Anchor", POINTER(UHUDScalingAnchorDefinition)),
    ]

    FTouchingPawn._fields_ = [("Pawn", POINTER(APawn)), ("VolumesTouched", c_int)]

    FHitActorData._fields_ = [
        ("HitActor", POINTER(AActor)),
        ("HitInfo", FTraceHitInfo),
        ("HitLocation", FVector),
        ("HitLocationRelativeToHitActor", FVector),
        ("HitNormal", FVector),
    ]

    FHomingTargetedActorInfo._fields_ = [
        ("HomingActor", POINTER(AActor)),
        ("HomingActorCount", c_int),
    ]

    FObstaclePoint._fields_ = [("Value", c_float), ("Offset", FVector2D)]

    FObstacleSegment._fields_ = [
        ("P1", FVector2D),
        ("P2", FVector2D),
        ("Normal", FVector2D),
    ]

    FVelocityObstacle._fields_ = [("Segments", FObstacleSegment * 3)]

    FInputDeviceButtonAddress._fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("SourceIndex", c_int),
        ("RemappedButton", FPointer),
    ]

    FInputButtonData._fields_ = [
        ("InputDeviceHandlers", TArray_FInputDeviceButtonAddress),
        ("ButtonName", FName),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LastPressedTime", c_float),
    ]

    FDeviceLookAxisData._fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("LookXAxisName", FName),
        ("LookYAxisName", FName),
    ]

    FKeyRebindingData._fields_ = [("DefaultKeyName", FName), ("RemappedKeyName", FName)]

    FInputDeviceAxisAddress._fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("SourceIndex", c_int),
    ]

    FAccelStateData._fields_ = [
        ("bIsAccelerating", c_bool, 1),
        ("Warmup", c_float),
        ("CurrentSpeed", c_float),
        ("Direction", c_int),
    ]

    FInputAxisData._fields_ = [
        ("AxisName", FName),
        ("InputDeviceHandler", FInputDeviceAxisAddress),
        ("ParameterPtr", FPointer),
        ("AccelState", FAccelStateData),
        ("bIsLookAxis", c_bool, 1),
        ("bIsRemappedInverted", c_bool, 1),
    ]

    FSpeedTravelData._fields_ = [
        ("OriginLeaveTime", c_float),
        ("OriginRegion", c_ubyte),
    ]

    FWeatherSystemEffects._fields_ = [
        ("WeatherSystemTemplate", POINTER(UParticleSystem)),
        ("ScreenEffectsTemplate", POINTER(UParticleSystem)),
    ]

    FAttachmentData._fields_ = [
        ("AttachmentBase", POINTER(AActor)),
        ("AttachmentBaseBoneName", FName),
        ("AttachmentRelativeOffset", FVector),
        ("AttachmentRelativeRotation", FRotator),
        ("AttachmentPhysicsMode", c_ubyte),
    ]

    FAsyncDataRequest._fields_ = [
        ("RequestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ObjectPath", FString),
        ("Instigator", POINTER(UObject)),
        ("PlayerContext", POINTER(AWillowPlayerController)),
        ("Payload", POINTER(UObject)),
        ("CallbackEventName", FName),
        ("IntParam", c_int),
        ("FloatParam", c_float),
    ]

    FLightValues._fields_ = [
        ("StartTime", c_float),
        ("Radius", c_float),
        ("Brightness", c_float),
        ("LightColor", FColor),
    ]

    FVehicleSpawnStationPooledVehicle._fields_ = [
        ("SpawnedVehicle", POINTER(AWillowVehicle)),
        ("SpawnVehicleDef", POINTER(UVehicleSpawnStationVehicleDefinition)),
    ]

    FVehicleSpawnStationSlot._fields_ = [
        ("PooledVehicles", TArray_FVehicleSpawnStationPooledVehicle),
        ("PooledVehicleIndex", c_int),
    ]

    FPopOppSummary._fields_ = [("Summary", FString), ("Count", c_int)]

    FSpawnAnimPair._fields_ = [
        ("SpawnedAnim", POINTER(USpecialMove_Spawned)),
        ("PointAnim", POINTER(USpecialMove_PopulationPoint)),
    ]

    FSpawnAnimData._fields_ = [
        ("Key", POINTER(UPopulationBodyTag)),
        ("AnimPairs", TArray_FSpawnAnimPair),
        ("PreviewMeshOffset", FVector),
        ("PreviewMeshScale", c_float),
    ]

    FPursuitNode._fields_ = [
        ("RelativeLocation", FVector),
        ("RelativeDistance", c_float),
        ("EvasiveActionDistance", c_float),
        ("NodeType", FName),
        ("bNeverFallback", c_bool, 1),
        ("bMultipleReservations", c_bool, 1),
        ("bIsReserved", c_bool, 1),
        ("LastReservedTime", c_float),
        ("ReservedBy", POINTER(AActor)),
        ("AIAlertDistance", c_float),
        ("AIAlertFlagDef", POINTER(UFlagDefinition)),
    ]

    FPursuitNodeData._fields_ = [
        ("RelativeLocation", FVector),
        ("NodeType", FName),
        ("EvasiveActionDistance", c_float),
        ("AIAlertDistance", c_float),
        ("AIAlertFlagDef", POINTER(UFlagDefinition)),
        ("bNeverFallback", c_bool, 1),
        ("bMultipleReservations", c_bool, 1),
    ]

    FDescriptionEntry._fields_ = [("EventID", c_int), ("Description", FString)]

    FKeyBindInfo._fields_ = [
        ("Tag", FName),
        ("ActionName", FName),
        ("Caption", FString),
        ("CurrentKey", FName),
        ("Object", POINTER(UGFxObject)),
    ]

    FReferencePoint._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Name", FName),
    ]

    FReferencePointComparisonData._fields_ = [
        ("A", FReferencePoint),
        ("B", FReferencePoint),
    ]

    FResolution._fields_ = [("Width", c_int), ("Height", c_int)]

    FLockOnTargetStateStruct._fields_ = [
        ("CurrentTarget", POINTER(AActor)),
        ("StartTime", c_float),
        ("LockOnRequested", c_bool, 1),
        ("LockOnInProgress", c_bool, 1),
        ("CoolDownStartTime", c_float),
    ]

    FWeaponBoneControllerInstance._fields_ = [
        ("SourcePartType", c_ubyte),
        ("BoneControlType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("BoneController", FScriptInterface),
    ]

    FShellCasingImpact._fields_ = [("ImpactTime", c_float), ("ImpactLocation", FVector)]

    FColumnData._fields_ = [
        ("Text", FString),
        ("HAlign", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TextColor", FColor),
    ]

    FtMenuData._fields_ = [
        ("bIsSelectable", c_bool, 1),
        ("ColumnText", TArray_FColumnData),
        ("PrimaryActionCmd", FString),
        ("SecondaryActionCmd", FString),
        ("TertiaryActionCmd", FString),
        ("QuaternaryActionCmd", FString),
        ("QuinaryActionCmd", FString),
        ("OverCmd", FString),
        ("LeaveCmd", FString),
        ("Data", FString),
        ("HintFontSize", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Hint", FString),
        ("ItemDetail", FString),
        ("DescriptionBoxStr", FString),
    ]

    FMenuHeaderData._fields_ = [
        ("Header", FString),
        ("Width", c_float),
        ("InterfaceName", FString),
        ("FontSize", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TextColor", FColor),
        ("TextHighlightColor", FColor),
        ("IconColor", FColor),
        ("bDrawIcon", c_bool, 1),
        ("IconU", c_int),
        ("IconV", c_int),
        ("IconUL", c_int),
        ("IconVL", c_int),
    ]

    FSkillIndexLevelRequirementPair._fields_ = [
        ("SkillIndex", c_int),
        ("PlayerLevelRequirement", c_int),
    ]

    FDebugConsoleCommand._fields_ = [
        ("MenuName", FString),
        ("CommandName", FString),
        ("Description", FString),
        ("Command", FString),
        ("bOnClient", c_bool, 1),
    ]

    FNetworkChannelData._fields_ = [
        ("ChannelName", FString),
        ("StateName", FString),
        ("ActorClass", POINTER(UClass)),
        ("ActorClassName", FString),
        ("Role", FString),
        ("RemoteRole", FString),
        ("ActorClassCount", c_int),
        ("ActorClassPercent", c_float),
    ]

    FItemPartSettings._fields_ = [
        ("PartList", POINTER(UItemPartListDefinition)),
        ("Part", POINTER(UItemPartDefinition)),
        ("PartName", FString),
    ]

    FGearBuilderWeightedInventoryPart._fields_ = [
        ("Part", POINTER(UWillowInventoryPartDefinition)),
        ("Weight", c_float),
        ("ProbabilityOfPickingThisPart", c_float),
    ]

    FGearBuilderInventoryPartSlot._fields_ = [
        ("PartName", FString),
        ("SelectedPart", c_int),
        ("WeightedPartList", TArray_FGearBuilderWeightedInventoryPart),
    ]

    FItemSettings._fields_ = [
        ("ItemDefinition", POINTER(UItemDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("Level", c_int),
        ("GenericParts", FGearBuilderInventoryPartSlot * 9),
        ("CurrentPartBeingSet", c_int),
        ("ItemBuilderIndex", c_int),
        ("ActiveSubmenuForThisItem", c_int),
    ]

    FGearBuilderWeightedWeaponPart._fields_ = [
        ("Part", POINTER(UWeaponPartDefinition)),
        ("Weight", c_float),
        ("ProbabilityOfPickingThisPart", c_float),
    ]

    FGearBuilderWeaponPartSlot._fields_ = [
        ("PartName", FString),
        ("SelectedPart", c_int),
        ("WeightedPartList", TArray_FGearBuilderWeightedWeaponPart),
    ]

    FWeaponSettings._fields_ = [
        ("WeaponTypeDefinition", POINTER(UWeaponTypeDefinition)),
        ("BalanceDefinition", POINTER(UWeaponBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("Level", c_int),
        ("GenericParts", FGearBuilderWeaponPartSlot * 9),
        ("CurrentPartBeingSet", c_int),
    ]

    FItemBuilderData._fields_ = [
        ("TabName", FString),
        ("ItemName", FString),
        ("BuildItemMessage", FString),
        ("InventoryDefinitionClassName", FString),
        ("InventoryBalanceDefinitionNames", TArray_FString),
    ]

    FItemBuilderBalanceDefinition._fields_ = [
        ("InventoryDefinitionClass", POINTER(UClass)),
        ("BalanceDefinitions", TArray_FString),
    ]

    FGearBuilderCustomizationData._fields_ = [
        ("SortValue", c_int),
        ("BalanceDefinition", FString),
    ]

    FGearBuilderCustomizationUsageData._fields_ = [
        ("Usage", POINTER(UClass)),
        ("CustomizationBalanceDefinitions", TArray_FGearBuilderCustomizationData),
    ]

    FVirtualSeatStruct._fields_ = [("NameKey", FName), ("CurrentRealSeat", c_int)]

    FVehicleEffect._fields_ = [
        ("EffectStartTag", FName),
        ("EffectEndTag", FName),
        ("EffectTemplate", POINTER(UParticleSystem)),
        ("EffectSocket", FName),
        ("EffectRef", POINTER(UParticleSystemComponent)),
        ("EffectAudioStartAkEvent", POINTER(UAkEvent)),
        ("EffectAudioStopAkEvent", POINTER(UAkEvent)),
        ("bOnlyPassengersSee", c_bool, 1),
        ("bShutOffOnDeath", c_bool, 1),
    ]

    FFDamageMorphTargets._fields_ = [
        ("MorphNodeName", FName),
        ("MorphNode", POINTER(UMorphNodeWeight)),
        ("LinkedMorphNodeName", FName),
        ("LinkedMorphNodeIndex", c_int),
        ("AssociatedSkelControl", FName),
        ("InfluenceBone", FName),
        ("Health", c_int),
        ("DamagePropNames", TArray_FName),
    ]

    FSuspensionSound._fields_ = [
        ("LastSuspensionTravel", c_float),
        ("LastPlayTime", c_float),
        ("PlayingInfo", FAkPlayingInfo),
    ]

    FIndexPair._fields_ = [("Index1", c_int), ("Index2", c_int)]

    FTankSensor._fields_ = [
        ("Socket", FName),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SearchLength", c_float),
        ("HitLength", c_float),
    ]

    FPhysicalMaterialTireModel._fields_ = [
        ("PhysMaterial", POINTER(UPhysicalMaterial)),
        ("LongGripScaler", c_float),
        ("LatGripScaler", c_float),
    ]

    FDuelTeamInfo._fields_ = [
        ("TeamAllegiance", POINTER(UPawnAllegiance)),
        ("TeamColor", FColor),
    ]

    FDuelTeamPair._fields_ = [
        ("ChallengerTeam", FDuelTeamInfo),
        ("CompetitorTeam", FDuelTeamInfo),
    ]

    FTempWeaponStruct._fields_ = [
        ("DefinitionData", FWeaponDefinitionData),
        ("Ammo", c_int),
    ]

    FTempProfileStruct._fields_ = [
        ("Allegiance", POINTER(UPawnAllegiance)),
        ("Health", c_float),
        ("Shield", c_float),
        ("Weapons", TArray_FTempWeaponStruct),
    ]

    FBalanceModification._fields_ = [
        ("MinEffectiveLevel", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EnemyHealthMultiplier", c_float),
        ("BadassEnemyHealthMultiplier", c_float),
        ("EnemyShieldStrengthMultiplier", c_float),
        ("BadassEnemyShieldStrengthMultiplier", c_float),
        ("EnemyDamageMultiplier", c_float),
        ("BadassEnemyDamageMultiplier", c_float),
        ("XPGainedFromCombatMultiplier", c_float),
        ("XPGainedFromQuestsMultiplier", c_float),
        ("BadassRankGainMultiplier", c_float),
        ("AmplifiedDamageMultiplier", c_float),
        ("PlayerVehicleWeaponDamageMultiplier", c_float),
        ("AttributeEffectsForSpawnedEnemies", TArray_FAttributeEffectData),
        ("AttributeEffectsForPlayers", TArray_FAttributeEffectData),
        ("AmmoDropsPerPlayerMultiplier", FAttributeInitializationData),
        (
            "GearDrops_CommonWeightModifier_PT3_BaseValueOverride",
            FAttributeInitializationData,
        ),
        (
            "ChestItemPool_Weight_2_Uncommon_PT3_Multiplier",
            FAttributeInitializationData,
        ),
        ("StatusEffectChanceScales", TArray_FLevelBasedStatusEffectChanceScale),
        ("AIDamageScaleByLevelDifference", TArray_FLevelBasedDamageScale),
    ]

    FBlackMarketPostLaunchUpgradeData._fields_ = [("EridiumCostForUpgrade", c_int)]

    FMapSpecificBalanceModificationList._fields_ = [
        ("MapName", FName),
        ("AIPawnBalanceModifiers", TArray_UAIPawnBalanceModifierDefinitionPtr),
    ]

    FBalancedInventoryDataMirror._fields_ = [
        ("bIsItemPool", c_bool, 1),
        ("ObjectName", FName),
        ("ObjectPath", FString),
    ]

    FLegacyCustomizationItemData._fields_ = [
        ("ItemPoolDefPath", FString),
        ("ItemPoolKey", c_int),
        ("CustomizationItemPool", POINTER(UItemPoolDefinition)),
    ]

    FPremiumCustomizationInfo._fields_ = [
        ("OfferId", c_int),
        ("PackageId", c_int),
        ("ContentId", c_int),
        ("PS3TitleId", FString),
    ]

    FAIPawnPlaythroughThreeData._fields_ = [
        ("AIPawnBalanceDefinitionFullObjectName", FString),
        ("DisplayName", FString),
        ("TransformedNames", TArray_FAITransformedName),
    ]

    FDirChangeRateRange._fields_ = [
        ("DirDegreesPerSecond", c_float),
        ("SpeedRange", c_float),
    ]
