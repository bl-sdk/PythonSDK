enum.MakeEnum("EAchievementUnlockType", {
	"AUT_ZoneIn",
	"AUT_EarnMoney",
	"AUT_LeveledUp",
	"AUT_InstinctUp",
	"AUT_FallHeight",
	"AUT_HangTime",
	"AUT_QuestCompleted",
	"AUT_ActionSkillKill",
	"AUT_QuestCompletedCoOp",
	"AUT_SpeedyTravel",
	"AUT_SpeedyKills",
	"AUT_RushTime",
	"AUT_InventorySlotChange",
	"AUT_KilledLeveledUpPawn",
	"AUT_TokensSpent",
	"AUT_CustomizationsUnlocks",
	"AUT_SideMissionsCompleted",
	"AUT_PurchasedBlackMarketItem",
	"AUT_MAX"
})

enum.MakeEnum("EWillowAchievementList", {
	"WA_Invalid",
	"WA_PlotMission1",
	"WA_PlotMission2",
	"WA_PlotMission3",
	"WA_PlotMission4",
	"WA_PlotMission5",
	"WA_PlotMission6",
	"WA_PlotMission7",
	"WA_PlotMission8",
	"WA_PlotMission9",
	"WA_PlotMission10",
	"WA_PlotMission11",
	"WA_PlotMission12",
	"WA_PlotMission13",
	"WA_PlotMission14",
	"WA_PlotMission15",
	"WA_PlotMission16",
	"WA_ChallengeAccepted",
	"WA_GoliathMeetDavid",
	"WA_WentFiveRounds",
	"WA_NotQuiteDead",
	"WA_BetterThanYouWere",
	"WA_AlwaysImproving",
	"WA_CappedOutForNow",
	"WA_ArcticExplorer",
	"WA_UrbanExplorer",
	"WA_HighlandsExplorer",
	"WA_BlightExplorer",
	"WA_WorldTraveler",
	"WA_SugarDaddy",
	"WA_DeckedOut",
	"WA_SabreRattler",
	"WA_PhasedAndConfused",
	"WA_SoMuchBlood",
	"WA_CuteLoot",
	"WA_TributeToAVaultHunter",
	"WA_DefinitelyAnItalianPlumber",
	"WA_HighFlyingHurler",
	"WA_TokenGesture",
	"WA_WhatDoesItMean",
	"WA_UnseenPredator",
	"WA_BuildBuster",
	"WA_WellThatWasEasy",
	"WA_HowDoILook",
	"WA_ThresherThrashed",
	"WA_FriendshipRules",
	"WA_BetterThanMoney",
	"WA_UpHighDownLow",
	"WA_BountyHunter",
	"WA_DidItAll",
	"WA_FeelsLikeTheFirstTime",
	"WA_DLC1_Achievement1",
	"WA_DLC1_Achievement2",
	"WA_DLC1_Achievement3",
	"WA_Iris_CompleteMainCampaign",
	"WA_Iris_CompleteSideMissions",
	"WA_Iris_CollectItems",
	"WA_Sage_CompleteMainCampaign",
	"WA_Sage_CompleteSideMissions",
	"WA_Sage_DiscoverAllAreas",
	"WA_DLCReserved",
	"WA_DLCReserved1",
	"WA_DLCReserved2",
	"WA_DLCReserved3",
	"WA_DLCReserved4",
	"WA_DLCReserved5",
	"WA_DLCReserved6",
	"WA_DLCReserved7",
	"WA_DLCReserved8",
	"WA_DLCReserved9",
	"WA_DLCReserved10",
	"WA_DLCReserved11",
	"WA_DLCReserved12",
	"WA_DLCReserved13",
	"WA_DLCReserved14",
	"WA_DLCReserved15",
	"WA_DLCReserved16",
	"WA_DLCReserved17",
	"WA_DLCReserved18",
	"WA_DLCReserved19",
	"WA_DLCReserved20",
	"WA_DLCReserved21",
	"WA_DLCReserved22",
	"WA_DLCReserved23",
	"WA_DLCReserved24",
	"WA_DLCReserved25",
	"WA_DLCReserved26",
	"WA_DLCReserved27",
	"WA_DLCReserved28",
	"WA_DLCReserved29",
	"WA_DLCReserved30",
	"WA_DLCReserved31",
	"WA_DLCReserved32",
	"WA_DLCReserved33",
	"WA_DLCReserved34",
	"WA_DLCReserved35",
	"WA_DLCReserved36",
	"WA_DLCReserved37",
	"WA_DLCReserved38",
	"WA_DLCReserved39",
	"WA_MAX"
})

enum.MakeEnum("EDefaultStance", {
	"STANCE_Patrol",
	"STANCE_Run",
	"STANCE_Sprint",
	"STANCE_Injured",
	"STANCE_None",
	"STANCE_Crouch",
	"STANCE_MAX"
})

enum.MakeEnum("EMoveStyle", {
	"MOVE_Strafe",
	"MOVE_Forward",
	"MOVE_MAX"
})

enum.MakeEnum("EDamageType", {
	"DAMAGE_TYPE_Unknown",
	"DAMAGE_TYPE_Incindiary",
	"DAMAGE_TYPE_Shock",
	"DAMAGE_TYPE_Explosive",
	"DAMAGE_TYPE_Corrosive",
	"DAMAGE_TYPE_Impact",
	"DAMAGE_TYPE_Healing",
	"DAMAGE_TYPE_Amp",
	"DAMAGE_TYPE_MAX"
})

enum.MakeEnum("ECloakStyle", {
	"CLOAKSTYLE_None",
	"CLOAKSTYLE_Hide",
	"CLOAKSTYLE_Visible",
	"CLOAKSTYLE_VisibleHUD",
	"CLOAKSTYLE_MAX"
})

enum.MakeEnum("ECloakType", {
	"CLOAK_Spawn",
	"CLOAK_AttackMove",
	"CLOAK_AttackAnim",
	"CLOAK_PatrolPath",
	"CLOAK_PatrolPerch",
	"CLOAK_PatrolRandom",
	"CLOAK_RunHome",
	"CLOAK_Unprovoked",
	"CLOAK_ScriptedMove",
	"CLOAK_SpawnAnim",
	"CLOAK_PhysicsJump",
	"CLOAK_MAX"
})

enum.MakeEnum("EFlinchSeverity", {
	"EF_NoFlinch",
	"EF_SmallFlinch",
	"EF_MediumFlinch",
	"EF_LargeFlinch",
	"EF_CriticalFlinch",
	"EF_MAX"
})

enum.MakeEnum("ELineOfSight", {
	"ELOS_Keep",
	"ELOS_Avoid",
	"ELOS_Arc",
	"ELOS_MAX"
})

enum.MakeEnum("EAttackValidity", {
	"Validity_None",
	"Validity_Partial",
	"Validity_Full",
	"Validity_MAX"
})

enum.MakeEnum("EAttackType", {
	"Attack_Far",
	"Attack_Close",
	"Attack_InPlace",
	"Attack_MAX"
})

enum.MakeEnum("EAimType", {
	"AimType_HoldStill",
	"AimType_FollowTarget",
	"AimType_AlignToTarget",
	"AimType_MAX"
})

enum.MakeEnum("ERangeType", {
	"Range_None",
	"Range_Zone",
	"Range_Numbers",
	"Range_MAX"
})

enum.MakeEnum("EThreatLevel", {
	"ETL_NoThreat",
	"ETL_InThreatRadius",
	"ETL_SeenInThreatRadius",
	"ETL_Provoked",
	"ETL_MAX"
})

enum.MakeEnum("TargetExposure", {
	"Exposure_None",
	"Exposure_Half",
	"Exposure_Full",
	"Exposure_MAX"
})

enum.MakeEnum("ECombatPointLOS", {
	"CPLOS_Ignore",
	"CPLOS_UseLOS",
	"CPLOS_AvoidLOS",
	"CPLOS_MAX"
})

enum.MakeEnum("ECloakOverride", {
	"CLOAKOVERRIDE_None",
	"CLOAKOVERRIDE_Cloak",
	"CLOAKOVERRIDE_Uncloak",
	"CLOAKOVERRIDE_MAX"
})

enum.MakeEnum("EFollowType", {
	"Follow_None",
	"Follow_Parent",
	"Follow_Target",
	"Follow_Master",
	"Follow_MAX"
})

enum.MakeEnum("EPursuitState", {
	"PS_UnsetArea",
	"PS_WeAreInSameArea",
	"PS_WeAreInDifferentAreas",
	"PS_IAmOutsideMyArea",
	"PS_TargetHasNoArea",
	"PS_MAX"
})

enum.MakeEnum("EBeamSource", {
	"EBS_Weapon",
	"EBS_Pawn",
	"EBS_WorldBody",
	"EBS_MAX"
})

enum.MakeEnum("EBulletFromClip", {
	"BFC_Other",
	"BFC_First",
	"BFC_Last",
	"BFC_MAX"
})

enum.MakeEnum("EFlightMode", {
	"Flight_Land",
	"Flight_TakeOff",
	"Flight_MAX"
})

enum.MakeEnum("ESweepDirection", {
	"Sweep_Left",
	"Sweep_Right",
	"Sweep_Random",
	"Sweep_MAX"
})

enum.MakeEnum("ESwoopOffset", {
	"SwoopOffset_Left",
	"SwoopOffset_Right",
	"SwoopOffset_Random",
	"SwoopOffset_MAX"
})

enum.MakeEnum("EDamageCauserType", {
	"DAMAGE_CAUSER_TYPE_Unknown",
	"DAMAGE_CAUSER_TYPE_Pistol",
	"DAMAGE_CAUSER_TYPE_Shotgun",
	"DAMAGE_CAUSER_TYPE_AssaultRifle",
	"DAMAGE_CAUSER_TYPE_SniperRifle",
	"DAMAGE_CAUSER_TYPE_SMG",
	"DAMAGE_CAUSER_TYPE_Frag_Grenade",
	"DAMAGE_CAUSER_TYPE_Protean_Grenade",
	"DAMAGE_CAUSER_TYPE_Vehicle",
	"DAMAGE_CAUSER_TYPE_VehicleWeapon",
	"DAMAGE_CAUSER_TYPE_Melee",
	"DAMAGE_CAUSER_TYPE_Turret",
	"DAMAGE_CAUSER_TYPE_Launcher",
	"DAMAGE_CAUSER_TYPE_ExtraWeapon1",
	"DAMAGE_CAUSER_TYPE_ExtraWeapon2",
	"DAMAGE_CAUSER_TYPE_ExtraWeapon3",
	"DAMAGE_CAUSER_TYPE_ExtraWeapon4",
	"DAMAGE_CAUSER_TYPE_MAX"
})

enum.MakeEnum("EOnTouchEventOutputs", {
	"EONTOUCH_Player",
	"EONTOUCH_NotPlayer",
	"EONTOUCH_MAX"
})

enum.MakeEnum("ERelevanceDistance", {
	"RELEVANCE_Lootable",
	"RELEVANCE_Outpost",
	"RELEVANCE_Huge",
	"RELEVANCE_MAX"
})

enum.MakeEnum("EInteractionIcons", {
	"INTERACTION_ICON_None",
	"INTERACTION_ICON_Use",
	"INTERACTION_ICON_Talk",
	"INTERACTION_ICON_Heal",
	"INTERACTION_ICON_Shop",
	"INTERACTION_ICON_Computer",
	"INTERACTION_ICON_Driver",
	"INTERACTION_ICON_Gunner",
	"INTERACTION_ICON_Smash",
	"INTERACTION_ICON_CannotUse",
	"INTERACTION_ICON_FlipVehicle",
	"INTERACTION_ICON_VehicleMiddleLeftSeat",
	"INTERACTION_ICON_VehicleMiddleRightSeat",
	"INTERACTION_ICON_Open",
	"INTERACTION_ICON_Trade",
	"INTERACTION_ICON_Objective",
	"INTERACTION_ICON_PickUp",
	"INTERACTION_ICON_Full",
	"INTERACTION_ICON_FullFadeOut",
	"INTERACTION_ICON_MAX"
})

enum.MakeEnum("ERadarIconType", {
	"RadarIconType_None",
	"RadarIconType_Gunfire",
	"RadarIconType_Threat",
	"RadarIconType_BountyBoard",
	"RadarIconType_Shop",
	"RadarIconType_Health",
	"RadarIconType_NewU",
	"RadarIconType_CatchARide",
	"RadarIconType_Settlement",
	"RadarIconType_MissionNPC",
	"RadarIconType_NamedNPC",
	"RadarIconType_Loot",
	"RadarIconType_Objective",
	"RadarIconType_Checkpoint",
	"RadarIconType_TravelStation",
	"RadarIconType_CustomizationStation",
	"RadarIconType_LevelTransition",
	"RadarIconType_MAX"
})

enum.MakeEnum("EAITransformed", {
	"EAIT_None",
	"EAIT_Fire",
	"EAIT_Shock",
	"EAIT_Corrosive",
	"EAIT_Custom",
	"EAIT_Slagged",
	"EAIT_MAX"
})

enum.MakeEnum("EItemGameStageSource", {
	"IGSS_ExpLevelOfBalancedActor",
	"IGSS_GameStageOfBalancedActor",
	"IGSS_MAX"
})

enum.MakeEnum("EUseBehaviorContext", {
	"EUBC_ActorSkelMeshIsAttachedTo",
	"EUBC_ObjectSkelMeshWasCreatedBy",
	"EUBC_MAX"
})

enum.MakeEnum("EStoragePanelBackground", {
	"ESPB_Inventory",
	"ESPB_Health",
	"ESPB_Weapons",
	"ESPB_Ammo",
	"ESPB_Bank",
	"ESPB_Stash",
	"EPSB_Blackmarket",
	"EPSB_Custom",
	"EStoragePanelBackground_MAX"
})

enum.MakeEnum("EQuickWeaponSlot", {
	"QuickSelectNone",
	"QuickSelectUp",
	"QuickSelectDown",
	"QuickSelectLeft",
	"QuickSelectRight",
	"EQuickWeaponSlot_MAX"
})

enum.MakeEnum("EEquipmentLoc", {
	"EQUIPLOC_Shield",
	"EQUIPLOC_GrenadeMod",
	"EQUIPLOC_ClassMod",
	"EQUIPLOC_Artifact",
	"EQUIPLOC_None",
	"EQUIPLOC_MAX"
})

enum.MakeEnum("EWeaponType", {
	"WT_Pistol",
	"WT_Shotgun",
	"WT_SMG",
	"WT_SniperRifle",
	"WT_AssaultRifle",
	"WT_RocketLauncher",
	"WT_MAX"
})

enum.MakeEnum("EWeaponPartType", {
	"WP_Body",
	"WP_Grip",
	"WP_Barrel",
	"WP_Sight",
	"WP_Stock",
	"WP_Elemental",
	"WP_Accessory1",
	"WP_Accessory2",
	"WP_Material",
	"WP_Prefix",
	"WP_Title",
	"WP_MAX"
})

enum.MakeEnum("EWeaponPartVariation", {
	"WeaponPartVar_Default",
	"WeaponPartVar_One",
	"WeaponPartVar_Two",
	"WeaponPartVar_Three",
	"WeaponPartVar_MAX"
})

enum.MakeEnum("EWeaponEventType", {
	"WEAPONEVENT_Advance",
	"WEAPONEVENT_Stop",
	"WEAPONEVENT_Pause",
	"WEAPONEVENT_UnPause",
	"WEAPONEVENT_MAX"
})

enum.MakeEnum("EItemPartType", {
	"IP_Alpha",
	"IP_Beta",
	"IP_Gamma",
	"IP_Delta",
	"IP_Epsilon",
	"IP_Zeta",
	"IP_Eta",
	"IP_Theta",
	"IP_Material",
	"IP_Prefix",
	"IP_Title",
	"IP_MAX"
})

enum.MakeEnum("ERewardPopup", {
	"ERP_BadassToken",
	"ERP_CharacterHead",
	"ERP_CharacterSkin",
	"ERP_VehicleSkin",
	"ERP_MAX"
})

enum.MakeEnum("EArtifactPartType", {
	"ARTIFACT_PART_EnableFirstEffect",
	"ARTIFACT_PART_EnableSecondEffect",
	"ARTIFACT_PART_EnableThirdEffect",
	"ARTIFACT_PART_EnableFourthEffect",
	"ARTIFACT_PART_UpgradeEffect",
	"ARTIFACT_PART_Body",
	"ARTIFACT_PART_MAX"
})

enum.MakeEnum("EAssetLibrary", {
	"AL_WeaponTypes",
	"AL_WeaponParts",
	"AL_ItemTypes",
	"AL_ItemParts",
	"AL_Manufacturer",
	"AL_Balance",
	"AL_MAX"
})

enum.MakeEnum("EHeightRestriction", {
	"HeightRestriction_Within",
	"HeightRestriction_Above",
	"HeightRestriction_Below",
	"HeightRestriction_MAX"
})

enum.MakeEnum("EParentDistance", {
	"EParentDist_Closer",
	"EParentDist_Further",
	"EParentDist_MAX"
})

enum.MakeEnum("EAttributeValueSignStyle", {
	"SIGNSTYLE_AsIs",
	"SIGNSTYLE_Positive",
	"SIGNSTYLE_Negative",
	"SIGNSTYLE_AsIsAnyStyle",
	"SIGNSTYLE_OppositeSign",
	"SIGNSTYLE_MAX"
})

enum.MakeEnum("EAttributeSlotEffectProperty", {
	"ATTRSLOTEFFECTPROP_Grade",
	"ATTRSLOTEFFECTPROP_ComputedModifierValue",
	"ATTRSLOTEFFECTPROP_MAX"
})

enum.MakeEnum("EWillowAvatarAwards", {
	"WAA_Invalid",
	"WAA_One",
	"WAA_Two",
	"WAA_Three",
	"WAA_MAX"
})

enum.MakeEnum("ERTTType", {
	"RTTT_Cell",
	"RTTT_HalfCell",
	"RTTT_Card",
	"RTTT_QuickSlot",
	"RTTT_MAX"
})

enum.MakeEnum("EWillowNetworkType", {
	"WNT_Internet",
	"WNT_SystemLink",
	"WNT_Offline",
	"WNT_MAX"
})

enum.MakeEnum("EOnlineMessageType", {
	"OMT_None",
	"OMT_Network",
	"OMT_Dlc",
	"OMT_Mission",
	"OMT_Travel",
	"OMT_Misc",
	"OMT_MAX"
})

enum.MakeEnum("EMissionStatus", {
	"MS_NotStarted",
	"MS_Active",
	"MS_RequiredObjectivesComplete",
	"MS_ReadyToTurnIn",
	"MS_Complete",
	"MS_Failed",
	"MS_MAX"
})

enum.MakeEnum("EMissionEvent", {
	"ME_LevelLoad",
	"ME_StatusChanged",
	"ME_ObjectiveSetChanged",
	"ME_ObjectiveUpdated",
	"ME_ObjectiveCleared",
	"ME_ObjectiveComplete",
	"ME_ActiveMission",
	"ME_NoLongerActiveMission",
	"ME_MAX"
})

enum.MakeEnum("EItemRarity", {
	"RARITY_Unknown",
	"RARITY_Common",
	"RARITY_Uncommon",
	"RARITY_Rare",
	"RARITY_VeryRare",
	"RARITY_Legendary",
	"RARITY_Seraph",
	"RARITY_MAX"
})

enum.MakeEnum("EDropLifeSpanType", {
	"DROP_VeryShortLived",
	"DROP_ShortLived",
	"DROP_LongLived",
	"DROP_LiveForever",
	"DROP_LiveAsLongAsLevel",
	"DROP_MAX"
})

enum.MakeEnum("EMissionBranchEnding", {
	"EMBE_None",
	"EMBE_PathA",
	"EMBE_PathB",
	"EMBE_MAX"
})

enum.MakeEnum("EObjectiveDependencyStatus", {
	"EODS_Complete",
	"EODS_Active",
	"EODS_MAX"
})

enum.MakeEnum("EMissionReaction", {
	"MR_NotStarted",
	"MR_Active",
	"MR_ReadyToTurnIn",
	"MR_Complete",
	"MR_MAX"
})

enum.MakeEnum("EBackButtonScreen", {
	"CS_None",
	"CS_MissionLog",
	"CS_Map",
	"CS_Inventory",
	"CS_Skills",
	"CS_Challenges",
	"CS_MAX"
})

enum.MakeEnum("EQuickSelectSlotStatus", {
	"QSSS_Available",
	"QSSS_Locked",
	"QSSS_Selected",
	"QSSS_MAX"
})

enum.MakeEnum("ELoadGameResult", {
	"LGR_Failure",
	"LGR_Success",
	"LGR_Pending",
	"LGR_CorruptedFailure",
	"LGR_UnloadedDLCFailure",
	"LGR_DuplicateFailure",
	"LGR_MAX"
})

enum.MakeEnum("EConnectionAttemptStatus", {
	"COAS_ServerFull",
	"COAS_ServerUnavailable",
	"COAS_DLCMismatch",
	"COAS_ClientOutdated",
	"COAS_ServerOutdated",
	"COAS_MAX"
})

enum.MakeEnum("PlayerTradingStance", {
	"PTS_Deciding",
	"PTS_TradeReady",
	"PTS_DuelReady",
	"PTS_Disconnected",
	"PTS_MAX"
})

enum.MakeEnum("TradeManagerReason", {
	"TMR_PlayerBusy",
	"TMR_PlayerOutOfRange",
	"TMR_PlayerRequestRefusedSelf",
	"TMR_PlayerRequestRefusedPartner",
	"TMR_PlayerRequestWithdrawnSelf",
	"TMR_PlayerRequestWithdrawnPartner",
	"TMR_RedundantRequest",
	"TMR_TradingDisabled",
	"TMR_CanceledBySelf",
	"TMR_CanceledByPartner",
	"TMR_TradeCompleteSuccessfully",
	"TMR_DuelWon",
	"TMR_DuelLost",
	"TMR_DuelDraw",
	"TMR_TradeCanceled",
	"TMR_MAX"
})

enum.MakeEnum("EPointType", {
	"POINTTYPE_Skill",
	"POINTTYPE_BadassToken",
	"POINTTYPE_UNUSED",
	"POINTTYPE_UNUSED1",
	"POINTTYPE_UNUSED2",
	"POINTTYPE_UNUSED3",
	"POINTTYPE_UNUSED4",
	"POINTTYPE_UNUSED5",
	"POINTTYPE_UNUSED6",
	"POINTTYPE_UNUSED7",
	"POINTTYPE_UNUSED8",
	"POINTTYPE_PTExtension",
	"POINTTYPE_PTExtension1",
	"POINTTYPE_PTExtension2",
	"POINTTYPE_PTExtension3",
	"POINTTYPE_PTExtension4",
	"POINTTYPE_MAX"
})

enum.MakeEnum("EMissionFastForwardResult", {
	"EMFFR_PlayerAccepted",
	"EMFFR_PlayerDeclined",
	"EMFFR_InvalidPrompt",
	"EMFFR_MAX"
})

enum.MakeEnum("EPartnerJoinLeaveType", {
	"PJLT_Host",
	"PJLT_Client",
	"PJLT_HostSplit",
	"PJLT_ClientSplit",
	"PJLT_MAX"
})

enum.MakeEnum("EDuelResult", {
	"DR_Won",
	"DR_Lost",
	"DR_Drew",
	"DR_MAX"
})

enum.MakeEnum("EReviveReason", {
	"REVIVE_KilledEnemy",
	"REVIVE_LeveledUp",
	"REVIVE_PartnerRevived",
	"REVIVE_Respawned",
	"REVIVE_OtherRevived",
	"REVIVE_AutoRevived",
	"REVIVE_UNUSED",
	"REVIVE_UNUSED1",
	"REVIVE_UNUSED2",
	"REVIVE_UNUSED3",
	"REVIVE_UNUSED4",
	"REVIVE_RevReasonExtension",
	"REVIVE_RevReasonExtension1",
	"REVIVE_RevReasonExtension2",
	"REVIVE_RevReasonExtension3",
	"REVIVE_RevReasonExtension4",
	"REVIVE_MAX"
})

enum.MakeEnum("ECharacterKilledReason", {
	"ECKR_BledOut",
	"ECKR_GaveUp",
	"ECKR_KillVolume",
	"ECKR_OutOfBounds",
	"ECKR_UNUSED",
	"ECKR_UNUSED1",
	"ECKR_UNUSED2",
	"ECKR_UNUSED3",
	"ECKR_UNUSED4",
	"ECKR_UNUSED5",
	"ECKR_UNUSED6",
	"ECKR_CharKillExtension",
	"ECKR_CharKillExtension1",
	"ECKR_CharKillExtension2",
	"ECKR_CharKillExtension3",
	"ECKR_CharKillExtension4",
	"ECKR_MAX"
})

enum.MakeEnum("EEventId", {
	"EI_PerformanceSample",
	"EI_AdjustResource",
	"EI_AdjustResourceLimit",
	"EI_EnemyKilled",
	"EI_BulletFired",
	"EI_LocationPulse",
	"EI_ExperienceGained",
	"EI_Attack",
	"EI_CharacterCreated",
	"EI_CharacterLoaded",
	"EI_CharacterDeleted",
	"EI_GameplayStart",
	"EI_ExitedGameplay",
	"EI_ChangePlaythrough",
	"EI_NewExcursion",
	"EI_ItemSpawned",
	"EI_ItemToInventory",
	"EI_ItemFromInventory",
	"EI_ItemMovedInInventory",
	"EI_BlackMarketUpgradePurchased",
	"EI_PointsEarned",
	"EI_PointsSpent",
	"EI_PointsReset",
	"EI_PlayerCharacterGainedLevel",
	"EI_MinorAction",
	"EI_RenameCharacter",
	"EI_PartnerJoinedGame",
	"EI_PartnerLeftGame",
	"EI_ResourceDepleted",
	"EI_CharacterDown",
	"EI_CharacterKilled",
	"EI_CharacterRevived",
	"EI_MissionStatusChanged",
	"EI_MissionObjectiveSetActivated",
	"EI_MissionObjectiveChanged",
	"EI_DuelStarted",
	"EI_DeclinedDuel",
	"EI_DuelEnded",
	"EI_SpawnVehicle",
	"EI_DestroyVehicle",
	"EI_CustomizeCharacter",
	"EI_ChallengeLevelCompleted",
	"EI_DiscoverLocation",
	"EI_TeleportedToVehicle",
	"EI_WieldedWeaponChanged",
	"EI_BeginPlaySession",
	"EI_MissionFastForward",
	"EI_Diagnostic",
	"EI_MAX"
})

enum.MakeEnum("EVehicleDestructionReason", {
	"EVDR_Damage",
	"EVDR_VehDestOutOfBounds",
	"EVDR_VehDestRespawned",
	"EVDR_UNUSED",
	"EVDR_UNUSED1",
	"EVDR_UNUSED2",
	"EVDR_UNUSED3",
	"EVDR_UNUSED4",
	"EVDR_UNUSED5",
	"EVDR_UNUSED6",
	"EVDR_UNUSED7",
	"EVDR_VehDestExtension",
	"EVDR_VehDestExtension1",
	"EVDR_VehDestExtension2",
	"EVDR_VehDestExtension3",
	"EVDR_VehDestExtension4",
	"EVDR_MAX"
})

enum.MakeEnum("EDeclineDuelReason", {
	"DDR_DuelingDisabled",
	"DDR_DuelTimedOut",
	"DDR_MAX"
})

enum.MakeEnum("EMinorActionType", {
	"EMAT_DisableTraining",
	"EMAT_UseMouseKeyboard",
	"EMAT_UseController",
	"EMAT_SplitScreenBegin",
	"EMAT_SplitScreenEnd",
	"EMAT_UseVending",
	"EMAT_StoreCompare",
	"EMAT_UNUSED",
	"EMAT_UNUSED1",
	"EMAT_UNUSED2",
	"EMAT_UNUSED3",
	"EMAT_MAExtension",
	"EMAT_MAExtension1",
	"EMAT_MAExtension2",
	"EMAT_MAExtension3",
	"EMAT_MAExtension4",
	"EMAT_MAExtension5",
	"EMAT_MAExtension6",
	"EMAT_MAExtension7",
	"EMAT_MAExtension8",
	"EMAT_MAExtension9",
	"EMAT_MAX"
})

enum.MakeEnum("EReadiedWeaponState", {
	"ERWS_NotReadied",
	"ERWS_MainHand",
	"ERWS_OffHand",
	"ERWS_NotWielded",
	"ERWS_MAX"
})

enum.MakeEnum("EItemLocation", {
	"EIL_ItemLocUnknown",
	"EIL_Store",
	"EIL_Ground",
	"EIL_Award",
	"EIL_Consumed",
	"EIL_PlayerDrop",
	"EIL_Container",
	"EIL_Bank",
	"EIL_Stash",
	"EIL_TradePartner",
	"EIL_Cheat",
	"EIL_MarketingAward",
	"EIL_BackpackInventory",
	"EIL_Buyback",
	"EIL_SaveGame",
	"EIL_Destroyed",
	"EIL_MAX"
})

enum.MakeEnum("EInventorySlot", {
	"EIS_EquippedItem",
	"EIS_QuickSelectUp",
	"EIS_QuickSelectDown",
	"EIS_QuickSelectLeft",
	"EIS_QuickSelectRight",
	"EIS_Backpack",
	"EIS_UNUSED",
	"EIS_UNUSED1",
	"EIS_UNUSED2",
	"EIS_UNUSED3",
	"EIS_UNUSED4",
	"EIS_InvSlotExtension",
	"EIS_InvSlotExtension1",
	"EIS_InvSlotExtension2",
	"EIS_InvSlotExtension3",
	"EIS_InvSlotExtension4",
	"EIS_MAX"
})

enum.MakeEnum("EExperienceSource", {
	"EES_XPUnknown",
	"EES_XPCombat",
	"EES_PlotMissionAward",
	"EES_Discovery",
	"EES_SideMissionAward",
	"EES_UNUSED",
	"EES_UNUSED1",
	"EES_UNUSED2",
	"EES_UNUSED3",
	"EES_UNUSED4",
	"EES_UNUSED5",
	"EES_XPExtension",
	"EES_XPExtension1",
	"EES_XPExtension2",
	"EES_XPExtension3",
	"EES_XPExtension4",
	"EES_MAX"
})

enum.MakeEnum("ESplitScreenConfiguration", {
	"SSC_Single1P",
	"SSC_Vertical2P",
	"SSC_Horizontal2P",
	"SSC_Vertical3P",
	"SSC_Horizontal3P",
	"SSC_Quad4p",
	"SSC_MAX"
})

enum.MakeEnum("EDiagnosticEventType", {
	"EDET_DetectedLostProfile",
	"EDET_RestoredBadassPoints",
	"EDET_RestoredCustomizations",
	"EDET_ReattemptingProfileRead",
	"EDET_SuccessfulProfileReRead",
	"EDET_MAX"
})

enum.MakeEnum("ECustomizationEventType", {
	"ECET_CustomizationUnlocked",
	"ECET_CustomizationSelectNewCharacter",
	"ECET_CustomizationSelectQuickChange",
	"ECET_MAX"
})

enum.MakeEnum("TradeSlotStatus", {
	"TSS_Empty",
	"TSS_Item",
	"TSS_Weapon",
	"TSS_MAX"
})

enum.MakeEnum("TradeManagerStatus", {
	"TMS_Uninitialized",
	"TMS_OutgoingRequestPending",
	"TMS_IncomingRequestPending",
	"TMS_Trading",
	"TMS_Dueling",
	"TMS_ResolvingTrade",
	"TMS_ResolvingDuelWon",
	"TMS_ResolvingDuelLost",
	"TMS_MAX"
})

enum.MakeEnum("EColiseumStatType", {
	"ECSTAT_Kills",
	"ECSTAT_MAX"
})

enum.MakeEnum("EColiseumGameOver", {
	"ECGM_TryAgain",
	"ECGM_Lobby",
	"ECGM_MAX"
})

enum.MakeEnum("ECountDownLength", {
	"ECDL_Ten",
	"ECDL_Five",
	"ECDL_Four",
	"ECDL_Three",
	"ECDL_Two",
	"ECDL_One",
	"ECDL_None",
	"ECDL_MAX"
})

enum.MakeEnum("EColiseumUpdateMode", {
	"E_Toggle",
	"E_TurnOff",
	"E_TurnOn",
	"E_MAX"
})

enum.MakeEnum("EHUDEquippedCardType", {
	"HUDEquippedCard_Weapon",
	"HUDEquippedCard_Shield",
	"HUDEquippedCard_GrenadeMod",
	"HUDEquippedCard_ClassMod",
	"HUDEquippedCard_Artifact",
	"HUDEquippedCard_MAX"
})

enum.MakeEnum("EColiseumNotifyType", {
	"ECNT_Resupply",
	"ECNT_Refill",
	"ECNT_WaveEnded",
	"ECNT_MAX"
})

enum.MakeEnum("EHUDPickupCardType", {
	"HUDPickupCard_Weapon",
	"HUDPickupCard_Shield",
	"HUDPickupCard_GrenadeMod",
	"HUDPickupCard_ClassMod",
	"HUDPickupCard_Artifact",
	"HUDPickupCard_Item",
	"HUDPickupCard_MAX"
})

enum.MakeEnum("EDecalSettingOptions", {
	"DSO_Normal",
	"DSO_High",
	"DSO_MAX"
})

enum.MakeEnum("EProfileViewDistanceOptions", {
	"PVDO_Low",
	"PVDO_Medium",
	"PVDO_High",
	"PVDO_UltraHigh",
	"PVDO_MAX"
})

enum.MakeEnum("ESplitDirectionOptions", {
	"SDO_Horizontal",
	"SDO_Vertical",
	"SDO_MAX"
})

enum.MakeEnum("EProfileColorBlindModeOptions", {
	"PCBMO_Invalid",
	"PCBMO_Off",
	"PCBMO_Deuteranopia",
	"PCBMO_Protanopia",
	"PCBMO_Tritanopia",
	"PCBMO_MAX"
})

enum.MakeEnum("EInstinctSkillActions", {
	"ISA_Targeting",
	"ISA_Targeted",
	"ISA_KilledEnemy",
	"ISA_AppliedStatusEffect",
	"ISA_CriticalHit",
	"ISA_TookPhysicalDamage",
	"ISA_GaveDamage",
	"ISA_TookStatusEffectDamage",
	"ISA_ScoredHit",
	"ISA_DealtExplosiveDamage",
	"ISA_FriendWentDown",
	"ISA_DealtStatusEffectDamage",
	"ISA_TookShieldDamage",
	"ISA_MAX"
})

enum.MakeEnum("ELoadPlayerBehavior", {
	"ELPB_LoadOnly",
	"ELPB_LoadAndCache",
	"ELPB_MAX"
})

enum.MakeEnum("ESaveGameManagerState", {
	"ESGMS_Idle",
	"ESGMS_Saving",
	"ESGMS_Deleting",
	"ESGMS_Loading",
	"ESGMS_ListLoading",
	"ESGMS_LoadingWillowOneSave",
	"ESGMS_SavingProfile",
	"ESGMS_CountingCrossTitleSaveGames",
	"ESGMS_MAX"
})

enum.MakeEnum("CPAsync", {
	"WORKRESULT_NONE",
	"WORKRESULT_PENDING",
	"WORKRESULT_SUCCESS",
	"WORKRESULT_FAIL",
	"WORKRESULT_FILENOTFOUND",
	"WORKRESULT_MAX"
})

enum.MakeEnum("ESaveVersionType", {
	"ESVT_File",
	"ESVT_Player",
	"ESVT_Graveyard",
	"ESVT_MAX"
})

enum.MakeEnum("EAttributeScalarParamOperand", {
	"ASPO_None",
	"ASPO_Add",
	"ASPO_Subtract",
	"ASPO_MAX"
})

enum.MakeEnum("ScreenParticleScalingMode", {
	"ESPSM_FitToHorizontal",
	"ESPSM_FitToVertical",
	"ESPSM_FitToExterior",
	"ESPSM_FitToInterior",
	"ESPSM_FitToViewport",
	"ESPSM_MAX"
})

enum.MakeEnum("EPostProcessOverrideUpdatePhase", {
	"PPUPDATEPHASE_None",
	"PPUPDATEPHASE_TransitionIn",
	"PPUPDATEPHASE_TransitionHold",
	"PPUPDATEPHASE_TransitionOut",
	"PPUPDATEPHASE_MAX"
})

enum.MakeEnum("EImpactUsage", {
	"IU_None",
	"IU_Footstep",
	"IU_Bullet",
	"IU_MAX"
})

enum.MakeEnum("EDamageSurfaceType", {
	"DMGSURFACE_Generic",
	"DMGSURFACE_Flesh",
	"DMGSURFACE_Armor",
	"DMGSURFACE_Shield",
	"DMGSURFACE_MAX"
})

enum.MakeEnum("EStatusEffectType", {
	"STATUS_EFFECT_Unknown",
	"STATUS_EFFECT_Ignite",
	"STATUS_EFFECT_Corrosive",
	"STATUS_EFFECT_Shock",
	"STATUS_EFFECT_Amp",
	"STATUS_EFFECT_Slow",
	"STATUS_EFFECT_Healing",
	"STATUS_EFFECT_MAX"
})

enum.MakeEnum("EPlayerEventMessage", {
	"PEM_KilledChampion",
	"PEM_SkillKill",
	"PEM_KilledEnemy",
	"PEM_KillStreak",
	"PEM_ChallengeCompleted",
	"PEM_JoinedGame",
	"PEM_SeatSwap",
	"PEM_VehicleCatchAir",
	"PEM_KilledEnemyVehicle",
	"PEM_VehicleLowHealth",
	"PEM_VehicleFlipped",
	"PEM_RanOverEnemy",
	"PEM_VehicleSpawn",
	"PEM_CriticalHitKill",
	"PEM_CriticalHit",
	"PEM_OutOfAmmo",
	"PEM_Reloading",
	"PEM_RareWeaponEquipped",
	"PEM_PlayerIdle",
	"PEM_PlayerDown",
	"PEM_Death",
	"PEM_DeathByFire",
	"PEM_DeathByShock",
	"PEM_EnemyDamaged",
	"PEM_EnemyDamagedCritical",
	"PEM_EnemyShieldDown",
	"PEM_AchievedSecondWind",
	"PEM_RevivingPlayer",
	"PEM_MissionTurnedIn",
	"PEM_IncomingChampion",
	"PEM_MapOpen",
	"PEM_SkillPointToSpend",
	"PEM_CompareItems",
	"PEM_TravelBlocked",
	"PEM_MAX"
})

enum.MakeEnum("EGearLikenessSource", {
	"LOOKLIKE_Source",
	"LOOKLIKE_MainWeapon",
	"LOOKLIKE_OffhandWeapon",
	"LOOKLIKE_EquippedShield",
	"LOOKLIKE_EquippedGrenadeMod",
	"LOOKLIKE_EquippedClassMod",
	"LOOKLIKE_HolsteredSmallWeapon",
	"LOOKLIKE_HolsteredMediumWeapon",
	"LOOKLIKE_HolsteredLargeWeapon",
	"LOOKLIKE_HolsteredExtraLargeWeapon",
	"LOOKLIKE_MAX"
})

enum.MakeEnum("EUsabilityType", {
	"UT_Primary",
	"UT_Secondary",
	"UT_MAX"
})

enum.MakeEnum("EShopType", {
	"SType_Weapons",
	"SType_Items",
	"SType_Health",
	"SType_BlackMarket",
	"SType_MAX"
})

enum.MakeEnum("EShopItemStatus", {
	"SIS_ItemCanBePurchased",
	"SIS_NotEnoughRoomForItem",
	"SIS_PlayerCannotAffordItem",
	"SIS_PlayerCannotUseItem",
	"SIS_InvalidItem",
	"SIS_MAX"
})

enum.MakeEnum("ETransactionStatus", {
	"TS_TransactionInProgress",
	"TS_TransactionComplete",
	"TS_TransactionFailed",
	"TS_MAX"
})

enum.MakeEnum("ESecondWindReason", {
	"ESECONDWIND_None",
	"ESECONDWIND_KilledEnemy",
	"ESECONDWIND_LeveledUp",
	"ESECONDWIND_PartnerRevived",
	"ESECONDWIND_Skill_Res",
	"ESECONDWIND_AutoRevive",
	"ESECONDWIND_UNUSED",
	"ESECONDWIND_UNUSED1",
	"ESECONDWIND_UNUSED2",
	"ESECONDWIND_UNUSED3",
	"ESECONDWIND_UNUSED4",
	"ESECONDWIND_ReasonExtension",
	"ESECONDWIND_ReasonExtension1",
	"ESECONDWIND_ReasonExtension2",
	"ESECONDWIND_ReasonExtension3",
	"ESECONDWIND_ReasonExtension4",
	"ESECONDWIND_MAX"
})

enum.MakeEnum("EResurrectReason", {
	"ERR_Unknown",
	"ERR_IDied",
	"ERR_OtherDied",
	"ERR_FellOutOfWorld",
	"ERR_LDRes",
	"ERR_Gibbed",
	"ERR_OutsideWorldBounds",
	"ERR_LevelTravel",
	"ERR_MAX"
})

enum.MakeEnum("EInjuredDeadState", {
	"INJUREDDEAD_None",
	"INJUREDDEAD_Start",
	"INJUREDDEAD_StartCausePlayerDeath",
	"INJUREDDEAD_StartKillVolume",
	"INJUREDDEAD_InitRagdoll",
	"INJUREDDEAD_MAX"
})

enum.MakeEnum("EInjuredStage", {
	"INJURED_Not",
	"INJURED_Injured",
	"INJURED_Targeted",
	"INJURED_MostlyDead",
	"INJURED_MAX"
})

enum.MakeEnum("EBodyWeaponActionPosture", {
	"BWAP_All",
	"BWAP_Standing",
	"BWAP_Crouched",
	"BWAP_Injured",
	"BWAP_MAX"
})

enum.MakeEnum("EBodyWeaponAction", {
	"BWA_Fire",
	"BWA_FireRecoil",
	"BWA_Melee",
	"BWA_Reload",
	"BWA_Equip",
	"BWA_PutDown",
	"BWA_PutDownSwap",
	"BWA_ThrowGrenade",
	"BWA_GrabEquip",
	"BWA_MeleeSelf",
	"BWA_MAX"
})

enum.MakeEnum("EWeaponVisibleAmmoState", {
	"VISIBLE_AMMO_STATE_Default",
	"VISIBLE_AMMO_STATE_PendingReload",
	"VISIBLE_AMMO_STATE_MAX"
})

enum.MakeEnum("EWeaponHand", {
	"HAND_Right",
	"HAND_Left",
	"HAND_Centered",
	"HAND_Hidden",
	"HAND_MAX"
})

enum.MakeEnum("EWeaponBoneControllerType", {
	"WEAP_BONE_CONTROL_General",
	"WEAP_BONE_CONTROL_BarrelSpinner",
	"WEAP_BONE_CONTROL_MagazineSpinner",
	"WEAP_BONE_CONTROL_Flap",
	"WEAP_BONE_CONTROL_MAX"
})

enum.MakeEnum("EInterpMode", {
	"EIM_None",
	"EIM_Linear",
	"EIM_NonLinear",
	"EIM_MAX"
})

enum.MakeEnum("EGoreMode", {
	"GORE_Full",
	"GORE_None",
	"GORE_MAX"
})

enum.MakeEnum("EHolsteredGearState", {
	"HGS_None",
	"HGS_PendingFadeIn",
	"HGS_FadingIn",
	"HGS_FadingOut",
	"HGS_MAX"
})

enum.MakeEnum("EExperienceType", {
	"EXPERIENCE_Generic",
	"EXPERIENCE_Combat",
	"EXPERIENCE_Mission",
	"EXPERIENCE_MAX"
})

enum.MakeEnum("ESkillKillEvents", {
	"SKE_KilledEnemy",
	"SKE_KilledByEnemy",
	"SKE_MAX"
})

enum.MakeEnum("ESkillKilledEventType", {
	"SKEVT_KilledEnemy",
	"SKEVT_KilledFriendly",
	"SKEVT_KilledNeutral",
	"SKEVT_KilledByEnemy",
	"SKEVT_KilledByFriendly",
	"SKEVT_KilledByNeutral",
	"SKEVT_MAX"
})

enum.MakeEnum("ESkillDamageEvents", {
	"SDE_DamagedEnemy",
	"SDE_DamagedFriendly",
	"SDE_DamagedByEnemy",
	"SDE_DamagedByFriendly",
	"SDE_DamagedNeutral_Deprecated",
	"SDE_DamagedByNeutral_Deprecated",
	"SDE_DamagedUnawareEnemy",
	"SDE_DamagedEnemyWithMeleeFromBehind",
	"SDE_DamagedEnemyExposeDamageSurfaceType",
	"SDE_MAX"
})

enum.MakeEnum("ERequiredActionSkillState", {
	"ERASS_Ignore",
	"ERASS_MustBeRunning",
	"ERASS_MustNotBeRunning",
	"ERASS_MAX"
})

enum.MakeEnum("ETrackedSkillType", {
	"TRACKEDSKILL_Untracked",
	"TRACKEDSKILL_Kill",
	"TRACKEDSKILL_Triggered",
	"TRACKEDSKILL_Respond",
	"TRACKEDSKILL_ConsumableBuff",
	"TRACKEDSKILL_MeleeOverride",
	"TRACKEDSKILL_MAX"
})

enum.MakeEnum("ESkillEventType", {
	"SEVT_SkillActivated",
	"SEVT_SkillDeactivated",
	"SEVT_SkillPaused",
	"SEVT_SkillResumed",
	"SEVT_DamagedEnemy",
	"SEVT_DamagedFriendly",
	"SEVT_DamagedNeutral",
	"SEVT_DamagedByEnemy",
	"SEVT_DamagedByFriendly",
	"SEVT_DamagedByNeutral",
	"SEVT_ShieldDepletedAfterBeingFull",
	"SEVT_KilledEnemy",
	"SEVT_KilledFriendly",
	"SEVT_KilledNeutral",
	"SEVT_KilledByEnemy",
	"SEVT_KilledByFriendly",
	"SEVT_KilledByNeutral",
	"SEVT_WeaponZoomed",
	"SEVT_WeaponUnzoomed",
	"SEVT_WeaponShotMissed",
	"SEVT_WeaponFired",
	"SEVT_WeaponReloaded",
	"SEVT_PlayerDeathAverted",
	"SEVT_ActionSkillCooldownAbilityActivated",
	"SEVT_ActionSkillActiveAbilityActivated",
	"SEVT_DamagedUnawareEnemy",
	"SEVT_DamagedEnemyWithMeleeFromBehind",
	"SEVT_MeleeOverrideSkillActivated",
	"SEVT_ThrowGrenadeOverrideSkillActivated",
	"SEVT_WeaponSwapped",
	"SEVT_PlayerRecoveredFromDownState",
	"SEVT_ShieldDepleted",
	"SEVT_ShieldFull",
	"SEVT_WeaponStartReload",
	"SEVT_PlayerResurrected",
	"SEVT_WeaponManuallyReloaded",
	"SEVT_AppliedStatusEffectToEnemy",
	"SEVT_DownStateBegin",
	"SEVT_DownStateEnd",
	"SEVT_BledOut",
	"SEVT_OnStatusEffectTypeBegin",
	"SEVT_OnStatusEffectTypeEnd",
	"SEVT_MeleeAttack",
	"SEVT_MAX"
})

enum.MakeEnum("ESkillEventGradeType", {
	"SEVG_PlayerSkillGrade",
	"SEVG_HardcodedGrade",
	"SEVG_SameAsThisSkillGrade",
	"SEVG_MAX"
})

enum.MakeEnum("ESkillDamagedEventType", {
	"SDEVT_DamagedEnemy",
	"SDEVT_DamagedFriendly",
	"SDEVT_DamagedNeutral",
	"SDEVT_DamagedByEnemy",
	"SDEVT_DamagedByFriendly",
	"SDEVT_DamagedByNeutral",
	"SDEVT_ShieldDepletedAfterBeingFull",
	"SDEVT_MAX"
})

enum.MakeEnum("ESkillState", {
	"SKILL_Deactivated",
	"SKILL_Active",
	"SKILL_Paused",
	"SKILL_MAX"
})

enum.MakeEnum("ETargetCriteria", {
	"CRITERIA_None",
	"CRITERIA_Nearest",
	"CRITERIA_MAX"
})

enum.MakeEnum("EEffectTarget", {
	"TARGET_None",
	"TARGET_Self",
	"TARGET_Allies",
	"TARGET_Enemies",
	"TARGET_All",
	"TARGET_Pets",
	"TARGET_MAX"
})

enum.MakeEnum("EEffectDurationType", {
	"DURATION_Infinite",
	"DURATION_Timed",
	"DURATION_MAX"
})

enum.MakeEnum("ESkillType", {
	"SKILL_TYPE_Passive",
	"SKILL_TYPE_Action",
	"SKILL_TYPE_ActionAugment",
	"SKILL_TYPE_Kill",
	"SKILL_TYPE_Proficiency",
	"SKILL_TYPE_MAX"
})

enum.MakeEnum("ENumClassPlayers", {
	"NCP_OnePlayer",
	"NCP_TwoPlayers",
	"NCP_ThreePlayers",
	"NCP_FourPlayers",
	"NCP_MAX"
})

enum.MakeEnum("EUILayout", {
	"UILAYOUT_16x9",
	"UILAYOUT_16x91",
	"UILAYOUT_16x92",
	"UILAYOUT_4x3",
	"UILAYOUT_4x31",
	"UILAYOUT_4x32",
	"UILAYOUT_MAX"
})

enum.MakeEnum("EPlayerClassAchievementUnlockType", {
	"PCAUT_PetKills",
	"PCAUT_TimeSpentInActionSkill",
	"PCAUT_TargetedActionSkillImpacts",
	"PCAUT_MAX"
})

enum.MakeEnum("EMissionFanfareType", {
	"EMFT_NewMissionAccepted",
	"EMFT_NewMissionActive",
	"EMFT_NewPlotMissionActive",
	"EMFT_ObjectiveIncremented",
	"EMFT_ObjectiveComplete",
	"EMFT_ObjectiveCleared",
	"EMFT_MissionReadyToTurnIn",
	"EMFT_MissionCompleted",
	"EMFT_PingNonTrackedOnly",
	"EMFT_MAX"
})

enum.MakeEnum("EMissionSortType", {
	"MSORT_Region",
	"MSORT_Status",
	"MSORT_Difficulty",
	"MSORT_Chronological",
	"MSORT_Expansion",
	"MSORT_MAX"
})

enum.MakeEnum("EPresenceModeContext", {
	"EPMC_Any",
	"EPMC_OnFoot",
	"EPMC_Driving",
	"EPMC_Dueling",
	"EPMC_OpenSlots",
	"EPMC_MAX"
})

enum.MakeEnum("EAdjustModifierMode", {
	"WILLOW_ADJUST_InitialAddModifer",
	"WILLOW_ADJUST_AddModifer",
	"WILLOW_ADJUST_RemoveModifer",
	"WILLOW_ADJUST_MAX"
})

enum.MakeEnum("PawnListSource", {
	"PAWN_Teammate",
	"PAWN_Enemy",
	"PAWN_MAX"
})

enum.MakeEnum("EChallengeType", {
	"ECT_Stat",
	"ECT_LevelObject",
	"ECT_DesignerTriggered",
	"ECT_MAX"
})

enum.MakeEnum("EWillowInviteType", {
	"WIT_InviteRequired",
	"WIT_FriendsOnly",
	"WIT_Public",
	"WIT_MAX"
})

enum.MakeEnum("EMarketplaceOfferType", {
	"OFFER_CATEGORY_SeasonPass",
	"OFFER_CATEGORY_CompatibilityPack",
	"OFFER_CATEGORY_AddOn",
	"OFFER_CATEGORY_Misc",
	"OFFER_CATEGORY_MAX"
})

enum.MakeEnum("EDlcInstallState", {
	"DLC_INSTALL_None",
	"DLC_INSTALL_InstallingBundles",
	"DLC_INSTALL_LoadingAsyncPackages",
	"DLC_INSTALL_InstallingContent",
	"DLC_INSTALL_InstallingOfferContent",
	"DLC_INSTALL_InstallComplete",
	"DLC_INSTALL_MAX"
})

enum.MakeEnum("MovieFittingStyle", {
	"MFS_FitWithoutCropping",
	"MFS_FitWithCropping",
	"MFS_FitHorizontal",
	"MFS_FitVertical",
	"MFS_MAX"
})

enum.MakeEnum("ETextListMoveDir", {
	"TLMD_Up",
	"TLMD_Down",
	"TLMD_PageUp",
	"TLMD_PageDown",
	"TLMD_First",
	"TLMD_Last",
	"TLMD_PreviousCategory",
	"TLMD_NextCategory",
	"TLMD_MAX"
})

enum.MakeEnum("EArrayKind", {
	"EAK_Source",
	"EAK_Categories",
	"EAK_InvalidEntry",
	"EAK_Unloadable",
	"EAK_MAX"
})

enum.MakeEnum("ECategoryAssignmentType", {
	"CAType_None",
	"CAType_InventoryType",
	"CAType_Manufacturers",
	"CAType_WeaponType",
	"CAType_ClassRequirement",
	"CAType_PersonalOrShop",
	"CAType_Equipped",
	"CAType_MAX"
})

enum.MakeEnum("EInventorySortType", {
	"IST_EquippedThenMajorTypeThenRarityThenSubtype",
	"IST_MajorTypeThenSubtypeThenRarity",
	"IST_MajorTypeThenRarityThenSubtype",
	"IST_Manufacturer",
	"IST_ClassRequirementThenRarity",
	"IST_Value",
	"IST_MAX"
})

enum.MakeEnum("EInventoryFilterType", {
	"IFT_NoFilter",
	"IFT_FilterUncomparable",
	"IFT_FilterWeapons",
	"IFT_FilterNonWeapons",
	"IFT_FilterNonShields",
	"IFT_FilterNonGrenadeMods",
	"IFT_FilterNonClassMods",
	"IFT_FilterNonUpgrades",
	"IFT_FilterNonHealth",
	"IFT_FilterNonGenerics",
	"IFT_MAX"
})

enum.MakeEnum("EInventoryListType", {
	"ELT_Weapon",
	"ELT_Shield",
	"ELT_GrenadeMod",
	"ELT_ClassMod",
	"ELT_Artifact",
	"ELT_None",
	"ELT_MAX"
})

enum.MakeEnum("PanelPosition", {
	"PP_Focused",
	"PP_Unfocused",
	"PP_Compare",
	"PP_MAX"
})

enum.MakeEnum("EStorageType", {
	"ST_BankType",
	"ST_StashType",
	"ST_MAX"
})

enum.MakeEnum("EInventoryType", {
	"IT_ItemType",
	"IT_WeaponType",
	"IT_MAX"
})

enum.MakeEnum("EFollowAction", {
	"Follow_StartFollow",
	"Follow_StopFollow",
	"Follow_MAX"
})

enum.MakeEnum("EBinaryBooleanOperation", {
	"BOOLMATH_NoChange",
	"BOOLMATH_And",
	"BOOLMATH_Or",
	"BOOLMATH_Xor",
	"BOOLMATH_Not",
	"BOOLMATH_MAX"
})

enum.MakeEnum("EDamageTarget", {
	"DT_BehaviorContext",
	"DT_OtherEventParticipant",
	"DT_CustomTarget",
	"DT_RadiusAroundContext",
	"DT_MAX"
})

enum.MakeEnum("EEnvironmentTagAction", {
	"EnviroTagAction_Add",
	"EnviroTagAction_Remove",
	"EnviroTagAction_MAX"
})

enum.MakeEnum("ECharmAction", {
	"CharmAction_Charm",
	"CharmAction_Uncharm",
	"CharmAction_MAX"
})

enum.MakeEnum("ECombatPerchAction", {
	"ECPA_Attach",
	"ECPA_Detach",
	"ECPA_MAX"
})

enum.MakeEnum("ECompareObjectOutputLinkIds", {
	"OUTPUT_Same",
	"OUTPUT_Different",
	"OUTPUT_MAX"
})

enum.MakeEnum("ECraneAction", {
	"ECA_FindDummy",
	"ECA_AttachDummy",
	"ECA_DetachDummy",
	"ECA_FollowDummy",
	"ECA_DontDoShit",
	"ECA_MAX"
})

enum.MakeEnum("EDamageArea", {
	"EDA_Enable",
	"EDA_Disable",
	"EDA_Toggle",
	"EDA_MAX"
})

enum.MakeEnum("EDamageClassSwitchValues", {
	"DCSV_Player",
	"DCSV_Pawn",
	"DCSV_Vehicle",
	"DCSV_InteractiveObject",
	"DCSV_MAX"
})

enum.MakeEnum("EDamageSourceSwitchValues", {
	"DSSV_Bullet",
	"DSSV_Grenade",
	"DSSV_Melee",
	"DSSV_Rocket",
	"DSSV_Skill",
	"DSSV_StatusEffect",
	"DSSV_VehicleRanInto",
	"DSSV_VehicleRanOver",
	"DSSV_Crushed",
	"DSSV_Fell",
	"DSSV_Pistol",
	"DSSV_SubMachineGun",
	"DSSV_Shotgun",
	"DSSV_MachineGun",
	"DSSV_Sniper",
	"DSSV_DetonatedCrate",
	"DSSV_MAX"
})

enum.MakeEnum("EDamageSurfaceTypeSwitchValues", {
	"DSTSV_Generic",
	"DSTSV_Flesh",
	"DSTSV_Armor",
	"DSTSV_Shield",
	"DSTSV_MAX"
})

enum.MakeEnum("EFireShotOutputLinks", {
	"FSOL_Complete",
	"FSOL_FiredShot",
	"FSOL_MAX"
})

enum.MakeEnum("EHasMissionsOutputLinkIds", {
	"OUTPUT_HasMissions",
	"OUTPUT_NoMissions",
	"OUTPUT_MAX"
})

enum.MakeEnum("EBinaryMathOperation", {
	"BINARYMATH_Add",
	"BINARYMATH_Sub",
	"BINARYMATH_Mul",
	"BINARYMATH_Div",
	"BINARYMATH_Pow",
	"BINARYMATH_Rand",
	"BINARYMATH_Avg",
	"BINARYMATH_Min",
	"BINARYMATH_Maximum",
	"BINARYMATH_NoChange",
	"BINARYMATH_MAX"
})

enum.MakeEnum("ECompareObjectOutputLinkIds", {
	"OUTPUT_IsPlayer",
	"OUTPUT_NotPlayer",
	"OUTPUT_MAX"
})

enum.MakeEnum("ECompareObjectOutputLinkIds", {
	"OUTPUT_IsVehicle",
	"OUTPUT_NotVehicle",
	"OUTPUT_MAX"
})

enum.MakeEnum("ELeaderType", {
	"ELT_Target",
	"ELT_Formation",
	"ELT_MAX"
})

enum.MakeEnum("ELeaderAction", {
	"ELA_Set",
	"ELA_Remove",
	"ELA_MAX"
})

enum.MakeEnum("ENetworkRoleSwitchValues", {
	"NRS_Server",
	"NRS_Client",
	"NRS_MAX"
})

enum.MakeEnum("EOpinionSwitchLinkIds", {
	"OUTPUT_Enemy",
	"OUTPUT_Neutral",
	"OUTPUT_Friendly",
	"OUTPUT_MAX"
})

enum.MakeEnum("EPostProcessChainAction", {
	"PPCA_PushChain",
	"PPCA_PopChain",
	"PPCA_MAX"
})

enum.MakeEnum("EDayNightCycleValues", {
	"DNCV_Daytime",
	"DNCV_Nighttime",
	"DNCV_MAX"
})

enum.MakeEnum("ERadarIconAction", {
	"RIA_Add",
	"RIA_Remove",
	"RIA_MAX"
})

enum.MakeEnum("EScreenParticleAction", {
	"SPA_Show",
	"SPA_ShowAndHideWhenFinished",
	"SPA_Hide",
	"SPA_HideButAllowToFinishFirst",
	"SPA_MAX"
})

enum.MakeEnum("ESetLookAtSpeedAction", {
	"ESLASA_SetSpeed",
	"ESLASA_SetDefault",
	"ESLASA_MAX"
})

enum.MakeEnum("EStanceSetType", {
	"StanceSet_Set",
	"StanceSet_Clear",
	"StanceSet_MAX"
})

enum.MakeEnum("SpawnLocationRotationInheritanceType", {
	"SLRIT_Context",
	"SLRIT_Attachment",
	"SLRIT_Self",
	"SLRIT_MAX"
})

enum.MakeEnum("ESpawnAroundPointBasis", {
	"SPAWNAROUNDPOINTBASIS_SpawnPoint",
	"SPAWNAROUNDPOINTBASIS_WorldSpace",
	"SPAWNAROUNDPOINTBASIS_CustomLocation",
	"SPAWNAROUNDPOINTBASIS_ContextActor",
	"SPAWNAROUNDPOINTBASIS_MAX"
})

enum.MakeEnum("ESpawnLootAtPointsBasis", {
	"SPAWNATPOINTSBASIS_WorldSpace",
	"SPAWNATPOINTSBASIS_SpawnPoint",
	"SPAWNATPOINTSBASIS_ContextActor",
	"SPAWNATPOINTSBASIS_MAX"
})

enum.MakeEnum("ESpawnProjectileOutputLinks", {
	"SPOL_Complete",
	"SPOL_SpawnedProjectile",
	"SPOL_MAX"
})

enum.MakeEnum("ESpawnDistributionType", {
	"SPSDT_Cone",
	"SPSDT_Arc",
	"SPSDT_VerticalArc",
	"SPSDT_MAX"
})

enum.MakeEnum("EProjectileSelectionBehavior", {
	"PROJECTILESELECT_UseSpecified",
	"PROJECTILESELECT_UseCurrent",
	"PROJECTILESELECT_MAX"
})

enum.MakeEnum("EStatusEffectSwitchValues", {
	"OUTPUT_None",
	"OUTPUT_Ignite",
	"OUTPUT_Corrosive",
	"OUTPUT_Shock",
	"OUTPUT_Amp",
	"OUTPUT_Slow",
	"OUTPUT_Healing",
	"OUTPUT_MAX"
})

enum.MakeEnum("EObstacleToggle", {
	"ObstacleToggle_TurnOn",
	"ObstacleToggle_TurnOff",
	"ObstacleToggle_Toggle",
	"ObstacleToggle_MAX"
})

enum.MakeEnum("EVectorMathOperation", {
	"VECTORMATH_NoChange",
	"VECTORMATH_Add",
	"VECTORMATH_Sub",
	"VECTORMATH_Mul",
	"VECTORMATH_Div",
	"VECTORMATH_RandomNormal",
	"VECTORMATH_RandomCone",
	"VECTORMATH_Projection",
	"VECTORMATH_NormalizeA",
	"VECTORMATH_Cross",
	"VECTORMATH_ToRotator",
	"VECTORMATH_FromRotator",
	"VECTORMATH_Dot",
	"VECTORMATH_AX",
	"VECTORMATH_AY",
	"VECTORMATH_AZ",
	"VECTORMATH_MAX"
})

enum.MakeEnum("EWeaponGlowEffectAction", {
	"GLOW_ACTION_Play",
	"GLOW_ACTION_Stop",
	"GLOW_ACTION_StopAny",
	"GLOW_ACTION_MAX"
})

enum.MakeEnum("EBehaviorVolumeAction", {
	"EBVA_Entry",
	"EBVA_Exit",
	"EBVA_Shoot",
	"EBVA_MAX"
})

enum.MakeEnum("EChallengeFeedback", {
	"CHAL_FEEDBACK_Completed",
	"CHAL_FEEDBACK_Received",
	"CHAL_FEEDBACK_MAX"
})

enum.MakeEnum("EChallengePanelSortMode", {
	"ECPSM_Category",
	"ECPSM_LevelCompletion",
	"ECPSM_Max"
})

enum.MakeEnum("EChallengePanel", {
	"ECP_Badass",
	"ECP_Challenges",
	"ECP_MAX"
})

enum.MakeEnum("EAIVehicleSeatPosition", {
	"VSEAT_None",
	"VSEAT_Front",
	"VSEAT_Rear",
	"VSEAT_Right",
	"VSEAT_Left",
	"VSEAT_MAX"
})

enum.MakeEnum("EVehicleSide", {
	"VSIDE_Left",
	"VSIDE_Right",
	"VSIDE_Front",
	"VSIDE_Back",
	"VSIDE_MAX"
})

enum.MakeEnum("EOccupantDamageTransfer", {
	"VEHDMGTRANS_None",
	"VEHDMGTRANS_Transfer",
	"VEHDMGTRANS_MAX"
})

enum.MakeEnum("ESeatDamageRules", {
	"SDRULES_OccupantInvincible",
	"SDRULES_PlayerOccupantInvincible",
	"SDRULES_AIOccupantInvincible",
	"SDRULES_OccupantTakesDamage",
	"SDRULES_MAX"
})

enum.MakeEnum("EPartReplacementMode", {
	"EPRM_Additive",
	"EPRM_Selective",
	"EPRM_Complete",
	"EPRM_MAX"
})

enum.MakeEnum("EClassModPartType", {
	"CLASSMOD_PART_Body",
	"CLASSMOD_PART_LeftSide",
	"CLASSMOD_PART_RightSide",
	"CLASSMOD_PART_Material",
	"CLASSMOD_PART_Prefix",
	"CLASSMOD_PART_Title",
	"CLASSMOD_PART_MAX"
})

enum.MakeEnum("ECombatMusicManagerState", {
	"CMMS_Playing",
	"CMMS_VolumeFading",
	"CMMS_Idle",
	"CMMS_MAX"
})

enum.MakeEnum("ECoordinatedParticleScaleMode", {
	"CPSM_None",
	"CPSM_LargestAxis",
	"CPSM_SmallestAxis",
	"CPSM_HorizontalAxis",
	"CPSM_VerticalAxis",
	"CPSM_EachAxis",
	"CPSM_MAX"
})

enum.MakeEnum("EMedicBeamState", {
	"MedicBeam_Inactive",
	"MedicBeam_Active",
	"MedicBeam_Blocked",
	"MedicBeam_MAX"
})

enum.MakeEnum("EDenStat", {
	"DenStat_None",
	"DenStat_Injured",
	"DenStat_OnFire",
	"DenStat_Corrosive",
	"DenStat_Shocked",
	"DenStat_Slagged",
	"DenStat_Slowed",
	"DenStat_Healing",
	"DenStat_MAX"
})

enum.MakeEnum("EStaggerState", {
	"ESTAGGER_Staggered",
	"ESTAGGER_Unstaggering",
	"ESTAGGER_BlendAnimStart",
	"ESTAGGER_BlendAnimEnd",
	"ESTAGGER_MAX"
})

enum.MakeEnum("EDesignerAtttributeScope", {
	"DASCOPE_Global",
	"DASCOPE_Local",
	"DASCOPE_MAX"
})

enum.MakeEnum("EGamerPic", {
	"GAMERPIC_Min",
	"GAMERPIC_MAX"
})

enum.MakeEnum("EDeveloperPerksPlatforms", {
	"DPP_PC",
	"DPP",
	"DPP_PS3",
	"DPP_Any",
	"DPP_MAX"
})

enum.MakeEnum("EFastTravelAccessibilityTime", {
	"FTAT_Always",
	"FTAT_Halloween",
	"FTAT_Thanksgiving",
	"FTAT_Christmas",
	"FTAT_MAX"
})

enum.MakeEnum("ELocationMissionStatus", {
	"LMS_ReadyToTurnIn",
	"LMS_New",
	"LMS_InProgress",
	"LMS_InProgressStory",
	"LMS_AndMuchMore",
	"LMS_Invalid",
	"LMS_MAX"
})

enum.MakeEnum("EWillowWeaponFireType", {
	"EWWFT_Bullet",
	"EWWFT_Beam",
	"EWWFT_Rocket",
	"EWWFT_HitScan",
	"EWWFT_MAX"
})

enum.MakeEnum("ELightBeamLock", {
	"LBL_Never",
	"LBL_Always",
	"LBL_LockOn",
	"LBL_MAX"
})

enum.MakeEnum("EMatchmakingState", {
	"MMS_Inactive",
	"MMS_Searching1",
	"MMS_Searching2",
	"MMS_Searching3",
	"MMS_MatchFound",
	"MMS_NoMatchFound",
	"MMS_MAX"
})

enum.MakeEnum("EStartGameState", {
	"SGS_None",
	"SGS_IntroMovie",
	"SGS_CharacterSelect",
	"SGS_WaitingForPlayerPawns",
	"SGS_Started",
	"SGS_MAX"
})

enum.MakeEnum("EGlobalAttributes", {
	"GATTR_ExperiencePointTestLevel",
	"GATTR_BadassTokenTestRank",
	"GATTR_MAX"
})

enum.MakeEnum("EGrenadeModPartType", {
	"GRENADEMOD_PART_Body",
	"GRENADEMOD_PART_Delivery",
	"GRENADEMOD_PART_Trigger",
	"GRENADEMOD_PART_Accessory",
	"GRENADEMOD_PART_Material",
	"GRENADEMOD_PART_Prefix",
	"GRENADEMOD_PART_Title",
	"GRENADEMOD_PART_Property1",
	"GRENADEMOD_PART_Property2",
	"GRENADEMOD_PART_Property3",
	"GRENADEMOD_PART_Property4",
	"GRENADEMOD_PART_MAX"
})

enum.MakeEnum("ECrosshairColor", {
	"ECC_None",
	"ECC_White",
	"ECC_Red",
	"ECC_Green",
	"ECC_MAX"
})

enum.MakeEnum("EMissionWidgetMessageType", {
	"EMWT_None",
	"EMWT_Init",
	"EMWT_SetMission",
	"EMWT_AddObjective",
	"EMWT_RemoveObjective",
	"EMWT_SwapInObjective",
	"EMWT_SwapOutObjective",
	"EMWT_CompleteObjective",
	"EMWT_ClearObjective",
	"EMWT_UpdateObjectiveCount",
	"EMWT_EnableTurnIn",
	"EMWT_EnableOr",
	"EMWT_EnableFailed",
	"EMWT_EnableTimer",
	"EMWT_TickTimer",
	"EMWT_EnableDefense",
	"EMWT_TickDefense",
	"EMWT_FlyingCheckmark",
	"EMWT_MAX"
})

enum.MakeEnum("EMissionWidgetMessageCategory", {
	"EMWC_None",
	"EMWC_Init",
	"EMWC_PreComplete",
	"EMWC_Complete",
	"EMWC_Remove",
	"EMWC_Add",
	"EMWC_MAX"
})

enum.MakeEnum("EPlayerIconState", {
	"EPIS_Normal",
	"EPIS_Injured",
	"EPIS_Reviving",
	"EPIS_MAX"
})

enum.MakeEnum("ETopStatArrow", {
	"ETSA_Blank",
	"ETSA_Up",
	"ETSA_Down",
	"ETSA_Same",
	"ETSA_MAX"
})

enum.MakeEnum("EInputActionEvent", {
	"INPUT_ACTION_Begin",
	"INPUT_ACTION_End",
	"INPUT_ACTION_MAX"
})

enum.MakeEnum("EAxisParameter", {
	"AXIS_PARAM_aBaseX",
	"AXIS_PARAM_aBaseY",
	"AXIS_PARAM_aBaseZ",
	"AXIS_PARAM_aMouseX",
	"AXIS_PARAM_aMouseY",
	"AXIS_PARAM_aForward",
	"AXIS_PARAM_aTurn",
	"AXIS_PARAM_aStrafe",
	"AXIS_PARAM_aUp",
	"AXIS_PARAM_aLookUp",
	"AXIS_PARAM_aPS3AccelX",
	"AXIS_PARAM_aPS3AccelY",
	"AXIS_PARAM_aPS3AccelZ",
	"AXIS_PARAM_aPS3Gyro",
	"AXIS_PARAM_MAX"
})

enum.MakeEnum("EProjectilePayloadType", {
	"PPT_Standard",
	"PPT_AreaEffect",
	"PPT_BouncingBetty",
	"PPT_MIRV",
	"PPT_Singularity",
	"PPT_TedioreReload",
	"PPT_Transfusion",
	"PPT_MAX"
})

enum.MakeEnum("EHomingTargetType", {
	"HTARGET_None",
	"HTARGET_Instigator",
	"HTARGET_ViewGuidePawn",
	"HTARGET_ViewGuideLocation",
	"HTARGET_NearestActor",
	"HTARGET_NearestFriend",
	"HTARGET_NearestFoe",
	"HTARGET_NearestFriendNotInstigator",
	"HTARGET_MAX"
})

enum.MakeEnum("ESortType", {
	"SORT_PlayerCount",
	"SORT_Name",
	"SORT_Level",
	"SORT_Mission",
	"SORT_Ping",
	"SORT_MAX"
})

enum.MakeEnum("ESortDirection", {
	"SORTDIR_Ascending",
	"SORTDIR_Descending",
	"SORTDIR_MAX"
})

enum.MakeEnum("EPhaselockState", {
	"EPLS_None",
	"EPLS_Intro",
	"EPLS_Outro",
	"EPLS_Locked",
	"EPLS_Ruin",
	"EPLS_Subsequence",
	"EPLS_MAX"
})

enum.MakeEnum("EMapChangeMessages", {
	"MAPCHANGE_None",
	"MAPCHANGE_PlayerDown",
	"MAPCHANGE_CanceledPlayerDown",
	"MAPCHANGE_PlayerInMenu",
	"MAPCHANGE_CanceledPlayerMenu",
	"MAPCHANGE_PlayerIsSaving",
	"MAPCHANGE_CanceledPlayerIsSaving",
	"MAPCHANGE_MissingDLC",
	"MAPCHANGE_Initiated",
	"MAPCHANGE_PlayerJoining",
	"MAPCHANGE_CanceledPlayerJoining",
	"MAPCHANGE_PlayerDueling",
	"MAPCHANGE_CanceledPlayerDueling",
	"MAPCHANGE_PlayerRespawn",
	"MAPCHANGE_CanceledPlayerRespawn",
	"MAPCHANGE_CountdownTimer",
	"MAPCHANGE_MAX"
})

enum.MakeEnum("ELockoutStyle", {
	"LOCKOUT_Relative",
	"LOCKOUT_NextDay",
	"LOCKOUT_NextWeek",
	"LOCKOUT_MAX"
})

enum.MakeEnum("EDefendMission", {
	"EDM_None",
	"EDM_NoFail",
	"EDM_Failable",
	"EDM_MAX"
})

enum.MakeEnum("EPopulationWaypointActorSetting", {
	"PWAS_ALL",
	"PWAS_SpawnedActors",
	"PWAS_Opportunity",
	"PWAS_OpportunityIfNoActors",
	"PWAS_MAX"
})

enum.MakeEnum("EPopulationWaypointSetting", {
	"PWS_None",
	"PWS_MissionObjective",
	"PWS_KillOverride",
	"PWS_All",
	"PWS_MAX"
})

enum.MakeEnum("EObjectivePopulationActivation", {
	"OPA_External",
	"OPA_AlwaysActive",
	"OPA_ActiveWhenObjectiveActive",
	"OPA_ActiveWhenObjectiveNotComplete",
	"OPA_ActiveWhenObjectiveNotInactive",
	"OPA_ActiveWhenObjectiveComplete",
	"OPA_MAX"
})

enum.MakeEnum("EObjectiveUpdateSetting", {
	"OUS_None",
	"OUS_MissionObjectiveOnDeath",
	"OUS_OverrideObjectiveOnDeath",
	"OUS_MissionAndOverrideObjectiveOnDeath",
	"OUS_MissionObjectiveOnStatAdd",
	"OUS_MissionObjectiveOnStatAddRemove",
	"OUS_OverrideObjectiveOnStatAdd",
	"OUS_OverrideObjectiveOnStatAddRemove",
	"OUS_MissionObjectiveOnAllDead",
	"OUS_OverrideObjectiveOnAllDead",
	"OUS_MissionAndOverrideObjectiveOnAllDead",
	"OUS_MAX"
})

enum.MakeEnum("EAdvanceTrackedMissionResult", {
	"ATMR_Success",
	"ATMR_NothingToDo",
	"ATMR_Error",
	"ATMR_DidNotAdvanceObjectiveSet",
	"ATMR_MAX"
})

enum.MakeEnum("ECameraTargetForPassenger", {
	"PASSENGERCAMTARG_SeatAnchor",
	"PASSENGERCAMTARG_PawnHead",
	"PASSENGERCAMTARG_PrevSeatAnchor",
	"PASSENGERCAMTARG_MAX"
})

enum.MakeEnum("ECameraInitialRotation", {
	"CAMROT_UseControllerRot",
	"CAMROT_UseFrameZeroRot",
	"CAMROT_MAX"
})

enum.MakeEnum("ECameraRotationThisFrame", {
	"CAMROTTHISFRAME_FreeLook",
	"CAMROTTHISFRAME_FixedView",
	"CAMROTTHISFRAME_LerpView",
	"CAMROTTHISFRAME_MAX"
})

enum.MakeEnum("EVehicleCameraLerpStyle", {
	"VCAMLERP_Linear",
	"VCAMLERP_Squared",
	"VCAMLERP_Cubed",
	"VCAMLERP_Sine",
	"VCAMLERP_MAX"
})

enum.MakeEnum("EVehicleNodeType", {
	"VEHNODE_Patrol",
	"VEHNODE_ScriptedPath",
	"VEHNODE_MAX"
})

enum.MakeEnum("EPerchAnimType", {
	"PAT_Start",
	"PAT_Idle",
	"PAT_Stop",
	"PAT_MAX"
})

enum.MakeEnum("EPreviewStyle", {
	"EPS_None",
	"EPS_Still",
	"EPS_Playing",
	"EPS_MAX"
})

enum.MakeEnum("EPhysicsJumpPreview", {
	"JumpPreview_Launch",
	"JumpPreview_Idle",
	"JumpPreview_Land",
	"JumpPreview_MAX"
})

enum.MakeEnum("EPlayerEvalAction", {
	"EVAL_ACTION_Melee",
	"EVAL_ACTION_Reload",
	"EVAL_ACTION_WeaponFire",
	"EVAL_ACTION_Grenade",
	"EVAL_ACTION_WeaponZoom",
	"EVAL_ACTION_Sprint",
	"EVAL_ACTION_Duck",
	"EVAL_ACTION_WeaponZoomIn",
	"EVAL_ACTION_MAX"
})

enum.MakeEnum("WillowVehicleRoles", {
	"WILLOWVEHICLEROLE_Driver",
	"WILLOWVEHICLEROLE_Gunner",
	"WILLOWVEHICLEROLE_SideClinger",
	"WILLOWVEHICLEROLE_MAX"
})

enum.MakeEnum("EVehicleBalanceOption", {
	"VEHICLEBALANCE_ForPlayers",
	"VEHICLEBALANCE_ForEnemyAI",
	"VEHICLEBALANCE_MAX"
})

enum.MakeEnum("ETargetAllegiance", {
	"TARGET_ALLEG_Friendly",
	"TARGET_ALLEG_Enemy",
	"TARGET_ALLEG_Any",
	"TARGET_ALLEG_MAX"
})

enum.MakeEnum("EHomingTargetChangeType", {
	"HTC_AnyTarget",
	"HTC_NewTarget",
	"HTC_LostTarget",
	"HTC_MAX"
})

enum.MakeEnum("EProjectileType", {
	"PROJECTILE_TYPE_Unknown",
	"PROJECTILE_TYPE_Frag_Grenade",
	"PROJECTILE_TYPE_Protean_Grenade",
	"PROJECTILE_TYPE_Rocket",
	"PROJECTILE_TYPE_MAX"
})

enum.MakeEnum("EProjectileOnHitOutputs", {
	"ProjectileOnHit_All",
	"ProjectileOnHit_Enemy",
	"ProjectileOnHit_Friendly",
	"ProjectileOnHit_Neutral",
	"ProjectileOnHit_MAX"
})

enum.MakeEnum("EAmmoMessageSwitch", {
	"RECEIVEDAMMO_CombatRifle",
	"RECEIVEDAMMO_SMG",
	"RECEIVEDAMMO_Revolver",
	"RECEIVEDAMMO_Repeater",
	"RECEIVEDAMMO_Shotgun",
	"RECEIVEDAMMO_SniperRifle",
	"RECEIVEDAMMO_Rocket",
	"RECEIVEDAMMO_Grenade",
	"RECEIVEDAMMO_MAX"
})

enum.MakeEnum("EExecuteSkillSequenceInput", {
	"SEQUENCE_ActivateSkill",
	"SEQUENCE_DeactivateSkill",
	"SEQUENCE_ToggleSkill",
	"SEQUENCE_MAX"
})

enum.MakeEnum("ESeqAct_MathOperation", {
	"SQAMO_Add",
	"SQAMO_Subtract",
	"SQAMO_Multiply",
	"SQAMO_Divide",
	"SQAMO_Modulus",
	"SQAMO_MAX"
})

enum.MakeEnum("EHUDElement", {
	"HUD_ResourcePool",
	"HUD_Ammo",
	"HUD_Compass",
	"HUD_Skills",
	"HUD_XP",
	"HUD_MAX"
})

enum.MakeEnum("EChoiceProbability", {
	"PROBABILITY_NoBias",
	"PROBABILITY_Rare",
	"PROBABILITY_Common",
	"PROBABILITY_MAX"
})

enum.MakeEnum("EShieldType", {
	"SHT_Absorption",
	"SHT_Booster",
	"SHT_Chimera",
	"SHT_Impact",
	"SHT_Juggernaut",
	"SHT_Nova",
	"SHT_Roid",
	"SHT_Spike",
	"SHT_Standard",
	"SHT_Custom1",
	"SHT_Custom2",
	"SHT_Custom3",
	"SHT_Custom4",
	"SHT_Custom5",
	"SHT_MAX"
})

enum.MakeEnum("EShieldPrimeMechanism", {
	"SPM_NoPrime",
	"SPM_PrimeOnFull",
	"SPM_PrimeOnEmptyAfterFullRecharge",
	"SPM_PrimeOnEmpty",
	"SPM_AlwaysPrimed",
	"SPM_PrimedWhenNotEmpty",
	"SPM_PrimedWhenNotEmptyAfterFullRecharge",
	"SPM_MAX"
})

enum.MakeEnum("EShieldPartType", {
	"SHIELD_PART_Body",
	"SHIELD_PART_Battery",
	"SHIELD_PART_Capacitor",
	"SHIELD_PART_Property1",
	"SHIELD_PART_Property2",
	"SHIELD_PART_Property3",
	"SHIELD_PART_Property4",
	"SHIELD_PART_Accessory",
	"SHIELD_PART_Material",
	"SHIELD_PART_Prefix",
	"SHIELD_PART_Title",
	"SHIELD_PART_MAX"
})

enum.MakeEnum("ESkillRunState", {
	"ESS_Running",
	"ESS_NotRunning",
	"ESS_MAX"
})

enum.MakeEnum("ESkillTreeFailureReason", {
	"eFR_NoSkillPoints",
	"eFR_SkillLocked",
	"eFR_SkillMaxed",
	"eFR_DataIssue",
	"eFR_NoFailure",
	"eFR_MAX"
})

enum.MakeEnum("ESkillIconState", {
	"eSIS_Disabled",
	"eSIS_Enabled",
	"eSIS_Partial",
	"eSIS_Maxed",
	"eSIS_MAX"
})

enum.MakeEnum("ENavDirection", {
	"EN_Up",
	"EN_Down",
	"EN_Left",
	"EN_Right",
	"EN_None",
	"EN_MAX"
})

enum.MakeEnum("EVehicleTransitionType", {
	"EVEHTRANS_Undefined",
	"EVEHTRANS_SeatEntry",
	"EVEHTRANS_SeatExit",
	"EVEHTRANS_SeatSwitch",
	"EVEHTRANS_SeatIdle",
	"EVEHTRANS_MAX"
})

enum.MakeEnum("EStanceOption", {
	"StanceOption_Active",
	"StanceOption_NotActive",
	"StanceOption_MAX"
})

enum.MakeEnum("EStatusEffectState", {
	"SEC_Active",
	"SEC_NotActive",
	"SEC_MAX"
})

enum.MakeEnum("ECellState", {
	"CELL_Selected",
	"CELL_Both",
	"CELL_Normal",
	"CELL_Highlight",
	"CELL_Locked",
	"CELL_MAX"
})

enum.MakeEnum("EInventoryPanel", {
	"EIP_Backpack",
	"EIP_Equipped",
	"EIP_MAX"
})

enum.MakeEnum("ETargetableValue", {
	"TARGETABLE_IsChampion",
	"TARGETABLE_MAX"
})

enum.MakeEnum("ETradingPanel", {
	"ETP_Backpack",
	"ETP_Offers",
	"ETP_MAX"
})

enum.MakeEnum("EGbxWeaponLock", {
	"GBXWEAPLOCK_None",
	"GBXWEAPLOCK_PaintAndHold",
	"GBXWEAPLOCK_MAX"
})

enum.MakeEnum("EBarrelSpinMode", {
	"BSM_None",
	"BSM_SpinUpToFullFireRate",
	"BSM_SpinBarrelWithEachShot",
	"BSM_MAX"
})

enum.MakeEnum("EVSSVehicleState", {
	"EVSSVS_Ready",
	"EVSSVS_Deployed",
	"EVSSVS_Occupied",
	"EVSSVS_MAX"
})

enum.MakeEnum("EVehicleSpawnStationSlot", {
	"VSS_Slot1",
	"VSS_Slot2",
	"VSS_MAX"
})

enum.MakeEnum("EVehicleCollisionType", {
	"VEHICLE_COLLIDE_World",
	"VEHICLE_COLLIDE_Enemy",
	"VEHICLE_COLLIDE_Friendly",
	"VEHICLE_COLLIDE_Neutral",
	"VEHICLE_COLLIDE_MAX"
})

enum.MakeEnum("EVehicleSpawnStationAvailability", {
	"EVSSAVAIL_Land",
	"EVSSAVAIL_Desert",
	"EVSSAVAIL_Ice",
	"EVSSAVAIL_Water",
	"EVSSAVAIL_Wheeled",
	"EVSSAVAIL_Hovercraft",
	"EVSSAVAIL_Aircraft",
	"EVSSAVAIL_Watercraft",
	"EVSSAVAIL_Sleds",
	"EVSSAVAIL_Reserved10",
	"EVSSAVAIL_Reserved11",
	"EVSSAVAIL_Reserved12",
	"EVSSAVAIL_Reserved13",
	"EVSSAVAIL_Reserved14",
	"EVSSAVAIL_Reserved15",
	"EVSSAVAIL_Reserved16",
	"EVSSAVAIL_Reserved17",
	"EVSSAVAIL_Reserved18",
	"EVSSAVAIL_Reserved19",
	"EVSSAVAIL_Reserved20",
	"EVSSAVAIL_BL2Main",
	"EVSSAVAIL_DLCOrchid",
	"EVSSAVAIL_DLC2",
	"EVSSAVAIL_DLCSage",
	"EVSSAVAIL_DLC4",
	"EVSSAVAIL_DLC5",
	"EVSSAVAIL_DLC6",
	"EVSSAVAIL_Reserved28",
	"EVSSAVAIL_Reserved29",
	"EVSSAVAIL_Reserved30",
	"EVSSAVAIL_MAX"
})

enum.MakeEnum("VehicleSeatSwapMessages", {
	"VSSM_StartAsInstigator",
	"VSSM_StartAsTarget",
	"VSSM_TargetAccepted",
	"VSSM_TargetDeclined",
	"VSSM_InstigatorCanceled",
	"VSSM_MAX"
})

enum.MakeEnum("EVSSStage", {
	"VSSSTAGE_Start",
	"VSSSTAGE_WaitingOnReplicatedData",
	"VSSSTAGE_VehicleFamilySelection",
	"VSSSTAGE_MainLogicLoop",
	"VSSSTAGE_ForcedExit",
	"VSSSTAGE_MAX"
})

enum.MakeEnum("EShopMode", {
	"SHOPMODE_Sell",
	"SHOPMODE_Buy",
	"SHOPMODE_BuyBack",
	"SHOPMODE_MAX"
})

enum.MakeEnum("EAimAnimState", {
	"AimAnimState_Idle",
	"AimAnimState_IronSights",
	"AimAnimState_MAX"
})

enum.MakeEnum("EMoveTransChannel", {
	"EMTC_Idle",
	"EMTC_Movement",
	"EMTC_Transition",
	"EMTC_MAX"
})

enum.MakeEnum("EMoveState", {
	"MOVESTATE_Idle",
	"MOVESTATE_LaunchDelay",
	"MOVESTATE_Launching",
	"MOVESTATE_Cycling",
	"MOVESTATE_Stopping",
	"MOVESTATE_MAX"
})

enum.MakeEnum("EFlashCardIndex", {
	"FCI_None",
	"FCI_Weapon",
	"FCI_Shield",
	"FCI_GrenadeMod",
	"FCI_ClassMod",
	"FCI_Item",
	"FCI_Blank",
	"FCI_Artifact",
	"FCI_MissionItem",
	"FCI_MAX"
})

enum.MakeEnum("BACK_MENU_TYPE", {
	"BACK_LOGS",
	"BACK_MAP",
	"BACK_INVENTORY",
	"BACK_SKILLS",
	"BACK_CHALLENGES",
	"BACK_MENU",
	"BACK_MAX"
})

enum.MakeEnum("EProvocationState", {
	"PROVOC_Normal",
	"PROVOC_Warning",
	"PROVOC_ImminentThreat",
	"PROVOC_MAX"
})

enum.MakeEnum("EFlightMode", {
	"FlightMode_None",
	"FlightMode_Flying",
	"FlightMode_Stuck",
	"FlightMode_Landing",
	"FlightMode_Walking",
	"FlightMode_MAX"
})

enum.MakeEnum("PathFixMode", {
	"PathFix_None",
	"PathFix_Waiting",
	"PathFix_Moving",
	"PathFix_Lerping",
	"PathFix_Failed",
	"PathFix_MAX"
})

enum.MakeEnum("ECollisionPrimitive", {
	"CP_StaticMesh",
	"CP_Cylinder",
	"CP_Sphere",
	"CP_MAX"
})

enum.MakeEnum("EMissionTrackedState", {
	"MISSION_TRACKED_Either",
	"MISSION_TRACKED_Tracked",
	"MISSION_TRACKED_Untracked",
	"MISSION_TRACKED_MAX"
})

enum.MakeEnum("ERandSeqType", {
	"RST_Random",
	"RST_Sequential",
	"RST_Shuffle",
	"RST_MAX"
})

enum.MakeEnum("EchoPortraitType", {
	"ECHO_PORTRAIT_Scaleform",
	"ECHO_PORTRAIT_Video",
	"ECHO_PORTRAIT_MAX"
})

enum.MakeEnum("ElevatorButtonUsage", {
	"EBU_Cycle",
	"EBU_Call",
	"EBU_Previous",
	"EBU_Next",
	"EBU_MAX"
})

enum.MakeEnum("EElevButtonState", {
	"BS_Enabled",
	"BS_Disabled",
	"BS_InUse",
	"BS_MAX"
})

enum.MakeEnum("ELevelChangeState", {
	"LCS_None",
	"LCS_SyncingCommit",
	"LCS_SyncingUnPause",
	"LCS_MAX"
})

enum.MakeEnum("EWillowGameMessage", {
	"WGM_PlayerEnteredGame",
	"WGM_PlayerLeftGame",
	"WGM_CreaturesGrowStronger",
	"WGM_CreaturesWeaken",
	"WGM_MAX"
})

enum.MakeEnum("EDeviceSelectionState", {
	"EDSS_None",
	"EDSS_Pending",
	"EDSS_Succeeded",
	"EDSS_Failed",
	"EDSS_MAX"
})

enum.MakeEnum("EColiseumLatentScreen", {
	"ECLS_RoundDefeated",
	"ECLS_RoundSurvived",
	"ECLS_Certificate",
	"ECLS_MAX"
})

enum.MakeEnum("EEggCodeKey", {
	"EGG_None",
	"EGG_Up",
	"EGG_Down",
	"EGG_Left",
	"EGG_Right",
	"EGG_B",
	"EGG_A",
	"EGG_MAX"
})

enum.MakeEnum("EStartupStep", {
	"STARTUP_NotStarted",
	"STARTUP_DlcEnumeration",
	"STARTUP_PatcherDownload",
	"STARTUP_SparkAuthentication",
	"STARTUP_DeviceSelection",
	"STARTUP_CreateSession",
	"STARTUP_Complete",
	"STARTUP_MAX"
})

enum.MakeEnum("EAmmoBar", {
	"EAB_Default",
	"EAB_DualWieldLeft",
	"EAB_DualWieldRight",
	"EAB_MAX"
})

enum.MakeEnum("AIWeaponState", {
	"AIWeaponState_Firing",
	"AIWeaponState_NotFiring",
	"AIWeaponState_FiringPaused",
	"AIWeaponState_MAX"
})

enum.MakeEnum("EScriptFocus", {
	"ESF_Path",
	"ESF_Target",
	"ESF_MAX"
})

enum.MakeEnum("EButtonState", {
	"BUTTON_STATE_Pressed",
	"BUTTON_STATE_Held",
	"BUTTON_STATE_Released",
	"BUTTON_STATE_Cleared",
	"BUTTON_STATE_MAX"
})

enum.MakeEnum("ERegionList", {
	"ERL_Firestone",
	"ERL_NewHaven",
	"ERL_MAX"
})

enum.MakeEnum("EInjuredPreDeathState", {
	"INJUREDPREDEATH_None",
	"INJUREDPREDEATH_Start",
	"INJUREDPREDEATH_Stop",
	"INJUREDPREDEATH_MAX"
})

enum.MakeEnum("DataRequestType", {
	"DRT_PlayerPawn",
	"DRT_SkillTreeDef",
	"DRT_VehicleDef",
	"DRT_MAX"
})

enum.MakeEnum("EStretchyType", {
	"Stretchy_Linear",
	"Stretchy_Parabola",
	"Stretchy_MAX"
})

enum.MakeEnum("ECombatVolumeOption", {
	"ECVO_Set",
	"ECVO_Clear",
	"ECVO_MAX"
})

enum.MakeEnum("EScriptedHoldOption", {
	"ScriptedHold_Hold",
	"ScriptedHold_Release",
	"ScriptedHold_MAX"
})

enum.MakeEnum("EAllegianceRelationship", {
	"ALLEG_Enemy",
	"ALLEG_Friendly",
	"ALLEG_JustThisAllegiance",
	"ALLEG_MAX"
})

enum.MakeEnum("EAnimationType", {
	"AT_Equip",
	"AT_PutDown",
	"AT_MAX"
})

enum.MakeEnum("EReferencePointType", {
	"REFPOINT_TYPE_Bone",
	"REFPOINT_TYPE_Socket",
	"REFPOINT_TYPE_MAX"
})

enum.MakeEnum("EHealthPriority", {
	"HealthPriority_PrioritizeWeak",
	"HealthPriority_PrioritizeHealthy",
	"HealthPriority_MAX"
})

enum.MakeEnum("EWeaponAnimation", {
	"WEAPON_ANIM_Weapon",
	"WEAPON_ANIM_Arm",
	"WEAPON_ANIM_MAX"
})

enum.MakeEnum("EWeaponSpinState", {
	"SPIN_STATE_None",
	"SPIN_STATE_SpinningUp",
	"SPIN_STATE_FullySpunUp",
	"SPIN_STATE_MAX"
})

enum.MakeEnum("EWeaponReloadState", {
	"RELOADSTATE_None",
	"RELOADSTATE_Reloading",
	"RELOADSTATE_Aborted",
	"RELOADSTATE_MAX"
})

enum.MakeEnum("EZoomState", {
	"ZST_NotZoomed",
	"ZST_ZoomingIn",
	"ZST_Zoomed",
	"ZST_ZoomingOut",
	"ZST_MAX"
})

enum.MakeEnum("EWeaponAnimPutDownState", {
	"WAPDS_None",
	"WAPDS_PutDown",
	"WAPDS_PutDownSwap",
	"WAPDS_PutDownInterrupted",
	"WAPDS_MAX"
})

enum.MakeEnum("EAttributeDebugSort", {
	"ATTDEBUGSORT_NameUp",
	"ATTDEBUGSORT_NameDn",
	"ATTDEBUGSORT_MAX"
})

enum.MakeEnum("EFontSize", {
	"FONT_Medium",
	"FONT_Tiny",
	"FONT_Small",
	"FONT_Large",
	"FONT_MAX"
})

enum.MakeEnum("ETextHAlignment", {
	"HALIGN_FixedPos",
	"HALIGN_Left",
	"HALIGN_Center",
	"HALIGN_MAX"
})

enum.MakeEnum("EItemTypeForUI", {
	"ITEMUI_Armor",
	"ITEMUI_Item",
	"ITEMUI_Ammo",
	"ITEMUI_MAX"
})

enum.MakeEnum("ETextVAlignment", {
	"VALIGN_FixedPos",
	"VALIGN_Center",
	"VALIGN_Bottom",
	"VALIGN_MAX"
})

enum.MakeEnum("EMemoryDetailsSortStyle", {
	"MEMDETAILSORT_ResourceNameAToZ",
	"MEMDETAILSORT_ResourceNameZToA",
	"MEMDETAILSORT_SizeSmallToLarge",
	"MEMDETAILSORT_SizeLargeToSmall",
	"MEMDETAILSORT_CountHighToLow",
	"MEMDETAILSORT_MAX"
})

enum.MakeEnum("ENetworkActorChannelSortStyle", {
	"NETACTORSORT_ActorNameAToZ",
	"NETACTORSORT_ActornameZToA",
	"NETACTORSORT_CountHighToLow",
	"NETACTORSORT_CountLowToHigh",
	"NETACTORSORT_MAX"
})

enum.MakeEnum("EGearBuilderSortMode", {
	"GBSM_None",
	"GBSM_WeightHighToLow",
	"GBSM_WeightLowToHigh",
	"GBSM_Invalid",
	"GBSM_MAX"
})

enum.MakeEnum("SightOriginOption", {
	"SIGHTORIGIN_LocationPlusOffset",
	"SIGHTORIGIN_Socket",
	"SIGHTORIGIN_MAX"
})

enum.MakeEnum("EVehCamera", {
	"EVC_Free",
	"EVC_Constrained",
	"EVC_FollowsSteering",
	"EVC_MAX"
})

enum.MakeEnum("EVehSteering", {
	"EVS_VehicleRelative",
	"EVS_CameraRelative",
	"EVS_FollowsCamera",
	"EVS_MAX"
})

enum.MakeEnum("EVehicleDeathStatus", {
	"VEHDEATH_Alive",
	"VEHDEATH_Instant",
	"VEHDEATH_Explode",
	"VEHDEATH_DeRez",
	"VEHDEATH_MAX"
})

enum.MakeEnum("EVehicleFOVState", {
	"VEHICLE_FOV_Default",
	"VEHICLE_FOV_AfterburnerOn",
	"VEHICLE_FOV_AfterburnerOff",
	"VEHICLE_FOV_MAX"
})

enum.MakeEnum("TankSensorType", {
	"TST_Front",
	"TST_Right",
	"TST_Left",
	"TST_Back",
	"TST_MAX"
})

enum.MakeEnum("EDuelMsg", {
	"DMSG_DUELINGDISABLED",
	"DMSG_ALREADYDUELING",
	"DMSG_ALREADYCHALLENGED",
	"DMSG_DUELTIMEOUT",
	"DMSG_ISSUEDCHALLENGE",
	"DMSG_RECEIVEDCHALLENGE",
	"DMSG_ACCEPTEDCHALLENGE",
	"DMSG_DUELSTART",
	"DMSG_ARENAWARNING",
	"DMSG_DUELDRAW",
	"DMSG_DUELWIN",
	"DMSG_NOTRIGHTNOW",
	"DMSG_MAX"
})

enum.MakeEnum("EListDefinitionSetType", {
	"ListDefSet_Set",
	"ListDefSet_Clear",
	"ListDefSet_MAX"
})

enum.MakeEnum("ESpeedComponent", {
	"ESC_Forward",
	"ESC_Strafe",
	"ESC_Horizontal",
	"ESC_Vertical",
	"ESC_Full",
	"ESC_MAX"
})

