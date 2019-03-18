from ctypes import *
import BL2SDK


class FStaticMeshLODElement(Structure):
    _fields_ = [
        ("Material", POINTER(UMaterialInterface)),
        ("bEnableShadowCasting", c_bool, 1),
        ("", c_ulong, 0),
        ("Unknown1", c_ubyte, 0x4),
        ("bEnableCollision", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FStaticMeshLODInfo(Structure):
    _fields_ = [("Elements", TArray_FStaticMeshLODElement)]


class FAnimSlotDesc(Structure):
    _fields_ = [("SlotName", FName), ("NumChannels", c_int)]


class FRigidBodyState(Structure):
    _fields_ = [
        ("Position", FVector),
        ("Unknown1", c_ubyte, 0x4),
        ("Quaternion", FQuat),
        ("LinVel", FVector),
        ("AngVel", FVector),
        ("bNewData", c_ubyte),
    ]


class FRigidBodyContactInfo(Structure):
    _fields_ = [
        ("ContactPosition", FVector),
        ("ContactNormal", FVector),
        ("ContactPenetration", c_float),
        ("ContactVelocity", FVector * 2),
        ("PhysMaterial", POINTER(UPhysicalMaterial) * 2),
    ]


class FCollisionImpactData(Structure):
    _fields_ = [
        ("ContactInfos", TArray_FRigidBodyContactInfo),
        ("TotalNormalForceVector", FVector),
        ("TotalFrictionForceVector", FVector),
    ]


class FPhysEffectInfo(Structure):
    _fields_ = [
        ("Threshold", c_float),
        ("ReFireDelay", c_float),
        ("Effect", POINTER(UParticleSystem)),
        ("Sound", POINTER(USoundCue)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]


class FActorReference(Structure):
    _fields_ = [("Actor", POINTER(AActor)), ("Guid", FGuid)]


class FNavReference(Structure):
    _fields_ = [("Nav", POINTER(ANavigationPoint)), ("Guid", FGuid)]


class FBasedPosition(Structure):
    _fields_ = [
        ("Base", POINTER(AActor)),
        ("Position", FVector),
        ("CachedBaseLocation", FVector),
        ("CachedBaseRotation", FRotator),
        ("CachedTransPosition", FVector),
    ]


class FResourcePoolReference(Structure):
    _fields_ = [
        ("PoolManager", POINTER(AResourcePoolManager)),
        ("PoolIndexInManager", c_ubyte),
        ("PoolGUID", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("Data", POINTER(UResourcePool)),
    ]


class FTraceHitInfo(Structure):
    _fields_ = [
        ("Material", POINTER(UMaterial)),
        ("PhysMaterial", POINTER(UPhysicalMaterial)),
        ("Item", c_int),
        ("LevelIndex", c_int),
        ("BoneName", FName),
        ("HitComponent", POINTER(UPrimitiveComponent)),
    ]


class FImpactInfo(Structure):
    _fields_ = [
        ("HitActor", POINTER(AActor)),
        ("HitLocation", FVector),
        ("HitNormal", FVector),
        ("RayDir", FVector),
        ("StartTrace", FVector),
        ("HitInfo", FTraceHitInfo),
        ("EndTrace", FVector),
    ]


class FAkPlayingInfo(Structure):
    _fields_ = [("SourceComponent", POINTER(UAkComponent)), ("AkPlayingId", c_int)]


class FSeqOpInputLink(Structure):
    _fields_ = [
        ("LinkDesc", FString),
        ("QueuedActivations", c_int),
        ("LinkedOp", POINTER(USequenceOp)),
        ("bHidden", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bDisabled", c_bool, 1),
        ("bDisabledPIE", c_bool, 1),
        ("bHasImpulse", c_bool, 1),
        ("", c_ulong, 0),
        ("ActivateDelay", c_float),
    ]


class FAnimSlotInfo(Structure):
    _fields_ = [("SlotName", FName), ("ChannelWeights", TArray_float)]


class FTraceNotifyInfo(Structure):
    _fields_ = [
        ("ActorToNotify", POINTER(AActor)),
        ("ActorCallingTrace", POINTER(AActor)),
        ("ComponentHit", POINTER(UComponent)),
        ("HitTime", c_float),
        ("HitLocation", FVector),
        ("HitNormal", FVector),
        ("End", FVector),
        ("Start", FVector),
        ("Extent", FVector),
        ("TraceFlags", c_int),
    ]


class FTimerData(Structure):
    _fields_ = [
        ("bLoop", c_bool, 1),
        ("bPaused", c_bool, 1),
        ("", c_ulong, 0),
        ("FuncName", FName),
        ("Rate", c_float),
        ("Count", c_float),
        ("TimerTimeDilation", c_float),
        ("TimerObj", POINTER(UObject)),
    ]


class FKeyValuePair(Structure):
    _fields_ = [("Key", FString), ("Value", FString)]


class FPlayerResponseLine(Structure):
    _fields_ = [
        ("PlayerNum", c_int),
        ("PlayerID", c_int),
        ("PlayerName", FString),
        ("Ping", c_int),
        ("Score", c_int),
        ("StatsID", c_int),
        ("PlayerInfo", TArray_FKeyValuePair),
    ]


class FServerResponseLine(Structure):
    _fields_ = [
        ("ServerID", c_int),
        ("IP", FString),
        ("Port", c_int),
        ("QueryPort", c_int),
        ("ServerName", FString),
        ("MapName", FString),
        ("GameType", FString),
        ("CurrentPlayers", c_int),
        ("MaxPlayers", c_int),
        ("Ping", c_int),
        ("ServerInfo", TArray_FKeyValuePair),
        ("PlayerInfo", TArray_FPlayerResponseLine),
    ]


class FLocalizedStringSetting(Structure):
    _fields_ = [("Id", c_int), ("ValueIndex", c_int), ("AdvertisementType", c_ubyte)]


class FSettingsData(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Value1", int),
        ("Value2", FPointer),
    ]


class FSettingsProperty(Structure):
    _fields_ = [
        ("PropertyId", c_int),
        ("Data", FSettingsData),
        ("AdvertisementType", c_ubyte),
    ]


class FIdToStringMapping(Structure):
    _fields_ = [("Id", int), ("Name", FString)]


class FStringIdToStringMapping(Structure):
    _fields_ = [
        ("Id", int),
        ("Name", FName),
        ("bIsWildcard", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLocalizedStringSettingMetaData(Structure):
    _fields_ = [
        ("Id", int),
        ("Name", FName),
        ("ColumnHeaderText", FString),
        ("ValueMappings", TArray_FStringIdToStringMapping),
    ]


class FSettingsPropertyPropertyMetaData(Structure):
    _fields_ = [
        ("Id", int),
        ("Name", FName),
        ("ColumnHeaderText", FString),
        ("MappingType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ValueMappings", TArray_FIdToStringMapping),
        ("PredefinedValues", TArray_FSettingsData),
        ("MinVal", c_float),
        ("MaxVal", c_float),
        ("RangeIncrement", c_float),
    ]


class FUniqueNetId(Structure):
    _fields_ = [("Uid", FQWord), ("NpId", c_ubyte * 16)]


class FOnlineRegistrant(Structure):
    _fields_ = [("PlayerNetId", FUniqueNetId)]


class FOnlineArbitrationRegistrant(Structure):
    _fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("MachineId", FQWord),
        ("Trustworthiness", int),
    ]


class FNamedSession(Structure):
    _fields_ = [
        ("SessionName", FName),
        ("SessionInfo", FPointer),
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("Registrants", TArray_FOnlineRegistrant),
        ("ArbitrationRegistrants", TArray_FOnlineArbitrationRegistrant),
    ]


class FNamedInterface(Structure):
    _fields_ = [("InterfaceName", FName), ("InterfaceObject", POINTER(UObject))]


class FOnlinePartyMember(Structure):
    _fields_ = [
        ("UniqueId", FUniqueNetId),
        ("NickName", FString),
        ("LocalUserNum", c_ubyte),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("TitleId", int),
        ("bIsLocal", c_bool, 1),
        ("bIsInPartyVoice", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsInGameSession", c_bool, 1),
        ("bIsPlayingThisGame", c_bool, 1),
        ("", c_ulong, 0),
        ("SessionId", FQWord),
        ("Data1", int),
        ("Data2", int),
        ("Data3", int),
        ("Data4", int),
    ]


class FAchievementDetails(Structure):
    _fields_ = [
        ("Id", int),
        ("AchievementName", FString),
        ("Description", FString),
        ("HowTo", FString),
        ("Image", POINTER(USurface)),
        ("MonthEarned", c_ubyte),
        ("DayEarned", c_ubyte),
        ("YearEarned", c_ubyte),
        ("DayOfWeekEarned", c_ubyte),
        ("GamerPoints", int),
        ("bIsSecret", c_bool, 1),
        ("bWasAchievedOnline", c_bool, 1),
        ("bWasAchievedOffline", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCommunityContentMetadata(Structure):
    _fields_ = [("ContentType", c_int), ("MetadataItems", TArray_FSettingsProperty)]


class FCommunityContentFile(Structure):
    _fields_ = [
        ("ContentId", c_int),
        ("FileId", c_int),
        ("ContentType", c_int),
        ("FileSize", c_int),
        ("Owner", FUniqueNetId),
        ("DownloadCount", c_int),
        ("AverageRating", c_float),
        ("RatingCount", c_int),
        ("LastRatingGiven", c_int),
        ("LocalFilePath", FString),
    ]


class FTitleFile(Structure):
    _fields_ = [
        ("Filename", FString),
        ("AsyncState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Data", TArray_unsigned_char),
    ]


class FNamedInterfaceDef(Structure):
    _fields_ = [("InterfaceName", FName), ("InterfaceClassName", FString)]


class FOnlineFriendMessage(Structure):
    _fields_ = [
        ("SendingPlayerId", FUniqueNetId),
        ("SendingPlayerNick", FString),
        ("bIsFriendInvite", c_bool, 1),
        ("bIsGameInvite", c_bool, 1),
        ("bWasAccepted", c_bool, 1),
        ("bWasDenied", c_bool, 1),
        ("", c_ulong, 0),
        ("Message", FString),
    ]


class FRemoteTalker(Structure):
    _fields_ = [
        ("TalkerId", FUniqueNetId),
        ("LastNotificationTime", c_float),
        ("bWasTalking", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsRegistered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLocalTalker(Structure):
    _fields_ = [
        ("bHasVoice", c_bool, 1),
        ("bHasNetworkedVoice", c_bool, 1),
        ("bIsRecognizingSpeech", c_bool, 1),
        ("bWasTalking", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsRegistered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FOnlinePlayerScore(Structure):
    _fields_ = [("PlayerID", FUniqueNetId), ("TeamID", c_int), ("Score", c_int)]


class FSpeechRecognizedWord(Structure):
    _fields_ = [("WordId", c_int), ("WordText", FString), ("Confidence", c_float)]


class FMarketplaceContent(Structure):
    _fields_ = [
        ("UserIndex", c_int),
        ("OfferId", c_int),
        ("PreviewOfferId", c_int),
        ("OfferName", FString),
        ("OfferType", c_int),
        ("ContentId", TArray_unsigned_char),
        ("bIsUnrestrictedLicense", c_bool, 1),
        ("", c_ulong, 0),
        ("LicenseMask", c_int),
        ("TitleId", c_int),
        ("ContentCategory", c_int),
        ("TitleName", FString),
        ("bUserHasPurchased", c_bool, 1),
        ("", c_ulong, 0),
        ("PackageSize", c_int),
        ("InstallSize", c_int),
        ("SellText", FString),
        ("AssetId", c_int),
        ("PurchaseQuantity", c_int),
        ("PointsPrice", c_int),
        ("PriceText", FString),
        ("OfferIdText", FString),
    ]


class FAppIdLicenseInfo(Structure):
    _fields_ = [("AppID", c_int), ("LicenseMask", c_int)]


class FTOCInfo(Structure):
    _fields_ = [("TOC", FString), ("RootPath", FString), ("Path", FString)]


class FOnlineContent(Structure):
    _fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("", c_ulong, 0),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
    ]


class FOnlineContentNameInfo(Structure):
    _fields_ = [
        ("ContentName", FString),
        ("EngineVersion", c_int),
        ("CookedVersionID", FGuid),
    ]


class FNamedOnlineContent(Structure):
    _fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("", c_ulong, 0),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
        ("NameInfo", FOnlineContentNameInfo),
        ("NamedContentType", c_ubyte),
    ]


class FCompatibilityOnlineContent(Structure):
    _fields_ = [
        ("VersionNumber", c_int),
        ("Container", FNamedOnlineContent),
        ("Content", TArray_FNamedOnlineContent),
    ]


class FOnlineFriend(Structure):
    _fields_ = [
        ("UniqueId", FUniqueNetId),
        ("SessionId", FQWord),
        ("SessionInfo", FString),
        ("NickName", FString),
        ("PresenceInfo", FString),
        ("FriendState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bIsOnline", c_bool, 1),
        ("bIsPlaying", c_bool, 1),
        ("bIsPlayingThisGame", c_bool, 1),
        ("bIsJoinable", c_bool, 1),
        ("bHasVoiceSupport", c_bool, 1),
        ("bHaveInvited", c_bool, 1),
        ("bHasInvitedYou", c_bool, 1),
        ("bHaveRequested", c_bool, 1),
        ("bHasRequestedYou", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FOnlineCrossTitleContent(Structure):
    _fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("", c_ulong, 0),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
        ("TitleId", c_int),
    ]


class FFriendsQuery(Structure):
    _fields_ = [("UniqueId", FUniqueNetId), ("bIsFriend", c_bool, 1), ("", c_ulong, 0)]


class FBaseAuthSession(Structure):
    _fields_ = [
        ("EndPointIP", int),
        ("EndPointPort", int),
        ("EndPointUID", FUniqueNetId),
    ]


class FLocalAuthSession(Structure):
    _fields_ = [
        ("EndPointIP", int),
        ("EndPointPort", int),
        ("EndPointUID", FUniqueNetId),
        ("SessionUID", int),
    ]


class FAuthSession(Structure):
    _fields_ = [
        ("EndPointIP", int),
        ("EndPointPort", int),
        ("EndPointUID", FUniqueNetId),
        ("AuthStatus", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("AuthBlobUID", int),
    ]


class FPendingClientAuth(Structure):
    _fields_ = [
        ("ClientConnection", POINTER(UPlayer)),
        ("ClientUID", FUniqueNetId),
        ("AuthTimestamp", c_float),
        ("AuthRetryCount", c_int),
    ]


class FServerAuthRetry(Structure):
    _fields_ = [("ClientUID", FUniqueNetId), ("AuthRetryCount", c_int)]


class FRBCollisionChannelContainer(Structure):
    _fields_ = [
        ("Default", c_bool, 1),
        ("Nothing", c_bool, 1),
        ("Pawn", c_bool, 1),
        ("Vehicle", c_bool, 1),
        ("Water", c_bool, 1),
        ("GameplayPhysics", c_bool, 1),
        ("EffectPhysics", c_bool, 1),
        ("Untitled1", c_bool, 1),
        ("Untitled2", c_bool, 1),
        ("TossedItems", c_bool, 1),
        ("TossedItemsPlayerVehicle", c_bool, 1),
        ("Cloth", c_bool, 1),
        ("FluidDrain", c_bool, 1),
        ("SoftBody", c_bool, 1),
        ("FracturedMeshPart", c_bool, 1),
        ("BlockingVolume", c_bool, 1),
        ("DeadPawn", c_bool, 1),
        ("Clothing", c_bool, 1),
        ("ClothingCollision", c_bool, 1),
        ("TossedItemsEnemyVehicle", c_bool, 1),
        ("PlayerVehicle", c_bool, 1),
        ("EnemyVehicle", c_bool, 1),
        ("PlayerVehicleEnemyVehicle", c_bool, 1),
        ("TossedItemsPlayerVehicleEnemyVehicle", c_bool, 1),
        ("WillowPickup", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLightingChannelContainer(Structure):
    _fields_ = [
        ("bInitialized", c_bool, 1),
        ("BSP", c_bool, 1),
        ("Static", c_bool, 1),
        ("Dynamic", c_bool, 1),
        ("CompositeDynamic", c_bool, 1),
        ("Skybox", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Crowd", c_bool, 1),
        ("PhysX", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMaterialViewRelevance(Structure):
    _fields_ = [
        ("bOpaque", c_bool, 1),
        ("bTranslucent", c_bool, 1),
        ("bDistortion", c_bool, 1),
        ("bOneLayerDistortionRelevance", c_bool, 1),
        ("bLit", c_bool, 1),
        ("bUsesSceneColor", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FReplicatedInstanceDataState(Structure):
    _fields_ = [
        ("SwitchStateBitField", c_int),
        ("ActiveSwitchValues", c_int),
        ("RemovedBodyCompositionPartsBitField", c_int),
        ("bNeedToApplyThisState", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FComponentData(Structure):
    _fields_ = [
        ("Component", POINTER(UActorComponent)),
        ("CollisionType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bAttachToMesh", c_bool, 1),
        ("bIsUsable", c_bool, 1),
        ("bIsSecondaryUsable", c_bool, 1),
        ("", c_ulong, 0),
        ("MeshSocketName", FName),
        ("HitRegionDefinition", POINTER(UBaseHitRegionDefinition)),
        ("InteractIcon", POINTER(UEngineInteractionIconDefinition)),
        ("SecondaryInteractIcon", POINTER(UEngineInteractionIconDefinition)),
    ]


class FInstanceDataUnion(Structure):
    _fields_ = [
        ("Name", FName),
        ("Type", c_ubyte),
        ("Replication", c_ubyte),
        ("MaxSwitchValue", c_ubyte),
        ("BitsRequiredForMaxSwitchValue", c_ubyte),
        ("Bool", c_bool, 1),
        ("DeleteByOwner", c_bool, 1),
        ("", c_ulong, 0),
        ("Int", c_int),
        ("Float", c_float),
        ("Vector", FVector),
        ("Object", POINTER(UObject)),
        ("ComponentData", FComponentData),
        ("String", FString),
        ("BodyCompositionIndex", c_int),
    ]


class FInstanceDataSet(Structure):
    _fields_ = [("Data", TArray_FInstanceDataUnion)]


class FVisiblePortalInfo(Structure):
    _fields_ = [("Source", POINTER(AActor)), ("Destination", POINTER(AActor))]


class FOnlineGameSearchParameter(Structure):
    _fields_ = [
        ("EntryId", c_int),
        ("CompareValueId", c_int),
        ("ObjectPropertyName", FName),
        ("EntryType", c_ubyte),
        ("ComparisonType", c_ubyte),
    ]


class FOnlineGameSearchORClause(Structure):
    _fields_ = [("OrParams", TArray_FOnlineGameSearchParameter)]


class FOnlineGameSearchSortClause(Structure):
    _fields_ = [
        ("EntryId", c_int),
        ("ObjectPropertyName", FName),
        ("EntryType", c_ubyte),
        ("SortType", c_ubyte),
    ]


class FOnlineGameSearchQuery(Structure):
    _fields_ = [
        ("OrClauses", TArray_FOnlineGameSearchORClause),
        ("SortClauses", TArray_FOnlineGameSearchSortClause),
    ]


class FOverrideSkill(Structure):
    _fields_ = [
        ("LeaderboardId", c_int),
        ("Players", TArray_FUniqueNetId),
        ("Mus", TArray_FDouble),
        ("Sigmas", TArray_FDouble),
    ]


class FNamedObjectProperty(Structure):
    _fields_ = [("ObjectPropertyName", FName), ("ObjectPropertyValue", FString)]


class FOnlineGameSearchResult(Structure):
    _fields_ = [
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("PlatformData", FPointer),
    ]


class FTViewTarget(Structure):
    _fields_ = [
        ("Target", POINTER(AActor)),
        ("Controller", POINTER(AController)),
        ("POV", FTPOV),
        ("AspectRatio", c_float),
        ("PRI", POINTER(APlayerReplicationInfo)),
    ]


class FTCameraCache(Structure):
    _fields_ = [("TimeStamp", c_float), ("POV", FTPOV)]


class FViewTargetTransitionParams(Structure):
    _fields_ = [
        ("BlendTime", c_float),
        ("BlendFunction", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BlendExp", c_float),
        ("bLockOutgoing", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLUTBlender(Structure):
    _fields_ = [
        ("LUTTextures", TArray_UTexturePtr),
        ("LUTWeights", TArray_float),
        ("bHasChanged", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPostProcessSettings(Structure):
    _fields_ = [
        ("bOverride_EnableBloom", c_bool, 1),
        ("bOverride_EnableDOF", c_bool, 1),
        ("bOverride_EnableMotionBlur", c_bool, 1),
        ("bOverride_EnableSceneEffect", c_bool, 1),
        ("bOverride_AllowAmbientOcclusion", c_bool, 1),
        ("bOverride_OverrideRimShaderColor", c_bool, 1),
        ("bOverride_Bloom_Scale", c_bool, 1),
        ("bOverride_Bloom_Threshold", c_bool, 1),
        ("bOverride_Bloom_Tint", c_bool, 1),
        ("bOverride_Bloom_ScreenBlendThreshold", c_bool, 1),
        ("bOverride_Bloom_InterpolationDuration", c_bool, 1),
        ("bOverride_DOF_FalloffExponent", c_bool, 1),
        ("bOverride_DOF_BlurKernelSize", c_bool, 1),
        ("bOverride_DOF_BlurBloomKernelSize", c_bool, 1),
        ("bOverride_DOF_MaxNearBlurAmount", c_bool, 1),
        ("bOverride_DOF_MinBlurAmount", c_bool, 1),
        ("bOverride_DOF_MaxFarBlurAmount", c_bool, 1),
        ("bOverride_DOF_FocusType", c_bool, 1),
        ("bOverride_DOF_FocusInnerRadius", c_bool, 1),
        ("bOverride_DOF_FocusDistance", c_bool, 1),
        ("bOverride_DOF_FocusPosition", c_bool, 1),
        ("bOverride_DOF_TunnelVisionScale", c_bool, 1),
        ("bOverride_DOF_TunnelVisionYOffset", c_bool, 1),
        ("bOverride_DOF_InterpolationDuration", c_bool, 1),
        ("bOverride_DOF_BokehTexture", c_bool, 1),
        ("bOverride_MotionBlur_MaxVelocity", c_bool, 1),
        ("bOverride_MotionBlur_Amount", c_bool, 1),
        ("bOverride_MotionBlur_FullMotionBlur", c_bool, 1),
        ("bOverride_MotionBlur_CameraRotationThreshold", c_bool, 1),
        ("bOverride_MotionBlur_CameraTranslationThreshold", c_bool, 1),
        ("bOverride_MotionBlur_InterpolationDuration", c_bool, 1),
        ("bOverride_Scene_Desaturation", c_bool, 1),
        ("bOverride_Scene_Colorize", c_bool, 1),
        ("bOverride_Scene_TonemapperScale", c_bool, 1),
        ("bOverride_Scene_ImageGrainScale", c_bool, 1),
        ("bOverride_Scene_HighLights", c_bool, 1),
        ("bOverride_Scene_MidTones", c_bool, 1),
        ("bOverride_Scene_Shadows", c_bool, 1),
        ("bOverride_Scene_InterpolationDuration", c_bool, 1),
        ("bOverride_Scene_ColorGradingLUT", c_bool, 1),
        ("bOverride_RimShader_Color", c_bool, 1),
        ("bOverride_RimShader_InterpolationDuration", c_bool, 1),
        ("bEnableBloom", c_bool, 1),
        ("bEnableDOF", c_bool, 1),
        ("bTwoLayerSimpleDepthOfField", c_bool, 1),
        ("bEnableMotionBlur", c_bool, 1),
        ("bEnableSceneEffect", c_bool, 1),
        ("bAllowAmbientOcclusion", c_bool, 1),
        ("bOverrideRimShaderColor", c_bool, 1),
        ("", c_ulong, 0),
        ("Bloom_Scale", c_float),
        ("Bloom_Threshold", c_float),
        ("Bloom_Tint", FColor),
        ("Bloom_ScreenBlendThreshold", c_float),
        ("Bloom_InterpolationDuration", c_float),
        ("DOF_BlurBloomKernelSize", c_float),
        ("DOF_FalloffExponent", c_float),
        ("DOF_BlurKernelSize", c_float),
        ("DOF_MaxNearBlurAmount", c_float),
        ("DOF_MinBlurAmount", c_float),
        ("DOF_MaxFarBlurAmount", c_float),
        ("DOF_FocusType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("DOF_FocusInnerRadius", c_float),
        ("DOF_FocusDistance", c_float),
        ("DOF_FocusPosition", FVector),
        ("DOF_TunnelVisionScale", c_float),
        ("DOF_TunnelVisionYOffset", c_float),
        ("DOF_InterpolationDuration", c_float),
        ("DOF_BokehTexture", POINTER(UTexture2D)),
        ("MotionBlur_MaxVelocity", c_float),
        ("MotionBlur_Amount", c_float),
        ("MotionBlur_FullMotionBlur", c_bool, 1),
        ("", c_ulong, 0),
        ("MotionBlur_CameraRotationThreshold", c_float),
        ("MotionBlur_CameraTranslationThreshold", c_float),
        ("MotionBlur_InterpolationDuration", c_float),
        ("Scene_Desaturation", c_float),
        ("Scene_Colorize", FVector),
        ("Scene_TonemapperScale", c_float),
        ("Scene_ImageGrainScale", c_float),
        ("Scene_HighLights", FVector),
        ("Scene_MidTones", FVector),
        ("Scene_Shadows", FVector),
        ("Scene_InterpolationDuration", c_float),
        ("RimShader_Color", FLinearColor),
        ("RimShader_InterpolationDuration", c_float),
        ("ColorGrading_LookupTable", POINTER(UTexture)),
        ("ColorGradingLUT", FLUTBlender),
    ]


class FRenderingPerformanceOverrides(Structure):
    _fields_ = [
        ("bAllowAmbientOcclusion", c_bool, 1),
        ("bAllowDominantWholeSceneDynamicShadows", c_bool, 1),
        ("bAllowMotionBlurSkinning", c_bool, 1),
        ("bAllowTemporalAA", c_bool, 1),
        ("bAllowLightShafts", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSeqOpOutputInputLink(Structure):
    _fields_ = [("LinkedOp", POINTER(USequenceOp)), ("InputLinkIdx", c_int)]


class FSeqOpOutputLink(Structure):
    _fields_ = [
        ("Links", TArray_FSeqOpOutputInputLink),
        ("LinkDesc", FString),
        ("bHasImpulse", c_bool, 1),
        ("bDisabled", c_bool, 1),
        ("bDisabledPIE", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bIsActivated", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("", c_ulong, 0),
        ("LinkedOp", POINTER(USequenceOp)),
        ("ActivateDelay", c_float),
    ]


class FSeqVarLink(Structure):
    _fields_ = [
        ("ExpectedType", POINTER(UClass)),
        ("LinkedVariables", TArray_USequenceVariablePtr),
        ("LinkDesc", FString),
        ("LinkVar", FName),
        ("PropertyName", FName),
        ("bWriteable", c_bool, 1),
        ("bSequenceNeverReadsOnlyWritesToThisVar", c_bool, 1),
        ("bModifiesLinkedObject", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bAllowAnyType", c_bool, 1),
        ("", c_ulong, 0),
        ("MinVars", c_int),
        ("MaxVars", c_int),
        ("CachedProperty", POINTER(UProperty)),
    ]


class FSeqEventLink(Structure):
    _fields_ = [
        ("LinkedEvents", TArray_USequenceEventPtr),
        ("LinkDesc", FString),
        ("bHidden", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDebugTextInfo(Structure):
    _fields_ = [
        ("SrcActor", POINTER(AActor)),
        ("SrcActorOffset", FVector),
        ("SrcActorDesiredOffset", FVector),
        ("DebugText", FString),
        ("TimeRemaining", c_float),
        ("Duration", c_float),
        ("TextColor", FColor),
        ("bAbsoluteLocation", c_bool, 1),
        ("bKeepAttachedToActor", c_bool, 1),
        ("", c_ulong, 0),
        ("OrigActorLocation", FVector),
        ("Font", POINTER(UFont)),
    ]


class FBonePair(Structure):
    _fields_ = [("Bones", FName * 2)]


class FAnimBlendChild(Structure):
    _fields_ = [
        ("Name", FName),
        ("Anim", POINTER(UAnimNode)),
        ("Weight", c_float),
        ("BlendWeight", c_float),
        ("bMirrorSkeleton", c_bool, 1),
        ("bIsAdditive", c_bool, 1),
        ("", c_ulong, 0),
        ("AdditiveWeightScale", c_float),
    ]


class FSkelMeshComponentLODInfo(Structure):
    _fields_ = [
        ("HiddenMaterials", TArray_BOOL),
        ("bNeedsInstanceWeightUpdate", c_bool, 1),
        ("bAlwaysUseInstanceWeights", c_bool, 1),
        ("", c_ulong, 0),
        ("InstanceWeightUsage", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("InstanceWeightIdx", int),
    ]


class FAttachment(Structure):
    _fields_ = [
        ("Component", POINTER(UActorComponent)),
        ("BoneName", FName),
        ("RelativeLocation", FVector),
        ("RelativeRotation", FRotator),
        ("RelativeScale", FVector),
    ]


class FActiveMorph(Structure):
    _fields_ = [("Target", POINTER(UMorphTarget)), ("Weight", c_float)]


class FGestaltLODModelFragment(Structure):
    _fields_ = [
        ("MaterialIndex", c_int),
        ("FirstIndex", c_int),
        ("NumPrimitives", c_int),
    ]


class FGestaltLODModel(Structure):
    _fields_ = [("GestaltFragments", TArray_FGestaltLODModelFragment)]


class FSocketRemapEntry(Structure):
    _fields_ = [("OriginalSocketName", FName), ("MangledSocketName", FName)]


class FGestaltAccessoryEntry(Structure):
    _fields_ = [
        ("TransformIndex", c_int),
        ("OriginalBoneIndex", c_int),
        ("GPUBoneIndex", c_int),
    ]


class FGestaltDataContainer(Structure):
    _fields_ = [
        ("SkeletalMesh", POINTER(USkeletalMesh)),
        ("LODModelData", TArray_FGestaltLODModel),
        ("SocketMappings", TArray_FSocketRemapEntry),
        ("GestaltAccessoryList", TArray_FGestaltAccessoryEntry),
        ("GestaltPartMatricesContainer", POINTER(UGestaltPartMatrices)),
        ("ReferencePoseBounds", FBoxSphereBounds),
    ]


class FConnectedPeerInfo(Structure):
    _fields_ = [
        ("PlayerID", FUniqueNetId),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bLostConnectionToHost", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FClientAdjustment(Structure):
    _fields_ = [
        ("TimeStamp", c_float),
        ("newPhysics", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("NewLoc", FVector),
        ("NewVel", FVector),
        ("NewBase", POINTER(AActor)),
        ("NewFloor", FVector),
        ("bAckGoodMove", c_ubyte),
    ]


class FKismetDrawTextInfo(Structure):
    _fields_ = [
        ("MessageText", FString),
        ("AppendedText", FString),
        ("MessageFont", POINTER(UFont)),
        ("MessageFontScale", FVector2D),
        ("MessageOffset", FVector2D),
        ("MessageColor", FColor),
        ("MessageEndTime", c_float),
    ]


class FConsoleMessage(Structure):
    _fields_ = [
        ("Text", FString),
        ("TextColor", FColor),
        ("MessageLife", c_float),
        ("PRI", POINTER(APlayerReplicationInfo)),
    ]


class FAutomatedTestingDatum(Structure):
    _fields_ = [("NumberOfMatchesPlayed", c_int), ("NumMapListCyclesDone", c_int)]


class FInputEntry(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Value", c_float),
        ("TimeDelta", c_float),
        ("Action", c_ubyte),
    ]


class FInputMatchRequest(Structure):
    _fields_ = [
        ("Inputs", TArray_FInputEntry),
        ("MatchActor", POINTER(AActor)),
        ("MatchFuncName", FName),
        ("MatchDelegate", FScriptDelegate),
        ("FailedFuncName", FName),
        ("RequestName", FName),
        ("MatchIdx", c_int),
        ("LastMatchTime", c_float),
    ]


class FNavigationOctreeObject(Structure):
    _fields_ = [
        ("BoundingBox", FBox),
        ("BoxCenter", FVector),
        ("OctreeNode", FPointer),
        ("Owner", POINTER(UObject)),
        ("OwnerType", c_ubyte),
    ]


class ANavigationPoint_FCheckpointRecord(Structure):
    _fields_ = [("bDisabled", c_bool, 1), ("bBlocked", c_bool, 1), ("", c_ulong, 0)]


class FAreaTestSortedPoint(Structure):
    _fields_ = [("Nav", POINTER(ANavigationPoint)), ("DistSq", c_float)]


class FNavMeshPathSize(Structure):
    _fields_ = [
        ("Size", c_float),
        ("Height", c_float),
        ("PolyColor", FColor),
        ("ObstacleColor", FColor),
    ]


class FPolyReference(Structure):
    _fields_ = [
        ("OwningPylon", FActorReference),
        ("PolyId", c_int),
        ("CachedPoly", FPointer),
    ]


class FPendingSubtitleInfo(Structure):
    _fields_ = [
        ("PendingSubtitlePlayingInfoPtr", FPointer),
        ("OriginalFileName", FString),
        ("StreamedSubtitleData", TArray_unsigned_char),
    ]


class FPendingFaceFXInfo(Structure):
    _fields_ = [
        ("PendingFaceFXPlayingInfoPtr", FPointer),
        ("AnimName", FString),
        ("RawData", TArray_unsigned_char),
    ]


class FDialogueArgument(Structure):
    _fields_ = [("Source", c_ubyte)]


class FKSphereElem(Structure):
    _fields_ = [
        ("TM", FMatrix),
        ("Radius", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FKBoxElem(Structure):
    _fields_ = [
        ("TM", FMatrix),
        ("X", c_float),
        ("Y", c_float),
        ("Z", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FKSphylElem(Structure):
    _fields_ = [
        ("TM", FMatrix),
        ("Radius", c_float),
        ("Length", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FKConvexElem(Structure):
    _fields_ = [
        ("VertexData", TArray_FVector),
        ("PermutedVertexData", TArray_FPlane),
        ("FaceTriData", TArray_int),
        ("EdgeDirections", TArray_FVector),
        ("FaceNormalDirections", TArray_FVector),
        ("FacePlaneData", TArray_FPlane),
        ("ElemBox", FBox),
    ]


class FKAggregateGeom(Structure):
    _fields_ = [
        ("SphereElems", TArray_FKSphereElem),
        ("BoxElems", TArray_FKBoxElem),
        ("SphylElems", TArray_FKSphylElem),
        ("ConvexElems", TArray_FKConvexElem),
        ("RenderInfo", FPointer),
        ("bSkipCloseAndParallelChecks", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FKCachedConvexData_Mirror(Structure):
    _fields_ = [("CachedConvexElements", TArray_int)]


class FGeomSelection(Structure):
    _fields_ = [("Type", c_int), ("Index", c_int), ("SelectionIndex", c_int)]


class FInteriorSettings(Structure):
    _fields_ = [
        ("bIsWorldInfo", c_bool, 1),
        ("", c_ulong, 0),
        ("ExteriorVolume", c_float),
        ("ExteriorTime", c_float),
        ("ExteriorLPF", c_float),
        ("ExteriorLPFTime", c_float),
        ("InteriorVolume", c_float),
        ("InteriorTime", c_float),
        ("InteriorLPF", c_float),
        ("InteriorLPFTime", c_float),
    ]


class FReverbSettings(Structure):
    _fields_ = [
        ("bApplyReverb", c_bool, 1),
        ("", c_ulong, 0),
        ("ReverbType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Volume", c_float),
        ("FadeTime", c_float),
        ("ReflectionsDelayOverride", c_float),
        ("LateDelayOverride", c_float),
        ("DecayHighFrequencyRatioOverride", c_float),
    ]


class FAudioComponentParam(Structure):
    _fields_ = [
        ("ParamName", FName),
        ("FloatParam", c_float),
        ("WaveParam", POINTER(USoundNodeWave)),
    ]


class FSubtitleCue(Structure):
    _fields_ = [("Text", FString), ("Time", c_float)]


class FCompressedTrack(Structure):
    _fields_ = [
        ("ByteStream", TArray_unsigned_char),
        ("Times", TArray_float),
        ("Mins", c_float * 3),
        ("Ranges", c_float * 3),
    ]


class FDeltaTrackInfo(Structure):
    _fields_ = [
        ("RotKey", FQuat * 2),
        ("PosKey", FVector * 2),
        ("RotKeyIndex", int * 2),
        ("PosKeyIndex", int * 2),
    ]


class FCurveTrack(Structure):
    _fields_ = [("CurveName", FName), ("CurveWeights", TArray_float)]


class FRotationTrack(Structure):
    _fields_ = [("RotKeys", TArray_FQuat), ("Times", TArray_float)]


class FTranslationTrack(Structure):
    _fields_ = [("PosKeys", TArray_FVector), ("Times", TArray_float)]


class FTimeModifier(Structure):
    _fields_ = [("Time", c_float), ("TargetStrength", c_float)]


class FSkelControlModifier(Structure):
    _fields_ = [("SkelControlName", FName), ("Modifiers", TArray_FTimeModifier)]


class FAnimNotifyEvent(Structure):
    _fields_ = [
        ("Time", c_float),
        ("Notify", POINTER(UAnimNotify)),
        ("Duration", c_float),
    ]


class FRawAnimSequenceTrack(Structure):
    _fields_ = [("PosKeys", TArray_FVector), ("RotKeys", TArray_FQuat)]


class FCurveKey(Structure):
    _fields_ = [("CurveName", FName), ("Weight", c_float)]


class FWeightNodeRule(Structure):
    _fields_ = [
        ("NodeName", FName),
        ("CachedNode", POINTER(UAnimNodeBlendBase)),
        ("CachedSlotNode", POINTER(UAnimNodeSlot)),
        ("WeightCheck", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ChildIndex", c_int),
    ]


class FWeightRule(Structure):
    _fields_ = [("FirstNode", FWeightNodeRule), ("SecondNode", FWeightNodeRule)]


class FBranchInfo(Structure):
    _fields_ = [("BoneName", FName), ("PerBoneWeightIncrease", c_float)]


class FPerBoneMaskInfo(Structure):
    _fields_ = [
        ("BranchList", TArray_FBranchInfo),
        ("DesiredWeight", c_float),
        ("BlendTimeToGo", c_float),
        ("WeightRuleList", TArray_FWeightRule),
        ("bWeightBasedOnNodeRules", c_bool, 1),
        ("bDisableForNonLocalHumanPlayers", c_bool, 1),
        ("bPendingBlend", c_bool, 1),
        ("", c_ulong, 0),
        ("PerBoneWeights", TArray_float),
        ("TransformReqBone", TArray_unsigned_char),
        ("TransformReqBoneIndex", c_int),
    ]


class FAimTransform(Structure):
    _fields_ = [("Quaternion", FQuat), ("Translation", FVector)]


class FAimComponent(Structure):
    _fields_ = [
        ("BoneName", FName),
        ("Unknown1", c_ubyte, 0x8),
        ("LU", FAimTransform),
        ("Unknown2", c_ubyte, 0x4),
        ("LC", FAimTransform),
        ("Unknown3", c_ubyte, 0x4),
        ("LD", FAimTransform),
        ("Unknown4", c_ubyte, 0x4),
        ("CU", FAimTransform),
        ("Unknown5", c_ubyte, 0x4),
        ("CC", FAimTransform),
        ("Unknown6", c_ubyte, 0x4),
        ("CD", FAimTransform),
        ("Unknown7", c_ubyte, 0x4),
        ("RU", FAimTransform),
        ("Unknown8", c_ubyte, 0x4),
        ("RC", FAimTransform),
        ("Unknown9", c_ubyte, 0x4),
        ("RD", FAimTransform),
        ("Unknown10", c_ubyte, 0x4),
    ]


class FAimOffsetProfile(Structure):
    _fields_ = [
        ("ProfileName", FName),
        ("HorizontalRange", FVector2D),
        ("VerticalRange", FVector2D),
        ("AimComponents", TArray_FAimComponent),
        ("AimTransformsCache", TArray_FBoneAtom),
        ("bDirtyAimTransformsCache", c_bool, 1),
        ("", c_ulong, 0),
        ("AnimName_LU", FName),
        ("AnimName_LC", FName),
        ("AnimName_LD", FName),
        ("AnimName_CU", FName),
        ("AnimName_CC", FName),
        ("AnimName_CD", FName),
        ("AnimName_RU", FName),
        ("AnimName_RC", FName),
        ("AnimName_RD", FName),
    ]


class FChildBoneBlendInfo(Structure):
    _fields_ = [
        ("TargetPerBoneWeight", TArray_float),
        ("InitTargetStartBone", FName),
        ("InitPerBoneIncrease", c_float),
        ("OldStartBone", FName),
        ("OldBoneIncrease", c_float),
        ("TargetRequiredBones", TArray_unsigned_char),
    ]


class FRandomAnimInfo(Structure):
    _fields_ = [
        ("Chance", c_float),
        ("LoopCountMin", c_ubyte),
        ("LoopCountMax", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("BlendInTime", c_float),
        ("PlayRateRange", FVector2D),
        ("bStillFrame", c_bool, 1),
        ("", c_ulong, 0),
        ("LoopCount", c_ubyte),
        ("Unknown2", c_ubyte, 0x3),
        ("LastPosition", c_float),
    ]


class FAnimInfo(Structure):
    _fields_ = [
        ("AnimSeqName", FName),
        ("AnimSeq", POINTER(UAnimSequence)),
        ("AnimLinkupIndex", int),
    ]


class FAnimBlendInfo(Structure):
    _fields_ = [("AnimName", FName), ("AnimInfo", FAnimInfo), ("Weight", c_float)]


class FSynchGroup(Structure):
    _fields_ = [
        ("SeqNodes", TArray_UAnimNodeSequencePtr),
        ("MasterNode", POINTER(UAnimNodeSequence)),
        ("GroupName", FName),
        ("bFireSlaveNotifies", c_bool, 1),
        ("", c_ulong, 0),
        ("RateScale", c_float),
    ]


class FOpinionData(Structure):
    _fields_ = [
        ("Opinion", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Allegiance", POINTER(UPawnAllegiance)),
    ]


class FInfoBarData(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Amount", c_float),
        ("bFullyArmored", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLocalizedSubtitle(Structure):
    _fields_ = [
        ("LanguageExt", FString),
        ("Subtitles", TArray_FSubtitleCue),
        ("bMature", c_bool, 1),
        ("bManualWordWrap", c_bool, 1),
        ("bSingleLine", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLightMapRef(Structure):
    _fields_ = [("Reference", FPointer)]


class FDominantShadowInfo(Structure):
    _fields_ = [
        ("WorldToLight", FMatrix),
        ("LightToWorld", FMatrix),
        ("LightSpaceImportanceBounds", FBox),
        ("ShadowMapSizeX", c_int),
        ("ShadowMapSizeY", c_int),
    ]


class FLightmassLightSettings(Structure):
    _fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
    ]


class FScalarParameterInterpStruct(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", c_float),
        ("InterpTime", c_float),
        ("WarmupTime", c_float),
    ]


class FLightmassPointLightSettings(Structure):
    _fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
        ("LightSourceRadius", c_float),
    ]


class FLightmassDirectionalLightSettings(Structure):
    _fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
        ("LightSourceAngle", c_float),
    ]


class FLightmassPrimitiveSettings(Structure):
    _fields_ = [
        ("bUseTwoSidedLighting", c_bool, 1),
        ("bShadowIndirectOnly", c_bool, 1),
        ("bUseEmissiveForStaticLighting", c_bool, 1),
        ("bGenerateVolumeLightingSamples", c_bool, 1),
        ("", c_ulong, 0),
        ("EmissiveLightFalloffExponent", c_float),
        ("EmissiveLightExplicitInfluenceRadius", c_float),
        ("EmissiveBoost", c_float),
        ("DiffuseBoost", c_float),
        ("SpecularBoost", c_float),
        ("FullyOccludedSamplesFraction", c_float),
    ]


class FLightmassDebugOptions(Structure):
    _fields_ = [
        ("bDebugMode", c_bool, 1),
        ("bStatsEnabled", c_bool, 1),
        ("bGatherBSPSurfacesAcrossComponents", c_bool, 1),
        ("", c_ulong, 0),
        ("CoplanarTolerance", c_float),
        ("bUseDeterministicLighting", c_bool, 1),
        ("bUseImmediateImport", c_bool, 1),
        ("bImmediateProcessMappings", c_bool, 1),
        ("bSortMappings", c_bool, 1),
        ("bDumpBinaryFiles", c_bool, 1),
        ("bDebugMaterials", c_bool, 1),
        ("bPadMappings", c_bool, 1),
        ("bDebugPaddings", c_bool, 1),
        ("bOnlyCalcDebugTexelMappings", c_bool, 1),
        ("bUseRandomColors", c_bool, 1),
        ("bColorBordersGreen", c_bool, 1),
        ("bColorByExecutionTime", c_bool, 1),
        ("", c_ulong, 0),
        ("ExecutionTimeDivisor", c_float),
        ("bInitialized", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSwarmDebugOptions(Structure):
    _fields_ = [
        ("bDistributionEnabled", c_bool, 1),
        ("bForceContentExport", c_bool, 1),
        ("bInitialized", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FRootMotionCurve(Structure):
    _fields_ = [
        ("AnimName", FName),
        ("Curve", FInterpCurveVector),
        ("MaxCurveTime", c_float),
    ]


class FRecentDamageTracker(Structure):
    _fields_ = [
        ("TotalDamage", c_float),
        ("HealthDamage", c_float),
        ("ShieldDamage", c_float),
    ]


class FBalanceDefSpawnedActorState(Structure):
    _fields_ = [
        ("BalanceDefinition", POINTER(UBaseBalanceDefinition)),
        ("GradeIndex", c_int),
        ("bGradeCustomizationsApplied", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTrailSocketSamplePoint(Structure):
    _fields_ = [("Position", FVector), ("Velocity", FVector)]


class FTrailSamplePoint(Structure):
    _fields_ = [
        ("RelativeTime", c_float),
        ("FirstEdgeSample", FTrailSocketSamplePoint),
        ("ControlPointSample", FTrailSocketSamplePoint),
        ("SecondEdgeSample", FTrailSocketSamplePoint),
    ]


class FTrailSample(Structure):
    _fields_ = [
        ("RelativeTime", c_float),
        ("FirstEdgeSample", FVector),
        ("ControlPointSample", FVector),
        ("SecondEdgeSample", FVector),
    ]


class FAnimSetMeshLinkup(Structure):
    _fields_ = [("BoneToTrackTable", TArray_int)]


class FAnimGroup(Structure):
    _fields_ = [
        ("SeqNodes", TArray_UAnimNodeSequencePtr),
        ("SynchMaster", POINTER(UAnimNodeSequence)),
        ("NotifyMaster", POINTER(UAnimNodeSequence)),
        ("GroupName", FName),
        ("RateScale", c_float),
        ("SynchPctPosition", c_float),
    ]


class FSkelControlListHead(Structure):
    _fields_ = [("BoneName", FName), ("ControlHead", POINTER(USkelControlBase))]


class FPreviewSkelMeshStruct(Structure):
    _fields_ = [
        ("DisplayName", FName),
        ("PreviewSkelMesh", POINTER(USkeletalMesh)),
        ("PreviewMorphSets", TArray_UMorphTargetSetPtr),
    ]


class FPreviewSocketStruct(Structure):
    _fields_ = [
        ("DisplayName", FName),
        ("SocketName", FName),
        ("PreviewSkelMesh", POINTER(USkeletalMesh)),
        ("PreviewStaticMesh", POINTER(UStaticMesh)),
    ]


class FPreviewAnimSetsStruct(Structure):
    _fields_ = [("DisplayName", FName), ("PreviewAnimSets", TArray_UAnimSetPtr)]


class F_ModifyHealthParams(Structure):
    _fields_ = [
        ("bHeal", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageAmount", c_float),
        ("EventInstigator", POINTER(AController)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
        ("DamageType", POINTER(UClass)),
        ("DamageTypeDefinition", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]


class FNxDestructibleParametersFlag(Structure):
    _fields_ = [
        ("ACCUMULATE_DAMAGE", c_bool, 1),
        ("ASSET_DEFINED_SUPPORT", c_bool, 1),
        ("WORLD_SUPPORT", c_bool, 1),
        ("DEBRIS_TIMEOUT", c_bool, 1),
        ("DEBRIS_MAX_SEPARATION", c_bool, 1),
        ("CRUMBLE_SMALLEST_CHUNKS", c_bool, 1),
        ("ACCURATE_RAYCASTS", c_bool, 1),
        ("USE_VALID_BOUNDS", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNxDestructibleDepthParameters(Structure):
    _fields_ = [
        ("TAKE_IMPACT_DAMAGE", c_bool, 1),
        ("IGNORE_POSE_UPDATES", c_bool, 1),
        ("IGNORE_RAYCAST_CALLBACKS", c_bool, 1),
        ("IGNORE_CONTACT_CALLBACKS", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNxDestructibleParameters(Structure):
    _fields_ = [
        ("DamageThreshold", c_float),
        ("DamageToRadius", c_float),
        ("DamageCap", c_float),
        ("ForceToDamage", c_float),
        ("ImpactVelocityThreshold", c_float),
        ("MaterialStrength", c_float),
        ("DamageToPercentDeformation", c_float),
        ("DeformationPercentLimit", c_float),
        ("bFormExtendedStructures", c_bool, 1),
        ("", c_ulong, 0),
        ("SupportDepth", c_int),
        ("DebrisDepth", c_int),
        ("EssentialDepth", c_int),
        ("DebrisLifetimeMin", c_float),
        ("DebrisLifetimeMax", c_float),
        ("DebrisMaxSeparationMin", c_float),
        ("DebrisMaxSeparationMax", c_float),
        ("ValidBounds", FBox),
        ("MaxChunkSpeed", c_float),
        ("MassScaleExponent", c_float),
        ("Flags", FNxDestructibleParametersFlag),
        ("GrbVolumeLimit", c_float),
        ("GrbParticleSpacing", c_float),
        ("FractureImpulseScale", c_float),
        ("DepthParameters", TArray_FNxDestructibleDepthParameters),
    ]


class FDamageParameters(Structure):
    _fields_ = [
        ("OverrideMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BaseDamage", c_float),
        ("Radius", c_float),
        ("Momentum", c_float),
    ]


class FDamagePair(Structure):
    _fields_ = [("DamageCauserName", FName), ("Params", FDamageParameters)]


class FAttributePriorityData(Structure):
    _fields_ = [
        ("Attribute", POINTER(UAttributeDefinition)),
        ("PriorityIncrease", c_float),
    ]


class FAppliedAttributeEffect(Structure):
    _fields_ = [
        ("Context", POINTER(UObject)),
        ("Attribute", POINTER(UAttributeDefinition)),
        ("Modifier", POINTER(UAttributeModifier)),
    ]


class FAttributeInitializationData(Structure):
    _fields_ = [
        ("BaseValueConstant", c_float),
        ("BaseValueAttribute", POINTER(UAttributeDefinition)),
        ("InitializationDefinition", POINTER(UAttributeInitializationDefinition)),
        ("BaseValueScaleConstant", c_float),
    ]


class FAttributeEffectData(Structure):
    _fields_ = [
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
    ]


class FAttributeExpressionData(Structure):
    _fields_ = [
        ("AttributeOperand1", POINTER(UAttributeDefinition)),
        ("ComparisonOperator", c_ubyte),
        ("Operand2Usage", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("AttributeOperand2", POINTER(UAttributeDefinition)),
        ("ConstantOperand2", c_float),
    ]


class FConditionalSoundData(Structure):
    _fields_ = [
        ("Event", POINTER(UAkEvent)),
        ("Cue", POINTER(USoundCue)),
        ("Expressions", TArray_FAttributeExpressionData),
    ]


class FBalanceFormula(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("Multiplier", FAttributeInitializationData),
        ("Level", FAttributeInitializationData),
        ("Power", FAttributeInitializationData),
        ("Offset", FAttributeInitializationData),
    ]


class FVariance(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bUseIntegerRandomization", c_bool, 1),
        ("", c_ulong, 0),
        ("LowerBound", FAttributeInitializationData),
        ("UpperBound", FAttributeInitializationData),
    ]


class FRange(Structure):
    _fields_ = [
        ("bEnableMinValueRestriction", c_bool, 1),
        ("", c_ulong, 0),
        ("MinValue", FAttributeInitializationData),
        ("bEnableMaxValueRestriction", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxValue", FAttributeInitializationData),
    ]


class FConditionalValueExpression(Structure):
    _fields_ = [
        ("BaseValueIfTrue", FAttributeInitializationData),
        ("Expressions", TArray_FAttributeExpressionData),
    ]


class FConditionalInitializationExpressions(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("ConditionalExpressionList", TArray_FConditionalValueExpression),
        ("DefaultBaseValue", FAttributeInitializationData),
    ]


class FAttributeBaseValueData(Structure):
    _fields_ = [
        ("Attribute", POINTER(UAttributeDefinition)),
        ("BaseValue", FAttributeInitializationData),
    ]


class FListener(Structure):
    _fields_ = [
        ("PortalVolume", POINTER(APortalVolume)),
        ("Location", FVector),
        ("Up", FVector),
        ("Right", FVector),
        ("Front", FVector),
    ]


class FAudioClassInfo(Structure):
    _fields_ = [
        ("NumResident", int),
        ("SizeResident", int),
        ("NumRealTime", int),
        ("SizeRealTime", int),
    ]


class FGameStageRangeData(Structure):
    _fields_ = [("MinGameStage", int), ("MaxGameStage", int)]


class FGameStageGradeWeightData(Structure):
    _fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
    ]


class FBehaviorContextData(Structure):
    _fields_ = [
        ("InstancedDataContextName", FName),
        ("ContextObject", POINTER(UObject)),
        ("BehaviorContext", c_ubyte),
        ("bSupportsDefaultOutputLink", c_ubyte),
    ]


class FBehaviorParameterUnion(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("VectorData", FVector),
        ("ActorData", POINTER(AActor)),
        ("ImpactInfoData", FImpactInfo),
    ]


class FBehaviorParameters(Structure):
    _fields_ = [("Parameters", TArray_FBehaviorParameterUnion)]


class FBehaviorOutputLinkDescriptionData(Structure):
    _fields_ = [("LinkId", c_int)]


class FBehaviorKernelInfo(Structure):
    _fields_ = [
        ("StateForThreadRunningThisBehavior", FPointer),
        ("WorldTime", c_float),
        ("ExecutionTime", c_float),
        ("WorldDeltaTime", c_float),
        ("ExecutionDelayError", c_float),
        ("NextExecutionDelayTime", c_float),
        ("bHasLinkedOutputs", c_bool, 1),
        ("bIsInitialRunOfThisBehavior", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCounterEventReactionData(Structure):
    _fields_ = [
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FBehaviorCounterState(Structure):
    _fields_ = [("CurrentValue", c_int), ("Target", c_int)]


class FCounterBehaviorUserState(Structure):
    _fields_ = [("Counters", FBehaviorCounterState * 2)]


class FIndependentSelectionData(Structure):
    _fields_ = [
        ("Probability", FAttributeInitializationData),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FScalarMaterialParameter(Structure):
    _fields_ = [
        ("Name", FName),
        ("Value", c_float),
        ("ValueFromAttribute", FAttributeInitializationData),
    ]


class FVectorMaterialParameter(Structure):
    _fields_ = [
        ("Name", FName),
        ("Value", FLinearColor),
        ("VectorScale", FAttributeInitializationData),
    ]


class FTextureMaterialParameter(Structure):
    _fields_ = [("Name", FName), ("Value", POINTER(UTexture))]


class FScalarParticleSystemParameter(Structure):
    _fields_ = [("Name", FName), ("Value", FAttributeInitializationData)]


class FVectorParticleSystemParameter(Structure):
    _fields_ = [
        ("Name", FName),
        ("Value", FVector),
        ("VectorScale", FAttributeInitializationData),
    ]


class FColorParticleSystemParameter(Structure):
    _fields_ = [("Name", FName), ("Value", FColor)]


class FMaterialParticleSystemParameter(Structure):
    _fields_ = [("Name", FName), ("Value", POINTER(UMaterialInterface))]


class FActorParticleSystemParameter(Structure):
    _fields_ = [("Name", FName), ("Context", FBehaviorContextData)]


class FStaticMeshComponentLODInfo(Structure):
    _fields_ = [
        ("ShadowMaps", TArray_UShadowMap2DPtr),
        ("ShadowVertexBuffers", TArray_UObjectPtr),
        ("LightMap", FPointer),
        ("OverrideVertexColors", FPointer),
    ]


class FPaintedVertex(Structure):
    _fields_ = [("Position", FVector), ("Normal", FPackedNormal), ("Color", FColor)]


class FFOscillator(Structure):
    _fields_ = [
        ("Amplitude", c_float),
        ("Frequency", c_float),
        ("InitialOffset", c_ubyte),
    ]


class FVOscillator(Structure):
    _fields_ = [("X", FFOscillator), ("Y", FFOscillator), ("Z", FFOscillator)]


class FROscillator(Structure):
    _fields_ = [("Pitch", FFOscillator), ("Yaw", FFOscillator), ("Roll", FFOscillator)]


class FCameraShakeInstance(Structure):
    _fields_ = [
        ("SourceShake", POINTER(UCameraShake)),
        ("SourceShakeName", FName),
        ("OscillatorTimeRemaining", c_float),
        ("bBlendingIn", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentBlendInTime", c_float),
        ("bBlendingOut", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentBlendOutTime", c_float),
        ("LocSinOffset", FVector),
        ("RotSinOffset", FVector),
        ("FOVSinOffset", c_float),
        ("Scale", c_float),
        ("AnimInst", POINTER(UCameraAnimInst)),
        ("PlaySpace", c_ubyte),
        ("Unknown1", c_ubyte, 0xB),
        ("UserPlaySpaceMatrix", FMatrix),
    ]


class FTextureGroupContainer(Structure):
    _fields_ = [
        ("TEXTUREGROUP_World", c_bool, 1),
        ("TEXTUREGROUP_WorldNormalMap", c_bool, 1),
        ("TEXTUREGROUP_WorldSpecular", c_bool, 1),
        ("TEXTUREGROUP_Character", c_bool, 1),
        ("TEXTUREGROUP_CharacterNormalMap", c_bool, 1),
        ("TEXTUREGROUP_CharacterSpecular", c_bool, 1),
        ("TEXTUREGROUP_Weapon", c_bool, 1),
        ("TEXTUREGROUP_WeaponNormalMap", c_bool, 1),
        ("TEXTUREGROUP_WeaponSpecular", c_bool, 1),
        ("TEXTUREGROUP_Vehicle", c_bool, 1),
        ("TEXTUREGROUP_VehicleNormalMap", c_bool, 1),
        ("TEXTUREGROUP_VehicleSpecular", c_bool, 1),
        ("TEXTUREGROUP_Cinematic", c_bool, 1),
        ("TEXTUREGROUP_Effects", c_bool, 1),
        ("TEXTUREGROUP_EffectsNotFiltered", c_bool, 1),
        ("TEXTUREGROUP_Skybox", c_bool, 1),
        ("TEXTUREGROUP_UI", c_bool, 1),
        ("TEXTUREGROUP_Lightmap", c_bool, 1),
        ("TEXTUREGROUP_RenderTarget", c_bool, 1),
        ("TEXTUREGROUP_MobileFlattened", c_bool, 1),
        ("TEXTUREGROUP_ProcBuilding_Face", c_bool, 1),
        ("TEXTUREGROUP_ProcBuilding_LightMap", c_bool, 1),
        ("TEXTUREGROUP_Shadowmap", c_bool, 1),
        ("TEXTUREGROUP_ColorLookupTable", c_bool, 1),
        ("TEXTUREGROUP_Terrain_Heightmap", c_bool, 1),
        ("TEXTUREGROUP_Terrain_Weightmap", c_bool, 1),
        ("TEXTUREGROUP_ImageBasedReflection", c_bool, 1),
        ("TEXTUREGROUP_Bokeh", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTexture2DMipMap(Structure):
    _fields_ = [("Data", FUntypedBulkData_Mirror), ("SizeX", c_int), ("SizeY", c_int)]


class FTextureLinkedListMirror(Structure):
    _fields_ = [("Element", FPointer), ("Next", FPointer), ("PrevLink", FPointer)]


class FCanvasIcon(Structure):
    _fields_ = [
        ("Texture", POINTER(UTexture)),
        ("U", c_float),
        ("V", c_float),
        ("UL", c_float),
        ("VL", c_float),
    ]


class FDepthFieldGlowInfo(Structure):
    _fields_ = [
        ("bEnableGlow", c_bool, 1),
        ("", c_ulong, 0),
        ("GlowColor", FLinearColor),
        ("GlowOuterRadius", FVector2D),
        ("GlowInnerRadius", FVector2D),
    ]


class FFontRenderInfo(Structure):
    _fields_ = [
        ("bClipText", c_bool, 1),
        ("bEnableShadow", c_bool, 1),
        ("", c_ulong, 0),
        ("GlowInfo", FDepthFieldGlowInfo),
    ]


class FCanvasUVTri(Structure):
    _fields_ = [
        ("V0_Pos", FVector2D),
        ("V0_UV", FVector2D),
        ("V1_Pos", FVector2D),
        ("V1_UV", FVector2D),
        ("V2_Pos", FVector2D),
        ("V2_UV", FVector2D),
    ]


class FTextSizingParameters(Structure):
    _fields_ = [
        ("DrawX", c_float),
        ("DrawY", c_float),
        ("DrawXL", c_float),
        ("DrawYL", c_float),
        ("Scaling", FVector2D),
        ("DrawFont", POINTER(UFont)),
        ("SpacingAdjust", FVector2D),
        ("ViewportHeight", c_float),
    ]


class FWrappedStringElement(Structure):
    _fields_ = [("Value", FString), ("LineExtent", FVector2D)]


class FDamageTypeResistance(Structure):
    _fields_ = [
        ("ResistanceToImpact", FAttributeInitializationData),
        ("ResistanceToStatusEffect", FAttributeInitializationData),
    ]


class FUIRangeData(Structure):
    _fields_ = [
        ("CurrentValue", c_float),
        ("MinValue", c_float),
        ("MaxValue", c_float),
        ("NudgeValue", c_float),
        ("bIntRange", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTextureCoordinates(Structure):
    _fields_ = [("U", c_float), ("V", c_float), ("UL", c_float), ("VL", c_float)]


class FUIProviderScriptFieldValue(Structure):
    _fields_ = [
        ("PropertyTag", FName),
        ("PropertyType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StringValue", FString),
        ("ImageValue", POINTER(USurface)),
        ("ArrayValue", TArray_int),
        ("RangeValue", FUIRangeData),
        ("NetIdValue", FUniqueNetId),
        ("AtlasCoordinates", FTextureCoordinates),
    ]


class FUIProviderFieldValue(Structure):
    _fields_ = [
        ("PropertyTag", FName),
        ("PropertyType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StringValue", FString),
        ("ImageValue", POINTER(USurface)),
        ("ArrayValue", TArray_int),
        ("RangeValue", FUIRangeData),
        ("NetIdValue", FUniqueNetId),
        ("AtlasCoordinates", FTextureCoordinates),
        ("CustomStringNode", FPointer),
    ]


class FInputKeyAction(Structure):
    _fields_ = [
        ("InputKeyName", FName),
        ("InputKeyState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TriggeredOps", TArray_FSeqOpOutputInputLink),
        ("ActionsToExecute", TArray_USequenceOpPtr),
    ]


class FUIDataStoreBinding(Structure):
    _fields_ = [
        ("Subscriber", FScriptInterface),
        ("RequiredFieldType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("MarkupString", FString),
        ("BindingIndex", int),
        ("DataStoreName", FName),
        ("DataStoreField", FName),
        ("ResolvedDataStore", POINTER(UUIDataStore)),
    ]


class FInputEventParameters(Structure):
    _fields_ = [
        ("PlayerIndex", int),
        ("ControllerId", int),
        ("InputKeyName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("InputDelta", c_float),
        ("DeltaTime", c_float),
        ("bAltPressed", c_bool, 1),
        ("bCtrlPressed", c_bool, 1),
        ("bShiftPressed", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSubscribedInputEventParameters(Structure):
    _fields_ = [
        ("PlayerIndex", int),
        ("ControllerId", int),
        ("InputKeyName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("InputDelta", c_float),
        ("DeltaTime", c_float),
        ("bAltPressed", c_bool, 1),
        ("bCtrlPressed", c_bool, 1),
        ("bShiftPressed", c_bool, 1),
        ("", c_ulong, 0),
        ("InputAliasName", FName),
    ]


class FUIAxisEmulationDefinition(Structure):
    _fields_ = [
        ("AxisInputKey", FName),
        ("AdjacentAxisInputKey", FName),
        ("bEmulateButtonPress", c_bool, 1),
        ("", c_ulong, 0),
        ("InputKeyToEmulate", FName * 2),
    ]


class FRawInputKeyEventData(Structure):
    _fields_ = [("InputKeyName", FName), ("ModifierKeyFlags", c_ubyte)]


class FAutoCompleteCommand(Structure):
    _fields_ = [("Command", FString), ("Desc", FString)]


class FAutoCompleteNode(Structure):
    _fields_ = [
        ("IndexChar", c_int),
        ("AutoCompleteListIndices", TArray_int),
        ("ChildNodes", TArray_FPointer),
    ]


class FCovPosInfo(Structure):
    _fields_ = [
        ("Link", POINTER(ACoverLink)),
        ("LtSlotIdx", c_int),
        ("RtSlotIdx", c_int),
        ("LtToRtPct", c_float),
        ("Location", FVector),
        ("Normal", FVector),
        ("Tangent", FVector),
    ]


class FFireLinkItem(Structure):
    _fields_ = [
        ("SrcType", c_ubyte),
        ("SrcAction", c_ubyte),
        ("DestType", c_ubyte),
        ("DestAction", c_ubyte),
    ]


class FFireLink(Structure):
    _fields_ = [
        ("Interactions", TArray_unsigned_char),
        ("PackedProperties_CoverPairRefAndDynamicInfo", int),
        ("bFallbackLink", c_bool, 1),
        ("bDynamicIndexInited", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDynamicLinkInfo(Structure):
    _fields_ = [("LastTargetLocation", FVector), ("LastSrcLocation", FVector)]


class FCoverReference(Structure):
    _fields_ = [("Actor", POINTER(AActor)), ("Guid", FGuid), ("SlotIdx", c_int)]


class FExposedLink(Structure):
    _fields_ = [("TargetActor", FCoverReference), ("ExposedScale", c_ubyte)]


class FSlotMoveRef(Structure):
    _fields_ = [
        ("Poly", FPolyReference),
        ("Dest", FBasedPosition),
        ("Direction", c_int),
    ]


class FCoverInfo(Structure):
    _fields_ = [("Link", POINTER(ACoverLink)), ("SlotIdx", c_int)]


class FCoverSlot(Structure):
    _fields_ = [
        ("SlotOwner", POINTER(APawn)),
        ("SlotValidAfterTime", c_float),
        ("ForceCoverType", c_ubyte),
        ("CoverType", c_ubyte),
        ("LocationDescription", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("LocationOffset", FVector),
        ("RotationOffset", FRotator),
        ("Actions", TArray_unsigned_char),
        ("FireLinks", TArray_FFireLink),
        ("RejectedFireLinks", TArray_FFireLink),
        ("ExposedCoverPackedProperties", TArray_int),
        ("TurnTargetPackedProperties", c_int),
        ("SlipRefs", TArray_FSlotMoveRef),
        ("OverlapClaimsList", TArray_FCoverInfo),
        ("bLeanLeft", c_bool, 1),
        ("bLeanRight", c_bool, 1),
        ("bForceCanPopUp", c_bool, 1),
        ("bCanPopUp", c_bool, 1),
        ("bCanMantle", c_bool, 1),
        ("bCanClimbUp", c_bool, 1),
        ("bForceCanCoverSlip_Left", c_bool, 1),
        ("bForceCanCoverSlip_Right", c_bool, 1),
        ("bCanCoverSlip_Left", c_bool, 1),
        ("bCanCoverSlip_Right", c_bool, 1),
        ("bCanSwatTurn_Left", c_bool, 1),
        ("bCanSwatTurn_Right", c_bool, 1),
        ("bEnabled", c_bool, 1),
        ("bAllowPopup", c_bool, 1),
        ("bAllowMantle", c_bool, 1),
        ("bAllowCoverSlip", c_bool, 1),
        ("bAllowClimbUp", c_bool, 1),
        ("bAllowSwatTurn", c_bool, 1),
        ("bForceNoGroundAdjust", c_bool, 1),
        ("bPlayerOnly", c_bool, 1),
        ("bPreferLeanOverPopup", c_bool, 1),
        ("bDestructible", c_bool, 1),
        ("bSelected", c_bool, 1),
        ("bFailedToFindSurface", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCoverMeshes(Structure):
    _fields_ = [
        ("Base", POINTER(UStaticMesh)),
        ("LeanLeft", POINTER(UStaticMesh)),
        ("LeanRight", POINTER(UStaticMesh)),
        ("LeanLeftPref", POINTER(UStaticMesh)),
        ("LeanRightPref", POINTER(UStaticMesh)),
        ("Climb", POINTER(UStaticMesh)),
        ("Mantle", POINTER(UStaticMesh)),
        ("SlipLeft", POINTER(UStaticMesh)),
        ("SlipRight", POINTER(UStaticMesh)),
        ("SwatLeft", POINTER(UStaticMesh)),
        ("SwatRight", POINTER(UStaticMesh)),
        ("PopUp", POINTER(UStaticMesh)),
        ("PlayerOnly", POINTER(UStaticMesh)),
    ]


class FManualCoverTypeInfo(Structure):
    _fields_ = [("SlotIndex", c_ubyte), ("ManualCoverType", c_ubyte)]


class FCoverReplicationInfo(Structure):
    _fields_ = [
        ("Link", POINTER(ACoverLink)),
        ("SlotsEnabled", TArray_unsigned_char),
        ("SlotsDisabled", TArray_unsigned_char),
        ("SlotsAdjusted", TArray_unsigned_char),
        ("SlotsCoverTypeChanged", TArray_FManualCoverTypeInfo),
    ]


class FCullDistanceSizePair(Structure):
    _fields_ = [("Size", c_float), ("CullDistance", c_float)]


class FPresetGeneratedPoint(Structure):
    _fields_ = [
        ("KeyIn", c_float),
        ("KeyOut", c_float),
        ("TangentsValid", c_bool, 1),
        ("", c_ulong, 0),
        ("TangentIn", c_float),
        ("TangentOut", c_float),
        ("IntepMode", c_ubyte),
    ]


class FDamageInfo(Structure):
    _fields_ = [
        ("Instigator", POINTER(AController)),
        ("HitLocation", FVector),
        ("DamageType", POINTER(UClass)),
        ("DamageTypeDefinition", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]


class FReflectionInfo(Structure):
    _fields_ = [
        ("ReflectionType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ReflectedDamageScale", c_float),
        ("ReflectedDamageToReflector", c_float),
        ("bReflectTowardAttacker", c_bool, 1),
        ("", c_ulong, 0),
        ("ReflectedInaccuracyModifier", c_float),
        ("bReflectProjectiles", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDamageEventSummary(Structure):
    _fields_ = [
        ("InitialDamage", c_float),
        ("AIDamageScaleReduction", c_float),
        ("DamageSourceReduction", c_float),
        ("InstigatorDamageTypeReduction", c_float),
        ("ExpLevelDifferenceReduction", c_float),
        ("RecipientDamageTypeReduction", c_float),
        ("HitRegionReduction", c_float),
        ("ShieldReduction", c_float),
        ("IntrinsicArmorReduction", c_float),
        ("DamageSurfaceReduction", c_float),
        ("HitRegionCapReduction", c_float),
        ("ProtectionTimerReduction", c_float),
        ("ProjectileReflectionReduction", c_float),
        ("DamageSeverityPercent", c_float),
        ("DamageDealtToShields", c_float),
        ("ExtraDamageDealtDueToAmplify", c_float),
        ("FinalDamage", c_float),
        ("PreviousHealth", c_float),
        ("HitRegion", POINTER(UBaseHitRegionDefinition)),
        ("bWasCrit", c_bool, 1),
        ("bWasInjured", c_bool, 1),
        ("bWasMaxShield", c_bool, 1),
        ("bWasMaxHealth", c_bool, 1),
        ("bWasOneShotKill", c_bool, 1),
        ("", c_ulong, 0),
        ("ReflectionData", FReflectionInfo),
        ("DamageTakenSkillEventsTriggered", c_ubyte * 8),
        ("DamageDealtSkillEventsTriggered", c_ubyte * 8),
    ]


class FPlayerDataStoreGroup(Structure):
    _fields_ = [
        ("PlayerOwner", POINTER(ULocalPlayer)),
        ("DataStores", TArray_UUIDataStorePtr),
    ]


class FKeyBind(Structure):
    _fields_ = [
        ("Name", FName),
        ("Command", FString),
        ("Control", c_bool, 1),
        ("Shift", c_bool, 1),
        ("Alt", c_bool, 1),
        ("LeftTrigger", c_bool, 1),
        ("RightTrigger", c_bool, 1),
        ("bIgnoreCtrl", c_bool, 1),
        ("bIgnoreShift", c_bool, 1),
        ("bIgnoreAlt", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDecalReceiver(Structure):
    _fields_ = [("Component", POINTER(UPrimitiveComponent)), ("RenderData", FPointer)]


class FActiveDecalInfo(Structure):
    _fields_ = [("Decal", POINTER(UDecalComponent)), ("LifetimeRemaining", c_float)]


class FLightmassMaterialInterfaceSettings(Structure):
    _fields_ = [
        ("DistanceFieldPenumbraScale", c_float),
        ("bCastShadowAsMasked", c_bool, 1),
        ("bOverrideCastShadowAsMasked", c_bool, 1),
        ("bOverrideEmissiveBoost", c_bool, 1),
        ("bOverrideDiffuseBoost", c_bool, 1),
        ("bOverrideSpecularBoost", c_bool, 1),
        ("bOverrideExportResolutionScale", c_bool, 1),
        ("bOverrideDistanceFieldPenumbraScale", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMaterialInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
    ]


class FColorMaterialInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("", c_ulong, 0),
        ("Constant", FColor),
    ]


class FScalarMaterialInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("", c_ulong, 0),
        ("Constant", c_float),
    ]


class FVectorMaterialInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("", c_ulong, 0),
        ("Constant", FVector),
    ]


class FVector2MaterialInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("", c_ulong, 0),
        ("ConstantX", c_float),
        ("ConstantY", c_float),
    ]


class APhysicsVolume_FCheckpointRecord(Structure):
    _fields_ = [("bPainCausing", c_bool, 1), ("bActive", c_bool, 1), ("", c_ulong, 0)]


class FMarketplaceOffer(Structure):
    _fields_ = [
        ("OfferId", c_int),
        ("ContentCategory", c_int),
        ("OfferName", FString),
        ("ContentId", TArray_unsigned_char),
        ("bIsUnrestrictedLicense", c_bool, 1),
        ("", c_ulong, 0),
        ("LicenseMask", c_int),
        ("bUserHasPurchased", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FInstalledContentInfo(Structure):
    _fields_ = [
        ("ContentType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ContentName", FString),
        ("ContentPath", FString),
        ("Filename", FString),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("bHasSeen", c_bool, 1),
        ("", c_ulong, 0),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
    ]


class FMarketplaceOfferDownloadState(Structure):
    _fields_ = [
        ("bIsDownloaded", c_bool, 1),
        ("bIsInstalled", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FRejectedContentInfo(Structure):
    _fields_ = [
        ("ContentType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ContentName", FString),
        ("ContentPath", FString),
        ("Filename", FString),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("bHasSeen", c_bool, 1),
        ("", c_ulong, 0),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("Result", c_ubyte),
    ]


class FDlcContentId(Structure):
    _fields_ = [("PackageId", c_int), ("ContentId", c_int)]


class FDlcContentInfo(Structure):
    _fields_ = [
        ("ContentId", FDlcContentId),
        ("bIsInstalled", c_bool, 1),
        ("bIsLicensed", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDlcCompatibilityData(Structure):
    _fields_ = [("A", c_int), ("B", c_int), ("C", c_int), ("D", c_int)]


class FDlcCompatibilityDataEx(Structure):
    _fields_ = [("A", c_int), ("B", c_int), ("C", c_int), ("D", c_int)]


class ADynamicBlockingVolume_FCheckpointRecord(Structure):
    _fields_ = [
        ("Location", FVector),
        ("Rotation", FRotator),
        ("bCollideActors", c_bool, 1),
        ("bBlockActors", c_bool, 1),
        ("bNeedsReplication", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FViewParticleEmitterInstanceMotionBlurInfo(Structure):
    _fields_ = [("EmitterInstanceMBInfoMap", FMap_Mirror)]


class FParticleSysParam(Structure):
    _fields_ = [
        ("Name", FName),
        ("ParamType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Scalar", c_float),
        ("Scalar_Low", c_float),
        ("Vector", FVector),
        ("Vector_Low", FVector),
        ("Color", FColor),
        ("Actor", POINTER(AActor)),
        ("Material", POINTER(UMaterialInterface)),
        ("Socket", FName),
    ]


class FParticleEventData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
    ]


class FParticleEventSpawnData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
    ]


class FParticleEventDeathData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
    ]


class FParticleEventCollideData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
        ("Normal", FVector),
        ("Time", c_float),
        ("Item", c_int),
        ("BoneName", FName),
    ]


class FParticleEventTraceData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
    ]


class FParticleEventKismetData(Structure):
    _fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("UsePSysCompLocation", c_bool, 1),
        ("", c_ulong, 0),
        ("Normal", FVector),
    ]


class FParticleEmitterInstanceMotionBlurInfo(Structure):
    _fields_ = [("ParticleMBInfoMap", FMap_Mirror)]


class FParticleEmitterInstance(Structure):
    _fields_ = []


class AEmitter_FCheckpointRecord(Structure):
    _fields_ = [("bIsActive", c_bool, 1), ("", c_ulong, 0)]


class FEmitterBaseInfo(Structure):
    _fields_ = [
        ("PSC", POINTER(UParticleSystemComponent)),
        ("Base", POINTER(AActor)),
        ("RelativeLocation", FVector),
        ("RelativeRotation", FRotator),
        ("bInheritBaseScale", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FParticleSystemLOD(Structure):
    _fields_ = [("bLit", c_bool, 1), ("", c_ulong, 0)]


class FStatColorMapEntry(Structure):
    _fields_ = [("In", c_float), ("Out", FColor)]


class FStatColorMapping(Structure):
    _fields_ = [
        ("StatName", FString),
        ("ColorMap", TArray_FStatColorMapEntry),
        ("DisableBlend", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDropNoteInfo(Structure):
    _fields_ = [("Location", FVector), ("Rotation", FRotator), ("Comment", FString)]


class FPrimitiveMaterialRef(Structure):
    _fields_ = [("Primitive", POINTER(UPrimitiveComponent)), ("MaterialIndex", c_int)]


class FPostProcessMaterialRef(Structure):
    _fields_ = [("Effect", POINTER(UMaterialEffect))]


class FMaterialReferenceList(Structure):
    _fields_ = [
        ("TargetMaterial", POINTER(UMaterialInterface)),
        ("AffectedMaterialRefs", TArray_FPrimitiveMaterialRef),
        ("AffectedPPChainMaterialRefs", TArray_FPostProcessMaterialRef),
    ]


class FVelocityObstacleStat(Structure):
    _fields_ = [
        ("Position", FVector),
        ("Velocity", FVector),
        ("Radius", c_float),
        ("Priority", c_int),
    ]


class FGroupAnimationAndSoundIdentifier(Structure):
    _fields_ = [
        ("SoundNodeWaveName", FString),
        ("FaceFXGroupName", FString),
        ("FaceFXAnimName", FString),
    ]


class AFogVolumeDensityInfo_FCheckpointRecord(Structure):
    _fields_ = [("bEnabled", c_bool, 1), ("", c_ulong, 0)]


class FFoliageInstanceBase(Structure):
    _fields_ = [
        ("Location", FVector),
        ("XAxis", FVector),
        ("YAxis", FVector),
        ("ZAxis", FVector),
        ("DistanceFactorSquared", c_float),
    ]


class FStoredFoliageInstance(Structure):
    _fields_ = [
        ("Location", FVector),
        ("XAxis", FVector),
        ("YAxis", FVector),
        ("ZAxis", FVector),
        ("DistanceFactorSquared", c_float),
        ("StaticLighting", FColor * 3),
    ]


class FFoliageMesh(Structure):
    _fields_ = [
        ("InstanceStaticMesh", POINTER(UStaticMesh)),
        ("Material", POINTER(UMaterialInterface)),
        ("MaxDrawRadius", c_float),
        ("MinTransitionRadius", c_float),
        ("MinThinningRadius", c_float),
        ("MinScale", FVector),
        ("MaxScale", FVector),
        ("MinUniformScale", c_float),
        ("MaxUniformScale", c_float),
        ("SwayScale", c_float),
        ("Seed", c_int),
        ("SurfaceAreaPerInstance", c_float),
        ("bCreateInstancesOnBSP", c_bool, 1),
        ("bCreateInstancesOnStaticMeshes", c_bool, 1),
        ("bCreateInstancesOnTerrain", c_bool, 1),
        ("", c_ulong, 0),
        ("Component", POINTER(UFoliageComponent)),
    ]


class FFontImportOptionsData(Structure):
    _fields_ = [
        ("FontName", FString),
        ("Height", c_float),
        ("bEnableAntialiasing", c_bool, 1),
        ("bEnableBold", c_bool, 1),
        ("bEnableItalic", c_bool, 1),
        ("bEnableUnderline", c_bool, 1),
        ("bAlphaOnly", c_bool, 1),
        ("", c_ulong, 0),
        ("CharacterSet", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Chars", FString),
        ("UnicodeRange", FString),
        ("CharsFilePath", FString),
        ("CharsFileWildcard", FString),
        ("bCreatePrintableOnly", c_bool, 1),
        ("bIncludeASCIIRange", c_bool, 1),
        ("", c_ulong, 0),
        ("ForegroundColor", FLinearColor),
        ("bEnableDropShadow", c_bool, 1),
        ("", c_ulong, 0),
        ("TexturePageWidth", c_int),
        ("TexturePageMaxHeight", c_int),
        ("XPadding", c_int),
        ("YPadding", c_int),
        ("ExtendBoxTop", c_int),
        ("ExtendBoxBottom", c_int),
        ("ExtendBoxRight", c_int),
        ("ExtendBoxLeft", c_int),
        ("bEnableLegacyMode", c_bool, 1),
        ("", c_ulong, 0),
        ("Kerning", c_int),
        ("bUseDistanceFieldAlpha", c_bool, 1),
        ("", c_ulong, 0),
        ("DistanceFieldScaleFactor", c_int),
        ("DistanceFieldScanRadiusScale", c_float),
    ]


class FFontCharacter(Structure):
    _fields_ = [
        ("StartU", c_int),
        ("StartV", c_int),
        ("USize", c_int),
        ("VSize", c_int),
        ("TextureIndex", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("VerticalOffset", c_int),
    ]


class FWaveformSample(Structure):
    _fields_ = [
        ("LeftAmplitude", c_ubyte),
        ("RightAmplitude", c_ubyte),
        ("LeftFunction", c_ubyte),
        ("RightFunction", c_ubyte),
        ("Duration", c_float),
    ]


class FLevelStreamingStatus(Structure):
    _fields_ = [
        ("PackageName", FName),
        ("bShouldBeLoaded", c_bool, 1),
        ("bShouldBeVisible", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FFullyLoadedPackagesInfo(Structure):
    _fields_ = [
        ("FullyLoadType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Tag", FString),
        ("PackagesToLoad", TArray_FName),
        ("LoadedObjects", TArray_UObjectPtr),
    ]


class FNamedNetDriver(Structure):
    _fields_ = [("NetDriverName", FName), ("NetDriver", FPointer)]


class FAnimTag(Structure):
    _fields_ = [("Tag", FString), ("Contains", TArray_FString)]


class FURL(Structure):
    _fields_ = [
        ("Protocol", FString),
        ("Host", FString),
        ("Port", c_int),
        ("Map", FString),
        ("Op", TArray_FString),
        ("Portal", FString),
        ("Valid", c_int),
    ]


class FGameClassShortName(Structure):
    _fields_ = [("ShortName", FString), ("GameClassName", FString)]


class FGameTypePrefix(Structure):
    _fields_ = [
        ("Prefix", FString),
        ("bUsesCommonPackage", c_bool, 1),
        ("", c_ulong, 0),
        ("GameType", FString),
        ("AdditionalGameTypes", TArray_FString),
        ("ForcedObjects", TArray_FString),
    ]


class FPlayerInformation(Structure):
    _fields_ = [
        ("ControllerName", FName),
        ("PlayerName", FString),
        ("UniqueId", FUniqueNetId),
        ("bIsBot", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTeamInformation(Structure):
    _fields_ = [
        ("TeamIndex", c_int),
        ("TeamName", FString),
        ("TeamColor", FColor),
        ("MaxSize", c_int),
    ]


class FGameStatGroup(Structure):
    _fields_ = [("Group", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("Level", c_int)]


class FGameplayEventMetaData(Structure):
    _fields_ = [
        ("EventID", int),
        ("EventName", FName),
        ("StatGroup", FGameStatGroup),
        ("EventDataType", int),
    ]


class FWeaponClassEventData(Structure):
    _fields_ = [("WeaponClassName", FName)]


class FDamageClassEventData(Structure):
    _fields_ = [("DamageClassName", FName)]


class FProjectileClassEventData(Structure):
    _fields_ = [("ProjectileClassName", FName)]


class FPawnClassEventData(Structure):
    _fields_ = [("PawnClassName", FName)]


class FGameplayEventsHeader(Structure):
    _fields_ = [
        ("EngineVersion", int),
        ("StatsWriterVersion", int),
        ("StreamOffset", int),
        ("AggregateOffset", int),
        ("FooterOffset", int),
        ("TotalStreamSize", int),
        ("FileSize", int),
        ("FilterClass", FString),
        ("Flags", c_int),
    ]


class FGameSessionInformation(Structure):
    _fields_ = [
        ("AppTitleID", c_int),
        ("PlatformType", c_int),
        ("Language", FString),
        ("GameplaySessionTimestamp", FString),
        ("GameplaySessionStartTime", c_float),
        ("GameplaySessionEndTime", c_float),
        ("bGameplaySessionInProgress", c_bool, 1),
        ("", c_ulong, 0),
        ("GameplaySessionID", FString),
        ("GameClassName", FString),
        ("MapName", FString),
        ("MapURL", FString),
        ("SessionInstance", int),
        ("GameTypeId", int),
        ("OwningNetId", FUniqueNetId),
        ("PlaylistId", c_int),
    ]


class FMusicStateInfo(Structure):
    _fields_ = [
        ("State", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CustomCombatMusicAkState", POINTER(UAkState)),
        ("CustomAmbientMusicAkState", POINTER(UAkState)),
    ]


class FMusicTrackStruct(Structure):
    _fields_ = [
        ("TheSoundCue", POINTER(USoundCue)),
        ("bAutoPlay", c_bool, 1),
        ("bPersistentAcrossLevels", c_bool, 1),
        ("", c_ulong, 0),
        ("FadeInTime", c_float),
        ("FadeInVolumeLevel", c_float),
        ("FadeOutTime", c_float),
        ("FadeOutVolumeLevel", c_float),
        ("MP3Filename", FString),
    ]


class FNavMeshPathGoalEvaluatorCacheDatum(Structure):
    _fields_ = [("ListIdx", c_int), ("List", POINTER(UNavMeshPathGoalEvaluator) * 5)]


class FPhysXEmitterVerticalProperties(Structure):
    _fields_ = [
        ("bDisableLod", c_bool, 1),
        ("", c_ulong, 0),
        ("ParticlesLodMin", c_int),
        ("ParticlesLodMax", c_int),
        ("PacketsPerPhysXParticleSystemMax", c_int),
        ("bApplyCylindricalPacketCulling", c_bool, 1),
        ("", c_ulong, 0),
        ("SpawnLodVsFifoBias", c_float),
    ]


class FPhysXVerticalProperties(Structure):
    _fields_ = [("Emitters", FPhysXEmitterVerticalProperties)]


class FHostMigrationState(Structure):
    _fields_ = [
        ("HostMigrationProgress", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("HostMigrationElapsedTime", c_float),
        ("HostMigrationTravelCountdown", c_float),
        ("HostMigrationTravelURL", FString),
        ("bHostMigrationEnabled", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNavigationArea(Structure):
    _fields_ = [("AreaName", FName), ("AreaColor", FColor)]


class FWorldFractureSettings(Structure):
    _fields_ = [
        ("ChanceOfPhysicsChunkOverride", c_float),
        ("bEnableChanceOfPhysicsChunkOverride", c_bool, 1),
        ("bLimitExplosionChunkSize", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxExplosionChunkSize", c_float),
        ("bLimitDamageChunkSize", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxDamageChunkSize", c_float),
        ("MaxNumFacturedChunksToSpawnInAFrame", c_int),
        ("FractureExplosionVelScale", c_float),
    ]


class FNavMeshPathConstraintCacheDatum(Structure):
    _fields_ = [("ListIdx", c_int), ("List", POINTER(UNavMeshPathConstraint) * 5)]


class FLightmassWorldInfoSettings(Structure):
    _fields_ = [
        ("StaticLightingLevelScale", c_float),
        ("NumIndirectLightingBounces", c_int),
        ("EnvironmentColor", FColor),
        ("EnvironmentIntensity", c_float),
        ("EmissiveBoost", c_float),
        ("DiffuseBoost", c_float),
        ("SpecularBoost", c_float),
        ("IndirectNormalInfluenceBoost", c_float),
        ("bUseAmbientOcclusion", c_bool, 1),
        ("", c_ulong, 0),
        ("DirectIlluminationOcclusionFraction", c_float),
        ("IndirectIlluminationOcclusionFraction", c_float),
        ("OcclusionExponent", c_float),
        ("FullyOccludedSamplesFraction", c_float),
        ("MaxOcclusionDistance", c_float),
        ("bVisualizeMaterialDiffuse", c_bool, 1),
        ("bVisualizeAmbientOcclusion", c_bool, 1),
        ("bCompressShadowmap", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FScreenMessageString(Structure):
    _fields_ = [
        ("Key", FQWord),
        ("ScreenMessage", FString),
        ("DisplayColor", FColor),
        ("TimeToDisplay", c_float),
        ("CurrentTimeDisplayed", c_float),
    ]


class FApexModuleDestructibleSettings(Structure):
    _fields_ = [
        ("MaxChunkIslandCount", c_int),
        ("MaxRrbActorCount", c_int),
        ("MaxChunkSeparationLOD", c_float),
        ("bOverrideMaxChunkSeparationLOD", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPhysXSimulationProperties(Structure):
    _fields_ = [
        ("bUseHardware", c_bool, 1),
        ("bFixedTimeStep", c_bool, 1),
        ("", c_ulong, 0),
        ("TimeStep", c_float),
        ("MaxSubSteps", c_int),
    ]


class FPhysXSceneProperties(Structure):
    _fields_ = [
        ("PrimaryScene", FPhysXSimulationProperties),
        ("CompartmentRigidBody", FPhysXSimulationProperties),
        ("CompartmentFluid", FPhysXSimulationProperties),
        ("CompartmentCloth", FPhysXSimulationProperties),
        ("CompartmentSoftBody", FPhysXSimulationProperties),
    ]


class FCompartmentRunList(Structure):
    _fields_ = [
        ("RigidBody", c_bool, 1),
        ("Fluid", c_bool, 1),
        ("Cloth", c_bool, 1),
        ("SoftBody", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNetViewer(Structure):
    _fields_ = [
        ("InViewer", POINTER(APlayerController)),
        ("Viewer", POINTER(AActor)),
        ("ViewLocation", FVector),
        ("ViewDir", FVector),
    ]


class FLevelGroup(Structure):
    _fields_ = [
        ("bCollapsed", c_bool, 1),
        ("", c_ulong, 0),
        ("GroupColor", FColor),
        ("Levels", TArray_int),
        ("LevelGridVolumes", TArray_FString),
        ("GroupName", FString),
    ]


class FTitleSafeZoneArea(Structure):
    _fields_ = [
        ("MaxPercentX", c_float),
        ("MaxPercentY", c_float),
        ("RecommendedPercentX", c_float),
        ("RecommendedPercentY", c_float),
    ]


class FPerPlayerSplitscreenData(Structure):
    _fields_ = [
        ("SizeX", c_float),
        ("SizeY", c_float),
        ("OriginX", c_float),
        ("OriginY", c_float),
    ]


class FSplitscreenData(Structure):
    _fields_ = [("PlayerData", TArray_FPerPlayerSplitscreenData)]


class FDebugDisplayProperty(Structure):
    _fields_ = [
        ("Obj", POINTER(UObject)),
        ("PropertyName", FName),
        ("bSpecialProperty", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FGBXConnectedNavMesh(Structure):
    _fields_ = [("Mesh", POINTER(AGBXNavMesh)), ("MeshID", c_int)]


class FGBXNavMeshVertex(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float)]


class FGBXNavMeshPoly(Structure):
    _fields_ = [
        ("Verts", c_ubyte * 6),
        ("ConnectedPolys", c_ubyte * 6),
        ("PolyDataIdx", c_ubyte * 2),
    ]


class FGBXNavmeshCrossLevelConnection(Structure):
    _fields_ = [
        ("EdgeIdx", c_ubyte * 2),
        ("ConnectedNavmeshIdx", c_ubyte * 2),
        ("PolyIdx", c_ubyte * 2),
    ]


class FGBXNavMeshSpecialMove(Structure):
    _fields_ = [
        ("DestinationPolyIdx", c_int),
        ("DestinationMeshIdx", c_int),
        ("CrossLevelMoverIdx", c_int),
        ("ActorSpecialMoveId", c_int),
        ("Mover", FScriptInterface),
        ("LocalSpaceSrcLocation", FVector),
        ("LocalSpaceDestLocation", FVector),
    ]


class FGBXNavMeshPolyData(Structure):
    _fields_ = [
        ("CrossLevelConnections", TArray_FGBXNavmeshCrossLevelConnection),
        ("SpecialMoves", TArray_FGBXNavMeshSpecialMove),
        ("Obstacles", c_ubyte * 12),
    ]


class FGBXNavMeshPathSize(Structure):
    _fields_ = [
        ("Radius", c_float),
        ("Height", c_float),
        ("DrawColor", FColor),
        ("ObstacleDrawColor", FColor),
        ("StartIndex", c_int),
    ]


class FGBXNavMeshObstacleData(Structure):
    _fields_ = [
        ("Obstacle", POINTER(UGBXCrossLevelReferenceContainer)),
        ("MinAffectedPathSize", c_int),
    ]


class FGBXNavMeshPolyRef(Structure):
    _fields_ = [("NavMesh", POINTER(AGBXNavMesh)), ("PolyIdx", c_int)]


class FGBXNavMeshLookupCell(Structure):
    _fields_ = [("IntersectingPolys", FArray_Mirror)]


class FGBXNavMeshPolyLookup(Structure):
    _fields_ = [
        ("XCells", c_int),
        ("YCells", c_int),
        ("Origin", FVector),
        ("CellSize", FVector),
        ("CellIndices", TArray_int),
        ("Cells", TArray_FGBXNavMeshLookupCell),
    ]


class FGBXLineCheckResult(Structure):
    _fields_ = [("Location", FVector), ("Normal", FVector), ("Time", c_float)]


class FIGBXNavMeshObstaclePointer(Structure):
    _fields_ = [("Dummy", FPointer)]


class FGBXNavMeshPathPoint(Structure):
    _fields_ = [
        ("Poly", FGBXNavMeshPolyRef),
        ("Location", FVector),
        ("SpecialMoveId", c_int),
        ("NextPathObjectDistance", c_float),
        ("CrossedObstacles", TArray_FIGBXNavMeshObstaclePointer),
    ]


class FGBXNavMeshPath(Structure):
    _fields_ = [("PathPoints", TArray_FGBXNavMeshPathPoint), ("CurrentPathIdx", c_int)]


class FNavMeshPathParams(Structure):
    _fields_ = [
        ("Interface", FPointer),
        ("bCanMantle", c_bool, 1),
        ("bCanPhysicsJump", c_bool, 1),
        ("", c_ulong, 0),
        ("PhysicsJumpCostMultiplier", c_float),
        ("bNeedsMantleValidityTest", c_bool, 1),
        ("bAbleToSearch", c_bool, 1),
        ("", c_ulong, 0),
        ("SearchExtent", FVector),
        ("SearchLaneMultiplier", c_float),
        ("SearchStart", FVector),
        ("MaxDropHeight", c_float),
        ("MinWalkableZ", c_float),
        ("MaxHoverDistance", c_float),
        ("ObstaclesToIgnore", TArray_UObjectPtr),
        ("LookAheadDistance", c_float),
        ("CornerCutDistance", c_float),
        ("LookInterpRate", c_float),
    ]


class FPolySegmentSpan(Structure):
    _fields_ = [("Poly", FPointer), ("P1", FVector), ("P2", FVector)]


class FEdgePointer(Structure):
    _fields_ = [("Dummy", FPointer)]


class FPathStore(Structure):
    _fields_ = [("EdgeList", TArray_FEdgePointer), ("PathDistances", TArray_c_float)]


class FPlayerOwnedComponent(Structure):
    _fields_ = [
        ("PlayerOwner", POINTER(AActor)),
        ("Component", POINTER(UActorComponent)),
    ]


class FAkCallBackGetRTPC(Structure):
    _fields_ = [
        ("RTPC", POINTER(UAkRtpc)),
        ("Owner", POINTER(UObject)),
        ("Component", POINTER(UAkComponent)),
        ("CallbackValue", c_float),
    ]


class FGestaltAccessoryPartEntry(Structure):
    _fields_ = [("PartName", FName), ("BoneName", FName), ("MatrixIndex", c_int)]


class FGestaltAccessoryGroupEntry(Structure):
    _fields_ = [
        ("GroupName", FName),
        ("GestaltAccessoryPartList", TArray_FGestaltAccessoryPartEntry),
    ]


class FGestaltAccessoryMeshEntry(Structure):
    _fields_ = [
        ("MeshName", FName),
        ("GestaltAccessoryGroupList", TArray_FGestaltAccessoryGroupEntry),
    ]


class FGPMCollection(Structure):
    _fields_ = [("CollectionData", POINTER(UGestaltPartMatrices))]


class FActorToLookAt(Structure):
    _fields_ = [
        ("Actor", POINTER(AActor)),
        ("Rating", c_float),
        ("EnteredTime", c_float),
        ("LastKnownDistance", c_float),
        ("StartTimeBeingLookedAt", c_float),
        ("CurrentlyBeingLookedAt", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FHybridNavVisualizationVert(Structure):
    _fields_ = [
        ("Vert", FVector),
        ("bValidSegmentEndpoint", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FHybridNavVisualizationVertsForNavPoint(Structure):
    _fields_ = [
        ("Verts", TArray_FHybridNavVisualizationVert),
        ("bWasDrawn", c_bool, 1),
        ("", c_ulong, 0),
        ("FirstVertDrawn", FVector),
        ("LastVertDrawn", FVector),
        ("VerticalReach", c_float),
    ]


class FHybridNavVisualizationPerfStats(Structure):
    _fields_ = [
        ("VisualizationBuildingStartTime", c_int),
        ("VisualizationBuildingEndTime", c_int),
        ("CyclesBuildingVisualization", c_int),
        ("NumberOfNodesConsidered", c_int),
        ("NumberOfTraces", c_int),
        ("NumberOfEndPointAttempts", c_int),
        ("NumberOfSideAttempts", c_int),
        ("NumberOfNodesInVisualization", c_int),
        ("NumberOfPointsInVisualization", c_int),
        ("NumClosestNodesRequests", c_int),
        ("NumClosestNodeTests", c_int),
    ]


class FReplicatedCoordinatedEffect(Structure):
    _fields_ = [("Effects", c_int), ("Targets", c_int)]


class FGBXNavMeshSpecialMoveConnection(Structure):
    _fields_ = [
        ("SrcPoly", FGBXNavMeshPolyRef),
        ("SrcLocation", FVector),
        ("DestPoly", FGBXNavMeshPolyRef),
        ("DestLocation", FVector),
        ("MoveId", c_int),
    ]


class FIniLocFileEntry(Structure):
    _fields_ = [
        ("Filename", FString),
        ("bIsUnicode", c_bool, 1),
        ("", c_ulong, 0),
        ("ReadState", c_ubyte),
    ]


class FBodyInstanceDataUnion(Structure):
    _fields_ = [
        ("Data", FInstanceDataUnion),
        ("ParentAttachmentIdentifier", FName),
        ("AttachmentBaseInstanceDataIndex", c_int),
        ("SwitchIdentifier", c_ubyte),
    ]


class FBodyCompositionData(Structure):
    _fields_ = [
        ("Attachments", TArray_FBodyInstanceDataUnion),
        ("MaxExpectedComponents", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("HasHomingTargetComponents", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FInstancedStaticMeshInstanceData(Structure):
    _fields_ = [
        ("Transform", FMatrix),
        ("LightmapUVBias", FVector2D),
        ("ShadowmapUVBias", FVector2D),
    ]


class FInstancedStaticMeshMappingInfo(Structure):
    _fields_ = [
        ("Mapping", FPointer),
        ("LightMap", FPointer),
        ("LightmapTexture", POINTER(UTexture2D)),
        ("ShadowmapTexture", POINTER(UShadowMap2D)),
    ]


class AInterpActor_FCheckpointRecord(Structure):
    _fields_ = [
        ("Location", FVector),
        ("Rotation", FRotator),
        ("CollisionType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bHidden", c_bool, 1),
        ("bIsShutdown", c_bool, 1),
        ("bNeedsPositionReplication", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCurveEdEntry(Structure):
    _fields_ = [
        ("CurveObject", POINTER(UObject)),
        ("CurveColor", FColor),
        ("CurveName", FString),
        ("bHideCurve", c_int),
        ("bColorCurve", c_int),
        ("bFloatingPointColorCurve", c_int),
        ("bClamp", c_int),
        ("ClampLow", c_float),
        ("ClampHigh", c_float),
    ]


class FCurveEdTab(Structure):
    _fields_ = [
        ("TabName", FString),
        ("Curves", TArray_FCurveEdEntry),
        ("ViewStartInput", c_float),
        ("ViewEndInput", c_float),
        ("ViewStartOutput", c_float),
        ("ViewEndOutput", c_float),
    ]


class FAnimSetBakeAndPruneStatus(Structure):
    _fields_ = [
        ("AnimSetName", FString),
        ("bReferencedButUnused", c_bool, 1),
        ("bSkipBakeAndPrune", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FInterpEdSelKey(Structure):
    _fields_ = [
        ("Group", POINTER(UInterpGroup)),
        ("Track", POINTER(UInterpTrack)),
        ("KeyIndex", c_int),
        ("UnsnappedPosition", c_float),
    ]


class FSubTrackGroup(Structure):
    _fields_ = [
        ("GroupName", FString),
        ("TrackIndices", TArray_int),
        ("bIsCollapsed", c_bool, 1),
        ("bIsSelected", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSupportedSubTrackInfo(Structure):
    _fields_ = [
        ("SupportedClass", POINTER(UClass)),
        ("SubTrackName", FString),
        ("GroupIndex", c_int),
    ]


class FAnimControlTrackKey(Structure):
    _fields_ = [
        ("StartTime", c_float),
        ("AnimSeqName", FName),
        ("AnimStartOffset", c_float),
        ("AnimEndOffset", c_float),
        ("AnimPlayRate", c_float),
        ("bLooping", c_bool, 1),
        ("bReverse", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBoolTrackKey(Structure):
    _fields_ = [("Time", c_float), ("Value", c_bool, 1), ("", c_ulong, 0)]


class FCommentTrackKey(Structure):
    _fields_ = [("Time", c_float), ("Comment", FString)]


class FDirectorTrackCut(Structure):
    _fields_ = [
        ("Time", c_float),
        ("TransitionTime", c_float),
        ("TargetCamGroup", FName),
    ]


class FEventTrackKey(Structure):
    _fields_ = [("Time", c_float), ("EventName", FName)]


class FFaceFXTrackKey(Structure):
    _fields_ = [
        ("StartTime", c_float),
        ("FaceFXGroupName", FString),
        ("FaceFXSeqName", FString),
    ]


class FFaceFXSoundCueKey(Structure):
    _fields_ = [
        ("FaceFXSoundCue", POINTER(USoundCue)),
        ("FaceFXAkEvent", POINTER(UAkEvent)),
    ]


class FHeadTrackingKey(Structure):
    _fields_ = [("Time", c_float), ("Action", c_ubyte)]


class FFloatMaterialParamMICData(Structure):
    _fields_ = [
        ("MICs", TArray_UMaterialInstanceConstantPtr),
        ("MICResetFloats", TArray_c_float),
    ]


class FToggleTrackKey(Structure):
    _fields_ = [("Time", c_float), ("ToggleAction", c_ubyte)]


class FVectorMaterialParamMICData(Structure):
    _fields_ = [
        ("MICs", TArray_UMaterialInstanceConstantPtr),
        ("MICResetVectors", TArray_FVector),
    ]


class FVisibilityTrackKey(Structure):
    _fields_ = [("Time", c_float), ("Action", c_ubyte), ("ActiveCondition", c_ubyte)]


class FInterpLookupPoint(Structure):
    _fields_ = [("GroupName", FName), ("Time", c_float)]


class FInterpLookupTrack(Structure):
    _fields_ = [("Points", TArray_FInterpLookupPoint)]


class FParticleReplayTrackKey(Structure):
    _fields_ = [("Time", c_float), ("Duration", c_float), ("ClipIDNumber", c_int)]


class FSoundTrackKey(Structure):
    _fields_ = [
        ("Time", c_float),
        ("Volume", c_float),
        ("Pitch", c_float),
        ("Sound", POINTER(USoundCue)),
    ]


class FTeleportKeyData(Structure):
    _fields_ = [
        ("KeyTime", c_float),
        ("LocationKey", FVector),
        ("RotationKey", FRotator),
    ]


class FImpulseData(Structure):
    _fields_ = [("Impulse", FVector), ("Source", FVector)]


class FLandscapeWeightmapUsage(Structure):
    _fields_ = [("ChannelUsage", POINTER(ULandscapeComponent) * 4)]


class FLandscapeLayerInfo(Structure):
    _fields_ = [
        ("LayerName", FName),
        ("Hardness", c_float),
        ("bNoWeightBlend", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLandscapeAddCollision(Structure):
    _fields_ = []


class FWeightmapLayerAllocationInfo(Structure):
    _fields_ = [
        ("LayerName", FName),
        ("WeightmapTextureIndex", c_ubyte),
        ("WeightmapTextureChannel", c_ubyte),
    ]


class FLensFlareElement(Structure):
    _fields_ = [
        ("ElementName", FName),
        ("RayDistance", c_float),
        ("bIsEnabled", c_bool, 1),
        ("bUseSourceDistance", c_bool, 1),
        ("bNormalizeRadialDistance", c_bool, 1),
        ("bModulateColorBySource", c_bool, 1),
        ("", c_ulong, 0),
        ("Size", FVector),
        ("LFMaterials", TArray_UMaterialInterfacePtr),
        ("LFMaterialIndex", FRawDistributionFloat),
        ("Scaling", FRawDistributionFloat),
        ("AxisScaling", FRawDistributionVector),
        ("Rotation", FRawDistributionFloat),
        ("bOrientTowardsSource", c_bool, 1),
        ("", c_ulong, 0),
        ("Color", FRawDistributionVector),
        ("Alpha", FRawDistributionFloat),
        ("Offset", FRawDistributionVector),
        ("DistMap_Scale", FRawDistributionVector),
        ("DistMap_Color", FRawDistributionVector),
        ("DistMap_Alpha", FRawDistributionFloat),
    ]


class FLensFlareElementCurvePair(Structure):
    _fields_ = [("CurveName", FString), ("CurveObject", POINTER(UObject))]


class FLensFlareElementMaterials(Structure):
    _fields_ = [("ElementMaterials", TArray_UMaterialInterfacePtr)]


class FLensFlareElementInstance(Structure):
    _fields_ = []


class FLevelGridCellCoordinate(Structure):
    _fields_ = [("X", c_int), ("Y", c_int), ("Z", c_int)]


class ALevelStreamingVolume_FCheckpointRecord(Structure):
    _fields_ = [("bDisabled", c_bool, 1), ("", c_ulong, 0)]


class FPostProcessSettingsOverride(Structure):
    _fields_ = [
        ("Settings", FPostProcessSettings),
        ("bBlendingIn", c_bool, 1),
        ("bBlendingOut", c_bool, 1),
        ("", c_ulong, 0),
        ("CurrentBlendInTime", c_float),
        ("CurrentBlendOutTime", c_float),
        ("BlendInDuration", c_float),
        ("BlendOutDuration", c_float),
        ("BlendStartTime", c_float),
    ]


class FWorldLightingOverride(Structure):
    _fields_ = [
        ("DirectionOffset", FRotator),
        ("FadeInTime", c_float),
        ("FadeOutTime", c_float),
        ("RemainingFadeTime", c_float),
        ("RemovalRequested", c_bool, 1),
        ("", c_ulong, 0),
        ("pMovie", FPointer),
    ]


class FCurrentPostProcessVolumeInfo(Structure):
    _fields_ = [
        ("LastSettings", FPostProcessSettings),
        ("LastVolumeUsed", POINTER(APostProcessVolume)),
        ("BlendStartTime", c_float),
        ("LastBlendTime", c_float),
    ]


class FSynchronizedActorVisibilityHistory(Structure):
    _fields_ = [("State", FPointer), ("CriticalSection", FPointer)]


class FManufacturerGradeData(Structure):
    _fields_ = [("DisplayName", FString)]


class FManufacturerCustomGradeWeightData(Structure):
    _fields_ = [
        ("Manufacturer", POINTER(UManufacturerDefinition)),
        ("DefaultWeightIndex", c_ubyte),
    ]


class FExpressionInput(Structure):
    _fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
    ]


class FCustomInput(Structure):
    _fields_ = [("InputName", FString), ("Input", FExpressionInput)]


class FFontParameterValue(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("FontValue", POINTER(UFont)),
        ("FontPage", c_int),
        ("ExpressionGUID", FGuid),
    ]


class FScalarParameterValue(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", c_float),
        ("ExpressionGUID", FGuid),
    ]


class FTextureParameterValue(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", POINTER(UTexture)),
        ("ExpressionGUID", FGuid),
    ]


class FVectorParameterValue(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", FLinearColor),
        ("ExpressionGUID", FGuid),
    ]


class FParameterValueOverTime(Structure):
    _fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("", c_ulong, 0),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FFontParameterValueOverTime(Structure):
    _fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("", c_ulong, 0),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("", c_ulong, 0),
        ("FontValue", POINTER(UFont)),
        ("FontPage", c_int),
    ]


class FScalarParameterValueOverTime(Structure):
    _fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("", c_ulong, 0),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("", c_ulong, 0),
        ("ParameterValue", c_float),
        ("ParameterValueCurve", FInterpCurveFloat),
    ]


class FTextureParameterValueOverTime(Structure):
    _fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("", c_ulong, 0),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("", c_ulong, 0),
        ("ParameterValue", POINTER(UTexture)),
    ]


class FVectorParameterValueOverTime(Structure):
    _fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("", c_ulong, 0),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("", c_ulong, 0),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("", c_ulong, 0),
        ("ParameterValue", FLinearColor),
        ("ParameterValueCurve", FInterpCurveVector),
    ]


class FMorphNodeConn(Structure):
    _fields_ = [
        ("ChildNodes", TArray_UMorphNodeBasePtr),
        ("ConnName", FName),
        ("DrawY", c_int),
    ]


class FBoneAngleMorph(Structure):
    _fields_ = [("Angle", c_float), ("TargetWeight", c_float)]


class FBiasedGoalActor(Structure):
    _fields_ = [("Goal", POINTER(AActor)), ("ExtraCost", c_int)]


class ANavMeshObstacle_FCheckpointRecord(Structure):
    _fields_ = [("bEnabled", c_bool, 1), ("", c_ulong, 0)]


class FMMStats_Timer(Structure):
    _fields_ = [("bInProgress", c_bool, 1), ("", c_ulong, 0), ("MSecs", FDouble)]


class FOnlineProfileSetting(Structure):
    _fields_ = [
        ("Owner", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ProfileSetting", FSettingsProperty),
    ]


class FUIDataProviderField(Structure):
    _fields_ = [
        ("FieldTag", FName),
        ("FieldType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("FieldProviders", TArray_UUIDataProviderPtr),
    ]


class FRecentParty(Structure):
    _fields_ = [("PartyLeader", FUniqueNetId), ("PartyMembers", TArray_FUniqueNetId)]


class FCurrentPlayerMet(Structure):
    _fields_ = [("TeamNum", c_int), ("Skill", c_int), ("NetId", FUniqueNetId)]


class FOnlineStatsColumn(Structure):
    _fields_ = [("ColumnNo", c_int), ("StatValue", FSettingsData)]


class FOnlineStatsRow(Structure):
    _fields_ = [
        ("PlayerID", FUniqueNetId),
        ("Rank", FSettingsData),
        ("NickName", FString),
        ("Columns", TArray_FOnlineStatsColumn),
    ]


class FColumnMetaData(Structure):
    _fields_ = [("Id", int), ("Name", FName), ("ColumnName", FString)]


class FParticleBurst(Structure):
    _fields_ = [
        ("Count", c_int),
        ("CountLow", c_int),
        ("Time", c_float),
        ("CountDistribution", FRawDistributionFloat),
    ]


class FParticleCurvePair(Structure):
    _fields_ = [("CurveName", FString), ("CurveObject", POINTER(UObject))]


class FParticleRandomSeedInfo(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("bGetSeedFromInstance", c_bool, 1),
        ("bInstanceSeedIsIndex", c_bool, 1),
        ("bResetSeedOnEmitterLooping", c_bool, 1),
        ("", c_ulong, 0),
        ("RandomSeeds", TArray_int),
    ]


class FBeamModifierOptions(Structure):
    _fields_ = [
        ("bModify", c_bool, 1),
        ("bScale", c_bool, 1),
        ("bLock", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FParticleEvent_GenerateInfo(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Frequency", c_int),
        ("LowFreq", c_int),
        ("ParticleFrequency", c_int),
        ("FirstTimeOnly", c_bool, 1),
        ("LastTimeOnly", c_bool, 1),
        ("UseReflectedImpactVector", c_bool, 1),
        ("", c_ulong, 0),
        ("CustomName", FName),
        ("ParticleModuleEventsToSendToGame", TArray_UParticleModuleEventSendToGamePtr),
    ]


class FLocationBoneSocketInfo(Structure):
    _fields_ = [("BoneSocketName", FName), ("Offset", FVector)]


class FOrbitOptions(Structure):
    _fields_ = [
        ("bProcessDuringSpawn", c_bool, 1),
        ("bProcessDuringUpdate", c_bool, 1),
        ("bUseEmitterTime", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FEmitterDynamicParameter(Structure):
    _fields_ = [
        ("ParamName", FName),
        ("bUseEmitterTime", c_bool, 1),
        ("bSpawnTimeOnly", c_bool, 1),
        ("", c_ulong, 0),
        ("ValueMethod", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bScaleVelocityByParamValue", c_bool, 1),
        ("", c_ulong, 0),
        ("ParamValue", FRawDistributionFloat),
    ]


class FBeamTargetData(Structure):
    _fields_ = [("TargetName", FName), ("TargetPercentage", c_float)]


class FPhysXEmitterVerticalLodProperties(Structure):
    _fields_ = [
        ("WeightForFifo", c_float),
        ("WeightForSpawnLod", c_float),
        ("SpawnLodRateVsLifeBias", c_float),
        ("RelativeFadeoutTime", c_float),
    ]


class FLODSoloTrack(Structure):
    _fields_ = [("SoloEnableSetting", TArray_unsigned_char)]


class FParticleEmitterReplayFrame(Structure):
    _fields_ = [
        ("EmitterType", int),
        ("OriginalEmitterIndex", int),
        ("FrameState", FPointer),
    ]


class FParticleSystemReplayFrame(Structure):
    _fields_ = [("Emitters", TArray_FParticleEmitterReplayFrame)]


class FPersistentData(Structure):
    _fields_ = [("VfTable", FPointer)]


class FPersistentSequenceEventData(Structure):
    _fields_ = [("VfTable", FPointer), ("TriggerCount", c_int)]


class FPersistentSeqAct_InterpData(Structure):
    _fields_ = [("VfTable", FPointer), ("Position", c_float)]


class APointLightToggleable_FCheckpointRecord(Structure):
    _fields_ = [("bEnabled", c_bool, 1), ("", c_ulong, 0)]


class FActivateOp(Structure):
    _fields_ = [
        ("ActivatorOp", POINTER(USequenceOp)),
        ("Op", POINTER(USequenceOp)),
        ("InputIdx", c_int),
        ("RemainingDelay", c_float),
    ]


class FQueuedActivationInfo(Structure):
    _fields_ = [
        ("ActivatedEvent", POINTER(USequenceEvent)),
        ("InOriginator", POINTER(AActor)),
        ("InInstigator", POINTER(AActor)),
        ("ActivateIndices", TArray_int),
        ("bPushTop", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FKCachedConvexDataElement(Structure):
    _fields_ = [("ConvexElementData", TArray_unsigned_char)]


class FKCachedConvexData(Structure):
    _fields_ = [("CachedConvexElements", TArray_FKCachedConvexDataElement)]


class FLinearDOFSetup(Structure):
    _fields_ = [
        ("bLimited", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LimitSize", c_float),
    ]


class FResourcePoolIdentityState(Structure):
    _fields_ = [
        ("PoolDefinition", POINTER(UResourcePoolDefinition)),
        ("PoolGUID", c_ubyte),
    ]


class FRarelyChangedPoolState(Structure):
    _fields_ = [
        ("ConsumptionRate", c_float),
        ("ActiveRegenerationRate", c_float),
        ("OnIdleRegenerationRate", c_float),
        ("OnIdleRegenerationDelay", c_float),
        ("PassiveRegenerationRate", c_float),
    ]


class FPathSizeInfo(Structure):
    _fields_ = [
        ("Desc", FName),
        ("Radius", c_float),
        ("Height", c_float),
        ("CrouchHeight", c_float),
        ("PathColor", c_ubyte),
    ]


class FCameraCutInfo(Structure):
    _fields_ = [("Location", FVector), ("TimeStamp", c_float)]


class FSavedTransform(Structure):
    _fields_ = [("Location", FVector), ("Rotation", FRotator)]


class FLevelStreamingNameCombo(Structure):
    _fields_ = [("Level", POINTER(ULevelStreaming)), ("LevelName", FName)]


class FSwitchClassInfo(Structure):
    _fields_ = [("ClassName", FName), ("bFallThru", c_ubyte)]


class FSwitchObjectCase(Structure):
    _fields_ = [
        ("ObjectValue", POINTER(UObject)),
        ("bFallThru", c_bool, 1),
        ("bDefaultValue", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FShadowRelevanceSizePair(Structure):
    _fields_ = [
        ("Size", c_float),
        ("DynamicShadowCastRelevance", c_ubyte),
        ("OverrideStaticShadowSettings", c_ubyte),
    ]


class FSoftBodyTetraLink(Structure):
    _fields_ = [("Index", c_int), ("Bary", FVector)]


class FSoftBodySpecialBoneInfo(Structure):
    _fields_ = [
        ("BoneName", FName),
        ("BoneType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("AttachedVertexIndices", TArray_int),
    ]


class FClothSpecialBoneInfo(Structure):
    _fields_ = [
        ("BoneName", FName),
        ("BoneType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("AttachedVertexIndices", TArray_int),
    ]


class FTriangleSortSettings(Structure):
    _fields_ = [
        ("TriangleSorting", c_ubyte),
        ("CustomLeftRightAxis", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("CustomLeftRightBoneName", FName),
    ]


class FSkeletalMeshLODInfo(Structure):
    _fields_ = [
        ("DisplayFactor", c_float),
        ("LODHysteresis", c_float),
        ("LODMaterialMap", TArray_int),
        ("bEnableShadowCasting", TArray_BOOL),
        ("TriangleSorting", TArray_unsigned_char),
        ("TriangleSortSettings", TArray_FTriangleSortSettings),
        ("bDisableCompressions", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBoneMirrorExport(Structure):
    _fields_ = [
        ("BoneName", FName),
        ("SourceBoneName", FName),
        ("BoneFlipAxis", c_ubyte),
    ]


class FBoneMirrorInfo(Structure):
    _fields_ = [("SourceIndex", c_int), ("BoneFlipAxis", c_ubyte)]


class FSkelMeshActorControlTarget(Structure):
    _fields_ = [("ControlName", FName), ("TargetActor", POINTER(AActor))]


class ASkeletalMeshActor_FCheckpointRecord(Structure):
    _fields_ = [
        ("bReplicated", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bSavedPosition", c_bool, 1),
        ("", c_ulong, 0),
        ("Location", FVector),
        ("Rotation", FRotator),
    ]


class FSkelMaterialSetterDatum(Structure):
    _fields_ = [("MaterialIndex", c_int), ("TheMaterial", POINTER(UMaterialInterface))]


class FSoundClassEditorData(Structure):
    _fields_ = [("NodePosX", int), ("NodePosY", int)]


class FSoundClassProperties(Structure):
    _fields_ = [
        ("Volume", c_float),
        ("Pitch", c_float),
        ("StereoBleed", c_float),
        ("LFEBleed", c_float),
        ("VoiceCenterChannelVolume", c_float),
        ("RadioFilterVolume", c_float),
        ("RadioFilterVolumeThreshold", c_float),
        ("bApplyEffects", c_bool, 1),
        ("bAlwaysPlay", c_bool, 1),
        ("bIsUISound", c_bool, 1),
        ("bIsMusic", c_bool, 1),
        ("bReverb", c_bool, 1),
        ("bCenterChannelOnly", c_bool, 1),
        ("bIsDialog", c_bool, 1),
        ("bIsAmbience", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSoundNodeEditorData(Structure):
    _fields_ = [("NodePosX", int), ("NodePosY", int)]


class FSoundClassAdjuster(Structure):
    _fields_ = [
        ("SoundClassName", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SoundClass", FName),
        ("VolumeAdjuster", c_float),
        ("PitchAdjuster", c_float),
        ("bApplyToChildren", c_bool, 1),
        ("", c_ulong, 0),
        ("VoiceCenterChannelVolumeAdjuster", c_float),
    ]


class FAudioEQEffect(Structure):
    _fields_ = [
        ("RootTime", FDouble),
        ("HFFrequency", c_float),
        ("HFGain", c_float),
        ("MFCutoffFrequency", c_float),
        ("MFBandwidth", c_float),
        ("MFGain", c_float),
        ("LFFrequency", c_float),
        ("LFGain", c_float),
    ]


class FRecognisableWord(Structure):
    _fields_ = [("Id", c_int), ("ReferenceWord", FString), ("PhoneticWord", FString)]


class FRecogVocabulary(Structure):
    _fields_ = [
        ("WhoDictionary", TArray_FRecognisableWord),
        ("WhatDictionary", TArray_FRecognisableWord),
        ("WhereDictionary", TArray_FRecognisableWord),
        ("VocabName", FString),
        ("VocabData", TArray_unsigned_char),
        ("WorkingVocabData", TArray_unsigned_char),
    ]


class FRecogUserData(Structure):
    _fields_ = [("ActiveVocabularies", c_int), ("UserData", TArray_unsigned_char)]


class FSplineConnection(Structure):
    _fields_ = [
        ("SplineComponent", POINTER(USplineComponent)),
        ("ConnectTo", POINTER(ASplineActor)),
    ]


class FSplineMeshParams(Structure):
    _fields_ = [
        ("StartPos", FVector),
        ("StartTangent", FVector),
        ("StartScale", FVector2D),
        ("StartRoll", c_float),
        ("StartOffset", FVector2D),
        ("EndPos", FVector),
        ("EndTangent", FVector),
        ("EndScale", FVector2D),
        ("EndRoll", c_float),
        ("EndOffset", FVector2D),
    ]


class ASpotLightToggleable_FCheckpointRecord(Structure):
    _fields_ = [("bEnabled", c_bool, 1), ("", c_ulong, 0)]


class FSMMaterialSetterDatum(Structure):
    _fields_ = [("MaterialIndex", c_int), ("TheMaterial", POINTER(UMaterialInterface))]


class FVehicleState(Structure):
    _fields_ = [
        ("RBState", FRigidBodyState),
        ("Unknown1", c_ubyte, 0x4),
        ("ServerBrake", c_ubyte),
        ("ServerGas", c_ubyte),
        ("ServerSteering", c_ubyte),
        ("ServerRise", c_ubyte),
        ("bServerHandbrake", c_bool, 1),
        ("", c_ulong, 0),
        ("ServerView", c_int),
    ]


class FSearchState(Structure):
    _fields_ = [
        ("Subject", FScriptInterface),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ListIndex", c_int),
        ("CurrentList", TArray_FScriptInterface),
    ]


class FTerrainHeight(Structure):
    _fields_ = []


class FTerrainInfoData(Structure):
    _fields_ = []


class FTerrainLayer(Structure):
    _fields_ = [
        ("Name", FString),
        ("Setup", POINTER(UTerrainLayerSetup)),
        ("AlphaMapIndex", c_int),
        ("Highlighted", c_bool, 1),
        ("WireframeHighlighted", c_bool, 1),
        ("Hidden", c_bool, 1),
        ("", c_ulong, 0),
        ("HighlightColor", FColor),
        ("WireframeColor", FColor),
    ]


class FTerrainDecorationInstance(Structure):
    _fields_ = [
        ("Component", POINTER(UPrimitiveComponent)),
        ("X", c_float),
        ("Y", c_float),
        ("Scale", c_float),
        ("Yaw", c_int),
    ]


class FTerrainDecoration(Structure):
    _fields_ = [
        ("Factory", POINTER(UPrimitiveComponentFactory)),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("Density", c_float),
        ("SlopeRotationBlend", c_float),
        ("RandSeed", c_int),
        ("Instances", TArray_FTerrainDecorationInstance),
    ]


class FTerrainDecoLayer(Structure):
    _fields_ = [
        ("Name", FString),
        ("Decorations", TArray_FTerrainDecoration),
        ("AlphaMapIndex", c_int),
    ]


class FAlphaMap(Structure):
    _fields_ = []


class ATerrain_FTerrainWeightedMaterial(Structure):
    _fields_ = []


class FSelectedTerrainVertex(Structure):
    _fields_ = [("X", c_int), ("Y", c_int), ("Weight", c_int)]


class FTerrainMaterialResource(Structure):
    _fields_ = []


class FCachedTerrainMaterialArray(Structure):
    _fields_ = [("CachedMaterials", TArray_FPointer)]


class FTerrainBVTree(Structure):
    _fields_ = [("Nodes", TArray_int)]


class FTerrainkDOPTree(Structure):
    _fields_ = [("Nodes", TArray_int), ("Triangles", TArray_int)]


class FFilterLimit(Structure):
    _fields_ = [
        ("Enabled", c_bool, 1),
        ("", c_ulong, 0),
        ("Base", c_float),
        ("NoiseScale", c_float),
        ("NoiseAmount", c_float),
    ]


class FTerrainFilteredMaterial(Structure):
    _fields_ = [
        ("UseNoise", c_bool, 1),
        ("", c_ulong, 0),
        ("NoiseScale", c_float),
        ("NoisePercent", c_float),
        ("MinHeight", FFilterLimit),
        ("MaxHeight", FFilterLimit),
        ("MinSlope", FFilterLimit),
        ("MaxSlope", FFilterLimit),
        ("Alpha", c_float),
        ("Material", POINTER(UTerrainMaterial)),
    ]


class FTerrainFoliageMesh(Structure):
    _fields_ = [
        ("StaticMesh", POINTER(UStaticMesh)),
        ("Material", POINTER(UMaterialInterface)),
        ("Density", c_int),
        ("MaxDrawRadius", c_float),
        ("MinTransitionRadius", c_float),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("MinUniformScale", c_float),
        ("MaxUniformScale", c_float),
        ("MinThinningRadius", c_float),
        ("Seed", c_int),
        ("SwayScale", c_float),
        ("AlphaMapThreshold", c_float),
        ("SlopeRotationBlend", c_float),
    ]


class UTerrainWeightMapTexture_FTerrainWeightedMaterial(Structure):
    _fields_ = []


class FSourceTexture2DRegion(Structure):
    _fields_ = [
        ("OffsetX", c_int),
        ("OffsetY", c_int),
        ("SizeX", c_int),
        ("SizeY", c_int),
        ("Texture2D", POINTER(UTexture2D)),
    ]


class ATrigger_FCheckpointRecord(Structure):
    _fields_ = [("bCollideActors", c_bool, 1), ("", c_ulong, 0)]


class FLevelStreamingData(Structure):
    _fields_ = [
        ("bShouldBeLoaded", c_bool, 1),
        ("bShouldBeVisible", c_bool, 1),
        ("bShouldBlockOnLoad", c_bool, 1),
        ("", c_ulong, 0),
        ("Level", POINTER(ULevelStreaming)),
    ]


class FPlayerStorageArrayProvider(Structure):
    _fields_ = [
        ("PlayerStorageId", c_int),
        ("PlayerStorageName", FName),
        ("Provider", POINTER(UUIDataProvider_OnlinePlayerStorageArray)),
    ]


class FSettingsArrayProvider(Structure):
    _fields_ = [
        ("SettingsId", c_int),
        ("SettingsName", FName),
        ("Provider", POINTER(UUIDataProvider_SettingsArray)),
    ]


class FDynamicResourceProviderDefinition(Structure):
    _fields_ = [
        ("ProviderTag", FName),
        ("ProviderClassName", FString),
        ("ProviderClass", POINTER(UClass)),
    ]


class FGameResourceDataProvider(Structure):
    _fields_ = [
        ("ProviderTag", FName),
        ("ProviderClassName", FString),
        ("bExpandProviders", c_bool, 1),
        ("", c_ulong, 0),
        ("ProviderClass", POINTER(UClass)),
    ]


class FUIInputKeyData(Structure):
    _fields_ = [
        ("InputKeyData", FRawInputKeyEventData),
        ("ButtonFontMarkupString", FString),
    ]


class FUIDataStoreInputAlias(Structure):
    _fields_ = [("AliasName", FName), ("PlatformInputKeys", FUIInputKeyData * 3)]


class FGameSearchCfg(Structure):
    _fields_ = [
        ("GameSearchClass", POINTER(UClass)),
        ("DefaultGameSettingsClass", POINTER(UClass)),
        ("SearchResultsProviderClass", POINTER(UClass)),
        ("DesiredSettingsProvider", POINTER(UUIDataProvider_Settings)),
        ("SearchResults", TArray_UUIDataProvider_SettingsPtr),
        ("Search", POINTER(UOnlineGameSearch)),
        ("SearchName", FName),
    ]


class FGameSettingsCfg(Structure):
    _fields_ = [
        ("GameSettingsClass", POINTER(UClass)),
        ("Provider", POINTER(UUIDataProvider_Settings)),
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("SettingsName", FName),
    ]


class FRankMetaData(Structure):
    _fields_ = [("RankName", FName), ("RankColumnName", FString)]


class FPlayerNickMetaData(Structure):
    _fields_ = [("PlayerNickName", FName), ("PlayerNickColumnName", FString)]


class FUIMenuInputMap(Structure):
    _fields_ = [("FieldName", FName), ("Set", FName), ("MappedText", FString)]


class FUIKeyRepeatData(Structure):
    _fields_ = [("CurrentRepeatKey", FName), ("NextRepeatTime", FDouble)]


class FUIAxisEmulationData(Structure):
    _fields_ = [
        ("CurrentRepeatKey", FName),
        ("NextRepeatTime", FDouble),
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSoundEventMapping(Structure):
    _fields_ = [("SoundEventName", FName), ("SoundToPlay", POINTER(USoundCue))]


class FUIStatData(Structure):
    _fields_ = [
        ("bDisplayAsModifierOnly", c_bool, 1),
        ("", c_ulong, 0),
        ("AttributeStyle", c_ubyte),
        ("SupplementalAttributeStyle", c_ubyte),
        ("StatCombinationMethod", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("Attribute", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("SupplementalAttributeExpression", FAttributeExpressionData),
        ("SupplementalAttributeToAppend", POINTER(UAttributeDefinition)),
    ]


class FAttributeSlotEffectData(Structure):
    _fields_ = [
        ("SlotName", FName),
        ("bExternalSlot", c_bool, 1),
        ("bRunEffectsAsSkill", c_bool, 1),
        ("", c_ulong, 0),
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("bIncludeInFunStats", c_bool, 1),
        ("bIncludeAlliesAsTarget", c_bool, 1),
        ("bEnforceMinimumGrade", c_bool, 1),
        ("bEnforceMaximumGrade", c_bool, 1),
        ("", c_ulong, 0),
        ("MinimumGrade", int),
        ("MaximumGrade", int),
        ("TargetInstanceDataName", FName),
    ]


class FAttributeSlotUpgradeData(Structure):
    _fields_ = [
        ("SlotName", FName),
        ("GradeIncrease", int),
        ("bActivateSlot", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FInventorySerialNumber(Structure):
    _fields_ = [
        ("Buffer", c_ubyte * 40),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("RunningCounter", c_int),
        ("EncryptedLength", c_int),
    ]


class FAttributeSlotData(Structure):
    _fields_ = [
        ("SlotName", FName),
        ("bExternalSlot", c_bool, 1),
        ("bRunEffectsAsSkill", c_bool, 1),
        ("bActivated", c_bool, 1),
        ("bIncludeAlliesAsTarget", c_bool, 1),
        ("bIncludeInModifierText", c_bool, 1),
        ("bEnforceMinimumGrade", c_bool, 1),
        ("bEnforceMaximumGrade", c_bool, 1),
        ("", c_ulong, 0),
        ("MinimumGrade", int),
        ("MaximumGrade", int),
        ("TargetInstanceDataName", FName),
        ("EffectGrade", int),
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("ComputedModifierValue", c_float),
    ]


class FWorldEventSource(Structure):
    _fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("GroupActor", POINTER(AActor)),
        ("AkComponents", TArray_UAkComponentPtr),
        ("Sources", TArray_AActorPtr),
        ("LastUpdateTime", c_float),
        ("bNeedsUpdate", c_bool, 1),
        ("", c_ulong, 0),
    ]
