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

struct FRotator;
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
