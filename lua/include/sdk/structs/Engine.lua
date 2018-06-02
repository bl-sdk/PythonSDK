// 0x10 (Alignment = 1)
struct FStaticMeshLODElement {
	struct UMaterialInterface* Material; // 0x0 (0x4)
	BOOL bEnableShadowCasting : 1; // 0x4 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown1[0x4]; // 0x8 (0x4) > LAST OFFSET
	BOOL bEnableCollision : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0xC (Alignment = 1)
struct FStaticMeshLODInfo {
	struct TArray_FStaticMeshLODElement Elements; // 0x0 (0xC)
};

// 0xC 
struct FAnimSlotDesc {
	struct FName SlotName; // 0x0 (0x8)
	int NumChannels; // 0x8 (0x4)
};

// 0x39 (Alignment = 16)
struct FRigidBodyState {
	struct FVector Position; // 0x0 (0xC)
	const unsigned char Unknown1[0x4]; // 0xC (0x4) > LAST OFFSET
	struct FQuat Quaternion; // 0x10 (0x10)
	struct FVector LinVel; // 0x20 (0xC)
	struct FVector AngVel; // 0x2C (0xC)
	unsigned char bNewData; // 0x38 (0x1)
};

// 0x3C 
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x0 (0xC)
	struct FVector ContactNormal; // 0xC (0xC)
	float ContactPenetration; // 0x18 (0x4)
	struct FVector ContactVelocity[2]; // 0x1C (0x18)
	struct UPhysicalMaterial* PhysMaterial[2]; // 0x34 (0x8)
};

// 0x24 
struct FCollisionImpactData {
	struct TArray_FRigidBodyContactInfo ContactInfos; // 0x0 (0xC)
	struct FVector TotalNormalForceVector; // 0xC (0xC)
	struct FVector TotalFrictionForceVector; // 0x18 (0xC)
};

// 0x14 
struct FPhysEffectInfo {
	float Threshold; // 0x0 (0x4)
	float ReFireDelay; // 0x4 (0x4)
	struct UParticleSystem* Effect; // 0x8 (0x4)
	struct USoundCue* Sound; // 0xC (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x10 (0x4)
};

// 0x14 
struct FActorReference {
	struct AActor* Actor; // 0x0 (0x4)
	const struct FGuid Guid; // 0x4 (0x10)
};

// 0x14 
struct FNavReference {
	struct ANavigationPoint* Nav; // 0x0 (0x4)
	const struct FGuid Guid; // 0x4 (0x10)
};

// 0x34 
struct FBasedPosition {
	struct AActor* Base; // 0x0 (0x4)
	struct FVector Position; // 0x4 (0xC)
	struct FVector CachedBaseLocation; // 0x10 (0xC)
	struct FRotator CachedBaseRotation; // 0x1C (0xC)
	struct FVector CachedTransPosition; // 0x28 (0xC)
};

// 0xC 
struct FResourcePoolReference {
	struct AResourcePoolManager* PoolManager; // 0x0 (0x4)
	unsigned char PoolIndexInManager; // 0x4 (0x1)
	unsigned char PoolGUID; // 0x5 (0x1)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	struct UResourcePool* Data; // 0x8 (0x4)
};

// 0x1C 
struct FTraceHitInfo {
	struct UMaterial* Material; // 0x0 (0x4)
	struct UPhysicalMaterial* PhysMaterial; // 0x4 (0x4)
	int Item; // 0x8 (0x4)
	int LevelIndex; // 0xC (0x4)
	struct FName BoneName; // 0x10 (0x8)
	struct UPrimitiveComponent* HitComponent; // 0x18 (0x4)
};

// 0x5C 
struct FImpactInfo {
	struct AActor* HitActor; // 0x0 (0x4)
	struct FVector HitLocation; // 0x4 (0xC)
	struct FVector HitNormal; // 0x10 (0xC)
	struct FVector RayDir; // 0x1C (0xC)
	struct FVector StartTrace; // 0x28 (0xC)
	struct FTraceHitInfo HitInfo; // 0x34 (0x1C)
	struct FVector EndTrace; // 0x50 (0xC)
};

// 0x8 
struct FAkPlayingInfo {
	struct UAkComponent* SourceComponent; // 0x0 (0x4)
	int AkPlayingId; // 0x4 (0x4)
};

// 0x1C 
struct FSeqOpInputLink {
	struct FString LinkDesc; // 0x0 (0xC)
	int QueuedActivations; // 0xC (0x4)
	struct USequenceOp* LinkedOp; // 0x10 (0x4)
	BOOL bHidden : 1; // 0x14 (0x4)
	BOOL bMoving : 1; // 0x14 (0x4)
	BOOL bClampedMax : 1; // 0x14 (0x4)
	BOOL bClampedMin : 1; // 0x14 (0x4)
	BOOL bDisabled : 1; // 0x14 (0x4)
	BOOL bDisabledPIE : 1; // 0x14 (0x4)
	BOOL bHasImpulse : 1; // 0x14 (0x4)
	const unsigned long: 0;
	float ActivateDelay; // 0x18 (0x4)
};

// 0x14 
struct FAnimSlotInfo {
	struct FName SlotName; // 0x0 (0x8)
	struct TArray_float ChannelWeights; // 0x8 (0xC)
};

// 0x50 
struct FTraceNotifyInfo {
	struct AActor* ActorToNotify; // 0x0 (0x4)
	struct AActor* ActorCallingTrace; // 0x4 (0x4)
	struct UComponent* ComponentHit; // 0x8 (0x4)
	float HitTime; // 0xC (0x4)
	struct FVector HitLocation; // 0x10 (0xC)
	struct FVector HitNormal; // 0x1C (0xC)
	struct FVector End; // 0x28 (0xC)
	struct FVector Start; // 0x34 (0xC)
	struct FVector Extent; // 0x40 (0xC)
	int TraceFlags; // 0x4C (0x4)
};

// 0x1C 
struct FTimerData {
	BOOL bLoop : 1; // 0x0 (0x4)
	BOOL bPaused : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FName FuncName; // 0x4 (0x8)
	float Rate; // 0xC (0x4)
	float Count; // 0x10 (0x4)
	float TimerTimeDilation; // 0x14 (0x4)
	struct UObject* TimerObj; // 0x18 (0x4)
};

// 0x18 
struct FKeyValuePair {
	struct FString Key; // 0x0 (0xC)
	struct FString Value; // 0xC (0xC)
};

// 0x2C 
struct FPlayerResponseLine {
	int PlayerNum; // 0x0 (0x4)
	int PlayerID; // 0x4 (0x4)
	struct FString PlayerName; // 0x8 (0xC)
	int Ping; // 0x14 (0x4)
	int Score; // 0x18 (0x4)
	int StatsID; // 0x1C (0x4)
	struct TArray_FKeyValuePair PlayerInfo; // 0x20 (0xC)
};

// 0x60 
struct FServerResponseLine {
	int ServerID; // 0x0 (0x4)
	struct FString IP; // 0x4 (0xC)
	int Port; // 0x10 (0x4)
	int QueryPort; // 0x14 (0x4)
	struct FString ServerName; // 0x18 (0xC)
	struct FString MapName; // 0x24 (0xC)
	struct FString GameType; // 0x30 (0xC)
	int CurrentPlayers; // 0x3C (0x4)
	int MaxPlayers; // 0x40 (0x4)
	int Ping; // 0x44 (0x4)
	struct TArray_FKeyValuePair ServerInfo; // 0x48 (0xC)
	struct TArray_FPlayerResponseLine PlayerInfo; // 0x54 (0xC)
};

// 0x9 
struct FLocalizedStringSetting {
	int Id; // 0x0 (0x4)
	int ValueIndex; // 0x4 (0x4)
	unsigned char AdvertisementType; // 0x8 (0x1) (Enum = EOnlineDataAdvertisementType)
};

// 0xC 
struct FSettingsData {
	const unsigned char Type; // 0x0 (0x1) (Enum = ESettingsDataType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const int Value1; // 0x4 (0x4)
	const struct FPointer Value2; // 0x8 (0x4)
};

// 0x11 
struct FSettingsProperty {
	int PropertyId; // 0x0 (0x4)
	struct FSettingsData Data; // 0x4 (0xC)
	unsigned char AdvertisementType; // 0x10 (0x1) (Enum = EOnlineDataAdvertisementType)
};

// 0x10 
struct FIdToStringMapping {
	const int Id; // 0x0 (0x4)
	const struct FString Name; // 0x4 (0xC)
};

// 0x10 
struct FStringIdToStringMapping {
	const int Id; // 0x0 (0x4)
	const struct FName Name; // 0x4 (0x8)
	const BOOL bIsWildcard : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FLocalizedStringSettingMetaData {
	const int Id; // 0x0 (0x4)
	const struct FName Name; // 0x4 (0x8)
	const struct FString ColumnHeaderText; // 0xC (0xC)
	const struct TArray_FStringIdToStringMapping ValueMappings; // 0x18 (0xC)
};

// 0x40 
struct FSettingsPropertyPropertyMetaData {
	const int Id; // 0x0 (0x4)
	const struct FName Name; // 0x4 (0x8)
	const struct FString ColumnHeaderText; // 0xC (0xC)
	const unsigned char MappingType; // 0x18 (0x1) (Enum = EPropertyValueMappingType)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	const struct TArray_FIdToStringMapping ValueMappings; // 0x1C (0xC)
	const struct TArray_FSettingsData PredefinedValues; // 0x28 (0xC)
	const float MinVal; // 0x34 (0x4)
	const float MaxVal; // 0x38 (0x4)
	const float RangeIncrement; // 0x3C (0x4)
};

// 0x18 
struct FUniqueNetId {
	struct FQWord Uid; // 0x0 (0x8)
	unsigned char NpId[16]; // 0x8 (0x10)
};

// 0x18 
struct FOnlineRegistrant {
	const struct FUniqueNetId PlayerNetId; // 0x0 (0x18)
};

// 0x24 
struct FOnlineArbitrationRegistrant {
	const struct FUniqueNetId PlayerNetId; // 0x0 (0x18)
	const struct FQWord MachineId; // 0x18 (0x8)
	const int Trustworthiness; // 0x20 (0x4)
};

// 0x28 
struct FNamedSession {
	struct FName SessionName; // 0x0 (0x8)
	const struct FPointer SessionInfo; // 0x8 (0x4)
	struct UOnlineGameSettings* GameSettings; // 0xC (0x4)
	struct TArray_FOnlineRegistrant Registrants; // 0x10 (0xC)
	struct TArray_FOnlineArbitrationRegistrant ArbitrationRegistrants; // 0x1C (0xC)
};

// 0xC 
struct FNamedInterface {
	struct FName InterfaceName; // 0x0 (0x8)
	struct UObject* InterfaceObject; // 0x8 (0x4)
};

// 0x48 
struct FOnlinePartyMember {
	const struct FUniqueNetId UniqueId; // 0x0 (0x18)
	const struct FString NickName; // 0x18 (0xC)
	const unsigned char LocalUserNum; // 0x24 (0x1)
	const unsigned char NatType; // 0x25 (0x1) (Enum = ENATType)
	const unsigned char Unknown1[0x2]; // 0x26 (0x2) > LAST OFFSET
	const int TitleId; // 0x28 (0x4)
	const BOOL bIsLocal : 1; // 0x2C (0x4)
	const BOOL bIsInPartyVoice : 1; // 0x2C (0x4)
	const BOOL bIsTalking : 1; // 0x2C (0x4)
	const BOOL bIsInGameSession : 1; // 0x2C (0x4)
	const BOOL bIsPlayingThisGame : 1; // 0x2C (0x4)
	const unsigned long: 0;
	const struct FQWord SessionId; // 0x30 (0x8)
	const int Data1; // 0x38 (0x4)
	const int Data2; // 0x3C (0x4)
	const int Data3; // 0x40 (0x4)
	const int Data4; // 0x44 (0x4)
};

// 0x38 
struct FAchievementDetails {
	const int Id; // 0x0 (0x4)
	const struct FString AchievementName; // 0x4 (0xC)
	const struct FString Description; // 0x10 (0xC)
	const struct FString HowTo; // 0x1C (0xC)
	struct USurface* Image; // 0x28 (0x4)
	const unsigned char MonthEarned; // 0x2C (0x1)
	const unsigned char DayEarned; // 0x2D (0x1)
	const unsigned char YearEarned; // 0x2E (0x1)
	const unsigned char DayOfWeekEarned; // 0x2F (0x1)
	const int GamerPoints; // 0x30 (0x4)
	const BOOL bIsSecret : 1; // 0x34 (0x4)
	const BOOL bWasAchievedOnline : 1; // 0x34 (0x4)
	const BOOL bWasAchievedOffline : 1; // 0x34 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FCommunityContentMetadata {
	int ContentType; // 0x0 (0x4)
	struct TArray_FSettingsProperty MetadataItems; // 0x4 (0xC)
};

// 0x44 
struct FCommunityContentFile {
	int ContentId; // 0x0 (0x4)
	int FileId; // 0x4 (0x4)
	int ContentType; // 0x8 (0x4)
	int FileSize; // 0xC (0x4)
	struct FUniqueNetId Owner; // 0x10 (0x18)
	int DownloadCount; // 0x28 (0x4)
	float AverageRating; // 0x2C (0x4)
	int RatingCount; // 0x30 (0x4)
	int LastRatingGiven; // 0x34 (0x4)
	struct FString LocalFilePath; // 0x38 (0xC)
};

// 0x1C 
struct FTitleFile {
	struct FString Filename; // 0x0 (0xC)
	unsigned char AsyncState; // 0xC (0x1) (Enum = EOnlineEnumerationReadState)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct TArray_unsigned_char Data; // 0x10 (0xC)
};

// 0x14 
struct FNamedInterfaceDef {
	struct FName InterfaceName; // 0x0 (0x8)
	struct FString InterfaceClassName; // 0x8 (0xC)
};

// 0x34 
struct FOnlineFriendMessage {
	struct FUniqueNetId SendingPlayerId; // 0x0 (0x18)
	struct FString SendingPlayerNick; // 0x18 (0xC)
	BOOL bIsFriendInvite : 1; // 0x24 (0x4)
	BOOL bIsGameInvite : 1; // 0x24 (0x4)
	BOOL bWasAccepted : 1; // 0x24 (0x4)
	BOOL bWasDenied : 1; // 0x24 (0x4)
	const unsigned long: 0;
	struct FString Message; // 0x28 (0xC)
};

// 0x20 
struct FRemoteTalker {
	struct FUniqueNetId TalkerId; // 0x0 (0x18)
	float LastNotificationTime; // 0x18 (0x4)
	BOOL bWasTalking : 1; // 0x1C (0x4)
	BOOL bIsTalking : 1; // 0x1C (0x4)
	BOOL bIsRegistered : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FLocalTalker {
	BOOL bHasVoice : 1; // 0x0 (0x4)
	BOOL bHasNetworkedVoice : 1; // 0x0 (0x4)
	BOOL bIsRecognizingSpeech : 1; // 0x0 (0x4)
	BOOL bWasTalking : 1; // 0x0 (0x4)
	BOOL bIsTalking : 1; // 0x0 (0x4)
	BOOL bIsRegistered : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FOnlinePlayerScore {
	struct FUniqueNetId PlayerID; // 0x0 (0x18)
	int TeamID; // 0x18 (0x4)
	int Score; // 0x1C (0x4)
};

// 0x14 
struct FSpeechRecognizedWord {
	int WordId; // 0x0 (0x4)
	struct FString WordText; // 0x4 (0xC)
	float Confidence; // 0x10 (0x4)
};

// 0x80 
struct FMarketplaceContent {
	int UserIndex; // 0x0 (0x4)
	int OfferId; // 0x4 (0x4)
	int PreviewOfferId; // 0x8 (0x4)
	struct FString OfferName; // 0xC (0xC)
	int OfferType; // 0x18 (0x4)
	struct TArray_unsigned_char ContentId; // 0x1C (0xC)
	BOOL bIsUnrestrictedLicense : 1; // 0x28 (0x4)
	const unsigned long: 0;
	int LicenseMask; // 0x2C (0x4)
	int TitleId; // 0x30 (0x4)
	int ContentCategory; // 0x34 (0x4)
	struct FString TitleName; // 0x38 (0xC)
	BOOL bUserHasPurchased : 1; // 0x44 (0x4)
	const unsigned long: 0;
	int PackageSize; // 0x48 (0x4)
	int InstallSize; // 0x4C (0x4)
	struct FString SellText; // 0x50 (0xC)
	int AssetId; // 0x5C (0x4)
	int PurchaseQuantity; // 0x60 (0x4)
	int PointsPrice; // 0x64 (0x4)
	struct FString PriceText; // 0x68 (0xC)
	struct FString OfferIdText; // 0x74 (0xC)
};

// 0x8 
struct FAppIdLicenseInfo {
	int AppID; // 0x0 (0x4)
	int LicenseMask; // 0x4 (0x4)
};

// 0x24 
struct FTOCInfo {
	struct FString TOC; // 0x0 (0xC)
	struct FString RootPath; // 0xC (0xC)
	struct FString Path; // 0x18 (0xC)
};

// 0x7C 
struct FOnlineContent {
	unsigned char ContentType; // 0x0 (0x1) (Enum = EOnlineContentType)
	unsigned char UserIndex; // 0x1 (0x1)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	BOOL bIsCorrupt : 1; // 0x4 (0x4)
	const unsigned long: 0;
	int DeviceID; // 0x8 (0x4)
	int LicenseMask; // 0xC (0x4)
	struct FString FriendlyName; // 0x10 (0xC)
	struct FString Filename; // 0x1C (0xC)
	struct FString ContentPath; // 0x28 (0xC)
	struct TArray_FString ContentPackages; // 0x34 (0xC)
	struct TArray_FString ContentFiles; // 0x40 (0xC)
	struct TArray_FAppIdLicenseInfo CachedAppIdInfo; // 0x4C (0xC)
	struct FTOCInfo TOCInfo; // 0x58 (0x24)
};

// 0x20 
struct FOnlineContentNameInfo {
	struct FString ContentName; // 0x0 (0xC)
	int EngineVersion; // 0xC (0x4)
	struct FGuid CookedVersionID; // 0x10 (0x10)
};

// 0x9D 
struct FNamedOnlineContent {
	unsigned char ContentType; // 0x0 (0x1) (Enum = EOnlineContentType)
	unsigned char UserIndex; // 0x1 (0x1)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	BOOL bIsCorrupt : 1; // 0x4 (0x4)
	const unsigned long: 0;
	int DeviceID; // 0x8 (0x4)
	int LicenseMask; // 0xC (0x4)
	struct FString FriendlyName; // 0x10 (0xC)
	struct FString Filename; // 0x1C (0xC)
	struct FString ContentPath; // 0x28 (0xC)
	struct TArray_FString ContentPackages; // 0x34 (0xC)
	struct TArray_FString ContentFiles; // 0x40 (0xC)
	struct TArray_FAppIdLicenseInfo CachedAppIdInfo; // 0x4C (0xC)
	struct FTOCInfo TOCInfo; // 0x58 (0x24)
	struct FOnlineContentNameInfo NameInfo; // 0x7C (0x20)
	unsigned char NamedContentType; // 0x9C (0x1) (Enum = ENamedOnlineContentType)
};

// 0xB0 
struct FCompatibilityOnlineContent {
	int VersionNumber; // 0x0 (0x4)
	struct FNamedOnlineContent Container; // 0x4 (0xA0)
	struct TArray_FNamedOnlineContent Content; // 0xA4 (0xC)
};

// 0x4C 
struct FOnlineFriend {
	const struct FUniqueNetId UniqueId; // 0x0 (0x18)
	const struct FQWord SessionId; // 0x18 (0x8)
	const struct FString SessionInfo; // 0x20 (0xC)
	const struct FString NickName; // 0x2C (0xC)
	const struct FString PresenceInfo; // 0x38 (0xC)
	const unsigned char FriendState; // 0x44 (0x1) (Enum = EOnlineFriendState)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	const BOOL bIsOnline : 1; // 0x48 (0x4)
	const BOOL bIsPlaying : 1; // 0x48 (0x4)
	const BOOL bIsPlayingThisGame : 1; // 0x48 (0x4)
	const BOOL bIsJoinable : 1; // 0x48 (0x4)
	const BOOL bHasVoiceSupport : 1; // 0x48 (0x4)
	BOOL bHaveInvited : 1; // 0x48 (0x4)
	const BOOL bHasInvitedYou : 1; // 0x48 (0x4)
	const BOOL bHaveRequested : 1; // 0x48 (0x4)
	const BOOL bHasRequestedYou : 1; // 0x48 (0x4)
	const unsigned long: 0;
};

// 0x80 
struct FOnlineCrossTitleContent {
	unsigned char ContentType; // 0x0 (0x1) (Enum = EOnlineContentType)
	unsigned char UserIndex; // 0x1 (0x1)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	BOOL bIsCorrupt : 1; // 0x4 (0x4)
	const unsigned long: 0;
	int DeviceID; // 0x8 (0x4)
	int LicenseMask; // 0xC (0x4)
	struct FString FriendlyName; // 0x10 (0xC)
	struct FString Filename; // 0x1C (0xC)
	struct FString ContentPath; // 0x28 (0xC)
	struct TArray_FString ContentPackages; // 0x34 (0xC)
	struct TArray_FString ContentFiles; // 0x40 (0xC)
	struct TArray_FAppIdLicenseInfo CachedAppIdInfo; // 0x4C (0xC)
	struct FTOCInfo TOCInfo; // 0x58 (0x24)
	int TitleId; // 0x7C (0x4)
};

// 0x1C 
struct FFriendsQuery {
	struct FUniqueNetId UniqueId; // 0x0 (0x18)
	BOOL bIsFriend : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FBaseAuthSession {
	const int EndPointIP; // 0x0 (0x4)
	const int EndPointPort; // 0x4 (0x4)
	const struct FUniqueNetId EndPointUID; // 0x8 (0x18)
};

// 0x24 
struct FLocalAuthSession {
	const int EndPointIP; // 0x0 (0x4)
	const int EndPointPort; // 0x4 (0x4)
	const struct FUniqueNetId EndPointUID; // 0x8 (0x18)
	const int SessionUID; // 0x20 (0x4)
};

// 0x28 
struct FAuthSession {
	const int EndPointIP; // 0x0 (0x4)
	const int EndPointPort; // 0x4 (0x4)
	const struct FUniqueNetId EndPointUID; // 0x8 (0x18)
	const unsigned char AuthStatus; // 0x20 (0x1) (Enum = EAuthStatus)
	const unsigned char Unknown1[0x3]; // 0x21 (0x3) > LAST OFFSET
	const int AuthBlobUID; // 0x24 (0x4)
};

// 0x24 
struct FPendingClientAuth {
	struct UPlayer* ClientConnection; // 0x0 (0x4)
	struct FUniqueNetId ClientUID; // 0x4 (0x18)
	float AuthTimestamp; // 0x1C (0x4)
	int AuthRetryCount; // 0x20 (0x4)
};

// 0x1C 
struct FServerAuthRetry {
	struct FUniqueNetId ClientUID; // 0x0 (0x18)
	int AuthRetryCount; // 0x18 (0x4)
};

// 0x4 
struct FRBCollisionChannelContainer {
	const BOOL Default : 1; // 0x0 (0x4)
	const BOOL Nothing : 1; // 0x0 (0x4)
	const BOOL Pawn : 1; // 0x0 (0x4)
	const BOOL Vehicle : 1; // 0x0 (0x4)
	const BOOL Water : 1; // 0x0 (0x4)
	const BOOL GameplayPhysics : 1; // 0x0 (0x4)
	const BOOL EffectPhysics : 1; // 0x0 (0x4)
	const BOOL Untitled1 : 1; // 0x0 (0x4)
	const BOOL Untitled2 : 1; // 0x0 (0x4)
	const BOOL TossedItems : 1; // 0x0 (0x4)
	const BOOL TossedItemsPlayerVehicle : 1; // 0x0 (0x4)
	const BOOL Cloth : 1; // 0x0 (0x4)
	const BOOL FluidDrain : 1; // 0x0 (0x4)
	const BOOL SoftBody : 1; // 0x0 (0x4)
	const BOOL FracturedMeshPart : 1; // 0x0 (0x4)
	const BOOL BlockingVolume : 1; // 0x0 (0x4)
	const BOOL DeadPawn : 1; // 0x0 (0x4)
	const BOOL Clothing : 1; // 0x0 (0x4)
	const BOOL ClothingCollision : 1; // 0x0 (0x4)
	const BOOL TossedItemsEnemyVehicle : 1; // 0x0 (0x4)
	const BOOL PlayerVehicle : 1; // 0x0 (0x4)
	const BOOL EnemyVehicle : 1; // 0x0 (0x4)
	const BOOL PlayerVehicleEnemyVehicle : 1; // 0x0 (0x4)
	const BOOL TossedItemsPlayerVehicleEnemyVehicle : 1; // 0x0 (0x4)
	const BOOL WillowPickup : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FLightingChannelContainer {
	BOOL bInitialized : 1; // 0x0 (0x4)
	BOOL BSP : 1; // 0x0 (0x4)
	BOOL Static : 1; // 0x0 (0x4)
	BOOL Dynamic : 1; // 0x0 (0x4)
	BOOL CompositeDynamic : 1; // 0x0 (0x4)
	BOOL Skybox : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Unnamed : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Cinematic : 1; // 0x0 (0x4)
	BOOL Gameplay : 1; // 0x0 (0x4)
	BOOL Gameplay : 1; // 0x0 (0x4)
	BOOL Gameplay : 1; // 0x0 (0x4)
	BOOL Gameplay : 1; // 0x0 (0x4)
	BOOL Crowd : 1; // 0x0 (0x4)
	BOOL PhysX : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FMaterialViewRelevance {
	BOOL bOpaque : 1; // 0x0 (0x4)
	BOOL bTranslucent : 1; // 0x0 (0x4)
	BOOL bDistortion : 1; // 0x0 (0x4)
	BOOL bOneLayerDistortionRelevance : 1; // 0x0 (0x4)
	BOOL bLit : 1; // 0x0 (0x4)
	BOOL bUsesSceneColor : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FReplicatedInstanceDataState {
	int SwitchStateBitField; // 0x0 (0x4)
	int ActiveSwitchValues; // 0x4 (0x4)
	int RemovedBodyCompositionPartsBitField; // 0x8 (0x4)
	BOOL bNeedToApplyThisState : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FComponentData {
	struct UActorComponent* Component; // 0x0 (0x4)
	unsigned char CollisionType; // 0x4 (0x1) (Enum = ECollisionType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	BOOL bAttachToMesh : 1; // 0x8 (0x4)
	BOOL bIsUsable : 1; // 0x8 (0x4)
	BOOL bIsSecondaryUsable : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct FName MeshSocketName; // 0xC (0x8)
	struct UBaseHitRegionDefinition* HitRegionDefinition; // 0x14 (0x4)
	struct UEngineInteractionIconDefinition* InteractIcon; // 0x18 (0x4)
	struct UEngineInteractionIconDefinition* SecondaryInteractIcon; // 0x1C (0x4)
};

// 0x58 
struct FInstanceDataUnion {
	struct FName Name; // 0x0 (0x8)
	unsigned char Type; // 0x8 (0x1) (Enum = EInstanceDataType)
	unsigned char Replication; // 0x9 (0x1) (Enum = EReplicationType)
	unsigned char MaxSwitchValue; // 0xA (0x1)
	unsigned char BitsRequiredForMaxSwitchValue; // 0xB (0x1)
	BOOL Bool : 1; // 0xC (0x4)
	BOOL DeleteByOwner : 1; // 0xC (0x4)
	const unsigned long: 0;
	int Int; // 0x10 (0x4)
	float Float; // 0x14 (0x4)
	struct FVector Vector; // 0x18 (0xC)
	struct UObject* Object; // 0x24 (0x4)
	struct FComponentData ComponentData; // 0x28 (0x20)
	struct FString String; // 0x48 (0xC)
	int BodyCompositionIndex; // 0x54 (0x4)
};

// 0xC 
struct FInstanceDataSet {
	struct TArray_FInstanceDataUnion Data; // 0x0 (0xC)
};

// 0x8 
struct FVisiblePortalInfo {
	struct AActor* Source; // 0x0 (0x4)
	struct AActor* Destination; // 0x4 (0x4)
};

// 0x12 
struct FOnlineGameSearchParameter {
	int EntryId; // 0x0 (0x4)
	int CompareValueId; // 0x4 (0x4)
	struct FName ObjectPropertyName; // 0x8 (0x8)
	unsigned char EntryType; // 0x10 (0x1) (Enum = EOnlineGameSearchEntryType)
	unsigned char ComparisonType; // 0x11 (0x1) (Enum = EOnlineGameSearchComparisonType)
};

// 0xC 
struct FOnlineGameSearchORClause {
	struct TArray_FOnlineGameSearchParameter OrParams; // 0x0 (0xC)
};

// 0xE 
struct FOnlineGameSearchSortClause {
	int EntryId; // 0x0 (0x4)
	struct FName ObjectPropertyName; // 0x4 (0x8)
	unsigned char EntryType; // 0xC (0x1) (Enum = EOnlineGameSearchEntryType)
	unsigned char SortType; // 0xD (0x1) (Enum = EOnlineGameSearchSortType)
};

// 0x18 
struct FOnlineGameSearchQuery {
	struct TArray_FOnlineGameSearchORClause OrClauses; // 0x0 (0xC)
	struct TArray_FOnlineGameSearchSortClause SortClauses; // 0xC (0xC)
};

// 0x28 
struct FOverrideSkill {
	int LeaderboardId; // 0x0 (0x4)
	struct TArray_FUniqueNetId Players; // 0x4 (0xC)
	struct TArray_FDouble Mus; // 0x10 (0xC)
	struct TArray_FDouble Sigmas; // 0x1C (0xC)
};

// 0x14 
struct FNamedObjectProperty {
	struct FName ObjectPropertyName; // 0x0 (0x8)
	struct FString ObjectPropertyValue; // 0x8 (0xC)
};

// 0x8 
struct FOnlineGameSearchResult {
	const struct UOnlineGameSettings* GameSettings; // 0x0 (0x4)
	const struct FPointer PlatformData; // 0x4 (0x4)
};

// 0x2C 
struct FTViewTarget {
	struct AActor* Target; // 0x0 (0x4)
	struct AController* Controller; // 0x4 (0x4)
	struct FTPOV POV; // 0x8 (0x1C)
	float AspectRatio; // 0x24 (0x4)
	struct APlayerReplicationInfo* PRI; // 0x28 (0x4)
};

// 0x20 
struct FTCameraCache {
	float TimeStamp; // 0x0 (0x4)
	struct FTPOV POV; // 0x4 (0x1C)
};

// 0x10 
struct FViewTargetTransitionParams {
	float BlendTime; // 0x0 (0x4)
	unsigned char BlendFunction; // 0x4 (0x1) (Enum = EViewTargetBlendFunction)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	float BlendExp; // 0x8 (0x4)
	BOOL bLockOutgoing : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FLUTBlender {
	struct TArray_UTexturePtr LUTTextures; // 0x0 (0xC)
	struct TArray_float LUTWeights; // 0xC (0xC)
	const BOOL bHasChanged : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0xE8 
struct FPostProcessSettings {
	BOOL bOverride_EnableBloom : 1; // 0x0 (0x4)
	BOOL bOverride_EnableDOF : 1; // 0x0 (0x4)
	BOOL bOverride_EnableMotionBlur : 1; // 0x0 (0x4)
	BOOL bOverride_EnableSceneEffect : 1; // 0x0 (0x4)
	BOOL bOverride_AllowAmbientOcclusion : 1; // 0x0 (0x4)
	BOOL bOverride_OverrideRimShaderColor : 1; // 0x0 (0x4)
	BOOL bOverride_Bloom_Scale : 1; // 0x0 (0x4)
	BOOL bOverride_Bloom_Threshold : 1; // 0x0 (0x4)
	BOOL bOverride_Bloom_Tint : 1; // 0x0 (0x4)
	BOOL bOverride_Bloom_ScreenBlendThreshold : 1; // 0x0 (0x4)
	BOOL bOverride_Bloom_InterpolationDuration : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_FalloffExponent : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_BlurKernelSize : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_BlurBloomKernelSize : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_MaxNearBlurAmount : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_MinBlurAmount : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_MaxFarBlurAmount : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_FocusType : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_FocusInnerRadius : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_FocusDistance : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_FocusPosition : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_TunnelVisionScale : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_TunnelVisionYOffset : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_InterpolationDuration : 1; // 0x0 (0x4)
	BOOL bOverride_DOF_BokehTexture : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_MaxVelocity : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_Amount : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_FullMotionBlur : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_CameraRotationThreshold : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_CameraTranslationThreshold : 1; // 0x0 (0x4)
	BOOL bOverride_MotionBlur_InterpolationDuration : 1; // 0x0 (0x4)
	BOOL bOverride_Scene_Desaturation : 1; // 0x0 (0x4)
	BOOL bOverride_Scene_Colorize : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_TonemapperScale : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_ImageGrainScale : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_HighLights : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_MidTones : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_Shadows : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_InterpolationDuration : 1; // 0x4 (0x4)
	BOOL bOverride_Scene_ColorGradingLUT : 1; // 0x4 (0x4)
	BOOL bOverride_RimShader_Color : 1; // 0x4 (0x4)
	BOOL bOverride_RimShader_InterpolationDuration : 1; // 0x4 (0x4)
	BOOL bEnableBloom : 1; // 0x4 (0x4)
	BOOL bEnableDOF : 1; // 0x4 (0x4)
	BOOL bTwoLayerSimpleDepthOfField : 1; // 0x4 (0x4)
	BOOL bEnableMotionBlur : 1; // 0x4 (0x4)
	BOOL bEnableSceneEffect : 1; // 0x4 (0x4)
	BOOL bAllowAmbientOcclusion : 1; // 0x4 (0x4)
	BOOL bOverrideRimShaderColor : 1; // 0x4 (0x4)
	const unsigned long: 0;
	float Bloom_Scale; // 0x8 (0x4)
	float Bloom_Threshold; // 0xC (0x4)
	struct FColor Bloom_Tint; // 0x10 (0x4)
	float Bloom_ScreenBlendThreshold; // 0x14 (0x4)
	float Bloom_InterpolationDuration; // 0x18 (0x4)
	float DOF_BlurBloomKernelSize; // 0x1C (0x4)
	float DOF_FalloffExponent; // 0x20 (0x4)
	float DOF_BlurKernelSize; // 0x24 (0x4)
	float DOF_MaxNearBlurAmount; // 0x28 (0x4)
	float DOF_MinBlurAmount; // 0x2C (0x4)
	float DOF_MaxFarBlurAmount; // 0x30 (0x4)
	unsigned char DOF_FocusType; // 0x34 (0x1) (Enum = EFocusType)
	const unsigned char Unknown1[0x3]; // 0x35 (0x3) > LAST OFFSET
	float DOF_FocusInnerRadius; // 0x38 (0x4)
	float DOF_FocusDistance; // 0x3C (0x4)
	struct FVector DOF_FocusPosition; // 0x40 (0xC)
	float DOF_TunnelVisionScale; // 0x4C (0x4)
	float DOF_TunnelVisionYOffset; // 0x50 (0x4)
	float DOF_InterpolationDuration; // 0x54 (0x4)
	struct UTexture2D* DOF_BokehTexture; // 0x58 (0x4)
	float MotionBlur_MaxVelocity; // 0x5C (0x4)
	float MotionBlur_Amount; // 0x60 (0x4)
	BOOL MotionBlur_FullMotionBlur : 1; // 0x64 (0x4)
	const unsigned long: 0;
	float MotionBlur_CameraRotationThreshold; // 0x68 (0x4)
	float MotionBlur_CameraTranslationThreshold; // 0x6C (0x4)
	float MotionBlur_InterpolationDuration; // 0x70 (0x4)
	float Scene_Desaturation; // 0x74 (0x4)
	struct FVector Scene_Colorize; // 0x78 (0xC)
	float Scene_TonemapperScale; // 0x84 (0x4)
	float Scene_ImageGrainScale; // 0x88 (0x4)
	struct FVector Scene_HighLights; // 0x8C (0xC)
	struct FVector Scene_MidTones; // 0x98 (0xC)
	struct FVector Scene_Shadows; // 0xA4 (0xC)
	float Scene_InterpolationDuration; // 0xB0 (0x4)
	struct FLinearColor RimShader_Color; // 0xB4 (0x10)
	float RimShader_InterpolationDuration; // 0xC4 (0x4)
	struct UTexture* ColorGrading_LookupTable; // 0xC8 (0x4)
	const struct FLUTBlender ColorGradingLUT; // 0xCC (0x1C)
};

// 0x4 
struct FRenderingPerformanceOverrides {
	BOOL bAllowAmbientOcclusion : 1; // 0x0 (0x4)
	BOOL bAllowDominantWholeSceneDynamicShadows : 1; // 0x0 (0x4)
	BOOL bAllowMotionBlurSkinning : 1; // 0x0 (0x4)
	BOOL bAllowTemporalAA : 1; // 0x0 (0x4)
	BOOL bAllowLightShafts : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FSeqOpOutputInputLink {
	struct USequenceOp* LinkedOp; // 0x0 (0x4)
	int InputLinkIdx; // 0x4 (0x4)
};

// 0x24 
struct FSeqOpOutputLink {
	struct TArray_FSeqOpOutputInputLink Links; // 0x0 (0xC)
	struct FString LinkDesc; // 0xC (0xC)
	BOOL bHasImpulse : 1; // 0x18 (0x4)
	BOOL bDisabled : 1; // 0x18 (0x4)
	BOOL bDisabledPIE : 1; // 0x18 (0x4)
	BOOL bClampedMax : 1; // 0x18 (0x4)
	BOOL bClampedMin : 1; // 0x18 (0x4)
	BOOL bHidden : 1; // 0x18 (0x4)
	BOOL bIsActivated : 1; // 0x18 (0x4)
	BOOL bMoving : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct USequenceOp* LinkedOp; // 0x1C (0x4)
	float ActivateDelay; // 0x20 (0x4)
};

// 0x3C 
struct FSeqVarLink {
	struct UClass* ExpectedType; // 0x0 (0x4)
	struct TArray_USequenceVariablePtr LinkedVariables; // 0x4 (0xC)
	struct FString LinkDesc; // 0x10 (0xC)
	struct FName LinkVar; // 0x1C (0x8)
	struct FName PropertyName; // 0x24 (0x8)
	BOOL bWriteable : 1; // 0x2C (0x4)
	BOOL bSequenceNeverReadsOnlyWritesToThisVar : 1; // 0x2C (0x4)
	BOOL bModifiesLinkedObject : 1; // 0x2C (0x4)
	BOOL bHidden : 1; // 0x2C (0x4)
	BOOL bClampedMax : 1; // 0x2C (0x4)
	BOOL bClampedMin : 1; // 0x2C (0x4)
	BOOL bMoving : 1; // 0x2C (0x4)
	BOOL bAllowAnyType : 1; // 0x2C (0x4)
	const unsigned long: 0;
	int MinVars; // 0x30 (0x4)
	int MaxVars; // 0x34 (0x4)
	const struct UProperty* CachedProperty; // 0x38 (0x4)
};

// 0x1C 
struct FSeqEventLink {
	struct TArray_USequenceEventPtr LinkedEvents; // 0x0 (0xC)
	struct FString LinkDesc; // 0xC (0xC)
	BOOL bHidden : 1; // 0x18 (0x4)
	BOOL bMoving : 1; // 0x18 (0x4)
	BOOL bClampedMax : 1; // 0x18 (0x4)
	BOOL bClampedMin : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x48 
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x0 (0x4)
	struct FVector SrcActorOffset; // 0x4 (0xC)
	struct FVector SrcActorDesiredOffset; // 0x10 (0xC)
	struct FString DebugText; // 0x1C (0xC)
	float TimeRemaining; // 0x28 (0x4)
	float Duration; // 0x2C (0x4)
	struct FColor TextColor; // 0x30 (0x4)
	BOOL bAbsoluteLocation : 1; // 0x34 (0x4)
	BOOL bKeepAttachedToActor : 1; // 0x34 (0x4)
	const unsigned long: 0;
	struct FVector OrigActorLocation; // 0x38 (0xC)
	struct UFont* Font; // 0x44 (0x4)
};

// 0x10 
struct FBonePair {
	struct FName Bones[2]; // 0x0 (0x10)
};

// 0x1C 
struct FAnimBlendChild {
	struct FName Name; // 0x0 (0x8)
	struct UAnimNode* Anim; // 0x8 (0x4)
	float Weight; // 0xC (0x4)
	const float BlendWeight; // 0x10 (0x4)
	BOOL bMirrorSkeleton : 1; // 0x14 (0x4)
	BOOL bIsAdditive : 1; // 0x14 (0x4)
	const unsigned long: 0;
	float AdditiveWeightScale; // 0x18 (0x4)
};

// 0x18 
struct FSkelMeshComponentLODInfo {
	const struct TArray_BOOL HiddenMaterials; // 0x0 (0xC)
	const BOOL bNeedsInstanceWeightUpdate : 1; // 0xC (0x4)
	const BOOL bAlwaysUseInstanceWeights : 1; // 0xC (0x4)
	const unsigned long: 0;
	const unsigned char InstanceWeightUsage; // 0x10 (0x1) (Enum = EInstanceWeightUsage)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const int InstanceWeightIdx; // 0x14 (0x4)
};

// 0x30 
struct FAttachment {
	struct UActorComponent* Component; // 0x0 (0x4)
	struct FName BoneName; // 0x4 (0x8)
	struct FVector RelativeLocation; // 0xC (0xC)
	struct FRotator RelativeRotation; // 0x18 (0xC)
	struct FVector RelativeScale; // 0x24 (0xC)
};

// 0x8 
struct FActiveMorph {
	struct UMorphTarget* Target; // 0x0 (0x4)
	float Weight; // 0x4 (0x4)
};

// 0xC 
struct FGestaltLODModelFragment {
	int MaterialIndex; // 0x0 (0x4)
	int FirstIndex; // 0x4 (0x4)
	int NumPrimitives; // 0x8 (0x4)
};

// 0xC 
struct FGestaltLODModel {
	struct TArray_FGestaltLODModelFragment GestaltFragments; // 0x0 (0xC)
};

// 0x10 
struct FSocketRemapEntry {
	struct FName OriginalSocketName; // 0x0 (0x8)
	struct FName MangledSocketName; // 0x8 (0x8)
};

// 0xC 
struct FGestaltAccessoryEntry {
	int TransformIndex; // 0x0 (0x4)
	int OriginalBoneIndex; // 0x4 (0x4)
	int GPUBoneIndex; // 0x8 (0x4)
};

// 0x48 
struct FGestaltDataContainer {
	struct USkeletalMesh* SkeletalMesh; // 0x0 (0x4)
	struct TArray_FGestaltLODModel LODModelData; // 0x4 (0xC)
	struct TArray_FSocketRemapEntry SocketMappings; // 0x10 (0xC)
	struct TArray_FGestaltAccessoryEntry GestaltAccessoryList; // 0x1C (0xC)
	struct UGestaltPartMatrices* GestaltPartMatricesContainer; // 0x28 (0x4)
	struct FBoxSphereBounds ReferencePoseBounds; // 0x2C (0x1C)
};

// 0x20 
struct FConnectedPeerInfo {
	struct FUniqueNetId PlayerID; // 0x0 (0x18)
	unsigned char NatType; // 0x18 (0x1) (Enum = ENATType)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	BOOL bLostConnectionToHost : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x31 
struct FClientAdjustment {
	float TimeStamp; // 0x0 (0x4)
	unsigned char newPhysics; // 0x4 (0x1) (Enum = EPhysics)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	struct FVector NewLoc; // 0x8 (0xC)
	struct FVector NewVel; // 0x14 (0xC)
	struct AActor* NewBase; // 0x20 (0x4)
	struct FVector NewFloor; // 0x24 (0xC)
	unsigned char bAckGoodMove; // 0x30 (0x1)
};

// 0x34 
struct FKismetDrawTextInfo {
	struct FString MessageText; // 0x0 (0xC)
	struct FString AppendedText; // 0xC (0xC)
	struct UFont* MessageFont; // 0x18 (0x4)
	struct FVector2D MessageFontScale; // 0x1C (0x8)
	struct FVector2D MessageOffset; // 0x24 (0x8)
	struct FColor MessageColor; // 0x2C (0x4)
	float MessageEndTime; // 0x30 (0x4)
};

// 0x18 
struct FConsoleMessage {
	struct FString Text; // 0x0 (0xC)
	struct FColor TextColor; // 0xC (0x4)
	float MessageLife; // 0x10 (0x4)
	struct APlayerReplicationInfo* PRI; // 0x14 (0x4)
};

// 0x8 
struct FAutomatedTestingDatum {
	int NumberOfMatchesPlayed; // 0x0 (0x4)
	int NumMapListCyclesDone; // 0x4 (0x4)
};

// 0xD 
struct FInputEntry {
	unsigned char Type; // 0x0 (0x1) (Enum = EInputTypes)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float Value; // 0x4 (0x4)
	float TimeDelta; // 0x8 (0x4)
	unsigned char Action; // 0xC (0x1) (Enum = EInputMatchAction)
};

// 0x3C 
struct FInputMatchRequest {
	struct TArray_FInputEntry Inputs; // 0x0 (0xC)
	struct AActor* MatchActor; // 0xC (0x4)
	struct FName MatchFuncName; // 0x10 (0x8)
	struct FScriptDelegate MatchDelegate; // 0x18 (0xC)
	struct FName FailedFuncName; // 0x24 (0x8)
	struct FName RequestName; // 0x2C (0x8)
	int MatchIdx; // 0x34 (0x4)
	float LastMatchTime; // 0x38 (0x4)
};

// 0x31 
struct FNavigationOctreeObject {
	struct FBox BoundingBox; // 0x0 (0x1C)
	struct FVector BoxCenter; // 0x1C (0xC)
	const struct FPointer OctreeNode; // 0x28 (0x4)
	const struct UObject* Owner; // 0x2C (0x4)
	const unsigned char OwnerType; // 0x30 (0x1)
};

// 0x4 
struct ANavigationPoint_FCheckpointRecord {
	BOOL bDisabled : 1; // 0x0 (0x4)
	BOOL bBlocked : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FAreaTestSortedPoint {
	struct ANavigationPoint* Nav; // 0x0 (0x4)
	float DistSq; // 0x4 (0x4)
};

// 0x10 
struct FNavMeshPathSize {
	float Size; // 0x0 (0x4)
	float Height; // 0x4 (0x4)
	struct FColor PolyColor; // 0x8 (0x4)
	struct FColor ObstacleColor; // 0xC (0x4)
};

// 0x1C 
struct FPolyReference {
	struct FActorReference OwningPylon; // 0x0 (0x14)
	int PolyId; // 0x14 (0x4)
	struct FPointer CachedPoly; // 0x18 (0x4)
};

// 0x1C 
struct FPendingSubtitleInfo {
	struct FPointer PendingSubtitlePlayingInfoPtr; // 0x0 (0x4)
	struct FString OriginalFileName; // 0x4 (0xC)
	struct TArray_unsigned_char StreamedSubtitleData; // 0x10 (0xC)
};

// 0x1C 
struct FPendingFaceFXInfo {
	struct FPointer PendingFaceFXPlayingInfoPtr; // 0x0 (0x4)
	struct FString AnimName; // 0x4 (0xC)
	struct TArray_unsigned_char RawData; // 0x10 (0xC)
};

// 0x1 
struct FDialogueArgument {
	unsigned char Source; // 0x0 (0x1) (Enum = EDynamicDialogueArgument)
};

// 0x48 (Alignment = 16)
struct FKSphereElem {
	struct FMatrix TM; // 0x0 (0x40)
	float Radius; // 0x40 (0x4)
	BOOL bNoRBCollision : 1; // 0x44 (0x4)
	BOOL bPerPolyShape : 1; // 0x44 (0x4)
	const unsigned long: 0;
};

// 0x50 (Alignment = 16)
struct FKBoxElem {
	struct FMatrix TM; // 0x0 (0x40)
	float X; // 0x40 (0x4)
	float Y; // 0x44 (0x4)
	float Z; // 0x48 (0x4)
	BOOL bNoRBCollision : 1; // 0x4C (0x4)
	BOOL bPerPolyShape : 1; // 0x4C (0x4)
	const unsigned long: 0;
};

// 0x4C (Alignment = 16)
struct FKSphylElem {
	struct FMatrix TM; // 0x0 (0x40)
	float Radius; // 0x40 (0x4)
	float Length; // 0x44 (0x4)
	BOOL bNoRBCollision : 1; // 0x48 (0x4)
	BOOL bPerPolyShape : 1; // 0x48 (0x4)
	const unsigned long: 0;
};

// 0x64 
struct FKConvexElem {
	struct TArray_FVector VertexData; // 0x0 (0xC)
	struct TArray_FPlane PermutedVertexData; // 0xC (0xC)
	struct TArray_int FaceTriData; // 0x18 (0xC)
	struct TArray_FVector EdgeDirections; // 0x24 (0xC)
	struct TArray_FVector FaceNormalDirections; // 0x30 (0xC)
	struct TArray_FPlane FacePlaneData; // 0x3C (0xC)
	struct FBox ElemBox; // 0x48 (0x1C)
};

// 0x38 
struct FKAggregateGeom {
	struct TArray_FKSphereElem SphereElems; // 0x0 (0xC)
	struct TArray_FKBoxElem BoxElems; // 0xC (0xC)
	struct TArray_FKSphylElem SphylElems; // 0x18 (0xC)
	struct TArray_FKConvexElem ConvexElems; // 0x24 (0xC)
	struct FPointer RenderInfo; // 0x30 (0x4)
	BOOL bSkipCloseAndParallelChecks : 1; // 0x34 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FKCachedConvexData_Mirror {
	struct TArray_int CachedConvexElements; // 0x0 (0xC)
};

// 0xC 
struct FGeomSelection {
	int Type; // 0x0 (0x4)
	int Index; // 0x4 (0x4)
	int SelectionIndex; // 0x8 (0x4)
};

// 0x24 
struct FInteriorSettings {
	BOOL bIsWorldInfo : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float ExteriorVolume; // 0x4 (0x4)
	float ExteriorTime; // 0x8 (0x4)
	float ExteriorLPF; // 0xC (0x4)
	float ExteriorLPFTime; // 0x10 (0x4)
	float InteriorVolume; // 0x14 (0x4)
	float InteriorTime; // 0x18 (0x4)
	float InteriorLPF; // 0x1C (0x4)
	float InteriorLPFTime; // 0x20 (0x4)
};

// 0x1C 
struct FReverbSettings {
	BOOL bApplyReverb : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char ReverbType; // 0x4 (0x1) (Enum = ReverbPreset)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	float Volume; // 0x8 (0x4)
	float FadeTime; // 0xC (0x4)
	float ReflectionsDelayOverride; // 0x10 (0x4)
	float LateDelayOverride; // 0x14 (0x4)
	float DecayHighFrequencyRatioOverride; // 0x18 (0x4)
};

// 0x10 
struct FAudioComponentParam {
	struct FName ParamName; // 0x0 (0x8)
	float FloatParam; // 0x8 (0x4)
	struct USoundNodeWave* WaveParam; // 0xC (0x4)
};

// 0x10 
struct FSubtitleCue {
	const struct FString Text; // 0x0 (0xC)
	const float Time; // 0xC (0x4)
};

// 0x30 
struct FCompressedTrack {
	struct TArray_unsigned_char ByteStream; // 0x0 (0xC)
	struct TArray_float Times; // 0xC (0xC)
	float Mins[3]; // 0x18 (0xC)
	float Ranges[3]; // 0x24 (0xC)
};

// 0x48 (Alignment = 16)
struct FDeltaTrackInfo {
	struct FQuat RotKey[2]; // 0x0 (0x20)
	struct FVector PosKey[2]; // 0x20 (0x18)
	int RotKeyIndex[2]; // 0x38 (0x8)
	int PosKeyIndex[2]; // 0x40 (0x8)
};

// 0x14 
struct FCurveTrack {
	struct FName CurveName; // 0x0 (0x8)
	struct TArray_float CurveWeights; // 0x8 (0xC)
};

// 0x18 
struct FRotationTrack {
	struct TArray_FQuat RotKeys; // 0x0 (0xC)
	struct TArray_float Times; // 0xC (0xC)
};

// 0x18 
struct FTranslationTrack {
	struct TArray_FVector PosKeys; // 0x0 (0xC)
	struct TArray_float Times; // 0xC (0xC)
};

// 0x8 
struct FTimeModifier {
	float Time; // 0x0 (0x4)
	float TargetStrength; // 0x4 (0x4)
};

// 0x14 
struct FSkelControlModifier {
	struct FName SkelControlName; // 0x0 (0x8)
	struct TArray_FTimeModifier Modifiers; // 0x8 (0xC)
};

// 0xC 
struct FAnimNotifyEvent {
	float Time; // 0x0 (0x4)
	struct UAnimNotify* Notify; // 0x4 (0x4)
	float Duration; // 0x8 (0x4)
};

// 0x18 
struct FRawAnimSequenceTrack {
	struct TArray_FVector PosKeys; // 0x0 (0xC)
	struct TArray_FQuat RotKeys; // 0xC (0xC)
};

// 0xC 
struct FCurveKey {
	struct FName CurveName; // 0x0 (0x8)
	float Weight; // 0x8 (0x4)
};

// 0x18 
struct FWeightNodeRule {
	struct FName NodeName; // 0x0 (0x8)
	struct UAnimNodeBlendBase* CachedNode; // 0x8 (0x4)
	struct UAnimNodeSlot* CachedSlotNode; // 0xC (0x4)
	unsigned char WeightCheck; // 0x10 (0x1) (Enum = EWeightCheck)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	int ChildIndex; // 0x14 (0x4)
};

// 0x30 
struct FWeightRule {
	struct FWeightNodeRule FirstNode; // 0x0 (0x18)
	struct FWeightNodeRule SecondNode; // 0x18 (0x18)
};

// 0xC 
struct FBranchInfo {
	struct FName BoneName; // 0x0 (0x8)
	float PerBoneWeightIncrease; // 0x8 (0x4)
};

// 0x40 
struct FPerBoneMaskInfo {
	struct TArray_FBranchInfo BranchList; // 0x0 (0xC)
	float DesiredWeight; // 0xC (0x4)
	float BlendTimeToGo; // 0x10 (0x4)
	struct TArray_FWeightRule WeightRuleList; // 0x14 (0xC)
	BOOL bWeightBasedOnNodeRules : 1; // 0x20 (0x4)
	BOOL bDisableForNonLocalHumanPlayers : 1; // 0x20 (0x4)
	BOOL bPendingBlend : 1; // 0x20 (0x4)
	const unsigned long: 0;
	struct TArray_float PerBoneWeights; // 0x24 (0xC)
	struct TArray_unsigned_char TransformReqBone; // 0x30 (0xC)
	int TransformReqBoneIndex; // 0x3C (0x4)
};

// 0x1C (Alignment = 16)
struct FAimTransform {
	struct FQuat Quaternion; // 0x0 (0x10)
	struct FVector Translation; // 0x10 (0xC)
};

// 0x130 (Alignment = 16)
struct FAimComponent {
	struct FName BoneName; // 0x0 (0x8)
	const unsigned char Unknown1[0x8]; // 0x8 (0x8) > LAST OFFSET
	struct FAimTransform LU; // 0x10 (0x1C)
	const unsigned char Unknown2[0x4]; // 0x2C (0x4) > LAST OFFSET
	struct FAimTransform LC; // 0x30 (0x1C)
	const unsigned char Unknown3[0x4]; // 0x4C (0x4) > LAST OFFSET
	struct FAimTransform LD; // 0x50 (0x1C)
	const unsigned char Unknown4[0x4]; // 0x6C (0x4) > LAST OFFSET
	struct FAimTransform CU; // 0x70 (0x1C)
	const unsigned char Unknown5[0x4]; // 0x8C (0x4) > LAST OFFSET
	struct FAimTransform CC; // 0x90 (0x1C)
	const unsigned char Unknown6[0x4]; // 0xAC (0x4) > LAST OFFSET
	struct FAimTransform CD; // 0xB0 (0x1C)
	const unsigned char Unknown7[0x4]; // 0xCC (0x4) > LAST OFFSET
	struct FAimTransform RU; // 0xD0 (0x1C)
	const unsigned char Unknown8[0x4]; // 0xEC (0x4) > LAST OFFSET
	struct FAimTransform RC; // 0xF0 (0x1C)
	const unsigned char Unknown9[0x4]; // 0x10C (0x4) > LAST OFFSET
	struct FAimTransform RD; // 0x110 (0x1C)
	const unsigned char Unknown10[0x4]; // 0x12C (0x4) MISSING END DATA
};

// 0x7C 
struct FAimOffsetProfile {
	const struct FName ProfileName; // 0x0 (0x8)
	struct FVector2D HorizontalRange; // 0x8 (0x8)
	struct FVector2D VerticalRange; // 0x10 (0x8)
	struct TArray_FAimComponent AimComponents; // 0x18 (0xC)
	struct TArray_FBoneAtom AimTransformsCache; // 0x24 (0xC)
	BOOL bDirtyAimTransformsCache : 1; // 0x30 (0x4)
	const unsigned long: 0;
	struct FName AnimName_LU; // 0x34 (0x8)
	struct FName AnimName_LC; // 0x3C (0x8)
	struct FName AnimName_LD; // 0x44 (0x8)
	struct FName AnimName_CU; // 0x4C (0x8)
	struct FName AnimName_CC; // 0x54 (0x8)
	struct FName AnimName_CD; // 0x5C (0x8)
	struct FName AnimName_RU; // 0x64 (0x8)
	struct FName AnimName_RC; // 0x6C (0x8)
	struct FName AnimName_RD; // 0x74 (0x8)
};

// 0x30 
struct FChildBoneBlendInfo {
	struct TArray_float TargetPerBoneWeight; // 0x0 (0xC)
	struct FName InitTargetStartBone; // 0xC (0x8)
	float InitPerBoneIncrease; // 0x14 (0x4)
	const struct FName OldStartBone; // 0x18 (0x8)
	const float OldBoneIncrease; // 0x20 (0x4)
	struct TArray_unsigned_char TargetRequiredBones; // 0x24 (0xC)
};

// 0x20 
struct FRandomAnimInfo {
	float Chance; // 0x0 (0x4)
	unsigned char LoopCountMin; // 0x4 (0x1)
	unsigned char LoopCountMax; // 0x5 (0x1)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	float BlendInTime; // 0x8 (0x4)
	struct FVector2D PlayRateRange; // 0xC (0x8)
	BOOL bStillFrame : 1; // 0x14 (0x4)
	const unsigned long: 0;
	unsigned char LoopCount; // 0x18 (0x1)
	const unsigned char Unknown2[0x3]; // 0x19 (0x3) > LAST OFFSET
	float LastPosition; // 0x1C (0x4)
};

// 0x10 
struct FAnimInfo {
	const struct FName AnimSeqName; // 0x0 (0x8)
	const struct UAnimSequence* AnimSeq; // 0x8 (0x4)
	const int AnimLinkupIndex; // 0xC (0x4)
};

// 0x1C 
struct FAnimBlendInfo {
	struct FName AnimName; // 0x0 (0x8)
	struct FAnimInfo AnimInfo; // 0x8 (0x10)
	float Weight; // 0x18 (0x4)
};

// 0x20 
struct FSynchGroup {
	struct TArray_UAnimNodeSequencePtr SeqNodes; // 0x0 (0xC)
	struct UAnimNodeSequence* MasterNode; // 0xC (0x4)
	struct FName GroupName; // 0x10 (0x8)
	BOOL bFireSlaveNotifies : 1; // 0x18 (0x4)
	const unsigned long: 0;
	float RateScale; // 0x1C (0x4)
};

// 0x8 
struct FOpinionData {
	const unsigned char Opinion; // 0x0 (0x1) (Enum = EOpinion)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct UPawnAllegiance* Allegiance; // 0x4 (0x4)
};

// 0xC 
struct FInfoBarData {
	unsigned char Type; // 0x0 (0x1) (Enum = EInfoBarType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float Amount; // 0x4 (0x4)
	BOOL bFullyArmored : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FLocalizedSubtitle {
	struct FString LanguageExt; // 0x0 (0xC)
	struct TArray_FSubtitleCue Subtitles; // 0xC (0xC)
	BOOL bMature : 1; // 0x18 (0x4)
	BOOL bManualWordWrap : 1; // 0x18 (0x4)
	BOOL bSingleLine : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FLightMapRef {
	const struct FPointer Reference; // 0x0 (0x4)
};

// 0xA4 (Alignment = 16)
struct FDominantShadowInfo {
	struct FMatrix WorldToLight; // 0x0 (0x40)
	struct FMatrix LightToWorld; // 0x40 (0x40)
	struct FBox LightSpaceImportanceBounds; // 0x80 (0x1C)
	int ShadowMapSizeX; // 0x9C (0x4)
	int ShadowMapSizeY; // 0xA0 (0x4)
};

// 0xC 
struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0 (0x4)
	float IndirectLightingSaturation; // 0x4 (0x4)
	float ShadowExponent; // 0x8 (0x4)
};

// 0x14 
struct FScalarParameterInterpStruct {
	struct FName ParameterName; // 0x0 (0x8)
	float ParameterValue; // 0x8 (0x4)
	float InterpTime; // 0xC (0x4)
	float WarmupTime; // 0x10 (0x4)
};

// 0x10 
struct FLightmassPointLightSettings {
	float IndirectLightingScale; // 0x0 (0x4)
	float IndirectLightingSaturation; // 0x4 (0x4)
	float ShadowExponent; // 0x8 (0x4)
	float LightSourceRadius; // 0xC (0x4)
};

// 0x10 
struct FLightmassDirectionalLightSettings {
	float IndirectLightingScale; // 0x0 (0x4)
	float IndirectLightingSaturation; // 0x4 (0x4)
	float ShadowExponent; // 0x8 (0x4)
	float LightSourceAngle; // 0xC (0x4)
};

// 0x1C 
struct FLightmassPrimitiveSettings {
	BOOL bUseTwoSidedLighting : 1; // 0x0 (0x4)
	BOOL bShadowIndirectOnly : 1; // 0x0 (0x4)
	BOOL bUseEmissiveForStaticLighting : 1; // 0x0 (0x4)
	BOOL bGenerateVolumeLightingSamples : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float EmissiveLightFalloffExponent; // 0x4 (0x4)
	float EmissiveLightExplicitInfluenceRadius; // 0x8 (0x4)
	float EmissiveBoost; // 0xC (0x4)
	float DiffuseBoost; // 0x10 (0x4)
	float SpecularBoost; // 0x14 (0x4)
	float FullyOccludedSamplesFraction; // 0x18 (0x4)
};

// 0x14 
struct FLightmassDebugOptions {
	BOOL bDebugMode : 1; // 0x0 (0x4)
	BOOL bStatsEnabled : 1; // 0x0 (0x4)
	BOOL bGatherBSPSurfacesAcrossComponents : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float CoplanarTolerance; // 0x4 (0x4)
	BOOL bUseDeterministicLighting : 1; // 0x8 (0x4)
	BOOL bUseImmediateImport : 1; // 0x8 (0x4)
	BOOL bImmediateProcessMappings : 1; // 0x8 (0x4)
	BOOL bSortMappings : 1; // 0x8 (0x4)
	BOOL bDumpBinaryFiles : 1; // 0x8 (0x4)
	BOOL bDebugMaterials : 1; // 0x8 (0x4)
	BOOL bPadMappings : 1; // 0x8 (0x4)
	BOOL bDebugPaddings : 1; // 0x8 (0x4)
	BOOL bOnlyCalcDebugTexelMappings : 1; // 0x8 (0x4)
	BOOL bUseRandomColors : 1; // 0x8 (0x4)
	BOOL bColorBordersGreen : 1; // 0x8 (0x4)
	BOOL bColorByExecutionTime : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float ExecutionTimeDivisor; // 0xC (0x4)
	BOOL bInitialized : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FSwarmDebugOptions {
	BOOL bDistributionEnabled : 1; // 0x0 (0x4)
	BOOL bForceContentExport : 1; // 0x0 (0x4)
	BOOL bInitialized : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FRootMotionCurve {
	struct FName AnimName; // 0x0 (0x8)
	struct FInterpCurveVector Curve; // 0x8 (0x10)
	float MaxCurveTime; // 0x18 (0x4)
};

// 0xC 
struct FRecentDamageTracker {
	float TotalDamage; // 0x0 (0x4)
	float HealthDamage; // 0x4 (0x4)
	float ShieldDamage; // 0x8 (0x4)
};

// 0xC 
struct FBalanceDefSpawnedActorState {
	struct UBaseBalanceDefinition* BalanceDefinition; // 0x0 (0x4)
	int GradeIndex; // 0x4 (0x4)
	BOOL bGradeCustomizationsApplied : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FTrailSocketSamplePoint {
	struct FVector Position; // 0x0 (0xC)
	struct FVector Velocity; // 0xC (0xC)
};

// 0x4C 
struct FTrailSamplePoint {
	float RelativeTime; // 0x0 (0x4)
	struct FTrailSocketSamplePoint FirstEdgeSample; // 0x4 (0x18)
	struct FTrailSocketSamplePoint ControlPointSample; // 0x1C (0x18)
	struct FTrailSocketSamplePoint SecondEdgeSample; // 0x34 (0x18)
};

// 0x28 
struct FTrailSample {
	float RelativeTime; // 0x0 (0x4)
	struct FVector FirstEdgeSample; // 0x4 (0xC)
	struct FVector ControlPointSample; // 0x10 (0xC)
	struct FVector SecondEdgeSample; // 0x1C (0xC)
};

// 0xC 
struct FAnimSetMeshLinkup {
	struct TArray_int BoneToTrackTable; // 0x0 (0xC)
};

// 0x24 
struct FAnimGroup {
	const struct TArray_UAnimNodeSequencePtr SeqNodes; // 0x0 (0xC)
	const struct UAnimNodeSequence* SynchMaster; // 0xC (0x4)
	const struct UAnimNodeSequence* NotifyMaster; // 0x10 (0x4)
	const struct FName GroupName; // 0x14 (0x8)
	const float RateScale; // 0x1C (0x4)
	const float SynchPctPosition; // 0x20 (0x4)
};

// 0xC 
struct FSkelControlListHead {
	struct FName BoneName; // 0x0 (0x8)
	struct USkelControlBase* ControlHead; // 0x8 (0x4)
};

// 0x18 
struct FPreviewSkelMeshStruct {
	struct FName DisplayName; // 0x0 (0x8)
	struct USkeletalMesh* PreviewSkelMesh; // 0x8 (0x4)
	struct TArray_UMorphTargetSetPtr PreviewMorphSets; // 0xC (0xC)
};

// 0x18 
struct FPreviewSocketStruct {
	struct FName DisplayName; // 0x0 (0x8)
	struct FName SocketName; // 0x8 (0x8)
	struct USkeletalMesh* PreviewSkelMesh; // 0x10 (0x4)
	struct UStaticMesh* PreviewStaticMesh; // 0x14 (0x4)
};

// 0x14 
struct FPreviewAnimSetsStruct {
	struct FName DisplayName; // 0x0 (0x8)
	struct TArray_UAnimSetPtr PreviewAnimSets; // 0x8 (0xC)
};

// 0x30 
struct F_ModifyHealthParams {
	BOOL bHeal : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float DamageAmount; // 0x4 (0x4)
	struct AController* EventInstigator; // 0x8 (0x4)
	struct FVector HitLocation; // 0xC (0xC)
	struct FVector Momentum; // 0x18 (0xC)
	struct UClass* DamageType; // 0x24 (0x4)
	struct UDamageTypeDefinition* DamageTypeDefinition; // 0x28 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x2C (0x4)
};

// 0x4 
struct FNxDestructibleParametersFlag {
	BOOL ACCUMULATE_DAMAGE : 1; // 0x0 (0x4)
	BOOL ASSET_DEFINED_SUPPORT : 1; // 0x0 (0x4)
	BOOL WORLD_SUPPORT : 1; // 0x0 (0x4)
	BOOL DEBRIS_TIMEOUT : 1; // 0x0 (0x4)
	BOOL DEBRIS_MAX_SEPARATION : 1; // 0x0 (0x4)
	BOOL CRUMBLE_SMALLEST_CHUNKS : 1; // 0x0 (0x4)
	BOOL ACCURATE_RAYCASTS : 1; // 0x0 (0x4)
	BOOL USE_VALID_BOUNDS : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FNxDestructibleDepthParameters {
	BOOL TAKE_IMPACT_DAMAGE : 1; // 0x0 (0x4)
	BOOL IGNORE_POSE_UPDATES : 1; // 0x0 (0x4)
	BOOL IGNORE_RAYCAST_CALLBACKS : 1; // 0x0 (0x4)
	BOOL IGNORE_CONTACT_CALLBACKS : 1; // 0x0 (0x4)
	BOOL USER_FLAG : 1; // 0x0 (0x4)
	BOOL USER_FLAG : 1; // 0x0 (0x4)
	BOOL USER_FLAG : 1; // 0x0 (0x4)
	BOOL USER_FLAG : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x80 
struct FNxDestructibleParameters {
	float DamageThreshold; // 0x0 (0x4)
	float DamageToRadius; // 0x4 (0x4)
	float DamageCap; // 0x8 (0x4)
	float ForceToDamage; // 0xC (0x4)
	float ImpactVelocityThreshold; // 0x10 (0x4)
	float MaterialStrength; // 0x14 (0x4)
	float DamageToPercentDeformation; // 0x18 (0x4)
	float DeformationPercentLimit; // 0x1C (0x4)
	BOOL bFormExtendedStructures : 1; // 0x20 (0x4)
	const unsigned long: 0;
	int SupportDepth; // 0x24 (0x4)
	int DebrisDepth; // 0x28 (0x4)
	int EssentialDepth; // 0x2C (0x4)
	float DebrisLifetimeMin; // 0x30 (0x4)
	float DebrisLifetimeMax; // 0x34 (0x4)
	float DebrisMaxSeparationMin; // 0x38 (0x4)
	float DebrisMaxSeparationMax; // 0x3C (0x4)
	struct FBox ValidBounds; // 0x40 (0x1C)
	float MaxChunkSpeed; // 0x5C (0x4)
	float MassScaleExponent; // 0x60 (0x4)
	struct FNxDestructibleParametersFlag Flags; // 0x64 (0x4)
	float GrbVolumeLimit; // 0x68 (0x4)
	float GrbParticleSpacing; // 0x6C (0x4)
	float FractureImpulseScale; // 0x70 (0x4)
	struct TArray_FNxDestructibleDepthParameters DepthParameters; // 0x74 (0xC)
};

// 0x10 
struct FDamageParameters {
	unsigned char OverrideMode; // 0x0 (0x1) (Enum = EDamageParameterOverrideMode)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float BaseDamage; // 0x4 (0x4)
	float Radius; // 0x8 (0x4)
	float Momentum; // 0xC (0x4)
};

// 0x18 
struct FDamagePair {
	struct FName DamageCauserName; // 0x0 (0x8)
	struct FDamageParameters Params; // 0x8 (0x10)
};

// 0x8 
struct FAttributePriorityData {
	const struct UAttributeDefinition* Attribute; // 0x0 (0x4)
	const float PriorityIncrease; // 0x4 (0x4)
};

// 0xC 
struct FAppliedAttributeEffect {
	struct UObject* Context; // 0x0 (0x4)
	struct UAttributeDefinition* Attribute; // 0x4 (0x4)
	struct UAttributeModifier* Modifier; // 0x8 (0x4)
};

// 0x10 
struct FAttributeInitializationData {
	float BaseValueConstant; // 0x0 (0x4)
	struct UAttributeDefinition* BaseValueAttribute; // 0x4 (0x4)
	struct UAttributeInitializationDefinition* InitializationDefinition; // 0x8 (0x4)
	float BaseValueScaleConstant; // 0xC (0x4)
};

// 0x18 
struct FAttributeEffectData {
	const struct UAttributeDefinition* AttributeToModify; // 0x0 (0x4)
	const unsigned char ModifierType; // 0x4 (0x1) (Enum = EModifierType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData BaseModifierValue; // 0x8 (0x10)
};

// 0x10 
struct FAttributeExpressionData {
	const struct UAttributeDefinition* AttributeOperand1; // 0x0 (0x4)
	const unsigned char ComparisonOperator; // 0x4 (0x1) (Enum = EComparisonOperator)
	const unsigned char Operand2Usage; // 0x5 (0x1) (Enum = EOperandUsage)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	const struct UAttributeDefinition* AttributeOperand2; // 0x8 (0x4)
	const float ConstantOperand2; // 0xC (0x4)
};

// 0x14 
struct FConditionalSoundData {
	const struct UAkEvent* Event; // 0x0 (0x4)
	const struct USoundCue* Cue; // 0x4 (0x4)
	const struct TArray_FAttributeExpressionData Expressions; // 0x8 (0xC)
};

// 0x44 
struct FBalanceFormula {
	const BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData Multiplier; // 0x4 (0x10)
	const struct FAttributeInitializationData Level; // 0x14 (0x10)
	const struct FAttributeInitializationData Power; // 0x24 (0x10)
	const struct FAttributeInitializationData Offset; // 0x34 (0x10)
};

// 0x24 
struct FVariance {
	const BOOL bEnabled : 1; // 0x0 (0x4)
	const BOOL bUseIntegerRandomization : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData LowerBound; // 0x4 (0x10)
	const struct FAttributeInitializationData UpperBound; // 0x14 (0x10)
};

// 0x28 
struct FRange {
	const BOOL bEnableMinValueRestriction : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData MinValue; // 0x4 (0x10)
	const BOOL bEnableMaxValueRestriction : 1; // 0x14 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData MaxValue; // 0x18 (0x10)
};

// 0x1C 
struct FConditionalValueExpression {
	const struct FAttributeInitializationData BaseValueIfTrue; // 0x0 (0x10)
	const struct TArray_FAttributeExpressionData Expressions; // 0x10 (0xC)
};

// 0x20 
struct FConditionalInitializationExpressions {
	const BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct TArray_FConditionalValueExpression ConditionalExpressionList; // 0x4 (0xC)
	const struct FAttributeInitializationData DefaultBaseValue; // 0x10 (0x10)
};

// 0x14 
struct FAttributeBaseValueData {
	const struct UAttributeDefinition* Attribute; // 0x0 (0x4)
	const struct FAttributeInitializationData BaseValue; // 0x4 (0x10)
};

// 0x34 
struct FListener {
	const struct APortalVolume* PortalVolume; // 0x0 (0x4)
	struct FVector Location; // 0x4 (0xC)
	struct FVector Up; // 0x10 (0xC)
	struct FVector Right; // 0x1C (0xC)
	struct FVector Front; // 0x28 (0xC)
};

// 0x10 
struct FAudioClassInfo {
	const int NumResident; // 0x0 (0x4)
	const int SizeResident; // 0x4 (0x4)
	const int NumRealTime; // 0x8 (0x4)
	const int SizeRealTime; // 0xC (0x4)
};

// 0x8 
struct FGameStageRangeData {
	const int MinGameStage; // 0x0 (0x4)
	const int MaxGameStage; // 0x4 (0x4)
};

// 0x28 
struct FGameStageGradeWeightData {
	const struct FGameStageRangeData GameStageRequirement; // 0x0 (0x8)
	const struct FAttributeInitializationData MinSpawnProbabilityModifier; // 0x8 (0x10)
	const struct FAttributeInitializationData MaxSpawnProbabilityModifier; // 0x18 (0x10)
};

// 0xE 
struct FBehaviorContextData {
	struct FName InstancedDataContextName; // 0x0 (0x8)
	struct UObject* ContextObject; // 0x8 (0x4)
	unsigned char BehaviorContext; // 0xC (0x1) (Enum = EBehaviorContext)
	unsigned char bSupportsDefaultOutputLink; // 0xD (0x1)
};

// 0x74 
struct FBehaviorParameterUnion {
	struct FName ParameterName; // 0x0 (0x8)
	struct FVector VectorData; // 0x8 (0xC)
	struct AActor* ActorData; // 0x14 (0x4)
	struct FImpactInfo ImpactInfoData; // 0x18 (0x5C)
};

// 0xC 
struct FBehaviorParameters {
	struct TArray_FBehaviorParameterUnion Parameters; // 0x0 (0xC)
};

// 0x4 
struct FBehaviorOutputLinkDescriptionData {
	int LinkId; // 0x0 (0x4)
};

// 0x1C 
struct FBehaviorKernelInfo {
	const struct FPointer StateForThreadRunningThisBehavior; // 0x0 (0x4)
	const float WorldTime; // 0x4 (0x4)
	const float ExecutionTime; // 0x8 (0x4)
	const float WorldDeltaTime; // 0xC (0x4)
	const float ExecutionDelayError; // 0x10 (0x4)
	float NextExecutionDelayTime; // 0x14 (0x4)
	const BOOL bHasLinkedOutputs : 1; // 0x18 (0x4)
	const BOOL bIsInitialRunOfThisBehavior : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FCounterEventReactionData {
	const unsigned char EventType; // 0x0 (0x1) (Enum = EBehaviorCounterEvent)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x4 (0xC)
};

// 0x8 
struct FBehaviorCounterState {
	int CurrentValue; // 0x0 (0x4)
	int Target; // 0x4 (0x4)
};

// 0x10 
struct FCounterBehaviorUserState {
	struct FBehaviorCounterState Counters[2]; // 0x0 (0x10)
};

// 0x1C 
struct FIndependentSelectionData {
	const struct FAttributeInitializationData Probability; // 0x0 (0x10)
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x10 (0xC)
};

// 0x1C 
struct FScalarMaterialParameter {
	struct FName Name; // 0x0 (0x8)
	float Value; // 0x8 (0x4)
	struct FAttributeInitializationData ValueFromAttribute; // 0xC (0x10)
};

// 0x28 
struct FVectorMaterialParameter {
	struct FName Name; // 0x0 (0x8)
	struct FLinearColor Value; // 0x8 (0x10)
	struct FAttributeInitializationData VectorScale; // 0x18 (0x10)
};

// 0xC 
struct FTextureMaterialParameter {
	struct FName Name; // 0x0 (0x8)
	struct UTexture* Value; // 0x8 (0x4)
};

// 0x18 
struct FScalarParticleSystemParameter {
	struct FName Name; // 0x0 (0x8)
	struct FAttributeInitializationData Value; // 0x8 (0x10)
};

// 0x24 
struct FVectorParticleSystemParameter {
	struct FName Name; // 0x0 (0x8)
	struct FVector Value; // 0x8 (0xC)
	struct FAttributeInitializationData VectorScale; // 0x14 (0x10)
};

// 0xC 
struct FColorParticleSystemParameter {
	struct FName Name; // 0x0 (0x8)
	struct FColor Value; // 0x8 (0x4)
};

// 0xC 
struct FMaterialParticleSystemParameter {
	struct FName Name; // 0x0 (0x8)
	struct UMaterialInterface* Value; // 0x8 (0x4)
};

// 0x18 
struct FActorParticleSystemParameter {
	struct FName Name; // 0x0 (0x8)
	struct FBehaviorContextData Context; // 0x8 (0x10)
};

// 0x20 
struct FStaticMeshComponentLODInfo {
	const struct TArray_UShadowMap2DPtr ShadowMaps; // 0x0 (0xC)
	const struct TArray_UObjectPtr ShadowVertexBuffers; // 0xC (0xC)
	const struct FPointer LightMap; // 0x18 (0x4)
	const struct FPointer OverrideVertexColors; // 0x1C (0x4)
};

// 0x14 
struct FPaintedVertex {
	struct FVector Position; // 0x0 (0xC)
	struct FPackedNormal Normal; // 0xC (0x4)
	struct FColor Color; // 0x10 (0x4)
};

// 0x9 
struct FFOscillator {
	float Amplitude; // 0x0 (0x4)
	float Frequency; // 0x4 (0x4)
	unsigned char InitialOffset; // 0x8 (0x1) (Enum = EInitialOscillatorOffset)
};

// 0x24 
struct FVOscillator {
	struct FFOscillator X; // 0x0 (0xC)
	struct FFOscillator Y; // 0xC (0xC)
	struct FFOscillator Z; // 0x18 (0xC)
};

// 0x24 
struct FROscillator {
	struct FFOscillator Pitch; // 0x0 (0xC)
	struct FFOscillator Yaw; // 0xC (0xC)
	struct FFOscillator Roll; // 0x18 (0xC)
};

// 0x90 (Alignment = 16)
struct FCameraShakeInstance {
	struct UCameraShake* SourceShake; // 0x0 (0x4)
	struct FName SourceShakeName; // 0x4 (0x8)
	float OscillatorTimeRemaining; // 0xC (0x4)
	BOOL bBlendingIn : 1; // 0x10 (0x4)
	const unsigned long: 0;
	float CurrentBlendInTime; // 0x14 (0x4)
	BOOL bBlendingOut : 1; // 0x18 (0x4)
	const unsigned long: 0;
	float CurrentBlendOutTime; // 0x1C (0x4)
	struct FVector LocSinOffset; // 0x20 (0xC)
	struct FVector RotSinOffset; // 0x2C (0xC)
	float FOVSinOffset; // 0x38 (0x4)
	float Scale; // 0x3C (0x4)
	struct UCameraAnimInst* AnimInst; // 0x40 (0x4)
	unsigned char PlaySpace; // 0x44 (0x1) (Enum = ECameraAnimPlaySpace)
	const unsigned char Unknown1[0xB]; // 0x45 (0xB) > LAST OFFSET
	struct FMatrix UserPlaySpaceMatrix; // 0x50 (0x40)
};

// 0x4 
struct FTextureGroupContainer {
	const BOOL TEXTUREGROUP_World : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_WorldNormalMap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_WorldSpecular : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Character : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_CharacterNormalMap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_CharacterSpecular : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Weapon : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_WeaponNormalMap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_WeaponSpecular : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Vehicle : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_VehicleNormalMap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_VehicleSpecular : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Cinematic : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Effects : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_EffectsNotFiltered : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Skybox : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_UI : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Lightmap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_RenderTarget : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_MobileFlattened : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_ProcBuilding_Face : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_ProcBuilding_LightMap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Shadowmap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_ColorLookupTable : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Terrain_Heightmap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Terrain_Weightmap : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_ImageBasedReflection : 1; // 0x0 (0x4)
	const BOOL TEXTUREGROUP_Bokeh : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x3C 
struct FTexture2DMipMap {
	struct FUntypedBulkData_Mirror Data; // 0x0 (0x34)
	int SizeX; // 0x34 (0x4)
	int SizeY; // 0x38 (0x4)
};

// 0xC 
struct FTextureLinkedListMirror {
	const struct FPointer Element; // 0x0 (0x4)
	const struct FPointer Next; // 0x4 (0x4)
	const struct FPointer PrevLink; // 0x8 (0x4)
};

// 0x14 
struct FCanvasIcon {
	struct UTexture* Texture; // 0x0 (0x4)
	float U; // 0x4 (0x4)
	float V; // 0x8 (0x4)
	float UL; // 0xC (0x4)
	float VL; // 0x10 (0x4)
};

// 0x24 
struct FDepthFieldGlowInfo {
	BOOL bEnableGlow : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FLinearColor GlowColor; // 0x4 (0x10)
	struct FVector2D GlowOuterRadius; // 0x14 (0x8)
	struct FVector2D GlowInnerRadius; // 0x1C (0x8)
};

// 0x28 
struct FFontRenderInfo {
	BOOL bClipText : 1; // 0x0 (0x4)
	BOOL bEnableShadow : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FDepthFieldGlowInfo GlowInfo; // 0x4 (0x24)
};

// 0x30 
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x0 (0x8)
	struct FVector2D V0_UV; // 0x8 (0x8)
	struct FVector2D V1_Pos; // 0x10 (0x8)
	struct FVector2D V1_UV; // 0x18 (0x8)
	struct FVector2D V2_Pos; // 0x20 (0x8)
	struct FVector2D V2_UV; // 0x28 (0x8)
};

// 0x28 
struct FTextSizingParameters {
	float DrawX; // 0x0 (0x4)
	float DrawY; // 0x4 (0x4)
	float DrawXL; // 0x8 (0x4)
	float DrawYL; // 0xC (0x4)
	struct FVector2D Scaling; // 0x10 (0x8)
	struct UFont* DrawFont; // 0x18 (0x4)
	struct FVector2D SpacingAdjust; // 0x1C (0x8)
	float ViewportHeight; // 0x24 (0x4)
};

// 0x14 
struct FWrappedStringElement {
	struct FString Value; // 0x0 (0xC)
	struct FVector2D LineExtent; // 0xC (0x8)
};

// 0x20 
struct FDamageTypeResistance {
	const struct FAttributeInitializationData ResistanceToImpact; // 0x0 (0x10)
	const struct FAttributeInitializationData ResistanceToStatusEffect; // 0x10 (0x10)
};

// 0x14 
struct FUIRangeData {
	float CurrentValue; // 0x0 (0x4)
	float MinValue; // 0x4 (0x4)
	float MaxValue; // 0x8 (0x4)
	float NudgeValue; // 0xC (0x4)
	BOOL bIntRange : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FTextureCoordinates {
	float U; // 0x0 (0x4)
	float V; // 0x4 (0x4)
	float UL; // 0x8 (0x4)
	float VL; // 0xC (0x4)
};

// 0x64 
struct FUIProviderScriptFieldValue {
	struct FName PropertyTag; // 0x0 (0x8)
	unsigned char PropertyType; // 0x8 (0x1) (Enum = EUIDataProviderFieldType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FString StringValue; // 0xC (0xC)
	struct USurface* ImageValue; // 0x18 (0x4)
	struct TArray_int ArrayValue; // 0x1C (0xC)
	struct FUIRangeData RangeValue; // 0x28 (0x14)
	struct FUniqueNetId NetIdValue; // 0x3C (0x18)
	struct FTextureCoordinates AtlasCoordinates; // 0x54 (0x10)
};

// 0x68 
struct FUIProviderFieldValue {
	struct FName PropertyTag; // 0x0 (0x8)
	unsigned char PropertyType; // 0x8 (0x1) (Enum = EUIDataProviderFieldType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FString StringValue; // 0xC (0xC)
	struct USurface* ImageValue; // 0x18 (0x4)
	struct TArray_int ArrayValue; // 0x1C (0xC)
	struct FUIRangeData RangeValue; // 0x28 (0x14)
	struct FUniqueNetId NetIdValue; // 0x3C (0x18)
	struct FTextureCoordinates AtlasCoordinates; // 0x54 (0x10)
	const struct FPointer CustomStringNode; // 0x64 (0x4)
};

// 0x24 
struct FInputKeyAction {
	struct FName InputKeyName; // 0x0 (0x8)
	unsigned char InputKeyState; // 0x8 (0x1) (Enum = EInputEvent)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct TArray_FSeqOpOutputInputLink TriggeredOps; // 0xC (0xC)
	struct TArray_USequenceOpPtr ActionsToExecute; // 0x18 (0xC)
};

// 0x30 
struct FUIDataStoreBinding {
	const struct FScriptInterface Subscriber; // 0x0 (0x8)
	const unsigned char RequiredFieldType; // 0x8 (0x1) (Enum = EUIDataProviderFieldType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct FString MarkupString; // 0xC (0xC)
	const int BindingIndex; // 0x18 (0x4)
	const struct FName DataStoreName; // 0x1C (0x8)
	const struct FName DataStoreField; // 0x24 (0x8)
	const struct UUIDataStore* ResolvedDataStore; // 0x2C (0x4)
};

// 0x20 
struct FInputEventParameters {
	const int PlayerIndex; // 0x0 (0x4)
	const int ControllerId; // 0x4 (0x4)
	const struct FName InputKeyName; // 0x8 (0x8)
	const unsigned char EventType; // 0x10 (0x1) (Enum = EInputEvent)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const float InputDelta; // 0x14 (0x4)
	const float DeltaTime; // 0x18 (0x4)
	const BOOL bAltPressed : 1; // 0x1C (0x4)
	const BOOL bCtrlPressed : 1; // 0x1C (0x4)
	const BOOL bShiftPressed : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FSubscribedInputEventParameters {
	const int PlayerIndex; // 0x0 (0x4)
	const int ControllerId; // 0x4 (0x4)
	const struct FName InputKeyName; // 0x8 (0x8)
	const unsigned char EventType; // 0x10 (0x1) (Enum = EInputEvent)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const float InputDelta; // 0x14 (0x4)
	const float DeltaTime; // 0x18 (0x4)
	const BOOL bAltPressed : 1; // 0x1C (0x4)
	const BOOL bCtrlPressed : 1; // 0x1C (0x4)
	const BOOL bShiftPressed : 1; // 0x1C (0x4)
	const unsigned long: 0;
	const struct FName InputAliasName; // 0x20 (0x8)
};

// 0x24 
struct FUIAxisEmulationDefinition {
	struct FName AxisInputKey; // 0x0 (0x8)
	struct FName AdjacentAxisInputKey; // 0x8 (0x8)
	BOOL bEmulateButtonPress : 1; // 0x10 (0x4)
	const unsigned long: 0;
	struct FName InputKeyToEmulate[2]; // 0x14 (0x10)
};

// 0x9 
struct FRawInputKeyEventData {
	struct FName InputKeyName; // 0x0 (0x8)
	unsigned char ModifierKeyFlags; // 0x8 (0x1)
};

// 0x18 
struct FAutoCompleteCommand {
	struct FString Command; // 0x0 (0xC)
	struct FString Desc; // 0xC (0xC)
};

// 0x1C 
struct FAutoCompleteNode {
	int IndexChar; // 0x0 (0x4)
	struct TArray_int AutoCompleteListIndices; // 0x4 (0xC)
	struct TArray_FPointer ChildNodes; // 0x10 (0xC)
};

// 0x34 
struct FCovPosInfo {
	struct ACoverLink* Link; // 0x0 (0x4)
	int LtSlotIdx; // 0x4 (0x4)
	int RtSlotIdx; // 0x8 (0x4)
	float LtToRtPct; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Normal; // 0x1C (0xC)
	struct FVector Tangent; // 0x28 (0xC)
};

// 0x4 
struct FFireLinkItem {
	unsigned char SrcType; // 0x0 (0x1) (Enum = ECoverType)
	unsigned char SrcAction; // 0x1 (0x1) (Enum = ECoverAction)
	unsigned char DestType; // 0x2 (0x1) (Enum = ECoverType)
	unsigned char DestAction; // 0x3 (0x1) (Enum = ECoverAction)
};

// 0x14 
struct FFireLink {
	struct TArray_unsigned_char Interactions; // 0x0 (0xC)
	const int PackedProperties_CoverPairRefAndDynamicInfo; // 0xC (0x4)
	BOOL bFallbackLink : 1; // 0x10 (0x4)
	BOOL bDynamicIndexInited : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FDynamicLinkInfo {
	struct FVector LastTargetLocation; // 0x0 (0xC)
	struct FVector LastSrcLocation; // 0xC (0xC)
};

// 0x18 
struct FCoverReference {
	struct AActor* Actor; // 0x0 (0x4)
	const struct FGuid Guid; // 0x4 (0x10)
	int SlotIdx; // 0x14 (0x4)
};

// 0x19 
struct FExposedLink {
	const struct FCoverReference TargetActor; // 0x0 (0x18)
	unsigned char ExposedScale; // 0x18 (0x1)
};

// 0x54 
struct FSlotMoveRef {
	struct FPolyReference Poly; // 0x0 (0x1C)
	struct FBasedPosition Dest; // 0x1C (0x34)
	int Direction; // 0x50 (0x4)
};

// 0x8 
struct FCoverInfo {
	struct ACoverLink* Link; // 0x0 (0x4)
	int SlotIdx; // 0x4 (0x4)
};

// 0x74 
struct FCoverSlot {
	struct APawn* SlotOwner; // 0x0 (0x4)
	float SlotValidAfterTime; // 0x4 (0x4)
	unsigned char ForceCoverType; // 0x8 (0x1) (Enum = ECoverType)
	unsigned char CoverType; // 0x9 (0x1) (Enum = ECoverType)
	unsigned char LocationDescription; // 0xA (0x1) (Enum = ECoverLocationDescription)
	const unsigned char Unknown1[0x1]; // 0xB (0x1) > LAST OFFSET
	struct FVector LocationOffset; // 0xC (0xC)
	struct FRotator RotationOffset; // 0x18 (0xC)
	struct TArray_unsigned_char Actions; // 0x24 (0xC)
	struct TArray_FFireLink FireLinks; // 0x30 (0xC)
	struct TArray_FFireLink RejectedFireLinks; // 0x3C (0xC)
	struct TArray_int ExposedCoverPackedProperties; // 0x48 (0xC)
	int TurnTargetPackedProperties; // 0x54 (0x4)
	struct TArray_FSlotMoveRef SlipRefs; // 0x58 (0xC)
	struct TArray_FCoverInfo OverlapClaimsList; // 0x64 (0xC)
	BOOL bLeanLeft : 1; // 0x70 (0x4)
	BOOL bLeanRight : 1; // 0x70 (0x4)
	BOOL bForceCanPopUp : 1; // 0x70 (0x4)
	BOOL bCanPopUp : 1; // 0x70 (0x4)
	BOOL bCanMantle : 1; // 0x70 (0x4)
	BOOL bCanClimbUp : 1; // 0x70 (0x4)
	BOOL bForceCanCoverSlip_Left : 1; // 0x70 (0x4)
	BOOL bForceCanCoverSlip_Right : 1; // 0x70 (0x4)
	BOOL bCanCoverSlip_Left : 1; // 0x70 (0x4)
	BOOL bCanCoverSlip_Right : 1; // 0x70 (0x4)
	BOOL bCanSwatTurn_Left : 1; // 0x70 (0x4)
	BOOL bCanSwatTurn_Right : 1; // 0x70 (0x4)
	BOOL bEnabled : 1; // 0x70 (0x4)
	BOOL bAllowPopup : 1; // 0x70 (0x4)
	BOOL bAllowMantle : 1; // 0x70 (0x4)
	BOOL bAllowCoverSlip : 1; // 0x70 (0x4)
	BOOL bAllowClimbUp : 1; // 0x70 (0x4)
	BOOL bAllowSwatTurn : 1; // 0x70 (0x4)
	BOOL bForceNoGroundAdjust : 1; // 0x70 (0x4)
	BOOL bPlayerOnly : 1; // 0x70 (0x4)
	BOOL bPreferLeanOverPopup : 1; // 0x70 (0x4)
	BOOL bDestructible : 1; // 0x70 (0x4)
	BOOL bSelected : 1; // 0x70 (0x4)
	BOOL bFailedToFindSurface : 1; // 0x70 (0x4)
	const unsigned long: 0;
};

// 0x34 
struct FCoverMeshes {
	struct UStaticMesh* Base; // 0x0 (0x4)
	struct UStaticMesh* LeanLeft; // 0x4 (0x4)
	struct UStaticMesh* LeanRight; // 0x8 (0x4)
	struct UStaticMesh* LeanLeftPref; // 0xC (0x4)
	struct UStaticMesh* LeanRightPref; // 0x10 (0x4)
	struct UStaticMesh* Climb; // 0x14 (0x4)
	struct UStaticMesh* Mantle; // 0x18 (0x4)
	struct UStaticMesh* SlipLeft; // 0x1C (0x4)
	struct UStaticMesh* SlipRight; // 0x20 (0x4)
	struct UStaticMesh* SwatLeft; // 0x24 (0x4)
	struct UStaticMesh* SwatRight; // 0x28 (0x4)
	struct UStaticMesh* PopUp; // 0x2C (0x4)
	struct UStaticMesh* PlayerOnly; // 0x30 (0x4)
};

// 0x2 
struct FManualCoverTypeInfo {
	unsigned char SlotIndex; // 0x0 (0x1)
	unsigned char ManualCoverType; // 0x1 (0x1) (Enum = ECoverType)
};

// 0x34 
struct FCoverReplicationInfo {
	struct ACoverLink* Link; // 0x0 (0x4)
	struct TArray_unsigned_char SlotsEnabled; // 0x4 (0xC)
	struct TArray_unsigned_char SlotsDisabled; // 0x10 (0xC)
	struct TArray_unsigned_char SlotsAdjusted; // 0x1C (0xC)
	struct TArray_FManualCoverTypeInfo SlotsCoverTypeChanged; // 0x28 (0xC)
};

// 0x8 
struct FCullDistanceSizePair {
	float Size; // 0x0 (0x4)
	float CullDistance; // 0x4 (0x4)
};

// 0x15 
struct FPresetGeneratedPoint {
	float KeyIn; // 0x0 (0x4)
	float KeyOut; // 0x4 (0x4)
	BOOL TangentsValid : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float TangentIn; // 0xC (0x4)
	float TangentOut; // 0x10 (0x4)
	unsigned char IntepMode; // 0x14 (0x1) (Enum = EInterpCurveMode)
};

// 0x1C 
struct FDamageInfo {
	struct AController* Instigator; // 0x0 (0x4)
	struct FVector HitLocation; // 0x4 (0xC)
	struct UClass* DamageType; // 0x10 (0x4)
	struct UDamageTypeDefinition* DamageTypeDefinition; // 0x14 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x18 (0x4)
};

// 0x18 
struct FReflectionInfo {
	unsigned char ReflectionType; // 0x0 (0x1) (Enum = EReflectionType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float ReflectedDamageScale; // 0x4 (0x4)
	float ReflectedDamageToReflector; // 0x8 (0x4)
	BOOL bReflectTowardAttacker : 1; // 0xC (0x4)
	const unsigned long: 0;
	float ReflectedInaccuracyModifier; // 0x10 (0x4)
	BOOL bReflectProjectiles : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x78 
struct FDamageEventSummary {
	float InitialDamage; // 0x0 (0x4)
	float AIDamageScaleReduction; // 0x4 (0x4)
	float DamageSourceReduction; // 0x8 (0x4)
	float InstigatorDamageTypeReduction; // 0xC (0x4)
	float ExpLevelDifferenceReduction; // 0x10 (0x4)
	float RecipientDamageTypeReduction; // 0x14 (0x4)
	float HitRegionReduction; // 0x18 (0x4)
	float ShieldReduction; // 0x1C (0x4)
	float IntrinsicArmorReduction; // 0x20 (0x4)
	float DamageSurfaceReduction; // 0x24 (0x4)
	float HitRegionCapReduction; // 0x28 (0x4)
	float ProtectionTimerReduction; // 0x2C (0x4)
	float ProjectileReflectionReduction; // 0x30 (0x4)
	float DamageSeverityPercent; // 0x34 (0x4)
	float DamageDealtToShields; // 0x38 (0x4)
	float ExtraDamageDealtDueToAmplify; // 0x3C (0x4)
	float FinalDamage; // 0x40 (0x4)
	float PreviousHealth; // 0x44 (0x4)
	struct UBaseHitRegionDefinition* HitRegion; // 0x48 (0x4)
	BOOL bWasCrit : 1; // 0x4C (0x4)
	BOOL bWasInjured : 1; // 0x4C (0x4)
	BOOL bWasMaxShield : 1; // 0x4C (0x4)
	BOOL bWasMaxHealth : 1; // 0x4C (0x4)
	BOOL bWasOneShotKill : 1; // 0x4C (0x4)
	const unsigned long: 0;
	struct FReflectionInfo ReflectionData; // 0x50 (0x18)
	unsigned char DamageTakenSkillEventsTriggered[8]; // 0x68 (0x8)
	unsigned char DamageDealtSkillEventsTriggered[8]; // 0x70 (0x8)
};

// 0x10 
struct FPlayerDataStoreGroup {
	const struct ULocalPlayer* PlayerOwner; // 0x0 (0x4)
	const struct TArray_UUIDataStorePtr DataStores; // 0x4 (0xC)
};

// 0x18 
struct FKeyBind {
	struct FName Name; // 0x0 (0x8)
	struct FString Command; // 0x8 (0xC)
	BOOL Control : 1; // 0x14 (0x4)
	BOOL Shift : 1; // 0x14 (0x4)
	BOOL Alt : 1; // 0x14 (0x4)
	BOOL LeftTrigger : 1; // 0x14 (0x4)
	BOOL RightTrigger : 1; // 0x14 (0x4)
	BOOL bIgnoreCtrl : 1; // 0x14 (0x4)
	BOOL bIgnoreShift : 1; // 0x14 (0x4)
	BOOL bIgnoreAlt : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FDecalReceiver {
	const struct UPrimitiveComponent* Component; // 0x0 (0x4)
	const struct FPointer RenderData; // 0x4 (0x4)
};

// 0x8 
struct FActiveDecalInfo {
	struct UDecalComponent* Decal; // 0x0 (0x4)
	float LifetimeRemaining; // 0x4 (0x4)
};

// 0x8 
struct FLightmassMaterialInterfaceSettings {
	float DistanceFieldPenumbraScale; // 0x0 (0x4)
	BOOL bCastShadowAsMasked : 1; // 0x4 (0x4)
	BOOL bOverrideCastShadowAsMasked : 1; // 0x4 (0x4)
	BOOL bOverrideEmissiveBoost : 1; // 0x4 (0x4)
	BOOL bOverrideDiffuseBoost : 1; // 0x4 (0x4)
	BOOL bOverrideSpecularBoost : 1; // 0x4 (0x4)
	BOOL bOverrideExportResolutionScale : 1; // 0x4 (0x4)
	BOOL bOverrideDistanceFieldPenumbraScale : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FMaterialInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
};

// 0x24 
struct FColorMaterialInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
	BOOL UseConstant : 1; // 0x1C (0x4)
	const unsigned long: 0;
	struct FColor Constant; // 0x20 (0x4)
};

// 0x24 
struct FScalarMaterialInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
	BOOL UseConstant : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float Constant; // 0x20 (0x4)
};

// 0x2C 
struct FVectorMaterialInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
	BOOL UseConstant : 1; // 0x1C (0x4)
	const unsigned long: 0;
	struct FVector Constant; // 0x20 (0xC)
};

// 0x28 
struct FVector2MaterialInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
	BOOL UseConstant : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float ConstantX; // 0x20 (0x4)
	float ConstantY; // 0x24 (0x4)
};

// 0x4 
struct APhysicsVolume_FCheckpointRecord {
	BOOL bPainCausing : 1; // 0x0 (0x4)
	BOOL bActive : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FMarketplaceOffer {
	int OfferId; // 0x0 (0x4)
	int ContentCategory; // 0x4 (0x4)
	struct FString OfferName; // 0x8 (0xC)
	struct TArray_unsigned_char ContentId; // 0x14 (0xC)
	BOOL bIsUnrestrictedLicense : 1; // 0x20 (0x4)
	const unsigned long: 0;
	int LicenseMask; // 0x24 (0x4)
	BOOL bUserHasPurchased : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x40 
struct FInstalledContentInfo {
	unsigned char ContentType; // 0x0 (0x1) (Enum = EInstalledContentType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString ContentName; // 0x4 (0xC)
	struct FString ContentPath; // 0x10 (0xC)
	struct FString Filename; // 0x1C (0xC)
	int DeviceID; // 0x28 (0x4)
	int LicenseMask; // 0x2C (0x4)
	BOOL bHasSeen : 1; // 0x30 (0x4)
	const unsigned long: 0;
	struct TArray_FAppIdLicenseInfo CachedAppIdInfo; // 0x34 (0xC)
};

// 0x4 
struct FMarketplaceOfferDownloadState {
	BOOL bIsDownloaded : 1; // 0x0 (0x4)
	BOOL bIsInstalled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x41 
struct FRejectedContentInfo {
	unsigned char ContentType; // 0x0 (0x1) (Enum = EInstalledContentType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString ContentName; // 0x4 (0xC)
	struct FString ContentPath; // 0x10 (0xC)
	struct FString Filename; // 0x1C (0xC)
	int DeviceID; // 0x28 (0x4)
	int LicenseMask; // 0x2C (0x4)
	BOOL bHasSeen : 1; // 0x30 (0x4)
	const unsigned long: 0;
	struct TArray_FAppIdLicenseInfo CachedAppIdInfo; // 0x34 (0xC)
	unsigned char Result; // 0x40 (0x1) (Enum = EInstallDLCResult)
};

// 0x8 
struct FDlcContentId {
	int PackageId; // 0x0 (0x4)
	int ContentId; // 0x4 (0x4)
};

// 0xC 
struct FDlcContentInfo {
	struct FDlcContentId ContentId; // 0x0 (0x8)
	BOOL bIsInstalled : 1; // 0x8 (0x4)
	BOOL bIsLicensed : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FDlcCompatibilityData {
	int A; // 0x0 (0x4)
	int B; // 0x4 (0x4)
	int C; // 0x8 (0x4)
	int D; // 0xC (0x4)
};

// 0x10 
struct FDlcCompatibilityDataEx {
	int A; // 0x0 (0x4)
	int B; // 0x4 (0x4)
	int C; // 0x8 (0x4)
	int D; // 0xC (0x4)
};

// 0x1C 
struct ADynamicBlockingVolume_FCheckpointRecord {
	struct FVector Location; // 0x0 (0xC)
	struct FRotator Rotation; // 0xC (0xC)
	BOOL bCollideActors : 1; // 0x18 (0x4)
	BOOL bBlockActors : 1; // 0x18 (0x4)
	BOOL bNeedsReplication : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x3C 
struct FViewParticleEmitterInstanceMotionBlurInfo {
	const struct FMap_Mirror EmitterInstanceMBInfoMap; // 0x0 (0x3C)
};

// 0x40 
struct FParticleSysParam {
	struct FName Name; // 0x0 (0x8)
	unsigned char ParamType; // 0x8 (0x1) (Enum = EParticleSysParamType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	float Scalar; // 0xC (0x4)
	float Scalar_Low; // 0x10 (0x4)
	struct FVector Vector; // 0x14 (0xC)
	struct FVector Vector_Low; // 0x20 (0xC)
	struct FColor Color; // 0x2C (0x4)
	struct AActor* Actor; // 0x30 (0x4)
	struct UMaterialInterface* Material; // 0x34 (0x4)
	struct FName Socket; // 0x38 (0x8)
};

// 0x34 
struct FParticleEventData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
};

// 0x34 
struct FParticleEventSpawnData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
};

// 0x38 
struct FParticleEventDeathData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
	float ParticleTime; // 0x34 (0x4)
};

// 0x54 
struct FParticleEventCollideData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
	float ParticleTime; // 0x34 (0x4)
	struct FVector Normal; // 0x38 (0xC)
	float Time; // 0x44 (0x4)
	int Item; // 0x48 (0x4)
	struct FName BoneName; // 0x4C (0x8)
};

// 0x38 
struct FParticleEventTraceData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
	float ParticleTime; // 0x34 (0x4)
};

// 0x44 
struct FParticleEventKismetData {
	int Type; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
	float EmitterTime; // 0xC (0x4)
	struct FVector Location; // 0x10 (0xC)
	struct FVector Direction; // 0x1C (0xC)
	struct FVector Velocity; // 0x28 (0xC)
	BOOL UsePSysCompLocation : 1; // 0x34 (0x4)
	const unsigned long: 0;
	struct FVector Normal; // 0x38 (0xC)
};

// 0x3C 
struct FParticleEmitterInstanceMotionBlurInfo {
	const struct FMap_Mirror ParticleMBInfoMap; // 0x0 (0x3C)
};

// 0x0 
struct FParticleEmitterInstance {
};

// 0x4 
struct AEmitter_FCheckpointRecord {
	BOOL bIsActive : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FEmitterBaseInfo {
	struct UParticleSystemComponent* PSC; // 0x0 (0x4)
	struct AActor* Base; // 0x4 (0x4)
	struct FVector RelativeLocation; // 0x8 (0xC)
	struct FRotator RelativeRotation; // 0x14 (0xC)
	BOOL bInheritBaseScale : 1; // 0x20 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FParticleSystemLOD {
	BOOL bLit : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FStatColorMapEntry {
	float In; // 0x0 (0x4)
	struct FColor Out; // 0x4 (0x4)
};

// 0x1C 
struct FStatColorMapping {
	struct FString StatName; // 0x0 (0xC)
	struct TArray_FStatColorMapEntry ColorMap; // 0xC (0xC)
	BOOL DisableBlend : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FDropNoteInfo {
	struct FVector Location; // 0x0 (0xC)
	struct FRotator Rotation; // 0xC (0xC)
	struct FString Comment; // 0x18 (0xC)
};

// 0x8 
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; // 0x0 (0x4)
	int MaterialIndex; // 0x4 (0x4)
};

// 0x4 
struct FPostProcessMaterialRef {
	struct UMaterialEffect* Effect; // 0x0 (0x4)
};

// 0x1C 
struct FMaterialReferenceList {
	struct UMaterialInterface* TargetMaterial; // 0x0 (0x4)
	struct TArray_FPrimitiveMaterialRef AffectedMaterialRefs; // 0x4 (0xC)
	struct TArray_FPostProcessMaterialRef AffectedPPChainMaterialRefs; // 0x10 (0xC)
};

// 0x20 
struct FVelocityObstacleStat {
	struct FVector Position; // 0x0 (0xC)
	struct FVector Velocity; // 0xC (0xC)
	float Radius; // 0x18 (0x4)
	int Priority; // 0x1C (0x4)
};

// 0x24 
struct FGroupAnimationAndSoundIdentifier {
	struct FString SoundNodeWaveName; // 0x0 (0xC)
	struct FString FaceFXGroupName; // 0xC (0xC)
	struct FString FaceFXAnimName; // 0x18 (0xC)
};

// 0x4 
struct AFogVolumeDensityInfo_FCheckpointRecord {
	BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x34 
struct FFoliageInstanceBase {
	struct FVector Location; // 0x0 (0xC)
	struct FVector XAxis; // 0xC (0xC)
	struct FVector YAxis; // 0x18 (0xC)
	struct FVector ZAxis; // 0x24 (0xC)
	float DistanceFactorSquared; // 0x30 (0x4)
};

// 0x40 
struct FStoredFoliageInstance {
	struct FVector Location; // 0x0 (0xC)
	struct FVector XAxis; // 0xC (0xC)
	struct FVector YAxis; // 0x18 (0xC)
	struct FVector ZAxis; // 0x24 (0xC)
	float DistanceFactorSquared; // 0x30 (0x4)
	struct FColor StaticLighting[3]; // 0x34 (0xC)
};

// 0x48 
struct FFoliageMesh {
	struct UStaticMesh* InstanceStaticMesh; // 0x0 (0x4)
	struct UMaterialInterface* Material; // 0x4 (0x4)
	float MaxDrawRadius; // 0x8 (0x4)
	float MinTransitionRadius; // 0xC (0x4)
	float MinThinningRadius; // 0x10 (0x4)
	struct FVector MinScale; // 0x14 (0xC)
	struct FVector MaxScale; // 0x20 (0xC)
	float MinUniformScale; // 0x2C (0x4)
	float MaxUniformScale; // 0x30 (0x4)
	float SwayScale; // 0x34 (0x4)
	int Seed; // 0x38 (0x4)
	float SurfaceAreaPerInstance; // 0x3C (0x4)
	BOOL bCreateInstancesOnBSP : 1; // 0x40 (0x4)
	BOOL bCreateInstancesOnStaticMeshes : 1; // 0x40 (0x4)
	BOOL bCreateInstancesOnTerrain : 1; // 0x40 (0x4)
	const unsigned long: 0;
	struct UFoliageComponent* Component; // 0x44 (0x4)
};

// 0x94 
struct FFontImportOptionsData {
	struct FString FontName; // 0x0 (0xC)
	float Height; // 0xC (0x4)
	BOOL bEnableAntialiasing : 1; // 0x10 (0x4)
	BOOL bEnableBold : 1; // 0x10 (0x4)
	BOOL bEnableItalic : 1; // 0x10 (0x4)
	BOOL bEnableUnderline : 1; // 0x10 (0x4)
	BOOL bAlphaOnly : 1; // 0x10 (0x4)
	const unsigned long: 0;
	unsigned char CharacterSet; // 0x14 (0x1) (Enum = EFontImportCharacterSet)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	struct FString Chars; // 0x18 (0xC)
	struct FString UnicodeRange; // 0x24 (0xC)
	struct FString CharsFilePath; // 0x30 (0xC)
	struct FString CharsFileWildcard; // 0x3C (0xC)
	BOOL bCreatePrintableOnly : 1; // 0x48 (0x4)
	BOOL bIncludeASCIIRange : 1; // 0x48 (0x4)
	const unsigned long: 0;
	struct FLinearColor ForegroundColor; // 0x4C (0x10)
	BOOL bEnableDropShadow : 1; // 0x5C (0x4)
	const unsigned long: 0;
	int TexturePageWidth; // 0x60 (0x4)
	int TexturePageMaxHeight; // 0x64 (0x4)
	int XPadding; // 0x68 (0x4)
	int YPadding; // 0x6C (0x4)
	int ExtendBoxTop; // 0x70 (0x4)
	int ExtendBoxBottom; // 0x74 (0x4)
	int ExtendBoxRight; // 0x78 (0x4)
	int ExtendBoxLeft; // 0x7C (0x4)
	BOOL bEnableLegacyMode : 1; // 0x80 (0x4)
	const unsigned long: 0;
	int Kerning; // 0x84 (0x4)
	BOOL bUseDistanceFieldAlpha : 1; // 0x88 (0x4)
	const unsigned long: 0;
	int DistanceFieldScaleFactor; // 0x8C (0x4)
	float DistanceFieldScanRadiusScale; // 0x90 (0x4)
};

// 0x18 
struct FFontCharacter {
	int StartU; // 0x0 (0x4)
	int StartV; // 0x4 (0x4)
	int USize; // 0x8 (0x4)
	int VSize; // 0xC (0x4)
	unsigned char TextureIndex; // 0x10 (0x1)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	int VerticalOffset; // 0x14 (0x4)
};

// 0x8 
struct FWaveformSample {
	unsigned char LeftAmplitude; // 0x0 (0x1)
	unsigned char RightAmplitude; // 0x1 (0x1)
	unsigned char LeftFunction; // 0x2 (0x1) (Enum = EWaveformFunction)
	unsigned char RightFunction; // 0x3 (0x1) (Enum = EWaveformFunction)
	float Duration; // 0x4 (0x4)
};

// 0xC 
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x0 (0x8)
	BOOL bShouldBeLoaded : 1; // 0x8 (0x4)
	BOOL bShouldBeVisible : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FFullyLoadedPackagesInfo {
	unsigned char FullyLoadType; // 0x0 (0x1) (Enum = EFullyLoadPackageType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString Tag; // 0x4 (0xC)
	struct TArray_FName PackagesToLoad; // 0x10 (0xC)
	struct TArray_UObjectPtr LoadedObjects; // 0x1C (0xC)
};

// 0xC 
struct FNamedNetDriver {
	struct FName NetDriverName; // 0x0 (0x8)
	const struct FPointer NetDriver; // 0x8 (0x4)
};

// 0x18 
struct FAnimTag {
	struct FString Tag; // 0x0 (0xC)
	struct TArray_FString Contains; // 0xC (0xC)
};

// 0x44 
struct FURL {
	struct FString Protocol; // 0x0 (0xC)
	struct FString Host; // 0xC (0xC)
	int Port; // 0x18 (0x4)
	struct FString Map; // 0x1C (0xC)
	struct TArray_FString Op; // 0x28 (0xC)
	struct FString Portal; // 0x34 (0xC)
	int Valid; // 0x40 (0x4)
};

// 0x18 
struct FGameClassShortName {
	struct FString ShortName; // 0x0 (0xC)
	struct FString GameClassName; // 0xC (0xC)
};

// 0x34 
struct FGameTypePrefix {
	struct FString Prefix; // 0x0 (0xC)
	BOOL bUsesCommonPackage : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FString GameType; // 0x10 (0xC)
	struct TArray_FString AdditionalGameTypes; // 0x1C (0xC)
	struct TArray_FString ForcedObjects; // 0x28 (0xC)
};

// 0x30 
struct FPlayerInformation {
	struct FName ControllerName; // 0x0 (0x8)
	struct FString PlayerName; // 0x8 (0xC)
	struct FUniqueNetId UniqueId; // 0x14 (0x18)
	BOOL bIsBot : 1; // 0x2C (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FTeamInformation {
	int TeamIndex; // 0x0 (0x4)
	struct FString TeamName; // 0x4 (0xC)
	struct FColor TeamColor; // 0x10 (0x4)
	int MaxSize; // 0x14 (0x4)
};

// 0x8 
struct FGameStatGroup {
	unsigned char Group; // 0x0 (0x1) (Enum = EGameStatGroups)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int Level; // 0x4 (0x4)
};

// 0x18 
struct FGameplayEventMetaData {
	const int EventID; // 0x0 (0x4)
	const struct FName EventName; // 0x4 (0x8)
	const struct FGameStatGroup StatGroup; // 0xC (0x8)
	const int EventDataType; // 0x14 (0x4)
};

// 0x8 
struct FWeaponClassEventData {
	struct FName WeaponClassName; // 0x0 (0x8)
};

// 0x8 
struct FDamageClassEventData {
	struct FName DamageClassName; // 0x0 (0x8)
};

// 0x8 
struct FProjectileClassEventData {
	struct FName ProjectileClassName; // 0x0 (0x8)
};

// 0x8 
struct FPawnClassEventData {
	struct FName PawnClassName; // 0x0 (0x8)
};

// 0x2C 
struct FGameplayEventsHeader {
	const int EngineVersion; // 0x0 (0x4)
	const int StatsWriterVersion; // 0x4 (0x4)
	const int StreamOffset; // 0x8 (0x4)
	const int AggregateOffset; // 0xC (0x4)
	const int FooterOffset; // 0x10 (0x4)
	const int TotalStreamSize; // 0x14 (0x4)
	const int FileSize; // 0x18 (0x4)
	struct FString FilterClass; // 0x1C (0xC)
	int Flags; // 0x28 (0x4)
};

// 0x80 
struct FGameSessionInformation {
	int AppTitleID; // 0x0 (0x4)
	int PlatformType; // 0x4 (0x4)
	struct FString Language; // 0x8 (0xC)
	const struct FString GameplaySessionTimestamp; // 0x14 (0xC)
	const float GameplaySessionStartTime; // 0x20 (0x4)
	const float GameplaySessionEndTime; // 0x24 (0x4)
	const BOOL bGameplaySessionInProgress : 1; // 0x28 (0x4)
	const unsigned long: 0;
	const struct FString GameplaySessionID; // 0x2C (0xC)
	const struct FString GameClassName; // 0x38 (0xC)
	const struct FString MapName; // 0x44 (0xC)
	const struct FString MapURL; // 0x50 (0xC)
	const int SessionInstance; // 0x5C (0x4)
	const int GameTypeId; // 0x60 (0x4)
	const struct FUniqueNetId OwningNetId; // 0x64 (0x18)
	int PlaylistId; // 0x7C (0x4)
};

// 0xC 
struct FMusicStateInfo {
	unsigned char State; // 0x0 (0x1) (Enum = EMusicState)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct UAkState* CustomCombatMusicAkState; // 0x4 (0x4)
	struct UAkState* CustomAmbientMusicAkState; // 0x8 (0x4)
};

// 0x24 
struct FMusicTrackStruct {
	struct USoundCue* TheSoundCue; // 0x0 (0x4)
	BOOL bAutoPlay : 1; // 0x4 (0x4)
	BOOL bPersistentAcrossLevels : 1; // 0x4 (0x4)
	const unsigned long: 0;
	float FadeInTime; // 0x8 (0x4)
	float FadeInVolumeLevel; // 0xC (0x4)
	float FadeOutTime; // 0x10 (0x4)
	float FadeOutVolumeLevel; // 0x14 (0x4)
	struct FString MP3Filename; // 0x18 (0xC)
};

// 0x18 
struct FNavMeshPathGoalEvaluatorCacheDatum {
	int ListIdx; // 0x0 (0x4)
	struct UNavMeshPathGoalEvaluator* List[5]; // 0x4 (0x14)
};

// 0x18 
struct FPhysXEmitterVerticalProperties {
	BOOL bDisableLod : 1; // 0x0 (0x4)
	const unsigned long: 0;
	int ParticlesLodMin; // 0x4 (0x4)
	int ParticlesLodMax; // 0x8 (0x4)
	int PacketsPerPhysXParticleSystemMax; // 0xC (0x4)
	BOOL bApplyCylindricalPacketCulling : 1; // 0x10 (0x4)
	const unsigned long: 0;
	float SpawnLodVsFifoBias; // 0x14 (0x4)
};

// 0x18 
struct FPhysXVerticalProperties {
	struct FPhysXEmitterVerticalProperties Emitters; // 0x0 (0x18)
};

// 0x1C 
struct FHostMigrationState {
	unsigned char HostMigrationProgress; // 0x0 (0x1) (Enum = EHostMigrationProgress)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float HostMigrationElapsedTime; // 0x4 (0x4)
	float HostMigrationTravelCountdown; // 0x8 (0x4)
	struct FString HostMigrationTravelURL; // 0xC (0xC)
	BOOL bHostMigrationEnabled : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FNavigationArea {
	const struct FName AreaName; // 0x0 (0x8)
	const struct FColor AreaColor; // 0x8 (0x4)
};

// 0x1C 
struct FWorldFractureSettings {
	float ChanceOfPhysicsChunkOverride; // 0x0 (0x4)
	BOOL bEnableChanceOfPhysicsChunkOverride : 1; // 0x4 (0x4)
	BOOL bLimitExplosionChunkSize : 1; // 0x4 (0x4)
	const unsigned long: 0;
	float MaxExplosionChunkSize; // 0x8 (0x4)
	BOOL bLimitDamageChunkSize : 1; // 0xC (0x4)
	const unsigned long: 0;
	float MaxDamageChunkSize; // 0x10 (0x4)
	int MaxNumFacturedChunksToSpawnInAFrame; // 0x14 (0x4)
	float FractureExplosionVelScale; // 0x18 (0x4)
};

// 0x18 
struct FNavMeshPathConstraintCacheDatum {
	int ListIdx; // 0x0 (0x4)
	struct UNavMeshPathConstraint* List[5]; // 0x4 (0x14)
};

// 0x3C 
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0 (0x4)
	int NumIndirectLightingBounces; // 0x4 (0x4)
	struct FColor EnvironmentColor; // 0x8 (0x4)
	float EnvironmentIntensity; // 0xC (0x4)
	float EmissiveBoost; // 0x10 (0x4)
	float DiffuseBoost; // 0x14 (0x4)
	float SpecularBoost; // 0x18 (0x4)
	float IndirectNormalInfluenceBoost; // 0x1C (0x4)
	BOOL bUseAmbientOcclusion : 1; // 0x20 (0x4)
	const unsigned long: 0;
	float DirectIlluminationOcclusionFraction; // 0x24 (0x4)
	float IndirectIlluminationOcclusionFraction; // 0x28 (0x4)
	float OcclusionExponent; // 0x2C (0x4)
	float FullyOccludedSamplesFraction; // 0x30 (0x4)
	float MaxOcclusionDistance; // 0x34 (0x4)
	BOOL bVisualizeMaterialDiffuse : 1; // 0x38 (0x4)
	BOOL bVisualizeAmbientOcclusion : 1; // 0x38 (0x4)
	BOOL bCompressShadowmap : 1; // 0x38 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FScreenMessageString {
	struct FQWord Key; // 0x0 (0x8)
	struct FString ScreenMessage; // 0x8 (0xC)
	struct FColor DisplayColor; // 0x14 (0x4)
	float TimeToDisplay; // 0x18 (0x4)
	float CurrentTimeDisplayed; // 0x1C (0x4)
};

// 0x10 
struct FApexModuleDestructibleSettings {
	int MaxChunkIslandCount; // 0x0 (0x4)
	int MaxRrbActorCount; // 0x4 (0x4)
	float MaxChunkSeparationLOD; // 0x8 (0x4)
	BOOL bOverrideMaxChunkSeparationLOD : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FPhysXSimulationProperties {
	BOOL bUseHardware : 1; // 0x0 (0x4)
	BOOL bFixedTimeStep : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float TimeStep; // 0x4 (0x4)
	int MaxSubSteps; // 0x8 (0x4)
};

// 0x3C 
struct FPhysXSceneProperties {
	struct FPhysXSimulationProperties PrimaryScene; // 0x0 (0xC)
	struct FPhysXSimulationProperties CompartmentRigidBody; // 0xC (0xC)
	struct FPhysXSimulationProperties CompartmentFluid; // 0x18 (0xC)
	struct FPhysXSimulationProperties CompartmentCloth; // 0x24 (0xC)
	struct FPhysXSimulationProperties CompartmentSoftBody; // 0x30 (0xC)
};

// 0x4 
struct FCompartmentRunList {
	BOOL RigidBody : 1; // 0x0 (0x4)
	BOOL Fluid : 1; // 0x0 (0x4)
	BOOL Cloth : 1; // 0x0 (0x4)
	BOOL SoftBody : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FNetViewer {
	struct APlayerController* InViewer; // 0x0 (0x4)
	struct AActor* Viewer; // 0x4 (0x4)
	struct FVector ViewLocation; // 0x8 (0xC)
	struct FVector ViewDir; // 0x14 (0xC)
};

// 0x2C 
struct FLevelGroup {
	BOOL bCollapsed : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FColor GroupColor; // 0x4 (0x4)
	struct TArray_int Levels; // 0x8 (0xC)
	struct TArray_FString LevelGridVolumes; // 0x14 (0xC)
	struct FString GroupName; // 0x20 (0xC)
};

// 0x10 
struct FTitleSafeZoneArea {
	float MaxPercentX; // 0x0 (0x4)
	float MaxPercentY; // 0x4 (0x4)
	float RecommendedPercentX; // 0x8 (0x4)
	float RecommendedPercentY; // 0xC (0x4)
};

// 0x10 
struct FPerPlayerSplitscreenData {
	float SizeX; // 0x0 (0x4)
	float SizeY; // 0x4 (0x4)
	float OriginX; // 0x8 (0x4)
	float OriginY; // 0xC (0x4)
};

// 0xC 
struct FSplitscreenData {
	struct TArray_FPerPlayerSplitscreenData PlayerData; // 0x0 (0xC)
};

// 0x10 
struct FDebugDisplayProperty {
	struct UObject* Obj; // 0x0 (0x4)
	struct FName PropertyName; // 0x4 (0x8)
	BOOL bSpecialProperty : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FGBXConnectedNavMesh {
	struct AGBXNavMesh* Mesh; // 0x0 (0x4)
	int MeshID; // 0x4 (0x4)
};

// 0xC 
struct FGBXNavMeshVertex {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
};

// 0xE 
struct FGBXNavMeshPoly {
	const unsigned char Verts[6]; // 0x0 (0x6)
	const unsigned char ConnectedPolys[6]; // 0x6 (0x6)
	const unsigned char PolyDataIdx[2]; // 0xC (0x2)
};

// 0x6 
struct FGBXNavmeshCrossLevelConnection {
	const unsigned char EdgeIdx[2]; // 0x0 (0x2)
	const unsigned char ConnectedNavmeshIdx[2]; // 0x2 (0x2)
	const unsigned char PolyIdx[2]; // 0x4 (0x2)
};

// 0x30 
struct FGBXNavMeshSpecialMove {
	int DestinationPolyIdx; // 0x0 (0x4)
	int DestinationMeshIdx; // 0x4 (0x4)
	int CrossLevelMoverIdx; // 0x8 (0x4)
	int ActorSpecialMoveId; // 0xC (0x4)
	struct FScriptInterface Mover; // 0x10 (0x8)
	struct FVector LocalSpaceSrcLocation; // 0x18 (0xC)
	struct FVector LocalSpaceDestLocation; // 0x24 (0xC)
};

// 0x24 
struct FGBXNavMeshPolyData {
	struct TArray_FGBXNavmeshCrossLevelConnection CrossLevelConnections; // 0x0 (0xC)
	struct TArray_FGBXNavMeshSpecialMove SpecialMoves; // 0xC (0xC)
	const unsigned char Obstacles[12]; // 0x18 (0xC)
};

// 0x14 
struct FGBXNavMeshPathSize {
	float Radius; // 0x0 (0x4)
	float Height; // 0x4 (0x4)
	struct FColor DrawColor; // 0x8 (0x4)
	struct FColor ObstacleDrawColor; // 0xC (0x4)
	int StartIndex; // 0x10 (0x4)
};

// 0x8 
struct FGBXNavMeshObstacleData {
	struct UGBXCrossLevelReferenceContainer* Obstacle; // 0x0 (0x4)
	int MinAffectedPathSize; // 0x4 (0x4)
};

// 0x8 
struct FGBXNavMeshPolyRef {
	struct AGBXNavMesh* NavMesh; // 0x0 (0x4)
	int PolyIdx; // 0x4 (0x4)
};

// 0xC 
struct FGBXNavMeshLookupCell {
	const struct FArray_Mirror IntersectingPolys; // 0x0 (0xC)
};

// 0x38 
struct FGBXNavMeshPolyLookup {
	int XCells; // 0x0 (0x4)
	int YCells; // 0x4 (0x4)
	struct FVector Origin; // 0x8 (0xC)
	struct FVector CellSize; // 0x14 (0xC)
	struct TArray_int CellIndices; // 0x20 (0xC)
	struct TArray_FGBXNavMeshLookupCell Cells; // 0x2C (0xC)
};

// 0x1C 
struct FGBXLineCheckResult {
	struct FVector Location; // 0x0 (0xC)
	struct FVector Normal; // 0xC (0xC)
	float Time; // 0x18 (0x4)
};

// 0x4 
struct FIGBXNavMeshObstaclePointer {
	const struct FPointer Dummy; // 0x0 (0x4)
};

// 0x28 
struct FGBXNavMeshPathPoint {
	struct FGBXNavMeshPolyRef Poly; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0xC)
	int SpecialMoveId; // 0x14 (0x4)
	float NextPathObjectDistance; // 0x18 (0x4)
	struct TArray_FIGBXNavMeshObstaclePointer CrossedObstacles; // 0x1C (0xC)
};

// 0x10 
struct FGBXNavMeshPath {
	struct TArray_FGBXNavMeshPathPoint PathPoints; // 0x0 (0xC)
	int CurrentPathIdx; // 0xC (0x4)
};

// 0x50 
struct FNavMeshPathParams {
	struct FPointer Interface; // 0x0 (0x4)
	BOOL bCanMantle : 1; // 0x4 (0x4)
	BOOL bCanPhysicsJump : 1; // 0x4 (0x4)
	const unsigned long: 0;
	float PhysicsJumpCostMultiplier; // 0x8 (0x4)
	BOOL bNeedsMantleValidityTest : 1; // 0xC (0x4)
	BOOL bAbleToSearch : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FVector SearchExtent; // 0x10 (0xC)
	float SearchLaneMultiplier; // 0x1C (0x4)
	struct FVector SearchStart; // 0x20 (0xC)
	float MaxDropHeight; // 0x2C (0x4)
	float MinWalkableZ; // 0x30 (0x4)
	float MaxHoverDistance; // 0x34 (0x4)
	struct TArray_UObjectPtr ObstaclesToIgnore; // 0x38 (0xC)
	float LookAheadDistance; // 0x44 (0x4)
	float CornerCutDistance; // 0x48 (0x4)
	float LookInterpRate; // 0x4C (0x4)
};

// 0x1C 
struct FPolySegmentSpan {
	struct FPointer Poly; // 0x0 (0x4)
	struct FVector P1; // 0x4 (0xC)
	struct FVector P2; // 0x10 (0xC)
};

// 0x4 
struct FEdgePointer {
	const struct FPointer Dummy; // 0x0 (0x4)
};

// 0x18 
struct FPathStore {
	const struct TArray_FEdgePointer EdgeList; // 0x0 (0xC)
	const struct TArray_float PathDistances; // 0xC (0xC)
};

// 0x8 
struct FPlayerOwnedComponent {
	struct AActor* PlayerOwner; // 0x0 (0x4)
	struct UActorComponent* Component; // 0x4 (0x4)
};

// 0x10 
struct FAkCallBackGetRTPC {
	struct UAkRtpc* RTPC; // 0x0 (0x4)
	struct UObject* Owner; // 0x4 (0x4)
	struct UAkComponent* Component; // 0x8 (0x4)
	float CallbackValue; // 0xC (0x4)
};

// 0x14 
struct FGestaltAccessoryPartEntry {
	struct FName PartName; // 0x0 (0x8)
	struct FName BoneName; // 0x8 (0x8)
	int MatrixIndex; // 0x10 (0x4)
};

// 0x14 
struct FGestaltAccessoryGroupEntry {
	struct FName GroupName; // 0x0 (0x8)
	struct TArray_FGestaltAccessoryPartEntry GestaltAccessoryPartList; // 0x8 (0xC)
};

// 0x14 
struct FGestaltAccessoryMeshEntry {
	struct FName MeshName; // 0x0 (0x8)
	struct TArray_FGestaltAccessoryGroupEntry GestaltAccessoryGroupList; // 0x8 (0xC)
};

// 0x4 
struct FGPMCollection {
	struct UGestaltPartMatrices* CollectionData; // 0x0 (0x4)
};

// 0x18 
struct FActorToLookAt {
	struct AActor* Actor; // 0x0 (0x4)
	float Rating; // 0x4 (0x4)
	float EnteredTime; // 0x8 (0x4)
	float LastKnownDistance; // 0xC (0x4)
	float StartTimeBeingLookedAt; // 0x10 (0x4)
	BOOL CurrentlyBeingLookedAt : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FHybridNavVisualizationVert {
	struct FVector Vert; // 0x0 (0xC)
	BOOL bValidSegmentEndpoint : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FHybridNavVisualizationVertsForNavPoint {
	struct TArray_FHybridNavVisualizationVert Verts; // 0x0 (0xC)
	BOOL bWasDrawn : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FVector FirstVertDrawn; // 0x10 (0xC)
	struct FVector LastVertDrawn; // 0x1C (0xC)
	float VerticalReach; // 0x28 (0x4)
};

// 0x2C 
struct FHybridNavVisualizationPerfStats {
	int VisualizationBuildingStartTime; // 0x0 (0x4)
	int VisualizationBuildingEndTime; // 0x4 (0x4)
	int CyclesBuildingVisualization; // 0x8 (0x4)
	int NumberOfNodesConsidered; // 0xC (0x4)
	int NumberOfTraces; // 0x10 (0x4)
	int NumberOfEndPointAttempts; // 0x14 (0x4)
	int NumberOfSideAttempts; // 0x18 (0x4)
	int NumberOfNodesInVisualization; // 0x1C (0x4)
	int NumberOfPointsInVisualization; // 0x20 (0x4)
	int NumClosestNodesRequests; // 0x24 (0x4)
	int NumClosestNodeTests; // 0x28 (0x4)
};

// 0x8 
struct FReplicatedCoordinatedEffect {
	int Effects; // 0x0 (0x4)
	int Targets; // 0x4 (0x4)
};

// 0x2C 
struct FGBXNavMeshSpecialMoveConnection {
	struct FGBXNavMeshPolyRef SrcPoly; // 0x0 (0x8)
	struct FVector SrcLocation; // 0x8 (0xC)
	struct FGBXNavMeshPolyRef DestPoly; // 0x14 (0x8)
	struct FVector DestLocation; // 0x1C (0xC)
	int MoveId; // 0x28 (0x4)
};

// 0x11 
struct FIniLocFileEntry {
	struct FString Filename; // 0x0 (0xC)
	BOOL bIsUnicode : 1; // 0xC (0x4)
	const unsigned long: 0;
	unsigned char ReadState; // 0x10 (0x1) (Enum = EOnlineEnumerationReadState)
};

// 0x65 
struct FBodyInstanceDataUnion {
	struct FInstanceDataUnion Data; // 0x0 (0x58)
	struct FName ParentAttachmentIdentifier; // 0x58 (0x8)
	int AttachmentBaseInstanceDataIndex; // 0x60 (0x4)
	unsigned char SwitchIdentifier; // 0x64 (0x1)
};

// 0x14 
struct FBodyCompositionData {
	struct TArray_FBodyInstanceDataUnion Attachments; // 0x0 (0xC)
	unsigned char MaxExpectedComponents; // 0xC (0x1)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	BOOL HasHomingTargetComponents : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x50 (Alignment = 16)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x0 (0x40)
	struct FVector2D LightmapUVBias; // 0x40 (0x8)
	struct FVector2D ShadowmapUVBias; // 0x48 (0x8)
};

// 0x10 
struct FInstancedStaticMeshMappingInfo {
	struct FPointer Mapping; // 0x0 (0x4)
	struct FPointer LightMap; // 0x4 (0x4)
	struct UTexture2D* LightmapTexture; // 0x8 (0x4)
	struct UShadowMap2D* ShadowmapTexture; // 0xC (0x4)
};

// 0x20 
struct AInterpActor_FCheckpointRecord {
	struct FVector Location; // 0x0 (0xC)
	struct FRotator Rotation; // 0xC (0xC)
	unsigned char CollisionType; // 0x18 (0x1) (Enum = ECollisionType)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	BOOL bHidden : 1; // 0x1C (0x4)
	BOOL bIsShutdown : 1; // 0x1C (0x4)
	BOOL bNeedsPositionReplication : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x0 (0x4)
	struct FColor CurveColor; // 0x4 (0x4)
	struct FString CurveName; // 0x8 (0xC)
	int bHideCurve; // 0x14 (0x4)
	int bColorCurve; // 0x18 (0x4)
	int bFloatingPointColorCurve; // 0x1C (0x4)
	int bClamp; // 0x20 (0x4)
	float ClampLow; // 0x24 (0x4)
	float ClampHigh; // 0x28 (0x4)
};

// 0x28 
struct FCurveEdTab {
	struct FString TabName; // 0x0 (0xC)
	struct TArray_FCurveEdEntry Curves; // 0xC (0xC)
	float ViewStartInput; // 0x18 (0x4)
	float ViewEndInput; // 0x1C (0x4)
	float ViewStartOutput; // 0x20 (0x4)
	float ViewEndOutput; // 0x24 (0x4)
};

// 0x10 
struct FAnimSetBakeAndPruneStatus {
	struct FString AnimSetName; // 0x0 (0xC)
	BOOL bReferencedButUnused : 1; // 0xC (0x4)
	BOOL bSkipBakeAndPrune : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FInterpEdSelKey {
	struct UInterpGroup* Group; // 0x0 (0x4)
	struct UInterpTrack* Track; // 0x4 (0x4)
	int KeyIndex; // 0x8 (0x4)
	float UnsnappedPosition; // 0xC (0x4)
};

// 0x1C 
struct FSubTrackGroup {
	struct FString GroupName; // 0x0 (0xC)
	struct TArray_int TrackIndices; // 0xC (0xC)
	BOOL bIsCollapsed : 1; // 0x18 (0x4)
	BOOL bIsSelected : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FSupportedSubTrackInfo {
	struct UClass* SupportedClass; // 0x0 (0x4)
	struct FString SubTrackName; // 0x4 (0xC)
	int GroupIndex; // 0x10 (0x4)
};

// 0x1C 
struct FAnimControlTrackKey {
	float StartTime; // 0x0 (0x4)
	struct FName AnimSeqName; // 0x4 (0x8)
	float AnimStartOffset; // 0xC (0x4)
	float AnimEndOffset; // 0x10 (0x4)
	float AnimPlayRate; // 0x14 (0x4)
	BOOL bLooping : 1; // 0x18 (0x4)
	BOOL bReverse : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FBoolTrackKey {
	float Time; // 0x0 (0x4)
	BOOL Value : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FCommentTrackKey {
	float Time; // 0x0 (0x4)
	struct FString Comment; // 0x4 (0xC)
};

// 0x10 
struct FDirectorTrackCut {
	float Time; // 0x0 (0x4)
	float TransitionTime; // 0x4 (0x4)
	struct FName TargetCamGroup; // 0x8 (0x8)
};

// 0xC 
struct FEventTrackKey {
	float Time; // 0x0 (0x4)
	struct FName EventName; // 0x4 (0x8)
};

// 0x1C 
struct FFaceFXTrackKey {
	float StartTime; // 0x0 (0x4)
	struct FString FaceFXGroupName; // 0x4 (0xC)
	struct FString FaceFXSeqName; // 0x10 (0xC)
};

// 0x8 
struct FFaceFXSoundCueKey {
	const struct USoundCue* FaceFXSoundCue; // 0x0 (0x4)
	const struct UAkEvent* FaceFXAkEvent; // 0x4 (0x4)
};

// 0x5 
struct FHeadTrackingKey {
	float Time; // 0x0 (0x4)
	unsigned char Action; // 0x4 (0x1) (Enum = EHeadTrackingAction)
};

// 0x18 
struct FFloatMaterialParamMICData {
	const struct TArray_UMaterialInstanceConstantPtr MICs; // 0x0 (0xC)
	const struct TArray_float MICResetFloats; // 0xC (0xC)
};

// 0x5 
struct FToggleTrackKey {
	float Time; // 0x0 (0x4)
	unsigned char ToggleAction; // 0x4 (0x1) (Enum = ETrackToggleAction)
};

// 0x18 
struct FVectorMaterialParamMICData {
	const struct TArray_UMaterialInstanceConstantPtr MICs; // 0x0 (0xC)
	const struct TArray_FVector MICResetVectors; // 0xC (0xC)
};

// 0x6 
struct FVisibilityTrackKey {
	float Time; // 0x0 (0x4)
	unsigned char Action; // 0x4 (0x1) (Enum = EVisibilityTrackAction)
	unsigned char ActiveCondition; // 0x5 (0x1) (Enum = EVisibilityTrackCondition)
};

// 0xC 
struct FInterpLookupPoint {
	struct FName GroupName; // 0x0 (0x8)
	float Time; // 0x8 (0x4)
};

// 0xC 
struct FInterpLookupTrack {
	struct TArray_FInterpLookupPoint Points; // 0x0 (0xC)
};

// 0xC 
struct FParticleReplayTrackKey {
	float Time; // 0x0 (0x4)
	float Duration; // 0x4 (0x4)
	int ClipIDNumber; // 0x8 (0x4)
};

// 0x10 
struct FSoundTrackKey {
	float Time; // 0x0 (0x4)
	float Volume; // 0x4 (0x4)
	float Pitch; // 0x8 (0x4)
	struct USoundCue* Sound; // 0xC (0x4)
};

// 0x1C 
struct FTeleportKeyData {
	float KeyTime; // 0x0 (0x4)
	struct FVector LocationKey; // 0x4 (0xC)
	struct FRotator RotationKey; // 0x10 (0xC)
};

// 0x18 
struct FImpulseData {
	struct FVector Impulse; // 0x0 (0xC)
	struct FVector Source; // 0xC (0xC)
};

// 0x10 
struct FLandscapeWeightmapUsage {
	struct ULandscapeComponent* ChannelUsage[4]; // 0x0 (0x10)
};

// 0x10 
struct FLandscapeLayerInfo {
	struct FName LayerName; // 0x0 (0x8)
	float Hardness; // 0x8 (0x4)
	BOOL bNoWeightBlend : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x0 
struct FLandscapeAddCollision {
};

// 0xA 
struct FWeightmapLayerAllocationInfo {
	struct FName LayerName; // 0x0 (0x8)
	unsigned char WeightmapTextureIndex; // 0x8 (0x1)
	unsigned char WeightmapTextureChannel; // 0x9 (0x1)
};

// 0x144 
struct FLensFlareElement {
	struct FName ElementName; // 0x0 (0x8)
	float RayDistance; // 0x8 (0x4)
	BOOL bIsEnabled : 1; // 0xC (0x4)
	BOOL bUseSourceDistance : 1; // 0xC (0x4)
	BOOL bNormalizeRadialDistance : 1; // 0xC (0x4)
	BOOL bModulateColorBySource : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FVector Size; // 0x10 (0xC)
	struct TArray_UMaterialInterfacePtr LFMaterials; // 0x1C (0xC)
	struct FRawDistributionFloat LFMaterialIndex; // 0x28 (0x1C)
	struct FRawDistributionFloat Scaling; // 0x44 (0x1C)
	struct FRawDistributionVector AxisScaling; // 0x60 (0x1C)
	struct FRawDistributionFloat Rotation; // 0x7C (0x1C)
	BOOL bOrientTowardsSource : 1; // 0x98 (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector Color; // 0x9C (0x1C)
	struct FRawDistributionFloat Alpha; // 0xB8 (0x1C)
	struct FRawDistributionVector Offset; // 0xD4 (0x1C)
	struct FRawDistributionVector DistMap_Scale; // 0xF0 (0x1C)
	struct FRawDistributionVector DistMap_Color; // 0x10C (0x1C)
	struct FRawDistributionFloat DistMap_Alpha; // 0x128 (0x1C)
};

// 0x10 
struct FLensFlareElementCurvePair {
	struct FString CurveName; // 0x0 (0xC)
	struct UObject* CurveObject; // 0xC (0x4)
};

// 0xC 
struct FLensFlareElementMaterials {
	struct TArray_UMaterialInterfacePtr ElementMaterials; // 0x0 (0xC)
};

// 0x0 
struct FLensFlareElementInstance {
};

// 0xC 
struct FLevelGridCellCoordinate {
	int X; // 0x0 (0x4)
	int Y; // 0x4 (0x4)
	int Z; // 0x8 (0x4)
};

// 0x4 
struct ALevelStreamingVolume_FCheckpointRecord {
	BOOL bDisabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x100 
struct FPostProcessSettingsOverride {
	struct FPostProcessSettings Settings; // 0x0 (0xE8)
	BOOL bBlendingIn : 1; // 0xE8 (0x4)
	BOOL bBlendingOut : 1; // 0xE8 (0x4)
	const unsigned long: 0;
	float CurrentBlendInTime; // 0xEC (0x4)
	float CurrentBlendOutTime; // 0xF0 (0x4)
	float BlendInDuration; // 0xF4 (0x4)
	float BlendOutDuration; // 0xF8 (0x4)
	float BlendStartTime; // 0xFC (0x4)
};

// 0x20 
struct FWorldLightingOverride {
	struct FRotator DirectionOffset; // 0x0 (0xC)
	float FadeInTime; // 0xC (0x4)
	float FadeOutTime; // 0x10 (0x4)
	float RemainingFadeTime; // 0x14 (0x4)
	BOOL RemovalRequested : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct FPointer pMovie; // 0x1C (0x4)
};

// 0xF4 
struct FCurrentPostProcessVolumeInfo {
	struct FPostProcessSettings LastSettings; // 0x0 (0xE8)
	struct APostProcessVolume* LastVolumeUsed; // 0xE8 (0x4)
	float BlendStartTime; // 0xEC (0x4)
	float LastBlendTime; // 0xF0 (0x4)
};

// 0x8 
struct FSynchronizedActorVisibilityHistory {
	struct FPointer State; // 0x0 (0x4)
	struct FPointer CriticalSection; // 0x4 (0x4)
};

// 0xC 
struct FManufacturerGradeData {
	const struct FString DisplayName; // 0x0 (0xC)
};

// 0x5 
struct FManufacturerCustomGradeWeightData {
	const struct UManufacturerDefinition* Manufacturer; // 0x0 (0x4)
	const unsigned char DefaultWeightIndex; // 0x4 (0x1)
};

// 0x1C 
struct FExpressionInput {
	struct UMaterialExpression* Expression; // 0x0 (0x4)
	int Mask; // 0x4 (0x4)
	int MaskR; // 0x8 (0x4)
	int MaskG; // 0xC (0x4)
	int MaskB; // 0x10 (0x4)
	int MaskA; // 0x14 (0x4)
	int GCC64_Padding; // 0x18 (0x4)
};

// 0x28 
struct FCustomInput {
	struct FString InputName; // 0x0 (0xC)
	struct FExpressionInput Input; // 0xC (0x1C)
};

// 0x20 
struct FFontParameterValue {
	struct FName ParameterName; // 0x0 (0x8)
	struct UFont* FontValue; // 0x8 (0x4)
	int FontPage; // 0xC (0x4)
	struct FGuid ExpressionGUID; // 0x10 (0x10)
};

// 0x1C 
struct FScalarParameterValue {
	struct FName ParameterName; // 0x0 (0x8)
	float ParameterValue; // 0x8 (0x4)
	struct FGuid ExpressionGUID; // 0xC (0x10)
};

// 0x1C 
struct FTextureParameterValue {
	struct FName ParameterName; // 0x0 (0x8)
	struct UTexture* ParameterValue; // 0x8 (0x4)
	struct FGuid ExpressionGUID; // 0xC (0x10)
};

// 0x28 
struct FVectorParameterValue {
	struct FName ParameterName; // 0x0 (0x8)
	struct FLinearColor ParameterValue; // 0x8 (0x10)
	struct FGuid ExpressionGUID; // 0x18 (0x10)
};

// 0x30 
struct FParameterValueOverTime {
	struct FGuid ExpressionGUID; // 0x0 (0x10)
	float StartTime; // 0x10 (0x4)
	struct FName ParameterName; // 0x14 (0x8)
	BOOL bLoop : 1; // 0x1C (0x4)
	BOOL bAutoActivate : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float CycleTime; // 0x20 (0x4)
	BOOL bNormalizeTime : 1; // 0x24 (0x4)
	const unsigned long: 0;
	float OffsetTime; // 0x28 (0x4)
	BOOL bOffsetFromEnd : 1; // 0x2C (0x4)
	const unsigned long: 0;
};

// 0x38 
struct FFontParameterValueOverTime {
	struct FGuid ExpressionGUID; // 0x0 (0x10)
	float StartTime; // 0x10 (0x4)
	struct FName ParameterName; // 0x14 (0x8)
	BOOL bLoop : 1; // 0x1C (0x4)
	BOOL bAutoActivate : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float CycleTime; // 0x20 (0x4)
	BOOL bNormalizeTime : 1; // 0x24 (0x4)
	const unsigned long: 0;
	float OffsetTime; // 0x28 (0x4)
	BOOL bOffsetFromEnd : 1; // 0x2C (0x4)
	const unsigned long: 0;
	struct UFont* FontValue; // 0x30 (0x4)
	int FontPage; // 0x34 (0x4)
};

// 0x44 
struct FScalarParameterValueOverTime {
	struct FGuid ExpressionGUID; // 0x0 (0x10)
	float StartTime; // 0x10 (0x4)
	struct FName ParameterName; // 0x14 (0x8)
	BOOL bLoop : 1; // 0x1C (0x4)
	BOOL bAutoActivate : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float CycleTime; // 0x20 (0x4)
	BOOL bNormalizeTime : 1; // 0x24 (0x4)
	const unsigned long: 0;
	float OffsetTime; // 0x28 (0x4)
	BOOL bOffsetFromEnd : 1; // 0x2C (0x4)
	const unsigned long: 0;
	float ParameterValue; // 0x30 (0x4)
	struct FInterpCurveFloat ParameterValueCurve; // 0x34 (0x10)
};

// 0x34 
struct FTextureParameterValueOverTime {
	struct FGuid ExpressionGUID; // 0x0 (0x10)
	float StartTime; // 0x10 (0x4)
	struct FName ParameterName; // 0x14 (0x8)
	BOOL bLoop : 1; // 0x1C (0x4)
	BOOL bAutoActivate : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float CycleTime; // 0x20 (0x4)
	BOOL bNormalizeTime : 1; // 0x24 (0x4)
	const unsigned long: 0;
	float OffsetTime; // 0x28 (0x4)
	BOOL bOffsetFromEnd : 1; // 0x2C (0x4)
	const unsigned long: 0;
	struct UTexture* ParameterValue; // 0x30 (0x4)
};

// 0x50 
struct FVectorParameterValueOverTime {
	struct FGuid ExpressionGUID; // 0x0 (0x10)
	float StartTime; // 0x10 (0x4)
	struct FName ParameterName; // 0x14 (0x8)
	BOOL bLoop : 1; // 0x1C (0x4)
	BOOL bAutoActivate : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float CycleTime; // 0x20 (0x4)
	BOOL bNormalizeTime : 1; // 0x24 (0x4)
	const unsigned long: 0;
	float OffsetTime; // 0x28 (0x4)
	BOOL bOffsetFromEnd : 1; // 0x2C (0x4)
	const unsigned long: 0;
	struct FLinearColor ParameterValue; // 0x30 (0x10)
	struct FInterpCurveVector ParameterValueCurve; // 0x40 (0x10)
};

// 0x18 
struct FMorphNodeConn {
	struct TArray_UMorphNodeBasePtr ChildNodes; // 0x0 (0xC)
	struct FName ConnName; // 0xC (0x8)
	int DrawY; // 0x14 (0x4)
};

// 0x8 
struct FBoneAngleMorph {
	float Angle; // 0x0 (0x4)
	float TargetWeight; // 0x4 (0x4)
};

// 0x8 
struct FBiasedGoalActor {
	struct AActor* Goal; // 0x0 (0x4)
	int ExtraCost; // 0x4 (0x4)
};

// 0x4 
struct ANavMeshObstacle_FCheckpointRecord {
	BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FMMStats_Timer {
	BOOL bInProgress : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FDouble MSecs; // 0x4 (0x8)
};

// 0x18 
struct FOnlineProfileSetting {
	unsigned char Owner; // 0x0 (0x1) (Enum = EOnlineProfilePropertyOwner)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FSettingsProperty ProfileSetting; // 0x4 (0x14)
};

// 0x18 
struct FUIDataProviderField {
	struct FName FieldTag; // 0x0 (0x8)
	unsigned char FieldType; // 0x8 (0x1) (Enum = EUIDataProviderFieldType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct TArray_UUIDataProviderPtr FieldProviders; // 0xC (0xC)
};

// 0x24 
struct FRecentParty {
	struct FUniqueNetId PartyLeader; // 0x0 (0x18)
	struct TArray_FUniqueNetId PartyMembers; // 0x18 (0xC)
};

// 0x20 
struct FCurrentPlayerMet {
	int TeamNum; // 0x0 (0x4)
	int Skill; // 0x4 (0x4)
	struct FUniqueNetId NetId; // 0x8 (0x18)
};

// 0x10 
struct FOnlineStatsColumn {
	int ColumnNo; // 0x0 (0x4)
	struct FSettingsData StatValue; // 0x4 (0xC)
};

// 0x3C 
struct FOnlineStatsRow {
	const struct FUniqueNetId PlayerID; // 0x0 (0x18)
	const struct FSettingsData Rank; // 0x18 (0xC)
	const struct FString NickName; // 0x24 (0xC)
	struct TArray_FOnlineStatsColumn Columns; // 0x30 (0xC)
};

// 0x18 
struct FColumnMetaData {
	const int Id; // 0x0 (0x4)
	const struct FName Name; // 0x4 (0x8)
	const struct FString ColumnName; // 0xC (0xC)
};

// 0x28 
struct FParticleBurst {
	int Count; // 0x0 (0x4)
	int CountLow; // 0x4 (0x4)
	float Time; // 0x8 (0x4)
	struct FRawDistributionFloat CountDistribution; // 0xC (0x1C)
};

// 0x10 
struct FParticleCurvePair {
	struct FString CurveName; // 0x0 (0xC)
	struct UObject* CurveObject; // 0xC (0x4)
};

// 0x18 
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x0 (0x8)
	BOOL bGetSeedFromInstance : 1; // 0x8 (0x4)
	BOOL bInstanceSeedIsIndex : 1; // 0x8 (0x4)
	BOOL bResetSeedOnEmitterLooping : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct TArray_int RandomSeeds; // 0xC (0xC)
};

// 0x4 
struct FBeamModifierOptions {
	BOOL bModify : 1; // 0x0 (0x4)
	BOOL bScale : 1; // 0x0 (0x4)
	BOOL bLock : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FParticleEvent_GenerateInfo {
	unsigned char Type; // 0x0 (0x1) (Enum = EParticleEventType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int Frequency; // 0x4 (0x4)
	int LowFreq; // 0x8 (0x4)
	int ParticleFrequency; // 0xC (0x4)
	BOOL FirstTimeOnly : 1; // 0x10 (0x4)
	BOOL LastTimeOnly : 1; // 0x10 (0x4)
	BOOL UseReflectedImpactVector : 1; // 0x10 (0x4)
	const unsigned long: 0;
	struct FName CustomName; // 0x14 (0x8)
	struct TArray_UParticleModuleEventSendToGamePtr ParticleModuleEventsToSendToGame; // 0x1C (0xC)
};

// 0x14 
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x0 (0x8)
	struct FVector Offset; // 0x8 (0xC)
};

// 0x4 
struct FOrbitOptions {
	BOOL bProcessDuringSpawn : 1; // 0x0 (0x4)
	BOOL bProcessDuringUpdate : 1; // 0x0 (0x4)
	BOOL bUseEmitterTime : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x30 
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x0 (0x8)
	BOOL bUseEmitterTime : 1; // 0x8 (0x4)
	BOOL bSpawnTimeOnly : 1; // 0x8 (0x4)
	const unsigned long: 0;
	unsigned char ValueMethod; // 0xC (0x1) (Enum = EEmitterDynamicParameterValue)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	BOOL bScaleVelocityByParamValue : 1; // 0x10 (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat ParamValue; // 0x14 (0x1C)
};

// 0xC 
struct FBeamTargetData {
	struct FName TargetName; // 0x0 (0x8)
	float TargetPercentage; // 0x8 (0x4)
};

// 0x10 
struct FPhysXEmitterVerticalLodProperties {
	float WeightForFifo; // 0x0 (0x4)
	float WeightForSpawnLod; // 0x4 (0x4)
	float SpawnLodRateVsLifeBias; // 0x8 (0x4)
	float RelativeFadeoutTime; // 0xC (0x4)
};

// 0xC 
struct FLODSoloTrack {
	struct TArray_unsigned_char SoloEnableSetting; // 0x0 (0xC)
};

// 0xC 
struct FParticleEmitterReplayFrame {
	const int EmitterType; // 0x0 (0x4)
	const int OriginalEmitterIndex; // 0x4 (0x4)
	const struct FPointer FrameState; // 0x8 (0x4)
};

// 0xC 
struct FParticleSystemReplayFrame {
	const struct TArray_FParticleEmitterReplayFrame Emitters; // 0x0 (0xC)
};

// 0x4 
struct FPersistentData {
	const struct FPointer VfTable; // 0x0 (0x4)
};

// 0x8 
struct FPersistentSequenceEventData {
	const struct FPointer VfTable; // 0x0 (0x4)
	int TriggerCount; // 0x4 (0x4)
};

// 0x8 
struct FPersistentSeqAct_InterpData {
	const struct FPointer VfTable; // 0x0 (0x4)
	float Position; // 0x4 (0x4)
};

// 0x4 
struct APointLightToggleable_FCheckpointRecord {
	BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FActivateOp {
	struct USequenceOp* ActivatorOp; // 0x0 (0x4)
	struct USequenceOp* Op; // 0x4 (0x4)
	int InputIdx; // 0x8 (0x4)
	float RemainingDelay; // 0xC (0x4)
};

// 0x1C 
struct FQueuedActivationInfo {
	struct USequenceEvent* ActivatedEvent; // 0x0 (0x4)
	struct AActor* InOriginator; // 0x4 (0x4)
	struct AActor* InInstigator; // 0x8 (0x4)
	struct TArray_int ActivateIndices; // 0xC (0xC)
	BOOL bPushTop : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FKCachedConvexDataElement {
	struct TArray_unsigned_char ConvexElementData; // 0x0 (0xC)
};

// 0xC 
struct FKCachedConvexData {
	struct TArray_FKCachedConvexDataElement CachedConvexElements; // 0x0 (0xC)
};

// 0x8 
struct FLinearDOFSetup {
	unsigned char bLimited; // 0x0 (0x1)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float LimitSize; // 0x4 (0x4)
};

// 0x5 
struct FResourcePoolIdentityState {
	struct UResourcePoolDefinition* PoolDefinition; // 0x0 (0x4)
	unsigned char PoolGUID; // 0x4 (0x1)
};

// 0x14 
struct FRarelyChangedPoolState {
	float ConsumptionRate; // 0x0 (0x4)
	float ActiveRegenerationRate; // 0x4 (0x4)
	float OnIdleRegenerationRate; // 0x8 (0x4)
	float OnIdleRegenerationDelay; // 0xC (0x4)
	float PassiveRegenerationRate; // 0x10 (0x4)
};

// 0x15 
struct FPathSizeInfo {
	struct FName Desc; // 0x0 (0x8)
	float Radius; // 0x8 (0x4)
	float Height; // 0xC (0x4)
	float CrouchHeight; // 0x10 (0x4)
	unsigned char PathColor; // 0x14 (0x1)
};

// 0x10 
struct FCameraCutInfo {
	struct FVector Location; // 0x0 (0xC)
	float TimeStamp; // 0xC (0x4)
};

// 0x18 
struct FSavedTransform {
	struct FVector Location; // 0x0 (0xC)
	struct FRotator Rotation; // 0xC (0xC)
};

// 0xC 
struct FLevelStreamingNameCombo {
	const struct ULevelStreaming* Level; // 0x0 (0x4)
	const struct FName LevelName; // 0x4 (0x8)
};

// 0x9 
struct FSwitchClassInfo {
	struct FName ClassName; // 0x0 (0x8)
	unsigned char bFallThru; // 0x8 (0x1)
};

// 0x8 
struct FSwitchObjectCase {
	struct UObject* ObjectValue; // 0x0 (0x4)
	BOOL bFallThru : 1; // 0x4 (0x4)
	BOOL bDefaultValue : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x6 
struct FShadowRelevanceSizePair {
	float Size; // 0x0 (0x4)
	const unsigned char DynamicShadowCastRelevance; // 0x4 (0x1) (Enum = EDynamicShadowCastRelevance)
	const unsigned char OverrideStaticShadowSettings; // 0x5 (0x1) (Enum = EOverrideStaticShadow)
};

// 0x10 
struct FSoftBodyTetraLink {
	int Index; // 0x0 (0x4)
	struct FVector Bary; // 0x4 (0xC)
};

// 0x18 
struct FSoftBodySpecialBoneInfo {
	struct FName BoneName; // 0x0 (0x8)
	unsigned char BoneType; // 0x8 (0x1) (Enum = SoftBodyBoneType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct TArray_int AttachedVertexIndices; // 0xC (0xC)
};

// 0x18 
struct FClothSpecialBoneInfo {
	struct FName BoneName; // 0x0 (0x8)
	unsigned char BoneType; // 0x8 (0x1) (Enum = ClothBoneType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct TArray_int AttachedVertexIndices; // 0xC (0xC)
};

// 0xC 
struct FTriangleSortSettings {
	unsigned char TriangleSorting; // 0x0 (0x1) (Enum = TriangleSortOption)
	unsigned char CustomLeftRightAxis; // 0x1 (0x1) (Enum = TriangleSortAxis)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FName CustomLeftRightBoneName; // 0x4 (0x8)
};

// 0x3C 
struct FSkeletalMeshLODInfo {
	float DisplayFactor; // 0x0 (0x4)
	float LODHysteresis; // 0x4 (0x4)
	struct TArray_int LODMaterialMap; // 0x8 (0xC)
	struct TArray_BOOL bEnableShadowCasting; // 0x14 (0xC)
	struct TArray_unsigned_char TriangleSorting; // 0x20 (0xC)
	struct TArray_FTriangleSortSettings TriangleSortSettings; // 0x2C (0xC)
	BOOL bDisableCompressions : 1; // 0x38 (0x4)
	const unsigned long: 0;
};

// 0x11 
struct FBoneMirrorExport {
	struct FName BoneName; // 0x0 (0x8)
	struct FName SourceBoneName; // 0x8 (0x8)
	unsigned char BoneFlipAxis; // 0x10 (0x1) (Enum = EAxis)
};

// 0x5 
struct FBoneMirrorInfo {
	int SourceIndex; // 0x0 (0x4)
	unsigned char BoneFlipAxis; // 0x4 (0x1) (Enum = EAxis)
};

// 0xC 
struct FSkelMeshActorControlTarget {
	struct FName ControlName; // 0x0 (0x8)
	struct AActor* TargetActor; // 0x8 (0x4)
};

// 0x1C 
struct ASkeletalMeshActor_FCheckpointRecord {
	BOOL bReplicated : 1; // 0x0 (0x4)
	BOOL bHidden : 1; // 0x0 (0x4)
	BOOL bSavedPosition : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FVector Location; // 0x4 (0xC)
	struct FRotator Rotation; // 0x10 (0xC)
};

// 0x8 
struct FSkelMaterialSetterDatum {
	int MaterialIndex; // 0x0 (0x4)
	struct UMaterialInterface* TheMaterial; // 0x4 (0x4)
};

// 0x8 
struct FSoundClassEditorData {
	const int NodePosX; // 0x0 (0x4)
	const int NodePosY; // 0x4 (0x4)
};

// 0x20 
struct FSoundClassProperties {
	float Volume; // 0x0 (0x4)
	float Pitch; // 0x4 (0x4)
	float StereoBleed; // 0x8 (0x4)
	float LFEBleed; // 0xC (0x4)
	float VoiceCenterChannelVolume; // 0x10 (0x4)
	float RadioFilterVolume; // 0x14 (0x4)
	float RadioFilterVolumeThreshold; // 0x18 (0x4)
	BOOL bApplyEffects : 1; // 0x1C (0x4)
	BOOL bAlwaysPlay : 1; // 0x1C (0x4)
	BOOL bIsUISound : 1; // 0x1C (0x4)
	BOOL bIsMusic : 1; // 0x1C (0x4)
	BOOL bReverb : 1; // 0x1C (0x4)
	BOOL bCenterChannelOnly : 1; // 0x1C (0x4)
	BOOL bIsDialog : 1; // 0x1C (0x4)
	BOOL bIsAmbience : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FSoundNodeEditorData {
	const int NodePosX; // 0x0 (0x4)
	const int NodePosY; // 0x4 (0x4)
};

// 0x1C 
struct FSoundClassAdjuster {
	unsigned char SoundClassName; // 0x0 (0x1) (Enum = ESoundClassName)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FName SoundClass; // 0x4 (0x8)
	float VolumeAdjuster; // 0xC (0x4)
	float PitchAdjuster; // 0x10 (0x4)
	BOOL bApplyToChildren : 1; // 0x14 (0x4)
	const unsigned long: 0;
	float VoiceCenterChannelVolumeAdjuster; // 0x18 (0x4)
};

// 0x24 
struct FAudioEQEffect {
	struct FDouble RootTime; // 0x0 (0x8)
	float HFFrequency; // 0x8 (0x4)
	float HFGain; // 0xC (0x4)
	float MFCutoffFrequency; // 0x10 (0x4)
	float MFBandwidth; // 0x14 (0x4)
	float MFGain; // 0x18 (0x4)
	float LFFrequency; // 0x1C (0x4)
	float LFGain; // 0x20 (0x4)
};

// 0x1C 
struct FRecognisableWord {
	int Id; // 0x0 (0x4)
	struct FString ReferenceWord; // 0x4 (0xC)
	struct FString PhoneticWord; // 0x10 (0xC)
};

// 0x48 
struct FRecogVocabulary {
	struct TArray_FRecognisableWord WhoDictionary; // 0x0 (0xC)
	struct TArray_FRecognisableWord WhatDictionary; // 0xC (0xC)
	struct TArray_FRecognisableWord WhereDictionary; // 0x18 (0xC)
	struct FString VocabName; // 0x24 (0xC)
	struct TArray_unsigned_char VocabData; // 0x30 (0xC)
	struct TArray_unsigned_char WorkingVocabData; // 0x3C (0xC)
};

// 0x10 
struct FRecogUserData {
	int ActiveVocabularies; // 0x0 (0x4)
	struct TArray_unsigned_char UserData; // 0x4 (0xC)
};

// 0x8 
struct FSplineConnection {
	struct USplineComponent* SplineComponent; // 0x0 (0x4)
	struct ASplineActor* ConnectTo; // 0x4 (0x4)
};

// 0x58 
struct FSplineMeshParams {
	struct FVector StartPos; // 0x0 (0xC)
	struct FVector StartTangent; // 0xC (0xC)
	struct FVector2D StartScale; // 0x18 (0x8)
	float StartRoll; // 0x20 (0x4)
	struct FVector2D StartOffset; // 0x24 (0x8)
	struct FVector EndPos; // 0x2C (0xC)
	struct FVector EndTangent; // 0x38 (0xC)
	struct FVector2D EndScale; // 0x44 (0x8)
	float EndRoll; // 0x4C (0x4)
	struct FVector2D EndOffset; // 0x50 (0x8)
};

// 0x4 
struct ASpotLightToggleable_FCheckpointRecord {
	BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FSMMaterialSetterDatum {
	int MaterialIndex; // 0x0 (0x4)
	struct UMaterialInterface* TheMaterial; // 0x4 (0x4)
};

// 0x4C (Alignment = 16)
struct FVehicleState {
	struct FRigidBodyState RBState; // 0x0 (0x3C)
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) > LAST OFFSET
	unsigned char ServerBrake; // 0x40 (0x1)
	unsigned char ServerGas; // 0x41 (0x1)
	unsigned char ServerSteering; // 0x42 (0x1)
	unsigned char ServerRise; // 0x43 (0x1)
	BOOL bServerHandbrake : 1; // 0x44 (0x4)
	const unsigned long: 0;
	int ServerView; // 0x48 (0x4)
};

// 0x1C 
struct FSearchState {
	struct FScriptInterface Subject; // 0x0 (0x8)
	unsigned char Type; // 0x8 (0x1) (Enum = ETargetableListSearchType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	int ListIndex; // 0xC (0x4)
	struct TArray_FScriptInterface CurrentList; // 0x10 (0xC)
};

// 0x0 
struct FTerrainHeight {
};

// 0x0 
struct FTerrainInfoData {
};

// 0x20 
struct FTerrainLayer {
	struct FString Name; // 0x0 (0xC)
	struct UTerrainLayerSetup* Setup; // 0xC (0x4)
	int AlphaMapIndex; // 0x10 (0x4)
	BOOL Highlighted : 1; // 0x14 (0x4)
	BOOL WireframeHighlighted : 1; // 0x14 (0x4)
	BOOL Hidden : 1; // 0x14 (0x4)
	const unsigned long: 0;
	struct FColor HighlightColor; // 0x18 (0x4)
	struct FColor WireframeColor; // 0x1C (0x4)
};

// 0x14 
struct FTerrainDecorationInstance {
	struct UPrimitiveComponent* Component; // 0x0 (0x4)
	float X; // 0x4 (0x4)
	float Y; // 0x8 (0x4)
	float Scale; // 0xC (0x4)
	int Yaw; // 0x10 (0x4)
};

// 0x24 
struct FTerrainDecoration {
	struct UPrimitiveComponentFactory* Factory; // 0x0 (0x4)
	float MinScale; // 0x4 (0x4)
	float MaxScale; // 0x8 (0x4)
	float Density; // 0xC (0x4)
	float SlopeRotationBlend; // 0x10 (0x4)
	int RandSeed; // 0x14 (0x4)
	struct TArray_FTerrainDecorationInstance Instances; // 0x18 (0xC)
};

// 0x1C 
struct FTerrainDecoLayer {
	struct FString Name; // 0x0 (0xC)
	struct TArray_FTerrainDecoration Decorations; // 0xC (0xC)
	int AlphaMapIndex; // 0x18 (0x4)
};

// 0x0 
struct FAlphaMap {
};

// 0x0 
struct ATerrain_FTerrainWeightedMaterial {
};

// 0xC 
struct FSelectedTerrainVertex {
	int X; // 0x0 (0x4)
	int Y; // 0x4 (0x4)
	int Weight; // 0x8 (0x4)
};

// 0x0 
struct FTerrainMaterialResource {
};

// 0xC 
struct FCachedTerrainMaterialArray {
	const struct TArray_FPointer CachedMaterials; // 0x0 (0xC)
};

// 0xC 
struct FTerrainBVTree {
	const struct TArray_int Nodes; // 0x0 (0xC)
};

// 0x18 
struct FTerrainkDOPTree {
	const struct TArray_int Nodes; // 0x0 (0xC)
	const struct TArray_int Triangles; // 0xC (0xC)
};

// 0x10 
struct FFilterLimit {
	BOOL Enabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float Base; // 0x4 (0x4)
	float NoiseScale; // 0x8 (0x4)
	float NoiseAmount; // 0xC (0x4)
};

// 0x54 
struct FTerrainFilteredMaterial {
	BOOL UseNoise : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float NoiseScale; // 0x4 (0x4)
	float NoisePercent; // 0x8 (0x4)
	struct FFilterLimit MinHeight; // 0xC (0x10)
	struct FFilterLimit MaxHeight; // 0x1C (0x10)
	struct FFilterLimit MinSlope; // 0x2C (0x10)
	struct FFilterLimit MaxSlope; // 0x3C (0x10)
	float Alpha; // 0x4C (0x4)
	struct UTerrainMaterial* Material; // 0x50 (0x4)
};

// 0x38 
struct FTerrainFoliageMesh {
	struct UStaticMesh* StaticMesh; // 0x0 (0x4)
	struct UMaterialInterface* Material; // 0x4 (0x4)
	int Density; // 0x8 (0x4)
	float MaxDrawRadius; // 0xC (0x4)
	float MinTransitionRadius; // 0x10 (0x4)
	float MinScale; // 0x14 (0x4)
	float MaxScale; // 0x18 (0x4)
	float MinUniformScale; // 0x1C (0x4)
	float MaxUniformScale; // 0x20 (0x4)
	float MinThinningRadius; // 0x24 (0x4)
	int Seed; // 0x28 (0x4)
	float SwayScale; // 0x2C (0x4)
	float AlphaMapThreshold; // 0x30 (0x4)
	float SlopeRotationBlend; // 0x34 (0x4)
};

// 0x0 
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial {
};

// 0x14 
struct FSourceTexture2DRegion {
	int OffsetX; // 0x0 (0x4)
	int OffsetY; // 0x4 (0x4)
	int SizeX; // 0x8 (0x4)
	int SizeY; // 0xC (0x4)
	struct UTexture2D* Texture2D; // 0x10 (0x4)
};

// 0x4 
struct ATrigger_FCheckpointRecord {
	BOOL bCollideActors : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FLevelStreamingData {
	BOOL bShouldBeLoaded : 1; // 0x0 (0x4)
	BOOL bShouldBeVisible : 1; // 0x0 (0x4)
	BOOL bShouldBlockOnLoad : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct ULevelStreaming* Level; // 0x4 (0x4)
};

// 0x10 
struct FPlayerStorageArrayProvider {
	int PlayerStorageId; // 0x0 (0x4)
	struct FName PlayerStorageName; // 0x4 (0x8)
	struct UUIDataProvider_OnlinePlayerStorageArray* Provider; // 0xC (0x4)
};

// 0x10 
struct FSettingsArrayProvider {
	int SettingsId; // 0x0 (0x4)
	struct FName SettingsName; // 0x4 (0x8)
	struct UUIDataProvider_SettingsArray* Provider; // 0xC (0x4)
};

// 0x18 
struct FDynamicResourceProviderDefinition {
	struct FName ProviderTag; // 0x0 (0x8)
	struct FString ProviderClassName; // 0x8 (0xC)
	struct UClass* ProviderClass; // 0x14 (0x4)
};

// 0x1C 
struct FGameResourceDataProvider {
	struct FName ProviderTag; // 0x0 (0x8)
	struct FString ProviderClassName; // 0x8 (0xC)
	BOOL bExpandProviders : 1; // 0x14 (0x4)
	const unsigned long: 0;
	struct UClass* ProviderClass; // 0x18 (0x4)
};

// 0x18 
struct FUIInputKeyData {
	struct FRawInputKeyEventData InputKeyData; // 0x0 (0xC)
	struct FString ButtonFontMarkupString; // 0xC (0xC)
};

// 0x50 
struct FUIDataStoreInputAlias {
	struct FName AliasName; // 0x0 (0x8)
	struct FUIInputKeyData PlatformInputKeys[3]; // 0x8 (0x48)
};

// 0x28 
struct FGameSearchCfg {
	struct UClass* GameSearchClass; // 0x0 (0x4)
	struct UClass* DefaultGameSettingsClass; // 0x4 (0x4)
	struct UClass* SearchResultsProviderClass; // 0x8 (0x4)
	struct UUIDataProvider_Settings* DesiredSettingsProvider; // 0xC (0x4)
	struct TArray_UUIDataProvider_SettingsPtr SearchResults; // 0x10 (0xC)
	struct UOnlineGameSearch* Search; // 0x1C (0x4)
	struct FName SearchName; // 0x20 (0x8)
};

// 0x14 
struct FGameSettingsCfg {
	struct UClass* GameSettingsClass; // 0x0 (0x4)
	struct UUIDataProvider_Settings* Provider; // 0x4 (0x4)
	struct UOnlineGameSettings* GameSettings; // 0x8 (0x4)
	struct FName SettingsName; // 0xC (0x8)
};

// 0x14 
struct FRankMetaData {
	const struct FName RankName; // 0x0 (0x8)
	const struct FString RankColumnName; // 0x8 (0xC)
};

// 0x14 
struct FPlayerNickMetaData {
	const struct FName PlayerNickName; // 0x0 (0x8)
	const struct FString PlayerNickColumnName; // 0x8 (0xC)
};

// 0x1C 
struct FUIMenuInputMap {
	struct FName FieldName; // 0x0 (0x8)
	struct FName Set; // 0x8 (0x8)
	struct FString MappedText; // 0x10 (0xC)
};

// 0x10 
struct FUIKeyRepeatData {
	struct FName CurrentRepeatKey; // 0x0 (0x8)
	struct FDouble NextRepeatTime; // 0x8 (0x8)
};

// 0x14 
struct FUIAxisEmulationData {
	struct FName CurrentRepeatKey; // 0x0 (0x8)
	struct FDouble NextRepeatTime; // 0x8 (0x8)
	BOOL bEnabled : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FSoundEventMapping {
	struct FName SoundEventName; // 0x0 (0x8)
	struct USoundCue* SoundToPlay; // 0x8 (0x4)
};

// 0x24 
struct FUIStatData {
	const BOOL bDisplayAsModifierOnly : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const unsigned char AttributeStyle; // 0x4 (0x1) (Enum = EAttributeTranslationStyle)
	const unsigned char SupplementalAttributeStyle; // 0x5 (0x1) (Enum = EAttributeTranslationStyle)
	const unsigned char StatCombinationMethod; // 0x6 (0x1) (Enum = EStatCombinationMethod)
	const unsigned char Unknown1[0x1]; // 0x7 (0x1) > LAST OFFSET
	const struct UAttributeDefinition* Attribute; // 0x8 (0x4)
	const struct UAttributeDefinition* ConstraintAttribute; // 0xC (0x4)
	const struct FAttributeExpressionData SupplementalAttributeExpression; // 0x10 (0x10)
	const struct UAttributeDefinition* SupplementalAttributeToAppend; // 0x20 (0x4)
};

// 0x4C 
struct FAttributeSlotEffectData {
	const struct FName SlotName; // 0x0 (0x8)
	const BOOL bExternalSlot : 1; // 0x8 (0x4)
	const BOOL bRunEffectsAsSkill : 1; // 0x8 (0x4)
	const unsigned long: 0;
	const struct UAttributeDefinition* AttributeToModify; // 0xC (0x4)
	const struct UAttributeDefinition* ConstraintAttribute; // 0x10 (0x4)
	const unsigned char ModifierType; // 0x14 (0x1) (Enum = EModifierType)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData BaseModifierValue; // 0x18 (0x10)
	const struct FAttributeInitializationData PerGradeUpgrade; // 0x28 (0x10)
	const BOOL bIncludeInFunStats : 1; // 0x38 (0x4)
	const BOOL bIncludeAlliesAsTarget : 1; // 0x38 (0x4)
	const BOOL bEnforceMinimumGrade : 1; // 0x38 (0x4)
	const BOOL bEnforceMaximumGrade : 1; // 0x38 (0x4)
	const unsigned long: 0;
	const int MinimumGrade; // 0x3C (0x4)
	const int MaximumGrade; // 0x40 (0x4)
	const struct FName TargetInstanceDataName; // 0x44 (0x8)
};

// 0x10 
struct FAttributeSlotUpgradeData {
	const struct FName SlotName; // 0x0 (0x8)
	const int GradeIncrease; // 0x8 (0x4)
	const BOOL bActivateSlot : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x34 
struct FInventorySerialNumber {
	unsigned char Buffer[40]; // 0x0 (0x28)
	unsigned char State; // 0x28 (0x1) (Enum = SerialNumberState)
	const unsigned char Unknown1[0x3]; // 0x29 (0x3) > LAST OFFSET
	int RunningCounter; // 0x2C (0x4)
	int EncryptedLength; // 0x30 (0x4)
};

// 0x50 
struct FAttributeSlotData {
	const struct FName SlotName; // 0x0 (0x8)
	const BOOL bExternalSlot : 1; // 0x8 (0x4)
	const BOOL bRunEffectsAsSkill : 1; // 0x8 (0x4)
	const BOOL bActivated : 1; // 0x8 (0x4)
	const BOOL bIncludeAlliesAsTarget : 1; // 0x8 (0x4)
	const BOOL bIncludeInModifierText : 1; // 0x8 (0x4)
	const BOOL bEnforceMinimumGrade : 1; // 0x8 (0x4)
	const BOOL bEnforceMaximumGrade : 1; // 0x8 (0x4)
	const unsigned long: 0;
	const int MinimumGrade; // 0xC (0x4)
	const int MaximumGrade; // 0x10 (0x4)
	const struct FName TargetInstanceDataName; // 0x14 (0x8)
	const int EffectGrade; // 0x1C (0x4)
	const struct UAttributeDefinition* AttributeToModify; // 0x20 (0x4)
	const struct UAttributeDefinition* ConstraintAttribute; // 0x24 (0x4)
	const unsigned char ModifierType; // 0x28 (0x1) (Enum = EModifierType)
	const unsigned char Unknown1[0x3]; // 0x29 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData BaseModifierValue; // 0x2C (0x10)
	const struct FAttributeInitializationData PerGradeUpgrade; // 0x3C (0x10)
	const float ComputedModifierValue; // 0x4C (0x4)
};

// 0x28 
struct FWorldEventSource {
	struct UAkEvent* AkEvent; // 0x0 (0x4)
	struct AActor* GroupActor; // 0x4 (0x4)
	struct TArray_UAkComponentPtr AkComponents; // 0x8 (0xC)
	struct TArray_AActorPtr Sources; // 0x14 (0xC)
	float LastUpdateTime; // 0x20 (0x4)
	BOOL bNeedsUpdate : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

