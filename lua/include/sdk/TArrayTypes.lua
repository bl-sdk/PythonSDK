-- ###################################
-- # Borderlands 2 SDK
-- # File Contents: TArray definitions
-- ###################################

local ffi = require("ffi")

ffi.cdef[[

struct FInterpCurvePointVector2D;
struct TArray_FInterpCurvePointVector2D {
	struct FInterpCurvePointVector2D* Data;
	int Count;
	int Max;
};

struct FInterpCurvePointFloat;
struct TArray_FInterpCurvePointFloat {
	struct FInterpCurvePointFloat* Data;
	int Count;
	int Max;
};

struct FInterpCurvePointVector;
struct TArray_FInterpCurvePointVector {
	struct FInterpCurvePointVector* Data;
	int Count;
	int Max;
};

struct TArray_float {
	float* Data;
	int Count;
	int Max;
};

struct FInterpCurvePointLinearColor;
struct TArray_FInterpCurvePointLinearColor {
	struct FInterpCurvePointLinearColor* Data;
	int Count;
	int Max;
};

struct FInterpCurvePointQuat;
struct TArray_FInterpCurvePointQuat {
	struct FInterpCurvePointQuat* Data;
	int Count;
	int Max;
};

struct FInterpCurvePointTwoVectors;
struct TArray_FInterpCurvePointTwoVectors {
	struct FInterpCurvePointTwoVectors* Data;
	int Count;
	int Max;
};

struct TArray_int {
	int* Data;
	int Count;
	int Max;
};

struct TArray_FString {
	struct FString* Data;
	int Count;
	int Max;
};

struct FStaticMeshLODElement;
struct TArray_FStaticMeshLODElement {
	struct FStaticMeshLODElement* Data;
	int Count;
	int Max;
};

struct FRigidBodyContactInfo;
struct TArray_FRigidBodyContactInfo {
	struct FRigidBodyContactInfo* Data;
	int Count;
	int Max;
};

struct FKeyValuePair;
struct TArray_FKeyValuePair {
	struct FKeyValuePair* Data;
	int Count;
	int Max;
};

struct FPlayerResponseLine;
struct TArray_FPlayerResponseLine {
	struct FPlayerResponseLine* Data;
	int Count;
	int Max;
};

struct FStringIdToStringMapping;
struct TArray_FStringIdToStringMapping {
	struct FStringIdToStringMapping* Data;
	int Count;
	int Max;
};

struct FIdToStringMapping;
struct TArray_FIdToStringMapping {
	struct FIdToStringMapping* Data;
	int Count;
	int Max;
};

struct FSettingsData;
struct TArray_FSettingsData {
	struct FSettingsData* Data;
	int Count;
	int Max;
};

struct FOnlineRegistrant;
struct TArray_FOnlineRegistrant {
	struct FOnlineRegistrant* Data;
	int Count;
	int Max;
};

struct FOnlineArbitrationRegistrant;
struct TArray_FOnlineArbitrationRegistrant {
	struct FOnlineArbitrationRegistrant* Data;
	int Count;
	int Max;
};

struct FSettingsProperty;
struct TArray_FSettingsProperty {
	struct FSettingsProperty* Data;
	int Count;
	int Max;
};

struct TArray_unsigned_char {
	unsigned char* Data;
	int Count;
	int Max;
};

struct FAppIdLicenseInfo;
struct TArray_FAppIdLicenseInfo {
	struct FAppIdLicenseInfo* Data;
	int Count;
	int Max;
};

struct FNamedOnlineContent;
struct TArray_FNamedOnlineContent {
	struct FNamedOnlineContent* Data;
	int Count;
	int Max;
};

struct FInstanceDataUnion;
struct TArray_FInstanceDataUnion {
	struct FInstanceDataUnion* Data;
	int Count;
	int Max;
};

struct FOnlineGameSearchParameter;
struct TArray_FOnlineGameSearchParameter {
	struct FOnlineGameSearchParameter* Data;
	int Count;
	int Max;
};

struct FOnlineGameSearchORClause;
struct TArray_FOnlineGameSearchORClause {
	struct FOnlineGameSearchORClause* Data;
	int Count;
	int Max;
};

struct FOnlineGameSearchSortClause;
struct TArray_FOnlineGameSearchSortClause {
	struct FOnlineGameSearchSortClause* Data;
	int Count;
	int Max;
};

struct FUniqueNetId;
struct TArray_FUniqueNetId {
	struct FUniqueNetId* Data;
	int Count;
	int Max;
};

struct FDouble;
struct TArray_FDouble {
	struct FDouble* Data;
	int Count;
	int Max;
};

struct UTexture;
struct TArray_UTexturePtr {
	struct UTexture** Data;
	int Count;
	int Max;
};

struct FSeqOpOutputInputLink;
struct TArray_FSeqOpOutputInputLink {
	struct FSeqOpOutputInputLink* Data;
	int Count;
	int Max;
};

struct USequenceVariable;
struct TArray_USequenceVariablePtr {
	struct USequenceVariable** Data;
	int Count;
	int Max;
};

struct USequenceEvent;
struct TArray_USequenceEventPtr {
	struct USequenceEvent** Data;
	int Count;
	int Max;
};

struct TArray_BOOL {
	BOOL* Data;
	int Count;
	int Max;
};

struct FGestaltLODModelFragment;
struct TArray_FGestaltLODModelFragment {
	struct FGestaltLODModelFragment* Data;
	int Count;
	int Max;
};

struct FGestaltLODModel;
struct TArray_FGestaltLODModel {
	struct FGestaltLODModel* Data;
	int Count;
	int Max;
};

struct FSocketRemapEntry;
struct TArray_FSocketRemapEntry {
	struct FSocketRemapEntry* Data;
	int Count;
	int Max;
};

struct FGestaltAccessoryEntry;
struct TArray_FGestaltAccessoryEntry {
	struct FGestaltAccessoryEntry* Data;
	int Count;
	int Max;
};

struct FInputEntry;
struct TArray_FInputEntry {
	struct FInputEntry* Data;
	int Count;
	int Max;
};

struct FVector;
struct TArray_FVector {
	struct FVector* Data;
	int Count;
	int Max;
};

struct FPlane;
struct TArray_FPlane {
	struct FPlane* Data;
	int Count;
	int Max;
};

struct FKSphereElem;
struct TArray_FKSphereElem {
	struct FKSphereElem* Data;
	int Count;
	int Max;
};

struct FKBoxElem;
struct TArray_FKBoxElem {
	struct FKBoxElem* Data;
	int Count;
	int Max;
};

struct FKSphylElem;
struct TArray_FKSphylElem {
	struct FKSphylElem* Data;
	int Count;
	int Max;
};

struct FKConvexElem;
struct TArray_FKConvexElem {
	struct FKConvexElem* Data;
	int Count;
	int Max;
};

struct FQuat;
struct TArray_FQuat {
	struct FQuat* Data;
	int Count;
	int Max;
};

struct FTimeModifier;
struct TArray_FTimeModifier {
	struct FTimeModifier* Data;
	int Count;
	int Max;
};

struct FBranchInfo;
struct TArray_FBranchInfo {
	struct FBranchInfo* Data;
	int Count;
	int Max;
};

struct FWeightRule;
struct TArray_FWeightRule {
	struct FWeightRule* Data;
	int Count;
	int Max;
};

struct FAimComponent;
struct TArray_FAimComponent {
	struct FAimComponent* Data;
	int Count;
	int Max;
};

struct FBoneAtom;
struct TArray_FBoneAtom {
	struct FBoneAtom* Data;
	int Count;
	int Max;
};

struct UAnimNodeSequence;
struct TArray_UAnimNodeSequencePtr {
	struct UAnimNodeSequence** Data;
	int Count;
	int Max;
};

struct FSubtitleCue;
struct TArray_FSubtitleCue {
	struct FSubtitleCue* Data;
	int Count;
	int Max;
};

struct UMorphTargetSet;
struct TArray_UMorphTargetSetPtr {
	struct UMorphTargetSet** Data;
	int Count;
	int Max;
};

struct UAnimSet;
struct TArray_UAnimSetPtr {
	struct UAnimSet** Data;
	int Count;
	int Max;
};

struct FNxDestructibleDepthParameters;
struct TArray_FNxDestructibleDepthParameters {
	struct FNxDestructibleDepthParameters* Data;
	int Count;
	int Max;
};

struct FAttributeExpressionData;
struct TArray_FAttributeExpressionData {
	struct FAttributeExpressionData* Data;
	int Count;
	int Max;
};

struct FConditionalValueExpression;
struct TArray_FConditionalValueExpression {
	struct FConditionalValueExpression* Data;
	int Count;
	int Max;
};

struct FBehaviorParameterUnion;
struct TArray_FBehaviorParameterUnion {
	struct FBehaviorParameterUnion* Data;
	int Count;
	int Max;
};

struct UBehaviorBase;
struct TArray_UBehaviorBasePtr {
	struct UBehaviorBase** Data;
	int Count;
	int Max;
};

struct UShadowMap2D;
struct TArray_UShadowMap2DPtr {
	struct UShadowMap2D** Data;
	int Count;
	int Max;
};

struct UObject;
struct TArray_UObjectPtr {
	struct UObject** Data;
	int Count;
	int Max;
};

struct USequenceOp;
struct TArray_USequenceOpPtr {
	struct USequenceOp** Data;
	int Count;
	int Max;
};

struct FPointer;
struct TArray_FPointer {
	struct FPointer* Data;
	int Count;
	int Max;
};

struct FFireLink;
struct TArray_FFireLink {
	struct FFireLink* Data;
	int Count;
	int Max;
};

struct FSlotMoveRef;
struct TArray_FSlotMoveRef {
	struct FSlotMoveRef* Data;
	int Count;
	int Max;
};

struct FCoverInfo;
struct TArray_FCoverInfo {
	struct FCoverInfo* Data;
	int Count;
	int Max;
};

struct FManualCoverTypeInfo;
struct TArray_FManualCoverTypeInfo {
	struct FManualCoverTypeInfo* Data;
	int Count;
	int Max;
};

struct UUIDataStore;
struct TArray_UUIDataStorePtr {
	struct UUIDataStore** Data;
	int Count;
	int Max;
};

struct FStatColorMapEntry;
struct TArray_FStatColorMapEntry {
	struct FStatColorMapEntry* Data;
	int Count;
	int Max;
};

struct FPrimitiveMaterialRef;
struct TArray_FPrimitiveMaterialRef {
	struct FPrimitiveMaterialRef* Data;
	int Count;
	int Max;
};

struct FPostProcessMaterialRef;
struct TArray_FPostProcessMaterialRef {
	struct FPostProcessMaterialRef* Data;
	int Count;
	int Max;
};

struct FPerPlayerSplitscreenData;
struct TArray_FPerPlayerSplitscreenData {
	struct FPerPlayerSplitscreenData* Data;
	int Count;
	int Max;
};

struct FGBXNavmeshCrossLevelConnection;
struct TArray_FGBXNavmeshCrossLevelConnection {
	struct FGBXNavmeshCrossLevelConnection* Data;
	int Count;
	int Max;
};

struct FGBXNavMeshSpecialMove;
struct TArray_FGBXNavMeshSpecialMove {
	struct FGBXNavMeshSpecialMove* Data;
	int Count;
	int Max;
};

struct FGBXNavMeshLookupCell;
struct TArray_FGBXNavMeshLookupCell {
	struct FGBXNavMeshLookupCell* Data;
	int Count;
	int Max;
};

struct FIGBXNavMeshObstaclePointer;
struct TArray_FIGBXNavMeshObstaclePointer {
	struct FIGBXNavMeshObstaclePointer* Data;
	int Count;
	int Max;
};

struct FGBXNavMeshPathPoint;
struct TArray_FGBXNavMeshPathPoint {
	struct FGBXNavMeshPathPoint* Data;
	int Count;
	int Max;
};

struct FEdgePointer;
struct TArray_FEdgePointer {
	struct FEdgePointer* Data;
	int Count;
	int Max;
};

struct FGestaltAccessoryPartEntry;
struct TArray_FGestaltAccessoryPartEntry {
	struct FGestaltAccessoryPartEntry* Data;
	int Count;
	int Max;
};

struct FGestaltAccessoryGroupEntry;
struct TArray_FGestaltAccessoryGroupEntry {
	struct FGestaltAccessoryGroupEntry* Data;
	int Count;
	int Max;
};

struct FHybridNavVisualizationVert;
struct TArray_FHybridNavVisualizationVert {
	struct FHybridNavVisualizationVert* Data;
	int Count;
	int Max;
};

struct FBodyInstanceDataUnion;
struct TArray_FBodyInstanceDataUnion {
	struct FBodyInstanceDataUnion* Data;
	int Count;
	int Max;
};

struct FCurveEdEntry;
struct TArray_FCurveEdEntry {
	struct FCurveEdEntry* Data;
	int Count;
	int Max;
};

struct UMaterialInstanceConstant;
struct TArray_UMaterialInstanceConstantPtr {
	struct UMaterialInstanceConstant** Data;
	int Count;
	int Max;
};

struct FInterpLookupPoint;
struct TArray_FInterpLookupPoint {
	struct FInterpLookupPoint* Data;
	int Count;
	int Max;
};

struct UMaterialInterface;
struct TArray_UMaterialInterfacePtr {
	struct UMaterialInterface** Data;
	int Count;
	int Max;
};

struct UMorphNodeBase;
struct TArray_UMorphNodeBasePtr {
	struct UMorphNodeBase** Data;
	int Count;
	int Max;
};

struct UUIDataProvider;
struct TArray_UUIDataProviderPtr {
	struct UUIDataProvider** Data;
	int Count;
	int Max;
};

struct FOnlineStatsColumn;
struct TArray_FOnlineStatsColumn {
	struct FOnlineStatsColumn* Data;
	int Count;
	int Max;
};

struct UParticleModuleEventSendToGame;
struct TArray_UParticleModuleEventSendToGamePtr {
	struct UParticleModuleEventSendToGame** Data;
	int Count;
	int Max;
};

struct FParticleEmitterReplayFrame;
struct TArray_FParticleEmitterReplayFrame {
	struct FParticleEmitterReplayFrame* Data;
	int Count;
	int Max;
};

struct FKCachedConvexDataElement;
struct TArray_FKCachedConvexDataElement {
	struct FKCachedConvexDataElement* Data;
	int Count;
	int Max;
};

struct FTriangleSortSettings;
struct TArray_FTriangleSortSettings {
	struct FTriangleSortSettings* Data;
	int Count;
	int Max;
};

struct FRecognisableWord;
struct TArray_FRecognisableWord {
	struct FRecognisableWord* Data;
	int Count;
	int Max;
};

struct TArray_FScriptInterface {
	struct FScriptInterface* Data;
	int Count;
	int Max;
};

struct FTerrainDecorationInstance;
struct TArray_FTerrainDecorationInstance {
	struct FTerrainDecorationInstance* Data;
	int Count;
	int Max;
};

struct FTerrainDecoration;
struct TArray_FTerrainDecoration {
	struct FTerrainDecoration* Data;
	int Count;
	int Max;
};

struct UUIDataProvider_Settings;
struct TArray_UUIDataProvider_SettingsPtr {
	struct UUIDataProvider_Settings** Data;
	int Count;
	int Max;
};

struct UAkComponent;
struct TArray_UAkComponentPtr {
	struct UAkComponent** Data;
	int Count;
	int Max;
};

struct AActor;
struct TArray_AActorPtr {
	struct AActor** Data;
	int Count;
	int Max;
};

struct USequenceObject;
struct TArray_USequenceObjectPtr {
	struct USequenceObject** Data;
	int Count;
	int Max;
};

struct FImpactInfo;
struct TArray_FImpactInfo {
	struct FImpactInfo* Data;
	int Count;
	int Max;
};

struct ANavigationPoint;
struct TArray_ANavigationPointPtr {
	struct ANavigationPoint** Data;
	int Count;
	int Max;
};

struct UReachSpec;
struct TArray_UReachSpecPtr {
	struct UReachSpec** Data;
	int Count;
	int Max;
};

struct USequence;
struct TArray_USequencePtr {
	struct USequence** Data;
	int Count;
	int Max;
};

struct FOnlineContent;
struct TArray_FOnlineContent {
	struct FOnlineContent* Data;
	int Count;
	int Max;
};

struct FCompatibilityOnlineContent;
struct TArray_FCompatibilityOnlineContent {
	struct FCompatibilityOnlineContent* Data;
	int Count;
	int Max;
};

struct APlayerController;
struct TArray_APlayerControllerPtr {
	struct APlayerController** Data;
	int Count;
	int Max;
};


// 0xC 
struct FRotator {
	int Pitch; // 0x0 (0x4)
	int Yaw; // 0x4 (0x4)
	int Roll; // 0x8 (0x4)
};
struct TArray_FRotator {
	struct FRotator* Data;
	int Count;
	int Max;
};

struct FCanvasUVTri;
struct TArray_FCanvasUVTri {
	struct FCanvasUVTri* Data;
	int Count;
	int Max;
};

struct FOnlinePlayerScore;
struct TArray_FOnlinePlayerScore {
	struct FOnlinePlayerScore* Data;
	int Count;
	int Max;
};

struct ATrigger;
struct TArray_ATriggerPtr {
	struct ATrigger** Data;
	int Count;
	int Max;
};

struct UClass;
struct TArray_UClassPtr {
	struct UClass** Data;
	int Count;
	int Max;
};

struct ULocalPlayer;
struct TArray_ULocalPlayerPtr {
	struct ULocalPlayer** Data;
	int Count;
	int Max;
};

struct UAnimNode;
struct TArray_UAnimNodePtr {
	struct UAnimNode** Data;
	int Count;
	int Max;
};

struct FInfoBarData;
struct TArray_FInfoBarData {
	struct FInfoBarData* Data;
	int Count;
	int Max;
};

struct FLocalizedStringSetting;
struct TArray_FLocalizedStringSetting {
	struct FLocalizedStringSetting* Data;
	int Count;
	int Max;
};

struct FBiasedGoalActor;
struct TArray_FBiasedGoalActor {
	struct FBiasedGoalActor* Data;
	int Count;
	int Max;
};

struct FAnimSlotInfo;
struct TArray_FAnimSlotInfo {
	struct FAnimSlotInfo* Data;
	int Count;
	int Max;
};

struct AVolume;
struct TArray_AVolumePtr {
	struct AVolume** Data;
	int Count;
	int Max;
};

struct UInterpData;
struct TArray_UInterpDataPtr {
	struct UInterpData** Data;
	int Count;
	int Max;
};

struct TArray_FScriptDelegate {
	struct FScriptDelegate* Data;
	int Count;
	int Max;
};

struct FUIDataProviderField;
struct TArray_FUIDataProviderField {
	struct FUIDataProviderField* Data;
	int Count;
	int Max;
};

struct UUIResourceCombinationProvider;
struct TArray_UUIResourceCombinationProviderPtr {
	struct UUIResourceCombinationProvider** Data;
	int Count;
	int Max;
};

struct UUIResourceDataProvider;
struct TArray_UUIResourceDataProviderPtr {
	struct UUIResourceDataProvider** Data;
	int Count;
	int Max;
};

struct UUIDataProvider_MenuItem;
struct TArray_UUIDataProvider_MenuItemPtr {
	struct UUIDataProvider_MenuItem** Data;
	int Count;
	int Max;
};

struct FBonePair;
struct TArray_FBonePair {
	struct FBonePair* Data;
	int Count;
	int Max;
};

struct ASplineActor;
struct TArray_ASplineActorPtr {
	struct ASplineActor** Data;
	int Count;
	int Max;
};

struct FAppliedAttributeEffect;
struct TArray_FAppliedAttributeEffect {
	struct FAppliedAttributeEffect* Data;
	int Count;
	int Max;
};

struct FAttributeEffectData;
struct TArray_FAttributeEffectData {
	struct FAttributeEffectData* Data;
	int Count;
	int Max;
};

struct FConditionalSoundData;
struct TArray_FConditionalSoundData {
	struct FConditionalSoundData* Data;
	int Count;
	int Max;
};

struct UPrimitiveComponent;
struct TArray_UPrimitiveComponentPtr {
	struct UPrimitiveComponent** Data;
	int Count;
	int Max;
};

struct USkeletalMesh;
struct TArray_USkeletalMeshPtr {
	struct USkeletalMesh** Data;
	int Count;
	int Max;
};

struct FOnlinePartyMember;
struct TArray_FOnlinePartyMember {
	struct FOnlinePartyMember* Data;
	int Count;
	int Max;
};

struct FSpeechRecognizedWord;
struct TArray_FSpeechRecognizedWord {
	struct FSpeechRecognizedWord* Data;
	int Count;
	int Max;
};

struct FMarketplaceContent;
struct TArray_FMarketplaceContent {
	struct FMarketplaceContent* Data;
	int Count;
	int Max;
};

struct FOnlineCrossTitleContent;
struct TArray_FOnlineCrossTitleContent {
	struct FOnlineCrossTitleContent* Data;
	int Count;
	int Max;
};

struct FAchievementDetails;
struct TArray_FAchievementDetails {
	struct FAchievementDetails* Data;
	int Count;
	int Max;
};

struct FOnlineFriendMessage;
struct TArray_FOnlineFriendMessage {
	struct FOnlineFriendMessage* Data;
	int Count;
	int Max;
};

struct FOnlineFriend;
struct TArray_FOnlineFriend {
	struct FOnlineFriend* Data;
	int Count;
	int Max;
};

struct FFriendsQuery;
struct TArray_FFriendsQuery {
	struct FFriendsQuery* Data;
	int Count;
	int Max;
};

struct FCommunityContentFile;
struct TArray_FCommunityContentFile {
	struct FCommunityContentFile* Data;
	int Count;
	int Max;
};

struct FCurrentPlayerMet;
struct TArray_FCurrentPlayerMet {
	struct FCurrentPlayerMet* Data;
	int Count;
	int Max;
};

struct FGameEvents;
struct TArray_FGameEvents {
	struct FGameEvents* Data;
	int Count;
	int Max;
};

struct FASValue;
struct TArray_FASValue {
	struct FASValue* Data;
	int Count;
	int Max;
};

struct UGFxObject;
struct TArray_UGFxObjectPtr {
	struct UGFxObject** Data;
	int Count;
	int Max;
};

struct UExpressionEvaluator;
struct TArray_UExpressionEvaluatorPtr {
	struct UExpressionEvaluator** Data;
	int Count;
	int Max;
};

struct FCoverDebugScoringInfo;
struct TArray_FCoverDebugScoringInfo {
	struct FCoverDebugScoringInfo* Data;
	int Count;
	int Max;
};

struct FObjectKey;
struct TArray_FObjectKey {
	struct FObjectKey* Data;
	int Count;
	int Max;
};

struct FBehaviorVariableLinkData;
struct TArray_FBehaviorVariableLinkData {
	struct FBehaviorVariableLinkData* Data;
	int Count;
	int Max;
};

struct FBehaviorActionLinkData;
struct TArray_FBehaviorActionLinkData {
	struct FBehaviorActionLinkData* Data;
	int Count;
	int Max;
};

struct FBehaviorOutputLinkData;
struct TArray_FBehaviorOutputLinkData {
	struct FBehaviorOutputLinkData* Data;
	int Count;
	int Max;
};

struct FBehaviorEventData;
struct TArray_FBehaviorEventData {
	struct FBehaviorEventData* Data;
	int Count;
	int Max;
};

struct FBehaviorEventData2;
struct TArray_FBehaviorEventData2 {
	struct FBehaviorEventData2* Data;
	int Count;
	int Max;
};

struct FBehaviorSequenceActionData;
struct TArray_FBehaviorSequenceActionData {
	struct FBehaviorSequenceActionData* Data;
	int Count;
	int Max;
};

struct FBehaviorSequenceActionData2;
struct TArray_FBehaviorSequenceActionData2 {
	struct FBehaviorSequenceActionData2* Data;
	int Count;
	int Max;
};

struct FBehaviorVariableData;
struct TArray_FBehaviorVariableData {
	struct FBehaviorVariableData* Data;
	int Count;
	int Max;
};

struct FBehaviorOutputLinkData2;
struct TArray_FBehaviorOutputLinkData2 {
	struct FBehaviorOutputLinkData2* Data;
	int Count;
	int Max;
};

struct FBehaviorVariableLinkData2;
struct TArray_FBehaviorVariableLinkData2 {
	struct FBehaviorVariableLinkData2* Data;
	int Count;
	int Max;
};

struct UGearboxEditorNode;
struct TArray_UGearboxEditorNodePtr {
	struct UGearboxEditorNode** Data;
	int Count;
	int Max;
};

struct FVantageSpot;
struct TArray_FVantageSpot {
	struct FVantageSpot* Data;
	int Count;
	int Max;
};

struct FExposureUpdateStruct;
struct TArray_FExposureUpdateStruct {
	struct FExposureUpdateStruct* Data;
	int Count;
	int Max;
};

struct UFiringCondition;
struct TArray_UFiringConditionPtr {
	struct UFiringCondition** Data;
	int Count;
	int Max;
};

struct FFlagEvalConditional;
struct TArray_FFlagEvalConditional {
	struct FFlagEvalConditional* Data;
	int Count;
	int Max;
};

struct FEntitlementResult;
struct TArray_FEntitlementResult {
	struct FEntitlementResult* Data;
	int Count;
	int Max;
};

struct FOfferResult;
struct TArray_FOfferResult {
	struct FOfferResult* Data;
	int Count;
	int Max;
};

struct FServiceParameterResult;
struct TArray_FServiceParameterResult {
	struct FServiceParameterResult* Data;
	int Count;
	int Max;
};

struct FServiceResult;
struct TArray_FServiceResult {
	struct FServiceResult* Data;
	int Count;
	int Max;
};

struct FGearboxDialogData;
struct TArray_FGearboxDialogData {
	struct FGearboxDialogData* Data;
	int Count;
	int Max;
};

struct UAttributeModifier;
struct TArray_UAttributeModifierPtr {
	struct UAttributeModifier** Data;
	int Count;
	int Max;
};

struct FCoverDebugScoringData;
struct TArray_FCoverDebugScoringData {
	struct FCoverDebugScoringData* Data;
	int Count;
	int Max;
};

struct FTargetPriorityInfo;
struct TArray_FTargetPriorityInfo {
	struct FTargetPriorityInfo* Data;
	int Count;
	int Max;
};

struct FGestaltPart;
struct TArray_FGestaltPart {
	struct FGestaltPart* Data;
	int Count;
	int Max;
};

struct UGearboxGFxMovie;
struct TArray_UGearboxGFxMoviePtr {
	struct UGearboxGFxMovie** Data;
	int Count;
	int Max;
};

struct UPopulationSpawnedActorTagDefinition;
struct TArray_UPopulationSpawnedActorTagDefinitionPtr {
	struct UPopulationSpawnedActorTagDefinition** Data;
	int Count;
	int Max;
};

struct APopulationOpportunity;
struct TArray_APopulationOpportunityPtr {
	struct APopulationOpportunity** Data;
	int Count;
	int Max;
};

struct FEncounterLimitData;
struct TArray_FEncounterLimitData {
	struct FEncounterLimitData* Data;
	int Count;
	int Max;
};

struct FSpawnedPopulationActor;
struct TArray_FSpawnedPopulationActor {
	struct FSpawnedPopulationActor* Data;
	int Count;
	int Max;
};

struct FRemovedPopulationActor;
struct TArray_FRemovedPopulationActor {
	struct FRemovedPopulationActor* Data;
	int Count;
	int Max;
};

struct FEncounterWaveTracker;
struct TArray_FEncounterWaveTracker {
	struct FEncounterWaveTracker* Data;
	int Count;
	int Max;
};

struct FPopulationOptionAreaPopDefData;
struct TArray_FPopulationOptionAreaPopDefData {
	struct FPopulationOptionAreaPopDefData* Data;
	int Count;
	int Max;
};

struct FPopulationOptionSpawnDefData;
struct TArray_FPopulationOptionSpawnDefData {
	struct FPopulationOptionSpawnDefData* Data;
	int Count;
	int Max;
};

struct FDebugStringData;
struct TArray_FDebugStringData {
	struct FDebugStringData* Data;
	int Count;
	int Max;
};

struct AGearboxAIMoveNode;
struct TArray_AGearboxAIMoveNodePtr {
	struct AGearboxAIMoveNode** Data;
	int Count;
	int Max;
};

struct UGearboxDialogGroup;
struct TArray_UGearboxDialogGroupPtr {
	struct UGearboxDialogGroup** Data;
	int Count;
	int Max;
};

struct FEULAData;
struct TArray_FEULAData {
	struct FEULAData* Data;
	int Count;
	int Max;
};

struct FGestaltPartPermutation;
struct TArray_FGestaltPartPermutation {
	struct FGestaltPartPermutation* Data;
	int Count;
	int Max;
};

struct FSMBehavior;
struct TArray_FSMBehavior {
	struct FSMBehavior* Data;
	int Count;
	int Max;
};

struct URule;
struct TArray_URulePtr {
	struct URule** Data;
	int Count;
	int Max;
};

struct UKnowledgeRecord;
struct TArray_UKnowledgeRecordPtr {
	struct UKnowledgeRecord** Data;
	int Count;
	int Max;
};

struct FFlagDefinitionInitialization;
struct TArray_FFlagDefinitionInitialization {
	struct FFlagDefinitionInitialization* Data;
	int Count;
	int Max;
};

struct AGearboxPawn;
struct TArray_AGearboxPawnPtr {
	struct AGearboxPawn** Data;
	int Count;
	int Max;
};

struct UPopulationFactory;
struct TArray_UPopulationFactoryPtr {
	struct UPopulationFactory** Data;
	int Count;
	int Max;
};

struct UBehaviorProviderDefinition;
struct TArray_UBehaviorProviderDefinitionPtr {
	struct UBehaviorProviderDefinition** Data;
	int Count;
	int Max;
};

struct FBehaviorVariableValue;
struct TArray_FBehaviorVariableValue {
	struct FBehaviorVariableValue* Data;
	int Count;
	int Max;
};

struct UGearboxAccountOffer;
struct TArray_UGearboxAccountOfferPtr {
	struct UGearboxAccountOffer** Data;
	int Count;
	int Max;
};

struct UGearboxAccountEntitlement;
struct TArray_UGearboxAccountEntitlementPtr {
	struct UGearboxAccountEntitlement** Data;
	int Count;
	int Max;
};

struct UJsonObject;
struct TArray_UJsonObjectPtr {
	struct UJsonObject** Data;
	int Count;
	int Max;
};

struct FConnectionBandwidthStats;
struct TArray_FConnectionBandwidthStats {
	struct FConnectionBandwidthStats* Data;
	int Count;
	int Max;
};

struct FConfiguredGameSetting;
struct TArray_FConfiguredGameSetting {
	struct FConfiguredGameSetting* Data;
	int Count;
	int Max;
};

struct FInventorySwap;
struct TArray_FInventorySwap {
	struct FInventorySwap* Data;
	int Count;
	int Max;
};

struct FPlayerReservation;
struct TArray_FPlayerReservation {
	struct FPlayerReservation* Data;
	int Count;
	int Max;
};

struct FPlayerMember;
struct TArray_FPlayerMember {
	struct FPlayerMember* Data;
	int Count;
	int Max;
};

struct FEnvironmentalEffectInfo;
struct TArray_FEnvironmentalEffectInfo {
	struct FEnvironmentalEffectInfo* Data;
	int Count;
	int Max;
};

struct FPlayerStat;
struct TArray_FPlayerStat {
	struct FPlayerStat* Data;
	int Count;
	int Max;
};

struct FSteamPlayerClanData;
struct TArray_FSteamPlayerClanData {
	struct FSteamPlayerClanData* Data;
	int Count;
	int Max;
};

struct USpecialMove_Cringe;
struct TArray_USpecialMove_CringePtr {
	struct USpecialMove_Cringe** Data;
	int Count;
	int Max;
};

struct UParticleSystemComponent;
struct TArray_UParticleSystemComponentPtr {
	struct UParticleSystemComponent** Data;
	int Count;
	int Max;
};

struct FAttributeBaseValueData;
struct TArray_FAttributeBaseValueData {
	struct FAttributeBaseValueData* Data;
	int Count;
	int Max;
};

struct FAITransformedName;
struct TArray_FAITransformedName {
	struct FAITransformedName* Data;
	int Count;
	int Max;
};

struct UItemPoolListDefinition;
struct TArray_UItemPoolListDefinitionPtr {
	struct UItemPoolListDefinition** Data;
	int Count;
	int Max;
};

struct FItemPoolInfo;
struct TArray_FItemPoolInfo {
	struct FItemPoolInfo* Data;
	int Count;
	int Max;
};

struct FCardInfoRelativeToPanel;
struct TArray_FCardInfoRelativeToPanel {
	struct FCardInfoRelativeToPanel* Data;
	int Count;
	int Max;
};

struct UMissionObjectiveSetDefinition;
struct TArray_UMissionObjectiveSetDefinitionPtr {
	struct UMissionObjectiveSetDefinition** Data;
	int Count;
	int Max;
};

struct FAttributeScalarParam;
struct TArray_FAttributeScalarParam {
	struct FAttributeScalarParam* Data;
	int Count;
	int Max;
};

struct FScreenParticleModifier;
struct TArray_FScreenParticleModifier {
	struct FScreenParticleModifier* Data;
	int Count;
	int Max;
};

struct FScreenParticleScalarParamOverTime;
struct TArray_FScreenParticleScalarParamOverTime {
	struct FScreenParticleScalarParamOverTime* Data;
	int Count;
	int Max;
};

struct FScreenParticleVectorParamOverTime;
struct TArray_FScreenParticleVectorParamOverTime {
	struct FScreenParticleVectorParamOverTime* Data;
	int Count;
	int Max;
};

struct FMaterialEffectModifier;
struct TArray_FMaterialEffectModifier {
	struct FMaterialEffectModifier* Data;
	int Count;
	int Max;
};

struct FParticleSysParam;
struct TArray_FParticleSysParam {
	struct FParticleSysParam* Data;
	int Count;
	int Max;
};

struct FFontParameterValue;
struct TArray_FFontParameterValue {
	struct FFontParameterValue* Data;
	int Count;
	int Max;
};

struct FScalarParameterValue;
struct TArray_FScalarParameterValue {
	struct FScalarParameterValue* Data;
	int Count;
	int Max;
};

struct FTextureParameterValue;
struct TArray_FTextureParameterValue {
	struct FTextureParameterValue* Data;
	int Count;
	int Max;
};

struct FVectorParameterValue;
struct TArray_FVectorParameterValue {
	struct FVectorParameterValue* Data;
	int Count;
	int Max;
};

struct FRtpcParameterValue;
struct TArray_FRtpcParameterValue {
	struct FRtpcParameterValue* Data;
	int Count;
	int Max;
};

struct UBodyHitRegionDefinition;
struct TArray_UBodyHitRegionDefinitionPtr {
	struct UBodyHitRegionDefinition** Data;
	int Count;
	int Max;
};

struct FSocketEmitter;
struct TArray_FSocketEmitter {
	struct FSocketEmitter* Data;
	int Count;
	int Max;
};

struct FConditionalAnimData;
struct TArray_FConditionalAnimData {
	struct FConditionalAnimData* Data;
	int Count;
	int Max;
};

struct FBodyWeaponActionData;
struct TArray_FBodyWeaponActionData {
	struct FBodyWeaponActionData* Data;
	int Count;
	int Max;
};

struct FGoreTriggerData;
struct TArray_FGoreTriggerData {
	struct FGoreTriggerData* Data;
	int Count;
	int Max;
};

struct UWillowAnimNode_Simple;
struct TArray_UWillowAnimNode_SimplePtr {
	struct UWillowAnimNode_Simple** Data;
	int Count;
	int Max;
};

struct FSkillDamagedEventConstraintData;
struct TArray_FSkillDamagedEventConstraintData {
	struct FSkillDamagedEventConstraintData* Data;
	int Count;
	int Max;
};

struct USkillDefinition;
struct TArray_USkillDefinitionPtr {
	struct USkillDefinition** Data;
	int Count;
	int Max;
};

struct USkillExpressionEvaluatorDefinition;
struct TArray_USkillExpressionEvaluatorDefinitionPtr {
	struct USkillExpressionEvaluatorDefinition** Data;
	int Count;
	int Max;
};

struct FBonusAttributeModifierUpgrade;
struct TArray_FBonusAttributeModifierUpgrade {
	struct FBonusAttributeModifierUpgrade* Data;
	int Count;
	int Max;
};

struct UMissionDefinition;
struct TArray_UMissionDefinitionPtr {
	struct UMissionDefinition** Data;
	int Count;
	int Max;
};

struct UGameBalanceDefinition;
struct TArray_UGameBalanceDefinitionPtr {
	struct UGameBalanceDefinition** Data;
	int Count;
	int Max;
};

struct FPendingMissionRewardData;
struct TArray_FPendingMissionRewardData {
	struct FPendingMissionRewardData* Data;
	int Count;
	int Max;
};

struct FMissionStatusPlayerData;
struct TArray_FMissionStatusPlayerData {
	struct FMissionStatusPlayerData* Data;
	int Count;
	int Max;
};

struct FUnloadableDlcMissionStatusData;
struct TArray_FUnloadableDlcMissionStatusData {
	struct FUnloadableDlcMissionStatusData* Data;
	int Count;
	int Max;
};

struct FUnloadableDlcPendingRewardData;
struct TArray_FUnloadableDlcPendingRewardData {
	struct FUnloadableDlcPendingRewardData* Data;
	int Count;
	int Max;
};

struct UWillowSkelControl_TurretConstrained;
struct TArray_UWillowSkelControl_TurretConstrainedPtr {
	struct UWillowSkelControl_TurretConstrained** Data;
	int Count;
	int Max;
};

struct FTimePosition;
struct TArray_FTimePosition {
	struct FTimePosition* Data;
	int Count;
	int Max;
};

struct USpecialMove_Vehicle;
struct TArray_USpecialMove_VehiclePtr {
	struct USpecialMove_Vehicle** Data;
	int Count;
	int Max;
};

struct UChallengeConditionDefinition;
struct TArray_UChallengeConditionDefinitionPtr {
	struct UChallengeConditionDefinition** Data;
	int Count;
	int Max;
};

struct UDamageTypeDefinition;
struct TArray_UDamageTypeDefinitionPtr {
	struct UDamageTypeDefinition** Data;
	int Count;
	int Max;
};

struct FInventoryGameStageGradeWeightData;
struct TArray_FInventoryGameStageGradeWeightData {
	struct FInventoryGameStageGradeWeightData* Data;
	int Count;
	int Max;
};

struct FManufacturerCustomGradeWeightData;
struct TArray_FManufacturerCustomGradeWeightData {
	struct FManufacturerCustomGradeWeightData* Data;
	int Count;
	int Max;
};

struct FItemPartGradeWeightData;
struct TArray_FItemPartGradeWeightData {
	struct FItemPartGradeWeightData* Data;
	int Count;
	int Max;
};

struct FCoordinatedScalarParameter;
struct TArray_FCoordinatedScalarParameter {
	struct FCoordinatedScalarParameter* Data;
	int Count;
	int Max;
};

struct FCoordinatedVectorParameter;
struct TArray_FCoordinatedVectorParameter {
	struct FCoordinatedVectorParameter* Data;
	int Count;
	int Max;
};

struct FLootAttachmentData;
struct TArray_FLootAttachmentData {
	struct FLootAttachmentData* Data;
	int Count;
	int Max;
};

struct UInteractiveObjectLootListDefinition;
struct TArray_UInteractiveObjectLootListDefinitionPtr {
	struct UInteractiveObjectLootListDefinition** Data;
	int Count;
	int Max;
};

struct FLootConfigurationData;
struct TArray_FLootConfigurationData {
	struct FLootConfigurationData* Data;
	int Count;
	int Max;
};

struct FColiseumStat;
struct TArray_FColiseumStat {
	struct FColiseumStat* Data;
	int Count;
	int Max;
};

struct UWaypointComponent;
struct TArray_UWaypointComponentPtr {
	struct UWaypointComponent** Data;
	int Count;
	int Max;
};

struct FMissionStateBalanceAdjustment;
struct TArray_FMissionStateBalanceAdjustment {
	struct FMissionStateBalanceAdjustment* Data;
	int Count;
	int Max;
};

struct UInputActionDefinition;
struct TArray_UInputActionDefinitionPtr {
	struct UInputActionDefinition** Data;
	int Count;
	int Max;
};

struct UItemPoolDefinition;
struct TArray_UItemPoolDefinitionPtr {
	struct UItemPoolDefinition** Data;
	int Count;
	int Max;
};

struct UInventoryBalanceDefinition;
struct TArray_UInventoryBalanceDefinitionPtr {
	struct UInventoryBalanceDefinition** Data;
	int Count;
	int Max;
};

struct FPartGradeWeightData;
struct TArray_FPartGradeWeightData {
	struct FPartGradeWeightData* Data;
	int Count;
	int Max;
};

struct FRelevanceUpdateStruct;
struct TArray_FRelevanceUpdateStruct {
	struct FRelevanceUpdateStruct* Data;
	int Count;
	int Max;
};

struct AWillowPlayerController;
struct TArray_AWillowPlayerControllerPtr {
	struct AWillowPlayerController** Data;
	int Count;
	int Max;
};

struct FWeaponMemento;
struct TArray_FWeaponMemento {
	struct FWeaponMemento* Data;
	int Count;
	int Max;
};

struct FItemMemento;
struct TArray_FItemMemento {
	struct FItemMemento* Data;
	int Count;
	int Max;
};

struct FDamageTypeBySpeedStruct;
struct TArray_FDamageTypeBySpeedStruct {
	struct FDamageTypeBySpeedStruct* Data;
	int Count;
	int Max;
};

struct FBoneRotateData;
struct TArray_FBoneRotateData {
	struct FBoneRotateData* Data;
	int Count;
	int Max;
};

struct FAnimDeltaDataList;
struct TArray_FAnimDeltaDataList {
	struct FAnimDeltaDataList* Data;
	int Count;
	int Max;
};

struct FAnimSwapData;
struct TArray_FAnimSwapData {
	struct FAnimSwapData* Data;
	int Count;
	int Max;
};

struct FCoordinatedEffectThread;
struct TArray_FCoordinatedEffectThread {
	struct FCoordinatedEffectThread* Data;
	int Count;
	int Max;
};

struct FColumnLayoutData;
struct TArray_FColumnLayoutData {
	struct FColumnLayoutData* Data;
	int Count;
	int Max;
};

struct FDialogBoxButton;
struct TArray_FDialogBoxButton {
	struct FDialogBoxButton* Data;
	int Count;
	int Max;
};

struct FCriticalTextMessage;
struct TArray_FCriticalTextMessage {
	struct FCriticalTextMessage* Data;
	int Count;
	int Max;
};

struct FInputDeviceButtonAddress;
struct TArray_FInputDeviceButtonAddress {
	struct FInputDeviceButtonAddress* Data;
	int Count;
	int Max;
};

struct FVehicleSpawnStationPooledVehicle;
struct TArray_FVehicleSpawnStationPooledVehicle {
	struct FVehicleSpawnStationPooledVehicle* Data;
	int Count;
	int Max;
};

struct FSpawnAnimPair;
struct TArray_FSpawnAnimPair {
	struct FSpawnAnimPair* Data;
	int Count;
	int Max;
};

struct FColumnData;
struct TArray_FColumnData {
	struct FColumnData* Data;
	int Count;
	int Max;
};

struct FGearBuilderWeightedInventoryPart;
struct TArray_FGearBuilderWeightedInventoryPart {
	struct FGearBuilderWeightedInventoryPart* Data;
	int Count;
	int Max;
};

struct FGearBuilderWeightedWeaponPart;
struct TArray_FGearBuilderWeightedWeaponPart {
	struct FGearBuilderWeightedWeaponPart* Data;
	int Count;
	int Max;
};

struct FGearBuilderCustomizationData;
struct TArray_FGearBuilderCustomizationData {
	struct FGearBuilderCustomizationData* Data;
	int Count;
	int Max;
};

struct FTempWeaponStruct;
struct TArray_FTempWeaponStruct {
	struct FTempWeaponStruct* Data;
	int Count;
	int Max;
};

struct FLevelBasedStatusEffectChanceScale;
struct TArray_FLevelBasedStatusEffectChanceScale {
	struct FLevelBasedStatusEffectChanceScale* Data;
	int Count;
	int Max;
};

struct FLevelBasedDamageScale;
struct TArray_FLevelBasedDamageScale {
	struct FLevelBasedDamageScale* Data;
	int Count;
	int Max;
};

struct UAIPawnBalanceModifierDefinition;
struct TArray_UAIPawnBalanceModifierDefinitionPtr {
	struct UAIPawnBalanceModifierDefinition** Data;
	int Count;
	int Max;
};

struct UCustomizationDefinition;
struct TArray_UCustomizationDefinitionPtr {
	struct UCustomizationDefinition** Data;
	int Count;
	int Max;
};

struct UGearboxAnimDefinition;
struct TArray_UGearboxAnimDefinitionPtr {
	struct UGearboxAnimDefinition** Data;
	int Count;
	int Max;
};

struct FModifierValuePresentationData;
struct TArray_FModifierValuePresentationData {
	struct FModifierValuePresentationData* Data;
	int Count;
	int Max;
};

struct FTopStatData;
struct TArray_FTopStatData {
	struct FTopStatData* Data;
	int Count;
	int Max;
};

struct FSpawnedDroppedLootData;
struct TArray_FSpawnedDroppedLootData {
	struct FSpawnedDroppedLootData* Data;
	int Count;
	int Max;
};

struct FSpawnedAttachedLootData;
struct TArray_FSpawnedAttachedLootData {
	struct FSpawnedAttachedLootData* Data;
	int Count;
	int Max;
};

struct FMissionDirectorData;
struct TArray_FMissionDirectorData {
	struct FMissionDirectorData* Data;
	int Count;
	int Max;
};

struct UClassModDefinition;
struct TArray_UClassModDefinitionPtr {
	struct UClassModDefinition** Data;
	int Count;
	int Max;
};

struct FShopItemData;
struct TArray_FShopItemData {
	struct FShopItemData* Data;
	int Count;
	int Max;
};

struct AWillowWeapon;
struct TArray_AWillowWeaponPtr {
	struct AWillowWeapon** Data;
	int Count;
	int Max;
};

struct AWillowItem;
struct TArray_AWillowItemPtr {
	struct AWillowItem** Data;
	int Count;
	int Max;
};

struct AWillowInventory;
struct TArray_AWillowInventoryPtr {
	struct AWillowInventory** Data;
	int Count;
	int Max;
};

struct FMissionRewardPresentationData;
struct TArray_FMissionRewardPresentationData {
	struct FMissionRewardPresentationData* Data;
	int Count;
	int Max;
};

struct UMissionObjectiveWaypointComponent;
struct TArray_UMissionObjectiveWaypointComponentPtr {
	struct UMissionObjectiveWaypointComponent** Data;
	int Count;
	int Max;
};

struct UMissionObjectiveDefinition;
struct TArray_UMissionObjectiveDefinitionPtr {
	struct UMissionObjectiveDefinition** Data;
	int Count;
	int Max;
};

struct FGoldenKeySource;
struct TArray_FGoldenKeySource {
	struct FGoldenKeySource* Data;
	int Count;
	int Max;
};

struct UKeyedItemPoolDefinition;
struct TArray_UKeyedItemPoolDefinitionPtr {
	struct UKeyedItemPoolDefinition** Data;
	int Count;
	int Max;
};

struct UChallengeDefinition;
struct TArray_UChallengeDefinitionPtr {
	struct UChallengeDefinition** Data;
	int Count;
	int Max;
};

struct APawn;
struct TArray_APawnPtr {
	struct APawn** Data;
	int Count;
	int Max;
};

struct AWillowPickup;
struct TArray_AWillowPickupPtr {
	struct AWillowPickup** Data;
	int Count;
	int Max;
};

struct FMissionRewardData;
struct TArray_FMissionRewardData {
	struct FMissionRewardData* Data;
	int Count;
	int Max;
};

struct FWeaponSaveGameData;
struct TArray_FWeaponSaveGameData {
	struct FWeaponSaveGameData* Data;
	int Count;
	int Max;
};

struct FInventorySaveGameData;
struct TArray_FInventorySaveGameData {
	struct FInventorySaveGameData* Data;
	int Count;
	int Max;
};

struct FStatusMenuMissionEligibilityData;
struct TArray_FStatusMenuMissionEligibilityData {
	struct FStatusMenuMissionEligibilityData* Data;
	int Count;
	int Max;
};

struct FSlaughterMissionChain;
struct TArray_FSlaughterMissionChain {
	struct FSlaughterMissionChain* Data;
	int Count;
	int Max;
};

struct USkeletalMeshComponent;
struct TArray_USkeletalMeshComponentPtr {
	struct USkeletalMeshComponent** Data;
	int Count;
	int Max;
};

struct UActorComponent;
struct TArray_UActorComponentPtr {
	struct UActorComponent** Data;
	int Count;
	int Max;
};

struct AWillowPawn;
struct TArray_AWillowPawnPtr {
	struct AWillowPawn** Data;
	int Count;
	int Max;
};

struct FActiveStatusEffect;
struct TArray_FActiveStatusEffect {
	struct FActiveStatusEffect* Data;
	int Count;
	int Max;
};

struct UStatusEffectDefinition;
struct TArray_UStatusEffectDefinitionPtr {
	struct UStatusEffectDefinition** Data;
	int Count;
	int Max;
};

struct FCurrencyPresentation;
struct TArray_FCurrencyPresentation {
	struct FCurrencyPresentation* Data;
	int Count;
	int Max;
};

struct UPlayerNameIdentifierDefinition;
struct TArray_UPlayerNameIdentifierDefinitionPtr {
	struct UPlayerNameIdentifierDefinition** Data;
	int Count;
	int Max;
};

struct UItemNamePartDefinition;
struct TArray_UItemNamePartDefinitionPtr {
	struct UItemNamePartDefinition** Data;
	int Count;
	int Max;
};

struct UStanceTypeDefinition;
struct TArray_UStanceTypeDefinitionPtr {
	struct UStanceTypeDefinition** Data;
	int Count;
	int Max;
};

struct FPlayerSaveData;
struct TArray_FPlayerSaveData {
	struct FPlayerSaveData* Data;
	int Count;
	int Max;
};

struct FConditionalAnimationData;
struct TArray_FConditionalAnimationData {
	struct FConditionalAnimationData* Data;
	int Count;
	int Max;
};

struct UWeaponNamePartDefinition;
struct TArray_UWeaponNamePartDefinitionPtr {
	struct UWeaponNamePartDefinition** Data;
	int Count;
	int Max;
};

struct UAttackLocation;
struct TArray_UAttackLocationPtr {
	struct UAttackLocation** Data;
	int Count;
	int Max;
};

struct Fartifact_datum;
struct TArray_Fartifact_datum {
	struct Fartifact_datum* Data;
	int Count;
	int Max;
};

struct UDownloadableExpansionDefinition;
struct TArray_UDownloadableExpansionDefinitionPtr {
	struct UDownloadableExpansionDefinition** Data;
	int Count;
	int Max;
};

struct FPCContextMenuItem;
struct TArray_FPCContextMenuItem {
	struct FPCContextMenuItem* Data;
	int Count;
	int Max;
};

struct FCellContentData;
struct TArray_FCellContentData {
	struct FCellContentData* Data;
	int Count;
	int Max;
};

struct FMessageOfTheDay;
struct TArray_FMessageOfTheDay {
	struct FMessageOfTheDay* Data;
	int Count;
	int Max;
};

struct UMindTargetInfo;
struct TArray_UMindTargetInfoPtr {
	struct UMindTargetInfo** Data;
	int Count;
	int Max;
};

struct UInputRemappingDefinition;
struct TArray_UInputRemappingDefinitionPtr {
	struct UInputRemappingDefinition** Data;
	int Count;
	int Max;
};

struct FTimerData;
struct TArray_FTimerData {
	struct FTimerData* Data;
	int Count;
	int Max;
};

struct USeqAct_LatentPtr;
struct TArray_USeqAct_LatentPtr {
	struct USeqAct_LatentPtr* Data;
	int Count;
	int Max;
};

struct FSkeletalMeshLODInfo;
struct TArray_FSkeletalMeshLODInfo {
        struct FSkeletalMeshLODInfo* Data;
        int Count;
        int Max;
};

struct FLeaderboardTemplate;
struct TArray_FLeaderboardTemplate {
        struct FLeaderboardTemplate* Data;
        int Count;
        int Max;
};

struct FManufacturerSelectorData;
struct TArray_FManufacturerSelectorData {
        struct FManufacturerSelectorData* Data;
        int Count;
        int Max;
};

struct URulePlaceholderPtr;
struct TArray_URulePlaceholderPtr {
        struct URulePlaceholderPtr* Data;
        int Count;
        int Max;
};

struct UBlockingMeshComponentPtr;
struct TArray_UBlockingMeshComponentPtr {
        struct UBlockingMeshComponentPtr* Data;
        int Count;
        int Max;
};

struct FCustomBodyHandIKHoldData;
struct TArray_FCustomBodyHandIKHoldData {
        struct FCustomBodyHandIKHoldData* Data;
        int Count;
        int Max;
};

struct FVehicleEffect;
struct TArray_FVehicleEffect {
        struct FVehicleEffect* Data;
        int Count;
        int Max;
};

struct AWeaponShotDebugPtr;
struct TArray_AWeaponShotDebugPtr {
        struct AWeaponShotDebugPtr* Data;
        int Count;
        int Max;
};

struct AWillowDynamicNavMeshConnectionPointPtr;
struct TArray_AWillowDynamicNavMeshConnectionPointPtr {
        struct AWillowDynamicNavMeshConnectionPointPtr* Data;
        int Count;
        int Max;
};

struct FBoneAngleMorph;
struct TArray_FBoneAngleMorph {
        struct FBoneAngleMorph* Data;
        int Count;
        int Max;
};

struct FRecogVocabulary;
struct TArray_FRecogVocabulary {
        struct FRecogVocabulary* Data;
        int Count;
        int Max;
};

struct UDownloadablePackageDefinitionPtr;
struct TArray_UDownloadablePackageDefinitionPtr {
        struct UDownloadablePackageDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FGBXConnectedNavMesh;
struct TArray_FGBXConnectedNavMesh {
        struct FGBXConnectedNavMesh* Data;
        int Count;
        int Max;
};

struct FDeathByWeaponStatID;
struct TArray_FDeathByWeaponStatID {
        struct FDeathByWeaponStatID* Data;
        int Count;
        int Max;
};

struct FIniLocFileEntry;
struct TArray_FIniLocFileEntry {
        struct FIniLocFileEntry* Data;
        int Count;
        int Max;
};

struct FSeqOpOutputLink;
struct TArray_FSeqOpOutputLink {
        struct FSeqOpOutputLink* Data;
        int Count;
        int Max;
};

struct FGCReference;
struct TArray_FGCReference {
        struct FGCReference* Data;
        int Count;
        int Max;
};

struct FScaledHUDElement;
struct TArray_FScaledHUDElement {
        struct FScaledHUDElement* Data;
        int Count;
        int Max;
};

struct FBehaviorTriggerMessageStruct;
struct TArray_FBehaviorTriggerMessageStruct {
        struct FBehaviorTriggerMessageStruct* Data;
        int Count;
        int Max;
};

struct ARallyPointPtr;
struct TArray_ARallyPointPtr {
        struct ARallyPointPtr* Data;
        int Count;
        int Max;
};

struct FGameplayEventMetaData;
struct TArray_FGameplayEventMetaData {
        struct FGameplayEventMetaData* Data;
        int Count;
        int Max;
};

struct FSeasonPassPackageCount;
struct TArray_FSeasonPassPackageCount {
        struct FSeasonPassPackageCount* Data;
        int Count;
        int Max;
};

struct FWeightmapLayerAllocationInfo;
struct TArray_FWeightmapLayerAllocationInfo {
        struct FWeightmapLayerAllocationInfo* Data;
        int Count;
        int Max;
};

struct FScalarParameterInterpStruct;
struct TArray_FScalarParameterInterpStruct {
        struct FScalarParameterInterpStruct* Data;
        int Count;
        int Max;
};

struct FScalarMaterialParameter;
struct TArray_FScalarMaterialParameter {
        struct FScalarMaterialParameter* Data;
        int Count;
        int Max;
};

struct FNewsCacheEntry;
struct TArray_FNewsCacheEntry {
        struct FNewsCacheEntry* Data;
        int Count;
        int Max;
};

struct FInputContextData;
struct TArray_FInputContextData {
        struct FInputContextData* Data;
        int Count;
        int Max;
};

struct FPlayerLineInfo;
struct TArray_FPlayerLineInfo {
        struct FPlayerLineInfo* Data;
        int Count;
        int Max;
};

struct FActorReference;
struct TArray_FActorReference {
        struct FActorReference* Data;
        int Count;
        int Max;
};

struct FConditionalExplosionData;
struct TArray_FConditionalExplosionData {
        struct FConditionalExplosionData* Data;
        int Count;
        int Max;
};

struct UCylinderComponentPtr;
struct TArray_UCylinderComponentPtr {
        struct UCylinderComponentPtr* Data;
        int Count;
        int Max;
};

struct FWillowStatProperty;
struct TArray_FWillowStatProperty {
        struct FWillowStatProperty* Data;
        int Count;
        int Max;
};

struct FTeleportKeyData;
struct TArray_FTeleportKeyData {
        struct FTeleportKeyData* Data;
        int Count;
        int Max;
};

struct UFaceFXAnimSetPtr;
struct TArray_UFaceFXAnimSetPtr {
        struct UFaceFXAnimSetPtr* Data;
        int Count;
        int Max;
};

struct UBlackMarketUpgradeDefinitionPtr;
struct TArray_UBlackMarketUpgradeDefinitionPtr {
        struct UBlackMarketUpgradeDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FInteractiveObjectGameStageGradeWeightData;
struct TArray_FInteractiveObjectGameStageGradeWeightData {
        struct FInteractiveObjectGameStageGradeWeightData* Data;
        int Count;
        int Max;
};

struct FOngoingEffectInfo;
struct TArray_FOngoingEffectInfo {
        struct FOngoingEffectInfo* Data;
        int Count;
        int Max;
};

struct FPlayerSkillTreeTierData;
struct TArray_FPlayerSkillTreeTierData {
        struct FPlayerSkillTreeTierData* Data;
        int Count;
        int Max;
};

struct FOnlineStatusContextMapping;
struct TArray_FOnlineStatusContextMapping {
        struct FOnlineStatusContextMapping* Data;
        int Count;
        int Max;
};

struct FBoneMirrorInfo;
struct TArray_FBoneMirrorInfo {
        struct FBoneMirrorInfo* Data;
        int Count;
        int Max;
};

struct AWillowElevatorButtonPtr;
struct TArray_AWillowElevatorButtonPtr {
        struct AWillowElevatorButtonPtr* Data;
        int Count;
        int Max;
};

struct FAttributeSlotUpgradeData;
struct TArray_FAttributeSlotUpgradeData {
        struct FAttributeSlotUpgradeData* Data;
        int Count;
        int Max;
};

struct FAIPawnGameStageGradeWeightData;
struct TArray_FAIPawnGameStageGradeWeightData {
        struct FAIPawnGameStageGradeWeightData* Data;
        int Count;
        int Max;
};

struct FTechDeathData;
struct TArray_FTechDeathData {
        struct FTechDeathData* Data;
        int Count;
        int Max;
};

struct FLevelStreamingStatus;
struct TArray_FLevelStreamingStatus {
        struct FLevelStreamingStatus* Data;
        int Count;
        int Max;
};

struct FSettingsPropertyPropertyMetaData;
struct TArray_FSettingsPropertyPropertyMetaData {
        struct FSettingsPropertyPropertyMetaData* Data;
        int Count;
        int Max;
};

struct FLevelStreamingNameCombo;
struct TArray_FLevelStreamingNameCombo {
        struct FLevelStreamingNameCombo* Data;
        int Count;
        int Max;
};

struct FFeatherBoneBlendData;
struct TArray_FFeatherBoneBlendData {
        struct FFeatherBoneBlendData* Data;
        int Count;
        int Max;
};

struct FBucketStruct;
struct TArray_FBucketStruct {
        struct FBucketStruct* Data;
        int Count;
        int Max;
};

struct UDownloadableCharacterDefinitionPtr;
struct TArray_UDownloadableCharacterDefinitionPtr {
        struct UDownloadableCharacterDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FSkillConstraintData;
struct TArray_FSkillConstraintData {
        struct FSkillConstraintData* Data;
        int Count;
        int Max;
};

struct FAIResourceRestriction;
struct TArray_FAIResourceRestriction {
        struct FAIResourceRestriction* Data;
        int Count;
        int Max;
};

struct FInstancedStaticMeshMappingInfo;
struct TArray_FInstancedStaticMeshMappingInfo {
        struct FInstancedStaticMeshMappingInfo* Data;
        int Count;
        int Max;
};

struct FTankSensor;
struct TArray_FTankSensor {
        struct FTankSensor* Data;
        int Count;
        int Max;
};

struct UInterpTrackInstPtr;
struct TArray_UInterpTrackInstPtr {
        struct UInterpTrackInstPtr* Data;
        int Count;
        int Max;
};

struct FDeferredSkillActivationData;
struct TArray_FDeferredSkillActivationData {
        struct FDeferredSkillActivationData* Data;
        int Count;
        int Max;
};

struct FWorldLightingOverride;
struct TArray_FWorldLightingOverride {
        struct FWorldLightingOverride* Data;
        int Count;
        int Max;
};

struct FStateAttributeData;
struct TArray_FStateAttributeData {
        struct FStateAttributeData* Data;
        int Count;
        int Max;
};

struct FPlayerEvents;
struct TArray_FPlayerEvents {
        struct FPlayerEvents* Data;
        int Count;
        int Max;
};

struct FDamageClassEventData;
struct TArray_FDamageClassEventData {
        struct FDamageClassEventData* Data;
        int Count;
        int Max;
};

struct FPresetGeneratedPoint;
struct TArray_FPresetGeneratedPoint {
        struct FPresetGeneratedPoint* Data;
        int Count;
        int Max;
};

struct FAuthSession;
struct TArray_FAuthSession {
        struct FAuthSession* Data;
        int Count;
        int Max;
};

struct FMaterialReferenceList;
struct TArray_FMaterialReferenceList {
        struct FMaterialReferenceList* Data;
        int Count;
        int Max;
};

struct USplineMeshComponentPtr;
struct TArray_USplineMeshComponentPtr {
        struct USplineMeshComponentPtr* Data;
        int Count;
        int Max;
};

struct FBehaviorsSelectionData;
struct TArray_FBehaviorsSelectionData {
        struct FBehaviorsSelectionData* Data;
        int Count;
        int Max;
};

struct FVehicleCrewMappingStruct;
struct TArray_FVehicleCrewMappingStruct {
        struct FVehicleCrewMappingStruct* Data;
        int Count;
        int Max;
};

struct UInstancedDesignerAttributePtr;
struct TArray_UInstancedDesignerAttributePtr {
        struct UInstancedDesignerAttributePtr* Data;
        int Count;
        int Max;
};

struct FAttributePriorityData;
struct TArray_FAttributePriorityData {
        struct FAttributePriorityData* Data;
        int Count;
        int Max;
};

struct FKeyBindInfo;
struct TArray_FKeyBindInfo {
        struct FKeyBindInfo* Data;
        int Count;
        int Max;
};

struct FUnloadableDlcRegionGameStageData;
struct TArray_FUnloadableDlcRegionGameStageData {
        struct FUnloadableDlcRegionGameStageData* Data;
        int Count;
        int Max;
};

struct FHeadTrackingKey;
struct TArray_FHeadTrackingKey {
        struct FHeadTrackingKey* Data;
        int Count;
        int Max;
};

struct FSkillDamageEventData;
struct TArray_FSkillDamageEventData {
        struct FSkillDamageEventData* Data;
        int Count;
        int Max;
};

struct FNamedSkillEvent;
struct TArray_FNamedSkillEvent {
        struct FNamedSkillEvent* Data;
        int Count;
        int Max;
};

struct FDebugConsoleCommand;
struct TArray_FDebugConsoleCommand {
        struct FDebugConsoleCommand* Data;
        int Count;
        int Max;
};

struct FPrismDataContainer;
struct TArray_FPrismDataContainer {
        struct FPrismDataContainer* Data;
        int Count;
        int Max;
};

struct FSortFilterConfiguration;
struct TArray_FSortFilterConfiguration {
        struct FSortFilterConfiguration* Data;
        int Count;
        int Max;
};

struct ADroppedPickupPtr;
struct TArray_ADroppedPickupPtr {
        struct ADroppedPickupPtr* Data;
        int Count;
        int Max;
};

struct UUIConfigSectionProviderPtr;
struct TArray_UUIConfigSectionProviderPtr {
        struct UUIConfigSectionProviderPtr* Data;
        int Count;
        int Max;
};

struct UDownloadableItemSetDefinitionPtr;
struct TArray_UDownloadableItemSetDefinitionPtr {
        struct UDownloadableItemSetDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FFontParameterValueOverTime;
struct TArray_FFontParameterValueOverTime {
        struct FFontParameterValueOverTime* Data;
        int Count;
        int Max;
};

struct FTaggedMarketplaceContent;
struct TArray_FTaggedMarketplaceContent {
        struct FTaggedMarketplaceContent* Data;
        int Count;
        int Max;
};

struct FSoundEventMapping;
struct TArray_FSoundEventMapping {
        struct FSoundEventMapping* Data;
        int Count;
        int Max;
};

struct FAggregateEventMapping;
struct TArray_FAggregateEventMapping {
        struct FAggregateEventMapping* Data;
        int Count;
        int Max;
};

struct FSkillEventResponseData;
struct TArray_FSkillEventResponseData {
        struct FSkillEventResponseData* Data;
        int Count;
        int Max;
};

struct FSplitscreenData;
struct TArray_FSplitscreenData {
        struct FSplitscreenData* Data;
        int Count;
        int Max;
};

struct UFlagDefinitionPtr;
struct TArray_UFlagDefinitionPtr {
        struct UFlagDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FGBXNavMeshObstacleData;
struct TArray_FGBXNavMeshObstacleData {
        struct FGBXNavMeshObstacleData* Data;
        int Count;
        int Max;
};

struct FGFxMenuLink;
struct TArray_FGFxMenuLink {
        struct FGFxMenuLink* Data;
        int Count;
        int Max;
};

struct FDataProviderInfo;
struct TArray_FDataProviderInfo {
        struct FDataProviderInfo* Data;
        int Count;
        int Max;
};

struct FPerBoneMaskInfo;
struct TArray_FPerBoneMaskInfo {
        struct FPerBoneMaskInfo* Data;
        int Count;
        int Max;
};

struct FRawAnimSequenceTrack;
struct TArray_FRawAnimSequenceTrack {
        struct FRawAnimSequenceTrack* Data;
        int Count;
        int Max;
};

struct FTitleFileMapping;
struct TArray_FTitleFileMapping {
        struct FTitleFileMapping* Data;
        int Count;
        int Max;
};

struct FDirectorTrackCut;
struct TArray_FDirectorTrackCut {
        struct FDirectorTrackCut* Data;
        int Count;
        int Max;
};

struct UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData;
struct TArray_UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData {
        struct UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct UTrainingMessageDefinitionPtr;
struct TArray_UTrainingMessageDefinitionPtr {
        struct UTrainingMessageDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FParticleReplayTrackKey;
struct TArray_FParticleReplayTrackKey {
        struct FParticleReplayTrackKey* Data;
        int Count;
        int Max;
};

struct UGBXCrossLevelReferenceContainerPtr;
struct TArray_UGBXCrossLevelReferenceContainerPtr {
        struct UGBXCrossLevelReferenceContainerPtr* Data;
        int Count;
        int Max;
};

struct FFoliageMesh;
struct TArray_FFoliageMesh {
        struct FFoliageMesh* Data;
        int Count;
        int Max;
};

struct FParticleBurst;
struct TArray_FParticleBurst {
        struct FParticleBurst* Data;
        int Count;
        int Max;
};

struct FInstancedStaticMeshInstanceData;
struct TArray_FInstancedStaticMeshInstanceData {
        struct FInstancedStaticMeshInstanceData* Data;
        int Count;
        int Max;
};

struct FOnlineStatusPropertyMapping;
struct TArray_FOnlineStatusPropertyMapping {
        struct FOnlineStatusPropertyMapping* Data;
        int Count;
        int Max;
};

struct FPlaylistPopulation;
struct TArray_FPlaylistPopulation {
        struct FPlaylistPopulation* Data;
        int Count;
        int Max;
};

struct UPawnAllegiancePtr;
struct TArray_UPawnAllegiancePtr {
        struct UPawnAllegiancePtr* Data;
        int Count;
        int Max;
};

struct FCoordinatedEffectProcess;
struct TArray_FCoordinatedEffectProcess {
        struct FCoordinatedEffectProcess* Data;
        int Count;
        int Max;
};

struct FLabelToLinkageMapping;
struct TArray_FLabelToLinkageMapping {
        struct FLabelToLinkageMapping* Data;
        int Count;
        int Max;
};

struct FRelevanceCacheStruct;
struct TArray_FRelevanceCacheStruct {
        struct FRelevanceCacheStruct* Data;
        int Count;
        int Max;
};

struct APortalTeleporterPtr;
struct TArray_APortalTeleporterPtr {
        struct APortalTeleporterPtr* Data;
        int Count;
        int Max;
};

struct FDeviceLookAxisData;
struct TArray_FDeviceLookAxisData {
        struct FDeviceLookAxisData* Data;
        int Count;
        int Max;
};

struct FGBXNavMeshPathSize;
struct TArray_FGBXNavMeshPathSize {
        struct FGBXNavMeshPathSize* Data;
        int Count;
        int Max;
};

struct FSwitchObjectCase;
struct TArray_FSwitchObjectCase {
        struct FSwitchObjectCase* Data;
        int Count;
        int Max;
};

struct FTerrainDecoLayer;
struct TArray_FTerrainDecoLayer {
        struct FTerrainDecoLayer* Data;
        int Count;
        int Max;
};

struct ACoverLinkPtr;
struct TArray_ACoverLinkPtr {
        struct ACoverLinkPtr* Data;
        int Count;
        int Max;
};

struct FEnemyBreadCrumbStruct;
struct TArray_FEnemyBreadCrumbStruct {
        struct FEnemyBreadCrumbStruct* Data;
        int Count;
        int Max;
};

struct FSkillEffectData;
struct TArray_FSkillEffectData {
        struct FSkillEffectData* Data;
        int Count;
        int Max;
};

struct UGearboxAccountDataPtr;
struct TArray_UGearboxAccountDataPtr {
        struct UGearboxAccountDataPtr* Data;
        int Count;
        int Max;
};

struct FTurretEffect;
struct TArray_FTurretEffect {
        struct FTurretEffect* Data;
        int Count;
        int Max;
};

struct FAvailableTrackedSkill;
struct TArray_FAvailableTrackedSkill {
        struct FAvailableTrackedSkill* Data;
        int Count;
        int Max;
};

struct FTextureMaterialParameter;
struct TArray_FTextureMaterialParameter {
        struct FTextureMaterialParameter* Data;
        int Count;
        int Max;
};

struct FHeavyInventoryElement;
struct TArray_FHeavyInventoryElement {
        struct FHeavyInventoryElement* Data;
        int Count;
        int Max;
};

struct UPlayerClassIdentifierDefinitionPtr;
struct TArray_UPlayerClassIdentifierDefinitionPtr {
        struct UPlayerClassIdentifierDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FHUDAnchorPoint;
struct TArray_FHUDAnchorPoint {
        struct FHUDAnchorPoint* Data;
        int Count;
        int Max;
};

struct FTrailSample;
struct TArray_FTrailSample {
        struct FTrailSample* Data;
        int Count;
        int Max;
};

struct FBehaviorAliasReference;
struct TArray_FBehaviorAliasReference {
        struct FBehaviorAliasReference* Data;
        int Count;
        int Max;
};

struct FParticleEventCollideData;
struct TArray_FParticleEventCollideData {
        struct FParticleEventCollideData* Data;
        int Count;
        int Max;
};

struct FSettingsArrayProvider;
struct TArray_FSettingsArrayProvider {
        struct FSettingsArrayProvider* Data;
        int Count;
        int Max;
};

struct UFractureMaterialPtr;
struct TArray_UFractureMaterialPtr {
        struct UFractureMaterialPtr* Data;
        int Count;
        int Max;
};

struct FColorParticleSystemParameter;
struct TArray_FColorParticleSystemParameter {
        struct FColorParticleSystemParameter* Data;
        int Count;
        int Max;
};

struct FNPCList;
struct TArray_FNPCList {
        struct FNPCList* Data;
        int Count;
        int Max;
};

struct UAttributeContextResolverPtr;
struct TArray_UAttributeContextResolverPtr {
        struct UAttributeContextResolverPtr* Data;
        int Count;
        int Max;
};

struct FAIHoldData;
struct TArray_FAIHoldData {
        struct FAIHoldData* Data;
        int Count;
        int Max;
};

struct FNavMeshPathSize;
struct TArray_FNavMeshPathSize {
        struct FNavMeshPathSize* Data;
        int Count;
        int Max;
};

struct FDropNoteInfo;
struct TArray_FDropNoteInfo {
        struct FDropNoteInfo* Data;
        int Count;
        int Max;
};

struct USparkServiceConfigurationPtr;
struct TArray_USparkServiceConfigurationPtr {
        struct USparkServiceConfigurationPtr* Data;
        int Count;
        int Max;
};

struct FServerQueryToPingResponseMapping;
struct TArray_FServerQueryToPingResponseMapping {
        struct FServerQueryToPingResponseMapping* Data;
        int Count;
        int Max;
};

struct AInventoryPtr;
struct TArray_AInventoryPtr {
        struct AInventoryPtr* Data;
        int Count;
        int Max;
};

struct FWeaponClassEventData;
struct TArray_FWeaponClassEventData {
        struct FWeaponClassEventData* Data;
        int Count;
        int Max;
};

struct AWillowReplicatedAmbientSoundSourcePtr;
struct TArray_AWillowReplicatedAmbientSoundSourcePtr {
        struct AWillowReplicatedAmbientSoundSourcePtr* Data;
        int Count;
        int Max;
};

struct FAppliedSkillEffect;
struct TArray_FAppliedSkillEffect {
        struct FAppliedSkillEffect* Data;
        int Count;
        int Max;
};

struct FLocalizedStringSettingMetaData;
struct TArray_FLocalizedStringSettingMetaData {
        struct FLocalizedStringSettingMetaData* Data;
        int Count;
        int Max;
};

struct FAIThrowProjectileBehaviorSequenceStateData;
struct TArray_FAIThrowProjectileBehaviorSequenceStateData {
        struct FAIThrowProjectileBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct FObstacleData;
struct TArray_FObstacleData {
        struct FObstacleData* Data;
        int Count;
        int Max;
};

struct URB_BodySetupPtr;
struct TArray_URB_BodySetupPtr {
        struct URB_BodySetupPtr* Data;
        int Count;
        int Max;
};

struct FDebugExposure;
struct TArray_FDebugExposure {
        struct FDebugExposure* Data;
        int Count;
        int Max;
};

struct FLensFlareElement;
struct TArray_FLensFlareElement {
        struct FLensFlareElement* Data;
        int Count;
        int Max;
};

struct FMapSpecificBalanceModificationList;
struct TArray_FMapSpecificBalanceModificationList {
        struct FMapSpecificBalanceModificationList* Data;
        int Count;
        int Max;
};

struct FPendingCustomization;
struct TArray_FPendingCustomization {
        struct FPendingCustomization* Data;
        int Count;
        int Max;
};

struct FEnvironmentalEffectSetting;
struct TArray_FEnvironmentalEffectSetting {
        struct FEnvironmentalEffectSetting* Data;
        int Count;
        int Max;
};

struct FInstalledContentInfo;
struct TArray_FInstalledContentInfo {
        struct FInstalledContentInfo* Data;
        int Count;
        int Max;
};

struct FClientBeaconConnection;
struct TArray_FClientBeaconConnection {
        struct FClientBeaconConnection* Data;
        int Count;
        int Max;
};

struct FIpAddr;
struct TArray_FIpAddr {
        struct FIpAddr* Data;
        int Count;
        int Max;
};

struct FActionSequenceRecord;
struct TArray_FActionSequenceRecord {
        struct FActionSequenceRecord* Data;
        int Count;
        int Max;
};

struct ATerrain_FTerrainWeightedMaterial;
struct TArray_ATerrain_FTerrainWeightedMaterial {
        struct ATerrain_FTerrainWeightedMaterial* Data;
        int Count;
        int Max;
};

struct FVectorParameterValueOverTime;
struct TArray_FVectorParameterValueOverTime {
        struct FVectorParameterValueOverTime* Data;
        int Count;
        int Max;
};

struct FBehaviorContextData;
struct TArray_FBehaviorContextData {
        struct FBehaviorContextData* Data;
        int Count;
        int Max;
};

struct FPopulationAreaOptionSpawnData;
struct TArray_FPopulationAreaOptionSpawnData {
        struct FPopulationAreaOptionSpawnData* Data;
        int Count;
        int Max;
};

struct FAITreeData;
struct TArray_FAITreeData {
        struct FAITreeData* Data;
        int Count;
        int Max;
};

struct FSpeedTravelData;
struct TArray_FSpeedTravelData {
        struct FSpeedTravelData* Data;
        int Count;
        int Max;
};

struct FWaveformSample;
struct TArray_FWaveformSample {
        struct FWaveformSample* Data;
        int Count;
        int Max;
};

struct FOnlineProfileSetting;
struct TArray_FOnlineProfileSetting {
        struct FOnlineProfileSetting* Data;
        int Count;
        int Max;
};

struct FSoftBodyTetraLink;
struct TArray_FSoftBodyTetraLink {
        struct FSoftBodyTetraLink* Data;
        int Count;
        int Max;
};

struct FResourceSaveGameData;
struct TArray_FResourceSaveGameData {
        struct FResourceSaveGameData* Data;
        int Count;
        int Max;
};

struct FRejectedContentInfo;
struct TArray_FRejectedContentInfo {
        struct FRejectedContentInfo* Data;
        int Count;
        int Max;
};

struct FTargetedPlayerState;
struct TArray_FTargetedPlayerState {
        struct FTargetedPlayerState* Data;
        int Count;
        int Max;
};

struct FRegionBalanceData;
struct TArray_FRegionBalanceData {
        struct FRegionBalanceData* Data;
        int Count;
        int Max;
};

struct FOutputLink;
struct TArray_FOutputLink {
        struct FOutputLink* Data;
        int Count;
        int Max;
};

struct FSMRandomPair;
struct TArray_FSMRandomPair {
        struct FSMRandomPair* Data;
        int Count;
        int Max;
};

struct FMarketplaceOffer;
struct TArray_FMarketplaceOffer {
        struct FMarketplaceOffer* Data;
        int Count;
        int Max;
};

struct FGestaltAccessoryNameEntry;
struct TArray_FGestaltAccessoryNameEntry {
        struct FGestaltAccessoryNameEntry* Data;
        int Count;
        int Max;
};

struct FSpawnAnimData;
struct TArray_FSpawnAnimData {
        struct FSpawnAnimData* Data;
        int Count;
        int Max;
};

struct UParticleModulePtr;
struct TArray_UParticleModulePtr {
        struct UParticleModulePtr* Data;
        int Count;
        int Max;
};

struct FManufacturerGradeData;
struct TArray_FManufacturerGradeData {
        struct FManufacturerGradeData* Data;
        int Count;
        int Max;
};

struct FVectorMaterialParameter;
struct TArray_FVectorMaterialParameter {
        struct FVectorMaterialParameter* Data;
        int Count;
        int Max;
};

struct FOccludedVolume;
struct TArray_FOccludedVolume {
        struct FOccludedVolume* Data;
        int Count;
        int Max;
};

struct FUIStatData;
struct TArray_FUIStatData {
        struct FUIStatData* Data;
        int Count;
        int Max;
};

struct FExternalTexture;
struct TArray_FExternalTexture {
        struct FExternalTexture* Data;
        int Count;
        int Max;
};

struct FPostProcessOverlayInfo;
struct TArray_FPostProcessOverlayInfo {
        struct FPostProcessOverlayInfo* Data;
        int Count;
        int Max;
};

struct FEmotePortraitInfo;
struct TArray_FEmotePortraitInfo {
        struct FEmotePortraitInfo* Data;
        int Count;
        int Max;
};

struct FUIDataStoreInputAlias;
struct TArray_FUIDataStoreInputAlias {
        struct FUIDataStoreInputAlias* Data;
        int Count;
        int Max;
};

struct UOnlineStatsReadPtr;
struct TArray_UOnlineStatsReadPtr {
        struct UOnlineStatsReadPtr* Data;
        int Count;
        int Max;
};

struct FActiveInteraction;
struct TArray_FActiveInteraction {
        struct FActiveInteraction* Data;
        int Count;
        int Max;
};

struct FCoverMeshes;
struct TArray_FCoverMeshes {
        struct FCoverMeshes* Data;
        int Count;
        int Max;
};

struct FGameSearchCfg;
struct TArray_FGameSearchCfg {
        struct FGameSearchCfg* Data;
        int Count;
        int Max;
};

struct FScalarParticleSystemParameter;
struct TArray_FScalarParticleSystemParameter {
        struct FScalarParticleSystemParameter* Data;
        int Count;
        int Max;
};

struct FGrenadeModBehaviorSequenceStateData;
struct TArray_FGrenadeModBehaviorSequenceStateData {
        struct FGrenadeModBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct FHitActorData;
struct TArray_FHitActorData {
        struct FHitActorData* Data;
        int Count;
        int Max;
};

struct FRemoteTalker;
struct TArray_FRemoteTalker {
        struct FRemoteTalker* Data;
        int Count;
        int Max;
};

struct FSourceTexture2DRegion;
struct TArray_FSourceTexture2DRegion {
        struct FSourceTexture2DRegion* Data;
        int Count;
        int Max;
};

struct FThumbnailLightData;
struct TArray_FThumbnailLightData {
        struct FThumbnailLightData* Data;
        int Count;
        int Max;
};

struct FSwitchClassInfo;
struct TArray_FSwitchClassInfo {
        struct FSwitchClassInfo* Data;
        int Count;
        int Max;
};

struct APerchPtr;
struct TArray_APerchPtr {
        struct APerchPtr* Data;
        int Count;
        int Max;
};

struct FThumbnailRenderData;
struct TArray_FThumbnailRenderData {
        struct FThumbnailRenderData* Data;
        int Count;
        int Max;
};

struct UGFxActorMoviePoolPtr;
struct TArray_UGFxActorMoviePoolPtr {
        struct UGFxActorMoviePoolPtr* Data;
        int Count;
        int Max;
};

struct FPopulationOptionAreaData;
struct TArray_FPopulationOptionAreaData {
        struct FPopulationOptionAreaData* Data;
        int Count;
        int Max;
};

struct FConditionLevel;
struct TArray_FConditionLevel {
        struct FConditionLevel* Data;
        int Count;
        int Max;
};

struct FLevelBasedExpScale;
struct TArray_FLevelBasedExpScale {
        struct FLevelBasedExpScale* Data;
        int Count;
        int Max;
};

struct FPerchAnimData;
struct TArray_FPerchAnimData {
        struct FPerchAnimData* Data;
        int Count;
        int Max;
};

struct AWillowInteractiveObjectPtr;
struct TArray_AWillowInteractiveObjectPtr {
        struct AWillowInteractiveObjectPtr* Data;
        int Count;
        int Max;
};

struct FPendingClientTrainingMessage;
struct TArray_FPendingClientTrainingMessage {
        struct FPendingClientTrainingMessage* Data;
        int Count;
        int Max;
};

struct FGFxWidgetBinding;
struct TArray_FGFxWidgetBinding {
        struct FGFxWidgetBinding* Data;
        int Count;
        int Max;
};

struct FAIHoldDebugData;
struct TArray_FAIHoldDebugData {
        struct FAIHoldDebugData* Data;
        int Count;
        int Max;
};

struct AWillowProjectilePtr;
struct TArray_AWillowProjectilePtr {
        struct AWillowProjectilePtr* Data;
        int Count;
        int Max;
};

struct FDirectionData;
struct TArray_FDirectionData {
        struct FDirectionData* Data;
        int Count;
        int Max;
};

struct UApexComponentBasePtr;
struct TArray_UApexComponentBasePtr {
        struct UApexComponentBasePtr* Data;
        int Count;
        int Max;
};

struct UDamagePipelinePtr;
struct TArray_UDamagePipelinePtr {
        struct UDamagePipelinePtr* Data;
        int Count;
        int Max;
};

struct FOnlineStatusMapping;
struct TArray_FOnlineStatusMapping {
        struct FOnlineStatusMapping* Data;
        int Count;
        int Max;
};

struct FImpactResponseData;
struct TArray_FImpactResponseData {
        struct FImpactResponseData* Data;
        int Count;
        int Max;
};

struct FInventoryManufacturerBalanceData;
struct TArray_FInventoryManufacturerBalanceData {
        struct FInventoryManufacturerBalanceData* Data;
        int Count;
        int Max;
};

struct FInputButtonData;
struct TArray_FInputButtonData {
        struct FInputButtonData* Data;
        int Count;
        int Max;
};

struct UGBXDefinitionPtr;
struct TArray_UGBXDefinitionPtr {
        struct UGBXDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FBalanceModification;
struct TArray_FBalanceModification {
        struct FBalanceModification* Data;
        int Count;
        int Max;
};

struct FAttributeSlotEffectData;
struct TArray_FAttributeSlotEffectData {
        struct FAttributeSlotEffectData* Data;
        int Count;
        int Max;
};

struct UCameraModifierPtr;
struct TArray_UCameraModifierPtr {
        struct UCameraModifierPtr* Data;
        int Count;
        int Max;
};

struct FQueuedActivationInfo;
struct TArray_FQueuedActivationInfo {
        struct FQueuedActivationInfo* Data;
        int Count;
        int Max;
};

struct FAkEventResolver;
struct TArray_FAkEventResolver {
        struct FAkEventResolver* Data;
        int Count;
        int Max;
};

struct FConditionalParticleEffectData;
struct TArray_FConditionalParticleEffectData {
        struct FConditionalParticleEffectData* Data;
        int Count;
        int Max;
};

struct UWillowAIBlackboardComponentPtr;
struct TArray_UWillowAIBlackboardComponentPtr {
        struct UWillowAIBlackboardComponentPtr* Data;
        int Count;
        int Max;
};

struct UPackageAssetSublibraryPtr;
struct TArray_UPackageAssetSublibraryPtr {
        struct UPackageAssetSublibraryPtr* Data;
        int Count;
        int Max;
};

struct FClanMaterialData;
struct TArray_FClanMaterialData {
        struct FClanMaterialData* Data;
        int Count;
        int Max;
};

struct FMenuItemCallback;
struct TArray_FMenuItemCallback {
        struct FMenuItemCallback* Data;
        int Count;
        int Max;
};

struct FUnloadableDlcItemSaveGameData;
struct TArray_FUnloadableDlcItemSaveGameData {
        struct FUnloadableDlcItemSaveGameData* Data;
        int Count;
        int Max;
};

struct FGameClassShortName;
struct TArray_FGameClassShortName {
        struct FGameClassShortName* Data;
        int Count;
        int Max;
};

struct FStatColorMapping;
struct TArray_FStatColorMapping {
        struct FStatColorMapping* Data;
        int Count;
        int Max;
};

struct UDLCLegacyPlayerClassIdentifierDefinitionPtr;
struct TArray_UDLCLegacyPlayerClassIdentifierDefinitionPtr {
        struct UDLCLegacyPlayerClassIdentifierDefinitionPtr* Data;
        int Count;
        int Max;
};

struct APlayerStandInPtr;
struct TArray_APlayerStandInPtr {
        struct APlayerStandInPtr* Data;
        int Count;
        int Max;
};

struct FOnlineStatsRow;
struct TArray_FOnlineStatsRow {
        struct FOnlineStatsRow* Data;
        int Count;
        int Max;
};

struct FBulletImpactEventData;
struct TArray_FBulletImpactEventData {
        struct FBulletImpactEventData* Data;
        int Count;
        int Max;
};

struct FSkelMeshComponentLODInfo;
struct TArray_FSkelMeshComponentLODInfo {
        struct FSkelMeshComponentLODInfo* Data;
        int Count;
        int Max;
};

struct FExpAwardWeight;
struct TArray_FExpAwardWeight {
        struct FExpAwardWeight* Data;
        int Count;
        int Max;
};

struct FParticleEventTraceData;
struct TArray_FParticleEventTraceData {
        struct FParticleEventTraceData* Data;
        int Count;
        int Max;
};

struct FMarketPlaceFilter;
struct TArray_FMarketPlaceFilter {
        struct FMarketPlaceFilter* Data;
        int Count;
        int Max;
};

struct FBehaviorCondition;
struct TArray_FBehaviorCondition {
        struct FBehaviorCondition* Data;
        int Count;
        int Max;
};

struct FScreenMessageString;
struct TArray_FScreenMessageString {
        struct FScreenMessageString* Data;
        int Count;
        int Max;
};

struct FOpinionData;
struct TArray_FOpinionData {
        struct FOpinionData* Data;
        int Count;
        int Max;
};

struct FAnimNotifyEvent;
struct TArray_FAnimNotifyEvent {
        struct FAnimNotifyEvent* Data;
        int Count;
        int Max;
};

struct FUnloadableDlcLockoutData;
struct TArray_FUnloadableDlcLockoutData {
        struct FUnloadableDlcLockoutData* Data;
        int Count;
        int Max;
};

struct FValidNameRange;
struct TArray_FValidNameRange {
        struct FValidNameRange* Data;
        int Count;
        int Max;
};

struct FClientMeshBeaconConnection;
struct TArray_FClientMeshBeaconConnection {
        struct FClientMeshBeaconConnection* Data;
        int Count;
        int Max;
};

struct FLensFlareElementMaterials;
struct TArray_FLensFlareElementMaterials {
        struct FLensFlareElementMaterials* Data;
        int Count;
        int Max;
};

struct FKnowledgeRecordStruct;
struct TArray_FKnowledgeRecordStruct {
        struct FKnowledgeRecordStruct* Data;
        int Count;
        int Max;
};

struct FSelectedTerrainVertex;
struct TArray_FSelectedTerrainVertex {
        struct FSelectedTerrainVertex* Data;
        int Count;
        int Max;
};

struct FTargetDebugDatum;
struct TArray_FTargetDebugDatum {
        struct FTargetDebugDatum* Data;
        int Count;
        int Max;
};

struct FViewIdToLeaderboardName;
struct TArray_FViewIdToLeaderboardName {
        struct FViewIdToLeaderboardName* Data;
        int Count;
        int Max;
};

struct FTitleFileMcp;
struct TArray_FTitleFileMcp {
        struct FTitleFileMcp* Data;
        int Count;
        int Max;
};

struct FQueuedAvatarRequest;
struct TArray_FQueuedAvatarRequest {
        struct FQueuedAvatarRequest* Data;
        int Count;
        int Max;
};

struct APopulationEncounterPtr;
struct TArray_APopulationEncounterPtr {
        struct APopulationEncounterPtr* Data;
        int Count;
        int Max;
};

struct FDecalReceiver;
struct TArray_FDecalReceiver {
        struct FDecalReceiver* Data;
        int Count;
        int Max;
};

struct FTierLayout;
struct TArray_FTierLayout {
        struct FTierLayout* Data;
        int Count;
        int Max;
};

struct FTextureParameterValueOverTime;
struct TArray_FTextureParameterValueOverTime {
        struct FTextureParameterValueOverTime* Data;
        int Count;
        int Max;
};

struct FGestaltPartBoundsEntry;
struct TArray_FGestaltPartBoundsEntry {
        struct FGestaltPartBoundsEntry* Data;
        int Count;
        int Max;
};

struct UFiringZoneDefinitionPtr;
struct TArray_UFiringZoneDefinitionPtr {
        struct UFiringZoneDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FCreditsTextureInfo;
struct TArray_FCreditsTextureInfo {
        struct FCreditsTextureInfo* Data;
        int Count;
        int Max;
};

struct FExpansionData;
struct TArray_FExpansionData {
        struct FExpansionData* Data;
        int Count;
        int Max;
};

struct FRecentParty;
struct TArray_FRecentParty {
        struct FRecentParty* Data;
        int Count;
        int Max;
};

struct FRarityLevelColor;
struct TArray_FRarityLevelColor {
        struct FRarityLevelColor* Data;
        int Count;
        int Max;
};

struct FMissionStatusData;
struct TArray_FMissionStatusData {
        struct FMissionStatusData* Data;
        int Count;
        int Max;
};

struct UAttributeValueResolverPtr;
struct TArray_UAttributeValueResolverPtr {
        struct UAttributeValueResolverPtr* Data;
        int Count;
        int Max;
};

struct UTerrainComponentPtr;
struct TArray_UTerrainComponentPtr {
        struct UTerrainComponentPtr* Data;
        int Count;
        int Max;
};

struct FPlayerIcon;
struct TArray_FPlayerIcon {
        struct FPlayerIcon* Data;
        int Count;
        int Max;
};

struct FLightValues;
struct TArray_FLightValues {
        struct FLightValues* Data;
        int Count;
        int Max;
};

struct FSeasonPassOfferUnion;
struct TArray_FSeasonPassOfferUnion {
        struct FSeasonPassOfferUnion* Data;
        int Count;
        int Max;
};

struct FLootData;
struct TArray_FLootData {
        struct FLootData* Data;
        int Count;
        int Max;
};

struct FTerrainInfoData;
struct TArray_FTerrainInfoData {
        struct FTerrainInfoData* Data;
        int Count;
        int Max;
};

struct FPlaylist;
struct TArray_FPlaylist {
        struct FPlaylist* Data;
        int Count;
        int Max;
};

struct FPlayerStorageArrayProvider;
struct TArray_FPlayerStorageArrayProvider {
        struct FPlayerStorageArrayProvider* Data;
        int Count;
        int Max;
};

struct FResolution;
struct TArray_FResolution {
        struct FResolution* Data;
        int Count;
        int Max;
};

struct UDownloadableContentDefinitionPtr;
struct TArray_UDownloadableContentDefinitionPtr {
        struct UDownloadableContentDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FUIStatModifierData;
struct TArray_FUIStatModifierData {
        struct FUIStatModifierData* Data;
        int Count;
        int Max;
};

struct UGearboxDialogEventDataPtr;
struct TArray_UGearboxDialogEventDataPtr {
        struct UGearboxDialogEventDataPtr* Data;
        int Count;
        int Max;
};

struct FEventTrackKey;
struct TArray_FEventTrackKey {
        struct FEventTrackKey* Data;
        int Count;
        int Max;
};

struct FSlotAnimParameters;
struct TArray_FSlotAnimParameters {
        struct FSlotAnimParameters* Data;
        int Count;
        int Max;
};

struct UFontPtr;
struct TArray_UFontPtr {
        struct UFontPtr* Data;
        int Count;
        int Max;
};

struct UTextureRenderTarget2DPtr;
struct TArray_UTextureRenderTarget2DPtr {
        struct UTextureRenderTarget2DPtr* Data;
        int Count;
        int Max;
};

struct FVehicleSeatInstance;
struct TArray_FVehicleSeatInstance {
        struct FVehicleSeatInstance* Data;
        int Count;
        int Max;
};

struct FDynamicResourceProviderDefinition;
struct TArray_FDynamicResourceProviderDefinition {
        struct FDynamicResourceProviderDefinition* Data;
        int Count;
        int Max;
};

struct USkillTreeBranchDefinitionPtr;
struct TArray_USkillTreeBranchDefinitionPtr {
        struct USkillTreeBranchDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FClothSpecialBoneInfo;
struct TArray_FClothSpecialBoneInfo {
        struct FClothSpecialBoneInfo* Data;
        int Count;
        int Max;
};

struct FTaggedGFxMovie;
struct TArray_FTaggedGFxMovie {
        struct FTaggedGFxMovie* Data;
        int Count;
        int Max;
};

struct UPostProcessChainPtr;
struct TArray_UPostProcessChainPtr {
        struct UPostProcessChainPtr* Data;
        int Count;
        int Max;
};

struct FOneOffLevelChallengeData;
struct TArray_FOneOffLevelChallengeData {
        struct FOneOffLevelChallengeData* Data;
        int Count;
        int Max;
};

struct FPendingPlayerStats;
struct TArray_FPendingPlayerStats {
        struct FPendingPlayerStats* Data;
        int Count;
        int Max;
};

struct UParticleLODLevelPtr;
struct TArray_UParticleLODLevelPtr {
        struct UParticleLODLevelPtr* Data;
        int Count;
        int Max;
};

struct UDownloadableCustomizationSetDefinitionPtr;
struct TArray_UDownloadableCustomizationSetDefinitionPtr {
        struct UDownloadableCustomizationSetDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FToggleTrackKey;
struct TArray_FToggleTrackKey {
        struct FToggleTrackKey* Data;
        int Count;
        int Max;
};

struct ULevelStreamingPtr;
struct TArray_ULevelStreamingPtr {
        struct ULevelStreamingPtr* Data;
        int Count;
        int Max;
};

struct ALevelStreamingVolumePtr;
struct TArray_ALevelStreamingVolumePtr {
        struct ALevelStreamingVolumePtr* Data;
        int Count;
        int Max;
};

struct FAnimBlendChild;
struct TArray_FAnimBlendChild {
        struct FAnimBlendChild* Data;
        int Count;
        int Max;
};

struct FGFxDataStoreBinding;
struct TArray_FGFxDataStoreBinding {
        struct FGFxDataStoreBinding* Data;
        int Count;
        int Max;
};

struct FCullDistanceSizePair;
struct TArray_FCullDistanceSizePair {
        struct FCullDistanceSizePair* Data;
        int Count;
        int Max;
};

struct FPostProcessSettingsOverride;
struct TArray_FPostProcessSettingsOverride {
        struct FPostProcessSettingsOverride* Data;
        int Count;
        int Max;
};

struct FPlayerSkillTreeBranchData;
struct TArray_FPlayerSkillTreeBranchData {
        struct FPlayerSkillTreeBranchData* Data;
        int Count;
        int Max;
};

struct FEventRecord;
struct TArray_FEventRecord {
        struct FEventRecord* Data;
        int Count;
        int Max;
};

struct FActiveDecalInfo;
struct TArray_FActiveDecalInfo {
        struct FActiveDecalInfo* Data;
        int Count;
        int Max;
};

struct FLevelTransitionData;
struct TArray_FLevelTransitionData {
        struct FLevelTransitionData* Data;
        int Count;
        int Max;
};

struct FGestaltAccessoryMeshEntry;
struct TArray_FGestaltAccessoryMeshEntry {
        struct FGestaltAccessoryMeshEntry* Data;
        int Count;
        int Max;
};

struct UChildConnectionPtr;
struct TArray_UChildConnectionPtr {
        struct UChildConnectionPtr* Data;
        int Count;
        int Max;
};

struct UGBXNavMeshPathModifierPtr;
struct TArray_UGBXNavMeshPathModifierPtr {
        struct UGBXNavMeshPathModifierPtr* Data;
        int Count;
        int Max;
};

struct FKeyBind;
struct TArray_FKeyBind {
        struct FKeyBind* Data;
        int Count;
        int Max;
};

struct FBreathingLoopInfo;
struct TArray_FBreathingLoopInfo {
        struct FBreathingLoopInfo* Data;
        int Count;
        int Max;
};

struct UObjectReferencerPtr;
struct TArray_UObjectReferencerPtr {
        struct UObjectReferencerPtr* Data;
        int Count;
        int Max;
};

struct FSoundClassAdjuster;
struct TArray_FSoundClassAdjuster {
        struct FSoundClassAdjuster* Data;
        int Count;
        int Max;
};

struct FAIResourceData;
struct TArray_FAIResourceData {
        struct FAIResourceData* Data;
        int Count;
        int Max;
};

struct FVectorParticleSystemParameter;
struct TArray_FVectorParticleSystemParameter {
        struct FVectorParticleSystemParameter* Data;
        int Count;
        int Max;
};

struct FPauseTimerData;
struct TArray_FPauseTimerData {
        struct FPauseTimerData* Data;
        int Count;
        int Max;
};

struct FAIPawnPlaythroughThreeData;
struct TArray_FAIPawnPlaythroughThreeData {
        struct FAIPawnPlaythroughThreeData* Data;
        int Count;
        int Max;
};

struct FRecentExplosion;
struct TArray_FRecentExplosion {
        struct FRecentExplosion* Data;
        int Count;
        int Max;
};

struct UResourcePoolDefinitionPtr;
struct TArray_UResourcePoolDefinitionPtr {
        struct UResourcePoolDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FPersistentMapDependencies;
struct TArray_FPersistentMapDependencies {
        struct FPersistentMapDependencies* Data;
        int Count;
        int Max;
};

struct FStatusEffectTypeCommonProperties;
struct TArray_FStatusEffectTypeCommonProperties {
        struct FStatusEffectTypeCommonProperties* Data;
        int Count;
        int Max;
};

struct FCustomizationItemData;
struct TArray_FCustomizationItemData {
        struct FCustomizationItemData* Data;
        int Count;
        int Max;
};

struct FAnimBlendInfo;
struct TArray_FAnimBlendInfo {
        struct FAnimBlendInfo* Data;
        int Count;
        int Max;
};

struct UPostProcessEffectPtr;
struct TArray_UPostProcessEffectPtr {
        struct UPostProcessEffectPtr* Data;
        int Count;
        int Max;
};

struct FAchievementUnlockData;
struct TArray_FAchievementUnlockData {
        struct FAchievementUnlockData* Data;
        int Count;
        int Max;
};

struct AEmitterCameraLensEffectBasePtr;
struct TArray_AEmitterCameraLensEffectBasePtr {
        struct AEmitterCameraLensEffectBasePtr* Data;
        int Count;
        int Max;
};

struct FSeqOpInputLink;
struct TArray_FSeqOpInputLink {
        struct FSeqOpInputLink* Data;
        int Count;
        int Max;
};

struct FDamageTypeSelectorData;
struct TArray_FDamageTypeSelectorData {
        struct FDamageTypeSelectorData* Data;
        int Count;
        int Max;
};

struct FCameraShakeInstance;
struct TArray_FCameraShakeInstance {
        struct FCameraShakeInstance* Data;
        int Count;
        int Max;
};

struct FOneTimeDataElement;
struct TArray_FOneTimeDataElement {
        struct FOneTimeDataElement* Data;
        int Count;
        int Max;
};

struct FRandomAnimInfo;
struct TArray_FRandomAnimInfo {
        struct FRandomAnimInfo* Data;
        int Count;
        int Max;
};

struct FMoveToCellData;
struct TArray_FMoveToCellData {
        struct FMoveToCellData* Data;
        int Count;
        int Max;
};

struct FGameResourceDataProvider;
struct TArray_FGameResourceDataProvider {
        struct FGameResourceDataProvider* Data;
        int Count;
        int Max;
};

struct FEffectSoundData;
struct TArray_FEffectSoundData {
        struct FEffectSoundData* Data;
        int Count;
        int Max;
};

struct AWillowDialogEchoActorPtr;
struct TArray_AWillowDialogEchoActorPtr {
        struct AWillowDialogEchoActorPtr* Data;
        int Count;
        int Max;
};

struct AWillowSpectatorPointPtr;
struct TArray_AWillowSpectatorPointPtr {
        struct AWillowSpectatorPointPtr* Data;
        int Count;
        int Max;
};

struct FBalanceMeResourceUpgradePath;
struct TArray_FBalanceMeResourceUpgradePath {
        struct FBalanceMeResourceUpgradePath* Data;
        int Count;
        int Max;
};

struct USoundNodePtr;
struct TArray_USoundNodePtr {
        struct USoundNodePtr* Data;
        int Count;
        int Max;
};

struct FFullyLoadedPackagesInfo;
struct TArray_FFullyLoadedPackagesInfo {
        struct FFullyLoadedPackagesInfo* Data;
        int Count;
        int Max;
};

struct FFontCharacter;
struct TArray_FFontCharacter {
        struct FFontCharacter* Data;
        int Count;
        int Max;
};

struct FSpecialMoveData;
struct TArray_FSpecialMoveData {
        struct FSpecialMoveData* Data;
        int Count;
        int Max;
};

struct FBulletTimerEvent;
struct TArray_FBulletTimerEvent {
        struct FBulletTimerEvent* Data;
        int Count;
        int Max;
};

struct UParticleModuleSpawnBasePtr;
struct TArray_UParticleModuleSpawnBasePtr {
        struct UParticleModuleSpawnBasePtr* Data;
        int Count;
        int Max;
};

struct FVectorMaterialParamMICData;
struct TArray_FVectorMaterialParamMICData {
        struct FVectorMaterialParamMICData* Data;
        int Count;
        int Max;
};

struct FGPMCollection;
struct TArray_FGPMCollection {
        struct FGPMCollection* Data;
        int Count;
        int Max;
};

struct FVehicleDefaultCrewStruct;
struct TArray_FVehicleDefaultCrewStruct {
        struct FVehicleDefaultCrewStruct* Data;
        int Count;
        int Max;
};

struct FPanelInfo;
struct TArray_FPanelInfo {
        struct FPanelInfo* Data;
        int Count;
        int Max;
};

struct FSpeedKillData;
struct TArray_FSpeedKillData {
        struct FSpeedKillData* Data;
        int Count;
        int Max;
};

struct FKillSkillDuration;
struct TArray_FKillSkillDuration {
        struct FKillSkillDuration* Data;
        int Count;
        int Max;
};

struct FInventorySerialNumber;
struct TArray_FInventorySerialNumber {
        struct FInventorySerialNumber* Data;
        int Count;
        int Max;
};

struct UMarketingUnlockDefinitionPtr;
struct TArray_UMarketingUnlockDefinitionPtr {
        struct UMarketingUnlockDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FLocalAuthSession;
struct TArray_FLocalAuthSession {
        struct FLocalAuthSession* Data;
        int Count;
        int Max;
};

struct FDamageReactionData;
struct TArray_FDamageReactionData {
        struct FDamageReactionData* Data;
        int Count;
        int Max;
};

struct FEncounterTracker;
struct TArray_FEncounterTracker {
        struct FEncounterTracker* Data;
        int Count;
        int Max;
};

struct FListener;
struct TArray_FListener {
        struct FListener* Data;
        int Count;
        int Max;
};

struct UInputSetDefinitionPtr;
struct TArray_UInputSetDefinitionPtr {
        struct UInputSetDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FSourceObjectData;
struct TArray_FSourceObjectData {
        struct FSourceObjectData* Data;
        int Count;
        int Max;
};

struct FMissionData;
struct TArray_FMissionData {
        struct FMissionData* Data;
        int Count;
        int Max;
};

struct FUnloadableDlcWeaponSaveGameData;
struct TArray_FUnloadableDlcWeaponSaveGameData {
        struct FUnloadableDlcWeaponSaveGameData* Data;
        int Count;
        int Max;
};

struct FSkillActionData;
struct TArray_FSkillActionData {
        struct FSkillActionData* Data;
        int Count;
        int Max;
};

struct ULineSegmentPtr;
struct TArray_ULineSegmentPtr {
        struct ULineSegmentPtr* Data;
        int Count;
        int Max;
};

struct FProfileDefinition;
struct TArray_FProfileDefinition {
        struct FProfileDefinition* Data;
        int Count;
        int Max;
};

struct FGameTypePrefix;
struct TArray_FGameTypePrefix {
        struct FGameTypePrefix* Data;
        int Count;
        int Max;
};

struct FPlayerOwnedComponent;
struct TArray_FPlayerOwnedComponent {
        struct FPlayerOwnedComponent* Data;
        int Count;
        int Max;
};

struct FTerrainHeight;
struct TArray_FTerrainHeight {
        struct FTerrainHeight* Data;
        int Count;
        int Max;
};

struct FNameBasedObjectPath;
struct TArray_FNameBasedObjectPath {
        struct FNameBasedObjectPath* Data;
        int Count;
        int Max;
};

struct FStaticMeshComponentLODInfo;
struct TArray_FStaticMeshComponentLODInfo {
        struct FStaticMeshComponentLODInfo* Data;
        int Count;
        int Max;
};

struct AGearboxPlayerControllerPtr;
struct TArray_AGearboxPlayerControllerPtr {
        struct AGearboxPlayerControllerPtr* Data;
        int Count;
        int Max;
};

struct FDeveloperData;
struct TArray_FDeveloperData {
        struct FDeveloperData* Data;
        int Count;
        int Max;
};

struct FHitTargetRecord;
struct TArray_FHitTargetRecord {
        struct FHitTargetRecord* Data;
        int Count;
        int Max;
};

struct FSkillSaveGameData;
struct TArray_FSkillSaveGameData {
        struct FSkillSaveGameData* Data;
        int Count;
        int Max;
};

struct FFlagEvalORConnector;
struct TArray_FFlagEvalORConnector {
        struct FFlagEvalORConnector* Data;
        int Count;
        int Max;
};

struct UAnimSequencePtr;
struct TArray_UAnimSequencePtr {
        struct UAnimSequencePtr* Data;
        int Count;
        int Max;
};

struct UPackagePtr;
struct TArray_UPackagePtr {
        struct UPackagePtr* Data;
        int Count;
        int Max;
};

struct FTitleFile;
struct TArray_FTitleFile {
        struct FTitleFile* Data;
        int Count;
        int Max;
};

struct FMarketplaceOfferData;
struct TArray_FMarketplaceOfferData {
        struct FMarketplaceOfferData* Data;
        int Count;
        int Max;
};

struct FTombstoneData;
struct TArray_FTombstoneData {
        struct FTombstoneData* Data;
        int Count;
        int Max;
};

struct URB_ConstraintInstancePtr;
struct TArray_URB_ConstraintInstancePtr {
        struct URB_ConstraintInstancePtr* Data;
        int Count;
        int Max;
};

struct FPopulationActor;
struct TArray_FPopulationActor {
        struct FPopulationActor* Data;
        int Count;
        int Max;
};

struct FAIPawnPlaythroughData;
struct TArray_FAIPawnPlaythroughData {
        struct FAIPawnPlaythroughData* Data;
        int Count;
        int Max;
};

struct Fs_actorList;
struct TArray_Fs_actorList {
        struct Fs_actorList* Data;
        int Count;
        int Max;
};

struct FServerQueryToRulesResponseMapping;
struct TArray_FServerQueryToRulesResponseMapping {
        struct FServerQueryToRulesResponseMapping* Data;
        int Count;
        int Max;
};

struct FVariableLink;
struct TArray_FVariableLink {
        struct FVariableLink* Data;
        int Count;
        int Max;
};

struct AStatusEffectReplicatedEmitterPtr;
struct TArray_AStatusEffectReplicatedEmitterPtr {
        struct AStatusEffectReplicatedEmitterPtr* Data;
        int Count;
        int Max;
};

struct UGFxMovieDrawStylePtr;
struct TArray_UGFxMovieDrawStylePtr {
        struct UGFxMovieDrawStylePtr* Data;
        int Count;
        int Max;
};

struct FVehicleSeatDefinition;
struct TArray_FVehicleSeatDefinition {
        struct FVehicleSeatDefinition* Data;
        int Count;
        int Max;
};

struct FTimedAnimBehaviorEvent;
struct TArray_FTimedAnimBehaviorEvent {
        struct FTimedAnimBehaviorEvent* Data;
        int Count;
        int Max;
};

struct FItemBuilderData;
struct TArray_FItemBuilderData {
        struct FItemBuilderData* Data;
        int Count;
        int Max;
};

struct FBlockedMissionData;
struct TArray_FBlockedMissionData {
        struct FBlockedMissionData* Data;
        int Count;
        int Max;
};

struct FTier;
struct TArray_FTier {
        struct FTier* Data;
        int Count;
        int Max;
};

struct USkeletalMeshSocketPtr;
struct TArray_USkeletalMeshSocketPtr {
        struct USkeletalMeshSocketPtr* Data;
        int Count;
        int Max;
};

struct FEmitterDynamicParameter;
struct TArray_FEmitterDynamicParameter {
        struct FEmitterDynamicParameter* Data;
        int Count;
        int Max;
};

struct FColumnDataStruct;
struct TArray_FColumnDataStruct {
        struct FColumnDataStruct* Data;
        int Count;
        int Max;
};

struct FDefinitionIconDatum;
struct TArray_FDefinitionIconDatum {
        struct FDefinitionIconDatum* Data;
        int Count;
        int Max;
};

struct FMenuHeaderData;
struct TArray_FMenuHeaderData {
        struct FMenuHeaderData* Data;
        int Count;
        int Max;
};

struct FUIProviderScriptFieldValue;
struct TArray_FUIProviderScriptFieldValue {
        struct FUIProviderScriptFieldValue* Data;
        int Count;
        int Max;
};

struct FPropertyInfo;
struct TArray_FPropertyInfo {
        struct FPropertyInfo* Data;
        int Count;
        int Max;
};

struct FVehicleGameStageGradeWeightData;
struct TArray_FVehicleGameStageGradeWeightData {
        struct FVehicleGameStageGradeWeightData* Data;
        int Count;
        int Max;
};

struct UDownloadableAssetLibraryDefinitionPtr;
struct TArray_UDownloadableAssetLibraryDefinitionPtr {
        struct UDownloadableAssetLibraryDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FObjectiveUpdateData;
struct TArray_FObjectiveUpdateData {
        struct FObjectiveUpdateData* Data;
        int Count;
        int Max;
};

struct FDialogueArgument;
struct TArray_FDialogueArgument {
        struct FDialogueArgument* Data;
        int Count;
        int Max;
};

struct FGrenadeModPartBehaviorSequenceStateData;
struct TArray_FGrenadeModPartBehaviorSequenceStateData {
        struct FGrenadeModPartBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct FRelevanceBucketStruct;
struct TArray_FRelevanceBucketStruct {
        struct FRelevanceBucketStruct* Data;
        int Count;
        int Max;
};

struct FDrunkenWaveFormData;
struct TArray_FDrunkenWaveFormData {
        struct FDrunkenWaveFormData* Data;
        int Count;
        int Max;
};

struct UDownloadableVehicleDefinitionPtr;
struct TArray_UDownloadableVehicleDefinitionPtr {
        struct UDownloadableVehicleDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FSkillKillEventData;
struct TArray_FSkillKillEventData {
        struct FSkillKillEventData* Data;
        int Count;
        int Max;
};

struct UGearboxDialogNodePtr;
struct TArray_UGearboxDialogNodePtr {
        struct UGearboxDialogNodePtr* Data;
        int Count;
        int Max;
};

struct FAttributePresentationDamageTypeMapping;
struct TArray_FAttributePresentationDamageTypeMapping {
        struct FAttributePresentationDamageTypeMapping* Data;
        int Count;
        int Max;
};

struct FKCachedConvexData;
struct TArray_FKCachedConvexData {
        struct FKCachedConvexData* Data;
        int Count;
        int Max;
};

struct UAnimNodeSlotPtr;
struct TArray_UAnimNodeSlotPtr {
        struct UAnimNodeSlotPtr* Data;
        int Count;
        int Max;
};

struct FHitRegionEmitters;
struct TArray_FHitRegionEmitters {
        struct FHitRegionEmitters* Data;
        int Count;
        int Max;
};

struct USkillPtr;
struct TArray_USkillPtr {
        struct USkillPtr* Data;
        int Count;
        int Max;
};

struct FDynamicNavMeshConnection;
struct TArray_FDynamicNavMeshConnection {
        struct FDynamicNavMeshConnection* Data;
        int Count;
        int Max;
};

struct FProjectileClassEventData;
struct TArray_FProjectileClassEventData {
        struct FProjectileClassEventData* Data;
        int Count;
        int Max;
};

struct FFDamageMorphTargets;
struct TArray_FFDamageMorphTargets {
        struct FFDamageMorphTargets* Data;
        int Count;
        int Max;
};

struct USkelControlLookAtPtr;
struct TArray_USkelControlLookAtPtr {
        struct USkelControlLookAtPtr* Data;
        int Count;
        int Max;
};

struct FFaceFXSoundCueKey;
struct TArray_FFaceFXSoundCueKey {
        struct FFaceFXSoundCueKey* Data;
        int Count;
        int Max;
};

struct FAttachmentLocationData;
struct TArray_FAttachmentLocationData {
        struct FAttachmentLocationData* Data;
        int Count;
        int Max;
};

struct FCompartmentRunList;
struct TArray_FCompartmentRunList {
        struct FCompartmentRunList* Data;
        int Count;
        int Max;
};

struct UMorphTargetPtr;
struct TArray_UMorphTargetPtr {
        struct UMorphTargetPtr* Data;
        int Count;
        int Max;
};

struct FRuleSetReference;
struct TArray_FRuleSetReference {
        struct FRuleSetReference* Data;
        int Count;
        int Max;
};

struct FDamagePair;
struct TArray_FDamagePair {
        struct FDamagePair* Data;
        int Count;
        int Max;
};

struct FLocationInfo;
struct TArray_FLocationInfo {
        struct FLocationInfo* Data;
        int Count;
        int Max;
};

struct FUIAxisEmulationDefinition;
struct TArray_FUIAxisEmulationDefinition {
        struct FUIAxisEmulationDefinition* Data;
        int Count;
        int Max;
};

struct FStaticMeshLODInfo;
struct TArray_FStaticMeshLODInfo {
        struct FStaticMeshLODInfo* Data;
        int Count;
        int Max;
};

struct FCameraCutInfo;
struct TArray_FCameraCutInfo {
        struct FCameraCutInfo* Data;
        int Count;
        int Max;
};

struct FPendingEntry;
struct TArray_FPendingEntry {
        struct FPendingEntry* Data;
        int Count;
        int Max;
};

struct FViewParticleEmitterInstanceMotionBlurInfo;
struct TArray_FViewParticleEmitterInstanceMotionBlurInfo {
        struct FViewParticleEmitterInstanceMotionBlurInfo* Data;
        int Count;
        int Max;
};

struct FDeathByDamageTypeStatID;
struct TArray_FDeathByDamageTypeStatID {
        struct FDeathByDamageTypeStatID* Data;
        int Count;
        int Max;
};

struct FShadowRelevanceSizePair;
struct TArray_FShadowRelevanceSizePair {
        struct FShadowRelevanceSizePair* Data;
        int Count;
        int Max;
};

struct FAIDefinitionRecord;
struct TArray_FAIDefinitionRecord {
        struct FAIDefinitionRecord* Data;
        int Count;
        int Max;
};

struct FNavigationArea;
struct TArray_FNavigationArea {
        struct FNavigationArea* Data;
        int Count;
        int Max;
};

struct FInputDeviceButtonData;
struct TArray_FInputDeviceButtonData {
        struct FInputDeviceButtonData* Data;
        int Count;
        int Max;
};

struct FPlayerClassAchievementUnlockData;
struct TArray_FPlayerClassAchievementUnlockData {
        struct FPlayerClassAchievementUnlockData* Data;
        int Count;
        int Max;
};

struct FBlackMarketUpgradeLevelData;
struct TArray_FBlackMarketUpgradeLevelData {
        struct FBlackMarketUpgradeLevelData* Data;
        int Count;
        int Max;
};

struct FCachedInvData;
struct TArray_FCachedInvData {
        struct FCachedInvData* Data;
        int Count;
        int Max;
};

struct FPerkData;
struct TArray_FPerkData {
        struct FPerkData* Data;
        int Count;
        int Max;
};

struct FParticleSystemReplayFrame;
struct TArray_FParticleSystemReplayFrame {
        struct FParticleSystemReplayFrame* Data;
        int Count;
        int Max;
};

struct APylonPtr;
struct TArray_APylonPtr {
        struct APylonPtr* Data;
        int Count;
        int Max;
};

struct FBoolTrackKey;
struct TArray_FBoolTrackKey {
        struct FBoolTrackKey* Data;
        int Count;
        int Max;
};

struct UGameplayEventsHandlerPtr;
struct TArray_UGameplayEventsHandlerPtr {
        struct UGameplayEventsHandlerPtr* Data;
        int Count;
        int Max;
};

struct FSimpleAnimData;
struct TArray_FSimpleAnimData {
        struct FSimpleAnimData* Data;
        int Count;
        int Max;
};

struct FDescriptionEntry;
struct TArray_FDescriptionEntry {
        struct FDescriptionEntry* Data;
        int Count;
        int Max;
};

struct FNamedSession;
struct TArray_FNamedSession {
        struct FNamedSession* Data;
        int Count;
        int Max;
};

struct FHUDWidget_ChallengeData;
struct TArray_FHUDWidget_ChallengeData {
        struct FHUDWidget_ChallengeData* Data;
        int Count;
        int Max;
};

struct FCoordinatedParticleSystemDefinition;
struct TArray_FCoordinatedParticleSystemDefinition {
        struct FCoordinatedParticleSystemDefinition* Data;
        int Count;
        int Max;
};

struct APopulationOpportunityDenPtr;
struct TArray_APopulationOpportunityDenPtr {
        struct APopulationOpportunityDenPtr* Data;
        int Count;
        int Max;
};

struct FPendingClientAuth;
struct TArray_FPendingClientAuth {
        struct FPendingClientAuth* Data;
        int Count;
        int Max;
};

struct FDuelTeamPair;
struct TArray_FDuelTeamPair {
        struct FDuelTeamPair* Data;
        int Count;
        int Max;
};

struct FVector2D;
struct TArray_FVector2D {
        struct FVector2D* Data;
        int Count;
        int Max;
};

struct FInjuredStringReplacementSet;
struct TArray_FInjuredStringReplacementSet {
        struct FInjuredStringReplacementSet* Data;
        int Count;
        int Max;
};

struct FAutoCompleteCommand;
struct TArray_FAutoCompleteCommand {
        struct FAutoCompleteCommand* Data;
        int Count;
        int Max;
};

struct FWeaponBoneControllerData;
struct TArray_FWeaponBoneControllerData {
        struct FWeaponBoneControllerData* Data;
        int Count;
        int Max;
};

struct FDLCMissionData;
struct TArray_FDLCMissionData {
        struct FDLCMissionData* Data;
        int Count;
        int Max;
};

struct ULightComponentPtr;
struct TArray_ULightComponentPtr {
        struct ULightComponentPtr* Data;
        int Count;
        int Max;
};

struct FPartyReservation;
struct TArray_FPartyReservation {
        struct FPartyReservation* Data;
        int Count;
        int Max;
};

struct FSMMaterialSetterDatum;
struct TArray_FSMMaterialSetterDatum {
        struct FSMMaterialSetterDatum* Data;
        int Count;
        int Max;
};

struct FSeqEventLink;
struct TArray_FSeqEventLink {
        struct FSeqEventLink* Data;
        int Count;
        int Max;
};

struct FSeqVarLink;
struct TArray_FSeqVarLink {
        struct FSeqVarLink* Data;
        int Count;
        int Max;
};

struct FSortableDataElement;
struct TArray_FSortableDataElement {
        struct FSortableDataElement* Data;
        int Count;
        int Max;
};

struct FCellInfo;
struct TArray_FCellInfo {
        struct FCellInfo* Data;
        int Count;
        int Max;
};

struct FSuspensionSound;
struct TArray_FSuspensionSound {
        struct FSuspensionSound* Data;
        int Count;
        int Max;
};

struct UTextureMoviePtr;
struct TArray_UTextureMoviePtr {
        struct UTextureMoviePtr* Data;
        int Count;
        int Max;
};

struct FRuleSetRecord;
struct TArray_FRuleSetRecord {
        struct FRuleSetRecord* Data;
        int Count;
        int Max;
};

struct FAlphaMap;
struct TArray_FAlphaMap {
        struct FAlphaMap* Data;
        int Count;
        int Max;
};

struct AWillowBoundaryTurretPtr;
struct TArray_AWillowBoundaryTurretPtr {
        struct AWillowBoundaryTurretPtr* Data;
        int Count;
        int Max;
};

struct FSMPerchRandomPair;
struct TArray_FSMPerchRandomPair {
        struct FSMPerchRandomPair* Data;
        int Count;
        int Max;
};

struct UInterpGroupInstPtr;
struct TArray_UInterpGroupInstPtr {
        struct UInterpGroupInstPtr* Data;
        int Count;
        int Max;
};

struct FFilterKeyToSteamKeyMapping;
struct TArray_FFilterKeyToSteamKeyMapping {
        struct FFilterKeyToSteamKeyMapping* Data;
        int Count;
        int Max;
};

struct FHitRegionDamage;
struct TArray_FHitRegionDamage {
        struct FHitRegionDamage* Data;
        int Count;
        int Max;
};

struct FLockoutData;
struct TArray_FLockoutData {
        struct FLockoutData* Data;
        int Count;
        int Max;
};

struct FMapObjectData;
struct TArray_FMapObjectData {
        struct FMapObjectData* Data;
        int Count;
        int Max;
};

struct FWireLinkage;
struct TArray_FWireLinkage {
        struct FWireLinkage* Data;
        int Count;
        int Max;
};

struct UVehicleFamilyDefinitionPtr;
struct TArray_UVehicleFamilyDefinitionPtr {
        struct UVehicleFamilyDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FTextMarkupEntry;
struct TArray_FTextMarkupEntry {
        struct FTextMarkupEntry* Data;
        int Count;
        int Max;
};

struct FGearBuilderCustomizationUsageData;
struct TArray_FGearBuilderCustomizationUsageData {
        struct FGearBuilderCustomizationUsageData* Data;
        int Count;
        int Max;
};

struct FThirdPersonMenuView;
struct TArray_FThirdPersonMenuView {
        struct FThirdPersonMenuView* Data;
        int Count;
        int Max;
};

struct FRuleInfo;
struct TArray_FRuleInfo {
        struct FRuleInfo* Data;
        int Count;
        int Max;
};

struct UUIConfigFileProviderPtr;
struct TArray_UUIConfigFileProviderPtr {
        struct UUIConfigFileProviderPtr* Data;
        int Count;
        int Max;
};

struct FClientFilterORClause;
struct TArray_FClientFilterORClause {
        struct FClientFilterORClause* Data;
        int Count;
        int Max;
};

struct FAwarenessInfo;
struct TArray_FAwarenessInfo {
        struct FAwarenessInfo* Data;
        int Count;
        int Max;
};

struct FAnimSetMeshLinkup;
struct TArray_FAnimSetMeshLinkup {
        struct FAnimSetMeshLinkup* Data;
        int Count;
        int Max;
};

struct FExposureCacheStruct;
struct TArray_FExposureCacheStruct {
        struct FExposureCacheStruct* Data;
        int Count;
        int Max;
};

struct FSKURuntimeLibrarySet;
struct TArray_FSKURuntimeLibrarySet {
        struct FSKURuntimeLibrarySet* Data;
        int Count;
        int Max;
};

struct UPhysicalMaterialPtr;
struct TArray_UPhysicalMaterialPtr {
        struct UPhysicalMaterialPtr* Data;
        int Count;
        int Max;
};

struct FAnimSetBakeAndPruneStatus;
struct TArray_FAnimSetBakeAndPruneStatus {
        struct FAnimSetBakeAndPruneStatus* Data;
        int Count;
        int Max;
};

struct UPersistentSequenceDataPtr;
struct TArray_UPersistentSequenceDataPtr {
        struct UPersistentSequenceDataPtr* Data;
        int Count;
        int Max;
};

struct FLevelStateRecord;
struct TArray_FLevelStateRecord {
        struct FLevelStateRecord* Data;
        int Count;
        int Max;
};

struct FSparkOutstandingRequest;
struct TArray_FSparkOutstandingRequest {
        struct FSparkOutstandingRequest* Data;
        int Count;
        int Max;
};

struct FClanSwitchData;
struct TArray_FClanSwitchData {
        struct FClanSwitchData* Data;
        int Count;
        int Max;
};

struct FFlashTextEntry;
struct TArray_FFlashTextEntry {
        struct FFlashTextEntry* Data;
        int Count;
        int Max;
};

struct FDamageOnlyOnceData;
struct TArray_FDamageOnlyOnceData {
        struct FDamageOnlyOnceData* Data;
        int Count;
        int Max;
};

struct UAwarenessZoneDefinitionPtr;
struct TArray_UAwarenessZoneDefinitionPtr {
        struct UAwarenessZoneDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FColor;
struct TArray_FColor {
        struct FColor* Data;
        int Count;
        int Max;
};

struct FExplosionScaleData;
struct TArray_FExplosionScaleData {
        struct FExplosionScaleData* Data;
        int Count;
        int Max;
};

struct FChestData;
struct TArray_FChestData {
        struct FChestData* Data;
        int Count;
        int Max;
};

struct UAnimMetaDataPtr;
struct TArray_UAnimMetaDataPtr {
        struct UAnimMetaDataPtr* Data;
        int Count;
        int Max;
};

struct UImpactDefinitionPtr;
struct TArray_UImpactDefinitionPtr {
        struct UImpactDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FGestaltSocketRemapEntry;
struct TArray_FGestaltSocketRemapEntry {
        struct FGestaltSocketRemapEntry* Data;
        int Count;
        int Max;
};

struct URuleSetPtr;
struct TArray_URuleSetPtr {
        struct URuleSetPtr* Data;
        int Count;
        int Max;
};

struct FObjectReference;
struct TArray_FObjectReference {
        struct FObjectReference* Data;
        int Count;
        int Max;
};

struct FDeathByWeaponDamageStatID;
struct TArray_FDeathByWeaponDamageStatID {
        struct FDeathByWeaponDamageStatID* Data;
        int Count;
        int Max;
};

struct FTouchingPawn;
struct TArray_FTouchingPawn {
        struct FTouchingPawn* Data;
        int Count;
        int Max;
};

struct FHomingRadiusThreshold;
struct TArray_FHomingRadiusThreshold {
        struct FHomingRadiusThreshold* Data;
        int Count;
        int Max;
};

struct FEventUploadConfig;
struct TArray_FEventUploadConfig {
        struct FEventUploadConfig* Data;
        int Count;
        int Max;
};

struct AWillowMindPtr;
struct TArray_AWillowMindPtr {
        struct AWillowMindPtr* Data;
        int Count;
        int Max;
};

struct FGuid;
struct TArray_FGuid {
        struct FGuid* Data;
        int Count;
        int Max;
};

struct UInputDeviceDefinitionPtr;
struct TArray_UInputDeviceDefinitionPtr {
        struct UInputDeviceDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FObjectiveIcon;
struct TArray_FObjectiveIcon {
        struct FObjectiveIcon* Data;
        int Count;
        int Max;
};

struct FAkCallBackGetRTPC;
struct TArray_FAkCallBackGetRTPC {
        struct FAkCallBackGetRTPC* Data;
        int Count;
        int Max;
};

struct UPhysicsJumpConnectionPtr;
struct TArray_UPhysicsJumpConnectionPtr {
        struct UPhysicsJumpConnectionPtr* Data;
        int Count;
        int Max;
};

struct FGestaltInfo;
struct TArray_FGestaltInfo {
        struct FGestaltInfo* Data;
        int Count;
        int Max;
};

struct UGFxMovieStatePtr;
struct TArray_UGFxMovieStatePtr {
        struct UGFxMovieStatePtr* Data;
        int Count;
        int Max;
};

struct ULandscapeHeightfieldCollisionComponentPtr;
struct TArray_ULandscapeHeightfieldCollisionComponentPtr {
        struct ULandscapeHeightfieldCollisionComponentPtr* Data;
        int Count;
        int Max;
};

struct FRELBManagerStats;
struct TArray_FRELBManagerStats {
        struct FRELBManagerStats* Data;
        int Count;
        int Max;
};

struct UTexture2DPtr;
struct TArray_UTexture2DPtr {
        struct UTexture2DPtr* Data;
        int Count;
        int Max;
};

struct FSystemOption;
struct TArray_FSystemOption {
        struct FSystemOption* Data;
        int Count;
        int Max;
};

struct UAnimNodeBlendBasePtr;
struct TArray_UAnimNodeBlendBasePtr {
        struct UAnimNodeBlendBasePtr* Data;
        int Count;
        int Max;
};

struct FTerrainFoliageMesh;
struct TArray_FTerrainFoliageMesh {
        struct FTerrainFoliageMesh* Data;
        int Count;
        int Max;
};

struct FGBXNavMeshPoly;
struct TArray_FGBXNavMeshPoly {
        struct FGBXNavMeshPoly* Data;
        int Count;
        int Max;
};

struct FLegacyCustomizationItemData;
struct TArray_FLegacyCustomizationItemData {
        struct FLegacyCustomizationItemData* Data;
        int Count;
        int Max;
};

struct FActivateOp;
struct TArray_FActivateOp {
        struct FActivateOp* Data;
        int Count;
        int Max;
};

struct USoundCuePtr;
struct TArray_USoundCuePtr {
        struct USoundCuePtr* Data;
        int Count;
        int Max;
};

struct FPriorityDebugStruct;
struct TArray_FPriorityDebugStruct {
        struct FPriorityDebugStruct* Data;
        int Count;
        int Max;
};

struct FResultEntry;
struct TArray_FResultEntry {
        struct FResultEntry* Data;
        int Count;
        int Max;
};

struct FTimedMissionData;
struct TArray_FTimedMissionData {
        struct FTimedMissionData* Data;
        int Count;
        int Max;
};

struct FEncounterWaveData;
struct TArray_FEncounterWaveData {
        struct FEncounterWaveData* Data;
        int Count;
        int Max;
};

struct FPopulationMasterStat;
struct TArray_FPopulationMasterStat {
        struct FPopulationMasterStat* Data;
        int Count;
        int Max;
};

struct FCoverSlot;
struct TArray_FCoverSlot {
        struct FCoverSlot* Data;
        int Count;
        int Max;
};

struct FMaterialParticleSystemParameter;
struct TArray_FMaterialParticleSystemParameter {
        struct FMaterialParticleSystemParameter* Data;
        int Count;
        int Max;
};

struct FLoadingMovieExceptionInfo;
struct TArray_FLoadingMovieExceptionInfo {
        struct FLoadingMovieExceptionInfo* Data;
        int Count;
        int Max;
};

struct FTargetInfoRecord;
struct TArray_FTargetInfoRecord {
        struct FTargetInfoRecord* Data;
        int Count;
        int Max;
};

struct ULevelPtr;
struct TArray_ULevelPtr {
        struct ULevelPtr* Data;
        int Count;
        int Max;
};

struct FSwoopAttackData;
struct TArray_FSwoopAttackData {
        struct FSwoopAttackData* Data;
        int Count;
        int Max;
};

struct ULinePtr;
struct TArray_ULinePtr {
        struct ULinePtr* Data;
        int Count;
        int Max;
};

struct FChildBoneBlendInfo;
struct TArray_FChildBoneBlendInfo {
        struct FChildBoneBlendInfo* Data;
        int Count;
        int Max;
};

struct USpecialMove_CloakPtr;
struct TArray_USpecialMove_CloakPtr {
        struct USpecialMove_CloakPtr* Data;
        int Count;
        int Max;
};

struct ADynamicSMActorPtr;
struct TArray_ADynamicSMActorPtr {
        struct ADynamicSMActorPtr* Data;
        int Count;
        int Max;
};

struct FBlackMarketPostLaunchUpgradeData;
struct TArray_FBlackMarketPostLaunchUpgradeData {
        struct FBlackMarketPostLaunchUpgradeData* Data;
        int Count;
        int Max;
};

struct FDamageSurfaceTypeModifier;
struct TArray_FDamageSurfaceTypeModifier {
        struct FDamageSurfaceTypeModifier* Data;
        int Count;
        int Max;
};

struct FDebugListItem;
struct TArray_FDebugListItem {
        struct FDebugListItem* Data;
        int Count;
        int Max;
};

struct FPainDialogLine;
struct TArray_FPainDialogLine {
        struct FPainDialogLine* Data;
        int Count;
        int Max;
};

struct FLoadCharacterData;
struct TArray_FLoadCharacterData {
        struct FLoadCharacterData* Data;
        int Count;
        int Max;
};

struct UParticleEmitterPtr;
struct TArray_UParticleEmitterPtr {
        struct UParticleEmitterPtr* Data;
        int Count;
        int Max;
};

struct FNamedInterface;
struct TArray_FNamedInterface {
        struct FNamedInterface* Data;
        int Count;
        int Max;
};

struct UPopulationBodyTagPtr;
struct TArray_UPopulationBodyTagPtr {
        struct UPopulationBodyTagPtr* Data;
        int Count;
        int Max;
};

struct FCoverReplicationInfo;
struct TArray_FCoverReplicationInfo {
        struct FCoverReplicationInfo* Data;
        int Count;
        int Max;
};

struct FConsoleMessage;
struct TArray_FConsoleMessage {
        struct FConsoleMessage* Data;
        int Count;
        int Max;
};

struct FTeamEvents;
struct TArray_FTeamEvents {
        struct FTeamEvents* Data;
        int Count;
        int Max;
};

struct FRotationTrack;
struct TArray_FRotationTrack {
        struct FRotationTrack* Data;
        int Count;
        int Max;
};

struct FLocationBoneSocketInfo;
struct TArray_FLocationBoneSocketInfo {
        struct FLocationBoneSocketInfo* Data;
        int Count;
        int Max;
};

struct FPremiumCustomizationInfo;
struct TArray_FPremiumCustomizationInfo {
        struct FPremiumCustomizationInfo* Data;
        int Count;
        int Max;
};

struct UInteractionPtr;
struct TArray_UInteractionPtr {
        struct UInteractionPtr* Data;
        int Count;
        int Max;
};

struct USVehicleWheelPtr;
struct TArray_USVehicleWheelPtr {
        struct USVehicleWheelPtr* Data;
        int Count;
        int Max;
};

struct FBalancedInventoryData;
struct TArray_FBalancedInventoryData {
        struct FBalancedInventoryData* Data;
        int Count;
        int Max;
};

struct FParticleEvent_GenerateInfo;
struct TArray_FParticleEvent_GenerateInfo {
        struct FParticleEvent_GenerateInfo* Data;
        int Count;
        int Max;
};

struct UTI_PrioritizePtr;
struct TArray_UTI_PrioritizePtr {
        struct UTI_PrioritizePtr* Data;
        int Count;
        int Max;
};

struct FFileNameToURLMapping;
struct TArray_FFileNameToURLMapping {
        struct FFileNameToURLMapping* Data;
        int Count;
        int Max;
};

struct URB_ConstraintSetupPtr;
struct TArray_URB_ConstraintSetupPtr {
        struct URB_ConstraintSetupPtr* Data;
        int Count;
        int Max;
};

struct FSMNotify;
struct TArray_FSMNotify {
        struct FSMNotify* Data;
        int Count;
        int Max;
};

struct FAttachment;
struct TArray_FAttachment {
        struct FAttachment* Data;
        int Count;
        int Max;
};

struct FAimAnimTransitionData;
struct TArray_FAimAnimTransitionData {
        struct FAimAnimTransitionData* Data;
        int Count;
        int Max;
};

struct FMissionWidgetMessage;
struct TArray_FMissionWidgetMessage {
        struct FMissionWidgetMessage* Data;
        int Count;
        int Max;
};

struct UParticleModuleOrbitPtr;
struct TArray_UParticleModuleOrbitPtr {
        struct UParticleModuleOrbitPtr* Data;
        int Count;
        int Max;
};

struct FDebugDisplayProperty;
struct TArray_FDebugDisplayProperty {
        struct FDebugDisplayProperty* Data;
        int Count;
        int Max;
};

struct FMinimapObjectiveIconClip;
struct TArray_FMinimapObjectiveIconClip {
        struct FMinimapObjectiveIconClip* Data;
        int Count;
        int Max;
};

struct FItemBuilderBalanceDefinition;
struct TArray_FItemBuilderBalanceDefinition {
        struct FItemBuilderBalanceDefinition* Data;
        int Count;
        int Max;
};

struct FSoftBodySpecialBoneInfo;
struct TArray_FSoftBodySpecialBoneInfo {
        struct FSoftBodySpecialBoneInfo* Data;
        int Count;
        int Max;
};

struct FInputAxisData;
struct TArray_FInputAxisData {
        struct FInputAxisData* Data;
        int Count;
        int Max;
};

struct FOnlineGameSearchResult;
struct TArray_FOnlineGameSearchResult {
        struct FOnlineGameSearchResult* Data;
        int Count;
        int Max;
};

struct FSkelMaterialSetterDatum;
struct TArray_FSkelMaterialSetterDatum {
        struct FSkelMaterialSetterDatum* Data;
        int Count;
        int Max;
};

struct FPopulationOpportunityTracker;
struct TArray_FPopulationOpportunityTracker {
        struct FPopulationOpportunityTracker* Data;
        int Count;
        int Max;
};

struct FAchievementMappingInfo;
struct TArray_FAchievementMappingInfo {
        struct FAchievementMappingInfo* Data;
        int Count;
        int Max;
};

struct FExtraWeaponSlot;
struct TArray_FExtraWeaponSlot {
        struct FExtraWeaponSlot* Data;
        int Count;
        int Max;
};

struct FAnimGroup;
struct TArray_FAnimGroup {
        struct FAnimGroup* Data;
        int Count;
        int Max;
};

struct FMinimapIconClip;
struct TArray_FMinimapIconClip {
        struct FMinimapIconClip* Data;
        int Count;
        int Max;
};

struct FDlcLevelTravelPair;
struct TArray_FDlcLevelTravelPair {
        struct FDlcLevelTravelPair* Data;
        int Count;
        int Max;
};

struct FDynamicFlagInstanceData;
struct TArray_FDynamicFlagInstanceData {
        struct FDynamicFlagInstanceData* Data;
        int Count;
        int Max;
};

struct FTerrainFilteredMaterial;
struct TArray_FTerrainFilteredMaterial {
        struct FTerrainFilteredMaterial* Data;
        int Count;
        int Max;
};

struct FCommentTrackKey;
struct TArray_FCommentTrackKey {
        struct FCommentTrackKey* Data;
        int Count;
        int Max;
};

struct FColumnMetaData;
struct TArray_FColumnMetaData {
        struct FColumnMetaData* Data;
        int Count;
        int Max;
};

struct FAnimTag;
struct TArray_FAnimTag {
        struct FAnimTag* Data;
        int Count;
        int Max;
};

struct FSynchGroup;
struct TArray_FSynchGroup {
        struct FSynchGroup* Data;
        int Count;
        int Max;
};

struct FPlayerInformation;
struct TArray_FPlayerInformation {
        struct FPlayerInformation* Data;
        int Count;
        int Max;
};

struct UParticleModuleEventReceiverBasePtr;
struct TArray_UParticleModuleEventReceiverBasePtr {
        struct UParticleModuleEventReceiverBasePtr* Data;
        int Count;
        int Max;
};

struct FSMExpressionList;
struct TArray_FSMExpressionList {
        struct FSMExpressionList* Data;
        int Count;
        int Max;
};

struct UDownloadablePackageLicenseItemPtr;
struct TArray_UDownloadablePackageLicenseItemPtr {
        struct UDownloadablePackageLicenseItemPtr* Data;
        int Count;
        int Max;
};

struct UParticleSystemReplayPtr;
struct TArray_UParticleSystemReplayPtr {
        struct UParticleSystemReplayPtr* Data;
        int Count;
        int Max;
};

struct FTurretDamageEffectData;
struct TArray_FTurretDamageEffectData {
        struct FTurretDamageEffectData* Data;
        int Count;
        int Max;
};

struct FAkPlayingInfo;
struct TArray_FAkPlayingInfo {
        struct FAkPlayingInfo* Data;
        int Count;
        int Max;
};

struct FGBXNavMeshPolyData;
struct TArray_FGBXNavMeshPolyData {
        struct FGBXNavMeshPolyData* Data;
        int Count;
        int Max;
};

struct FAimOffsetProfile;
struct TArray_FAimOffsetProfile {
        struct FAimOffsetProfile* Data;
        int Count;
        int Max;
};

struct FObstaclePoint;
struct TArray_FObstaclePoint {
        struct FObstaclePoint* Data;
        int Count;
        int Max;
};

struct FRagdollDeathImpulseStruct;
struct TArray_FRagdollDeathImpulseStruct {
        struct FRagdollDeathImpulseStruct* Data;
        int Count;
        int Max;
};

struct FSplineConnection;
struct TArray_FSplineConnection {
        struct FSplineConnection* Data;
        int Count;
        int Max;
};

struct FMissionObserversData;
struct TArray_FMissionObserversData {
        struct FMissionObserversData* Data;
        int Count;
        int Max;
};

struct FItemCardInfo;
struct TArray_FItemCardInfo {
        struct FItemCardInfo* Data;
        int Count;
        int Max;
};

struct FMaterialViewRelevance;
struct TArray_FMaterialViewRelevance {
        struct FMaterialViewRelevance* Data;
        int Count;
        int Max;
};

struct FWorldEventSource;
struct TArray_FWorldEventSource {
        struct FWorldEventSource* Data;
        int Count;
        int Max;
};

struct FInputDeviceAxisData;
struct TArray_FInputDeviceAxisData {
        struct FInputDeviceAxisData* Data;
        int Count;
        int Max;
};

struct FDebugLoadBalance;
struct TArray_FDebugLoadBalance {
        struct FDebugLoadBalance* Data;
        int Count;
        int Max;
};

struct FPawnClassEventData;
struct TArray_FPawnClassEventData {
        struct FPawnClassEventData* Data;
        int Count;
        int Max;
};

struct APatrolDestinationPtr;
struct TArray_APatrolDestinationPtr {
        struct APatrolDestinationPtr* Data;
        int Count;
        int Max;
};

struct FScalarParameterValueOverTime;
struct TArray_FScalarParameterValueOverTime {
        struct FScalarParameterValueOverTime* Data;
        int Count;
        int Max;
};

struct USpecialMoveDefinitionPtr;
struct TArray_USpecialMoveDefinitionPtr {
        struct USpecialMoveDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FVehicleCrewAnimSetMapping;
struct TArray_FVehicleCrewAnimSetMapping {
        struct FVehicleCrewAnimSetMapping* Data;
        int Count;
        int Max;
};

struct FKeyRebindingData;
struct TArray_FKeyRebindingData {
        struct FKeyRebindingData* Data;
        int Count;
        int Max;
};

struct USkelControlBasePtr;
struct TArray_USkelControlBasePtr {
        struct USkelControlBasePtr* Data;
        int Count;
        int Max;
};

struct FGameSettingsCfg;
struct TArray_FGameSettingsCfg {
        struct FGameSettingsCfg* Data;
        int Count;
        int Max;
};

struct UApexClothingAssetPtr;
struct TArray_UApexClothingAssetPtr {
        struct UApexClothingAssetPtr* Data;
        int Count;
        int Max;
};

struct UGearboxDialogEventTagPtr;
struct TArray_UGearboxDialogEventTagPtr {
        struct UGearboxDialogEventTagPtr* Data;
        int Count;
        int Max;
};

struct FCurveKey;
struct TArray_FCurveKey {
        struct FCurveKey* Data;
        int Count;
        int Max;
};

struct FProductCustomizationInfo;
struct TArray_FProductCustomizationInfo {
        struct FProductCustomizationInfo* Data;
        int Count;
        int Max;
};

struct UGearboxDialogPriorityPtr;
struct TArray_UGearboxDialogPriorityPtr {
        struct UGearboxDialogPriorityPtr* Data;
        int Count;
        int Max;
};

struct USpecialMove_DodgePtr;
struct TArray_USpecialMove_DodgePtr {
        struct USpecialMove_DodgePtr* Data;
        int Count;
        int Max;
};

struct FFeatherBoneBlendTarget;
struct TArray_FFeatherBoneBlendTarget {
        struct FFeatherBoneBlendTarget* Data;
        int Count;
        int Max;
};

struct FCoverDebugInfo;
struct TArray_FCoverDebugInfo {
        struct FCoverDebugInfo* Data;
        int Count;
        int Max;
};

struct FCoverDebugPriority;
struct TArray_FCoverDebugPriority {
        struct FCoverDebugPriority* Data;
        int Count;
        int Max;
};

struct FEmoteStance;
struct TArray_FEmoteStance {
        struct FEmoteStance* Data;
        int Count;
        int Max;
};

struct FGameStatGroup;
struct TArray_FGameStatGroup {
        struct FGameStatGroup* Data;
        int Count;
        int Max;
};

struct FPropertyToColumn;
struct TArray_FPropertyToColumn {
        struct FPropertyToColumn* Data;
        int Count;
        int Max;
};

struct FMovieRangeStateData;
struct TArray_FMovieRangeStateData {
        struct FMovieRangeStateData* Data;
        int Count;
        int Max;
};

struct FServerAuthRetry;
struct TArray_FServerAuthRetry {
        struct FServerAuthRetry* Data;
        int Count;
        int Max;
};

struct FFloatMaterialParamMICData;
struct TArray_FFloatMaterialParamMICData {
        struct FFloatMaterialParamMICData* Data;
        int Count;
        int Max;
};

struct ULandscapeComponentPtr;
struct TArray_ULandscapeComponentPtr {
        struct ULandscapeComponentPtr* Data;
        int Count;
        int Max;
};

struct UBodyWeaponHoldDefinitionPtr;
struct TArray_UBodyWeaponHoldDefinitionPtr {
        struct UBodyWeaponHoldDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FActorParticleSystemParameter;
struct TArray_FActorParticleSystemParameter {
        struct FActorParticleSystemParameter* Data;
        int Count;
        int Max;
};

struct AWwiseSoundVolumePtr;
struct TArray_AWwiseSoundVolumePtr {
        struct AWwiseSoundVolumePtr* Data;
        int Count;
        int Max;
};

struct FFiringPatternLine;
struct TArray_FFiringPatternLine {
        struct FFiringPatternLine* Data;
        int Count;
        int Max;
};

struct FLightProjectile;
struct TArray_FLightProjectile {
        struct FLightProjectile* Data;
        int Count;
        int Max;
};

struct UWillowPursuitGridPtr;
struct TArray_UWillowPursuitGridPtr {
        struct UWillowPursuitGridPtr* Data;
        int Count;
        int Max;
};

struct FPursuitNodeData;
struct TArray_FPursuitNodeData {
        struct FPursuitNodeData* Data;
        int Count;
        int Max;
};

struct FVirtualSeatStruct;
struct TArray_FVirtualSeatStruct {
        struct FVirtualSeatStruct* Data;
        int Count;
        int Max;
};

struct FPlayerSkillTreeSkillData;
struct TArray_FPlayerSkillTreeSkillData {
        struct FPlayerSkillTreeSkillData* Data;
        int Count;
        int Max;
};

struct FTeamInformation;
struct TArray_FTeamInformation {
        struct FTeamInformation* Data;
        int Count;
        int Max;
};

struct FActionSequenceRandomData;
struct TArray_FActionSequenceRandomData {
        struct FActionSequenceRandomData* Data;
        int Count;
        int Max;
};

struct FParticleEventDeathData;
struct TArray_FParticleEventDeathData {
        struct FParticleEventDeathData* Data;
        int Count;
        int Max;
};

struct APopulationPointPtr;
struct TArray_APopulationPointPtr {
        struct APopulationPointPtr* Data;
        int Count;
        int Max;
};

struct FAkEventTrackKey;
struct TArray_FAkEventTrackKey {
        struct FAkEventTrackKey* Data;
        int Count;
        int Max;
};

struct ULevelTravelStationDefinitionPtr;
struct TArray_ULevelTravelStationDefinitionPtr {
        struct ULevelTravelStationDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UAkEventPtr;
struct TArray_UAkEventPtr {
        struct UAkEventPtr* Data;
        int Count;
        int Max;
};

struct FCustomizationUnlockData;
struct TArray_FCustomizationUnlockData {
        struct FCustomizationUnlockData* Data;
        int Count;
        int Max;
};

struct FWeaponTypeSelectorData;
struct TArray_FWeaponTypeSelectorData {
        struct FWeaponTypeSelectorData* Data;
        int Count;
        int Max;
};

struct FSkelControlModifier;
struct TArray_FSkelControlModifier {
        struct FSkelControlModifier* Data;
        int Count;
        int Max;
};

struct FShellCasingImpact;
struct TArray_FShellCasingImpact {
        struct FShellCasingImpact* Data;
        int Count;
        int Max;
};

struct FWorldDiscoveryData;
struct TArray_FWorldDiscoveryData {
        struct FWorldDiscoveryData* Data;
        int Count;
        int Max;
};

struct FAnimControlTrackKey;
struct TArray_FAnimControlTrackKey {
        struct FAnimControlTrackKey* Data;
        int Count;
        int Max;
};

struct UBadassRewardDefinitionPtr;
struct TArray_UBadassRewardDefinitionPtr {
        struct UBadassRewardDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FNamedNetDriver;
struct TArray_FNamedNetDriver {
        struct FNamedNetDriver* Data;
        int Count;
        int Max;
};

struct FBodyWeaponActionPostureData;
struct TArray_FBodyWeaponActionPostureData {
        struct FBodyWeaponActionPostureData* Data;
        int Count;
        int Max;
};

struct APlayerReplicationInfoPtr;
struct TArray_APlayerReplicationInfoPtr {
        struct APlayerReplicationInfoPtr* Data;
        int Count;
        int Max;
};

struct FDeferredLeaderboardWrite;
struct TArray_FDeferredLeaderboardWrite {
        struct FDeferredLeaderboardWrite* Data;
        int Count;
        int Max;
};

struct FSavedRandomValue;
struct TArray_FSavedRandomValue {
        struct FSavedRandomValue* Data;
        int Count;
        int Max;
};

struct FGroupAnimationAndSoundIdentifier;
struct TArray_FGroupAnimationAndSoundIdentifier {
        struct FGroupAnimationAndSoundIdentifier* Data;
        int Count;
        int Max;
};

struct FInputRemappingButtonData;
struct TArray_FInputRemappingButtonData {
        struct FInputRemappingButtonData* Data;
        int Count;
        int Max;
};

struct FCoordinatedAudioDefinition;
struct TArray_FCoordinatedAudioDefinition {
        struct FCoordinatedAudioDefinition* Data;
        int Count;
        int Max;
};

struct APortalVolumePtr;
struct TArray_APortalVolumePtr {
        struct APortalVolumePtr* Data;
        int Count;
        int Max;
};

struct UMaterialExpressionPtr;
struct TArray_UMaterialExpressionPtr {
        struct UMaterialExpressionPtr* Data;
        int Count;
        int Max;
};

struct FCameraLerpKeyFrame;
struct TArray_FCameraLerpKeyFrame {
        struct FCameraLerpKeyFrame* Data;
        int Count;
        int Max;
};

struct UInputContextDefinitionPtr;
struct TArray_UInputContextDefinitionPtr {
        struct UInputContextDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UTI_CalcPtr;
struct TArray_UTI_CalcPtr {
        struct UTI_CalcPtr* Data;
        int Count;
        int Max;
};

struct FLevelStreamingData;
struct TArray_FLevelStreamingData {
        struct FLevelStreamingData* Data;
        int Count;
        int Max;
};

struct FLeaderboardEntry;
struct TArray_FLeaderboardEntry {
        struct FLeaderboardEntry* Data;
        int Count;
        int Max;
};

struct FPathSizeInfo;
struct TArray_FPathSizeInfo {
        struct FPathSizeInfo* Data;
        int Count;
        int Max;
};

struct FSkelControlListHead;
struct TArray_FSkelControlListHead {
        struct FSkelControlListHead* Data;
        int Count;
        int Max;
};

struct UBehaviorSequenceCustomEnableConditionPtr;
struct TArray_UBehaviorSequenceCustomEnableConditionPtr {
        struct UBehaviorSequenceCustomEnableConditionPtr* Data;
        int Count;
        int Max;
};

struct FLocalizedSubtitle;
struct TArray_FLocalizedSubtitle {
        struct FLocalizedSubtitle* Data;
        int Count;
        int Max;
};

struct FCurveTrack;
struct TArray_FCurveTrack {
        struct FCurveTrack* Data;
        int Count;
        int Max;
};

struct URB_BodyInstancePtr;
struct TArray_URB_BodyInstancePtr {
        struct URB_BodyInstancePtr* Data;
        int Count;
        int Max;
};

struct FProviderRecord;
struct TArray_FProviderRecord {
        struct FProviderRecord* Data;
        int Count;
        int Max;
};

struct FIndependentSelectionData;
struct TArray_FIndependentSelectionData {
        struct FIndependentSelectionData* Data;
        int Count;
        int Max;
};

struct FCustomCringeData;
struct TArray_FCustomCringeData {
        struct FCustomCringeData* Data;
        int Count;
        int Max;
};

struct FUnlockItemData;
struct TArray_FUnlockItemData {
        struct FUnlockItemData* Data;
        int Count;
        int Max;
};

struct FMovieInstanceArray;
struct TArray_FMovieInstanceArray {
        struct FMovieInstanceArray* Data;
        int Count;
        int Max;
};

struct USpecialMove_MotionPtr;
struct TArray_USpecialMove_MotionPtr {
        struct USpecialMove_MotionPtr* Data;
        int Count;
        int Max;
};

struct FWeaponAmmoResourceSelectorData;
struct TArray_FWeaponAmmoResourceSelectorData {
        struct FWeaponAmmoResourceSelectorData* Data;
        int Count;
        int Max;
};

struct FGBXNavMeshVertex;
struct TArray_FGBXNavMeshVertex {
        struct FGBXNavMeshVertex* Data;
        int Count;
        int Max;
};

struct FDefendMissionData;
struct TArray_FDefendMissionData {
        struct FDefendMissionData* Data;
        int Count;
        int Max;
};

struct FTranslationTrack;
struct TArray_FTranslationTrack {
        struct FTranslationTrack* Data;
        int Count;
        int Max;
};

struct FChallengeData;
struct TArray_FChallengeData {
        struct FChallengeData* Data;
        int Count;
        int Max;
};

struct AWillowElevatorPtr;
struct TArray_AWillowElevatorPtr {
        struct AWillowElevatorPtr* Data;
        int Count;
        int Max;
};

struct AAIDebugDummyBasePtr;
struct TArray_AAIDebugDummyBasePtr {
        struct AAIDebugDummyBasePtr* Data;
        int Count;
        int Max;
};

struct UAudioComponentPtr;
struct TArray_UAudioComponentPtr {
        struct UAudioComponentPtr* Data;
        int Count;
        int Max;
};

struct FLinearColor;
struct TArray_FLinearColor {
        struct FLinearColor* Data;
        int Count;
        int Max;
};

struct FVehicleHandlingWheelData;
struct TArray_FVehicleHandlingWheelData {
        struct FVehicleHandlingWheelData* Data;
        int Count;
        int Max;
};

struct FOutputLinkToStruct;
struct TArray_FOutputLinkToStruct {
        struct FOutputLinkToStruct* Data;
        int Count;
        int Max;
};

struct FRuleRecord;
struct TArray_FRuleRecord {
        struct FRuleRecord* Data;
        int Count;
        int Max;
};

struct FTalkActData;
struct TArray_FTalkActData {
        struct FTalkActData* Data;
        int Count;
        int Max;
};

struct FPlayThroughData;
struct TArray_FPlayThroughData {
        struct FPlayThroughData* Data;
        int Count;
        int Max;
};

struct FTestMapsListDatum;
struct TArray_FTestMapsListDatum {
        struct FTestMapsListDatum* Data;
        int Count;
        int Max;
};

struct FRuleEngineLoadBalanceStruct;
struct TArray_FRuleEngineLoadBalanceStruct {
        struct FRuleEngineLoadBalanceStruct* Data;
        int Count;
        int Max;
};

struct FConditionalPattern;
struct TArray_FConditionalPattern {
        struct FConditionalPattern* Data;
        int Count;
        int Max;
};

struct UBalanceModifierDefinitionPtr;
struct TArray_UBalanceModifierDefinitionPtr {
        struct UBalanceModifierDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FNodeData;
struct TArray_FNodeData {
        struct FNodeData* Data;
        int Count;
        int Max;
};

struct FInjuredLoopOverride;
struct TArray_FInjuredLoopOverride {
        struct FInjuredLoopOverride* Data;
        int Count;
        int Max;
};

struct FWeaponBoneControllerInstance;
struct TArray_FWeaponBoneControllerInstance {
        struct FWeaponBoneControllerInstance* Data;
        int Count;
        int Max;
};

struct UStaticMeshComponentPtr;
struct TArray_UStaticMeshComponentPtr {
        struct UStaticMeshComponentPtr* Data;
        int Count;
        int Max;
};

struct FCurveEdTab;
struct TArray_FCurveEdTab {
        struct FCurveEdTab* Data;
        int Count;
        int Max;
};

struct FParticleSystemLOD;
struct TArray_FParticleSystemLOD {
        struct FParticleSystemLOD* Data;
        int Count;
        int Max;
};

struct FParticleEventSpawnData;
struct TArray_FParticleEventSpawnData {
        struct FParticleEventSpawnData* Data;
        int Count;
        int Max;
};

struct FRTPCSetting;
struct TArray_FRTPCSetting {
        struct FRTPCSetting* Data;
        int Count;
        int Max;
};

struct FDeferredLeaderboardRead;
struct TArray_FDeferredLeaderboardRead {
        struct FDeferredLeaderboardRead* Data;
        int Count;
        int Max;
};

struct FDeltaTrackInfo;
struct TArray_FDeltaTrackInfo {
        struct FDeltaTrackInfo* Data;
        int Count;
        int Max;
};

struct FBankSlot;
struct TArray_FBankSlot {
        struct FBankSlot* Data;
        int Count;
        int Max;
};

struct FLandscapeLayerInfo;
struct TArray_FLandscapeLayerInfo {
        struct FLandscapeLayerInfo* Data;
        int Count;
        int Max;
};

struct FCardInfo;
struct TArray_FCardInfo {
        struct FCardInfo* Data;
        int Count;
        int Max;
};

struct FUIMenuInputMap;
struct TArray_FUIMenuInputMap {
        struct FUIMenuInputMap* Data;
        int Count;
        int Max;
};

struct FDialogEventData;
struct TArray_FDialogEventData {
        struct FDialogEventData* Data;
        int Count;
        int Max;
};

struct FHybridNavVisualizationVertsForNavPoint;
struct TArray_FHybridNavVisualizationVertsForNavPoint {
        struct FHybridNavVisualizationVertsForNavPoint* Data;
        int Count;
        int Max;
};

struct FNetworkChannelData;
struct TArray_FNetworkChannelData {
        struct FNetworkChannelData* Data;
        int Count;
        int Max;
};

struct FVisibilityTrackKey;
struct TArray_FVisibilityTrackKey {
        struct FVisibilityTrackKey* Data;
        int Count;
        int Max;
};

struct UCameraAnimInstPtr;
struct TArray_UCameraAnimInstPtr {
        struct UCameraAnimInstPtr* Data;
        int Count;
        int Max;
};

struct FGeomSelection;
struct TArray_FGeomSelection {
        struct FGeomSelection* Data;
        int Count;
        int Max;
};

struct FScreenParticleRecord;
struct TArray_FScreenParticleRecord {
        struct FScreenParticleRecord* Data;
        int Count;
        int Max;
};

struct FSKULibrarySet;
struct TArray_FSKULibrarySet {
        struct FSKULibrarySet* Data;
        int Count;
        int Max;
};

struct UGearboxDialogNameTagPtr;
struct TArray_UGearboxDialogNameTagPtr {
        struct UGearboxDialogNameTagPtr* Data;
        int Count;
        int Max;
};

struct AWillowPlayerPawnPtr;
struct TArray_AWillowPlayerPawnPtr {
        struct AWillowPlayerPawnPtr* Data;
        int Count;
        int Max;
};

struct FBalancedInventoryDataMirror;
struct TArray_FBalancedInventoryDataMirror {
        struct FBalancedInventoryDataMirror* Data;
        int Count;
        int Max;
};

struct UAttributePresentationDefinitionPtr;
struct TArray_UAttributePresentationDefinitionPtr {
        struct UAttributePresentationDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData;
struct TArray_UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData {
        struct UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct FMatrix;
struct TArray_FMatrix {
        struct FMatrix* Data;
        int Count;
        int Max;
};

struct FBehaviorSequenceData;
struct TArray_FBehaviorSequenceData {
        struct FBehaviorSequenceData* Data;
        int Count;
        int Max;
};

struct UTerrainWeightMapTexturePtr;
struct TArray_UTerrainWeightMapTexturePtr {
        struct UTerrainWeightMapTexturePtr* Data;
        int Count;
        int Max;
};

struct AWillowVehiclePtr;
struct TArray_AWillowVehiclePtr {
        struct AWillowVehiclePtr* Data;
        int Count;
        int Max;
};

struct AEnvironmentVolumePtr;
struct TArray_AEnvironmentVolumePtr {
        struct AEnvironmentVolumePtr* Data;
        int Count;
        int Max;
};

struct UMissionWeaponBalanceDefinitionPtr;
struct TArray_UMissionWeaponBalanceDefinitionPtr {
        struct UMissionWeaponBalanceDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UTranslatorTagPtr;
struct TArray_UTranslatorTagPtr {
        struct UTranslatorTagPtr* Data;
        int Count;
        int Max;
};

struct UGbxMessagePtr;
struct TArray_UGbxMessagePtr {
        struct UGbxMessagePtr* Data;
        int Count;
        int Max;
};

struct FChosenVehicleCustomization;
struct TArray_FChosenVehicleCustomization {
        struct FChosenVehicleCustomization* Data;
        int Count;
        int Max;
};

struct FMissionPlaythroughSaveGameData;
struct TArray_FMissionPlaythroughSaveGameData {
        struct FMissionPlaythroughSaveGameData* Data;
        int Count;
        int Max;
};

struct FRemoveObject;
struct TArray_FRemoveObject {
        struct FRemoveObject* Data;
        int Count;
        int Max;
};

struct FEmitterBaseInfo;
struct TArray_FEmitterBaseInfo {
        struct FEmitterBaseInfo* Data;
        int Count;
        int Max;
};

struct UVertexPtr;
struct TArray_UVertexPtr {
        struct UVertexPtr* Data;
        int Count;
        int Max;
};

struct FNamedInterfaceDef;
struct TArray_FNamedInterfaceDef {
        struct FNamedInterfaceDef* Data;
        int Count;
        int Max;
};

struct FLastVisibleInfo;
struct TArray_FLastVisibleInfo {
        struct FLastVisibleInfo* Data;
        int Count;
        int Max;
};

struct FPhysicalMaterialTireModel;
struct TArray_FPhysicalMaterialTireModel {
        struct FPhysicalMaterialTireModel* Data;
        int Count;
        int Max;
};

struct FPointExposureData;
struct TArray_FPointExposureData {
        struct FPointExposureData* Data;
        int Count;
        int Max;
};

struct FVisiblePortalInfo;
struct TArray_FVisiblePortalInfo {
        struct FVisiblePortalInfo* Data;
        int Count;
        int Max;
};

struct FDebugTextInfo;
struct TArray_FDebugTextInfo {
        struct FDebugTextInfo* Data;
        int Count;
        int Max;
};

struct FTerrainLayer;
struct TArray_FTerrainLayer {
        struct FTerrainLayer* Data;
        int Count;
        int Max;
};

struct FPendingMissionRewardsData;
struct TArray_FPendingMissionRewardsData {
        struct FPendingMissionRewardsData* Data;
        int Count;
        int Max;
};

struct FSkelMeshActorControlTarget;
struct TArray_FSkelMeshActorControlTarget {
        struct FSkelMeshActorControlTarget* Data;
        int Count;
        int Max;
};

struct FParticleEventKismetData;
struct TArray_FParticleEventKismetData {
        struct FParticleEventKismetData* Data;
        int Count;
        int Max;
};

struct FtMenuData;
struct TArray_FtMenuData {
        struct FtMenuData* Data;
        int Count;
        int Max;
};

struct FStatusEffectNameMapping;
struct TArray_FStatusEffectNameMapping {
        struct FStatusEffectNameMapping* Data;
        int Count;
        int Max;
};

struct UInterpGroupPtr;
struct TArray_UInterpGroupPtr {
        struct UInterpGroupPtr* Data;
        int Count;
        int Max;
};

struct FMissionWaypointsData;
struct TArray_FMissionWaypointsData {
        struct FMissionWaypointsData* Data;
        int Count;
        int Max;
};

struct FAudioComponentParam;
struct TArray_FAudioComponentParam {
        struct FAudioComponentParam* Data;
        int Count;
        int Max;
};

struct FInputRemappingAxisData;
struct TArray_FInputRemappingAxisData {
        struct FInputRemappingAxisData* Data;
        int Count;
        int Max;
};

struct FDamageTypeExpModifier;
struct TArray_FDamageTypeExpModifier {
        struct FDamageTypeExpModifier* Data;
        int Count;
        int Max;
};

struct ATeamInfoPtr;
struct TArray_ATeamInfoPtr {
        struct ATeamInfoPtr* Data;
        int Count;
        int Max;
};

struct FDynamicLinkInfo;
struct TArray_FDynamicLinkInfo {
        struct FDynamicLinkInfo* Data;
        int Count;
        int Max;
};

struct FDropProjectileBehaviorSequenceStateData;
struct TArray_FDropProjectileBehaviorSequenceStateData {
        struct FDropProjectileBehaviorSequenceStateData* Data;
        int Count;
        int Max;
};

struct FRegionGameStageData;
struct TArray_FRegionGameStageData {
        struct FRegionGameStageData* Data;
        int Count;
        int Max;
};

struct FCreditsLine;
struct TArray_FCreditsLine {
        struct FCreditsLine* Data;
        int Count;
        int Max;
};

struct FNetViewer;
struct TArray_FNetViewer {
        struct FNetViewer* Data;
        int Count;
        int Max;
};

struct UInterpTrackPtr;
struct TArray_UInterpTrackPtr {
        struct UInterpTrackPtr* Data;
        int Count;
        int Max;
};

struct FEvalActionData;
struct TArray_FEvalActionData {
        struct FEvalActionData* Data;
        int Count;
        int Max;
};

struct FDialogBoxLayout;
struct TArray_FDialogBoxLayout {
        struct FDialogBoxLayout* Data;
        int Count;
        int Max;
};

struct UDownloadableBalanceModifierDefinitionPtr;
struct TArray_UDownloadableBalanceModifierDefinitionPtr {
        struct UDownloadableBalanceModifierDefinitionPtr* Data;
        int Count;
        int Max;
};

struct FActiveMorph;
struct TArray_FActiveMorph {
        struct FActiveMorph* Data;
        int Count;
        int Max;
};

struct FBeamState;
struct TArray_FBeamState {
        struct FBeamState* Data;
        int Count;
        int Max;
};

struct FSoundTrackKey;
struct TArray_FSoundTrackKey {
        struct FSoundTrackKey* Data;
        int Count;
        int Max;
};

struct FMovieStateData;
struct TArray_FMovieStateData {
        struct FMovieStateData* Data;
        int Count;
        int Max;
};

struct UFastTravelStationDefinitionPtr;
struct TArray_UFastTravelStationDefinitionPtr {
        struct UFastTravelStationDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UNavMeshGoal_FilterPtr;
struct TArray_UNavMeshGoal_FilterPtr {
        struct UNavMeshGoal_FilterPtr* Data;
        int Count;
        int Max;
};

struct FConnectedPeerInfo;
struct TArray_FConnectedPeerInfo {
        struct FConnectedPeerInfo* Data;
        int Count;
        int Max;
};

struct AControllerPtr;
struct TArray_AControllerPtr {
        struct AControllerPtr* Data;
        int Count;
        int Max;
};

struct FPursuitNode;
struct TArray_FPursuitNode {
        struct FPursuitNode* Data;
        int Count;
        int Max;
};

struct FInputMatchRequest;
struct TArray_FInputMatchRequest {
        struct FInputMatchRequest* Data;
        int Count;
        int Max;
};

struct FMorphNodeConn;
struct TArray_FMorphNodeConn {
        struct FMorphNodeConn* Data;
        int Count;
        int Max;
};

struct FKismetDrawTextInfo;
struct TArray_FKismetDrawTextInfo {
        struct FKismetDrawTextInfo* Data;
        int Count;
        int Max;
};

struct FPlayerDataStoreGroup;
struct TArray_FPlayerDataStoreGroup {
        struct FPlayerDataStoreGroup* Data;
        int Count;
        int Max;
};

struct FViewConeInfo;
struct TArray_FViewConeInfo {
        struct FViewConeInfo* Data;
        int Count;
        int Max;
};

struct FSoundThemeBinding;
struct TArray_FSoundThemeBinding {
        struct FSoundThemeBinding* Data;
        int Count;
        int Max;
};

struct FFishtailingInfo;
struct TArray_FFishtailingInfo {
        struct FFishtailingInfo* Data;
        int Count;
        int Max;
};

struct FAttributeCategory;
struct TArray_FAttributeCategory {
        struct FAttributeCategory* Data;
        int Count;
        int Max;
};

struct FCustomInput;
struct TArray_FCustomInput {
        struct FCustomInput* Data;
        int Count;
        int Max;
};

struct FFadePickupParticle;
struct TArray_FFadePickupParticle {
        struct FFadePickupParticle* Data;
        int Count;
        int Max;
};

struct FAttributeInitializationData;
struct TArray_FAttributeInitializationData {
        struct FAttributeInitializationData* Data;
        int Count;
        int Max;
};

struct FAchievementProgressStat;
struct TArray_FAchievementProgressStat {
        struct FAchievementProgressStat* Data;
        int Count;
        int Max;
};

struct UWillowImpactDefinitionPtr;
struct TArray_UWillowImpactDefinitionPtr {
        struct UWillowImpactDefinitionPtr* Data;
        int Count;
        int Max;
};

struct AMassiveLODOverrideVolumePtr;
struct TArray_AMassiveLODOverrideVolumePtr {
        struct AMassiveLODOverrideVolumePtr* Data;
        int Count;
        int Max;
};

struct UParticleSystemPtr;
struct TArray_UParticleSystemPtr {
        struct UParticleSystemPtr* Data;
        int Count;
        int Max;
};

struct FPostProcessChainRecord;
struct TArray_FPostProcessChainRecord {
        struct FPostProcessChainRecord* Data;
        int Count;
        int Max;
};

struct FMissionPlaythroughData;
struct TArray_FMissionPlaythroughData {
        struct FMissionPlaythroughData* Data;
        int Count;
        int Max;
};

struct FBehaviorKeyFrameEventData;
struct TArray_FBehaviorKeyFrameEventData {
        struct FBehaviorKeyFrameEventData* Data;
        int Count;
        int Max;
};

struct FTrailSamplePoint;
struct TArray_FTrailSamplePoint {
        struct FTrailSamplePoint* Data;
        int Count;
        int Max;
};

struct FNounAttributeState;
struct TArray_FNounAttributeState {
        struct FNounAttributeState* Data;
        int Count;
        int Max;
};

struct FLiftBodyPair;
struct TArray_FLiftBodyPair {
        struct FLiftBodyPair* Data;
        int Count;
        int Max;
};

struct FUnloadableDlcChallengeData;
struct TArray_FUnloadableDlcChallengeData {
        struct FUnloadableDlcChallengeData* Data;
        int Count;
        int Max;
};

struct FStoredFoliageInstance;
struct TArray_FStoredFoliageInstance {
        struct FStoredFoliageInstance* Data;
        int Count;
        int Max;
};

struct FFaceFXTrackKey;
struct TArray_FFaceFXTrackKey {
        struct FFaceFXTrackKey* Data;
        int Count;
        int Max;
};

struct FNewsArticle;
struct TArray_FNewsArticle {
        struct FNewsArticle* Data;
        int Count;
        int Max;
};

struct FCustomizationSizeMapping;
struct TArray_FCustomizationSizeMapping {
        struct FCustomizationSizeMapping* Data;
        int Count;
        int Max;
};

struct FGFxTextEntry;
struct TArray_FGFxTextEntry {
        struct FGFxTextEntry* Data;
        int Count;
        int Max;
};

struct UVSSUIDefinitionPtr;
struct TArray_UVSSUIDefinitionPtr {
        struct UVSSUIDefinitionPtr* Data;
        int Count;
        int Max;
};

struct UDecalComponentPtr;
struct TArray_UDecalComponentPtr {
        struct UDecalComponentPtr* Data;
        int Count;
        int Max;
};

struct FNamedObjectProperty;
struct TArray_FNamedObjectProperty {
        struct FNamedObjectProperty* Data;
        int Count;
        int Max;
};

]]

table.insert(g_TArrayTypes, "FName")
table.insert(g_TArrayTypes, "char")
table.insert(g_TArrayTypes, "FInterpCurvePointVector2D")
table.insert(g_TArrayTypes, "FInterpCurvePointFloat")
table.insert(g_TArrayTypes, "FInterpCurvePointVector")
table.insert(g_TArrayTypes, "float")
table.insert(g_TArrayTypes, "FInterpCurvePointLinearColor")
table.insert(g_TArrayTypes, "FInterpCurvePointQuat")
table.insert(g_TArrayTypes, "FInterpCurvePointTwoVectors")
table.insert(g_TArrayTypes, "int")
table.insert(g_TArrayTypes, "FString")
table.insert(g_TArrayTypes, "FStaticMeshLODElement")
table.insert(g_TArrayTypes, "FRigidBodyContactInfo")
table.insert(g_TArrayTypes, "FKeyValuePair")
table.insert(g_TArrayTypes, "FPlayerResponseLine")
table.insert(g_TArrayTypes, "FStringIdToStringMapping")
table.insert(g_TArrayTypes, "FIdToStringMapping")
table.insert(g_TArrayTypes, "FSettingsData")
table.insert(g_TArrayTypes, "FOnlineRegistrant")
table.insert(g_TArrayTypes, "FOnlineArbitrationRegistrant")
table.insert(g_TArrayTypes, "FSettingsProperty")
table.insert(g_TArrayTypes, "unsigned_char")
table.insert(g_TArrayTypes, "FAppIdLicenseInfo")
table.insert(g_TArrayTypes, "FNamedOnlineContent")
table.insert(g_TArrayTypes, "FInstanceDataUnion")
table.insert(g_TArrayTypes, "FOnlineGameSearchParameter")
table.insert(g_TArrayTypes, "FOnlineGameSearchORClause")
table.insert(g_TArrayTypes, "FOnlineGameSearchSortClause")
table.insert(g_TArrayTypes, "FUniqueNetId")
table.insert(g_TArrayTypes, "FDouble")
table.insert(g_TArrayTypes, "UTexturePtr")
table.insert(g_TArrayTypes, "FSeqOpOutputInputLink")
table.insert(g_TArrayTypes, "USequenceVariablePtr")
table.insert(g_TArrayTypes, "USequenceEventPtr")
table.insert(g_TArrayTypes, "BOOL")
table.insert(g_TArrayTypes, "FGestaltLODModelFragment")
table.insert(g_TArrayTypes, "FGestaltLODModel")
table.insert(g_TArrayTypes, "FSocketRemapEntry")
table.insert(g_TArrayTypes, "FGestaltAccessoryEntry")
table.insert(g_TArrayTypes, "FInputEntry")
table.insert(g_TArrayTypes, "FVector")
table.insert(g_TArrayTypes, "FPlane")
table.insert(g_TArrayTypes, "FKSphereElem")
table.insert(g_TArrayTypes, "FKBoxElem")
table.insert(g_TArrayTypes, "FKSphylElem")
table.insert(g_TArrayTypes, "FKConvexElem")
table.insert(g_TArrayTypes, "FQuat")
table.insert(g_TArrayTypes, "FTimeModifier")
table.insert(g_TArrayTypes, "FBranchInfo")
table.insert(g_TArrayTypes, "FWeightRule")
table.insert(g_TArrayTypes, "FAimComponent")
table.insert(g_TArrayTypes, "FBoneAtom")
table.insert(g_TArrayTypes, "UAnimNodeSequencePtr")
table.insert(g_TArrayTypes, "FSubtitleCue")
table.insert(g_TArrayTypes, "UMorphTargetSetPtr")
table.insert(g_TArrayTypes, "UAnimSetPtr")
table.insert(g_TArrayTypes, "FNxDestructibleDepthParameters")
table.insert(g_TArrayTypes, "FAttributeExpressionData")
table.insert(g_TArrayTypes, "FConditionalValueExpression")
table.insert(g_TArrayTypes, "FBehaviorParameterUnion")
table.insert(g_TArrayTypes, "UBehaviorBasePtr")
table.insert(g_TArrayTypes, "UShadowMap2DPtr")
table.insert(g_TArrayTypes, "UObjectPtr")
table.insert(g_TArrayTypes, "USequenceOpPtr")
table.insert(g_TArrayTypes, "FPointer")
table.insert(g_TArrayTypes, "FFireLink")
table.insert(g_TArrayTypes, "FSlotMoveRef")
table.insert(g_TArrayTypes, "FCoverInfo")
table.insert(g_TArrayTypes, "FManualCoverTypeInfo")
table.insert(g_TArrayTypes, "UUIDataStorePtr")
table.insert(g_TArrayTypes, "FStatColorMapEntry")
table.insert(g_TArrayTypes, "FPrimitiveMaterialRef")
table.insert(g_TArrayTypes, "FPostProcessMaterialRef")
table.insert(g_TArrayTypes, "FPerPlayerSplitscreenData")
table.insert(g_TArrayTypes, "FGBXNavmeshCrossLevelConnection")
table.insert(g_TArrayTypes, "FGBXNavMeshSpecialMove")
table.insert(g_TArrayTypes, "FGBXNavMeshLookupCell")
table.insert(g_TArrayTypes, "FIGBXNavMeshObstaclePointer")
table.insert(g_TArrayTypes, "FGBXNavMeshPathPoint")
table.insert(g_TArrayTypes, "FEdgePointer")
table.insert(g_TArrayTypes, "FGestaltAccessoryPartEntry")
table.insert(g_TArrayTypes, "FGestaltAccessoryGroupEntry")
table.insert(g_TArrayTypes, "FHybridNavVisualizationVert")
table.insert(g_TArrayTypes, "FBodyInstanceDataUnion")
table.insert(g_TArrayTypes, "FCurveEdEntry")
table.insert(g_TArrayTypes, "UMaterialInstanceConstantPtr")
table.insert(g_TArrayTypes, "FInterpLookupPoint")
table.insert(g_TArrayTypes, "UMaterialInterfacePtr")
table.insert(g_TArrayTypes, "UMorphNodeBasePtr")
table.insert(g_TArrayTypes, "UUIDataProviderPtr")
table.insert(g_TArrayTypes, "FOnlineStatsColumn")
table.insert(g_TArrayTypes, "UParticleModuleEventSendToGamePtr")
table.insert(g_TArrayTypes, "FParticleEmitterReplayFrame")
table.insert(g_TArrayTypes, "FKCachedConvexDataElement")
table.insert(g_TArrayTypes, "FTriangleSortSettings")
table.insert(g_TArrayTypes, "FRecognisableWord")
table.insert(g_TArrayTypes, "FScriptInterface")
table.insert(g_TArrayTypes, "FTerrainDecorationInstance")
table.insert(g_TArrayTypes, "FTerrainDecoration")
table.insert(g_TArrayTypes, "UUIDataProvider_SettingsPtr")
table.insert(g_TArrayTypes, "UAkComponentPtr")
table.insert(g_TArrayTypes, "AActorPtr")
table.insert(g_TArrayTypes, "USequenceObjectPtr")
table.insert(g_TArrayTypes, "FImpactInfo")
table.insert(g_TArrayTypes, "ANavigationPointPtr")
table.insert(g_TArrayTypes, "UReachSpecPtr")
table.insert(g_TArrayTypes, "USequencePtr")
table.insert(g_TArrayTypes, "FOnlineContent")
table.insert(g_TArrayTypes, "FCompatibilityOnlineContent")
table.insert(g_TArrayTypes, "APlayerControllerPtr")
table.insert(g_TArrayTypes, "FRotator")
table.insert(g_TArrayTypes, "FCanvasUVTri")
table.insert(g_TArrayTypes, "FOnlinePlayerScore")
table.insert(g_TArrayTypes, "ATriggerPtr")
table.insert(g_TArrayTypes, "UClassPtr")
table.insert(g_TArrayTypes, "ULocalPlayerPtr")
table.insert(g_TArrayTypes, "UAnimNodePtr")
table.insert(g_TArrayTypes, "FInfoBarData")
table.insert(g_TArrayTypes, "FLocalizedStringSetting")
table.insert(g_TArrayTypes, "FBiasedGoalActor")
table.insert(g_TArrayTypes, "FAnimSlotInfo")
table.insert(g_TArrayTypes, "AVolumePtr")
table.insert(g_TArrayTypes, "UInterpDataPtr")
table.insert(g_TArrayTypes, "FScriptDelegate")
table.insert(g_TArrayTypes, "FUIDataProviderField")
table.insert(g_TArrayTypes, "UUIResourceCombinationProviderPtr")
table.insert(g_TArrayTypes, "UUIResourceDataProviderPtr")
table.insert(g_TArrayTypes, "UUIDataProvider_MenuItemPtr")
table.insert(g_TArrayTypes, "FBonePair")
table.insert(g_TArrayTypes, "ASplineActorPtr")
table.insert(g_TArrayTypes, "FAppliedAttributeEffect")
table.insert(g_TArrayTypes, "FAttributeEffectData")
table.insert(g_TArrayTypes, "FConditionalSoundData")
table.insert(g_TArrayTypes, "UPrimitiveComponentPtr")
table.insert(g_TArrayTypes, "USkeletalMeshPtr")
table.insert(g_TArrayTypes, "FOnlinePartyMember")
table.insert(g_TArrayTypes, "FSpeechRecognizedWord")
table.insert(g_TArrayTypes, "FMarketplaceContent")
table.insert(g_TArrayTypes, "FOnlineCrossTitleContent")
table.insert(g_TArrayTypes, "FAchievementDetails")
table.insert(g_TArrayTypes, "FOnlineFriendMessage")
table.insert(g_TArrayTypes, "FOnlineFriend")
table.insert(g_TArrayTypes, "FFriendsQuery")
table.insert(g_TArrayTypes, "FCommunityContentFile")
table.insert(g_TArrayTypes, "FCurrentPlayerMet")
table.insert(g_TArrayTypes, "FGameEvents")
table.insert(g_TArrayTypes, "FASValue")
table.insert(g_TArrayTypes, "UGFxObjectPtr")
table.insert(g_TArrayTypes, "UExpressionEvaluatorPtr")
table.insert(g_TArrayTypes, "FCoverDebugScoringInfo")
table.insert(g_TArrayTypes, "FObjectKey")
table.insert(g_TArrayTypes, "FBehaviorVariableLinkData")
table.insert(g_TArrayTypes, "FBehaviorActionLinkData")
table.insert(g_TArrayTypes, "FBehaviorOutputLinkData")
table.insert(g_TArrayTypes, "FBehaviorEventData")
table.insert(g_TArrayTypes, "FBehaviorEventData2")
table.insert(g_TArrayTypes, "FBehaviorSequenceActionData")
table.insert(g_TArrayTypes, "FBehaviorSequenceActionData2")
table.insert(g_TArrayTypes, "FBehaviorVariableData")
table.insert(g_TArrayTypes, "FBehaviorOutputLinkData2")
table.insert(g_TArrayTypes, "FBehaviorVariableLinkData2")
table.insert(g_TArrayTypes, "UGearboxEditorNodePtr")
table.insert(g_TArrayTypes, "FVantageSpot")
table.insert(g_TArrayTypes, "FExposureUpdateStruct")
table.insert(g_TArrayTypes, "UFiringConditionPtr")
table.insert(g_TArrayTypes, "FFlagEvalConditional")
table.insert(g_TArrayTypes, "FEntitlementResult")
table.insert(g_TArrayTypes, "FOfferResult")
table.insert(g_TArrayTypes, "FServiceParameterResult")
table.insert(g_TArrayTypes, "FServiceResult")
table.insert(g_TArrayTypes, "FGearboxDialogData")
table.insert(g_TArrayTypes, "UAttributeModifierPtr")
table.insert(g_TArrayTypes, "FCoverDebugScoringData")
table.insert(g_TArrayTypes, "FTargetPriorityInfo")
table.insert(g_TArrayTypes, "FGestaltPart")
table.insert(g_TArrayTypes, "UGearboxGFxMoviePtr")
table.insert(g_TArrayTypes, "UPopulationSpawnedActorTagDefinitionPtr")
table.insert(g_TArrayTypes, "APopulationOpportunityPtr")
table.insert(g_TArrayTypes, "FEncounterLimitData")
table.insert(g_TArrayTypes, "FSpawnedPopulationActor")
table.insert(g_TArrayTypes, "FRemovedPopulationActor")
table.insert(g_TArrayTypes, "FEncounterWaveTracker")
table.insert(g_TArrayTypes, "FPopulationOptionAreaPopDefData")
table.insert(g_TArrayTypes, "FPopulationOptionSpawnDefData")
table.insert(g_TArrayTypes, "FDebugStringData")
table.insert(g_TArrayTypes, "AGearboxAIMoveNodePtr")
table.insert(g_TArrayTypes, "UGearboxDialogGroupPtr")
table.insert(g_TArrayTypes, "FEULAData")
table.insert(g_TArrayTypes, "FGestaltPartPermutation")
table.insert(g_TArrayTypes, "FSMBehavior")
table.insert(g_TArrayTypes, "URulePtr")
table.insert(g_TArrayTypes, "UKnowledgeRecordPtr")
table.insert(g_TArrayTypes, "FFlagDefinitionInitialization")
table.insert(g_TArrayTypes, "AGearboxPawnPtr")
table.insert(g_TArrayTypes, "UPopulationFactoryPtr")
table.insert(g_TArrayTypes, "UBehaviorProviderDefinitionPtr")
table.insert(g_TArrayTypes, "FBehaviorVariableValue")
table.insert(g_TArrayTypes, "UGearboxAccountOfferPtr")
table.insert(g_TArrayTypes, "UGearboxAccountEntitlementPtr")
table.insert(g_TArrayTypes, "UJsonObjectPtr")
table.insert(g_TArrayTypes, "FConnectionBandwidthStats")
table.insert(g_TArrayTypes, "FConfiguredGameSetting")
table.insert(g_TArrayTypes, "FInventorySwap")
table.insert(g_TArrayTypes, "FPlayerReservation")
table.insert(g_TArrayTypes, "FPlayerMember")
table.insert(g_TArrayTypes, "FEnvironmentalEffectInfo")
table.insert(g_TArrayTypes, "FPlayerStat")
table.insert(g_TArrayTypes, "FSteamPlayerClanData")
table.insert(g_TArrayTypes, "USpecialMove_CringePtr")
table.insert(g_TArrayTypes, "UParticleSystemComponentPtr")
table.insert(g_TArrayTypes, "FAttributeBaseValueData")
table.insert(g_TArrayTypes, "FAITransformedName")
table.insert(g_TArrayTypes, "UItemPoolListDefinitionPtr")
table.insert(g_TArrayTypes, "FItemPoolInfo")
table.insert(g_TArrayTypes, "FCardInfoRelativeToPanel")
table.insert(g_TArrayTypes, "UMissionObjectiveSetDefinitionPtr")
table.insert(g_TArrayTypes, "FAttributeScalarParam")
table.insert(g_TArrayTypes, "FScreenParticleModifier")
table.insert(g_TArrayTypes, "FScreenParticleScalarParamOverTime")
table.insert(g_TArrayTypes, "FScreenParticleVectorParamOverTime")
table.insert(g_TArrayTypes, "FMaterialEffectModifier")
table.insert(g_TArrayTypes, "FParticleSysParam")
table.insert(g_TArrayTypes, "FFontParameterValue")
table.insert(g_TArrayTypes, "FScalarParameterValue")
table.insert(g_TArrayTypes, "FTextureParameterValue")
table.insert(g_TArrayTypes, "FVectorParameterValue")
table.insert(g_TArrayTypes, "FRtpcParameterValue")
table.insert(g_TArrayTypes, "UBodyHitRegionDefinitionPtr")
table.insert(g_TArrayTypes, "FSocketEmitter")
table.insert(g_TArrayTypes, "FConditionalAnimData")
table.insert(g_TArrayTypes, "FBodyWeaponActionData")
table.insert(g_TArrayTypes, "FGoreTriggerData")
table.insert(g_TArrayTypes, "UWillowAnimNode_SimplePtr")
table.insert(g_TArrayTypes, "FSkillDamagedEventConstraintData")
table.insert(g_TArrayTypes, "USkillDefinitionPtr")
table.insert(g_TArrayTypes, "USkillExpressionEvaluatorDefinitionPtr")
table.insert(g_TArrayTypes, "FBonusAttributeModifierUpgrade")
table.insert(g_TArrayTypes, "UMissionDefinitionPtr")
table.insert(g_TArrayTypes, "UGameBalanceDefinitionPtr")
table.insert(g_TArrayTypes, "FPendingMissionRewardData")
table.insert(g_TArrayTypes, "FMissionStatusPlayerData")
table.insert(g_TArrayTypes, "FUnloadableDlcMissionStatusData")
table.insert(g_TArrayTypes, "FUnloadableDlcPendingRewardData")
table.insert(g_TArrayTypes, "UWillowSkelControl_TurretConstrainedPtr")
table.insert(g_TArrayTypes, "FTimePosition")
table.insert(g_TArrayTypes, "USpecialMove_VehiclePtr")
table.insert(g_TArrayTypes, "UChallengeConditionDefinitionPtr")
table.insert(g_TArrayTypes, "UDamageTypeDefinitionPtr")
table.insert(g_TArrayTypes, "FInventoryGameStageGradeWeightData")
table.insert(g_TArrayTypes, "FManufacturerCustomGradeWeightData")
table.insert(g_TArrayTypes, "FItemPartGradeWeightData")
table.insert(g_TArrayTypes, "FCoordinatedScalarParameter")
table.insert(g_TArrayTypes, "FCoordinatedVectorParameter")
table.insert(g_TArrayTypes, "FLootAttachmentData")
table.insert(g_TArrayTypes, "UInteractiveObjectLootListDefinitionPtr")
table.insert(g_TArrayTypes, "FLootConfigurationData")
table.insert(g_TArrayTypes, "FColiseumStat")
table.insert(g_TArrayTypes, "UWaypointComponentPtr")
table.insert(g_TArrayTypes, "FMissionStateBalanceAdjustment")
table.insert(g_TArrayTypes, "UInputActionDefinitionPtr")
table.insert(g_TArrayTypes, "UItemPoolDefinitionPtr")
table.insert(g_TArrayTypes, "UInventoryBalanceDefinitionPtr")
table.insert(g_TArrayTypes, "FPartGradeWeightData")
table.insert(g_TArrayTypes, "FRelevanceUpdateStruct")
table.insert(g_TArrayTypes, "AWillowPlayerControllerPtr")
table.insert(g_TArrayTypes, "FWeaponMemento")
table.insert(g_TArrayTypes, "FItemMemento")
table.insert(g_TArrayTypes, "FDamageTypeBySpeedStruct")
table.insert(g_TArrayTypes, "FBoneRotateData")
table.insert(g_TArrayTypes, "FAnimDeltaDataList")
table.insert(g_TArrayTypes, "FAnimSwapData")
table.insert(g_TArrayTypes, "FCoordinatedEffectThread")
table.insert(g_TArrayTypes, "FColumnLayoutData")
table.insert(g_TArrayTypes, "FDialogBoxButton")
table.insert(g_TArrayTypes, "FCriticalTextMessage")
table.insert(g_TArrayTypes, "FInputDeviceButtonAddress")
table.insert(g_TArrayTypes, "FVehicleSpawnStationPooledVehicle")
table.insert(g_TArrayTypes, "FSpawnAnimPair")
table.insert(g_TArrayTypes, "FColumnData")
table.insert(g_TArrayTypes, "FGearBuilderWeightedInventoryPart")
table.insert(g_TArrayTypes, "FGearBuilderWeightedWeaponPart")
table.insert(g_TArrayTypes, "FGearBuilderCustomizationData")
table.insert(g_TArrayTypes, "FTempWeaponStruct")
table.insert(g_TArrayTypes, "FLevelBasedStatusEffectChanceScale")
table.insert(g_TArrayTypes, "FLevelBasedDamageScale")
table.insert(g_TArrayTypes, "UAIPawnBalanceModifierDefinitionPtr")
table.insert(g_TArrayTypes, "UCustomizationDefinitionPtr")
table.insert(g_TArrayTypes, "UGearboxAnimDefinitionPtr")
table.insert(g_TArrayTypes, "FModifierValuePresentationData")
table.insert(g_TArrayTypes, "FTopStatData")
table.insert(g_TArrayTypes, "FSpawnedDroppedLootData")
table.insert(g_TArrayTypes, "FSpawnedAttachedLootData")
table.insert(g_TArrayTypes, "FMissionDirectorData")
table.insert(g_TArrayTypes, "UClassModDefinitionPtr")
table.insert(g_TArrayTypes, "FShopItemData")
table.insert(g_TArrayTypes, "AWillowWeaponPtr")
table.insert(g_TArrayTypes, "AWillowItemPtr")
table.insert(g_TArrayTypes, "AWillowInventoryPtr")
table.insert(g_TArrayTypes, "FMissionRewardPresentationData")
table.insert(g_TArrayTypes, "UMissionObjectiveWaypointComponentPtr")
table.insert(g_TArrayTypes, "UMissionObjectiveDefinitionPtr")
table.insert(g_TArrayTypes, "FGoldenKeySource")
table.insert(g_TArrayTypes, "UKeyedItemPoolDefinitionPtr")
table.insert(g_TArrayTypes, "UChallengeDefinitionPtr")
table.insert(g_TArrayTypes, "APawnPtr")
table.insert(g_TArrayTypes, "AWillowPickupPtr")
table.insert(g_TArrayTypes, "FMissionRewardData")
table.insert(g_TArrayTypes, "FWeaponSaveGameData")
table.insert(g_TArrayTypes, "FInventorySaveGameData")
table.insert(g_TArrayTypes, "FStatusMenuMissionEligibilityData")
table.insert(g_TArrayTypes, "FSlaughterMissionChain")
table.insert(g_TArrayTypes, "USkeletalMeshComponentPtr")
table.insert(g_TArrayTypes, "UActorComponentPtr")
table.insert(g_TArrayTypes, "AWillowPawnPtr")
table.insert(g_TArrayTypes, "FActiveStatusEffect")
table.insert(g_TArrayTypes, "UStatusEffectDefinitionPtr")
table.insert(g_TArrayTypes, "FCurrencyPresentation")
table.insert(g_TArrayTypes, "UPlayerNameIdentifierDefinitionPtr")
table.insert(g_TArrayTypes, "UItemNamePartDefinitionPtr")
table.insert(g_TArrayTypes, "UStanceTypeDefinitionPtr")
table.insert(g_TArrayTypes, "FPlayerSaveData")
table.insert(g_TArrayTypes, "FConditionalAnimationData")
table.insert(g_TArrayTypes, "UWeaponNamePartDefinitionPtr")
table.insert(g_TArrayTypes, "UAttackLocationPtr")
table.insert(g_TArrayTypes, "Fartifact_datum")
table.insert(g_TArrayTypes, "UDownloadableExpansionDefinitionPtr")
table.insert(g_TArrayTypes, "FPCContextMenuItem")
table.insert(g_TArrayTypes, "FCellContentData")
table.insert(g_TArrayTypes, "FMessageOfTheDay")
table.insert(g_TArrayTypes, "UMindTargetInfoPtr")
table.insert(g_TArrayTypes, "UInputRemappingDefinitionPtr")
table.insert(g_TArrayTypes, "FTimerData")
table.insert(g_TArrayTypes, "USeqAct_LatentPtr")


table.insert(g_TArrayTypes, "FSkeletalMeshLODInfo")
table.insert(g_TArrayTypes, "FLeaderboardTemplate")
table.insert(g_TArrayTypes, "FManufacturerSelectorData")
table.insert(g_TArrayTypes, "URulePlaceholderPtr")
table.insert(g_TArrayTypes, "UBlockingMeshComponentPtr")
table.insert(g_TArrayTypes, "FCustomBodyHandIKHoldData")
table.insert(g_TArrayTypes, "FVehicleEffect")
table.insert(g_TArrayTypes, "AWeaponShotDebugPtr")
table.insert(g_TArrayTypes, "AWillowDynamicNavMeshConnectionPointPtr")
table.insert(g_TArrayTypes, "FBoneAngleMorph")
table.insert(g_TArrayTypes, "FRecogVocabulary")
table.insert(g_TArrayTypes, "UDownloadablePackageDefinitionPtr")
table.insert(g_TArrayTypes, "FGBXConnectedNavMesh")
table.insert(g_TArrayTypes, "FDeathByWeaponStatID")
table.insert(g_TArrayTypes, "FIniLocFileEntry")
table.insert(g_TArrayTypes, "FSeqOpOutputLink")
table.insert(g_TArrayTypes, "FGCReference")
table.insert(g_TArrayTypes, "FScaledHUDElement")
table.insert(g_TArrayTypes, "FBehaviorTriggerMessageStruct")
table.insert(g_TArrayTypes, "ARallyPointPtr")
table.insert(g_TArrayTypes, "FGameplayEventMetaData")
table.insert(g_TArrayTypes, "FSeasonPassPackageCount")
table.insert(g_TArrayTypes, "FWeightmapLayerAllocationInfo")
table.insert(g_TArrayTypes, "FScalarParameterInterpStruct")
table.insert(g_TArrayTypes, "FScalarMaterialParameter")
table.insert(g_TArrayTypes, "FNewsCacheEntry")
table.insert(g_TArrayTypes, "FInputContextData")
table.insert(g_TArrayTypes, "FPlayerLineInfo")
table.insert(g_TArrayTypes, "FActorReference")
table.insert(g_TArrayTypes, "FConditionalExplosionData")
table.insert(g_TArrayTypes, "UCylinderComponentPtr")
table.insert(g_TArrayTypes, "FWillowStatProperty")
table.insert(g_TArrayTypes, "FTeleportKeyData")
table.insert(g_TArrayTypes, "UFaceFXAnimSetPtr")
table.insert(g_TArrayTypes, "UBlackMarketUpgradeDefinitionPtr")
table.insert(g_TArrayTypes, "FInteractiveObjectGameStageGradeWeightData")
table.insert(g_TArrayTypes, "FOngoingEffectInfo")
table.insert(g_TArrayTypes, "FPlayerSkillTreeTierData")
table.insert(g_TArrayTypes, "FOnlineStatusContextMapping")
table.insert(g_TArrayTypes, "FBoneMirrorInfo")
table.insert(g_TArrayTypes, "AWillowElevatorButtonPtr")
table.insert(g_TArrayTypes, "FAttributeSlotUpgradeData")
table.insert(g_TArrayTypes, "FAIPawnGameStageGradeWeightData")
table.insert(g_TArrayTypes, "FTechDeathData")
table.insert(g_TArrayTypes, "FLevelStreamingStatus")
table.insert(g_TArrayTypes, "FSettingsPropertyPropertyMetaData")
table.insert(g_TArrayTypes, "FLevelStreamingNameCombo")
table.insert(g_TArrayTypes, "FFeatherBoneBlendData")
table.insert(g_TArrayTypes, "FBucketStruct")
table.insert(g_TArrayTypes, "UDownloadableCharacterDefinitionPtr")
table.insert(g_TArrayTypes, "FSkillConstraintData")
table.insert(g_TArrayTypes, "FAIResourceRestriction")
table.insert(g_TArrayTypes, "FInstancedStaticMeshMappingInfo")
table.insert(g_TArrayTypes, "FTankSensor")
table.insert(g_TArrayTypes, "UInterpTrackInstPtr")
table.insert(g_TArrayTypes, "FDeferredSkillActivationData")
table.insert(g_TArrayTypes, "FWorldLightingOverride")
table.insert(g_TArrayTypes, "FStateAttributeData")
table.insert(g_TArrayTypes, "FPlayerEvents")
table.insert(g_TArrayTypes, "FDamageClassEventData")
table.insert(g_TArrayTypes, "FPresetGeneratedPoint")
table.insert(g_TArrayTypes, "FAuthSession")
table.insert(g_TArrayTypes, "FMaterialReferenceList")
table.insert(g_TArrayTypes, "USplineMeshComponentPtr")
table.insert(g_TArrayTypes, "FBehaviorsSelectionData")
table.insert(g_TArrayTypes, "FVehicleCrewMappingStruct")
table.insert(g_TArrayTypes, "UInstancedDesignerAttributePtr")
table.insert(g_TArrayTypes, "FAttributePriorityData")
table.insert(g_TArrayTypes, "FKeyBindInfo")
table.insert(g_TArrayTypes, "FUnloadableDlcRegionGameStageData")
table.insert(g_TArrayTypes, "FHeadTrackingKey")
table.insert(g_TArrayTypes, "FSkillDamageEventData")
table.insert(g_TArrayTypes, "FNamedSkillEvent")
table.insert(g_TArrayTypes, "FDebugConsoleCommand")
table.insert(g_TArrayTypes, "FPrismDataContainer")
table.insert(g_TArrayTypes, "FSortFilterConfiguration")
table.insert(g_TArrayTypes, "ADroppedPickupPtr")
table.insert(g_TArrayTypes, "UUIConfigSectionProviderPtr")
table.insert(g_TArrayTypes, "UDownloadableItemSetDefinitionPtr")
table.insert(g_TArrayTypes, "FFontParameterValueOverTime")
table.insert(g_TArrayTypes, "FTaggedMarketplaceContent")
table.insert(g_TArrayTypes, "FSoundEventMapping")
table.insert(g_TArrayTypes, "FAggregateEventMapping")
table.insert(g_TArrayTypes, "FSkillEventResponseData")
table.insert(g_TArrayTypes, "FSplitscreenData")
table.insert(g_TArrayTypes, "UFlagDefinitionPtr")
table.insert(g_TArrayTypes, "FGBXNavMeshObstacleData")
table.insert(g_TArrayTypes, "FGFxMenuLink")
table.insert(g_TArrayTypes, "FDataProviderInfo")
table.insert(g_TArrayTypes, "FPerBoneMaskInfo")
table.insert(g_TArrayTypes, "FRawAnimSequenceTrack")
table.insert(g_TArrayTypes, "FTitleFileMapping")
table.insert(g_TArrayTypes, "FDirectorTrackCut")
table.insert(g_TArrayTypes, "UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "UTrainingMessageDefinitionPtr")
table.insert(g_TArrayTypes, "FParticleReplayTrackKey")
table.insert(g_TArrayTypes, "UGBXCrossLevelReferenceContainerPtr")
table.insert(g_TArrayTypes, "FFoliageMesh")
table.insert(g_TArrayTypes, "FParticleBurst")
table.insert(g_TArrayTypes, "FInstancedStaticMeshInstanceData")
table.insert(g_TArrayTypes, "FOnlineStatusPropertyMapping")
table.insert(g_TArrayTypes, "FPlaylistPopulation")
table.insert(g_TArrayTypes, "UPawnAllegiancePtr")
table.insert(g_TArrayTypes, "FCoordinatedEffectProcess")
table.insert(g_TArrayTypes, "FLabelToLinkageMapping")
table.insert(g_TArrayTypes, "FRelevanceCacheStruct")
table.insert(g_TArrayTypes, "APortalTeleporterPtr")
table.insert(g_TArrayTypes, "FDeviceLookAxisData")
table.insert(g_TArrayTypes, "FGBXNavMeshPathSize")
table.insert(g_TArrayTypes, "FSwitchObjectCase")
table.insert(g_TArrayTypes, "FTerrainDecoLayer")
table.insert(g_TArrayTypes, "ACoverLinkPtr")
table.insert(g_TArrayTypes, "FEnemyBreadCrumbStruct")
table.insert(g_TArrayTypes, "FSkillEffectData")
table.insert(g_TArrayTypes, "UGearboxAccountDataPtr")
table.insert(g_TArrayTypes, "FTurretEffect")
table.insert(g_TArrayTypes, "FAvailableTrackedSkill")
table.insert(g_TArrayTypes, "FTextureMaterialParameter")
table.insert(g_TArrayTypes, "FHeavyInventoryElement")
table.insert(g_TArrayTypes, "UPlayerClassIdentifierDefinitionPtr")
table.insert(g_TArrayTypes, "FHUDAnchorPoint")
table.insert(g_TArrayTypes, "FTrailSample")
table.insert(g_TArrayTypes, "FBehaviorAliasReference")
table.insert(g_TArrayTypes, "FParticleEventCollideData")
table.insert(g_TArrayTypes, "FSettingsArrayProvider")
table.insert(g_TArrayTypes, "UFractureMaterialPtr")
table.insert(g_TArrayTypes, "FColorParticleSystemParameter")
table.insert(g_TArrayTypes, "FNPCList")
table.insert(g_TArrayTypes, "UAttributeContextResolverPtr")
table.insert(g_TArrayTypes, "FAIHoldData")
table.insert(g_TArrayTypes, "FNavMeshPathSize")
table.insert(g_TArrayTypes, "FDropNoteInfo")
table.insert(g_TArrayTypes, "USparkServiceConfigurationPtr")
table.insert(g_TArrayTypes, "FServerQueryToPingResponseMapping")
table.insert(g_TArrayTypes, "AInventoryPtr")
table.insert(g_TArrayTypes, "FWeaponClassEventData")
table.insert(g_TArrayTypes, "AWillowReplicatedAmbientSoundSourcePtr")
table.insert(g_TArrayTypes, "FAppliedSkillEffect")
table.insert(g_TArrayTypes, "FLocalizedStringSettingMetaData")
table.insert(g_TArrayTypes, "FAIThrowProjectileBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "FObstacleData")
table.insert(g_TArrayTypes, "URB_BodySetupPtr")
table.insert(g_TArrayTypes, "FDebugExposure")
table.insert(g_TArrayTypes, "FLensFlareElement")
table.insert(g_TArrayTypes, "FMapSpecificBalanceModificationList")
table.insert(g_TArrayTypes, "FPendingCustomization")
table.insert(g_TArrayTypes, "FEnvironmentalEffectSetting")
table.insert(g_TArrayTypes, "FInstalledContentInfo")
table.insert(g_TArrayTypes, "FClientBeaconConnection")
table.insert(g_TArrayTypes, "FIpAddr")
table.insert(g_TArrayTypes, "FActionSequenceRecord")
table.insert(g_TArrayTypes, "ATerrain_FTerrainWeightedMaterial")
table.insert(g_TArrayTypes, "FVectorParameterValueOverTime")
table.insert(g_TArrayTypes, "FBehaviorContextData")
table.insert(g_TArrayTypes, "FPopulationAreaOptionSpawnData")
table.insert(g_TArrayTypes, "FAITreeData")
table.insert(g_TArrayTypes, "FSpeedTravelData")
table.insert(g_TArrayTypes, "FWaveformSample")
table.insert(g_TArrayTypes, "FOnlineProfileSetting")
table.insert(g_TArrayTypes, "FSoftBodyTetraLink")
table.insert(g_TArrayTypes, "FResourceSaveGameData")
table.insert(g_TArrayTypes, "FRejectedContentInfo")
table.insert(g_TArrayTypes, "FTargetedPlayerState")
table.insert(g_TArrayTypes, "FRegionBalanceData")
table.insert(g_TArrayTypes, "FOutputLink")
table.insert(g_TArrayTypes, "FSMRandomPair")
table.insert(g_TArrayTypes, "FMarketplaceOffer")
table.insert(g_TArrayTypes, "FGestaltAccessoryNameEntry")
table.insert(g_TArrayTypes, "FSpawnAnimData")
table.insert(g_TArrayTypes, "UParticleModulePtr")
table.insert(g_TArrayTypes, "FManufacturerGradeData")
table.insert(g_TArrayTypes, "FVectorMaterialParameter")
table.insert(g_TArrayTypes, "FOccludedVolume")
table.insert(g_TArrayTypes, "FUIStatData")
table.insert(g_TArrayTypes, "FExternalTexture")
table.insert(g_TArrayTypes, "FPostProcessOverlayInfo")
table.insert(g_TArrayTypes, "FEmotePortraitInfo")
table.insert(g_TArrayTypes, "FUIDataStoreInputAlias")
table.insert(g_TArrayTypes, "UOnlineStatsReadPtr")
table.insert(g_TArrayTypes, "FActiveInteraction")
table.insert(g_TArrayTypes, "FCoverMeshes")
table.insert(g_TArrayTypes, "FGameSearchCfg")
table.insert(g_TArrayTypes, "FScalarParticleSystemParameter")
table.insert(g_TArrayTypes, "FGrenadeModBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "FHitActorData")
table.insert(g_TArrayTypes, "FRemoteTalker")
table.insert(g_TArrayTypes, "FSourceTexture2DRegion")
table.insert(g_TArrayTypes, "FThumbnailLightData")
table.insert(g_TArrayTypes, "FSwitchClassInfo")
table.insert(g_TArrayTypes, "APerchPtr")
table.insert(g_TArrayTypes, "FThumbnailRenderData")
table.insert(g_TArrayTypes, "UGFxActorMoviePoolPtr")
table.insert(g_TArrayTypes, "FPopulationOptionAreaData")
table.insert(g_TArrayTypes, "FConditionLevel")
table.insert(g_TArrayTypes, "FLevelBasedExpScale")
table.insert(g_TArrayTypes, "FPerchAnimData")
table.insert(g_TArrayTypes, "AWillowInteractiveObjectPtr")
table.insert(g_TArrayTypes, "FPendingClientTrainingMessage")
table.insert(g_TArrayTypes, "FGFxWidgetBinding")
table.insert(g_TArrayTypes, "FAIHoldDebugData")
table.insert(g_TArrayTypes, "AWillowProjectilePtr")
table.insert(g_TArrayTypes, "FDirectionData")
table.insert(g_TArrayTypes, "UApexComponentBasePtr")
table.insert(g_TArrayTypes, "UDamagePipelinePtr")
table.insert(g_TArrayTypes, "FOnlineStatusMapping")
table.insert(g_TArrayTypes, "FImpactResponseData")
table.insert(g_TArrayTypes, "FInventoryManufacturerBalanceData")
table.insert(g_TArrayTypes, "FInputButtonData")
table.insert(g_TArrayTypes, "UGBXDefinitionPtr")
table.insert(g_TArrayTypes, "FBalanceModification")
table.insert(g_TArrayTypes, "FAttributeSlotEffectData")
table.insert(g_TArrayTypes, "UCameraModifierPtr")
table.insert(g_TArrayTypes, "FQueuedActivationInfo")
table.insert(g_TArrayTypes, "FAkEventResolver")
table.insert(g_TArrayTypes, "FConditionalParticleEffectData")
table.insert(g_TArrayTypes, "UWillowAIBlackboardComponentPtr")
table.insert(g_TArrayTypes, "UPackageAssetSublibraryPtr")
table.insert(g_TArrayTypes, "FClanMaterialData")
table.insert(g_TArrayTypes, "FMenuItemCallback")
table.insert(g_TArrayTypes, "FUnloadableDlcItemSaveGameData")
table.insert(g_TArrayTypes, "FGameClassShortName")
table.insert(g_TArrayTypes, "FStatColorMapping")
table.insert(g_TArrayTypes, "UDLCLegacyPlayerClassIdentifierDefinitionPtr")
table.insert(g_TArrayTypes, "APlayerStandInPtr")
table.insert(g_TArrayTypes, "FOnlineStatsRow")
table.insert(g_TArrayTypes, "FBulletImpactEventData")
table.insert(g_TArrayTypes, "FSkelMeshComponentLODInfo")
table.insert(g_TArrayTypes, "FExpAwardWeight")
table.insert(g_TArrayTypes, "FParticleEventTraceData")
table.insert(g_TArrayTypes, "FMarketPlaceFilter")
table.insert(g_TArrayTypes, "FBehaviorCondition")
table.insert(g_TArrayTypes, "FScreenMessageString")
table.insert(g_TArrayTypes, "FOpinionData")
table.insert(g_TArrayTypes, "FAnimNotifyEvent")
table.insert(g_TArrayTypes, "FUnloadableDlcLockoutData")
table.insert(g_TArrayTypes, "FValidNameRange")
table.insert(g_TArrayTypes, "FClientMeshBeaconConnection")
table.insert(g_TArrayTypes, "FLensFlareElementMaterials")
table.insert(g_TArrayTypes, "FKnowledgeRecordStruct")
table.insert(g_TArrayTypes, "FSelectedTerrainVertex")
table.insert(g_TArrayTypes, "FTargetDebugDatum")
table.insert(g_TArrayTypes, "FViewIdToLeaderboardName")
table.insert(g_TArrayTypes, "FTitleFileMcp")
table.insert(g_TArrayTypes, "FQueuedAvatarRequest")
table.insert(g_TArrayTypes, "APopulationEncounterPtr")
table.insert(g_TArrayTypes, "FDecalReceiver")
table.insert(g_TArrayTypes, "FTierLayout")
table.insert(g_TArrayTypes, "FTextureParameterValueOverTime")
table.insert(g_TArrayTypes, "FGestaltPartBoundsEntry")
table.insert(g_TArrayTypes, "UFiringZoneDefinitionPtr")
table.insert(g_TArrayTypes, "FCreditsTextureInfo")
table.insert(g_TArrayTypes, "FExpansionData")
table.insert(g_TArrayTypes, "FRecentParty")
table.insert(g_TArrayTypes, "FRarityLevelColor")
table.insert(g_TArrayTypes, "FMissionStatusData")
table.insert(g_TArrayTypes, "UAttributeValueResolverPtr")
table.insert(g_TArrayTypes, "UTerrainComponentPtr")
table.insert(g_TArrayTypes, "FPlayerIcon")
table.insert(g_TArrayTypes, "FLightValues")
table.insert(g_TArrayTypes, "FSeasonPassOfferUnion")
table.insert(g_TArrayTypes, "FLootData")
table.insert(g_TArrayTypes, "FTerrainInfoData")
table.insert(g_TArrayTypes, "FPlaylist")
table.insert(g_TArrayTypes, "FPlayerStorageArrayProvider")
table.insert(g_TArrayTypes, "FResolution")
table.insert(g_TArrayTypes, "UDownloadableContentDefinitionPtr")
table.insert(g_TArrayTypes, "FUIStatModifierData")
table.insert(g_TArrayTypes, "UGearboxDialogEventDataPtr")
table.insert(g_TArrayTypes, "FEventTrackKey")
table.insert(g_TArrayTypes, "FSlotAnimParameters")
table.insert(g_TArrayTypes, "UFontPtr")
table.insert(g_TArrayTypes, "UTextureRenderTarget2DPtr")
table.insert(g_TArrayTypes, "FVehicleSeatInstance")
table.insert(g_TArrayTypes, "FDynamicResourceProviderDefinition")
table.insert(g_TArrayTypes, "USkillTreeBranchDefinitionPtr")
table.insert(g_TArrayTypes, "FClothSpecialBoneInfo")
table.insert(g_TArrayTypes, "FTaggedGFxMovie")
table.insert(g_TArrayTypes, "UPostProcessChainPtr")
table.insert(g_TArrayTypes, "FOneOffLevelChallengeData")
table.insert(g_TArrayTypes, "FPendingPlayerStats")
table.insert(g_TArrayTypes, "UParticleLODLevelPtr")
table.insert(g_TArrayTypes, "UDownloadableCustomizationSetDefinitionPtr")
table.insert(g_TArrayTypes, "FToggleTrackKey")
table.insert(g_TArrayTypes, "ULevelStreamingPtr")
table.insert(g_TArrayTypes, "ALevelStreamingVolumePtr")
table.insert(g_TArrayTypes, "FAnimBlendChild")
table.insert(g_TArrayTypes, "FGFxDataStoreBinding")
table.insert(g_TArrayTypes, "FCullDistanceSizePair")
table.insert(g_TArrayTypes, "FPostProcessSettingsOverride")
table.insert(g_TArrayTypes, "FPlayerSkillTreeBranchData")
table.insert(g_TArrayTypes, "FEventRecord")
table.insert(g_TArrayTypes, "FActiveDecalInfo")
table.insert(g_TArrayTypes, "FLevelTransitionData")
table.insert(g_TArrayTypes, "FGestaltAccessoryMeshEntry")
table.insert(g_TArrayTypes, "UChildConnectionPtr")
table.insert(g_TArrayTypes, "UGBXNavMeshPathModifierPtr")
table.insert(g_TArrayTypes, "FKeyBind")
table.insert(g_TArrayTypes, "FBreathingLoopInfo")
table.insert(g_TArrayTypes, "UObjectReferencerPtr")
table.insert(g_TArrayTypes, "FSoundClassAdjuster")
table.insert(g_TArrayTypes, "FAIResourceData")
table.insert(g_TArrayTypes, "FVectorParticleSystemParameter")
table.insert(g_TArrayTypes, "FPauseTimerData")
table.insert(g_TArrayTypes, "FAIPawnPlaythroughThreeData")
table.insert(g_TArrayTypes, "FRecentExplosion")
table.insert(g_TArrayTypes, "UResourcePoolDefinitionPtr")
table.insert(g_TArrayTypes, "FPersistentMapDependencies")
table.insert(g_TArrayTypes, "FStatusEffectTypeCommonProperties")
table.insert(g_TArrayTypes, "FCustomizationItemData")
table.insert(g_TArrayTypes, "FAnimBlendInfo")
table.insert(g_TArrayTypes, "UPostProcessEffectPtr")
table.insert(g_TArrayTypes, "FAchievementUnlockData")
table.insert(g_TArrayTypes, "AEmitterCameraLensEffectBasePtr")
table.insert(g_TArrayTypes, "FSeqOpInputLink")
table.insert(g_TArrayTypes, "FDamageTypeSelectorData")
table.insert(g_TArrayTypes, "FCameraShakeInstance")
table.insert(g_TArrayTypes, "FOneTimeDataElement")
table.insert(g_TArrayTypes, "FRandomAnimInfo")
table.insert(g_TArrayTypes, "FMoveToCellData")
table.insert(g_TArrayTypes, "FGameResourceDataProvider")
table.insert(g_TArrayTypes, "FEffectSoundData")
table.insert(g_TArrayTypes, "AWillowDialogEchoActorPtr")
table.insert(g_TArrayTypes, "AWillowSpectatorPointPtr")
table.insert(g_TArrayTypes, "FBalanceMeResourceUpgradePath")
table.insert(g_TArrayTypes, "USoundNodePtr")
table.insert(g_TArrayTypes, "FFullyLoadedPackagesInfo")
table.insert(g_TArrayTypes, "FFontCharacter")
table.insert(g_TArrayTypes, "FSpecialMoveData")
table.insert(g_TArrayTypes, "FBulletTimerEvent")
table.insert(g_TArrayTypes, "UParticleModuleSpawnBasePtr")
table.insert(g_TArrayTypes, "FVectorMaterialParamMICData")
table.insert(g_TArrayTypes, "FGPMCollection")
table.insert(g_TArrayTypes, "FVehicleDefaultCrewStruct")
table.insert(g_TArrayTypes, "FPanelInfo")
table.insert(g_TArrayTypes, "FSpeedKillData")
table.insert(g_TArrayTypes, "FKillSkillDuration")
table.insert(g_TArrayTypes, "FInventorySerialNumber")
table.insert(g_TArrayTypes, "UMarketingUnlockDefinitionPtr")
table.insert(g_TArrayTypes, "FLocalAuthSession")
table.insert(g_TArrayTypes, "FDamageReactionData")
table.insert(g_TArrayTypes, "FEncounterTracker")
table.insert(g_TArrayTypes, "FListener")
table.insert(g_TArrayTypes, "UInputSetDefinitionPtr")
table.insert(g_TArrayTypes, "FSourceObjectData")
table.insert(g_TArrayTypes, "FMissionData")
table.insert(g_TArrayTypes, "FUnloadableDlcWeaponSaveGameData")
table.insert(g_TArrayTypes, "FSkillActionData")
table.insert(g_TArrayTypes, "ULineSegmentPtr")
table.insert(g_TArrayTypes, "FProfileDefinition")
table.insert(g_TArrayTypes, "FGameTypePrefix")
table.insert(g_TArrayTypes, "FPlayerOwnedComponent")
table.insert(g_TArrayTypes, "FTerrainHeight")
table.insert(g_TArrayTypes, "FNameBasedObjectPath")
table.insert(g_TArrayTypes, "FStaticMeshComponentLODInfo")
table.insert(g_TArrayTypes, "AGearboxPlayerControllerPtr")
table.insert(g_TArrayTypes, "FDeveloperData")
table.insert(g_TArrayTypes, "FHitTargetRecord")
table.insert(g_TArrayTypes, "FSkillSaveGameData")
table.insert(g_TArrayTypes, "FFlagEvalORConnector")
table.insert(g_TArrayTypes, "UAnimSequencePtr")
table.insert(g_TArrayTypes, "UPackagePtr")
table.insert(g_TArrayTypes, "FTitleFile")
table.insert(g_TArrayTypes, "FMarketplaceOfferData")
table.insert(g_TArrayTypes, "FTombstoneData")
table.insert(g_TArrayTypes, "URB_ConstraintInstancePtr")
table.insert(g_TArrayTypes, "FPopulationActor")
table.insert(g_TArrayTypes, "FAIPawnPlaythroughData")
table.insert(g_TArrayTypes, "Fs_actorList")
table.insert(g_TArrayTypes, "FServerQueryToRulesResponseMapping")
table.insert(g_TArrayTypes, "FVariableLink")
table.insert(g_TArrayTypes, "AStatusEffectReplicatedEmitterPtr")
table.insert(g_TArrayTypes, "UGFxMovieDrawStylePtr")
table.insert(g_TArrayTypes, "FVehicleSeatDefinition")
table.insert(g_TArrayTypes, "FTimedAnimBehaviorEvent")
table.insert(g_TArrayTypes, "FItemBuilderData")
table.insert(g_TArrayTypes, "FBlockedMissionData")
table.insert(g_TArrayTypes, "FTier")
table.insert(g_TArrayTypes, "USkeletalMeshSocketPtr")
table.insert(g_TArrayTypes, "FEmitterDynamicParameter")
table.insert(g_TArrayTypes, "FColumnDataStruct")
table.insert(g_TArrayTypes, "FDefinitionIconDatum")
table.insert(g_TArrayTypes, "FMenuHeaderData")
table.insert(g_TArrayTypes, "FUIProviderScriptFieldValue")
table.insert(g_TArrayTypes, "FPropertyInfo")
table.insert(g_TArrayTypes, "FVehicleGameStageGradeWeightData")
table.insert(g_TArrayTypes, "UDownloadableAssetLibraryDefinitionPtr")
table.insert(g_TArrayTypes, "FObjectiveUpdateData")
table.insert(g_TArrayTypes, "FDialogueArgument")
table.insert(g_TArrayTypes, "FGrenadeModPartBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "FRelevanceBucketStruct")
table.insert(g_TArrayTypes, "FDrunkenWaveFormData")
table.insert(g_TArrayTypes, "UDownloadableVehicleDefinitionPtr")
table.insert(g_TArrayTypes, "FSkillKillEventData")
table.insert(g_TArrayTypes, "UGearboxDialogNodePtr")
table.insert(g_TArrayTypes, "FAttributePresentationDamageTypeMapping")
table.insert(g_TArrayTypes, "FKCachedConvexData")
table.insert(g_TArrayTypes, "UAnimNodeSlotPtr")
table.insert(g_TArrayTypes, "FHitRegionEmitters")
table.insert(g_TArrayTypes, "USkillPtr")
table.insert(g_TArrayTypes, "FDynamicNavMeshConnection")
table.insert(g_TArrayTypes, "FProjectileClassEventData")
table.insert(g_TArrayTypes, "FFDamageMorphTargets")
table.insert(g_TArrayTypes, "USkelControlLookAtPtr")
table.insert(g_TArrayTypes, "FFaceFXSoundCueKey")
table.insert(g_TArrayTypes, "FAttachmentLocationData")
table.insert(g_TArrayTypes, "FCompartmentRunList")
table.insert(g_TArrayTypes, "UMorphTargetPtr")
table.insert(g_TArrayTypes, "FRuleSetReference")
table.insert(g_TArrayTypes, "FDamagePair")
table.insert(g_TArrayTypes, "FLocationInfo")
table.insert(g_TArrayTypes, "FUIAxisEmulationDefinition")
table.insert(g_TArrayTypes, "FStaticMeshLODInfo")
table.insert(g_TArrayTypes, "FCameraCutInfo")
table.insert(g_TArrayTypes, "FPendingEntry")
table.insert(g_TArrayTypes, "FViewParticleEmitterInstanceMotionBlurInfo")
table.insert(g_TArrayTypes, "FDeathByDamageTypeStatID")
table.insert(g_TArrayTypes, "FShadowRelevanceSizePair")
table.insert(g_TArrayTypes, "FAIDefinitionRecord")
table.insert(g_TArrayTypes, "FNavigationArea")
table.insert(g_TArrayTypes, "FInputDeviceButtonData")
table.insert(g_TArrayTypes, "FPlayerClassAchievementUnlockData")
table.insert(g_TArrayTypes, "FBlackMarketUpgradeLevelData")
table.insert(g_TArrayTypes, "FCachedInvData")
table.insert(g_TArrayTypes, "FPerkData")
table.insert(g_TArrayTypes, "FParticleSystemReplayFrame")
table.insert(g_TArrayTypes, "APylonPtr")
table.insert(g_TArrayTypes, "FBoolTrackKey")
table.insert(g_TArrayTypes, "UGameplayEventsHandlerPtr")
table.insert(g_TArrayTypes, "FSimpleAnimData")
table.insert(g_TArrayTypes, "FDescriptionEntry")
table.insert(g_TArrayTypes, "FNamedSession")
table.insert(g_TArrayTypes, "FHUDWidget_ChallengeData")
table.insert(g_TArrayTypes, "FCoordinatedParticleSystemDefinition")
table.insert(g_TArrayTypes, "APopulationOpportunityDenPtr")
table.insert(g_TArrayTypes, "FPendingClientAuth")
table.insert(g_TArrayTypes, "FDuelTeamPair")
table.insert(g_TArrayTypes, "FVector2D")
table.insert(g_TArrayTypes, "FInjuredStringReplacementSet")
table.insert(g_TArrayTypes, "FAutoCompleteCommand")
table.insert(g_TArrayTypes, "FWeaponBoneControllerData")
table.insert(g_TArrayTypes, "FDLCMissionData")
table.insert(g_TArrayTypes, "ULightComponentPtr")
table.insert(g_TArrayTypes, "FPartyReservation")
table.insert(g_TArrayTypes, "FSMMaterialSetterDatum")
table.insert(g_TArrayTypes, "FSeqEventLink")
table.insert(g_TArrayTypes, "FSeqVarLink")
table.insert(g_TArrayTypes, "FSortableDataElement")
table.insert(g_TArrayTypes, "FCellInfo")
table.insert(g_TArrayTypes, "FSuspensionSound")
table.insert(g_TArrayTypes, "UTextureMoviePtr")
table.insert(g_TArrayTypes, "FRuleSetRecord")
table.insert(g_TArrayTypes, "FAlphaMap")
table.insert(g_TArrayTypes, "AWillowBoundaryTurretPtr")
table.insert(g_TArrayTypes, "FSMPerchRandomPair")
table.insert(g_TArrayTypes, "UInterpGroupInstPtr")
table.insert(g_TArrayTypes, "FFilterKeyToSteamKeyMapping")
table.insert(g_TArrayTypes, "FHitRegionDamage")
table.insert(g_TArrayTypes, "FLockoutData")
table.insert(g_TArrayTypes, "FMapObjectData")
table.insert(g_TArrayTypes, "FWireLinkage")
table.insert(g_TArrayTypes, "UVehicleFamilyDefinitionPtr")
table.insert(g_TArrayTypes, "FTextMarkupEntry")
table.insert(g_TArrayTypes, "FGearBuilderCustomizationUsageData")
table.insert(g_TArrayTypes, "FThirdPersonMenuView")
table.insert(g_TArrayTypes, "FRuleInfo")
table.insert(g_TArrayTypes, "UUIConfigFileProviderPtr")
table.insert(g_TArrayTypes, "FClientFilterORClause")
table.insert(g_TArrayTypes, "FAwarenessInfo")
table.insert(g_TArrayTypes, "FAnimSetMeshLinkup")
table.insert(g_TArrayTypes, "FExposureCacheStruct")
table.insert(g_TArrayTypes, "FSKURuntimeLibrarySet")
table.insert(g_TArrayTypes, "UPhysicalMaterialPtr")
table.insert(g_TArrayTypes, "FAnimSetBakeAndPruneStatus")
table.insert(g_TArrayTypes, "UPersistentSequenceDataPtr")
table.insert(g_TArrayTypes, "FLevelStateRecord")
table.insert(g_TArrayTypes, "FSparkOutstandingRequest")
table.insert(g_TArrayTypes, "FClanSwitchData")
table.insert(g_TArrayTypes, "FFlashTextEntry")
table.insert(g_TArrayTypes, "FDamageOnlyOnceData")
table.insert(g_TArrayTypes, "UAwarenessZoneDefinitionPtr")
table.insert(g_TArrayTypes, "FColor")
table.insert(g_TArrayTypes, "FExplosionScaleData")
table.insert(g_TArrayTypes, "FChestData")
table.insert(g_TArrayTypes, "UAnimMetaDataPtr")
table.insert(g_TArrayTypes, "UImpactDefinitionPtr")
table.insert(g_TArrayTypes, "FGestaltSocketRemapEntry")
table.insert(g_TArrayTypes, "URuleSetPtr")
table.insert(g_TArrayTypes, "FObjectReference")
table.insert(g_TArrayTypes, "FDeathByWeaponDamageStatID")
table.insert(g_TArrayTypes, "FTouchingPawn")
table.insert(g_TArrayTypes, "FHomingRadiusThreshold")
table.insert(g_TArrayTypes, "FEventUploadConfig")
table.insert(g_TArrayTypes, "AWillowMindPtr")
table.insert(g_TArrayTypes, "FGuid")
table.insert(g_TArrayTypes, "UInputDeviceDefinitionPtr")
table.insert(g_TArrayTypes, "FObjectiveIcon")
table.insert(g_TArrayTypes, "FAkCallBackGetRTPC")
table.insert(g_TArrayTypes, "UPhysicsJumpConnectionPtr")
table.insert(g_TArrayTypes, "FGestaltInfo")
table.insert(g_TArrayTypes, "UGFxMovieStatePtr")
table.insert(g_TArrayTypes, "ULandscapeHeightfieldCollisionComponentPtr")
table.insert(g_TArrayTypes, "FRELBManagerStats")
table.insert(g_TArrayTypes, "UTexture2DPtr")
table.insert(g_TArrayTypes, "FSystemOption")
table.insert(g_TArrayTypes, "UAnimNodeBlendBasePtr")
table.insert(g_TArrayTypes, "FTerrainFoliageMesh")
table.insert(g_TArrayTypes, "FGBXNavMeshPoly")
table.insert(g_TArrayTypes, "FLegacyCustomizationItemData")
table.insert(g_TArrayTypes, "FActivateOp")
table.insert(g_TArrayTypes, "USoundCuePtr")
table.insert(g_TArrayTypes, "FPriorityDebugStruct")
table.insert(g_TArrayTypes, "FResultEntry")
table.insert(g_TArrayTypes, "FTimedMissionData")
table.insert(g_TArrayTypes, "FEncounterWaveData")
table.insert(g_TArrayTypes, "FPopulationMasterStat")
table.insert(g_TArrayTypes, "FCoverSlot")
table.insert(g_TArrayTypes, "FMaterialParticleSystemParameter")
table.insert(g_TArrayTypes, "FLoadingMovieExceptionInfo")
table.insert(g_TArrayTypes, "FTargetInfoRecord")
table.insert(g_TArrayTypes, "ULevelPtr")
table.insert(g_TArrayTypes, "FSwoopAttackData")
table.insert(g_TArrayTypes, "ULinePtr")
table.insert(g_TArrayTypes, "FChildBoneBlendInfo")
table.insert(g_TArrayTypes, "USpecialMove_CloakPtr")
table.insert(g_TArrayTypes, "ADynamicSMActorPtr")
table.insert(g_TArrayTypes, "FBlackMarketPostLaunchUpgradeData")
table.insert(g_TArrayTypes, "FDamageSurfaceTypeModifier")
table.insert(g_TArrayTypes, "FDebugListItem")
table.insert(g_TArrayTypes, "FPainDialogLine")
table.insert(g_TArrayTypes, "FLoadCharacterData")
table.insert(g_TArrayTypes, "UParticleEmitterPtr")
table.insert(g_TArrayTypes, "FNamedInterface")
table.insert(g_TArrayTypes, "UPopulationBodyTagPtr")
table.insert(g_TArrayTypes, "FCoverReplicationInfo")
table.insert(g_TArrayTypes, "FConsoleMessage")
table.insert(g_TArrayTypes, "FTeamEvents")
table.insert(g_TArrayTypes, "FRotationTrack")
table.insert(g_TArrayTypes, "FLocationBoneSocketInfo")
table.insert(g_TArrayTypes, "FPremiumCustomizationInfo")
table.insert(g_TArrayTypes, "UInteractionPtr")
table.insert(g_TArrayTypes, "USVehicleWheelPtr")
table.insert(g_TArrayTypes, "FBalancedInventoryData")
table.insert(g_TArrayTypes, "FParticleEvent_GenerateInfo")
table.insert(g_TArrayTypes, "UTI_PrioritizePtr")
table.insert(g_TArrayTypes, "FFileNameToURLMapping")
table.insert(g_TArrayTypes, "URB_ConstraintSetupPtr")
table.insert(g_TArrayTypes, "FSMNotify")
table.insert(g_TArrayTypes, "FAttachment")
table.insert(g_TArrayTypes, "FAimAnimTransitionData")
table.insert(g_TArrayTypes, "FMissionWidgetMessage")
table.insert(g_TArrayTypes, "UParticleModuleOrbitPtr")
table.insert(g_TArrayTypes, "FDebugDisplayProperty")
table.insert(g_TArrayTypes, "FMinimapObjectiveIconClip")
table.insert(g_TArrayTypes, "FItemBuilderBalanceDefinition")
table.insert(g_TArrayTypes, "FSoftBodySpecialBoneInfo")
table.insert(g_TArrayTypes, "FInputAxisData")
table.insert(g_TArrayTypes, "FOnlineGameSearchResult")
table.insert(g_TArrayTypes, "FSkelMaterialSetterDatum")
table.insert(g_TArrayTypes, "FPopulationOpportunityTracker")
table.insert(g_TArrayTypes, "FAchievementMappingInfo")
table.insert(g_TArrayTypes, "FExtraWeaponSlot")
table.insert(g_TArrayTypes, "FAnimGroup")
table.insert(g_TArrayTypes, "FMinimapIconClip")
table.insert(g_TArrayTypes, "FDlcLevelTravelPair")
table.insert(g_TArrayTypes, "FDynamicFlagInstanceData")
table.insert(g_TArrayTypes, "FTerrainFilteredMaterial")
table.insert(g_TArrayTypes, "FCommentTrackKey")
table.insert(g_TArrayTypes, "FColumnMetaData")
table.insert(g_TArrayTypes, "FAnimTag")
table.insert(g_TArrayTypes, "FSynchGroup")
table.insert(g_TArrayTypes, "FPlayerInformation")
table.insert(g_TArrayTypes, "UParticleModuleEventReceiverBasePtr")
table.insert(g_TArrayTypes, "FSMExpressionList")
table.insert(g_TArrayTypes, "UDownloadablePackageLicenseItemPtr")
table.insert(g_TArrayTypes, "UParticleSystemReplayPtr")
table.insert(g_TArrayTypes, "FTurretDamageEffectData")
table.insert(g_TArrayTypes, "FAkPlayingInfo")
table.insert(g_TArrayTypes, "FGBXNavMeshPolyData")
table.insert(g_TArrayTypes, "FAimOffsetProfile")
table.insert(g_TArrayTypes, "FObstaclePoint")
table.insert(g_TArrayTypes, "FRagdollDeathImpulseStruct")
table.insert(g_TArrayTypes, "FSplineConnection")
table.insert(g_TArrayTypes, "FMissionObserversData")
table.insert(g_TArrayTypes, "FItemCardInfo")
table.insert(g_TArrayTypes, "FMaterialViewRelevance")
table.insert(g_TArrayTypes, "FWorldEventSource")
table.insert(g_TArrayTypes, "FInputDeviceAxisData")
table.insert(g_TArrayTypes, "FDebugLoadBalance")
table.insert(g_TArrayTypes, "FPawnClassEventData")
table.insert(g_TArrayTypes, "APatrolDestinationPtr")
table.insert(g_TArrayTypes, "FScalarParameterValueOverTime")
table.insert(g_TArrayTypes, "USpecialMoveDefinitionPtr")
table.insert(g_TArrayTypes, "FVehicleCrewAnimSetMapping")
table.insert(g_TArrayTypes, "FKeyRebindingData")
table.insert(g_TArrayTypes, "USkelControlBasePtr")
table.insert(g_TArrayTypes, "FGameSettingsCfg")
table.insert(g_TArrayTypes, "UApexClothingAssetPtr")
table.insert(g_TArrayTypes, "UGearboxDialogEventTagPtr")
table.insert(g_TArrayTypes, "FCurveKey")
table.insert(g_TArrayTypes, "FProductCustomizationInfo")
table.insert(g_TArrayTypes, "UGearboxDialogPriorityPtr")
table.insert(g_TArrayTypes, "USpecialMove_DodgePtr")
table.insert(g_TArrayTypes, "FFeatherBoneBlendTarget")
table.insert(g_TArrayTypes, "FCoverDebugInfo")
table.insert(g_TArrayTypes, "FCoverDebugPriority")
table.insert(g_TArrayTypes, "FEmoteStance")
table.insert(g_TArrayTypes, "FGameStatGroup")
table.insert(g_TArrayTypes, "FPropertyToColumn")
table.insert(g_TArrayTypes, "FMovieRangeStateData")
table.insert(g_TArrayTypes, "FServerAuthRetry")
table.insert(g_TArrayTypes, "FFloatMaterialParamMICData")
table.insert(g_TArrayTypes, "ULandscapeComponentPtr")
table.insert(g_TArrayTypes, "UBodyWeaponHoldDefinitionPtr")
table.insert(g_TArrayTypes, "FActorParticleSystemParameter")
table.insert(g_TArrayTypes, "AWwiseSoundVolumePtr")
table.insert(g_TArrayTypes, "FFiringPatternLine")
table.insert(g_TArrayTypes, "FLightProjectile")
table.insert(g_TArrayTypes, "UWillowPursuitGridPtr")
table.insert(g_TArrayTypes, "FPursuitNodeData")
table.insert(g_TArrayTypes, "FVirtualSeatStruct")
table.insert(g_TArrayTypes, "FPlayerSkillTreeSkillData")
table.insert(g_TArrayTypes, "FTeamInformation")
table.insert(g_TArrayTypes, "FActionSequenceRandomData")
table.insert(g_TArrayTypes, "FParticleEventDeathData")
table.insert(g_TArrayTypes, "APopulationPointPtr")
table.insert(g_TArrayTypes, "FAkEventTrackKey")
table.insert(g_TArrayTypes, "ULevelTravelStationDefinitionPtr")
table.insert(g_TArrayTypes, "UAkEventPtr")
table.insert(g_TArrayTypes, "FCustomizationUnlockData")
table.insert(g_TArrayTypes, "FWeaponTypeSelectorData")
table.insert(g_TArrayTypes, "FSkelControlModifier")
table.insert(g_TArrayTypes, "FShellCasingImpact")
table.insert(g_TArrayTypes, "FWorldDiscoveryData")
table.insert(g_TArrayTypes, "FAnimControlTrackKey")
table.insert(g_TArrayTypes, "UBadassRewardDefinitionPtr")
table.insert(g_TArrayTypes, "FNamedNetDriver")
table.insert(g_TArrayTypes, "FBodyWeaponActionPostureData")
table.insert(g_TArrayTypes, "APlayerReplicationInfoPtr")
table.insert(g_TArrayTypes, "FDeferredLeaderboardWrite")
table.insert(g_TArrayTypes, "FSavedRandomValue")
table.insert(g_TArrayTypes, "FGroupAnimationAndSoundIdentifier")
table.insert(g_TArrayTypes, "FInputRemappingButtonData")
table.insert(g_TArrayTypes, "FCoordinatedAudioDefinition")
table.insert(g_TArrayTypes, "APortalVolumePtr")
table.insert(g_TArrayTypes, "UMaterialExpressionPtr")
table.insert(g_TArrayTypes, "FCameraLerpKeyFrame")
table.insert(g_TArrayTypes, "UInputContextDefinitionPtr")
table.insert(g_TArrayTypes, "UTI_CalcPtr")
table.insert(g_TArrayTypes, "FLevelStreamingData")
table.insert(g_TArrayTypes, "FLeaderboardEntry")
table.insert(g_TArrayTypes, "FPathSizeInfo")
table.insert(g_TArrayTypes, "FSkelControlListHead")
table.insert(g_TArrayTypes, "UBehaviorSequenceCustomEnableConditionPtr")
table.insert(g_TArrayTypes, "FLocalizedSubtitle")
table.insert(g_TArrayTypes, "FCurveTrack")
table.insert(g_TArrayTypes, "URB_BodyInstancePtr")
table.insert(g_TArrayTypes, "FProviderRecord")
table.insert(g_TArrayTypes, "FIndependentSelectionData")
table.insert(g_TArrayTypes, "FCustomCringeData")
table.insert(g_TArrayTypes, "FUnlockItemData")
table.insert(g_TArrayTypes, "FMovieInstanceArray")
table.insert(g_TArrayTypes, "USpecialMove_MotionPtr")
table.insert(g_TArrayTypes, "FWeaponAmmoResourceSelectorData")
table.insert(g_TArrayTypes, "FGBXNavMeshVertex")
table.insert(g_TArrayTypes, "FDefendMissionData")
table.insert(g_TArrayTypes, "FTranslationTrack")
table.insert(g_TArrayTypes, "FChallengeData")
table.insert(g_TArrayTypes, "AWillowElevatorPtr")
table.insert(g_TArrayTypes, "AAIDebugDummyBasePtr")
table.insert(g_TArrayTypes, "UAudioComponentPtr")
table.insert(g_TArrayTypes, "FLinearColor")
table.insert(g_TArrayTypes, "FVehicleHandlingWheelData")
table.insert(g_TArrayTypes, "FOutputLinkToStruct")
table.insert(g_TArrayTypes, "FRuleRecord")
table.insert(g_TArrayTypes, "FTalkActData")
table.insert(g_TArrayTypes, "FPlayThroughData")
table.insert(g_TArrayTypes, "FTestMapsListDatum")
table.insert(g_TArrayTypes, "FRuleEngineLoadBalanceStruct")
table.insert(g_TArrayTypes, "FConditionalPattern")
table.insert(g_TArrayTypes, "UBalanceModifierDefinitionPtr")
table.insert(g_TArrayTypes, "FNodeData")
table.insert(g_TArrayTypes, "FInjuredLoopOverride")
table.insert(g_TArrayTypes, "FWeaponBoneControllerInstance")
table.insert(g_TArrayTypes, "UStaticMeshComponentPtr")
table.insert(g_TArrayTypes, "FCurveEdTab")
table.insert(g_TArrayTypes, "FParticleSystemLOD")
table.insert(g_TArrayTypes, "FParticleEventSpawnData")
table.insert(g_TArrayTypes, "FRTPCSetting")
table.insert(g_TArrayTypes, "FDeferredLeaderboardRead")
table.insert(g_TArrayTypes, "FDeltaTrackInfo")
table.insert(g_TArrayTypes, "FBankSlot")
table.insert(g_TArrayTypes, "FLandscapeLayerInfo")
table.insert(g_TArrayTypes, "FCardInfo")
table.insert(g_TArrayTypes, "FUIMenuInputMap")
table.insert(g_TArrayTypes, "FDialogEventData")
table.insert(g_TArrayTypes, "FHybridNavVisualizationVertsForNavPoint")
table.insert(g_TArrayTypes, "FNetworkChannelData")
table.insert(g_TArrayTypes, "FVisibilityTrackKey")
table.insert(g_TArrayTypes, "UCameraAnimInstPtr")
table.insert(g_TArrayTypes, "FGeomSelection")
table.insert(g_TArrayTypes, "FScreenParticleRecord")
table.insert(g_TArrayTypes, "FSKULibrarySet")
table.insert(g_TArrayTypes, "UGearboxDialogNameTagPtr")
table.insert(g_TArrayTypes, "AWillowPlayerPawnPtr")
table.insert(g_TArrayTypes, "FBalancedInventoryDataMirror")
table.insert(g_TArrayTypes, "UAttributePresentationDefinitionPtr")
table.insert(g_TArrayTypes, "UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "FMatrix")
table.insert(g_TArrayTypes, "FBehaviorSequenceData")
table.insert(g_TArrayTypes, "UTerrainWeightMapTexturePtr")
table.insert(g_TArrayTypes, "AWillowVehiclePtr")
table.insert(g_TArrayTypes, "AEnvironmentVolumePtr")
table.insert(g_TArrayTypes, "UMissionWeaponBalanceDefinitionPtr")
table.insert(g_TArrayTypes, "UTranslatorTagPtr")
table.insert(g_TArrayTypes, "UGbxMessagePtr")
table.insert(g_TArrayTypes, "FChosenVehicleCustomization")
table.insert(g_TArrayTypes, "FMissionPlaythroughSaveGameData")
table.insert(g_TArrayTypes, "FRemoveObject")
table.insert(g_TArrayTypes, "FEmitterBaseInfo")
table.insert(g_TArrayTypes, "UVertexPtr")
table.insert(g_TArrayTypes, "FNamedInterfaceDef")
table.insert(g_TArrayTypes, "FLastVisibleInfo")
table.insert(g_TArrayTypes, "FPhysicalMaterialTireModel")
table.insert(g_TArrayTypes, "FPointExposureData")
table.insert(g_TArrayTypes, "FVisiblePortalInfo")
table.insert(g_TArrayTypes, "FDebugTextInfo")
table.insert(g_TArrayTypes, "FTerrainLayer")
table.insert(g_TArrayTypes, "FPendingMissionRewardsData")
table.insert(g_TArrayTypes, "FSkelMeshActorControlTarget")
table.insert(g_TArrayTypes, "FParticleEventKismetData")
table.insert(g_TArrayTypes, "FtMenuData")
table.insert(g_TArrayTypes, "FStatusEffectNameMapping")
table.insert(g_TArrayTypes, "UInterpGroupPtr")
table.insert(g_TArrayTypes, "FMissionWaypointsData")
table.insert(g_TArrayTypes, "FAudioComponentParam")
table.insert(g_TArrayTypes, "FInputRemappingAxisData")
table.insert(g_TArrayTypes, "FDamageTypeExpModifier")
table.insert(g_TArrayTypes, "ATeamInfoPtr")
table.insert(g_TArrayTypes, "FDynamicLinkInfo")
table.insert(g_TArrayTypes, "FDropProjectileBehaviorSequenceStateData")
table.insert(g_TArrayTypes, "FRegionGameStageData")
table.insert(g_TArrayTypes, "FCreditsLine")
table.insert(g_TArrayTypes, "FNetViewer")
table.insert(g_TArrayTypes, "UInterpTrackPtr")
table.insert(g_TArrayTypes, "FEvalActionData")
table.insert(g_TArrayTypes, "FDialogBoxLayout")
table.insert(g_TArrayTypes, "UDownloadableBalanceModifierDefinitionPtr")
table.insert(g_TArrayTypes, "FActiveMorph")
table.insert(g_TArrayTypes, "FBeamState")
table.insert(g_TArrayTypes, "FSoundTrackKey")
table.insert(g_TArrayTypes, "FMovieStateData")
table.insert(g_TArrayTypes, "UFastTravelStationDefinitionPtr")
table.insert(g_TArrayTypes, "UNavMeshGoal_FilterPtr")
table.insert(g_TArrayTypes, "FConnectedPeerInfo")
table.insert(g_TArrayTypes, "AControllerPtr")
table.insert(g_TArrayTypes, "FPursuitNode")
table.insert(g_TArrayTypes, "FInputMatchRequest")
table.insert(g_TArrayTypes, "FMorphNodeConn")
table.insert(g_TArrayTypes, "FKismetDrawTextInfo")
table.insert(g_TArrayTypes, "FPlayerDataStoreGroup")
table.insert(g_TArrayTypes, "FViewConeInfo")
table.insert(g_TArrayTypes, "FSoundThemeBinding")
table.insert(g_TArrayTypes, "FFishtailingInfo")
table.insert(g_TArrayTypes, "FAttributeCategory")
table.insert(g_TArrayTypes, "FCustomInput")
table.insert(g_TArrayTypes, "FFadePickupParticle")
table.insert(g_TArrayTypes, "FAttributeInitializationData")
table.insert(g_TArrayTypes, "FAchievementProgressStat")
table.insert(g_TArrayTypes, "UWillowImpactDefinitionPtr")
table.insert(g_TArrayTypes, "AMassiveLODOverrideVolumePtr")
table.insert(g_TArrayTypes, "UParticleSystemPtr")
table.insert(g_TArrayTypes, "FPostProcessChainRecord")
table.insert(g_TArrayTypes, "FMissionPlaythroughData")
table.insert(g_TArrayTypes, "FBehaviorKeyFrameEventData")
table.insert(g_TArrayTypes, "FTrailSamplePoint")
table.insert(g_TArrayTypes, "FNounAttributeState")
table.insert(g_TArrayTypes, "FLiftBodyPair")
table.insert(g_TArrayTypes, "FUnloadableDlcChallengeData")
table.insert(g_TArrayTypes, "FStoredFoliageInstance")
table.insert(g_TArrayTypes, "FFaceFXTrackKey")
table.insert(g_TArrayTypes, "FNewsArticle")
table.insert(g_TArrayTypes, "FCustomizationSizeMapping")
table.insert(g_TArrayTypes, "FGFxTextEntry")
table.insert(g_TArrayTypes, "UVSSUIDefinitionPtr")
table.insert(g_TArrayTypes, "UDecalComponentPtr")
table.insert(g_TArrayTypes, "FNamedObjectProperty")