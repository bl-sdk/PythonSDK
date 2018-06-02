enum.MakeEnum("EDynamicShadowCastRelevance", {
	"<uninitialized>",
	"Always",
	"Far",
	"Near",
	"Never",
	"EDynamicShadowCastRelevance_MAX"
})

enum.MakeEnum("EActorMetricsType", {
	"METRICS_VERTS",
	"METRICS_TRIS",
	"METRICS_SECTIONS",
	"METRICS_MAX"
})

enum.MakeEnum("EMoveDir", {
	"MD_Stationary",
	"MD_Forward",
	"MD_Backward",
	"MD_Left",
	"MD_Right",
	"MD_Up",
	"MD_Down",
	"MD_MAX"
})

enum.MakeEnum("EPhysics", {
	"PHYS_None",
	"PHYS_Walking",
	"PHYS_Falling",
	"PHYS_Swimming",
	"PHYS_Flying",
	"PHYS_Rotating",
	"PHYS_Projectile",
	"PHYS_Interpolating",
	"PHYS_Spider",
	"PHYS_Ladder",
	"PHYS_RigidBody",
	"PHYS_SoftBody",
	"PHYS_NavMeshWalking",
	"PHYS_Unused",
	"PHYS_Custom",
	"PHYS_MAX"
})

enum.MakeEnum("ECollisionType", {
	"COLLIDE_CustomDefault",
	"COLLIDE_NoCollision",
	"COLLIDE_BlockAll",
	"COLLIDE_BlockWeapons",
	"COLLIDE_TouchAll",
	"COLLIDE_TouchWeapons",
	"COLLIDE_BlockAllButWeapons",
	"COLLIDE_TouchAllButWeapons",
	"COLLIDE_BlockWeaponsKickable",
	"COLLIDE_BlockAllButVehicles",
	"COLLIDE_MAX"
})

enum.MakeEnum("ETravelType", {
	"TRAVEL_Absolute",
	"TRAVEL_Partial",
	"TRAVEL_Relative",
	"TRAVEL_MAX"
})

enum.MakeEnum("EDoubleClickDir", {
	"DCLICK_None",
	"DCLICK_Left",
	"DCLICK_Right",
	"DCLICK_Forward",
	"DCLICK_Back",
	"DCLICK_Active",
	"DCLICK_Done",
	"DCLICK_MAX"
})

enum.MakeEnum("ENetRole", {
	"ROLE_None",
	"ROLE_SimulatedProxy",
	"ROLE_AutonomousProxy",
	"ROLE_Authority",
	"ROLE_MAX"
})

enum.MakeEnum("EOnlineDataAdvertisementType", {
	"ODAT_DontAdvertise",
	"ODAT_OnlineService",
	"ODAT_QoS",
	"ODAT_OnlineServiceAndQoS",
	"ODAT_MAX"
})

enum.MakeEnum("ESettingsDataType", {
	"SDT_Empty",
	"SDT_Int32",
	"SDT_Int64",
	"SDT_Double",
	"SDT_String",
	"SDT_Float",
	"SDT_Blob",
	"SDT_DateTime",
	"SDT_Byte",
	"SDT_MAX"
})

enum.MakeEnum("EPropertyValueMappingType", {
	"PVMT_RawValue",
	"PVMT_PredefinedValues",
	"PVMT_Ranged",
	"PVMT_IdMapped",
	"PVMT_MAX"
})

enum.MakeEnum("EShowKeyboardType", {
	"SKT_Standard",
	"SKT_Password",
	"SKT_Email",
	"SKT_MAX"
})

enum.MakeEnum("EOnlineNewsType", {
	"ONT_Unknown",
	"ONT_GameNews",
	"ONT_ContentAnnouncements",
	"ONT_Misc",
	"ONT_MAX"
})

enum.MakeEnum("ENATType", {
	"NAT_Unknown",
	"NAT_Open",
	"NAT_Moderate",
	"NAT_Strict",
	"NAT_MAX"
})

enum.MakeEnum("EOnlineServerConnectionStatus", {
	"OSCS_NotConnected",
	"OSCS_Connected",
	"OSCS_ConnectionDropped",
	"OSCS_NoNetworkConnection",
	"OSCS_ServiceUnavailable",
	"OSCS_UpdateRequired",
	"OSCS_ServersTooBusy",
	"OSCS_DuplicateLoginDetected",
	"OSCS_InvalidUser",
	"OSCS_MAX"
})

enum.MakeEnum("EOnlineEnumerationReadState", {
	"OERS_NotStarted",
	"OERS_InProgress",
	"OERS_Done",
	"OERS_Failed",
	"OERS_MAX"
})

enum.MakeEnum("EOnlineGameState", {
	"OGS_NoSession",
	"OGS_Pending",
	"OGS_Starting",
	"OGS_InProgress",
	"OGS_Ending",
	"OGS_Ended",
	"OGS_MAX"
})

enum.MakeEnum("EOnlineAccountCreateStatus", {
	"OACS_CreateSuccessful",
	"OACS_UnknownError",
	"OACS_InvalidUserName",
	"OACS_InvalidPassword",
	"OACS_InvalidUniqueUserName",
	"OACS_UniqueUserNameInUse",
	"OACS_ServiceUnavailable",
	"OACS_MAX"
})

enum.MakeEnum("ELanBeaconState", {
	"LANB_NotUsingLanBeacon",
	"LANB_Hosting",
	"LANB_Searching",
	"LANB_MAX"
})

enum.MakeEnum("EOnlineContentType", {
	"OCT_Downloaded",
	"OCT_SaveGame",
	"OCT_MAX"
})

enum.MakeEnum("ENamedOnlineContentType", {
	"NOCT_Content",
	"NOCT_SeasonPass",
	"NOCT_PreorderBonus",
	"NOCT_CompatibilityPack",
	"NOCT_MAX"
})

enum.MakeEnum("EVoiceVolumeType", {
	"VVT_Capture",
	"VVT_Playback",
	"VVT_CaptureAndPlayback",
	"VVT_MAX"
})

enum.MakeEnum("EOnlineFriendState", {
	"OFS_Offline",
	"OFS_Online",
	"OFS_Away",
	"OFS_Busy",
	"OFS_MAX"
})

enum.MakeEnum("ENetworkNotificationPosition", {
	"NNP_TopLeft",
	"NNP_TopCenter",
	"NNP_TopRight",
	"NNP_CenterLeft",
	"NNP_Center",
	"NNP_CenterRight",
	"NNP_BottomLeft",
	"NNP_BottomCenter",
	"NNP_BottomRight",
	"NNP_MAX"
})

enum.MakeEnum("EFeaturePrivilegeLevel", {
	"FPL_Disabled",
	"FPL_EnabledFriendsOnly",
	"FPL_Enabled",
	"FPL_MAX"
})

enum.MakeEnum("EUserAgeGroup", {
	"UAG_Unknown",
	"UAG_Child",
	"UAG_Teen",
	"UAG_Adult",
	"UAG_MAX"
})

enum.MakeEnum("ELoginStatus", {
	"LS_NotLoggedIn",
	"LS_UsingLocalProfile",
	"LS_LoggedIn",
	"LS_MAX"
})

enum.MakeEnum("EAuthStatus", {
	"AUS_NotStarted",
	"AUS_Pending",
	"AUS_Authenticated",
	"AUS_Failed",
	"AUS_MAX"
})

enum.MakeEnum("EDetailMode", {
	"DM_Low",
	"DM_Medium",
	"DM_High",
	"DM_MAX"
})

enum.MakeEnum("ESceneDepthPriorityGroup", {
	"SDPG_UnrealEdBackground",
	"SDPG_World",
	"SDPG_Foreground",
	"SDPG_UnrealEdForeground",
	"SDPG_PostProcess",
	"SDPG_WorldPreAlphaPostProcess",
	"SDPG_AfterPostProcess",
	"SDPG_MAX"
})

enum.MakeEnum("GJKResult", {
	"GJK_Intersect",
	"GJK_NoIntersection",
	"GJK_Fail",
	"GJK_MAX"
})

enum.MakeEnum("ERadialImpulseFalloff", {
	"RIF_Constant",
	"RIF_Linear",
	"RIF_MAX"
})

enum.MakeEnum("ERBCollisionChannel", {
	"RBCC_Default",
	"RBCC_Nothing",
	"RBCC_Pawn",
	"RBCC_Vehicle",
	"RBCC_Water",
	"RBCC_GameplayPhysics",
	"RBCC_EffectPhysics",
	"RBCC_Untitled1",
	"RBCC_Untitled2",
	"RBCC_TossedItems",
	"RBCC_TossedItemsPlayerVehicle",
	"RBCC_Cloth",
	"RBCC_FluidDrain",
	"RBCC_SoftBody",
	"RBCC_FracturedMeshPart",
	"RBCC_BlockingVolume",
	"RBCC_DeadPawn",
	"RBCC_Clothing",
	"RBCC_ClothingCollision",
	"RBCC_TossedItemsEnemyVehicle",
	"RBCC_PlayerVehicle",
	"RBCC_EnemyVehicle",
	"RBCC_PlayerVehicleEnemyVehicle",
	"RBCC_TossedItemsPlayerVehicleEnemyVehicle",
	"RBCC_WillowPickup",
	"RBCC_MAX"
})

enum.MakeEnum("EOverrideStaticShadow", {
	"OSS_NoOverride",
	"OSS_CastButDontReceiveStatic",
	"OSS_CastAndReceiveStatic",
	"OSS_MAX"
})

enum.MakeEnum("EDynamicShadowCastRelevance", {
	"SHADOWCAST_Uninitialized",
	"SHADOWCAST_Always",
	"ShadowCast_Far",
	"ShadowCast_Near",
	"SHADOWCAST_Never",
	"EDynamicShadowCastRelevance_MAX"
})

enum.MakeEnum("EReplicationType", {
	"IDR_Server",
	"IDR_Client",
	"IDR_Local",
	"IDR_MAX"
})

enum.MakeEnum("EInstanceDataType", {
	"IDT_Bool",
	"IDT_Int",
	"IDT_Float",
	"IDT_Vector",
	"IDT_Object",
	"IDT_ActorComponent",
	"IDT_Actor",
	"IDT_ActorTemplate",
	"IDT_String",
	"IDT_Switch",
	"IDT_PickupTemplate",
	"IDT_CustomHead",
	"IDT_CustomSkin",
	"IDT_MAX"
})

enum.MakeEnum("EOnlineGameSearchComparisonType", {
	"OGSCT_Equals",
	"OGSCT_NotEquals",
	"OGSCT_GreaterThan",
	"OGSCT_GreaterThanEquals",
	"OGSCT_LessThan",
	"OGSCT_LessThanEquals",
	"OGSCT_MAX"
})

enum.MakeEnum("EOnlineGameSearchEntryType", {
	"OGSET_Property",
	"OGSET_LocalizedSetting",
	"OGSET_ObjectProperty",
	"OGSET_MAX"
})

enum.MakeEnum("EOnlineGameSearchSortType", {
	"OGSSO_Ascending",
	"OGSSO_Descending",
	"OGSSO_MAX"
})

enum.MakeEnum("EViewTargetBlendFunction", {
	"VTBlend_Linear",
	"VTBlend_Cubic",
	"VTBlend_EaseIn",
	"VTBlend_EaseOut",
	"VTBlend_EaseInOut",
	"VTBlend_MAX"
})

enum.MakeEnum("EFocusType", {
	"FOCUS_Distance",
	"FOCUS_Position",
	"FOCUS_MAX"
})

enum.MakeEnum("ECameraAnimPlaySpace", {
	"CAPS_CameraLocal",
	"CAPS_World",
	"CAPS_UserDefined",
	"CAPS_MAX"
})

enum.MakeEnum("EMovieControlType", {
	"MCT_Play",
	"MCT_Stop",
	"MCT_Pause",
	"MCT_MAX"
})

enum.MakeEnum("EProgressMessageType", {
	"PMT_Clear",
	"PMT_Information",
	"PMT_AdminMessage",
	"PMT_DownloadProgress",
	"PMT_ConnectionFailure",
	"PMT_PeerConnectionFailure",
	"PMT_PeerHostMigrationFailure",
	"PMT_SocketFailure",
	"PMT_MAX"
})

enum.MakeEnum("EPhysBodyOp", {
	"PBO_None",
	"PBO_Term",
	"PBO_Disable",
	"PBO_MAX"
})

enum.MakeEnum("EBoneVisibilityStatus", {
	"BVS_HiddenByParent",
	"BVS_Visible",
	"BVS_ExplicitlyHidden",
	"BVS_MAX"
})

enum.MakeEnum("EFaceFXRegOp", {
	"FXRO_Add",
	"FXRO_Multiply",
	"FXRO_Replace",
	"FXRO_MAX"
})

enum.MakeEnum("EFaceFXBlendMode", {
	"FXBM_Overwrite",
	"FXBM_Additive",
	"FXBM_MAX"
})

enum.MakeEnum("EInstanceWeightUsage", {
	"IWU_PartialSwap",
	"IWU_FullSwap",
	"IWU_MAX"
})

enum.MakeEnum("EAnimRotationOnly", {
	"EARO_AnimSet",
	"EARO_ForceEnabled",
	"EARO_ForceDisabled",
	"EARO_MAX"
})

enum.MakeEnum("ERootMotionRotationMode", {
	"RMRM_Ignore",
	"RMRM_RotateActor",
	"RMRM_MAX"
})

enum.MakeEnum("ERootMotionMode", {
	"RMM_Translate",
	"RMM_Velocity",
	"RMM_Ignore",
	"RMM_Accel",
	"RMM_Relative",
	"RMM_TranslateWithGravity",
	"RMM_MAX"
})

enum.MakeEnum("EMaxDistanceScaleMode", {
	"MDSM_Multiply",
	"MDSM_Substract",
	"MDSM_MAX"
})

enum.MakeEnum("ELocalMessageType", {
	"LMT_Training",
	"LMT_ContextHint",
	"LMT_XP",
	"LMT_Player",
	"LMT_System",
	"LMT_ReceivedLoot",
	"LMT_OpenedChest",
	"LMT_Chat",
	"LMT_MAX"
})

enum.MakeEnum("EInputMatchAction", {
	"IMA_GreaterThan",
	"IMA_LessThan",
	"IMA_MAX"
})

enum.MakeEnum("EInputTypes", {
	"IT_XAxis",
	"IT_YAxis",
	"IT_MAX"
})

enum.MakeEnum("ENodeSearchType", {
	"NODE_Ambush",
	"NODE_PointOfInterest",
	"NODE_MAX"
})

enum.MakeEnum("ENavMeshEdgeType", {
	"NAVEDGE_Normal",
	"NAVEDGE_Mantle",
	"NAVEDGE_Coverslip",
	"NAVEDGE_SwatTurn",
	"NAVEDGE_DropDown",
	"NAVEDGE_PathObject",
	"NAVEDGE_BackRefDummy",
	"NAVEDGE_Jump",
	"NAVEDGE_MAX"
})

enum.MakeEnum("EDynamicDialogueArgument", {
	"DYNAMICDIALOGUEARGUMENT_None",
	"DYNAMICDIALOGUEARGUMENT_SpeakerName",
	"DYNAMICDIALOGUEARGUMENT_Stance",
	"DYNAMICDIALOGUEARGUMENT_TargetName",
	"DYNAMICDIALOGUEARGUMENT_MAX"
})

enum.MakeEnum("EAmbientOcclusionQuality", {
	"AO_High",
	"AO_Medium",
	"AO_Low",
	"AO_MAX"
})

enum.MakeEnum("ECsgOper", {
	"CSG_Active",
	"CSG_Add",
	"CSG_Subtract",
	"CSG_Intersect",
	"CSG_Deintersect",
	"CSG_MAX"
})

enum.MakeEnum("ReverbPreset", {
	"REVERB_Default",
	"REVERB_Bathroom",
	"REVERB_StoneRoom",
	"REVERB_Auditorium",
	"REVERB_ConcertHall",
	"REVERB_Cave",
	"REVERB_Hallway",
	"REVERB_StoneCorridor",
	"REVERB_Alley",
	"REVERB_Forest",
	"REVERB_City",
	"REVERB_Mountains",
	"REVERB_Quarry",
	"REVERB_Plain",
	"REVERB_ParkingLot",
	"REVERB_SewerPipe",
	"REVERB_Underwater",
	"REVERB_SmallRoom",
	"REVERB_MediumRoom",
	"REVERB_LargeRoom",
	"REVERB_MediumHall",
	"REVERB_LargeHall",
	"REVERB_Plate",
	"REVERB_MAX"
})

enum.MakeEnum("ValidRotationCompressionFormats", {
	"PolarEncoded32",
	"PolarEncoded48",
	"ValidRotationCompressionFormats_MAX"
})

enum.MakeEnum("ValidTranslationCompressionFormats", {
	"IntervalFixed32NoW",
	"ValidTranslationCompressionFormats_MAX"
})

enum.MakeEnum("AnimationCompressionFormat", {
	"ACF_None",
	"ACF_Float96NoW",
	"ACF_Fixed48NoW",
	"ACF_IntervalFixed32NoW",
	"ACF_Fixed32NoW",
	"ACF_Float32NoW",
	"ACF_Delta40NoW",
	"ACF_Delta48NoW",
	"ACF_Identity",
	"ACF_PolarEncoded32",
	"ACF_PolarEncoded48",
	"ACF_MAX"
})

enum.MakeEnum("AnimationKeyFormat", {
	"AKF_ConstantKeyLerp",
	"AKF_VariableKeyLerp",
	"AKF_PerTrackCompression",
	"AKF_MAX"
})

enum.MakeEnum("ESliderType", {
	"ST_1D",
	"ST_2D",
	"ST_MAX"
})

enum.MakeEnum("EWeightCheck", {
	"EWC_AnimNodeSlotNotPlaying",
	"EWC_MAX"
})

enum.MakeEnum("EBlendType", {
	"EBT_ParentBoneSpace",
	"EBT_MeshSpace",
	"EBT_MAX"
})

enum.MakeEnum("EAnimAimDir", {
	"ANIMAIM_LEFTUP",
	"ANIMAIM_CENTERUP",
	"ANIMAIM_RIGHTUP",
	"ANIMAIM_LEFTCENTER",
	"ANIMAIM_CENTERCENTER",
	"ANIMAIM_RIGHTCENTER",
	"ANIMAIM_LEFTDOWN",
	"ANIMAIM_CENTERDOWN",
	"ANIMAIM_RIGHTDOWN",
	"ANIMAIM_MAX"
})

enum.MakeEnum("EAimID", {
	"EAID_LeftUp",
	"EAID_LeftDown",
	"EAID_RightUp",
	"EAID_RightDown",
	"EAID_ZeroUp",
	"EAID_ZeroDown",
	"EAID_ZeroLeft",
	"EAID_ZeroRight",
	"EAID_CellLU",
	"EAID_CellCU",
	"EAID_CellRU",
	"EAID_CellLC",
	"EAID_CellCC",
	"EAID_CellRC",
	"EAID_CellLD",
	"EAID_CellCD",
	"EAID_CellRD",
	"EAID_MAX"
})

enum.MakeEnum("EBaseBlendType", {
	"BBT_ByActorTag",
	"BBT_ByActorClass",
	"BBT_MAX"
})

enum.MakeEnum("ERootRotationOption", {
	"RRO_Default",
	"RRO_Discard",
	"RRO_Extract",
	"RRO_MAX"
})

enum.MakeEnum("ERootBoneAxis", {
	"RBA_Default",
	"RBA_Discard",
	"RBA_Translate",
	"RBA_MAX"
})

enum.MakeEnum("EChangeStatus", {
	"CHANGE_Toggle",
	"CHANGE_Enable",
	"CHANGE_Disable",
	"CHANGE_MAX"
})

enum.MakeEnum("EInfoBarType", {
	"EIBT_Shield",
	"EIBT_Health",
	"EIBT_Vehicle",
	"EIBT_Minibar",
	"EIBT_MAX"
})

enum.MakeEnum("EOpinion", {
	"OPINION_Enemy",
	"OPINION_Neutral",
	"OPINION_Friendly",
	"OPINION_MAX"
})

enum.MakeEnum("EAutoAimProfile", {
	"AAP_Heavy",
	"AAP_Medium",
	"AAP_Light",
	"AAP_None",
	"AAP_MAX"
})

enum.MakeEnum("EPathFindingError", {
	"PATHERROR_STARTPOLYNOTFOUND",
	"PATHERROR_GOALPOLYNOTFOUND",
	"PATHERROR_ANCHORPYLONNOTFOUND",
	"PATHERROR_NOPATHFOUND",
	"PATHERROR_COMPUTEVALIDFINALDEST_FAIL",
	"PATHERROR_GETNEXTMOVELOCATION_FAIL",
	"PATHERROR_MAX"
})

enum.MakeEnum("EBlendMode", {
	"BLEND_Opaque",
	"BLEND_Masked",
	"BLEND_Translucent",
	"BLEND_Additive",
	"BLEND_Modulate",
	"BLEND_SoftMasked",
	"BLEND_AlphaComposite",
	"BLEND_DitheredTranslucent",
	"BLEND_MAX"
})

enum.MakeEnum("EMaterialLightingModel", {
	"MLM_Phong",
	"MLM_NonDirectional",
	"MLM_Unlit",
	"MLM_SHPRT",
	"MLM_Custom",
	"MLM_Anisotropic",
	"MLM_MAX"
})

enum.MakeEnum("EMaterialTessellationMode", {
	"MTM_NoTessellation",
	"MTM_FlatTessellation",
	"MTM_PNTriangles",
	"MTM_MAX"
})

enum.MakeEnum("EMobileTextureTransformTarget", {
	"MTTT_BaseTexture",
	"MTTT_DetailTexture",
	"MTTT_MAX"
})

enum.MakeEnum("EMobileValueSource", {
	"MVS_Constant",
	"MVS_VertexColorRed",
	"MVS_VertexColorGreen",
	"MVS_VertexColorBlue",
	"MVS_VertexColorAlpha",
	"MVS_BaseTextureRed",
	"MVS_BaseTextureGreen",
	"MVS_BaseTextureBlue",
	"MVS_BaseTextureAlpha",
	"MVS_MaskTextureRed",
	"MVS_MaskTextureGreen",
	"MVS_MaskTextureBlue",
	"MVS_MaskTextureAlpha",
	"MVS_NormalTextureAlpha",
	"MVS_MAX"
})

enum.MakeEnum("EMobileTextureBlendFactorSource", {
	"MTBFS_VertexColor",
	"MTBFS_MaskTexture",
	"MTBFS_MAX"
})

enum.MakeEnum("EMobileTexCoordsSource", {
	"MTCS_TexCoords0",
	"MTCS_TexCoords1",
	"MTCS_TexCoords2",
	"MTCS_TexCoords3",
	"MTCS_MAX"
})

enum.MakeEnum("EMobileEmissiveColorSource", {
	"MECS_EmissiveTexture",
	"MECS_BaseTexture",
	"MECS_Constant",
	"MECS_MAX"
})

enum.MakeEnum("EMobileEnvironmentBlendMode", {
	"MEBM_Add",
	"MEBM_Lerp",
	"MEBM_MAX"
})

enum.MakeEnum("EMobileSpecularMask", {
	"MSM_Constant",
	"MSM_Luminance",
	"MSM_DiffuseRed",
	"MSM_DiffuseGreen",
	"MSM_DiffuseBlue",
	"MSM_DiffuseAlpha",
	"MSM_MaskTextureRGB",
	"MSM_MAX"
})

enum.MakeEnum("EMobileAmbientOcclusionSource", {
	"MAOS_Disabled",
	"MAOS_VertexColorRed",
	"MAOS_VertexColorGreen",
	"MAOS_VertexColorBlue",
	"MAOS_VertexColorAlpha",
	"MAOS_MAX"
})

enum.MakeEnum("ELightingBuildQuality", {
	"Quality_Preview",
	"Quality_Medium",
	"Quality_High",
	"Quality_Production",
	"Quality_NoGlobalIllumination",
	"Quality_MAX"
})

enum.MakeEnum("EPathSearchType", {
	"PST_Default",
	"PST_Breadth",
	"PST_NewBestPathTo",
	"PST_Constraint",
	"PST_MAX"
})

enum.MakeEnum("EDynamicLightEnvironmentBoundsMethod", {
	"DLEB_OwnerComponents",
	"DLEB_ManualOverride",
	"DLEB_ActiveComponents",
	"DLEB_MAX"
})

enum.MakeEnum("EDamageParameterOverrideMode", {
	"DPOM_Absolute",
	"DPOM_Multiplier",
	"DPOM_MAX"
})

enum.MakeEnum("EAttributeDataType", {
	"ADT_Float",
	"ADT_Int",
	"ADT_Bool",
	"ADT_MAX"
})

enum.MakeEnum("EAttributeTranslationStyle", {
	"ATTRSTYLE_JustNumber",
	"ATTRSTYLE_ModifierText",
	"ATTRSTYLE_Debug",
	"ATTRSTYLE_LeaveBlank",
	"ATTRSTYLE_MAX"
})

enum.MakeEnum("EExpressionEvaluationMode", {
	"EXPRMODE_And",
	"EXPRMODE_Or",
	"EXPRMODE_MAX"
})

enum.MakeEnum("EOperandUsage", {
	"OPERAND_PreferAttribute",
	"OPERAND_Multiply",
	"OPERAND_MAX"
})

enum.MakeEnum("EComparisonOperator", {
	"OPERATOR_EqualTo",
	"OPERATOR_NotEqualTo",
	"OPERATOR_LessThan",
	"OPERATOR_LessThanOrEqual",
	"OPERATOR_GreaterThan",
	"OPERATOR_GreaterThanOrEqual",
	"OPERATOR_MAX"
})

enum.MakeEnum("EBaseValueMode", {
	"BASEVALUE_InitializationDefSetsBaseValue",
	"BASEVALUE_InitializationDefAddsToBaseValue",
	"BASEVALUE_InitializationDefScalesBaseValue",
	"BASEVALUE_InitializationDefOffsetByBaseValue",
	"BASEVALUE_MAX"
})

enum.MakeEnum("EAttributeInitializationRounding", {
	"ATTRROUNDING_Float",
	"ATTRROUNDING_IntRound",
	"ATTRROUNDING_IntFloor",
	"ATTRROUNDING_IntCeil",
	"ATTRROUNDING_MAX"
})

enum.MakeEnum("ESoundClassName", {
	"Master",
	"ESoundClassName_MAX"
})

enum.MakeEnum("EDebugState", {
	"DEBUGSTATE_None",
	"DEBUGSTATE_IsolateDryAudio",
	"DEBUGSTATE_IsolateReverb",
	"DEBUGSTATE_TestLPF",
	"DEBUGSTATE_TestStereoBleed",
	"DEBUGSTATE_TestLFEBleed",
	"DEBUGSTATE_DisableLPF",
	"DEBUGSTATE_DisableRadio",
	"DEBUGSTATE_MAX"
})

enum.MakeEnum("ETTSSpeaker", {
	"TTSSPEAKER_Paul",
	"TTSSPEAKER_Harry",
	"TTSSPEAKER_Frank",
	"TTSSPEAKER_Dennis",
	"TTSSPEAKER_Kit",
	"TTSSPEAKER_Betty",
	"TTSSPEAKER_Ursula",
	"TTSSPEAKER_Rita",
	"TTSSPEAKER_Wendy",
	"TTSSPEAKER_MAX"
})

enum.MakeEnum("EBehaviorContext", {
	"BCONTEXT_Self",
	"BCONTEXT_MyInstigator",
	"BCONTEXT_OtherEventParticipant",
	"BCONTEXT_EventData",
	"BCONTEXT_UseContextObject",
	"BCONTEXT_MAX"
})

enum.MakeEnum("EBehaviorCounterID", {
	"BCOUNTER",
	"BCOUNTER1",
	"BCOUNTER_MAX"
})

enum.MakeEnum("EBehaviorCounterEvent", {
	"COUNTEREVENT_Counter1AtTarget",
	"COUNTEREVENT_Counter2AtTarget",
	"COUNTEREVENT_MAX"
})

enum.MakeEnum("EBehaviorCustomAnimationReaction", {
	"AR_Play",
	"AR_Stop",
	"AR_MAX"
})

enum.MakeEnum("EFollowAllegiance", {
	"FollowAllegiance_Follow",
	"FollowAllegiance_Release",
	"FollowAllegiance_MAX"
})

enum.MakeEnum("EScriptedKillType", {
	"KILL_Normal",
	"KILL_GibOnly",
	"KILL_TechOnly",
	"KILL_PreferTech",
	"KILL_SpecialDeath1",
	"KILL_SpecialDeath2",
	"KILL_SpecialDeath3",
	"KILL_MAX"
})

enum.MakeEnum("EBodyAction", {
	"BA_UnfixAllBodies",
	"BA_FixAllBodies",
	"BA_NoChange",
	"BA_MAX"
})

enum.MakeEnum("ESimulationAction", {
	"SA_StartSimulation",
	"SA_StopSimulation",
	"SA_MAX"
})

enum.MakeEnum("ELightmapModificationFunction", {
	"MLMF_Modulate",
	"MLMF_ModulateAlpha",
	"MLMF_MAX"
})

enum.MakeEnum("EInitialOscillatorOffset", {
	"EOO_OffsetRandom",
	"EOO_OffsetZero",
	"EOO_MAX"
})

enum.MakeEnum("TextureCompressionSettings", {
	"TC_Default",
	"TC_Normalmap",
	"TC_Displacementmap",
	"TC_NormalmapAlpha",
	"TC_Grayscale",
	"TC_HighDynamicRange",
	"TC_OneBitAlpha",
	"TC_NormalmapUncompressed",
	"TC_NormalmapBC5",
	"TC_OneBitMonochrome",
	"TC_SimpleLightmapModification",
	"TC_VectorDisplacementmap",
	"TC_MAX"
})

enum.MakeEnum("EPixelFormat", {
	"PF_Unknown",
	"PF_A32B32G32R32F",
	"PF_A8R8G8B8",
	"PF_G8",
	"PF_G16",
	"PF_DXT1",
	"PF_DXT3",
	"PF_DXT5",
	"PF_UYVY",
	"PF_FloatRGB",
	"PF_FloatRGBA",
	"PF_DepthStencil",
	"PF_ShadowDepth",
	"PF_FilteredShadowDepth",
	"PF_R32F",
	"PF_G16R16",
	"PF_G16R16F",
	"PF_G16R16F_FILTER",
	"PF_G32R32F",
	"PF_A2B10G10R10",
	"PF_A16B16G16R16",
	"PF_D24",
	"PF_R16F",
	"PF_R16F_FILTER",
	"PF_BC5",
	"PF_V8U8",
	"PF_A1",
	"PF_FloatR11G11B10",
	"PF_MAX"
})

enum.MakeEnum("TextureFilter", {
	"TF_Nearest",
	"TF_Linear",
	"TF_MAX"
})

enum.MakeEnum("TextureAddress", {
	"TA_Wrap",
	"TA_Clamp",
	"TA_Mirror",
	"TA_MAX"
})

enum.MakeEnum("TextureGroup", {
	"TEXTUREGROUP_World",
	"TEXTUREGROUP_WorldNormalMap",
	"TEXTUREGROUP_WorldSpecular",
	"TEXTUREGROUP_Character",
	"TEXTUREGROUP_CharacterNormalMap",
	"TEXTUREGROUP_CharacterSpecular",
	"TEXTUREGROUP_Weapon",
	"TEXTUREGROUP_WeaponNormalMap",
	"TEXTUREGROUP_WeaponSpecular",
	"TEXTUREGROUP_Vehicle",
	"TEXTUREGROUP_VehicleNormalMap",
	"TEXTUREGROUP_VehicleSpecular",
	"TEXTUREGROUP_Cinematic",
	"TEXTUREGROUP_Effects",
	"TEXTUREGROUP_EffectsNotFiltered",
	"TEXTUREGROUP_Skybox",
	"TEXTUREGROUP_UI",
	"TEXTUREGROUP_Lightmap",
	"TEXTUREGROUP_RenderTarget",
	"TEXTUREGROUP_MobileFlattened",
	"TEXTUREGROUP_ProcBuilding_Face",
	"TEXTUREGROUP_ProcBuilding_LightMap",
	"TEXTUREGROUP_Shadowmap",
	"TEXTUREGROUP_ColorLookupTable",
	"TEXTUREGROUP_Terrain_Heightmap",
	"TEXTUREGROUP_Terrain_Weightmap",
	"TEXTUREGROUP_ImageBasedReflection",
	"TEXTUREGROUP_Bokeh",
	"TEXTUREGROUP_MAX"
})

enum.MakeEnum("TextureMipGenSettings", {
	"TMGS_FromTextureGroup",
	"TMGS_SimpleAverage",
	"TMGS_Sharpen0",
	"TMGS_Sharpen1",
	"TMGS_Sharpen2",
	"TMGS_Sharpen3",
	"TMGS_Sharpen4",
	"TMGS_Sharpen5",
	"TMGS_Sharpen6",
	"TMGS_Sharpen7",
	"TMGS_Sharpen8",
	"TMGS_Sharpen9",
	"TMGS_Sharpen10",
	"TMGS_NoMipmaps",
	"TMGS_LeaveExistingMips",
	"TMGS_Blur1",
	"TMGS_Blur2",
	"TMGS_Blur3",
	"TMGS_Blur4",
	"TMGS_Blur5",
	"TMGS_MAX"
})

enum.MakeEnum("ETextureMipCount", {
	"TMC_ResidentMips",
	"TMC_AllMips",
	"TMC_AllMipsBiased",
	"TMC_MAX"
})

enum.MakeEnum("EInputPlatformType", {
	"IPT_PC",
	"IPT",
	"IPT_PS3",
	"IPT_MAX"
})

enum.MakeEnum("EUIDataProviderFieldType", {
	"DATATYPE_Property",
	"DATATYPE_Provider",
	"DATATYPE_RangeProperty",
	"DATATYPE_NetIdProperty",
	"DATATYPE_Collection",
	"DATATYPE_ProviderCollection",
	"DATATYPE_MAX"
})

enum.MakeEnum("ECoverGroupFillAction", {
	"CGFA_Overwrite",
	"CGFA_Add",
	"CGFA_Remove",
	"CGFA_Clear",
	"CGFA_Cylinder",
	"CGFA_MAX"
})

enum.MakeEnum("ECoverLocationDescription", {
	"CoverDesc_None",
	"CoverDesc_InWindow",
	"CoverDesc_InDoorway",
	"CoverDesc_BehindCar",
	"CoverDesc_BehindTruck",
	"CoverDesc_OnTruck",
	"CoverDesc_BehindBarrier",
	"CoverDesc_BehindColumn",
	"CoverDesc_BehindCrate",
	"CoverDesc_BehindWall",
	"CoverDesc_BehindStatue",
	"CoverDesc_BehindSandbags",
	"CoverDesc_MAX"
})

enum.MakeEnum("ECoverType", {
	"CT_None",
	"CT_Standing",
	"CT_MidLevel",
	"CT_MAX"
})

enum.MakeEnum("ECoverAction", {
	"CA_Default",
	"CA_BlindLeft",
	"CA_BlindRight",
	"CA_LeanLeft",
	"CA_LeanRight",
	"CA_StepLeft",
	"CA_StepRight",
	"CA_PopUp",
	"CA_BlindUp",
	"CA_PeekLeft",
	"CA_PeekRight",
	"CA_PeekUp",
	"CA_MAX"
})

enum.MakeEnum("ECoverDirection", {
	"CD_Default",
	"CD_Left",
	"CD_Right",
	"CD_Up",
	"CD_MAX"
})

enum.MakeEnum("EFireLinkID", {
	"FLI_FireLink",
	"FLI_RejectedFireLink",
	"FLI_MAX"
})

enum.MakeEnum("EReflectionType", {
	"REFLT_None",
	"REFLT_Instigator",
	"REFLT_Self",
	"REFLT_MAX"
})

enum.MakeEnum("EDamageSkillEventType", {
	"DSET_DamageTaken",
	"DSET_DamageDealt",
	"DSET_MAX"
})

enum.MakeEnum("EFilterMode", {
	"FM_None",
	"FM_Ignore",
	"FM_Affect",
	"FM_MAX"
})

enum.MakeEnum("EDecalTransform", {
	"DecalTransform_OwnerAbsolute",
	"DecalTransform_OwnerRelative",
	"DecalTransform_SpawnRelative",
	"DecalTransform_MAX"
})

enum.MakeEnum("EMaterialUsage", {
	"MATUSAGE_SkeletalMesh",
	"MATUSAGE_FracturedMeshes",
	"MATUSAGE_ParticleSprites",
	"MATUSAGE_BeamTrails",
	"MATUSAGE_ParticleSubUV",
	"MATUSAGE_Foliage",
	"MATUSAGE_SpeedTree",
	"MATUSAGE_StaticLighting",
	"MATUSAGE_GammaCorrection",
	"MATUSAGE_LensFlare",
	"MATUSAGE_InstancedMeshParticles",
	"MATUSAGE_FluidSurface",
	"MATUSAGE_Decals",
	"MATUSAGE_MaterialEffect",
	"MATUSAGE_MorphTargets",
	"MATUSAGE_FogVolumes",
	"MATUSAGE_RadialBlur",
	"MATUSAGE_InstancedMeshes",
	"MATUSAGE_SplineMesh",
	"MATUSAGE_ScreenDoorFade",
	"MATUSAGE_APEXMesh",
	"MATUSAGE_Terrain",
	"MATUSAGE_Landscape",
	"MATUSAGE_SPHFluid",
	"MATUSAGE_MAX"
})

enum.MakeEnum("ECustomSkinType", {
	"CUSTSKIN_None",
	"CUSTSKIN_Body",
	"CUSTSKIN_Head",
	"CUSTSKIN_MAX"
})

enum.MakeEnum("EParticleDownsampling", {
	"PDS_Full",
	"PDS_Half",
	"PDS_Quarter",
	"PDS_MAX"
})

enum.MakeEnum("EShadowFilterQuality", {
	"SFQ_Low",
	"SFQ_Medium",
	"SFQ_High",
	"SFQ_MAX"
})

enum.MakeEnum("EShadowProjectionTechnique", {
	"ShadowProjTech_Default",
	"ShadowProjTech_PCF",
	"ShadowProjTech_VSM",
	"ShadowProjTech_BPCF_Low",
	"ShadowProjTech_BPCF_Medium",
	"ShadowProjTech_BPCF_High",
	"ShadowProjTech_MAX"
})

enum.MakeEnum("ELightShadowMode", {
	"LightShadow_Normal",
	"LightShadow_Modulate",
	"LightShadow_ModulateBetter",
	"LightShadow_MAX"
})

enum.MakeEnum("ELightAffectsClassification", {
	"LAC_USER_SELECTED",
	"LAC_DYNAMIC_AFFECTING",
	"LAC_STATIC_AFFECTING",
	"LAC_DYNAMIC_AND_STATIC_AFFECTING",
	"LAC_MAX"
})

enum.MakeEnum("DistributionParamMode", {
	"DPM_Normal",
	"DPM_Abs",
	"DPM_Direct",
	"DPM_MAX"
})

enum.MakeEnum("EDOFQuality", {
	"DOFQuality_Low",
	"DOFQuality_Medium",
	"DOFQuality_High",
	"DOFQuality_MAX"
})

enum.MakeEnum("EDOFType", {
	"DOFType_SimpleDOF",
	"DOFType_ReferenceDOF",
	"DOFType_BokehDOF",
	"DOFType_MAX"
})

enum.MakeEnum("EDoorType", {
	"DOOR_Shoot",
	"DOOR_Touch",
	"DOOR_MAX"
})

enum.MakeEnum("EDlcEnumerationState", {
	"DLC_ENUM_None",
	"DLC_ENUM_EnumeratingFiles",
	"DLC_ENUM_EnumerationComplete",
	"DLC_ENUM_MAX"
})

enum.MakeEnum("EDlcOfferEnumerationState", {
	"DLC_OFFER_ENUM_None",
	"DLC_OFFER_ENUM_EnumeratingOffers",
	"DLC_OFFER_ENUM_EnumerationComplete",
	"DLC_OFFER_ENUM_MAX"
})

enum.MakeEnum("EInstallDLCResult", {
	"INSTALLDLC_RES_Success",
	"INSTALLDLC_RES_InvalidNameInfo",
	"INSTALLDLC_RES_InvalidEngineVersion",
	"INSTALLDLC_RES_CookedGuidMismatch",
	"INSTALLDLC_RES_CorruptContent",
	"INSTALLDLC_RES_UnknownFailure",
	"INSTALLDLC_RES_CannotInstallCompatibility",
	"INSTALLDLC_RES_CompabitilityContentNotInstalled",
	"INSTALLDLC_RES_UnlicensedNamedContent",
	"INSTALLDLC_RES_MAX"
})

enum.MakeEnum("EInstalledContentType", {
	"INSTALLED_CONTENT_TYPE_UnNamed",
	"INSTALLED_CONTENT_TYPE_Named",
	"INSTALLED_CONTENT_TYPE_Compatibility",
	"INSTALLED_CONTENT_TYPE_SeasonPass",
	"INSTALLED_CONTENT_TYPE_PreorderBonus",
	"INSTALLED_CONTENT_TYPE_CompatibilityPackContainer",
	"INSTALLED_CONTENT_TYPE_MAX"
})

enum.MakeEnum("EParticleSysParamType", {
	"PSPT_None",
	"PSPT_Scalar",
	"PSPT_ScalarRand",
	"PSPT_Vector",
	"PSPT_VectorRand",
	"PSPT_Color",
	"PSPT_Actor",
	"PSPT_Material",
	"PSPT_MAX"
})

enum.MakeEnum("ParticleReplayState", {
	"PRS_Disabled",
	"PRS_Capturing",
	"PRS_Replaying",
	"PRS_MAX"
})

enum.MakeEnum("EParticleEventType", {
	"EPET_Any",
	"EPET_Spawn",
	"EPET_Death",
	"EPET_Collision",
	"EPET_Kismet",
	"EPET_Trace",
	"EPET_MAX"
})

enum.MakeEnum("ParticleSystemLODMethod", {
	"PARTICLESYSTEMLODMETHOD_Automatic",
	"PARTICLESYSTEMLODMETHOD_DirectSet",
	"PARTICLESYSTEMLODMETHOD_ActivateAutomatic",
	"PARTICLESYSTEMLODMETHOD_MAX"
})

enum.MakeEnum("ETransitionType", {
	"TT_None",
	"TT_Paused",
	"TT_Loading",
	"TT_Saving",
	"TT_Connecting",
	"TT_Precaching",
	"TT_MAX"
})

enum.MakeEnum("FWFileType", {
	"FWFT_Log",
	"FWFT_Stats",
	"FWFT_HTML",
	"FWFT_User",
	"FWFT_Debug",
	"FWFT_MAX"
})

enum.MakeEnum("EInfluenceType", {
	"Fluid_Flow",
	"Fluid_Raindrops",
	"Fluid_Wave",
	"Fluid_Sphere",
	"Fluid_MAX"
})

enum.MakeEnum("EFontImportCharacterSet", {
	"FontICS_Default",
	"FontICS_Ansi",
	"FontICS_Symbol",
	"FontICS_MAX"
})

enum.MakeEnum("EWaveformFunction", {
	"WF_Constant",
	"WF_LinearIncreasing",
	"WF_LinearDecreasing",
	"WF_Sin0to90",
	"WF_Sin90to180",
	"WF_Sin0to180",
	"WF_Noise",
	"WF_MAX"
})

enum.MakeEnum("EFullyLoadPackageType", {
	"FULLYLOAD_Map",
	"FULLYLOAD_Game_PreLoadClass",
	"FULLYLOAD_Game_PostLoadClass",
	"FULLYLOAD_Always",
	"FULLYLOAD_Mutator",
	"FULLYLOAD_MAX"
})

enum.MakeEnum("EStandbyType", {
	"STDBY_Rx",
	"STDBY_Tx",
	"STDBY_BadPing",
	"STDBY_MAX"
})

enum.MakeEnum("EGameStatGroups", {
	"GSG_EngineStats",
	"GSG_Game",
	"GSG_Team",
	"GSG_Player",
	"GSG_Weapon",
	"GSG_Damage",
	"GSG_Projectile",
	"GSG_Pawn",
	"GSG_GameSpecific",
	"GSG_Aggregate",
	"GSG_MAX"
})

enum.MakeEnum("EMusicState", {
	"MUSIC_PlayingAmbientMusic",
	"MUSIC_PlayingCustomAmbientMusic",
	"MUSIC_PlayingCombatMusicFull",
	"MUSIC_PlayingCombatMusicMid",
	"MUSIC_PlayingBossMusic",
	"MUSIC_PlayingCustomCombatMusic",
	"MUSIC_MAX"
})

enum.MakeEnum("EHostMigrationProgress", {
	"HostMigration_None",
	"HostMigration_FindingNewHost",
	"HostMigration_MigratingAsHost",
	"HostMigration_MigratingAsClient",
	"HostMigration_ClientTravel",
	"HostMigration_HostReadyToTravel",
	"HostMigration_Failed",
	"HostMigration_MAX"
})

enum.MakeEnum("EConsoleType", {
	"CONSOLE_Any",
	"CONSOLE_Xbox360",
	"CONSOLE_PS3",
	"CONSOLE_Mobile",
	"CONSOLE_IPhone",
	"CONSOLE_Android",
	"CONSOLE_MAX"
})

enum.MakeEnum("EVisibilityAggressiveness", {
	"VIS_LeastAggressive",
	"VIS_ModeratelyAggressive",
	"VIS_MostAggressive",
	"VIS_Max"
})

enum.MakeEnum("ENetMode", {
	"NM_Standalone",
	"NM_DedicatedServer",
	"NM_ListenServer",
	"NM_Client",
	"NM_MAX"
})

enum.MakeEnum("ESplitScreenType", {
	"eSST_NONE",
	"eSST_2P_HORIZONTAL",
	"eSST_2P_VERTICAL",
	"eSST_3P_FAVOR_TOP",
	"eSST_3P_FAVOR_BOTTOM",
	"eSST_4P",
	"eSST_MAX"
})

enum.MakeEnum("ESafeZoneType", {
	"eSZ_TOP",
	"eSZ_BOTTOM",
	"eSZ_LEFT",
	"eSZ_RIGHT",
	"eSZ_MAX"
})

enum.MakeEnum("EShowPathsOutput", {
	"eShowPaths_Off",
	"eAllReachSpecs",
	"eSpecialMovementsOnly",
	"eNoSpecialMovements",
	"EShowPathsOutput_MAX"
})

enum.MakeEnum("EResourcePoolState", {
	"RPS_Depleted",
	"RPS_Filled",
	"RPS_Regenerating",
	"RPS_MAX"
})

enum.MakeEnum("EObstacleCollisionType", {
	"EOCT_ModifyNavMesh",
	"EOCT_BuildThrough",
	"EOCT_BuildAround",
	"EOCT_MAX"
})

enum.MakeEnum("GBXNavMeshSpecialMoveType", {
	"GBXNAVSPECIALMOVE_None",
	"GBXNAVSPECIALMOVE_WaitForPathObject",
	"GBXNAVSPECIALMOVE_ForceMoveToDestination",
	"GBXNAVSPECIALMOVE_MAX"
})

enum.MakeEnum("EBodyCompositionApplicationMode", {
	"EBCAM_Game",
	"EBCAM_BackMenu",
	"EBCAM_BackMenuInspection",
	"EBCAM_EditorPreview",
	"EBCAM_Frontend",
	"EBCAM_Foreground",
	"EBCAM_MAX"
})

enum.MakeEnum("EEdgeHandlingStatus", {
	"EHS_AddedBothDirs",
	"EHS_Added0to1",
	"EHS_Added1to0",
	"EHS_AddedNone",
	"EHS_MAX"
})

enum.MakeEnum("InterpGroupAlignmentTypes", {
	"IGAT_None",
	"IGAT_Teleport",
	"IGAT_Lerp",
	"IGAT_MAX"
})

enum.MakeEnum("ETrackPlayDirection", {
	"ETPD_PlayBoth",
	"ETPD_PlayOnlyForward",
	"ETPD_PlayOnlyReverse",
	"ETPD_MAX"
})

enum.MakeEnum("ETrackActiveCondition", {
	"ETAC_Always",
	"ETAC_GoreEnabled",
	"ETAC_GoreDisabled",
	"ETAC_MAX"
})

enum.MakeEnum("EHeadTrackingAction", {
	"EHTA_DisableHeadTracking",
	"EHTA_EnableHeadTracking",
	"EHTA_MAX"
})

enum.MakeEnum("ETrackToggleAction", {
	"ETTA_Off",
	"ETTA_On",
	"ETTA_Toggle",
	"ETTA_Trigger",
	"ETTA_MAX"
})

enum.MakeEnum("EVisibilityTrackCondition", {
	"EVTC_Always",
	"EVTC_GoreEnabled",
	"EVTC_GoreDisabled",
	"EVTC_MAX"
})

enum.MakeEnum("EVisibilityTrackAction", {
	"EVTA_Hide",
	"EVTA_Show",
	"EVTA_Toggle",
	"EVTA_MAX"
})

enum.MakeEnum("EInterpTrackMoveRotMode", {
	"IMR_Keyframed",
	"IMR_LookAtGroup",
	"IMR_Ignore",
	"IMR_MAX"
})

enum.MakeEnum("EInterpTrackMoveFrame", {
	"IMF_World",
	"IMF_RelativeToInitial",
	"IMF_MAX"
})

enum.MakeEnum("EInterpMoveAxis", {
	"AXIS_TranslationX",
	"AXIS_TranslationY",
	"AXIS_TranslationZ",
	"AXIS_RotationX",
	"AXIS_RotationY",
	"AXIS_RotationZ",
	"AXIS_MAX"
})

enum.MakeEnum("LevelGridCellShape", {
	"LGCS_Box",
	"LGCS_Hex",
	"LGCS_MAX"
})

enum.MakeEnum("ELandmarkType", {
	"LANDMARK_Custom",
	"LANDMARK_Transition",
	"LANDMARK_MAX"
})

enum.MakeEnum("ECurrentVisibility", {
	"ECV_NotUpdated",
	"ECV_Encompasses",
	"ECV_NotEncompasses",
	"ECV_Disabled",
	"ECV_MAX"
})

enum.MakeEnum("EStreamingVolumeUsage", {
	"SVB_Loading",
	"SVB_LoadingAndVisibility",
	"SVB_VisibilityBlockingOnLoad",
	"SVB_BlockingOnLoad",
	"SVB_LoadingNotVisible",
	"SVB_MAX"
})

enum.MakeEnum("ELightShaftType", {
	"LightShaft_Directional",
	"LightShaft_Spot",
	"LightShaft_Point",
	"LightShaft_MAX"
})

enum.MakeEnum("ELineEditMode", {
	"LEM_Cover",
	"LEM_SI",
	"LEM_MAX"
})

enum.MakeEnum("ELineSegmentType", {
	"LSTY_Cover",
	"LSTY_CoverLink",
	"LSTY_SIZone",
	"LSTY_SIRetreat",
	"LSTY_SICombatZone",
	"LSTY_SIStealth",
	"LSTY_MAX"
})

enum.MakeEnum("ELineSegmentMaterial", {
	"LSM_Default",
	"LSM_Vulnerable",
	"LSM_Vantage",
	"LSM_MAX"
})

enum.MakeEnum("ETextureColorChannel", {
	"TCC_Red",
	"TCC_Green",
	"TCC_Blue",
	"TCC_Alpha",
	"TCC_MAX"
})

enum.MakeEnum("ECustomMaterialOutputType", {
	"CMOT_Float1",
	"CMOT_Float2",
	"CMOT_Float3",
	"CMOT_Float4",
	"CMOT_MAX"
})

enum.MakeEnum("EDepthOfFieldFunctionValue", {
	"TDOF_NearAndFarMask",
	"TDOF_NearMask",
	"TDOF_FarMask",
	"TDOF_MAX"
})

enum.MakeEnum("EGradientStyle", {
	"GRADIENT_Linear",
	"GRADIENT_Radial",
	"GRADIENT_Reflected",
	"GRADIENT_MAX"
})

enum.MakeEnum("ESceneTextureType", {
	"SceneTex_Lighting",
	"SceneTex_MAX"
})

enum.MakeEnum("ETerrainCoordMappingType", {
	"TCMT_Auto",
	"TCMT_XY",
	"TCMT_XZ",
	"TCMT_YZ",
	"TCMT_MAX"
})

enum.MakeEnum("ETerrainMaterialProjectionType", {
	"TMPT_XY",
	"TMPT_XZ",
	"TMPT_YZ",
	"TMPT_MAX"
})

enum.MakeEnum("EMaterialVectorCoordTransform", {
	"TRANSFORM_World",
	"TRANSFORM_View",
	"TRANSFORM_Local",
	"TRANSFORM_Tangent",
	"TRANSFORM_MAX"
})

enum.MakeEnum("EMaterialVectorCoordTransformSource", {
	"TRANSFORMSOURCE_World",
	"TRANSFORMSOURCE_Local",
	"TRANSFORMSOURCE_Tangent",
	"TRANSFORMSOURCE_MAX"
})

enum.MakeEnum("EMaterialPositionTransform", {
	"TRANSFORMPOS_World",
	"TRANSFORMPOS_MAX"
})

enum.MakeEnum("EVectorIfComparator", {
	"VIC_Greater",
	"VIC_GreaterEqual",
	"VIC_Equal",
	"VIC_NotEqual",
	"VIC_MAX"
})

enum.MakeEnum("FFG_ForceFieldCoordinates", {
	"FFG_CARTESIAN",
	"FFG_SPHERICAL",
	"FFG_CYLINDRICAL",
	"FFG_TOROIDAL",
	"FFG_MAX"
})

enum.MakeEnum("FFB_ForceFieldCoordinates", {
	"FFB_CARTESIAN",
	"FFB_SPHERICAL",
	"FFB_CYLINDRICAL",
	"FFB_TOROIDAL",
	"FFB_MAX"
})

enum.MakeEnum("EOnlineProfilePropertyOwner", {
	"OPPO_None",
	"OPPO_OnlineService",
	"OPPO_Game",
	"OPPO_MAX"
})

enum.MakeEnum("EOnlinePlayerStorageAsyncState", {
	"OPAS_NotStarted",
	"OPAS_Read",
	"OPAS_Write",
	"OPAS_Finished",
	"OPAS_MAX"
})

enum.MakeEnum("EProviderAccessType", {
	"ACCESS_ReadOnly",
	"ACCESS_PerField",
	"ACCESS_WriteAll",
	"ACCESS_MAX"
})

enum.MakeEnum("EProfileSettingID", {
	"PSI_Unknown",
	"PSI_ControllerVibration",
	"PSI_YInversion",
	"PSI_GamerCred",
	"PSI_GamerRep",
	"PSI_VoiceMuted",
	"PSI_VoiceThruSpeakers",
	"PSI_VoiceVolume",
	"PSI_GamerPictureKey",
	"PSI_GamerMotto",
	"PSI_GamerTitlesPlayed",
	"PSI_GamerAchievementsEarned",
	"PSI_GameDifficulty",
	"PSI_ControllerSensitivity",
	"PSI_PreferredColor1",
	"PSI_PreferredColor2",
	"PSI_AutoAim",
	"PSI_AutoCenter",
	"PSI_MovementControl",
	"PSI_RaceTransmission",
	"PSI_RaceCameraLocation",
	"PSI_RaceBrakeControl",
	"PSI_RaceAcceleratorControl",
	"PSI_GameCredEarned",
	"PSI_GameAchievementsEarned",
	"PSI_EndLiveIds",
	"PSI_ProfileVersionNum",
	"PSI_ProfileSaveCount",
	"PSI_MAX"
})

enum.MakeEnum("EProfileDifficultyOptions", {
	"PDO_Normal",
	"PDO_Easy",
	"PDO_Hard",
	"PDO_MAX"
})

enum.MakeEnum("EProfileControllerSensitivityOptions", {
	"PCSO_Medium",
	"PCSO_Low",
	"PCSO_High",
	"PCSO_MAX"
})

enum.MakeEnum("EProfilePreferredColorOptions", {
	"PPCO_None",
	"PPCO_Black",
	"PPCO_White",
	"PPCO_Yellow",
	"PPCO_Orange",
	"PPCO_Pink",
	"PPCO_Red",
	"PPCO_Purple",
	"PPCO_Blue",
	"PPCO_Green",
	"PPCO_Brown",
	"PPCO_Silver",
	"PPCO_MAX"
})

enum.MakeEnum("EProfileAutoAimOptions", {
	"PAAO_Off",
	"PAAO_On",
	"PAAO_MAX"
})

enum.MakeEnum("EProfileAutoCenterOptions", {
	"PACO_Off",
	"PACO_On",
	"PACO_MAX"
})

enum.MakeEnum("EProfileMovementControlOptions", {
	"PMCO_L_Thumbstick",
	"PMCO_R_Thumbstick",
	"PMCO_MAX"
})

enum.MakeEnum("EProfileRaceTransmissionOptions", {
	"PRTO_Auto",
	"PRTO_Manual",
	"PRTO_MAX"
})

enum.MakeEnum("EProfileRaceCameraLocationOptions", {
	"PRCLO_Behind",
	"PRCLO_Front",
	"PRCLO_Inside",
	"PRCLO_MAX"
})

enum.MakeEnum("EProfileRaceBrakeControlOptions", {
	"PRBCO_Trigger",
	"PRBCO_Button",
	"PRBCO_MAX"
})

enum.MakeEnum("EProfileRaceAcceleratorControlOptions", {
	"PRACO_Trigger",
	"PRACO_Button",
	"PRACO_MAX"
})

enum.MakeEnum("EProfileYInversionOptions", {
	"PYIO_Off",
	"PYIO_On",
	"PYIO_MAX"
})

enum.MakeEnum("EProfileXInversionOptions", {
	"PXIO_Off",
	"PXIO_On",
	"PXIO_MAX"
})

enum.MakeEnum("EProfileOmniDirEvadeOptions", {
	"PODI_Off",
	"PODI_On",
	"PODI_MAX"
})

enum.MakeEnum("EProfileControllerVibrationToggleOptions", {
	"PCVTO_Off",
	"PCVTO_IgnoreThis",
	"PCVTO_IgnoreThis2",
	"PCVTO_On",
	"PCVTO_MAX"
})

enum.MakeEnum("EProfileVoiceThruSpeakersOptions", {
	"PVTSO_Off",
	"PVTSO_On",
	"PVTSO_Both",
	"PVTSO_MAX"
})

enum.MakeEnum("EEmitterRenderMode", {
	"ERM_Normal",
	"ERM_Point",
	"ERM_Cross",
	"ERM_None",
	"ERM_MAX"
})

enum.MakeEnum("EParticleSubUVInterpMethod", {
	"PSUVIM_None",
	"PSUVIM_Linear",
	"PSUVIM_Linear_Blend",
	"PSUVIM_Random",
	"PSUVIM_Random_Blend",
	"PSUVIM_MAX"
})

enum.MakeEnum("EParticleBurstMethod", {
	"EPBM_Instant",
	"EPBM_Interpolated",
	"EPBM_MAX"
})

enum.MakeEnum("EModuleType", {
	"EPMT_General",
	"EPMT_TypeData",
	"EPMT_Beam",
	"EPMT_Trail",
	"EPMT_Spawn",
	"EPMT_Required",
	"EPMT_Event",
	"EPMT_MAX"
})

enum.MakeEnum("EParticleSourceSelectionMethod", {
	"EPSSM_Random",
	"EPSSM_Sequential",
	"EPSSM_MAX"
})

enum.MakeEnum("EAttractorParticleSelectionMethod", {
	"EAPSM_Random",
	"EAPSM_Sequential",
	"EAPSM_MAX"
})

enum.MakeEnum("Beam2SourceTargetMethod", {
	"PEB2STM_Default",
	"PEB2STM_UserSet",
	"PEB2STM_Emitter",
	"PEB2STM_Particle",
	"PEB2STM_Actor",
	"PEB2STM_MAX"
})

enum.MakeEnum("Beam2SourceTargetTangentMethod", {
	"PEB2STTM_Direct",
	"PEB2STTM_UserSet",
	"PEB2STTM_Distribution",
	"PEB2STTM_Emitter",
	"PEB2STTM_MAX"
})

enum.MakeEnum("BeamModifierType", {
	"PEB2MT_Source",
	"PEB2MT_Target",
	"PEB2MT_MAX"
})

enum.MakeEnum("EParticleCameraOffsetUpdateMethod", {
	"EPCOUM_DirectSet",
	"EPCOUM_Additive",
	"EPCOUM_Scalar",
	"EPCOUM_MAX"
})

enum.MakeEnum("EParticleCollisionComplete", {
	"EPCC_Kill",
	"EPCC_Freeze",
	"EPCC_HaltCollisions",
	"EPCC_FreezeTranslation",
	"EPCC_FreezeRotation",
	"EPCC_FreezeMovement",
	"EPCC_MAX"
})

enum.MakeEnum("ELocationBoneSocketSource", {
	"BONESOCKETSOURCE_Bones",
	"BONESOCKETSOURCE_Sockets",
	"BONESOCKETSOURCE_MAX"
})

enum.MakeEnum("ELocationBoneSocketSelectionMethod", {
	"BONESOCKETSEL_Sequential",
	"BONESOCKETSEL_Random",
	"BONESOCKETSEL_RandomExhaustive",
	"BONESOCKETSEL_MAX"
})

enum.MakeEnum("ELocationEmitterSelectionMethod", {
	"ELESM_Random",
	"ELESM_Sequential",
	"ELESM_MAX"
})

enum.MakeEnum("CylinderHeightAxis", {
	"PMLPC_HEIGHTAXIS_X",
	"PMLPC_HEIGHTAXIS_Y",
	"PMLPC_HEIGHTAXIS_Z",
	"PMLPC_HEIGHTAXIS_MAX"
})

enum.MakeEnum("ELocationSkelVertSurfaceSource", {
	"VERTSURFACESOURCE_Vert",
	"VERTSURFACESOURCE_Surface",
	"VERTSURFACESOURCE_MAX"
})

enum.MakeEnum("EOrbitChainMode", {
	"EOChainMode_Add",
	"EOChainMode_Scale",
	"EOChainMode_Link",
	"EOChainMode_MAX"
})

enum.MakeEnum("EParticleAxisLock", {
	"EPAL_NONE",
	"EPAL_X",
	"EPAL_Y",
	"EPAL_Z",
	"EPAL_NEGATIVE_X",
	"EPAL_NEGATIVE_Y",
	"EPAL_NEGATIVE_Z",
	"EPAL_ROTATE_X",
	"EPAL_ROTATE_Y",
	"EPAL_ROTATE_Z",
	"EPAL_MAX"
})

enum.MakeEnum("EEmitterDynamicParameterValue", {
	"EDPV_UserSet",
	"EDPV_VelocityX",
	"EDPV_VelocityY",
	"EDPV_VelocityZ",
	"EDPV_VelocityMag",
	"EDPV_MAX"
})

enum.MakeEnum("EParticleScreenAlignment", {
	"PSA_Square",
	"PSA_Rectangle",
	"PSA_Velocity",
	"PSA_TypeSpecific",
	"PSA_MAX"
})

enum.MakeEnum("EEmitterNormalsMode", {
	"ENM_CameraFacing",
	"ENM_Spherical",
	"ENM_Cylindrical",
	"ENM_MAX"
})

enum.MakeEnum("EParticleSortMode", {
	"PSORTMODE_None",
	"PSORTMODE_ViewProjDepth",
	"PSORTMODE_DistanceToView",
	"PSORTMODE_Age_OldestFirst",
	"PSORTMODE_Age_NewestFirst",
	"PSORTMODE_MAX"
})

enum.MakeEnum("ETrail2SourceMethod", {
	"PET2SRCM_Default",
	"PET2SRCM_Particle",
	"PET2SRCM_Actor",
	"PET2SRCM_MAX"
})

enum.MakeEnum("ETrail2SpawnMethod", {
	"PET2SM_Emitter",
	"PET2SM_Velocity",
	"PET2SM_Distance",
	"PET2SM_MAX"
})

enum.MakeEnum("ETrailTaperMethod", {
	"PETTM_None",
	"PETTM_Full",
	"PETTM_Partial",
	"PETTM_MAX"
})

enum.MakeEnum("EBeamMethod", {
	"PEBM_Distance",
	"PEBM_EndPoints",
	"PEBM_EndPoints_Interpolated",
	"PEBM_UserSet_EndPoints",
	"PEBM_UserSet_EndPoints_Interpolated",
	"PEBM_MAX"
})

enum.MakeEnum("EBeamEndPointMethod", {
	"PEBEPM_Calculated",
	"PEBEPM_Distribution",
	"PEBEPM_Distribution_Constant",
	"PEBEPM_MAX"
})

enum.MakeEnum("EBeam2Method", {
	"PEB2M_Distance",
	"PEB2M_Target",
	"PEB2M_Branch",
	"PEB2M_MAX"
})

enum.MakeEnum("EBeamTaperMethod", {
	"PEBTM_None",
	"PEBTM_Full",
	"PEBTM_Partial",
	"PEBTM_MAX"
})

enum.MakeEnum("EMeshCameraFacingOptions", {
	"XAxisFacing_NoUp",
	"XAxisFacing_ZUp",
	"XAxisFacing_NegativeZUp",
	"XAxisFacing_YUp",
	"XAxisFacing_NegativeYUp",
	"LockedAxis_ZAxisFacing",
	"LockedAxis_NegativeZAxisFacing",
	"LockedAxis_YAxisFacing",
	"LockedAxis_NegativeYAxisFacing",
	"VelocityAligned_ZAxisFacing",
	"VelocityAligned_NegativeZAxisFacing",
	"VelocityAligned_YAxisFacing",
	"VelocityAligned_NegativeYAxisFacing",
	"EMeshCameraFacingOptions_MAX"
})

enum.MakeEnum("EMeshCameraFacingUpAxis", {
	"CameraFacing_NoneUP",
	"CameraFacing_ZUp",
	"CameraFacing_NegativeZUp",
	"CameraFacing_YUp",
	"CameraFacing_NegativeYUp",
	"CameraFacing_MAX"
})

enum.MakeEnum("EMeshScreenAlignment", {
	"PSMA_MeshFaceCameraWithRoll",
	"PSMA_MeshFaceCameraWithSpin",
	"PSMA_MeshFaceCameraWithLockedAxis",
	"PSMA_MAX"
})

enum.MakeEnum("EPhysXMeshRotationMethod", {
	"PMRM_Disabled",
	"PMRM_Spherical",
	"PMRM_Box",
	"PMRM_LongBox",
	"PMRM_FlatBox",
	"PMRM_Velocity",
	"PMRM_MAX"
})

enum.MakeEnum("ETrailsRenderAxisOption", {
	"Trails_CameraUp",
	"Trails_SourceUp",
	"Trails_WorldUp",
	"Trails_MAX"
})

enum.MakeEnum("EParticleSystemOcclusionBoundsMethod", {
	"EPSOBM_None",
	"EPSOBM_ParticleBounds",
	"EPSOBM_CustomBounds",
	"EPSOBM_MAX"
})

enum.MakeEnum("EParticleSystemUpdateMode", {
	"EPSUM_RealTime",
	"EPSUM_FixedTime",
	"EPSUM_MAX"
})

enum.MakeEnum("EPersistentOperation", {
	"PO_Saving",
	"PO_Restoring",
	"PO_MAX"
})

enum.MakeEnum("EPhysEffectType", {
	"EPMET_Impact",
	"EPMET_Slide",
	"EPMET_MAX"
})

enum.MakeEnum("ESimulationMethod", {
	"ESM_SPH",
	"ESM_NO_PARTICLE_INTERACTION",
	"ESM_MIXED_MODE",
	"ESM_MAX"
})

enum.MakeEnum("EPacketSizeMultiplier", {
	"EPSM",
	"EPSM1",
	"EPSM2",
	"EPSM3",
	"EPSM4",
	"EPSM5",
	"EPSM_MAX"
})

enum.MakeEnum("ESceneCaptureViewMode", {
	"SceneCapView_Lit",
	"SceneCapView_Unlit",
	"SceneCapView_LitNoShadows",
	"SceneCapView_Wire",
	"SceneCapView_MAX"
})

enum.MakeEnum("ESleepFamily", {
	"SF_Normal",
	"SF_Sensitive",
	"SF_MAX"
})

enum.MakeEnum("EConstraintDriveChange", {
	"CONST_DRIVE_Unchanged",
	"CONST_DRIVE_Enabled",
	"CONST_DRIVE_Disabled",
	"CONST_DRIVE_MAX"
})

enum.MakeEnum("ERadialForceType", {
	"RFT_Force",
	"RFT_Impulse",
	"RFT_MAX"
})

enum.MakeEnum("ENetRelevantFor", {
	"NETRELEVANT_Everyone",
	"NETRELEVANT_Owner",
	"NETRELEVANT_Server",
	"NETRELEVANT_MAX"
})

enum.MakeEnum("ERouteDirection", {
	"ERD_Forward",
	"ERD_Reverse",
	"ERD_MAX"
})

enum.MakeEnum("ERouteFillAction", {
	"RFA_Overwrite",
	"RFA_Add",
	"RFA_Remove",
	"RFA_Clear",
	"RFA_MAX"
})

enum.MakeEnum("ERouteType", {
	"ERT_Linear",
	"ERT_Loop",
	"ERT_Circle",
	"ERT_MAX"
})

enum.MakeEnum("EPointSelection", {
	"PS_Normal",
	"PS_Random",
	"PS_Reverse",
	"PS_MAX"
})

enum.MakeEnum("DistanceMethod", {
	"DISTANCE_Average",
	"DISTANCE_Furthest",
	"DISTANCE_Nearest",
	"DISTANCE_MAX"
})

enum.MakeEnum("EMeshType", {
	"MeshType_StaticMesh",
	"MeshType_SkeletalMesh",
	"MeshType_MAX"
})

enum.MakeEnum("EParticleEventOutputType", {
	"ePARTICLEOUT_Spawn",
	"ePARTICLEOUT_Death",
	"ePARTICLEOUT_Collision",
	"ePARTICLEOUT_Kismet",
	"ePARTICLEOUT_Trace",
	"ePARTICLEOUT_MAX"
})

enum.MakeEnum("EBoneControlSpace", {
	"BCS_WorldSpace",
	"BCS_ActorSpace",
	"BCS_ComponentSpace",
	"BCS_ParentBoneSpace",
	"BCS_BoneSpace",
	"BCS_OtherBoneSpace",
	"BCS_BaseMeshSpace",
	"BCS_SocketSpace",
	"BCS_MAX"
})

enum.MakeEnum("ESplineControlRotMode", {
	"SCR_NoChange",
	"SCR_AlongSpline",
	"SCR_Interpolate",
	"SCR_MAX"
})

enum.MakeEnum("SoftBodyBoneType", {
	"SOFTBODYBONE_Fixed",
	"SOFTBODYBONE_BreakableAttachment",
	"SOFTBODYBONE_TwoWayAttachment",
	"SOFTBODYBONE_MAX"
})

enum.MakeEnum("ClothBoneType", {
	"CLOTHBONE_Fixed",
	"CLOTHBONE_BreakableAttachment",
	"CLOTHBONE_TearLine",
	"CLOTHBONE_MAX"
})

enum.MakeEnum("TriangleSortOption", {
	"TRISORT_None",
	"TRISORT_CenterRadialDistance",
	"TRISORT_Random",
	"TRISORT_MergeContiguous",
	"TRISORT_Custom",
	"TRISORT_CustomLeftRight",
	"TRISORT_MAX"
})

enum.MakeEnum("BoneBreakOption", {
	"BONEBREAK_SoftPreferred",
	"BONEBREAK_AutoDetect",
	"BONEBREAK_RigidPreferred",
	"BONEBREAK_MAX"
})

enum.MakeEnum("TriangleSortAxis", {
	"TSA_X_Axis",
	"TSA_Y_Axis",
	"TSA_Z_Axis",
	"TSA_MAX"
})

enum.MakeEnum("ClothMovementScaleGen", {
	"ECMDM_DistToFixedVert",
	"ECMDM_VertexBoneWeight",
	"ECMDM_Empty",
	"ECMDM_MAX"
})

enum.MakeEnum("EDecompressionType", {
	"DTYPE_Setup",
	"DTYPE_Invalid",
	"DTYPE_Preview",
	"DTYPE_Native",
	"DTYPE_RealTime",
	"DTYPE_Procedural",
	"DTYPE_Xenon",
	"DTYPE_MAX"
})

enum.MakeEnum("EWheelSide", {
	"SIDE_None",
	"SIDE_Left",
	"SIDE_Right",
	"SIDE_MAX"
})

enum.MakeEnum("ETargetableListSearchType", {
	"TL_Enemy",
	"TL_Friendly",
	"TL_Neutral",
	"TL_All",
	"TL_MAX"
})

enum.MakeEnum("ETerrainMappingType", {
	"TMT_Auto",
	"TMT_XY",
	"TMT_XZ",
	"TMT_YZ",
	"TMT_MAX"
})

enum.MakeEnum("TextureFlipBookMethod", {
	"TFBM_UL_ROW",
	"TFBM_UL_COL",
	"TFBM_UR_ROW",
	"TFBM_UR_COL",
	"TFBM_LL_ROW",
	"TFBM_LL_COL",
	"TFBM_LR_ROW",
	"TFBM_LR_COL",
	"TFBM_RANDOM",
	"TFBM_MAX"
})

enum.MakeEnum("EMovieStreamSource", {
	"MovieStream_File",
	"MovieStream_Memory",
	"MovieStream_MAX"
})

enum.MakeEnum("ETonemapperType", {
	"Tonemapper_Off",
	"Tonemapper_Filmic",
	"Tonemapper_Customizable",
	"Tonemapper_MAX"
})

enum.MakeEnum("EMenuOptionType", {
	"MENUOT_ComboReadOnly",
	"MENUOT_ComboNumeric",
	"MENUOT_CheckBox",
	"MENUOT_Slider",
	"MENUOT_Spinner",
	"MENUOT_EditBox",
	"MENUOT_CollectionCheckBox",
	"MENUOT_CollapsingList",
	"MENUOT_MAX"
})

enum.MakeEnum("EStatsFetchType", {
	"SFT_Player",
	"SFT_CenteredOnPlayer",
	"SFT_Friends",
	"SFT_TopRankings",
	"SFT_MAX"
})

enum.MakeEnum("PlayerMark", {
	"PM_Trash",
	"PM_Standard",
	"PM_Favorite",
	"PM_MAX"
})

enum.MakeEnum("EStatCombinationMethod", {
	"SCM_Multiply",
	"SCM_Divide",
	"SCM_Add",
	"SCM_Subtract",
	"SCM_DontCombine",
	"SCM_MAX"
})

enum.MakeEnum("EAttributeSlotEffectMode", {
	"ATTRSLOTEFFECTMODE_Default",
	"ATTRSLOTEFFECTMODE_Timed",
	"ATTRSLOTEFFECTMODE_Custom",
	"ATTRSLOTEFFECTMODE_MAX"
})

enum.MakeEnum("ECurrencyType", {
	"CURRENCY_Credits",
	"CURRENCY_Eridium",
	"CURRENCY_SeraphCrystals",
	"CURRENCY_Reserved_A",
	"CURRENCY_Reserved_B",
	"CURRENCY_Reserved_C",
	"CURRENCY_Reserved_D",
	"CURRENCY_Reserved_E",
	"CURRENCY_Reserved_F",
	"CURRENCY_Reserved_G",
	"CURRENCY_Reserved_H",
	"CURRENCY_Reserved_I",
	"CURRENCY_Reserved_J",
	"CURRENCY_MAX"
})

enum.MakeEnum("EPlayerDroppability", {
	"EPD_Droppable",
	"EPD_Sellable",
	"EPD_CannotDropOrSell",
	"EPD_MAX"
})

enum.MakeEnum("SerialNumberState", {
	"SNS_Empty",
	"SNS_Writing",
	"SNS_Full",
	"SNS_Reading",
	"SNS_Encrypted",
	"SNS_MAX"
})

enum.MakeEnum("EncryptedSerial", {
	"ES_Encrypted",
	"ES_MAX"
})

enum.MakeEnum("EWeaponFireType", {
	"EWFT_InstantHit",
	"EWFT_Projectile",
	"EWFT_Beam",
	"EWFT_Custom",
	"EWFT_None",
	"EWFT_MAX"
})

