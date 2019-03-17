
local ffi = require("ffi")

ffi.cdef[[

// 0x90 
struct UActorFactoryClone_Data {
	// Last Offset: 0x7C
	struct TArray_AGearboxPawnPtr CloneArchetype; // 0x7C (0xC)
	struct FName NewCloneTag; // 0x88 (0x8)
};

struct UActorFactoryClone {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryClone_Data UActorFactoryClone;
};

// 0x7C 
struct UActorFactoryWireTerminal_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryWireTerminal {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryWireTerminal_Data UActorFactoryWireTerminal;
};

// 0x8C 
struct UAIDebugCamera_Data {
	// Last Offset: 0x3C
	struct AGearboxMind* Mind; // 0x3C (0x4)
	struct URuleEngine* RuleEngine; // 0x40 (0x4)
	struct TArray_FDebugListItem DisplayList; // 0x44 (0xC)
	BOOL bSnapshotModeOn :1 ; // 0x50 (0x4)
	BOOL bShowFlags :1 ; // 0x50 (0x4)
	BOOL bShowRules :1 ; // 0x50 (0x4)
	BOOL bShowInactiveRules :1 ; // 0x50 (0x4)
	BOOL bShowResources :1 ; // 0x50 (0x4)
	BOOL bShowCombat :1 ; // 0x50 (0x4)
	BOOL bShowRuleEngineLoadBalance :1 ; // 0x50 (0x4)
	BOOL bShowAwarenessZones :1 ; // 0x50 (0x4)
	BOOL bShowTargetViewCones :1 ; // 0x50 (0x4)
	BOOL bShowTimers :1 ; // 0x50 (0x4)
	BOOL bShowAITree :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	int SnapshotNdx; // 0x54 (0x4)
	struct USnapshotRecord* CurSnapshot; // 0x58 (0x4)
	struct UPopUpDebugBarGraph* PopUpGraphTop; // 0x5C (0x4)
	struct UPopUpDebugBarGraph* PopUpGraphCenter; // 0x60 (0x4)
	struct FName CurrentInspectedTargetName; // 0x64 (0x8)
	float TopBarGraphStartXPct; // 0x6C (0x4)
	float TopBarGraphStartYPct; // 0x70 (0x4)
	float CenterBarGraphStartXPct; // 0x74 (0x4)
	float CenterBarGraphStartYPct; // 0x78 (0x4)
	float Column2XOffset; // 0x7C (0x4)
	float Column1LastY; // 0x80 (0x4)
	float Column2LastY; // 0x84 (0x4)
	int LastColumnDrawnTo; // 0x88 (0x4)
};

struct UAIDebugCamera {
	struct UObject_Data UObject;
	struct UAIDebugCamera_Data UAIDebugCamera;
};

// 0x110 
struct UAITracker_Data {
	// Last Offset: 0x3C
	struct USnapshotRecord* Snapshots[50]; // 0x3C (0xC8)
	int SnapshotSize; // 0x104 (0x4)
	int SnapshotIndex; // 0x108 (0x4)
	struct AActor* DebugOwner; // 0x10C (0x4)
};

struct UAITracker {
	struct UObject_Data UObject;
	struct UAITracker_Data UAITracker;
};

// 0x10C  (Alignment = 16)
struct UAnimNodeSpecialMoveBlend_Data {
	// Last Offset: 0xEC
	unsigned char AnimState; // 0xEC (0x1) (Enum = EAnimState)
	const unsigned char Unknown1[0x3]; // 0xED (0x3) > LAST OFFSET
	float SavedBlendOutTime; // 0xF0 (0x4)
	struct FScriptInterface SMI; // 0xF4 (0x8)
	struct TArray_FSlotAnimParameters AnimParameters; // 0xFC (0xC)
	BOOL bForceLocalSpaceBlend :1 ; // 0x108 (0x4)
	BOOL IssueNotifiesWhenZeroWeight :1 ; // 0x108 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeSpecialMoveBlend {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeSlot_Data UAnimNodeSlot;
	struct UAnimNodeSpecialMoveBlend_Data UAnimNodeSpecialMoveBlend;
};

// 0x4C 
struct UAttributeExpressionEvaluator_Data {
	// Last Offset: 0x3C
	struct FAttributeExpressionData Expression; // 0x3C (0x10)
};

struct UAttributeExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UAttributeExpressionEvaluator_Data UAttributeExpressionEvaluator;
};

// 0x54 
struct UBehavior_CallFunction_Data {
	// Last Offset: 0x4C
	struct FName FunctionName; // 0x4C (0x8)
};

struct UBehavior_CallFunction {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_CallFunction_Data UBehavior_CallFunction;
};

// 0x90 
struct UBehavior_ChangeRemoteBehaviorSequenceState_Data {
	// Last Offset: 0x4C
	unsigned char Action; // 0x4C (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FName SequenceName; // 0x50 (0x8)
	struct UObject* SequenceProvider; // 0x58 (0x4)
	struct FNameBasedObjectPath ProviderDefinitionPathName; // 0x5C (0x34)
};

struct UBehavior_ChangeRemoteBehaviorSequenceState {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeRemoteBehaviorSequenceState_Data UBehavior_ChangeRemoteBehaviorSequenceState;
};

// 0x68 
struct UBehavior_ChangeTimer_Data {
	// Last Offset: 0x4C
	unsigned char TimerId; // 0x4C (0x1) (Enum = EBehaviorTimerID)
	unsigned char Reaction; // 0x4D (0x1) (Enum = EBehaviorTimerReaction)
	const unsigned char Unknown1[0x2]; // 0x4E (0x2) > LAST OFFSET
	BOOL bSetNewTimerDelay :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	struct FAttributeInitializationData NewTimerDelayFormula; // 0x54 (0x10)
	float NewTimerDelay; // 0x64 (0x4)
};

struct UBehavior_ChangeTimer {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeTimer_Data UBehavior_ChangeTimer;
};

// 0x8C 
struct UBehavior_IsSequenceEnabled_Data {
	// Last Offset: 0x4C
	struct FName SequenceName; // 0x4C (0x8)
	struct UObject* SequenceProvider; // 0x54 (0x4)
	struct FNameBasedObjectPath ProviderDefinitionPathName; // 0x58 (0x34)
};

struct UBehavior_IsSequenceEnabled {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_IsSequenceEnabled_Data UBehavior_IsSequenceEnabled;
};

// 0x5C 
struct UBehavior_PostAkEvent_Data {
	// Last Offset: 0x4C
	struct UAkEvent* Event; // 0x4C (0x4)
	BOOL bReplicateEvent :1 ; // 0x50 (0x4)
	BOOL bForLocalPlayerOnly :1 ; // 0x50 (0x4)
	BOOL bForcePlayImmediate :1 ; // 0x50 (0x4)
	BOOL bPlayFromActor :1 ; // 0x50 (0x4)
	BOOL bLatentWhenNoConnections :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	struct FAkPlayingInfo PlayingInfo; // 0x54 (0x8)
};

struct UBehavior_PostAkEvent {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_PostAkEvent_Data UBehavior_PostAkEvent;
};

// 0x54 
struct UBehaviorHelpers_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __BehaviorSetStrategy__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __BehaviorStrategy__Delegate; // 0x48 (0xC)
};

struct UBehaviorHelpers {
	struct UObject_Data UObject;
	struct UBehaviorHelpers_Data UBehaviorHelpers;
};

// 0x48 
struct UCompoundExpressionEvaluator_Data {
	// Last Offset: 0x3C
	struct UExpressionEvaluator* Expression1; // 0x3C (0x4)
	unsigned char Operator; // 0x40 (0x1) (Enum = ECExpressionOperatorType)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	struct UExpressionEvaluator* Expression2; // 0x44 (0x4)
};

struct UCompoundExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UCompoundExpressionEvaluator_Data UCompoundExpressionEvaluator;
};

// 0x5C 
struct UConditionalAttributeValueResolver_Data {
	// Last Offset: 0x3C
	struct FConditionalInitializationExpressions ValueExpressions; // 0x3C (0x20)
};

struct UConditionalAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UConditionalAttributeValueResolver_Data UConditionalAttributeValueResolver;
};

// 0x40 
struct UConstantAttributeValueResolver_Data {
	// Last Offset: 0x3C
	float ConstantValue; // 0x3C (0x4)
};

struct UConstantAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UConstantAttributeValueResolver_Data UConstantAttributeValueResolver;
};

// 0x64 
struct UConstraintAttributeValueResolver_Data {
	// Last Offset: 0x3C
	struct FRange Constraints; // 0x3C (0x28)
};

struct UConstraintAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UConstraintAttributeValueResolver_Data UConstraintAttributeValueResolver;
};

// 0x48 
struct UFeatherBoneBlendDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_FFeatherBoneBlendData BoneBlends; // 0x3C (0xC)
};

struct UFeatherBoneBlendDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UFeatherBoneBlendDefinition_Data UFeatherBoneBlendDefinition;
};

// 0x48 
struct UGBXActorList_Data {
	// Last Offset: 0x3C
	struct TArray_Fs_actorList ActorList; // 0x3C (0xC)
};

struct UGBXActorList {
	struct UObject_Data UObject;
	struct UGBXActorList_Data UGBXActorList;
};

// 0x48 
struct UGBXObjectList_Data {
	// Last Offset: 0x3C
	struct TArray_UObjectPtr ObjectList; // 0x3C (0xC)
};

struct UGBXObjectList {
	struct UObject_Data UObject;
	struct UGBXObjectList_Data UGBXObjectList;
};

// 0x684 
struct AGearboxAIController_Data {
	// Last Offset: 0x684
};

struct AGearboxAIController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct AAIController_Data AAIController;
	struct AGearboxAIController_Data AGearboxAIController;
};

// 0x1C4 
struct AGearboxAIMoveNode_Data {
	// Last Offset: 0x188
	BOOL bEnabled :1 ; // 0x188 (0x4)
	BOOL bFaceNodeDirection :1 ; // 0x188 (0x4)
	const unsigned long: 0;
	struct TArray_FNodeData NextNodes; // 0x18C (0xC)
	struct TArray_AGearboxAIMoveNodePtr PreviousNodes; // 0x198 (0xC)
	float HoldTime; // 0x1A4 (0x4)
	struct TArray_UBehaviorBasePtr Behaviors; // 0x1A8 (0xC)
	struct TArray_USpecialMoveDefinitionPtr SpecialMoves; // 0x1B4 (0xC)
	struct USpriteComponent* Sprite; // 0x1C0 (0x4)
};

struct AGearboxAIMoveNode {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AGearboxAIMoveNode_Data AGearboxAIMoveNode;
};

// 0x400 
struct AGearboxCameraBasic_Data {
	// Last Offset: 0x3FC
	struct FPointer VfTable_IInterfaceGearboxCamera; // 0x3FC (0x4)
};

struct AGearboxCameraBasic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ACamera_Data ACamera;
	struct AGearboxCameraBasic_Data AGearboxCameraBasic;
};

// 0x89 
struct UGearboxCameraModifier_Data {
	// Last Offset: 0x58
	struct AGearboxCameraBasic* GBXCameraOwner; // 0x58 (0x4)
	struct FTPOV DesiredPOV; // 0x5C (0x1C)
	float MasterFadeValue; // 0x78 (0x4)
	float FadeElapsedTime; // 0x7C (0x4)
	float FadeTimeSpan; // 0x80 (0x4)
	BOOL FadeStarted :1 ; // 0x84 (0x4)
	BOOL FadingUpwards :1 ; // 0x84 (0x4)
	BOOL DisableWhenFadedOut :1 ; // 0x84 (0x4)
	BOOL AdjustForTimeDilation :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	unsigned char FadeMode; // 0x88 (0x1) (Enum = ECameraInterpolationMode)
};

struct UGearboxCameraModifier {
	struct UObject_Data UObject;
	struct UCameraModifier_Data UCameraModifier;
	struct UGearboxCameraModifier_Data UGearboxCameraModifier;
};

// 0x5C 
struct UGearboxCheatManager_Data {
	// Last Offset: 0x5C
};

struct UGearboxCheatManager {
	struct UObject_Data UObject;
	struct UCheatManager_Data UCheatManager;
	struct UGearboxCheatManager_Data UGearboxCheatManager;
};

// 0x3C 
struct UGearboxDialogInterface_Data {
	// Last Offset: 0x3C
};

struct UGearboxDialogInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UGearboxDialogInterface_Data UGearboxDialogInterface;
};

// 0x6C 
struct UGearboxEditorNode_Data {
	// Last Offset: 0x3C
	unsigned char Type; // 0x3C (0x1) (Enum = NodeType)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	struct TArray_FOutputLink OutputLinks; // 0x40 (0xC)
	struct TArray_UGearboxEditorNodePtr InputLinks; // 0x4C (0xC)
	struct TArray_FVariableLink VariableLinks; // 0x58 (0xC)
	BOOL bAllowInputs :1 ; // 0x64 (0x4)
	BOOL bAllowOutputs :1 ; // 0x64 (0x4)
	BOOL bAllowVariables :1 ; // 0x64 (0x4)
	BOOL bAllowMovement :1 ; // 0x64 (0x4)
	BOOL bAllowMultipleInputs :1 ; // 0x64 (0x4)
	BOOL bAllowMultipleOutputs :1 ; // 0x64 (0x4)
	BOOL bAllowMultipleVariables :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	float SliderPosition; // 0x68 (0x4)
};

struct UGearboxEditorNode {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
};

// 0x7CC 
struct UGearboxEngine_Data {
	// Last Offset: 0x7AC
	int CurrentUserID; // 0x7AC (0x4)
	int CurrentDeviceID; // 0x7B0 (0x4)
	BOOL bHasSelectedValidStorageDevice :1 ; // 0x7B4 (0x4)
	const unsigned long: 0;
	struct FString DefaultSparkInterfaceName; // 0x7B8 (0xC)
	struct FScriptInterface SparkInterface; // 0x7C4 (0x8)
};

struct UGearboxEngine {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UEngine_Data UEngine;
	struct UGameEngine_Data UGameEngine;
	struct UGearboxEngine_Data UGearboxEngine;
};

// 0x330 
struct AGearboxGameInfo_Data {
	// Last Offset: 0x330
};

struct AGearboxGameInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AGameInfo_Data AGameInfo;
	struct AGearboxGameInfo_Data AGearboxGameInfo;
};

// 0x254 
struct UGearboxGFxMovie_Data {
	// Last Offset: 0x1C8
	struct TArray_FAkEventResolver InteractionOverrideSounds; // 0x1C8 (0xC)
	float TickRateSeconds; // 0x1D4 (0x4)
	BOOL bTickScript :1 ; // 0x1D8 (0x4)
	BOOL bTickFirstFrame :1 ; // 0x1D8 (0x4)
	BOOL bRenderingDisabled :1 ; // 0x1D8 (0x4)
	BOOL bSupportsStatePooling :1 ; // 0x1D8 (0x4)
	BOOL bIsUsingFlashMouse :1 ; // 0x1D8 (0x4)
	BOOL bBlockingMovie :1 ; // 0x1D8 (0x4)
	BOOL bCloseOnDeath :1 ; // 0x1D8 (0x4)
	const unsigned long: 0;
	struct TArray_UGFxMovieDrawStylePtr AllStyles; // 0x1DC (0xC)
	struct UGFxMovieDefinition* MyDefinition; // 0x1E8 (0x4)
	struct UGFxActorMoviePool* MyPool; // 0x1EC (0x4)
	struct TArray_AGearboxPlayerControllerPtr PlayerOwners; // 0x1F0 (0xC)
	struct UObject* ContextObject; // 0x1FC (0x4)
	float LastTickTime; // 0x200 (0x4)
	struct UGearboxGFxMovie* PoolParent; // 0x204 (0x4)
	struct FMovieStateStruct CurrentMovieState; // 0x208 (0x18)
	struct TArray_UGFxMovieStatePtr BaseMovieStates; // 0x220 (0xC)
	struct TArray_UGFxMovieStatePtr AllMovieStates; // 0x22C (0xC)
	int bMouseable; // 0x238 (0x4)
	struct FScriptDelegate __OnInputAxis__Delegate; // 0x23C (0xC)
	struct FScriptDelegate __OnClosed__Delegate; // 0x248 (0xC)
};

struct UGearboxGFxMovie {
	struct UObject_Data UObject;
	struct UGFxMoviePlayer_Data UGFxMoviePlayer;
	struct UGFxMovie_Data UGFxMovie;
	struct UGearboxGFxMovie_Data UGearboxGFxMovie;
};

// 0x258 
struct UGFxMovie_StateParent_Data {
	// Last Offset: 0x254
	struct UClass* StateClass; // 0x254 (0x4)
};

struct UGFxMovie_StateParent {
	struct UObject_Data UObject;
	struct UGFxMoviePlayer_Data UGFxMoviePlayer;
	struct UGFxMovie_Data UGFxMovie;
	struct UGearboxGFxMovie_Data UGearboxGFxMovie;
	struct UGFxMovie_StateParent_Data UGFxMovie_StateParent;
};

// 0xF4 
struct UGearboxGlobals_Data {
	// Last Offset: 0x84
	struct UGearboxGlobalsDefinition* TheGlobalsDefinition; // 0x84 (0x4)
	struct UClass* ExposureUtilityClass; // 0x88 (0x4)
	struct UClass* ExposureUtilityStrategyClass; // 0x8C (0x4)
	struct UExposureUtilityBase* TheExposureUtility; // 0x90 (0x4)
	struct UGearboxAIFactory* TheAIFactory; // 0x94 (0x4)
	struct URuleEngineLoadBalanceManager* TheRuleEngineLoadBalanceManager; // 0x98 (0x4)
	struct UGBXActorList* TheGBXActorList; // 0x9C (0x4)
	struct UGBXObjectList* TheGBXObjectList; // 0xA0 (0x4)
	struct TArray_FValidNameRange ValidNameList; // 0xA4 (0xC)
	struct AWireManager* TheWireMgr; // 0xB0 (0x4)
	struct UGbxMessageManager* TheMessageManager; // 0xB4 (0x4)
	struct UGBXActorList* TheDynamicTextureActorList; // 0xB8 (0x4)
	struct UPopulationMaster* ThePopulationMaster; // 0xBC (0x4)
	struct UBehaviorKernel* TheBehaviorKernel; // 0xC0 (0x4)
	struct UScreenSpaceManager* TheScreenSpaceManager; // 0xC4 (0x4)
	struct UGFxMovieManager* TheGFxManager; // 0xC8 (0x4)
	struct UGearboxRenderTextureManager* TheRenderTextureManager; // 0xCC (0x4)
	struct FString GlobalInstanceClassName; // 0xD0 (0xC)
	int DefaultMaxPopulationActorCost; // 0xDC (0x4)
	struct TArray_FLevelStateRecord StateRecords; // 0xE0 (0xC)
	struct UAkComponent* UIAudioComponent; // 0xEC (0x4)
	struct UGearboxDialogManager* TheDialogManager; // 0xF0 (0x4)
};

struct UGearboxGlobals {
	struct UObject_Data UObject;
	struct UGearboxEngineGlobals_Data UGearboxEngineGlobals;
	struct UGearboxGlobals_Data UGearboxGlobals;
};

// 0x48 
struct UGearboxGlobalsDefinition_Data {
	// Last Offset: 0x3C
	float RespawnDelayInSeconds; // 0x3C (0x4)
	struct UGearboxDialogGlobalsDefinition* Dialog; // 0x40 (0x4)
	struct UGFxMovieDefinition* EulaMovieDefinition; // 0x44 (0x4)
};

struct UGearboxGlobalsDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxGlobalsDefinition_Data UGearboxGlobalsDefinition;
};

// 0x88 
struct UGearboxLocationRequest_Data {
	// Last Offset: 0x3C
	struct USearchOrigin* SearchOrigin; // 0x3C (0x4)
	struct USearchDirection* DirectionFromOrigin; // 0x40 (0x4)
	struct ULocationFilter* LocationFilterTest; // 0x44 (0x4)
	float DirectionCone; // 0x48 (0x4)
	struct FAttributeInitializationData MinDistanceFromOrigin; // 0x4C (0x10)
	struct FAttributeInitializationData MaxDistanceFromOrigin; // 0x5C (0x10)
	unsigned char SearchRandomness; // 0x6C (0x1) (Enum = ELocationSearchRandomness)
	const unsigned char Unknown1[0x3]; // 0x6D (0x3) > LAST OFFSET
	struct FVector SearchOriginResult; // 0x70 (0xC)
	struct FVector SearchDirectionResult; // 0x7C (0xC)
};

struct UGearboxLocationRequest {
	struct UObject_Data UObject;
	struct UGearboxLocationRequest_Data UGearboxLocationRequest;
};

// 0xB4 
struct UPawnMoveLocationRequest_Data {
	// Last Offset: 0x88
	BOOL GoToCover :1 ; // 0x88 (0x4)
	const unsigned long: 0;
	unsigned char CoverSearchFilter; // 0x8C (0x1) (Enum = ECoverSearchFilter)
	unsigned char RepathOption; // 0x8D (0x1) (Enum = ERepathBehavior)
	unsigned char CoverFailureResponse; // 0x8E (0x1) (Enum = ECoverFailureBehavior)
	unsigned char DestinationTestNonCover; // 0x8F (0x1) (Enum = EDestinationAdditionalTest)
	struct FAttributeInitializationData RepathDistanceThresh; // 0x90 (0x10)
	struct URuleEventDef* FailureEvent; // 0xA0 (0x4)
	struct FAttributeInitializationData OverrideDistanceForCover; // 0xA4 (0x10)
};

struct UPawnMoveLocationRequest {
	struct UObject_Data UObject;
	struct UGearboxLocationRequest_Data UGearboxLocationRequest;
	struct UPawnMoveLocationRequest_Data UPawnMoveLocationRequest;
};

// 0x6FC 
struct AGearboxPawn_Data {
	// Last Offset: 0x690
	struct FPointer VfTable_ISpecialMoveInterface; // 0x690 (0x4)
	struct FPointer VfTable_IGearboxDialogInterface; // 0x694 (0x4)
	struct FName NPCSightBone; // 0x698 (0x8)
	BOOL bWantsToMove :1 ; // 0x6A0 (0x4)
	const unsigned long: 0;
	struct USpecialMoveComponent* SMComponent; // 0x6A4 (0x4)
	struct FReplicatedSpecialMoveData ReplicatedSMData; // 0x6A8 (0x14)
	struct FFlag HasBeenShotAtRecently; // 0x6BC (0x10)
	struct FGearboxCoverState CoverState; // 0x6CC (0xC)
	struct UGearboxCoverStateManager* CoverManager; // 0x6D8 (0x4)
	struct UGearboxDialogComponent* DialogComponent; // 0x6DC (0x4)
	struct FGearboxDialogReplicatedData DialogReplicatedData; // 0x6E0 (0x14)
	struct FAkPlayingInfo DyingScream; // 0x6F4 (0x8)
};

struct AGearboxPawn {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AGamePawn_Data AGamePawn;
	struct AGearboxPawn_Data AGearboxPawn;
};

// 0x9F4 
struct AGearboxPlayerController_Data {
	// Last Offset: 0x8FC
	struct FGearboxViewShakeInfo CurrentViewShake; // 0x8FC (0x44)
	struct FGearboxViewShakeInfo BaseDamageShake; // 0x940 (0x44)
	struct FVector ShakeOffset; // 0x984 (0xC)
	struct FRotator ShakeRot; // 0x990 (0xC)
	float ShakeFOV; // 0x99C (0x4)
	BOOL bWantsToShowStorageMenu :1 ; // 0x9A0 (0x4)
	BOOL bShouldCheckForProfileDeviceRemoval :1 ; // 0x9A0 (0x4)
	const unsigned long: 0;
	struct UAIDebugCamera* AIDebugCam; // 0x9A4 (0x4)
	struct AGearboxPawn* PreviousDebugPawn; // 0x9A8 (0x4)
	struct UClass* AIDebugCamClass; // 0x9AC (0x4)
	float DamageShakeMagnitudeMultiplier; // 0x9B0 (0x4)
	float DamageShakeMagnitudeMultiplierBaseValue; // 0x9B4 (0x4)
	struct TArray_UAttributeModifierPtr DamageShakeMagnitudeMultiplierModifierStack; // 0x9B8 (0xC)
	float DamageShakeTimeMultiplier; // 0x9C4 (0x4)
	float DamageShakeTimeMultiplierBaseValue; // 0x9C8 (0x4)
	struct TArray_UAttributeModifierPtr DamageShakeTimeMultiplierModifierStack; // 0x9CC (0xC)
	struct ULeviathanChannel* LeviathanReplicationChannel; // 0x9D8 (0x4)
	struct FGuid PlaySessionGuid; // 0x9DC (0x10)
	int SessionBundleNumber; // 0x9EC (0x4)
	struct UGearboxProfileSettings* CachedProfileSettings; // 0x9F0 (0x4)
};

struct AGearboxPlayerController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct APlayerController_Data APlayerController;
	struct AGamePlayerController_Data AGamePlayerController;
	struct AGearboxPlayerController_Data AGearboxPlayerController;
};

// 0x17C 
struct UGearboxPlayerInput_Data {
	// Last Offset: 0x17C
};

struct UGearboxPlayerInput {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UInput_Data UInput;
	struct UPlayerInput_Data UPlayerInput;
	struct UGearboxPlayerInput_Data UGearboxPlayerInput;
};

// 0x25C 
struct AGearboxPlayerReplicationInfo_Data {
	// Last Offset: 0x254
	unsigned char Difficulty; // 0x254 (0x1) (Enum = EDifficultyLevel)
	const unsigned char Unknown1[0x3]; // 0x255 (0x3) > LAST OFFSET
	int Dummy; // 0x258 (0x4)
};

struct AGearboxPlayerReplicationInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct APlayerReplicationInfo_Data APlayerReplicationInfo;
	struct AGearboxPlayerReplicationInfo_Data AGearboxPlayerReplicationInfo;
};

// 0x98 
struct UGearboxProfileSettings_Data {
	// Last Offset: 0x98
};

struct UGearboxProfileSettings {
	struct UObject_Data UObject;
	struct UOnlinePlayerStorage_Data UOnlinePlayerStorage;
	struct UOnlineProfileSettings_Data UOnlineProfileSettings;
	struct UGearboxProfileSettings_Data UGearboxProfileSettings;
};

// 0x78 
struct UGearboxRenderTextureManager_Data {
	// Last Offset: 0x3C
	struct TArray_UTexture2DPtr FreeList2D; // 0x3C (0xC)
	struct TArray_UTextureRenderTarget2DPtr FreeList; // 0x48 (0xC)
	float HoldDuration; // 0x54 (0x4)
	float TimeToNextTick; // 0x58 (0x4)
	struct TArray_FThumbnailRenderData Thumbnails; // 0x5C (0xC)
	struct TArray_FThumbnailLightData DefaultLights; // 0x68 (0xC)
	float ThumbnailTextureArea; // 0x74 (0x4)
};

struct UGearboxRenderTextureManager {
	struct UObject_Data UObject;
	struct UGearboxRenderTextureManager_Data UGearboxRenderTextureManager;
};

// 0xD0 
struct UGearboxSeqAct_DestroyPopulationActors_Data {
	// Last Offset: 0xB4
	BOOL SaveDestroyedActors :1 ; // 0xB4 (0x4)
	BOOL DisablePopulationSpawners :1 ; // 0xB4 (0x4)
	BOOL bActorsDestroyed :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	struct TArray_APopulationOpportunityPtr Opportunities; // 0xB8 (0xC)
	struct TArray_APopulationEncounterPtr Encounters; // 0xC4 (0xC)
};

struct UGearboxSeqAct_DestroyPopulationActors {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct UGearboxSeqAct_DestroyPopulationActors_Data UGearboxSeqAct_DestroyPopulationActors;
};

// 0xA4 
struct UGearboxSeqAct_ResetPopulationCount_Data {
	// Last Offset: 0xA4
};

struct UGearboxSeqAct_ResetPopulationCount {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGearboxSeqAct_ResetPopulationCount_Data UGearboxSeqAct_ResetPopulationCount;
};

// 0x6B0  (Alignment = 16)
struct UGearboxSkeletalMeshComponent_Data {
	// Last Offset: 0x6AC
	float FOV; // 0x6AC (0x4)
};

struct UGearboxSkeletalMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct USkeletalMeshComponent_Data USkeletalMeshComponent;
	struct UGearboxSkeletalMeshComponent_Data UGearboxSkeletalMeshComponent;
};

// 0x24C  (Alignment = 16)
struct UGearboxStaticMeshComponent_Data {
	// Last Offset: 0x248
	float FOV; // 0x248 (0x4)
};

struct UGearboxStaticMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct UGearboxStaticMeshComponent_Data UGearboxStaticMeshComponent;
};

// 0x74 
struct UGestaltSkeletalMeshDefinition_Data {
	// Last Offset: 0x3C
	struct USkeletalMesh* GestaltSkeletalMesh; // 0x3C (0x4)
	BOOL bStaticMeshRigidBodyMesh :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct TArray_FGestaltInfo GestaltInfos; // 0x44 (0xC)
	struct TArray_FGestaltAccessoryNameEntry GestaltAccessoryNames; // 0x50 (0xC)
	struct TArray_FGestaltSocketRemapEntry GestaltSocketMappings; // 0x5C (0xC)
	struct TArray_FGestaltPartBoundsEntry GestaltPartBounds; // 0x68 (0xC)
};

struct UGestaltSkeletalMeshDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGestaltSkeletalMeshDefinition_Data UGestaltSkeletalMeshDefinition;
};

// 0x58 
struct UGFxActorMoviePool_Data {
	// Last Offset: 0x3C
	struct UGFxMovieDefinition* MovieDefinition; // 0x3C (0x4)
	struct TArray_FMovieInstanceArray Pools; // 0x40 (0xC)
	struct TArray_FScriptInterface MovieTargets; // 0x4C (0xC)
};

struct UGFxActorMoviePool {
	struct UObject_Data UObject;
	struct UGFxActorMoviePool_Data UGFxActorMoviePool;
};

// 0xBC 
struct UGFxMovieDefinition_Data {
	// Last Offset: 0x3C
	struct USwfMovie* SwfMovie; // 0x3C (0x4)
	struct UClass* SwfMovieClass; // 0x40 (0x4)
	struct UGearboxGFxMovie* Movie; // 0x44 (0x4)
	struct UClass* ExternalInterfaceClass; // 0x48 (0x4)
	BOOL bTakeFocus :1 ; // 0x4C (0x4)
	BOOL bCaptureInput :1 ; // 0x4C (0x4)
	BOOL bStartPaused :1 ; // 0x4C (0x4)
	BOOL bIsModalGameMenu :1 ; // 0x4C (0x4)
	BOOL bOverrideWorldLighting :1 ; // 0x4C (0x4)
	BOOL bInputOwnerOnly :1 ; // 0x4C (0x4)
	BOOL bInputAllKeys :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	float FadeInSeconds; // 0x50 (0x4)
	float FadeOutSeconds; // 0x54 (0x4)
	struct FRotator WorldLightingDirectionOffset; // 0x58 (0xC)
	struct UGFxMovieDrawStyle* DrawStyle; // 0x64 (0x4)
	int DepthPriority; // 0x68 (0x4)
	unsigned char PoolType; // 0x6C (0x1) (Enum = EGFxMoviePooling)
	unsigned char ScaleMode; // 0x6D (0x1) (Enum = GFxScaleMode)
	unsigned char AlignMode; // 0x6E (0x1) (Enum = GFxAlign)
	unsigned char TimingMode; // 0x6F (0x1) (Enum = GFxTimingMode)
	unsigned char RenderTextureMode; // 0x70 (0x1) (Enum = GFxRenderTextureMode)
	const unsigned char Unknown1[0x3]; // 0x71 (0x3) > LAST OFFSET
	struct FName Pool; // 0x74 (0x8)
	struct TArray_UGFxMovieStatePtr CustomStates; // 0x7C (0xC)
	struct TArray_FName AutoActivateStates; // 0x88 (0xC)
	struct TArray_FGFxMenuLink MenuLinks; // 0x94 (0xC)
	struct UTextureRenderTarget2D* RenderTexture; // 0xA0 (0x4)
	struct TArray_FAkEventResolver InteractionOverrideSounds; // 0xA4 (0xC)
	struct TArray_UGFxMovieStatePtr BaseMovieStates; // 0xB0 (0xC)
};

struct UGFxMovieDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGFxMovieDefinition_Data UGFxMovieDefinition;
};

// 0xBC 
struct UGearboxEULAGFxMovieDefinition_Data {
	// Last Offset: 0xBC
};

struct UGearboxEULAGFxMovieDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGFxMovieDefinition_Data UGFxMovieDefinition;
	struct UGearboxEULAGFxMovieDefinition_Data UGearboxEULAGFxMovieDefinition;
};

// 0x48 
struct UGFxMovieDrawStyle_Data {
	// Last Offset: 0x3C
	struct UGearboxGFxMovie* Movie; // 0x3C (0x4)
	struct FScriptInterface TargetActor; // 0x40 (0x8)
};

struct UGFxMovieDrawStyle {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
};

// 0x88 
struct UGFxMovieDrawStyleHUD_Data {
	// Last Offset: 0x48
	struct TArray_FHUDAnchorPoint AnchorPoints; // 0x48 (0xC)
	struct FHUDCoordValue MovieDimensions[2]; // 0x54 (0x20)
	BOOL bCacheValid :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	float MovieScreenPos[4]; // 0x78 (0x10)
};

struct UGFxMovieDrawStyleHUD {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleHUD_Data UGFxMovieDrawStyleHUD;
};

// 0x4D 
struct UGFxMovieDrawStyleRTT_Data {
	// Last Offset: 0x48
	int TextureSize; // 0x48 (0x4)
	unsigned char RenderTextureMode; // 0x4C (0x1) (Enum = GFxRenderTextureMode)
};

struct UGFxMovieDrawStyleRTT {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleRTT_Data UGFxMovieDrawStyleRTT;
};

// 0x50 
struct UGFxMovieDrawStyleComponent_Data {
	// Last Offset: 0x50
};

struct UGFxMovieDrawStyleComponent {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleRTT_Data UGFxMovieDrawStyleRTT;
	struct UGFxMovieDrawStyleComponent_Data UGFxMovieDrawStyleComponent;
};

// 0x80 
struct UGFxMovieDrawStyleMesh_Data {
	// Last Offset: 0x50
	struct UMeshComponent* MeshComponentArchetype; // 0x50 (0x4)
	struct UStaticMesh* UseStaticMesh; // 0x54 (0x4)
	struct USkeletalMesh* UseSkeletalMesh; // 0x58 (0x4)
	struct FName UseMeshInstanceName; // 0x5C (0x8)
	int MaterialIndex; // 0x64 (0x4)
	struct UMaterial* OverrideMaterial; // 0x68 (0x4)
	struct FName TextureParameterName; // 0x6C (0x8)
	struct UMeshComponent* Component; // 0x74 (0x4)
	struct UMaterialInstanceConstant* Mati; // 0x78 (0x4)
	struct UMaterialInterface* OriginalMaterial; // 0x7C (0x4)
};

struct UGFxMovieDrawStyleMesh {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleRTT_Data UGFxMovieDrawStyleRTT;
	struct UGFxMovieDrawStyleComponent_Data UGFxMovieDrawStyleComponent;
	struct UGFxMovieDrawStyleMesh_Data UGFxMovieDrawStyleMesh;
};

// 0x58 
struct UGFxMovieDrawStyleSprite_Data {
	// Last Offset: 0x50
	int SpriteSize; // 0x50 (0x4)
	struct USpriteRTTComponent* TheSprite; // 0x54 (0x4)
};

struct UGFxMovieDrawStyleSprite {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleRTT_Data UGFxMovieDrawStyleRTT;
	struct UGFxMovieDrawStyleComponent_Data UGFxMovieDrawStyleComponent;
	struct UGFxMovieDrawStyleSprite_Data UGFxMovieDrawStyleSprite;
};

// 0x48 
struct UGFxMovieDrawStyleSplitscreen_Data {
	// Last Offset: 0x48
};

struct UGFxMovieDrawStyleSplitscreen {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleSplitscreen_Data UGFxMovieDrawStyleSplitscreen;
};

// 0x54 
struct UGFxMovieManager_Data {
	// Last Offset: 0x3C
	struct TArray_AGearboxPlayerControllerPtr Subscribers; // 0x3C (0xC)
	struct TArray_UGFxActorMoviePoolPtr MoviePools; // 0x48 (0xC)
};

struct UGFxMovieManager {
	struct UObject_Data UObject;
	struct UGFxMovieManager_Data UGFxMovieManager;
};

// 0x5C 
struct UGFxMovieState_Data {
	// Last Offset: 0x3C
	struct FName StateName; // 0x3C (0x8)
	struct FName DefaultState; // 0x44 (0x8)
	unsigned char StateType; // 0x4C (0x1) (Enum = EMovieStateMode)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct TArray_FMovieStateData AllStates; // 0x50 (0xC)
};

struct UGFxMovieState {
	struct UObject_Data UObject;
	struct UGFxMovieState_Data UGFxMovieState;
};

// 0x68 
struct UGFxMovieStateCustom_Data {
	// Last Offset: 0x5C
	struct TArray_FMovieStateData CustomStates; // 0x5C (0xC)
};

struct UGFxMovieStateCustom {
	struct UObject_Data UObject;
	struct UGFxMovieState_Data UGFxMovieState;
	struct UGFxMovieStateCustom_Data UGFxMovieStateCustom;
};

// 0x68 
struct UGFxMovieStateFlags_Data {
	// Last Offset: 0x5C
	struct TArray_FName CustomFlags; // 0x5C (0xC)
};

struct UGFxMovieStateFlags {
	struct UObject_Data UObject;
	struct UGFxMovieState_Data UGFxMovieState;
	struct UGFxMovieStateFlags_Data UGFxMovieStateFlags;
};

// 0x78 
struct UGFxMovieStatePlayerAware_Data {
	// Last Offset: 0x5C
	float LookAtThreshold; // 0x5C (0x4)
	struct TArray_FMovieStateData LookStates; // 0x60 (0xC)
	struct TArray_FMovieRangeStateData RangeStates; // 0x6C (0xC)
};

struct UGFxMovieStatePlayerAware {
	struct UObject_Data UObject;
	struct UGFxMovieState_Data UGFxMovieState;
	struct UGFxMovieStatePlayerAware_Data UGFxMovieStatePlayerAware;
};

// 0x3C 
struct UIAIInterface_Data {
	// Last Offset: 0x3C
};

struct UIAIInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIAIInterface_Data UIAIInterface;
};

// 0x3C 
struct UIConstructObject_Data {
	// Last Offset: 0x3C
};

struct UIConstructObject {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIConstructObject_Data UIConstructObject;
};

// 0x3C 
struct UIGFxActorMovie_Data {
	// Last Offset: 0x3C
};

struct UIGFxActorMovie {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGFxActorMovie_Data UIGFxActorMovie;
};

// 0x3C 
struct UINounAttributeProvider_Data {
	// Last Offset: 0x3C
};

struct UINounAttributeProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UINounAttributeProvider_Data UINounAttributeProvider;
};

// 0x3C 
struct UInterfaceGearboxCamera_Data {
	// Last Offset: 0x3C
};

struct UInterfaceGearboxCamera {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterfaceGearboxCamera_Data UInterfaceGearboxCamera;
};

// 0x3C 
struct UIStreamingDataEvent_Data {
	// Last Offset: 0x3C
};

struct UIStreamingDataEvent {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIStreamingDataEvent_Data UIStreamingDataEvent;
};

// 0x78 
struct ULeviathanChannel_Data {
	// Last Offset: 0x68
	const unsigned char Unknown1[0x10]; // 0x68 (0x10) MISSING END DATA
};

struct ULeviathanChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
	struct ULeviathanChannel_Data ULeviathanChannel;
};

// 0x3C 
struct UNoContextNeededAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UNoContextNeededAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UNoContextNeededAttributeContextResolver_Data UNoContextNeededAttributeContextResolver;
};

// 0x50 
struct UNounAttributeValueResolver_Data {
	// Last Offset: 0x3C
	unsigned char ReplicationStrategy; // 0x3C (0x1) (Enum = ENounReplicationStrategy)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	struct FAttributeInitializationData DefaultValue; // 0x40 (0x10)
};

struct UNounAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UNounAttributeValueResolver_Data UNounAttributeValueResolver;
};

// 0x48 
struct UObjectFunctionAttributeValueResolver_Data {
	// Last Offset: 0x3C
	struct FString FunctionCall; // 0x3C (0xC)
};

struct UObjectFunctionAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UObjectFunctionAttributeValueResolver_Data UObjectFunctionAttributeValueResolver;
};

// 0x44 
struct UObjectPropertyContextResolver_Data {
	// Last Offset: 0x3C
	struct FName PropertyName; // 0x3C (0x8)
};

struct UObjectPropertyContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UObjectPropertyContextResolver_Data UObjectPropertyContextResolver;
};

// 0x44 
struct UPhysicsStateExpressionEvaluator_Data {
	// Last Offset: 0x3C
	unsigned char PhysicsState; // 0x3C (0x1) (Enum = EPhysics)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	BOOL bIsInState :1 ; // 0x40 (0x4)
	const unsigned long: 0;
};

struct UPhysicsStateExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UPhysicsStateExpressionEvaluator_Data UPhysicsStateExpressionEvaluator;
};

// 0x3C 
struct UPopulationAspect_Data {
	// Last Offset: 0x3C
};

struct UPopulationAspect {
	struct UObject_Data UObject;
	struct UPopulationAspect_Data UPopulationAspect;
};

// 0x3C 
struct UPopulationBodyTag_Data {
	// Last Offset: 0x3C
};

struct UPopulationBodyTag {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UPopulationBodyTag_Data UPopulationBodyTag;
};

// 0x1CC 
struct APopulationEncounter_Data {
	// Last Offset: 0x188
	struct UPopulationDefinition* EncounterPopulationDef; // 0x188 (0x4)
	struct TArray_APopulationOpportunityPtr MemberOutposts; // 0x18C (0xC)
	struct TArray_APopulationOpportunityPtr MemberOpportunities; // 0x198 (0xC)
	struct TArray_FEncounterLimitData SpawnLimits; // 0x1A4 (0xC)
	BOOL IsEnabled :1 ; // 0x1B0 (0x4)
	BOOL AutoEnableOpportunities :1 ; // 0x1B0 (0x4)
	BOOL bWaitingForNextWave :1 ; // 0x1B0 (0x4)
	BOOL bIsWaitingForRespawn :1 ; // 0x1B0 (0x4)
	const unsigned long: 0;
	struct TArray_FEncounterWaveData Waves; // 0x1B4 (0xC)
	int CurrentWave; // 0x1C0 (0x4)
	float TimeToStartNextWave; // 0x1C4 (0x4)
	float RespawnDelayStartTime; // 0x1C8 (0x4)
};

struct APopulationEncounter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationEncounter_Data APopulationEncounter;
};

// 0x210  (Alignment = 16)
struct UPopulationEncounterRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPopulationEncounterRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPopulationEncounterRenderingComponent_Data UPopulationEncounterRenderingComponent;
};

// 0x210  (Alignment = 16)
struct UPopulationOpportunityCombatRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPopulationOpportunityCombatRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPopulationOpportunityCombatRenderingComponent_Data UPopulationOpportunityCombatRenderingComponent;
};

// 0x3C 
struct UPopulationSpawnedActorTagDefinition_Data {
	// Last Offset: 0x3C
};

struct UPopulationSpawnedActorTagDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UPopulationSpawnedActorTagDefinition_Data UPopulationSpawnedActorTagDefinition;
};

// 0x7C 
struct UPopUpDebugBarGraph_Data {
	// Last Offset: 0x3C
	struct TArray_FColumnDataStruct Columns; // 0x3C (0xC)
	struct FString TitleText; // 0x48 (0xC)
	struct FColor BaseLineColor; // 0x54 (0x4)
	struct FColor TitleTextColor; // 0x58 (0x4)
	float ColumnWidth; // 0x5C (0x4)
	float ColumnPadding; // 0x60 (0x4)
	float ColumnMaxHeight; // 0x64 (0x4)
	float TextScale; // 0x68 (0x4)
	float TextPadding; // 0x6C (0x4)
	float TitleTextScale; // 0x70 (0x4)
	float TitleTextPaddingY; // 0x74 (0x4)
	float ColumnValueTextOffsetY; // 0x78 (0x4)
};

struct UPopUpDebugBarGraph {
	struct UObject_Data UObject;
	struct UPopUpDebugBarGraph_Data UPopUpDebugBarGraph;
};

// 0x7C 
struct URandomAttributeValueResolver_Data {
	// Last Offset: 0x3C
	BOOL bUseIntegerRandomization :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct FAttributeInitializationData LowerBound; // 0x40 (0x10)
	struct FAttributeInitializationData UpperBound; // 0x50 (0x10)
	struct FAttributeInitializationData ValueLifetime; // 0x60 (0x10)
	struct TArray_FSavedRandomValue SavedRandomValues; // 0x70 (0xC)
};

struct URandomAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct URandomAttributeValueResolver_Data URandomAttributeValueResolver;
};

// 0x3C 
struct URegionDefinition_Data {
	// Last Offset: 0x3C
};

struct URegionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct URegionDefinition_Data URegionDefinition;
};

// 0x44 
struct URootMotionDefinition_Data {
	// Last Offset: 0x3C
	unsigned char RootMotionMode; // 0x3C (0x1) (Enum = ERootMotionMode)
	unsigned char RootBoneOption[3]; // 0x3D (0x3) (Enum = ERootBoneAxis)
	unsigned char RootRotationMode; // 0x40 (0x1) (Enum = ERootMotionRotationMode)
	unsigned char RootRotationOption[3]; // 0x41 (0x3) (Enum = ERootRotationOption)
};

struct URootMotionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct URootMotionDefinition_Data URootMotionDefinition;
};

// 0x70 
struct URuleEngineLoadBalanceManager_Data {
	// Last Offset: 0x3C
	float NumTimeSpentThisFrame; // 0x3C (0x4)
	float LastTimeFullUpdate; // 0x40 (0x4)
	struct TArray_FRuleEngineLoadBalanceStruct WaitingEngines; // 0x44 (0xC)
	struct TArray_FDebugLoadBalance DebugEngines; // 0x50 (0xC)
	struct TArray_FRELBManagerStats ManagerStats; // 0x5C (0xC)
	BOOL bIsDebugging :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	int MSPosition; // 0x6C (0x4)
};

struct URuleEngineLoadBalanceManager {
	struct UObject_Data UObject;
	struct URuleEngineLoadBalanceManager_Data URuleEngineLoadBalanceManager;
};

// 0x94  (Alignment = 16)
struct UScreenSpaceManager_Data {
	// Last Offset: 0x3C
	struct ULocalPlayer* pLocalPlayer; // 0x3C (0x4)
	int ViewWidth; // 0x40 (0x4)
	int ViewHeight; // 0x44 (0x4)
	const unsigned char Unknown1[0x8]; // 0x48 (0x8) > LAST OFFSET
	struct FMatrix ViewProjectionMatrix; // 0x50 (0x40)
	BOOL bMatricesUpToDate :1 ; // 0x90 (0x4)
	const unsigned long: 0;
};

struct UScreenSpaceManager {
	struct UObject_Data UObject;
	struct UScreenSpaceManager_Data UScreenSpaceManager;
};

// 0xB4 
struct USeqAct_AllPlayersInVolume_Data {
	// Last Offset: 0xA4
	struct TArray_AVolumePtr Volumes; // 0xA4 (0xC)
	BOOL bAllActorsInVolumes :1 ; // 0xB0 (0x4)
	BOOL bCheckForAllPlayers :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_AllPlayersInVolume {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AllPlayersInVolume_Data USeqAct_AllPlayersInVolume;
};

// 0x90 
struct USeqCond_CompareLocation_Data {
	// Last Offset: 0x8C
	float CheckRadius; // 0x8C (0x4)
};

struct USeqCond_CompareLocation {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareLocation_Data USeqCond_CompareLocation;
};

// 0x90 
struct USeqCond_CompareString_Data {
	// Last Offset: 0x8C
	BOOL bCaseSensitive :1 ; // 0x8C (0x4)
	const unsigned long: 0;
};

struct USeqCond_CompareString {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareString_Data USeqCond_CompareString;
};

// 0x98 
struct USeqCond_GetLanguage_Data {
	// Last Offset: 0x8C
	struct TArray_FString LangList; // 0x8C (0xC)
};

struct USeqCond_GetLanguage {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_GetLanguage_Data USeqCond_GetLanguage;
};

// 0x60 
struct USimpleMathValueResolver_Data {
	// Last Offset: 0x3C
	unsigned char Arg1Option; // 0x3C (0x1) (Enum = EMathValueResolverArg1Option)
	unsigned char Operand; // 0x3D (0x1) (Enum = EMathValueResolverOperand)
	const unsigned char Unknown1[0x2]; // 0x3E (0x2) > LAST OFFSET
	struct FAttributeInitializationData Arg1Attribute; // 0x40 (0x10)
	struct FAttributeInitializationData Argument; // 0x50 (0x10)
};

struct USimpleMathValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct USimpleMathValueResolver_Data USimpleMathValueResolver;
};

// 0x98 
struct USpecialMoveComponent_Data {
	// Last Offset: 0x5C
	BOOL bLocalPlay :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	float StartTime; // 0x60 (0x4)
	struct FScriptInterface SMI; // 0x64 (0x8)
	struct FSpecialMoveData CurrentSMData; // 0x6C (0x1C)
	struct TArray_FSpecialMoveData SMDQueue; // 0x88 (0xC)
	struct UAnimNodeSpecialMoveBlend* SMBlendNode; // 0x94 (0x4)
};

struct USpecialMoveComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USpecialMoveComponent_Data USpecialMoveComponent;
};

// 0x48 
struct USpecialMoveDefinition_Data {
	// Last Offset: 0x3C
	struct USpecialMoveDefinition* NextSpecialMove; // 0x3C (0x4)
	struct UExpressionEvaluator* StopExpression; // 0x40 (0x4)
	BOOL bOwnerAlwaysRelevant :1 ; // 0x44 (0x4)
	BOOL bClientHasAuthority :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct USpecialMoveDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct USpecialMoveDefinition_Data USpecialMoveDefinition;
};

// 0x54 
struct USpecialMoveExpressionList_Data {
	// Last Offset: 0x48
	struct TArray_FSMExpressionList SpecialMoveList; // 0x48 (0xC)
};

struct USpecialMoveExpressionList {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct USpecialMoveDefinition_Data USpecialMoveDefinition;
	struct USpecialMoveExpressionList_Data USpecialMoveExpressionList;
};

// 0x54 
struct USpecialMoveRandom_Data {
	// Last Offset: 0x48
	struct TArray_FSMRandomPair RandomList; // 0x48 (0xC)
};

struct USpecialMoveRandom {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct USpecialMoveDefinition_Data USpecialMoveDefinition;
	struct USpecialMoveRandom_Data USpecialMoveRandom;
};

// 0x3C 
struct USpecialMoveInterface_Data {
	// Last Offset: 0x3C
};

struct USpecialMoveInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct USpecialMoveInterface_Data USpecialMoveInterface;
};

// 0x44 
struct UStateAttributeResolver_Data {
	// Last Offset: 0x3C
	struct FName NameKey; // 0x3C (0x8)
};

struct UStateAttributeResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UStateAttributeResolver_Data UStateAttributeResolver;
};

// 0x64 
struct UTimeValueResolver_Data {
	// Last Offset: 0x3C
	unsigned char TimeMode; // 0x3C (0x1) (Enum = ETimeValueResolverMode)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	BOOL bNormalizeTime :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FAttributeInitializationData StartTime; // 0x44 (0x10)
	struct FAttributeInitializationData TotalTime; // 0x54 (0x10)
};

struct UTimeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UTimeValueResolver_Data UTimeValueResolver;
};

// 0x18C 
struct AWireManager_Data {
	// Last Offset: 0x188
	struct UMaterialInterface* DefaultMaterial; // 0x188 (0x4)
};

struct AWireManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AWireManager_Data AWireManager;
};

// 0x1A8 
struct AWireTerminal_Data {
	// Last Offset: 0x190
	struct AWireTerminal* NextTerminal; // 0x190 (0x4)
	struct TArray_FWireLinkage Linkages; // 0x194 (0xC)
	struct UMaterialInterface* WireMaterial; // 0x1A0 (0x4)
	BOOL bTerminalDirty :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
};

struct AWireTerminal {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct AStaticMeshActor_Data AStaticMeshActor;
	struct AWireTerminal_Data AWireTerminal;
};

// 0x190 
struct AWiringActor_Data {
	// Last Offset: 0x190
};

struct AWiringActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct AStaticMeshActor_Data AStaticMeshActor;
	struct AWiringActor_Data AWiringActor;
};

// 0x370  (Alignment = 16)
struct UWiringMesh_Data {
	// Last Offset: 0x130
	const unsigned char Unknown1[0x240]; // 0x130 (0x240) MISSING END DATA
};

struct UWiringMesh {
	struct UObject_Data UObject;
	struct UStaticMesh_Data UStaticMesh;
	struct UWiringMesh_Data UWiringMesh;
};

// 0x3C 
struct UActionResource_Data {
	// Last Offset: 0x3C
};

struct UActionResource {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
};

// 0xA8 
struct UActionSequence_Data {
	// Last Offset: 0x3C
	struct TArray_UClassPtr ResourcesUsed; // 0x3C (0xC)
	struct URuleEngine* MyRuleEngine; // 0x48 (0x4)
	struct URule* AttachedRule; // 0x4C (0x4)
	float LatentFloat; // 0x50 (0x4)
	BOOL bInitialized :1 ; // 0x54 (0x4)
	BOOL bDoWorkFinished :1 ; // 0x54 (0x4)
	BOOL bInAtomicSection :1 ; // 0x54 (0x4)
	BOOL bDoNotLoadBalance :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	struct UActionSequence* ParentSequence; // 0x58 (0x4)
	struct UActionSequence* ChildSequence; // 0x5C (0x4)
	struct UAIFactoryBase* TheAIFactory; // 0x60 (0x4)
	struct FString ContextMenu; // 0x64 (0xC)
	float StoredDeltaTime; // 0x70 (0x4)
	struct TArray_FFlagDefinitionInitialization FlagValuesToSetOnBegin; // 0x74 (0xC)
	struct TArray_FFlagDefinitionInitialization FlagValuesToSetOnEnd; // 0x80 (0xC)
	struct FScriptInterface AI; // 0x8C (0x8)
	struct TArray_FName BehaviorOutputs; // 0x94 (0xC)
	struct FName BehaviorName; // 0xA0 (0x8)
};

struct UActionSequence {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
};

// 0xAC 
struct UActionSequenceList_Data {
	// Last Offset: 0xA8
	int CurrentIndex; // 0xA8 (0x4)
};

struct UActionSequenceList {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequenceList_Data UActionSequenceList;
};

// 0xB0 
struct UActionSequencePawn_Data {
	// Last Offset: 0xA8
	struct AGearboxMind* MyGearboxMind; // 0xA8 (0x4)
	struct AGearboxPawn* MyGearboxPawn; // 0xAC (0x4)
};

struct UActionSequencePawn {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
};

// 0x150 
struct UAction_PawnMovementBase_Data {
	// Last Offset: 0xB0
	struct FVector CachedSearchOrigin; // 0xB0 (0xC)
	struct FFlag CoverCheckThrottle; // 0xBC (0x10)
	float CoverCheckThrottleInterval; // 0xCC (0x4)
	BOOL ShouldRepeatNavSearch :1 ; // 0xD0 (0x4)
	BOOL Interrupted :1 ; // 0xD0 (0x4)
	BOOL GoToCover :1 ; // 0xD0 (0x4)
	BOOL UsePreciseArrival :1 ; // 0xD0 (0x4)
	const unsigned long: 0;
	struct FVector NewGoalLocation; // 0xD4 (0xC)
	struct UPawnMoveLocationRequest* OneMoveRequest; // 0xE0 (0x4)
	struct UClass* MoveRequestClass; // 0xE4 (0x4)
	struct TArray_FAttributeInitializationData AttributesToEvaluate; // 0xE8 (0xC)
	unsigned char AttributeEvalStyle; // 0xF4 (0x1) (Enum = EAttributeEvaluationStyle)
	unsigned char SearchRandomness; // 0xF5 (0x1) (Enum = ELocationSearchRandomness)
	unsigned char CoverSearchFilter; // 0xF6 (0x1) (Enum = ECoverSearchFilter)
	unsigned char CoverFailureResponse; // 0xF7 (0x1) (Enum = ECoverFailureBehavior)
	unsigned char RepathOption; // 0xF8 (0x1) (Enum = ERepathBehavior)
	const unsigned char Unknown1[0x3]; // 0xF9 (0x3) > LAST OFFSET
	struct USearchOrigin* SearchOrigin; // 0xFC (0x4)
	struct USearchDirection* DirectionFromOrigin; // 0x100 (0x4)
	float DirectionCone; // 0x104 (0x4)
	struct ULocationFilter* LocationFilterTest; // 0x108 (0x4)
	struct FAttributeInitializationData MinDistanceFromOrigin; // 0x10C (0x10)
	struct FAttributeInitializationData MaxDistanceFromOrigin; // 0x11C (0x10)
	struct FAttributeInitializationData OverrideDistanceForCover; // 0x12C (0x10)
	struct FAttributeInitializationData RepathDistanceThresh; // 0x13C (0x10)
	struct URuleEventDef* FailureEvent; // 0x14C (0x4)
};

struct UAction_PawnMovementBase {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_PawnMovementBase_Data UAction_PawnMovementBase;
};

// 0xB4 
struct UActionSequenceRandom_Data {
	// Last Offset: 0xA8
	struct TArray_FActionSequenceRandomData ActionList; // 0xA8 (0xC)
};

struct UActionSequenceRandom {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequenceRandom_Data UActionSequenceRandom;
};

// 0xEC 
struct UAIComponent_Data {
	// Last Offset: 0x5C
	float UpdateRate; // 0x5C (0x4)
	struct FScriptInterface AI; // 0x60 (0x8)
	BOOL bInitialized :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	struct UAIDefinition* AIDef; // 0x6C (0x4)
	float LastStateUpdateTime; // 0x70 (0x4)
	struct FPointer CurrentState; // 0x74 (0x4)
	struct TArray_FAIResourceData ResourceData; // 0x78 (0xC)
	struct AActor* CurrentTarget; // 0x84 (0x4)
	struct AActor* ScriptedTarget; // 0x88 (0x4)
	float LastTargetUpdateTime; // 0x8C (0x4)
	struct TArray_UMindTargetInfoPtr Targets; // 0x90 (0xC)
	struct UTargetingDefinition* TargetingDef; // 0x9C (0x4)
	struct UClass* MindTargetInfoClass; // 0xA0 (0x4)
	struct TArray_FAIHoldData Holds; // 0xA4 (0xC)
	struct TArray_FAIHoldData TargetHolds; // 0xB0 (0xC)
	struct TArray_FAIHoldData MovementHolds; // 0xBC (0xC)
	struct TArray_FAIHoldData DemigodHolds; // 0xC8 (0xC)
	struct TArray_FAIHoldData GodHolds; // 0xD4 (0xC)
	struct TArray_FAIHoldData DialogHolds; // 0xE0 (0xC)
};

struct UAIComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UAIComponent_Data UAIComponent;
};

// 0x44 
struct UAICostExpressionEvaluator_Data {
	// Last Offset: 0x3C
	int Multiplier; // 0x3C (0x4)
	struct UPopulationDefinition* PopDef; // 0x40 (0x4)
};

struct UAICostExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UAICostExpressionEvaluator_Data UAICostExpressionEvaluator;
};

// 0x88 
struct UAIFactoryBase_Data {
	// Last Offset: 0x3C
	struct TArray_FKnowledgeRecordStruct KnowledgeRecordList; // 0x3C (0xC)
	struct TArray_FRuleSetRecord RuleSets; // 0x48 (0xC)
	struct TArray_FRuleRecord Rules; // 0x54 (0xC)
	struct TArray_FActionSequenceRecord ActionSequences; // 0x60 (0xC)
	struct TArray_FTargetInfoRecord TargetRecords; // 0x6C (0xC)
	struct TArray_FAIDefinitionRecord AIDefinitionRecords; // 0x78 (0xC)
	float TimeStampedRecordLifetime; // 0x84 (0x4)
};

struct UAIFactoryBase {
	struct UObject_Data UObject;
	struct UAIFactoryBase_Data UAIFactoryBase;
};

// 0x88 
struct UGearboxAIFactory_Data {
	// Last Offset: 0x88
};

struct UGearboxAIFactory {
	struct UObject_Data UObject;
	struct UAIFactoryBase_Data UAIFactoryBase;
	struct UGearboxAIFactory_Data UGearboxAIFactory;
};

// 0x50 
struct UAIResource_Data {
	// Last Offset: 0x3C
	struct TArray_FAIResourceRestriction ResourceRestrictions; // 0x3C (0xC)
	int MaxUsers; // 0x48 (0x4)
	int MinUsers; // 0x4C (0x4)
};

struct UAIResource {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAIResource_Data UAIResource;
};

// 0x44 
struct UAIResourceExpressionEvaluator_Data {
	// Last Offset: 0x3C
	unsigned char Option; // 0x3C (0x1) (Enum = AIResourceOption)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	struct UAIResource* Resource; // 0x40 (0x4)
};

struct UAIResourceExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UAIResourceExpressionEvaluator_Data UAIResourceExpressionEvaluator;
};

// 0x44 
struct UAllegianceExpressionEvaluator_Data {
	// Last Offset: 0x3C
	unsigned char AllegianceCheck; // 0x3C (0x1) (Enum = EAllegianceExpression)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	struct UPawnAllegiance* Allegiance; // 0x40 (0x4)
};

struct UAllegianceExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UAllegianceExpressionEvaluator_Data UAllegianceExpressionEvaluator;
};

// 0x50 
struct UAwarenessZoneCollectionDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_UAwarenessZoneDefinitionPtr DefaultAwarenessZones; // 0x3C (0xC)
	struct FName CollectionName; // 0x48 (0x8)
};

struct UAwarenessZoneCollectionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAwarenessZoneCollectionDefinition_Data UAwarenessZoneCollectionDefinition;
};

// 0x6C 
struct UAwarenessZoneDefinition_Data {
	// Last Offset: 0x3C
	struct FString ZoneName; // 0x3C (0xC)
	BOOL OuterRimInfinitelyFarAway :1 ; // 0x48 (0x4)
	BOOL ViewConeOnlyUsedForUnknownTargets :1 ; // 0x48 (0x4)
	BOOL NeverForgetHiddenThreats :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float OuterRimDistance; // 0x4C (0x4)
	unsigned char ViewConeStyle; // 0x50 (0x1) (Enum = EViewConeStyle)
	unsigned char SpecialExposureBehavior; // 0x51 (0x1) (Enum = ESpecialExposureBehavior)
	unsigned char HearingBehavior; // 0x52 (0x1) (Enum = EHearingBehavior)
	const unsigned char Unknown1[0x1]; // 0x53 (0x1) > LAST OFFSET
	float ViewConeFieldOfViewInDegrees; // 0x54 (0x4)
	float MinExposureRatingConsideredVisible; // 0x58 (0x4)
	float ForgetHiddenThreatsAfterXSeconds; // 0x5C (0x4)
	float TargetSelectionPriority; // 0x60 (0x4)
	struct FColor ZoneColor; // 0x64 (0x4)
	float TimeFiringAtLastKnownLocation; // 0x68 (0x4)
};

struct UAwarenessZoneDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAwarenessZoneDefinition_Data UAwarenessZoneDefinition;
};

// 0x70 
struct UBehavior_SendGbxMessage_Data {
	// Last Offset: 0x4C
	struct UGbxMessageDefinition* MessageDefinition; // 0x4C (0x4)
	unsigned char AssignSenderTo; // 0x50 (0x1) (Enum = MessageBehaviorLogic)
	unsigned char AssignSubjectTo; // 0x51 (0x1) (Enum = MessageBehaviorLogic)
	unsigned char TakeLocationFrom; // 0x52 (0x1) (Enum = MessageBehaviorLogic)
	const unsigned char Unknown1[0x1]; // 0x53 (0x1) > LAST OFFSET
	struct FGbxMessageSimpleMetaData MetaData; // 0x54 (0x1C)
};

struct UBehavior_SendGbxMessage {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SendGbxMessage_Data UBehavior_SendGbxMessage;
};

// 0x58 
struct UBehavior_SetFlag_Data {
	// Last Offset: 0x4C
	struct TArray_FFlagDefinitionInitialization FlagsToSet; // 0x4C (0xC)
};

struct UBehavior_SetFlag {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SetFlag_Data UBehavior_SetFlag;
};

// 0x40 
struct UBestTargetAttributeContextResolver_Data {
	// Last Offset: 0x3C
	BOOL bGetTargetInfo :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct UBestTargetAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UBestTargetAttributeContextResolver_Data UBestTargetAttributeContextResolver;
};

// 0x48 
struct UCharacterClassMessageDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_FBehaviorTriggerMessageStruct BehaviorTriggers; // 0x3C (0xC)
};

struct UCharacterClassMessageDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UCharacterClassMessageDefinition_Data UCharacterClassMessageDefinition;
};

// 0x78 
struct UCoverSearchCriteria_Data {
	// Last Offset: 0x3C
	BOOL DoDistanceToOriginCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoProvidesCoverCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoDistanceToThreatCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoVantageToBestTargetCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoVantageToAnyTargetCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoAssignmentVolumeCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoBlacklistedCoverCandidateTest :1 ; // 0x3C (0x4)
	BOOL DoScoringForDistanceToOrigin :1 ; // 0x3C (0x4)
	BOOL DoScoringForDistanceToThreat :1 ; // 0x3C (0x4)
	BOOL DoScoringForProvidesCover :1 ; // 0x3C (0x4)
	BOOL DoScoringForVantageOnBestTarget :1 ; // 0x3C (0x4)
	BOOL DoScoringForVantageOnAnyTarget :1 ; // 0x3C (0x4)
	BOOL DoScoringForUnoccupiedLink :1 ; // 0x3C (0x4)
	BOOL DoScoringForNonBlacklistedCover :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float DistanceToOriginCandidateTestMax; // 0x40 (0x4)
	float DistanceToThreatCandidateTest; // 0x44 (0x4)
	float MinDistanceToOrigin; // 0x48 (0x4)
	float MaxDistanceToOrigin; // 0x4C (0x4)
	float ScoreDistanceToOrigin; // 0x50 (0x4)
	float MinDistanceToThreat; // 0x54 (0x4)
	float MaxDistanceToThreat; // 0x58 (0x4)
	float ScoreDistanceToThreat; // 0x5C (0x4)
	float MaxDistanceProvidesCover; // 0x60 (0x4)
	float ScoreProvidesCover; // 0x64 (0x4)
	float ScoreVantageOnBestTarget; // 0x68 (0x4)
	float ScoreVantageOnAnyTarget; // 0x6C (0x4)
	float ScoreUnoccupiedLink; // 0x70 (0x4)
	float ScoreNonBlacklistedCover; // 0x74 (0x4)
};

struct UCoverSearchCriteria {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UCoverSearchCriteria_Data UCoverSearchCriteria;
};

// 0x44 
struct UExposureUtilityBase_Data {
	// Last Offset: 0x3C
	BOOL ExposureEnabled :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct UExposureUtilityStrategy* ExposureStrategy; // 0x40 (0x4)
};

struct UExposureUtilityBase {
	struct UObject_Data UObject;
	struct UExposureUtilityBase_Data UExposureUtilityBase;
};

// 0x84 
struct UExposureUtilityBasicCaching_Data {
	// Last Offset: 0x44
	BOOL CachingEnabled :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	float MaxCacheTime; // 0x48 (0x4)
	float DistanceClose; // 0x4C (0x4)
	float DistanceMed; // 0x50 (0x4)
	float CacheFreshnessTimeClose; // 0x54 (0x4)
	float CacheFreshnessTimeMed; // 0x58 (0x4)
	float CacheFreshnessTimeFar; // 0x5C (0x4)
	float CacheFreshnessTimePlayer; // 0x60 (0x4)
	float CacheTimeFudgeFactorClose; // 0x64 (0x4)
	float CacheTimeFudgeFactorMed; // 0x68 (0x4)
	float CacheTimeFudgeFactorFar; // 0x6C (0x4)
	float HasMovedDistThreshold; // 0x70 (0x4)
	float HasMovedDistThresholdPlayer; // 0x74 (0x4)
	struct TArray_FExposureCacheStruct CachedExposures; // 0x78 (0xC)
};

struct UExposureUtilityBasicCaching {
	struct UObject_Data UObject;
	struct UExposureUtilityBase_Data UExposureUtilityBase;
	struct UExposureUtilityBasicCaching_Data UExposureUtilityBasicCaching;
};

// 0xCC 
struct UExposureUtilityFixedCost_Data {
	// Last Offset: 0x84
	float CloseDistanceSquared; // 0x84 (0x4)
	float MedDistanceSquared; // 0x88 (0x4)
	int MaxLineChecksPerFrame; // 0x8C (0x4)
	struct TArray_FBucketStruct Buckets; // 0x90 (0xC)
	float MedAccumulatedTime; // 0x9C (0x4)
	float FarAccumulatedTime; // 0xA0 (0x4)
	float SkipUpdateForTime; // 0xA4 (0x4)
	int MaxPointData; // 0xA8 (0x4)
	int PointLineChecks; // 0xAC (0x4)
	int PointMaxLineChecks; // 0xB0 (0x4)
	float PointFreshTime; // 0xB4 (0x4)
	float PointStaleTime; // 0xB8 (0x4)
	float PointMaxErrorSq; // 0xBC (0x4)
	struct TArray_FPointExposureData PointData; // 0xC0 (0xC)
};

struct UExposureUtilityFixedCost {
	struct UObject_Data UObject;
	struct UExposureUtilityBase_Data UExposureUtilityBase;
	struct UExposureUtilityBasicCaching_Data UExposureUtilityBasicCaching;
	struct UExposureUtilityFixedCost_Data UExposureUtilityFixedCost;
};

// 0x3C 
struct UExposureUtilityStrategy_Data {
	// Last Offset: 0x3C
};

struct UExposureUtilityStrategy {
	struct UObject_Data UObject;
	struct UExposureUtilityStrategy_Data UExposureUtilityStrategy;
};

// 0x48 
struct UFiringBehaviorDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_FConditionalPattern ConditionalPatterns; // 0x3C (0xC)
};

struct UFiringBehaviorDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UFiringBehaviorDefinition_Data UFiringBehaviorDefinition;
};

// 0x70 
struct UFiringBehaviorManager_Data {
	// Last Offset: 0x3C
	struct UFiringPattern* CurrentFiringPattern; // 0x3C (0x4)
	float CurrentTargetExposure; // 0x40 (0x4)
	int NumShotsThisBurst; // 0x44 (0x4)
	struct FVector CachedTargetPoint; // 0x48 (0xC)
	BOOL bHasTargetPoint :1 ; // 0x54 (0x4)
	BOOL bSetupWithZoneCollection :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	struct UFiringZoneCollectionDefinition* CurrentZoneCollection; // 0x58 (0x4)
	struct UFiringZoneDefinition* CurrentZone; // 0x5C (0x4)
	struct UFiringBehaviorDefinition* CurrentBehavior; // 0x60 (0x4)
	int CurrentConditionalPattern; // 0x64 (0x4)
	struct UFiringBehaviorDefinition* DefaultFiringBehaviorDefinition; // 0x68 (0x4)
	struct UFiringPattern* DefaultFiringPatternTemplate; // 0x6C (0x4)
};

struct UFiringBehaviorManager {
	struct UObject_Data UObject;
	struct UFiringBehaviorManager_Data UFiringBehaviorManager;
};

// 0x3C 
struct UFiringCondition_Data {
	// Last Offset: 0x3C
};

struct UFiringCondition {
	struct UObject_Data UObject;
	struct UFiringCondition_Data UFiringCondition;
};

// 0x3C 
struct UFireCond_IsPlayerTarget_Data {
	// Last Offset: 0x3C
};

struct UFireCond_IsPlayerTarget {
	struct UObject_Data UObject;
	struct UFiringCondition_Data UFiringCondition;
	struct UFireCond_IsPlayerTarget_Data UFireCond_IsPlayerTarget;
};

// 0x40 
struct UFiringPattern_Data {
	// Last Offset: 0x3C
	BOOL bIsHarmlessToPawns :1 ; // 0x3C (0x4)
	BOOL bAllowFakeShots :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct UFiringPattern {
	struct UObject_Data UObject;
	struct UFiringPattern_Data UFiringPattern;
};

// 0x45 
struct UFirePatt_Cone_Data {
	// Last Offset: 0x40
	float ConeDegrees; // 0x40 (0x4)
	unsigned char ShotSpreadType; // 0x44 (0x1) (Enum = EPointSpreadType)
};

struct UFirePatt_Cone {
	struct UObject_Data UObject;
	struct UFiringPattern_Data UFiringPattern;
	struct UFirePatt_Cone_Data UFirePatt_Cone;
};

// 0x59 
struct UFirePatt_ShrinkingCone_Data {
	// Last Offset: 0x40
	float CurrentAccuracyConeDeg; // 0x40 (0x4)
	struct FRotator LastDesiredAim; // 0x44 (0xC)
	float MaxAccuracyConeDeg; // 0x50 (0x4)
	float ConeMultiplierPerShot; // 0x54 (0x4)
	unsigned char ShotSpreadType; // 0x58 (0x1) (Enum = EPointSpreadType)
};

struct UFirePatt_ShrinkingCone {
	struct UObject_Data UObject;
	struct UFiringPattern_Data UFiringPattern;
	struct UFirePatt_ShrinkingCone_Data UFirePatt_ShrinkingCone;
};

// 0x68 
struct UFirePatt_StrafeOver_Data {
	// Last Offset: 0x40
	struct FRotator CurrentAimRotation; // 0x40 (0xC)
	float PitchDeltaPerShot; // 0x4C (0x4)
	float MaxYawDeltaPerShot; // 0x50 (0x4)
	float RefireRate; // 0x54 (0x4)
	float LineOfShotsSpeed; // 0x58 (0x4)
	float LineOfShotsEndZ; // 0x5C (0x4)
	float YawDeltaRatio; // 0x60 (0x4)
	float TargetPosition; // 0x64 (0x4)
};

struct UFirePatt_StrafeOver {
	struct UObject_Data UObject;
	struct UFiringPattern_Data UFiringPattern;
	struct UFirePatt_StrafeOver_Data UFirePatt_StrafeOver;
};

// 0x48 
struct UFiringZoneCollectionDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_UFiringZoneDefinitionPtr Zones; // 0x3C (0xC)
};

struct UFiringZoneCollectionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UFiringZoneCollectionDefinition_Data UFiringZoneCollectionDefinition;
};

// 0x58 
struct UFiringZoneDefinition_Data {
	// Last Offset: 0x3C
	struct FString ZoneName; // 0x3C (0xC)
	BOOL OuterRimInfinitelyFarAway :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float OuterRimDistance; // 0x4C (0x4)
	struct FColor ZoneColor; // 0x50 (0x4)
	struct UFiringBehaviorDefinition* FiringBehavior; // 0x54 (0x4)
};

struct UFiringZoneDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UFiringZoneDefinition_Data UFiringZoneDefinition;
};

// 0x50 
struct UFlagDefinition_Data {
	// Last Offset: 0x3C
	struct UExpressionEvaluator* EvaluationExpression; // 0x3C (0x4)
	struct TArray_UAttributeContextResolverPtr ContextResolverChain; // 0x40 (0xC)
	struct UFlagValueResolver* ValueResolver; // 0x4C (0x4)
};

struct UFlagDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UFlagDefinition_Data UFlagDefinition;
};

// 0x49 
struct UFlagExpressionEvaluator_Data {
	// Last Offset: 0x3C
	struct TArray_FFlagEvalConditional FlagChain; // 0x3C (0xC)
	unsigned char FlagChainOperator; // 0x48 (0x1) (Enum = ECExpressionOperatorType)
};

struct UFlagExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UFlagExpressionEvaluator_Data UFlagExpressionEvaluator;
};

// 0x3C 
struct UFlagValueResolver_Data {
	// Last Offset: 0x3C
};

struct UFlagValueResolver {
	struct UObject_Data UObject;
	struct UFlagValueResolver_Data UFlagValueResolver;
};

// 0x41 
struct UMultipleFlagValueResolver_Data {
	// Last Offset: 0x3C
	struct UFlagDefinition* FlagToLookUp; // 0x3C (0x4)
	unsigned char AggregationType; // 0x40 (0x1) (Enum = ValueResolveAggregationType)
};

struct UMultipleFlagValueResolver {
	struct UObject_Data UObject;
	struct UFlagValueResolver_Data UFlagValueResolver;
	struct UMultipleFlagValueResolver_Data UMultipleFlagValueResolver;
};

// 0x4C 
struct UObjectFunctionFlagValueResolver_Data {
	// Last Offset: 0x3C
	float CheckRate; // 0x3C (0x4)
	struct FString FunctionCall; // 0x40 (0xC)
};

struct UObjectFunctionFlagValueResolver {
	struct UObject_Data UObject;
	struct UFlagValueResolver_Data UFlagValueResolver;
	struct UObjectFunctionFlagValueResolver_Data UObjectFunctionFlagValueResolver;
};

// 0x44 
struct UObjectPropertyFlagValueResolver_Data {
	// Last Offset: 0x3C
	struct FName PropertyName; // 0x3C (0x8)
};

struct UObjectPropertyFlagValueResolver {
	struct UObject_Data UObject;
	struct UFlagValueResolver_Data UFlagValueResolver;
	struct UObjectPropertyFlagValueResolver_Data UObjectPropertyFlagValueResolver;
};

// 0x3C 
struct URuleEngineFlagValueResolver_Data {
	// Last Offset: 0x3C
};

struct URuleEngineFlagValueResolver {
	struct UObject_Data UObject;
	struct UFlagValueResolver_Data UFlagValueResolver;
	struct URuleEngineFlagValueResolver_Data URuleEngineFlagValueResolver;
};

// 0x114 
struct UGbxMessage_Data {
	// Last Offset: 0x3C
	struct UGbxMessageDefinition* Definition; // 0x3C (0x4)
	struct FName NameKey; // 0x40 (0x8)
	struct UObject* Sender; // 0x48 (0x4)
	struct UObject* Subject; // 0x4C (0x4)
	struct UObject* AdditionalData; // 0x50 (0x4)
	struct FGbxMessageSimpleMetaData SimpleMetaData; // 0x54 (0x1C)
	struct FGbxMessageSimpleMetaData SimpleMetaData2; // 0x70 (0x1C)
	struct FGbxMessageSimpleMetaData SimpleMetaData3; // 0x8C (0x1C)
	struct FGbxMessageSimpleMetaData SimpleMetaData4; // 0xA8 (0x1C)
	struct UPawnAllegiance* SenderAllegiance; // 0xC4 (0x4)
	struct UPawnAllegiance* SubjectAllegiance; // 0xC8 (0x4)
	BOOL IntendedForAllies :1 ; // 0xCC (0x4)
	BOOL IntendedForEnemies :1 ; // 0xCC (0x4)
	BOOL HasLocation :1 ; // 0xCC (0x4)
	BOOL HasRadius :1 ; // 0xCC (0x4)
	BOOL SendRepeatedly :1 ; // 0xCC (0x4)
	const unsigned long: 0;
	struct FVector MessageLocation; // 0xD0 (0xC)
	float BroadcastRadius; // 0xDC (0x4)
	float DeliverTime; // 0xE0 (0x4)
	float TimePosted; // 0xE4 (0x4)
	float TimeSent; // 0xE8 (0x4)
	struct FFlag DoNotSendRightNow; // 0xEC (0x10)
	int StopSendingAfterXReceptions; // 0xFC (0x4)
	float MaxDurationToSend; // 0x100 (0x4)
	float TimeBetweenSends; // 0x104 (0x4)
	struct TArray_unsigned_char DupeCriteria; // 0x108 (0xC)
};

struct UGbxMessage {
	struct UObject_Data UObject;
	struct UGbxMessage_Data UGbxMessage;
};

// 0x70 
struct UGbxMessageDefinition_Data {
	// Last Offset: 0x3C
	struct FName NameKey; // 0x3C (0x8)
	BOOL HasLocation :1 ; // 0x44 (0x4)
	BOOL HasRadius :1 ; // 0x44 (0x4)
	BOOL TakeLocationFromSender :1 ; // 0x44 (0x4)
	BOOL IntendedForAllies :1 ; // 0x44 (0x4)
	BOOL IntendedForEnemies :1 ; // 0x44 (0x4)
	BOOL AllowRepeatSends :1 ; // 0x44 (0x4)
	BOOL LimitedReception :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	struct FAttributeInitializationData Radius; // 0x48 (0x10)
	float SecondsBetweenSends; // 0x58 (0x4)
	float MaxTimeToKeepSending; // 0x5C (0x4)
	struct TArray_unsigned_char DupeCriteria; // 0x60 (0xC)
	int MaxRecipients; // 0x6C (0x4)
};

struct UGbxMessageDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGbxMessageDefinition_Data UGbxMessageDefinition;
};

// 0x6C 
struct UGbxMessageManager_Data {
	// Last Offset: 0x3C
	struct TArray_FScriptInterface Listeners; // 0x3C (0xC)
	struct TArray_UGbxMessagePtr MessagesToSend; // 0x48 (0xC)
	struct FFlag SentMessagesRecently; // 0x54 (0x10)
	float DistributionInterval; // 0x64 (0x4)
	int MaxMessagesPerDistribution; // 0x68 (0x4)
};

struct UGbxMessageManager {
	struct UObject_Data UObject;
	struct UGbxMessageManager_Data UGbxMessageManager;
};

// 0x768 
struct AGearboxMind_Data {
	// Last Offset: 0x684
	struct FPointer VfTable_IIRuleEngineOwner; // 0x684 (0x4)
	struct FPointer VfTable_IINounAttributeProvider; // 0x688 (0x4)
	struct FPointer VfTable_IIFlagProvider; // 0x68C (0x4)
	struct FPointer VfTable_IIAIInterface; // 0x690 (0x4)
	BOOL bDisabledDueToPopulationIrrelevance :1 ; // 0x694 (0x4)
	BOOL bWantsToWalk :1 ; // 0x694 (0x4)
	const unsigned long: 0;
	struct UGearboxRuleEngine* MyRuleEngine; // 0x698 (0x4)
	struct UGearboxRuleEngine* RuleEngineTemplate; // 0x69C (0x4)
	struct AGearboxPawn* MyGearboxPawn; // 0x6A0 (0x4)
	unsigned char FacingPolicy; // 0x6A4 (0x1) (Enum = EFacingPolicy)
	unsigned char AtLeastOneKnownThreat; // 0x6A5 (0x1)
	unsigned char NewEnemyAwarenessReason; // 0x6A6 (0x1) (Enum = AwarenessReason)
	unsigned char DebugMoveFinishedReason; // 0x6A7 (0x1) (Enum = EMovementFinishedCause)
	struct AActor* FacingActor; // 0x6A8 (0x4)
	struct FVector FacingVector; // 0x6AC (0xC)
	float DotProductToFacingPolicy; // 0x6B8 (0x4)
	float DotProductToCurrentEnemy; // 0x6BC (0x4)
	struct FName MostRecentNewEnemyName; // 0x6C0 (0x8)
	struct FName MostRecentNewEnemyArchName; // 0x6C8 (0x8)
	struct UAwarenessZoneCollectionDefinition* DefaultAwarenessZoneCollection; // 0x6D0 (0x4)
	struct UAwarenessZoneCollectionDefinition* CurrentAwarenessZoneCollection; // 0x6D4 (0x4)
	struct UAwarenessZoneDefinition* CurrentAwarenessZone; // 0x6D8 (0x4)
	struct UCoverSearchCriteria* DefaultCoverSearchCriteria; // 0x6DC (0x4)
	struct TArray_FVector FailedMoveSpots; // 0x6E0 (0xC)
	struct TArray_FNounAttributeState NounState; // 0x6EC (0xC)
	struct FVector HomeLocation; // 0x6F8 (0xC)
	int PopulationOpportunityIndex; // 0x704 (0x4)
	struct UClass* MindTargetInfoClass; // 0x708 (0x4)
	struct UAITracker* MyTracker; // 0x70C (0x4)
	struct TArray_UFlagDefinitionPtr DynamicFlagDefinitions; // 0x710 (0xC)
	struct TArray_FDynamicFlagInstanceData DynamicFlags; // 0x71C (0xC)
	const unsigned char Unknown1[0x3C]; // 0x728 (0x3C) UNKNOWN PROPERTY
	struct UAIComponent* AIComponent; // 0x764 (0x4)
};

struct AGearboxMind {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct AAIController_Data AAIController;
	struct AGearboxAIController_Data AGearboxAIController;
	struct AGearboxMind_Data AGearboxMind;
};

// 0x210  (Alignment = 16)
struct UGearboxAIMoveNodeRenderComponent_Data {
	// Last Offset: 0x210
};

struct UGearboxAIMoveNodeRenderComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UGearboxAIMoveNodeRenderComponent_Data UGearboxAIMoveNodeRenderComponent;
};

// 0xF4 
struct UGearboxCoverStateManager_Data {
	// Last Offset: 0x3C
	struct AGearboxPawn* MyGearboxPawn; // 0x3C (0x4)
	struct FGearboxCoverState DesiredCoverState; // 0x40 (0xC)
	struct FGearboxCoverState CurrentCoverState; // 0x4C (0xC)
	struct FGearboxCoverTransition DesiredCoverTransition; // 0x58 (0x4)
	struct FGearboxCoverTransition CurrentCoverTransition; // 0x5C (0x4)
	struct FCoverSpotInfo DesiredCoverInfo; // 0x60 (0x18)
	struct FCoverSpotInfo CurrentCoverInfo; // 0x78 (0x18)
	struct FCoverSpotInfo LastCoverInfo; // 0x90 (0x18)
	BOOL PawnCrouchedPriorToMount :1 ; // 0xA8 (0x4)
	BOOL CoverDebugSearchWasFinalized :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
	float CoverDebugInnerRadius; // 0xAC (0x4)
	float CoverDebugOuterRadius; // 0xB0 (0x4)
	float CoverDebugSearchAngle; // 0xB4 (0x4)
	struct FVector CoverDebugSearchDirection; // 0xB8 (0xC)
	struct FSmartVector CoverDebugSearchOrigin; // 0xC4 (0x1C)
	struct TArray_FCoverDebugPriority CoverDebugList; // 0xE0 (0xC)
	float HorizontalCoverAngleDegrees; // 0xEC (0x4)
	float VerticalCoverAngleDegrees; // 0xF0 (0x4)
};

struct UGearboxCoverStateManager {
	struct UObject_Data UObject;
	struct UGearboxCoverStateManager_Data UGearboxCoverStateManager;
};

// 0x3C 
struct UGearboxMindAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UGearboxMindAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UGearboxMindAttributeContextResolver_Data UGearboxMindAttributeContextResolver;
};

// 0x2A0 
struct UGearboxNavigationHandle_Data {
	// Last Offset: 0x180
	unsigned char DesiredMovementSpeed; // 0x180 (0x1) (Enum = EMovementSpeed)
	unsigned char ActiveSpecialNavMeshMove; // 0x181 (0x1) (Enum = GBXNavMeshSpecialMoveType)
	const unsigned char Unknown1[0x2]; // 0x182 (0x2) > LAST OFFSET
	BOOL bFollowingPath :1 ; // 0x184 (0x4)
	BOOL bReachedDestination :1 ; // 0x184 (0x4)
	BOOL bSpecialMovementFinished :1 ; // 0x184 (0x4)
	BOOL bClearPathAfterSpecialMove :1 ; // 0x184 (0x4)
	const unsigned long: 0;
	struct FBasedPosition CurrentGoal; // 0x188 (0x34)
	struct FPathFindData CurrentPath; // 0x1BC (0x58)
	struct FGBXNavMeshPolyRef Anchor; // 0x214 (0x8)
	struct FGBXNavMeshPolyRef LastValidAnchor; // 0x21C (0x8)
	struct FBasedPosition LastAnchorPosition; // 0x224 (0x34)
	struct FVector LastAnchorDelta; // 0x258 (0xC)
	float NextPathObjectDistance; // 0x264 (0x4)
	struct FVector CurrentGoalStartLoc; // 0x268 (0xC)
	struct FRotator DesiredLookDirection; // 0x274 (0xC)
	struct FRotator LookDirection; // 0x280 (0xC)
	struct UGBXNavMeshPathFinder* PathFinder; // 0x28C (0x4)
	float NearPathCheckDist; // 0x290 (0x4)
	float NearPathCheckDistMin; // 0x294 (0x4)
	float NearPathCheckDistMax; // 0x298 (0x4)
	float NearPathCheckDistRate; // 0x29C (0x4)
};

struct UGearboxNavigationHandle {
	struct UObject_Data UObject;
	struct UNavigationHandle_Data UNavigationHandle;
	struct UGearboxNavigationHandle_Data UGearboxNavigationHandle;
};

// 0x3C 
struct UIFlagProvider_Data {
	// Last Offset: 0x3C
};

struct UIFlagProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIFlagProvider_Data UIFlagProvider;
};

// 0x3C 
struct UIFlagProviderGroup_Data {
	// Last Offset: 0x3C
};

struct UIFlagProviderGroup {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIFlagProviderGroup_Data UIFlagProviderGroup;
};

// 0x3C 
struct UIGbxMessageListener_Data {
	// Last Offset: 0x3C
};

struct UIGbxMessageListener {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGbxMessageListener_Data UIGbxMessageListener;
};

// 0x3C 
struct UIRuleEngineOwner_Data {
	// Last Offset: 0x3C
};

struct UIRuleEngineOwner {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIRuleEngineOwner_Data UIRuleEngineOwner;
};

// 0x58 
struct UKnowledgeRecord_Data {
	// Last Offset: 0x3C
	struct UAIFactoryBase* TheAIFactory; // 0x3C (0x4)
	struct FName TheName; // 0x40 (0x8)
	unsigned char KCategory; // 0x48 (0x1) (Enum = KDBCategory)
	unsigned char EvalType; // 0x49 (0x1) (Enum = KDBEvalType)
	unsigned char Active; // 0x4A (0x1)
	unsigned char Marked; // 0x4B (0x1)
	float Frequency; // 0x4C (0x4)
	float NextUpdateTime; // 0x50 (0x4)
	int FlagIndex; // 0x54 (0x4)
};

struct UKnowledgeRecord {
	struct UObject_Data UObject;
	struct UKnowledgeRecord_Data UKnowledgeRecord;
};

// 0x3C 
struct ULocationFilter_Data {
	// Last Offset: 0x3C
};

struct ULocationFilter {
	struct UObject_Data UObject;
	struct ULocationFilter_Data ULocationFilter;
};

// 0x3C 
struct ULocationFilter_MustHaveLOS_Data {
	// Last Offset: 0x3C
};

struct ULocationFilter_MustHaveLOS {
	struct UObject_Data UObject;
	struct ULocationFilter_Data ULocationFilter;
	struct ULocationFilter_MustHaveLOS_Data ULocationFilter_MustHaveLOS;
};

// 0x3C 
struct ULocationFilter_MustNotHaveLOS_Data {
	// Last Offset: 0x3C
};

struct ULocationFilter_MustNotHaveLOS {
	struct UObject_Data UObject;
	struct ULocationFilter_Data ULocationFilter;
	struct ULocationFilter_MustNotHaveLOS_Data ULocationFilter_MustNotHaveLOS;
};

// 0xD8 
struct UMindTargetInfo_Data {
	// Last Offset: 0x3C
	struct AActor* Target; // 0x3C (0x4)
	float Distance; // 0x40 (0x4)
	BOOL bShouldRemove :1 ; // 0x44 (0x4)
	BOOL bCanSeeOrHearTarget :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	unsigned char bCanFireAt; // 0x48 (0x1)
	const unsigned char Unknown1[0x3]; // 0x49 (0x3) > LAST OFFSET
	float Priority; // 0x4C (0x4)
	float OnePriority; // 0x50 (0x4)
	float TargetExposureToMe; // 0x54 (0x4)
	float MyExposureToTarget; // 0x58 (0x4)
	struct TArray_FHitTargetRecord HitTargetHistory; // 0x5C (0xC)
	struct TArray_FPriorityDebugStruct PriorityDebugRecords; // 0x68 (0xC)
	struct FFlag IAmConsciousOfTarget; // 0x74 (0x10)
	float IAmConsciousTime; // 0x84 (0x4)
	struct FFlag TargetHasShotAtMeRecently; // 0x88 (0x10)
	struct FFlag TargetOccludedBySmoke; // 0x98 (0x10)
	struct FFlag IHaveSeenOrKnownThisTargetBefore; // 0xA8 (0x10)
	struct FSmartVector LastVisibleOrAudibleLocation; // 0xB8 (0x1C)
	float BonusPriority; // 0xD4 (0x4)
};

struct UMindTargetInfo {
	struct UObject_Data UObject;
	struct UMindTargetInfo_Data UMindTargetInfo;
};

// 0xFC 
struct URule_Data {
	// Last Offset: 0x3C
	struct URuleEngine* MyRuleEngine; // 0x3C (0x4)
	int Priority; // 0x40 (0x4)
	int BasePriority; // 0x44 (0x4)
	struct UActionSequence* StartingSequenceTemplate; // 0x48 (0x4)
	BOOL RuleEnabled :1 ; // 0x4C (0x4)
	BOOL StopWhenStateCodeRunsOut :1 ; // 0x4C (0x4)
	BOOL AlwaysExecute :1 ; // 0x4C (0x4)
	BOOL bInitialized :1 ; // 0x4C (0x4)
	BOOL bIsRunning :1 ; // 0x4C (0x4)
	BOOL bCanRunMultipleInstances :1 ; // 0x4C (0x4)
	BOOL bIsTransferable :1 ; // 0x4C (0x4)
	BOOL bRestartable :1 ; // 0x4C (0x4)
	BOOL bBlockRuleSetChange :1 ; // 0x4C (0x4)
	BOOL WasTransferred :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	unsigned char ExecutionPattern; // 0x50 (0x1) (Enum = ExecutionPatternType)
	const unsigned char Unknown1[0x3]; // 0x51 (0x3) > LAST OFFSET
	struct FAttributeInitializationData TimeToWaitBeforeFirstExecution; // 0x54 (0x10)
	struct FAttributeInitializationData TimeToWaitBeforeNextExecution; // 0x64 (0x10)
	struct FAttributeInitializationData MaxTimeToExecute; // 0x74 (0x10)
	int MaxNumberOfExecutions; // 0x84 (0x4)
	struct TArray_FFlagEvalORConnector CanExecuteConditionals; // 0x88 (0xC)
	struct TArray_FFlagEvalORConnector ShouldStopConditionals; // 0x94 (0xC)
	struct UExpressionEvaluator* CanExecuteExpression; // 0xA0 (0x4)
	struct UExpressionEvaluator* ShouldStopExpression; // 0xA4 (0x4)
	struct UActionSequence* MyActionSequence; // 0xA8 (0x4)
	struct UAIFactoryBase* TheAIFactory; // 0xAC (0x4)
	struct URuleEventDef* MyRuleEventDef; // 0xB0 (0x4)
	struct TArray_UClassPtr AssociatedKnowledgeRecords; // 0xB4 (0xC)
	struct FString FlagDebugString; // 0xC0 (0xC)
	struct FName RuleName; // 0xCC (0x8)
	struct UObject* OtherEventParticipantObject; // 0xD4 (0x4)
	struct FFlag IsTimingRestrictedNow; // 0xD8 (0x10)
	int NumExecutions; // 0xE8 (0x4)
	struct FString RuleEventDefPath; // 0xEC (0xC)
	float StartExecutionTimeStamp; // 0xF8 (0x4)
};

struct URule {
	struct UObject_Data UObject;
	struct URule_Data URule;
};

// 0x108 
struct URuleContainer_Data {
	// Last Offset: 0xFC
	struct URuleSet* RuleSetTemplate; // 0xFC (0x4)
	struct URuleSet* CurRuleSet; // 0x100 (0x4)
	BOOL AllowAllEventsThrough :1 ; // 0x104 (0x4)
	const unsigned long: 0;
};

struct URuleContainer {
	struct UObject_Data UObject;
	struct URule_Data URule;
	struct URuleContainer_Data URuleContainer;
};

// 0xFC 
struct URulePlaceholder_Data {
	// Last Offset: 0xFC
};

struct URulePlaceholder {
	struct UObject_Data UObject;
	struct URule_Data URule;
	struct URulePlaceholder_Data URulePlaceholder;
};

// 0x138 
struct URuleEngine_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IIFlagProvider; // 0x3C (0x4)
	struct UAIFactoryBase* TheAIFactory; // 0x40 (0x4)
	struct AActor* ActorProxy; // 0x44 (0x4)
	float ThinkRate; // 0x48 (0x4)
	float ElapsedTime; // 0x4C (0x4)
	float TickRate; // 0x50 (0x4)
	struct URuleSet* RuleSetTemplate; // 0x54 (0x4)
	struct URuleSet* CurRuleSet; // 0x58 (0x4)
	struct URuleSet* PendingRuleSetTemplate; // 0x5C (0x4)
	struct TArray_FFlagDefinitionInitialization FlagInitialization; // 0x60 (0xC)
	struct TArray_UFlagDefinitionPtr DynamicFlagDefinitions; // 0x6C (0xC)
	struct TArray_FDynamicFlagInstanceData DynamicFlags; // 0x78 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x84 (0x3C) UNKNOWN PROPERTY
	struct TArray_UKnowledgeRecordPtr KnowledgeDB; // 0xC0 (0xC)
	struct TArray_URulePtr RunningRules; // 0xCC (0xC)
	struct TArray_UClassPtr ResourcesInUse; // 0xD8 (0xC)
	BOOL bRulesEnabled :1 ; // 0xE4 (0x4)
	BOOL bHasDebugFocus :1 ; // 0xE4 (0x4)
	BOOL bVerboseLoggingEnabled :1 ; // 0xE4 (0x4)
	BOOL bInitialized :1 ; // 0xE4 (0x4)
	BOOL DoLoadBalancing :1 ; // 0xE4 (0x4)
	BOOL bForceFullUpdate :1 ; // 0xE4 (0x4)
	BOOL OnlyIterateRulesForEvents :1 ; // 0xE4 (0x4)
	BOOL bEventsCausedKnowledgeRecordUpdate :1 ; // 0xE4 (0x4)
	BOOL EnableSnapshots :1 ; // 0xE4 (0x4)
	const unsigned long: 0;
	struct UAITracker* MyTracker; // 0xE8 (0x4)
	struct TArray_URuleSetPtr RuleSetStack; // 0xEC (0xC)
	struct TArray_FEventRecord QueuedRuleEvents; // 0xF8 (0xC)
	float LastFullUpdateTime; // 0x104 (0x4)
	int MaxRuleSetPasses; // 0x108 (0x4)
	struct TArray_UClassPtr KRCache; // 0x10C (0xC)
	float LastTargetIteratorTime; // 0x118 (0x4)
	float LastTargetIteratorRuleEvalDiffTime; // 0x11C (0x4)
	float AverageTargetIteratorRuleEvalDiffTime; // 0x120 (0x4)
	float WorstTargetIteratorRuleEvalDiffTime; // 0x124 (0x4)
	float ActivateTime; // 0x128 (0x4)
	struct TArray_FRuleSetReference RuleSetReferences; // 0x12C (0xC)
};

struct URuleEngine {
	struct UObject_Data UObject;
	struct URuleEngine_Data URuleEngine;
};

// 0x140 
struct UGearboxRuleEngine_Data {
	// Last Offset: 0x138
	struct AGearboxPawn* MyGearboxPawn; // 0x138 (0x4)
	struct AGearboxMind* MyGearboxMind; // 0x13C (0x4)
};

struct UGearboxRuleEngine {
	struct UObject_Data UObject;
	struct URuleEngine_Data URuleEngine;
	struct UGearboxRuleEngine_Data UGearboxRuleEngine;
};

// 0x6C 
struct URuleEventDef_Data {
	// Last Offset: 0x3C
	struct FName EventDefName; // 0x3C (0x8)
	struct FFlagDefinitionInitialization FlagActionOnEventTrigger; // 0x44 (0x28)
};

struct URuleEventDef {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct URuleEventDef_Data URuleEventDef;
};

// 0x94 
struct URuleSet_Data {
	// Last Offset: 0x3C
	struct UAIFactoryBase* TheAIFactory; // 0x3C (0x4)
	struct TArray_URulePtr RuleTemplateRefs; // 0x40 (0xC)
	struct TArray_URulePtr Rules; // 0x4C (0xC)
	struct TArray_URulePlaceholderPtr ToDiscard; // 0x58 (0xC)
	BOOL bInitialized :1 ; // 0x64 (0x4)
	BOOL bNewRuleEvaluationEnabled :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	struct FName RuleSetName; // 0x68 (0x8)
	struct TArray_FFlagDefinitionInitialization FlagsOnEntry; // 0x70 (0xC)
	struct TArray_FFlagDefinitionInitialization FlagsOnExit; // 0x7C (0xC)
	struct TArray_URuleSetPtr HACK_RuleSetsAllowedToFollow; // 0x88 (0xC)
};

struct URuleSet {
	struct UObject_Data UObject;
	struct URuleSet_Data URuleSet;
};

// 0xB0 
struct UStateRuleSet_Data {
	// Last Offset: 0x94
	struct TArray_URulePtr StateRules; // 0x94 (0xC)
	BOOL bShowPawnInRadarWhenActive :1 ; // 0xA0 (0x4)
	const unsigned long: 0;
	struct TArray_FStateAttributeData StateAttributeMap; // 0xA4 (0xC)
};

struct UStateRuleSet {
	struct UObject_Data UObject;
	struct URuleSet_Data URuleSet;
	struct UStateRuleSet_Data UStateRuleSet;
};

// 0x3C 
struct USearchDirection_Data {
	// Last Offset: 0x3C
};

struct USearchDirection {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
};

// 0x3C 
struct USearchDirection_Any_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_Any {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_Any_Data USearchDirection_Any;
};

// 0x3C 
struct USearchDirection_AwayFromMe_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_AwayFromMe {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_AwayFromMe_Data USearchDirection_AwayFromMe;
};

// 0x3C 
struct USearchDirection_AwayFromTarget_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_AwayFromTarget {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_AwayFromTarget_Data USearchDirection_AwayFromTarget;
};

// 0x3C 
struct USearchDirection_MyFacingDirection_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_MyFacingDirection {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_MyFacingDirection_Data USearchDirection_MyFacingDirection;
};

// 0x3C 
struct USearchDirection_OppositeMyFacingDirection_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_OppositeMyFacingDirection {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_OppositeMyFacingDirection_Data USearchDirection_OppositeMyFacingDirection;
};

// 0x3C 
struct USearchDirection_OppositeTargetsFacingDirection_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_OppositeTargetsFacingDirection {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_OppositeTargetsFacingDirection_Data USearchDirection_OppositeTargetsFacingDirection;
};

// 0x3C 
struct USearchDirection_RandomLeftOrRight_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_RandomLeftOrRight {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_RandomLeftOrRight_Data USearchDirection_RandomLeftOrRight;
};

// 0x3C 
struct USearchDirection_TargetsFacingDirection_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_TargetsFacingDirection {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_TargetsFacingDirection_Data USearchDirection_TargetsFacingDirection;
};

// 0x3C 
struct USearchDirection_ToMyLeft_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_ToMyLeft {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_ToMyLeft_Data USearchDirection_ToMyLeft;
};

// 0x3C 
struct USearchDirection_ToMyRight_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_ToMyRight {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_ToMyRight_Data USearchDirection_ToMyRight;
};

// 0x3C 
struct USearchDirection_TowardMe_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_TowardMe {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_TowardMe_Data USearchDirection_TowardMe;
};

// 0x3C 
struct USearchDirection_TowardTarget_Data {
	// Last Offset: 0x3C
};

struct USearchDirection_TowardTarget {
	struct UObject_Data UObject;
	struct USearchDirection_Data USearchDirection;
	struct USearchDirection_TowardTarget_Data USearchDirection_TowardTarget;
};

// 0x3C 
struct USearchOrigin_Data {
	// Last Offset: 0x3C
};

struct USearchOrigin {
	struct UObject_Data UObject;
	struct USearchOrigin_Data USearchOrigin;
};

// 0x3C 
struct USearchOrigin_CurrentLocation_Data {
	// Last Offset: 0x3C
};

struct USearchOrigin_CurrentLocation {
	struct UObject_Data UObject;
	struct USearchOrigin_Data USearchOrigin;
	struct USearchOrigin_CurrentLocation_Data USearchOrigin_CurrentLocation;
};

// 0x3C 
struct USearchOrigin_ScriptedMoveTarget_Data {
	// Last Offset: 0x3C
};

struct USearchOrigin_ScriptedMoveTarget {
	struct UObject_Data UObject;
	struct USearchOrigin_Data USearchOrigin;
	struct USearchOrigin_ScriptedMoveTarget_Data USearchOrigin_ScriptedMoveTarget;
};

// 0x3C 
struct USearchOrigin_TargetLocation_Data {
	// Last Offset: 0x3C
};

struct USearchOrigin_TargetLocation {
	struct UObject_Data UObject;
	struct USearchOrigin_Data USearchOrigin;
	struct USearchOrigin_TargetLocation_Data USearchOrigin_TargetLocation;
};

// 0xD00 
struct USnapshotRecord_Data {
	// Last Offset: 0x40
	struct FName MyName; // 0x40 (0x8)
	struct FName RuleSet; // 0x48 (0x8)
	struct TArray_FRuleInfo CurrentRules; // 0x50 (0xC)
	struct FRuleInfo ContainedRules[45]; // 0x5C (0xBF4)
	int SelectedRuleIdx; // 0xC50 (0x4)
	int SelectedSubRuleIdx; // 0xC54 (0x4)
	struct TArray_FName ResourcesInUse; // 0xC58 (0xC)
	struct TArray_FName Flags; // 0xC64 (0xC)
	struct FVector Location; // 0xC70 (0xC)
	struct FVector Velocity; // 0xC7C (0xC)
	struct FRotator Rotation; // 0xC88 (0xC)
	struct FName RuleAffected; // 0xC94 (0x8)
	struct FName Rule2Affected; // 0xC9C (0x8)
	struct FName SequenceAffected; // 0xCA4 (0x8)
	struct FName Sequence2Affected; // 0xCAC (0x8)
	unsigned char Event; // 0xCB4 (0x1) (Enum = ESnapshotEventType)
	const unsigned char Unknown1[0x3]; // 0xCB5 (0x3) > LAST OFFSET
	struct FName RuleStartName; // 0xCB8 (0x8)
	struct FName RuleEndName; // 0xCC0 (0x8)
	struct FName RuleInterruptName; // 0xCC8 (0x8)
	struct FName ChildSequenceStartName; // 0xCD0 (0x8)
	struct FName SwitchRuleSetName; // 0xCD8 (0x8)
	struct FName PreventNewRulesName; // 0xCE0 (0x8)
	struct FColor RunningRulesColor; // 0xCE8 (0x4)
	struct FColor StalledRulesColor; // 0xCEC (0x4)
	struct FColor NotRunningRulesColor; // 0xCF0 (0x4)
	struct FColor DisabledRulesColor; // 0xCF4 (0x4)
	struct FColor FlagsColor; // 0xCF8 (0x4)
	struct FColor ResourcesColor; // 0xCFC (0x4)
};

struct USnapshotRecord {
	struct UObject_Data UObject;
	struct USnapshotInterface_Data USnapshotInterface;
	struct USnapshotRecord_Data USnapshotRecord;
};

// 0xFCC 
struct UGearboxPawnSnapshotRecord_Data {
	// Last Offset: 0xD00
	float PawnIconZOffset; // 0xD00 (0x4)
	float PawnExposureZOffset; // 0xD04 (0x4)
	float CollectionNameOffset; // 0xD08 (0x4)
	struct FColor LastVisibleConnectionColor; // 0xD0C (0x4)
	struct FColor RouteColor; // 0xD10 (0x4)
	struct FColor OriginalRouteColor; // 0xD14 (0x4)
	struct FColor DestLineColor; // 0xD18 (0x4)
	struct FColor BestCoverColor; // 0xD1C (0x4)
	struct FColor PotentialCoverColor; // 0xD20 (0x4)
	struct FColor StandardCoverColor; // 0xD24 (0x4)
	struct UTexture2D* AIDebugTexture; // 0xD28 (0x4)
	struct FName MyPawnName; // 0xD2C (0x8)
	struct FName MyArchetypeName; // 0xD34 (0x8)
	float CurrentHealth; // 0xD3C (0x4)
	float MaxHealth; // 0xD40 (0x4)
	float DistanceToBestTarget; // 0xD44 (0x4)
	struct TArray_FAwarenessInfo AwarenessZones; // 0xD48 (0xC)
	struct FName AwarenessCollectionName; // 0xD54 (0x8)
	struct AActor* BestTarget; // 0xD5C (0x4)
	struct TArray_FLocationInfo TargetLocs; // 0xD60 (0xC)
	struct TArray_FLastVisibleInfo LastVisibleTargetLocs; // 0xD6C (0xC)
	struct FName AnimTree; // 0xD78 (0x8)
	struct TArray_FBoneAtom Bones; // 0xD80 (0xC)
	struct TArray_FLocationInfo ForgottenTargets; // 0xD8C (0xC)
	struct FName NewEnemyName; // 0xD98 (0x8)
	struct FName NewEnemyArchName; // 0xDA0 (0x8)
	unsigned char NewEnemyAwarenessReason; // 0xDA8 (0x1) (Enum = AwarenessReason)
	unsigned char CurrentMoveSpeed; // 0xDA9 (0x1) (Enum = EMovementSpeed)
	unsigned char MaxDesiredMoveSpeed; // 0xDAA (0x1) (Enum = EMovementSpeed)
	unsigned char ReasonForMovementFinish; // 0xDAB (0x1) (Enum = EMovementFinishedCause)
	struct TArray_FDebugExposure Exposure; // 0xDAC (0xC)
	struct USkeletalMesh* DummyMesh; // 0xDB8 (0x4)
	int DummyMesh_LOD; // 0xDBC (0x4)
	struct TArray_FViewConeInfo TargetViewCones; // 0xDC0 (0xC)
	struct FVector PawnLocalDestination; // 0xDCC (0xC)
	struct TArray_FVector FailedMoveSpots; // 0xDD8 (0xC)
	struct TArray_FVector RouteCache; // 0xDE4 (0xC)
	struct TArray_FVector OriginalRouteCache; // 0xDF0 (0xC)
	struct FSmartVector DesiredCoverLocation; // 0xDFC (0x1C)
	struct FSmartVector CurrentCoverLocation; // 0xE18 (0x1C)
	struct FSmartVector ScriptedMoveTargetLocation; // 0xE34 (0x1C)
	float CoverSearchInnerRadius; // 0xE50 (0x4)
	float CoverSearchOuterRadius; // 0xE54 (0x4)
	float CoverSearchAngle; // 0xE58 (0x4)
	struct FSmartVector CoverSearchOrigin; // 0xE5C (0x1C)
	struct FVector CoverSearchDirection; // 0xE78 (0xC)
	struct TArray_FCoverDebugInfo CoverSlotDebugList; // 0xE84 (0xC)
	BOOL CoverSearchWasFinalized :1 ; // 0xE90 (0x4)
	const unsigned long: 0;
	struct FIconData ICON_BLUELOCATION; // 0xE94 (0x14)
	struct FIconData ICON_YELLOWLOCATION; // 0xEA8 (0x14)
	struct FIconData ICON_QUESTIONMARK; // 0xEBC (0x14)
	struct FIconData ICON_EXCLAMATIONPOINT; // 0xED0 (0x14)
	struct FIconData ICON_REDARROW; // 0xEE4 (0x14)
	struct FIconData ICON_GREENARROW; // 0xEF8 (0x14)
	struct FIconData ICON_FAILED_MOVE_DEST; // 0xF0C (0x14)
	struct FIconData ICON_GREENCIRCLE; // 0xF20 (0x14)
	struct FIconData ICON_PATHPOINT; // 0xF34 (0x14)
	struct FIconData ICON_CURRENTCOVER; // 0xF48 (0x14)
	struct FIconData ICON_DESIREDCOVER; // 0xF5C (0x14)
	struct FIconData ICON_SCRIPTEDMOVETARGET; // 0xF70 (0x14)
	struct TArray_FTargetDebugDatum TargetData; // 0xF84 (0xC)
	struct TArray_FAIHoldDebugData Holds; // 0xF90 (0xC)
	struct TArray_FAIHoldDebugData TargetHolds; // 0xF9C (0xC)
	struct TArray_FAIHoldDebugData MovementHolds; // 0xFA8 (0xC)
	struct TArray_FAIHoldDebugData DemigodHolds; // 0xFB4 (0xC)
	struct TArray_FAIHoldDebugData GodHolds; // 0xFC0 (0xC)
};

struct UGearboxPawnSnapshotRecord {
	struct UObject_Data UObject;
	struct USnapshotInterface_Data USnapshotInterface;
	struct USnapshotRecord_Data USnapshotRecord;
	struct UGearboxPawnSnapshotRecord_Data UGearboxPawnSnapshotRecord;
};

// 0x68 
struct UTargetingDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_UTI_CalcPtr Knowledge; // 0x3C (0xC)
	struct TArray_UTI_PrioritizePtr Prioritization; // 0x48 (0xC)
	struct UExpressionEvaluator* CanTargetIf; // 0x54 (0x4)
	struct UExpressionEvaluator* StopTargetingIf; // 0x58 (0x4)
	BOOL bCanTargetFriendlies :1 ; // 0x5C (0x4)
	BOOL bOverrideSearchRadius :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	struct UExpressionEvaluator* CanTargetFriendliesIf; // 0x60 (0x4)
	float SearchRadius; // 0x64 (0x4)
};

struct UTargetingDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UTargetingDefinition_Data UTargetingDefinition;
};

// 0x4C 
struct UTargetIterator_Data {
	// Last Offset: 0x3C
	unsigned char IteratorType; // 0x3C (0x1) (Enum = ETargetIterator)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	struct FString BarGraphShortName; // 0x40 (0xC)
};

struct UTargetIterator {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
};

// 0x4C 
struct UTargetIteratorCalculateDistance_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorCalculateDistance {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorCalculateDistance_Data UTargetIteratorCalculateDistance;
};

// 0x4C 
struct UTargetIteratorCalculateExposure_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorCalculateExposure {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorCalculateExposure_Data UTargetIteratorCalculateExposure;
};

// 0x4C 
struct UTargetIteratorCheckAwareness_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorCheckAwareness {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorCheckAwareness_Data UTargetIteratorCheckAwareness;
};

// 0x4C 
struct UTargetIteratorCheckRemoveTarget_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorCheckRemoveTarget {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorCheckRemoveTarget_Data UTargetIteratorCheckRemoveTarget;
};

// 0x4C 
struct UTargetIteratorForgetAboutTarget_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorForgetAboutTarget {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorForgetAboutTarget_Data UTargetIteratorForgetAboutTarget;
};

// 0x4C 
struct UTargetIteratorPrioritizeTargetsIAmExposedTo_Data {
	// Last Offset: 0x4C
};

struct UTargetIteratorPrioritizeTargetsIAmExposedTo {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTargetIteratorPrioritizeTargetsIAmExposedTo_Data UTargetIteratorPrioritizeTargetsIAmExposedTo;
};

// 0x4C 
struct UTI_Calc_Data {
	// Last Offset: 0x4C
};

struct UTI_Calc {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Calc_Data UTI_Calc;
};

// 0x50 
struct UTI_Prioritize_Data {
	// Last Offset: 0x4C
	float Weight; // 0x4C (0x4)
};

struct UTI_Prioritize {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
};

// 0x50 
struct UTargetIteratorPrioritizeExposedTargets_Data {
	// Last Offset: 0x50
};

struct UTargetIteratorPrioritizeExposedTargets {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizeExposedTargets_Data UTargetIteratorPrioritizeExposedTargets;
};

// 0x50 
struct UTargetIteratorPrioritizeHumanTargets_Data {
	// Last Offset: 0x50
};

struct UTargetIteratorPrioritizeHumanTargets {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizeHumanTargets_Data UTargetIteratorPrioritizeHumanTargets;
};

// 0x54 
struct UTargetIteratorPrioritizeNearbyTarget_Data {
	// Last Offset: 0x50
	float MaxDistance; // 0x50 (0x4)
};

struct UTargetIteratorPrioritizeNearbyTarget {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizeNearbyTarget_Data UTargetIteratorPrioritizeNearbyTarget;
};

// 0x50 
struct UTargetIteratorPrioritizePreviousTarget_Data {
	// Last Offset: 0x50
};

struct UTargetIteratorPrioritizePreviousTarget {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizePreviousTarget_Data UTargetIteratorPrioritizePreviousTarget;
};

// 0x50 
struct UTargetIteratorPrioritizeTargetNotBeingShotAt_Data {
	// Last Offset: 0x50
};

struct UTargetIteratorPrioritizeTargetNotBeingShotAt {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizeTargetNotBeingShotAt_Data UTargetIteratorPrioritizeTargetNotBeingShotAt;
};

// 0x50 
struct UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data {
	// Last Offset: 0x50
};

struct UTargetIteratorPrioritizeTargetWhoShootsAtMe {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data UTargetIteratorPrioritizeTargetWhoShootsAtMe;
};

// 0x50 
struct UTI_PrioritizeBonus_Data {
	// Last Offset: 0x50
};

struct UTI_PrioritizeBonus {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTI_PrioritizeBonus_Data UTI_PrioritizeBonus;
};

// 0x54 
struct UTI_PrioritizeConditional_Data {
	// Last Offset: 0x50
	struct UExpressionEvaluator* Condition; // 0x50 (0x4)
};

struct UTI_PrioritizeConditional {
	struct UObject_Data UObject;
	struct UTargetIterator_Data UTargetIterator;
	struct UTI_Prioritize_Data UTI_Prioritize;
	struct UTI_PrioritizeConditional_Data UTI_PrioritizeConditional;
};

// 0xC0 
struct UGearboxSeqAct_PopulationOpportunityLink_Data {
	// Last Offset: 0xB4
	struct TArray_APopulationOpportunityPtr CloneOpportunities; // 0xB4 (0xC)
};

struct UGearboxSeqAct_PopulationOpportunityLink {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct UGearboxSeqAct_PopulationOpportunityLink_Data UGearboxSeqAct_PopulationOpportunityLink;
};

// 0x3C 
struct UIPopulationSpawnPoint_Data {
	// Last Offset: 0x3C
};

struct UIPopulationSpawnPoint {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIPopulationSpawnPoint_Data UIPopulationSpawnPoint;
};

// 0x54 
struct UPopulationDefinition_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IIConstructObject; // 0x3C (0x4)
	struct TArray_FPopulationActor ActorArchetypeList; // 0x40 (0xC)
	unsigned char RespawnStyle; // 0x4C (0x1) (Enum = EPopulationRespawnOptions)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	BOOL bTotalResetOnLevelLoad :1 ; // 0x50 (0x4)
	const unsigned long: 0;
};

struct UPopulationDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UPopulationDefinition_Data UPopulationDefinition;
};

// 0x58 
struct UPopulationFactory_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IIConstructObject; // 0x3C (0x4)
	struct TArray_UBehaviorBasePtr OnActorSpawn; // 0x40 (0xC)
	struct FDestructionParameters DestructionParams; // 0x4C (0x4)
	BOOL bIsCriticalActor :1 ; // 0x50 (0x4)
	BOOL bUseSavedLocationWhenRestored :1 ; // 0x50 (0x4)
	BOOL UseCostOverride :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	int SpawnCostOverride; // 0x54 (0x4)
};

struct UPopulationFactory {
	struct UObject_Data UObject;
	struct UPopulationFactory_Data UPopulationFactory;
};

// 0x5C 
struct UPopulationFactoryGeneric_Data {
	// Last Offset: 0x58
	struct AActor* ActorArchetype; // 0x58 (0x4)
};

struct UPopulationFactoryGeneric {
	struct UObject_Data UObject;
	struct UPopulationFactory_Data UPopulationFactory;
	struct UPopulationFactoryGeneric_Data UPopulationFactoryGeneric;
};

// 0x5C 
struct UPopulationFactoryPopulationDefinition_Data {
	// Last Offset: 0x58
	struct UPopulationDefinition* PopulationDef; // 0x58 (0x4)
};

struct UPopulationFactoryPopulationDefinition {
	struct UObject_Data UObject;
	struct UPopulationFactory_Data UPopulationFactory;
	struct UPopulationFactoryPopulationDefinition_Data UPopulationFactoryPopulationDefinition;
};

// 0x88 
struct UPopulationMaster_Data {
	// Last Offset: 0x3C
	struct TArray_FPopulationOpportunityTracker OpportunityList; // 0x3C (0xC)
	int ActiveActorCost; // 0x48 (0x4)
	int MaxActorCost; // 0x4C (0x4)
	float MasterThinkRate; // 0x50 (0x4)
	float MasterTestForDestroyRate; // 0x54 (0x4)
	float IfIrrelevantDestroyTimeout; // 0x58 (0x4)
	struct TArray_FPopulationMasterStat PopulationMasterStats; // 0x5C (0xC)
	struct TArray_FEncounterTracker EncounterList; // 0x68 (0xC)
	float SecondsElapsed; // 0x74 (0x4)
	float NextOpportunityTickTime; // 0x78 (0x4)
	float NextDestroyTestTickTime; // 0x7C (0x4)
	float PopulationRespawnDelayInSeconds; // 0x80 (0x4)
	BOOL bHasActorsReadyToDeleteIfSpaceIsNeeded :1 ; // 0x84 (0x4)
	BOOL bShutdownAIWhenIrrelevant :1 ; // 0x84 (0x4)
	const unsigned long: 0;
};

struct UPopulationMaster {
	struct UObject_Data UObject;
	struct UPopulationMaster_Data UPopulationMaster;
};

// 0x1E4 
struct APopulationOpportunity_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIBodyCompositionInstance; // 0x188 (0x4)
	struct FOpportunityCleanupParameters CleanupParams; // 0x18C (0x8)
	BOOL IsEnabled :1 ; // 0x194 (0x4)
	BOOL bNoRespawning :1 ; // 0x194 (0x4)
	BOOL bIsWaitingForRespawn :1 ; // 0x194 (0x4)
	BOOL bUseRandomSpawns :1 ; // 0x194 (0x4)
	const unsigned long: 0;
	struct TArray_APopulationPointPtr SpawnPoints; // 0x198 (0xC)
	struct ULevelStreaming* StreamingLevel; // 0x1A4 (0x4)
	int SystemID; // 0x1A8 (0x4)
	int NextInitialDestinationIdx; // 0x1AC (0x4)
	struct UGearboxSeqAct_PopulationOpportunityLink* SequenceActionLink; // 0x1B0 (0x4)
	float LastTimeBlockedFromSpawningDueToPopLimits; // 0x1B4 (0x4)
	float RespawnDelayStartTime; // 0x1B8 (0x4)
	struct URegionDefinition* GameStageRegion; // 0x1BC (0x4)
	struct UPopulationAspect* Aspect; // 0x1C0 (0x4)
	int SpawnIndex; // 0x1C4 (0x4)
	struct TArray_int SpawnList; // 0x1C8 (0xC)
	int InclusiveSpawnIndex; // 0x1D4 (0x4)
	struct TArray_int InclusiveSpawnList; // 0x1D8 (0xC)
};

struct APopulationOpportunity {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationOpportunity_Data APopulationOpportunity;
};

// 0x224 
struct APopulationOpportunityArea_Data {
	// Last Offset: 0x1E4
	struct TArray_FPopulationOptionAreaData SpawnOptions; // 0x1E4 (0xC)
	BOOL bContinueSpawningAfterPlayerDetected :1 ; // 0x1F0 (0x4)
	BOOL bOpportunityVolume :1 ; // 0x1F0 (0x4)
	BOOL bOpportunityRadius :1 ; // 0x1F0 (0x4)
	BOOL bOpportunityLevel :1 ; // 0x1F0 (0x4)
	BOOL bPlayerHasBeenDetected :1 ; // 0x1F0 (0x4)
	const unsigned long: 0;
	struct TArray_AVolumePtr DetectionVolumes; // 0x1F4 (0xC)
	float DetectionRadius; // 0x200 (0x4)
	int SelectedSpawnIdx; // 0x204 (0x4)
	struct TArray_FPopulationAreaOptionSpawnData SpawnData; // 0x208 (0xC)
	struct TArray_APlayerControllerPtr PlayersDetected; // 0x214 (0xC)
	int NumPlayersDetected; // 0x220 (0x4)
};

struct APopulationOpportunityArea {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationOpportunity_Data APopulationOpportunity;
	struct APopulationOpportunityArea_Data APopulationOpportunityArea;
};

// 0x20C 
struct APopulationOpportunityCloner_Data {
	// Last Offset: 0x1E4
	struct UExpressionEvaluator* Conditions; // 0x1E4 (0x4)
	struct UPopulationFactory* SpawnFactory; // 0x1E8 (0x4)
	int MaxTotalActors; // 0x1EC (0x4)
	int MaxActiveActors; // 0x1F0 (0x4)
	unsigned char RespawnStyle; // 0x1F4 (0x1) (Enum = EPopulationRespawnOptions)
	const unsigned char Unknown1[0x3]; // 0x1F5 (0x3) > LAST OFFSET
	BOOL bTotalResetOnLevelLoad :1 ; // 0x1F8 (0x4)
	BOOL bReadyToSpawn :1 ; // 0x1F8 (0x4)
	const unsigned long: 0;
	float RespawnDelay; // 0x1FC (0x4)
	float RespawnDelayAfterDeath; // 0x200 (0x4)
	int NumTotalActors; // 0x204 (0x4)
	int NumActiveActors; // 0x208 (0x4)
};

struct APopulationOpportunityCloner {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationOpportunity_Data APopulationOpportunity;
	struct APopulationOpportunityCloner_Data APopulationOpportunityCloner;
};

// 0x280 
struct APopulationOpportunityCombat_Data {
	// Last Offset: 0x1E4
	struct FPointer VfTable_IIGbxMessageListener; // 0x1E4 (0x4)
	struct APopulationEncounter* ParentEncounter; // 0x1E8 (0x4)
	int ParentEncounterWave; // 0x1EC (0x4)
	struct UPopulationDefinition* PopulationDef; // 0x1F0 (0x4)
	struct FAttributeInitializationData MaxTotalActorsFormula; // 0x1F4 (0x10)
	int MaxTotalActors; // 0x204 (0x4)
	int MaxActiveActorsIsNormal; // 0x208 (0x4)
	int MaxActiveActorsThreatened; // 0x20C (0x4)
	struct FAttributeInitializationData RespawnDelayFormula; // 0x210 (0x10)
	BOOL bAdjustForPlayerCount :1 ; // 0x220 (0x4)
	BOOL bOpportunityVolume :1 ; // 0x220 (0x4)
	BOOL bOpportunityRadius :1 ; // 0x220 (0x4)
	BOOL bPlayerHasBeenDetected :1 ; // 0x220 (0x4)
	BOOL bShowDebugEnabled :1 ; // 0x220 (0x4)
	const unsigned long: 0;
	struct TArray_AVolumePtr DetectionVolumes; // 0x224 (0xC)
	float DetectionRadius; // 0x230 (0x4)
	float OpportunityHeight; // 0x234 (0x4)
	struct FColor RadiusDebugColor; // 0x238 (0x4)
	float RespawnDelay; // 0x23C (0x4)
	struct UDrawSphereComponent* DetectionDrawSphere; // 0x240 (0x4)
	float ActivePlayerScale; // 0x244 (0x4)
	struct TArray_AGearboxPawnPtr SpawnedMembers; // 0x248 (0xC)
	struct FPopulationOptionSpawnData SpawnData; // 0x254 (0x1C)
	struct TArray_APlayerControllerPtr PlayersDetected; // 0x270 (0xC)
	int NumPlayersDetected; // 0x27C (0x4)
};

struct APopulationOpportunityCombat {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationOpportunity_Data APopulationOpportunity;
	struct APopulationOpportunityCombat_Data APopulationOpportunityCombat;
};

// 0x210 
struct APopulationOpportunityPoint_Data {
	// Last Offset: 0x1E4
	struct FPointer VfTable_IIPopulationSpawnPoint; // 0x1E4 (0x4)
	struct UPopulationDefinition* PopulationDef; // 0x1E8 (0x4)
	float SpawnAndCullRadius; // 0x1EC (0x4)
	struct TArray_UBehaviorBasePtr SpawnCustomizations; // 0x1F0 (0xC)
	BOOL SpawnedForMatinee :1 ; // 0x1FC (0x4)
	BOOL bHasSpawned :1 ; // 0x1FC (0x4)
	BOOL bActiveSpawn :1 ; // 0x1FC (0x4)
	BOOL bDetectedPlayer :1 ; // 0x1FC (0x4)
	const unsigned long: 0;
	unsigned char AISpawnStyle; // 0x200 (0x1) (Enum = ESpawnStyleType)
	unsigned char InitialAction; // 0x201 (0x1) (Enum = EInitialActionType)
	const unsigned char Unknown1[0x2]; // 0x202 (0x2) > LAST OFFSET
	struct TArray_AActorPtr InitialActionDestinations; // 0x204 (0xC)
};

struct APopulationOpportunityPoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APopulationOpportunity_Data APopulationOpportunity;
	struct APopulationOpportunityPoint_Data APopulationOpportunityPoint;
};

// 0x210  (Alignment = 16)
struct UPopulationOpportunityAreaRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPopulationOpportunityAreaRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPopulationOpportunityAreaRenderingComponent_Data UPopulationOpportunityAreaRenderingComponent;
};

// 0x3C 
struct UPopulationOpportunityAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UPopulationOpportunityAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UPopulationOpportunityAttributeContextResolver_Data UPopulationOpportunityAttributeContextResolver;
};

// 0x210  (Alignment = 16)
struct UPopulationOpportunityPointRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPopulationOpportunityPointRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPopulationOpportunityPointRenderingComponent_Data UPopulationOpportunityPointRenderingComponent;
};

// 0x1C8 
struct APopulationPoint_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIPopulationSpawnPoint; // 0x188 (0x4)
	int Flags; // 0x18C (0x4)
	unsigned char AISpawnStyle; // 0x190 (0x1) (Enum = ESpawnStyleType)
	unsigned char InitialAction; // 0x191 (0x1) (Enum = EInitialActionType)
	unsigned char ConstraintType; // 0x192 (0x1) (Enum = EPopPointContraintType)
	const unsigned char Unknown1[0x1]; // 0x193 (0x1) > LAST OFFSET
	struct TArray_AActorPtr InitialActionDestinations; // 0x194 (0xC)
	float InitialMovementHoldTime; // 0x1A0 (0x4)
	BOOL bAttachSpawnedToBase :1 ; // 0x1A4 (0x4)
	BOOL IsEnabled :1 ; // 0x1A4 (0x4)
	BOOL bDisableAfterUse :1 ; // 0x1A4 (0x4)
	BOOL TestVisibility :1 ; // 0x1A4 (0x4)
	BOOL TestFOV :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
	int InitialDestinationIndex; // 0x1A8 (0x4)
	struct TArray_UPopulationSpawnedActorTagDefinitionPtr TagsToUseWithConstraint; // 0x1AC (0xC)
	struct TArray_UBehaviorBasePtr OnSpawnCustomizations; // 0x1B8 (0xC)
	float MinSpawnDistance; // 0x1C4 (0x4)
};

struct APopulationPoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APopulationPoint_Data APopulationPoint;
};

// 0x1D4 
struct APopulationPoint_Dynamic_Data {
	// Last Offset: 0x1C8
	struct FName DynamicPointName; // 0x1C8 (0x8)
	BOOL bSaveAsInstanceDataOnBase :1 ; // 0x1D0 (0x4)
	const unsigned long: 0;
};

struct APopulationPoint_Dynamic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APopulationPoint_Data APopulationPoint;
	struct APopulationPoint_Dynamic_Data APopulationPoint_Dynamic;
};

// 0x210  (Alignment = 16)
struct UPopulationPointRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPopulationPointRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPopulationPointRenderingComponent_Data UPopulationPointRenderingComponent;
};

// 0xC8 
struct USeqEvent_EncounterWaveComplete_Data {
	// Last Offset: 0xC4
	int CurrentWave; // 0xC4 (0x4)
};

struct USeqEvent_EncounterWaveComplete {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_EncounterWaveComplete_Data USeqEvent_EncounterWaveComplete;
};

// 0xCC 
struct USeqEvent_PopulatedActor_Data {
	// Last Offset: 0xC4
	struct APopulationOpportunity* DestPopulationOpportunity; // 0xC4 (0x4)
	struct AActor* SpawnPoint; // 0xC8 (0x4)
};

struct USeqEvent_PopulatedActor {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_PopulatedActor_Data USeqEvent_PopulatedActor;
};

// 0xCC 
struct USeqEvent_PopulatedPoint_Data {
	// Last Offset: 0xC4
	struct APopulationOpportunity* DestPopulationOpportunity; // 0xC4 (0x4)
	struct AActor* SpawnPoint; // 0xC8 (0x4)
};

struct USeqEvent_PopulatedPoint {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_PopulatedPoint_Data USeqEvent_PopulatedPoint;
};

// 0x224 
struct AGearboxHUD_Data {
	// Last Offset: 0x224
};

struct AGearboxHUD {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AHUD_Data AHUD;
	struct AGearboxHUD_Data AGearboxHUD;
};

// 0x60 
struct UAIDefinition_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IIBehaviorProvider; // 0x3C (0x4)
	struct UBehaviorProviderDefinition* BehaviorProviderDefinition; // 0x40 (0x4)
	struct UAIBehaviorProviderDefinition* AIBehaviorProviderDefinition; // 0x44 (0x4)
	BOOL bHealOnReset :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct TArray_FAITreeData NodeList; // 0x4C (0xC)
	float TargetSearchRadius; // 0x58 (0x4)
	struct UTargetingDefinition* TargetingDef; // 0x5C (0x4)
};

struct UAIDefinition {
	struct UObject_Data UObject;
	struct UAIDefinition_Data UAIDefinition;
};

// 0x40 
struct UBehaviorEventFilterBase_Data {
	// Last Offset: 0x3C
	BOOL ShouldBeInstanced :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct UBehaviorEventFilterBase {
	struct UObject_Data UObject;
	struct UBehaviorEventFilterBase_Data UBehaviorEventFilterBase;
};

// 0xC4 
struct UBehaviorKernel_Data {
	// Last Offset: 0x3C
	struct FStableArray_Mirror Processes; // 0x3C (0x1C)
	struct FChunkedList_Mirror ProcessDeathList; // 0x58 (0x4)
	struct FChunkedList_Mirror WaitingThreads; // 0x5C (0x4)
	struct TArray_FProviderRecord Providers; // 0x60 (0xC)
	struct FChunkedList_Mirror ProvidersIndexFreeList; // 0x6C (0x4)
	struct FChunkedList_Mirror ProvidersPendingRemoval; // 0x70 (0x4)
	struct TArray_UObjectPtr ObjectVariables; // 0x74 (0xC)
	struct FChunkedList_Mirror ObjectVariablesIndexFreeList; // 0x80 (0x4)
	struct TArray_FBehaviorSequenceActionData2 DynamicBehaviors; // 0x84 (0xC)
	struct FChunkedList_Mirror DynamicBehaviorsIndexFreeList; // 0x90 (0x4)
	int ProvidersListReserveLength; // 0x94 (0x4)
	int ObjectVariablesListReserveLength; // 0x98 (0x4)
	int DynamicBehaviorsListReserveLength; // 0x9C (0x4)
	int WatchedPID; // 0xA0 (0x4)
	struct FChunkedList_Mirror RecentlyRunBehaviors; // 0xA4 (0x4)
	int CurrentDebugPage; // 0xA8 (0x4)
	struct TArray_FString DebugPages; // 0xAC (0xC)
	struct TArray_UObjectPtr EventFilterObjects; // 0xB8 (0xC)
};

struct UBehaviorKernel {
	struct UObject_Data UObject;
	struct UBehaviorKernel_Data UBehaviorKernel;
};

// 0x4C 
struct UBehaviorProviderDefinition_Data {
	// Last Offset: 0x3C
	int CurrentVersion; // 0x3C (0x4)
	struct TArray_FBehaviorSequenceData BehaviorSequences; // 0x40 (0xC)
};

struct UBehaviorProviderDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UBehaviorProviderDefinition_Data UBehaviorProviderDefinition;
};

// 0x4C 
struct UAIBehaviorProviderDefinition_Data {
	// Last Offset: 0x4C
};

struct UAIBehaviorProviderDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UBehaviorProviderDefinition_Data UBehaviorProviderDefinition;
	struct UAIBehaviorProviderDefinition_Data UAIBehaviorProviderDefinition;
};

// 0x41 
struct UBehaviorSequenceCustomEnableCondition_Data {
	// Last Offset: 0x3C
	struct FChunkedList_Mirror LinkedBehaviorSequences; // 0x3C (0x4)
	unsigned char BehaviorKernelInstanceTagForTransientState; // 0x40 (0x1)
};

struct UBehaviorSequenceCustomEnableCondition {
	struct UObject_Data UObject;
	struct UBehaviorSequenceCustomEnableCondition_Data UBehaviorSequenceCustomEnableCondition;
};

// 0x51 
struct UBehaviorSequenceEnableByMultipleConditions_Data {
	// Last Offset: 0x44
	struct TArray_UBehaviorSequenceCustomEnableConditionPtr EnableConditions; // 0x44 (0xC)
	unsigned char Operator; // 0x50 (0x1) (Enum = EMultiConditionOperator)
};

struct UBehaviorSequenceEnableByMultipleConditions {
	struct UObject_Data UObject;
	struct UBehaviorSequenceCustomEnableCondition_Data UBehaviorSequenceCustomEnableCondition;
	struct UBehaviorSequenceEnableByMultipleConditions_Data UBehaviorSequenceEnableByMultipleConditions;
};

// 0x3C 
struct UIBehaviorConsumer_Data {
	// Last Offset: 0x3C
};

struct UIBehaviorConsumer {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBehaviorConsumer_Data UIBehaviorConsumer;
};

// 0x3C 
struct UIBehaviorProvider_Data {
	// Last Offset: 0x3C
};

struct UIBehaviorProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBehaviorProvider_Data UIBehaviorProvider;
};

// 0x3C 
struct UICustomEvent_Data {
	// Last Offset: 0x3C
};

struct UICustomEvent {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UICustomEvent_Data UICustomEvent;
};

// 0x3C 
struct UITimerBehavior_Data {
	// Last Offset: 0x3C
};

struct UITimerBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UITimerBehavior_Data UITimerBehavior;
};

// 0xBC 
struct UGearboxAnimDefinition_Data {
	// Last Offset: 0x48
	struct FPointer VfTable_IIBehaviorProvider; // 0x48 (0x4)
	struct FName AnimName; // 0x4C (0x8)
	float BlendInTime; // 0x54 (0x4)
	float BlendOutTime; // 0x58 (0x4)
	float PlayRate; // 0x5C (0x4)
	unsigned char EndingCondition; // 0x60 (0x1) (Enum = EEndingCondition)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	struct UAnimSet* AnimSet; // 0x64 (0x4)
	BOOL bMirrored :1 ; // 0x68 (0x4)
	BOOL BlendPerBone :1 ; // 0x68 (0x4)
	BOOL DisableAnimSequenceNotifies :1 ; // 0x68 (0x4)
	BOOL bOnlyPlayNotifiesWhileActive :1 ; // 0x68 (0x4)
	BOOL bReverseAnimSearchOrder :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	struct FName AnimNodeName; // 0x6C (0x8)
	struct URootMotionDefinition* RootMotionDef; // 0x74 (0x4)
	struct UFeatherBoneBlendDefinition* BoneBlendDef; // 0x78 (0x4)
	struct TArray_FName BoneNames; // 0x7C (0xC)
	struct TArray_FSMBehavior StartBehaviors; // 0x88 (0xC)
	struct TArray_FSMNotify SMNotifies; // 0x94 (0xC)
	struct TArray_FSMBehavior StopBehaviors; // 0xA0 (0xC)
	struct TArray_FTimedAnimBehaviorEvent TimedBehaviorEvents; // 0xAC (0xC)
	struct UBehaviorProviderDefinition* BehaviorProviderDefinition; // 0xB8 (0x4)
};

struct UGearboxAnimDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct USpecialMoveDefinition_Data USpecialMoveDefinition;
	struct UGearboxAnimDefinition_Data UGearboxAnimDefinition;
};

// 0x68 
struct UBehavior_TriggerDialogEvent_Data {
	// Last Offset: 0x4C
	struct UGearboxDialogEventTag* EventTag; // 0x4C (0x4)
	struct UGearboxDialogGroup* Group; // 0x50 (0x4)
	struct UGearboxDialogNameTag* NameTag; // 0x54 (0x4)
	struct UObject* Other; // 0x58 (0x4)
	BOOL bForcePlayImmediate :1 ; // 0x5C (0x4)
	BOOL bCheckCanPreview :1 ; // 0x5C (0x4)
	BOOL bCanPreview :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	struct UGearboxDialogEventData* MyEventData; // 0x60 (0x4)
	int MyDataUseCount; // 0x64 (0x4)
};

struct UBehavior_TriggerDialogEvent {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_TriggerDialogEvent_Data UBehavior_TriggerDialogEvent;
};

// 0x1BC 
struct AGearboxDialogActor_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IGearboxDialogInterface; // 0x188 (0x4)
	struct TArray_UGearboxDialogGroupPtr DialogGroups; // 0x18C (0xC)
	struct UGearboxDialogNameTag* NameTag; // 0x198 (0x4)
	struct USpriteComponent* EditorSprite; // 0x19C (0x4)
	struct UGearboxDialogComponent* DialogComponent; // 0x1A0 (0x4)
	struct FGearboxDialogReplicatedData DialogReplicatedData; // 0x1A4 (0x14)
	struct UGearboxDialogNameTag* CurrentNameTag; // 0x1B8 (0x4)
};

struct AGearboxDialogActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AGearboxDialogActor_Data AGearboxDialogActor;
};

// 0x6C 
struct UGearboxDialogComponent_Data {
	// Last Offset: 0x5C
	struct UGearboxDialogEventData* EventData; // 0x5C (0x4)
	struct FAkPlayingInfo ClientPlayingInfo; // 0x60 (0x8)
	BOOL bIsReattaching :1 ; // 0x68 (0x4)
	const unsigned long: 0;
};

struct UGearboxDialogComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UGearboxDialogComponent_Data UGearboxDialogComponent;
};

// 0x78 
struct UGearboxDialogEventData_Data {
	// Last Offset: 0x3C
	struct FDialogEventInfo EventInfo; // 0x3C (0x8)
	struct AActor* Instigator; // 0x44 (0x4)
	struct AActor* Other; // 0x48 (0x4)
	struct UObject* ObjectParameter; // 0x4C (0x4)
	struct AActor* LastTalker; // 0x50 (0x4)
	struct UGearboxDialogAct_Talk* LiveTalkAction; // 0x54 (0x4)
	int LiveTalkActionDataID; // 0x58 (0x4)
	struct FDialogEventInfo TemplateEventInfo; // 0x5C (0x8)
	struct UGearboxDialogAct_Trigger* LiveTriggerAction; // 0x64 (0x4)
	struct FAkPlayingInfo PlayingInfo; // 0x68 (0x8)
	float TalkFinishTime; // 0x70 (0x4)
	int UseCount; // 0x74 (0x4)
};

struct UGearboxDialogEventData {
	struct UObject_Data UObject;
	struct UGearboxDialogEventData_Data UGearboxDialogEventData;
};

// 0x44 
struct UGearboxDialogEventTag_Data {
	// Last Offset: 0x3C
	BOOL bGroupEvent :1 ; // 0x3C (0x4)
	BOOL bSoundEffect :1 ; // 0x3C (0x4)
	BOOL bIsDeathScream :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct UGearboxDialogPriority* Priority; // 0x40 (0x4)
};

struct UGearboxDialogEventTag {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxDialogEventTag_Data UGearboxDialogEventTag;
};

// 0x4C 
struct UGearboxDialogGlobalsDefinition_Data {
	// Last Offset: 0x3C
	struct UAkRtpc* PitchRTPC; // 0x3C (0x4)
	struct TArray_UGearboxDialogPriorityPtr Priorities; // 0x40 (0xC)
};

struct UGearboxDialogGlobalsDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxDialogGlobalsDefinition_Data UGearboxDialogGlobalsDefinition;
};

// 0x9C 
struct UGearboxDialogGroup_Data {
	// Last Offset: 0x3C
	struct TArray_UPackagePtr EventTagPackages; // 0x3C (0xC)
	struct TArray_UGearboxDialogNameTagPtr NameTags; // 0x48 (0xC)
	struct TArray_UGearboxDialogEventTagPtr EventTags; // 0x54 (0xC)
	struct UGearboxDialogGroup* ParentGroup; // 0x60 (0x4)
	struct TArray_UGearboxDialogNodePtr Nodes; // 0x64 (0xC)
	struct UGearboxDialogEvent* SharedDialogEvent; // 0x70 (0x4)
	struct UGearboxDialogAct_Talk* SharedTalkAct; // 0x74 (0x4)
	struct TArray_FOutputLinkToStruct OutputLinksToStructs; // 0x78 (0xC)
	struct TArray_FDialogEventData DialogEvents; // 0x84 (0xC)
	struct TArray_FTalkActData TalkActs; // 0x90 (0xC)
};

struct UGearboxDialogGroup {
	struct UObject_Data UObject;
	struct UGearboxDialogGroup_Data UGearboxDialogGroup;
};

// 0x9C 
struct UGearboxDialogTemplateGroup_Data {
	// Last Offset: 0x9C
};

struct UGearboxDialogTemplateGroup {
	struct UObject_Data UObject;
	struct UGearboxDialogGroup_Data UGearboxDialogGroup;
	struct UGearboxDialogTemplateGroup_Data UGearboxDialogTemplateGroup;
};

// 0xC0 
struct UGearboxDialogManager_Data {
	// Last Offset: 0x3C
	BOOL bEnabled :1 ; // 0x3C (0x4)
	BOOL bShowDebug :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_AActorPtr Talkers; // 0x40 (0xC)
	struct TArray_AActorPtr DisabledTalkers; // 0x4C (0xC)
	struct TArray_UGearboxDialogGroupPtr Groups; // 0x58 (0xC)
	struct UGearboxDialogEventData* CurrentEventContext; // 0x64 (0x4)
	struct FMap_Mirror GroupEventTagMap; // 0x68 (0x3C)
	struct TArray_UGearboxDialogEventDataPtr EventDataPool; // 0xA4 (0xC)
	struct FString EventDataClassPath; // 0xB0 (0xC)
	struct UClass* EventDataClass; // 0xBC (0x4)
};

struct UGearboxDialogManager {
	struct UObject_Data UObject;
	struct UGearboxDialogManager_Data UGearboxDialogManager;
};

// 0x48 
struct UGearboxDialogNameTag_Data {
	// Last Offset: 0x3C
	struct FName NameTag; // 0x3C (0x8)
	struct UGearboxDialogNameTag* ParentTag; // 0x44 (0x4)
};

struct UGearboxDialogNameTag {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxDialogNameTag_Data UGearboxDialogNameTag;
};

// 0x3C 
struct UGearboxDialogPriority_Data {
	// Last Offset: 0x3C
};

struct UGearboxDialogPriority {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxDialogPriority_Data UGearboxDialogPriority;
};

// 0x70 
struct UGearboxDialogNode_Data {
	// Last Offset: 0x6C
	int NodeID; // 0x6C (0x4)
};

struct UGearboxDialogNode {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
};

// 0x70 
struct UGearboxDialogAction_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogAction {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
};

// 0x80 
struct UGearboxDialogAct_Chance_Data {
	// Last Offset: 0x70
	float Chance; // 0x70 (0x4)
	float QuietTimeMin; // 0x74 (0x4)
	float QuietTimeMax; // 0x78 (0x4)
	float NextFireTime; // 0x7C (0x4)
};

struct UGearboxDialogAct_Chance {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogAct_Chance_Data UGearboxDialogAct_Chance;
};

// 0x70 
struct UGearboxDialogAct_Compare_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogAct_Compare {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogAct_Compare_Data UGearboxDialogAct_Compare;
};

// 0x7C 
struct UGearboxDialogAct_ObjectParameterSwitch_Data {
	// Last Offset: 0x70
	struct TArray_UObjectPtr Outputs; // 0x70 (0xC)
};

struct UGearboxDialogAct_ObjectParameterSwitch {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogAct_ObjectParameterSwitch_Data UGearboxDialogAct_ObjectParameterSwitch;
};

// 0x70 
struct UGearboxDialogNonTemplateAction_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogNonTemplateAction {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogNonTemplateAction_Data UGearboxDialogNonTemplateAction;
};

// 0x84 
struct UGearboxDialogAct_Talk_Data {
	// Last Offset: 0x70
	float OutputDelay; // 0x70 (0x4)
	BOOL bShowTalkers :1 ; // 0x74 (0x4)
	BOOL bPreviewing :1 ; // 0x74 (0x4)
	BOOL bInstigatorTalker :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	struct TArray_FGearboxDialogData TalkData; // 0x78 (0xC)
};

struct UGearboxDialogAct_Talk {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogNonTemplateAction_Data UGearboxDialogNonTemplateAction;
	struct UGearboxDialogAct_Talk_Data UGearboxDialogAct_Talk;
};

// 0x70 
struct UGearboxDialogTemplateAction_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogTemplateAction {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogTemplateAction_Data UGearboxDialogTemplateAction;
};

// 0x78 
struct UGearboxDialogAct_Trigger_Data {
	// Last Offset: 0x70
	struct UGearboxDialogEventTag* DialogEvent; // 0x70 (0x4)
	BOOL bPreviewing :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UGearboxDialogAct_Trigger {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogAction_Data UGearboxDialogAction;
	struct UGearboxDialogTemplateAction_Data UGearboxDialogTemplateAction;
	struct UGearboxDialogAct_Trigger_Data UGearboxDialogAct_Trigger;
};

// 0x78 
struct UGearboxDialogEvent_Data {
	// Last Offset: 0x70
	BOOL bDisabled :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	struct UGearboxDialogEventTag* Tag; // 0x74 (0x4)
};

struct UGearboxDialogEvent {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogEvent_Data UGearboxDialogEvent;
};

// 0x78 
struct UGearboxDialogTemplateEvent_Data {
	// Last Offset: 0x78
};

struct UGearboxDialogTemplateEvent {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogEvent_Data UGearboxDialogEvent;
	struct UGearboxDialogTemplateEvent_Data UGearboxDialogTemplateEvent;
};

// 0x70 
struct UGearboxDialogVariable_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogVariable {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
};

// 0x70 
struct UGearboxDialogVar_Instigator_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogVar_Instigator {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
	struct UGearboxDialogVar_Instigator_Data UGearboxDialogVar_Instigator;
};

// 0x70 
struct UGearboxDialogVar_LastTalker_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogVar_LastTalker {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
	struct UGearboxDialogVar_LastTalker_Data UGearboxDialogVar_LastTalker;
};

// 0x74 
struct UGearboxDialogVar_NameTag_Data {
	// Last Offset: 0x70
	struct UGearboxDialogNameTag* NameTag; // 0x70 (0x4)
};

struct UGearboxDialogVar_NameTag {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
	struct UGearboxDialogVar_NameTag_Data UGearboxDialogVar_NameTag;
};

// 0x70 
struct UGearboxDialogVar_Other_Data {
	// Last Offset: 0x70
};

struct UGearboxDialogVar_Other {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
	struct UGearboxDialogVar_Other_Data UGearboxDialogVar_Other;
};

// 0x88 
struct UGearboxDialogVar_Random_Data {
	// Last Offset: 0x70
	BOOL bNotOther :1 ; // 0x70 (0x4)
	BOOL bNotInstigator :1 ; // 0x70 (0x4)
	BOOL bNotLastTalker :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	struct UPawnAllegiance* Allegiance; // 0x74 (0x4)
	struct FAttributeInitializationData DistanceLimit; // 0x78 (0x10)
};

struct UGearboxDialogVar_Random {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UGearboxDialogNode_Data UGearboxDialogNode;
	struct UGearboxDialogVariable_Data UGearboxDialogVariable;
	struct UGearboxDialogVar_Random_Data UGearboxDialogVar_Random;
};

// 0xA8 
struct UGearboxSeqAct_ToggleDialog_Data {
	// Last Offset: 0xA4
	BOOL bDialogEnabled :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct UGearboxSeqAct_ToggleDialog {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGearboxSeqAct_ToggleDialog_Data UGearboxSeqAct_ToggleDialog;
};

// 0xCC 
struct UGearboxSeqAct_TriggerDialog_Data {
	// Last Offset: 0xB4
	struct AActor* Other; // 0xB4 (0x4)
	struct UGearboxDialogEventTag* EventTag; // 0xB8 (0x4)
	struct UGearboxDialogNameTag* NameTag; // 0xBC (0x4)
	struct UGearboxDialogEventData* EventData; // 0xC0 (0x4)
	int MyDataUseCount; // 0xC4 (0x4)
	BOOL bCheckCanPreview :1 ; // 0xC8 (0x4)
	BOOL bCanPreview :1 ; // 0xC8 (0x4)
	const unsigned long: 0;
};

struct UGearboxSeqAct_TriggerDialog {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct UGearboxSeqAct_TriggerDialog_Data UGearboxSeqAct_TriggerDialog;
};

// 0xD0 
struct UGearboxSeqAct_TriggerDialogName_Data {
	// Last Offset: 0xCC
	struct UGearboxDialogGroup* Group; // 0xCC (0x4)
};

struct UGearboxSeqAct_TriggerDialogName {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct UGearboxSeqAct_TriggerDialog_Data UGearboxSeqAct_TriggerDialog;
	struct UGearboxSeqAct_TriggerDialogName_Data UGearboxSeqAct_TriggerDialogName;
};

// 0xA8 
struct UGearboxAccountActions_Data {
	// Last Offset: 0x3C
	int CurrentConsumeCount; // 0x3C (0x4)
	unsigned char CurrentControllerId; // 0x40 (0x1)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	struct UGearboxAccountEntitlement* CurrentEntitlement; // 0x44 (0x4)
	struct TArray_UGearboxAccountEntitlementPtr CurrentBulkConsumeEntitlements; // 0x48 (0xC)
	struct TArray_int CurrentBulkConsumeControllerIds; // 0x54 (0xC)
	struct TArray_int CurrentBulkConsumeCounts; // 0x60 (0xC)
	struct FScriptDelegate __OnSignInGearboxAccount__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnSignUpGearboxAccount__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnResetPasswordGearboxAccount__Delegate; // 0x84 (0xC)
	struct FScriptDelegate __OnCodeRedeemed__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnEntitlementConsumed__Delegate; // 0x9C (0xC)
};

struct UGearboxAccountActions {
	struct UObject_Data UObject;
	struct UGearboxAccountActions_Data UGearboxAccountActions;
};

// 0xA0 
struct UGearboxAccountData_Data {
	// Last Offset: 0x3C
	struct FString RequestId; // 0x3C (0xC)
	BOOL SignedIn :1 ; // 0x48 (0x4)
	BOOL HasValidPlatform :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct FString PlatformLoginName; // 0x4C (0xC)
	struct FDouble NextEntitlementUpdateTime; // 0x58 (0x8)
	struct TArray_UGearboxAccountEntitlementPtr Entitlements; // 0x60 (0xC)
	struct TArray_UGearboxAccountOfferPtr Offers; // 0x6C (0xC)
	struct TArray_FScriptDelegate EntitlementsUpdatedDelegates; // 0x78 (0xC)
	struct TArray_USparkServiceConfigurationPtr Services; // 0x84 (0xC)
	unsigned char AgreementsSigning; // 0x90 (0x1) (Enum = EAgreementsSigning)
	const unsigned char Unknown1[0x3]; // 0x91 (0x3) > LAST OFFSET
	struct FString SupportId; // 0x94 (0xC)
};

struct UGearboxAccountData {
	struct UObject_Data UObject;
	struct UGearboxAccountData_Data UGearboxAccountData;
};

// 0x68 
struct UGearboxProcess_Data {
	// Last Offset: 0x3C
	int FirstAttemptDelay; // 0x3C (0x4)
	int BaseRetrySeconds; // 0x40 (0x4)
	int MaxRetryAttempts; // 0x44 (0x4)
	float RetryMultiplier; // 0x48 (0x4)
	int RetryJitter; // 0x4C (0x4)
	float CurrentRetrySeconds; // 0x50 (0x4)
	int Attempts; // 0x54 (0x4)
	float WaitTime; // 0x58 (0x4)
	BOOL Waiting :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	int CurrentStep; // 0x60 (0x4)
	int FailureStep; // 0x64 (0x4)
};

struct UGearboxProcess {
	struct UObject_Data UObject;
	struct UGearboxProcess_Data UGearboxProcess;
};

// 0x8C 
struct USparkInitializationProcess_Data {
	// Last Offset: 0x68
	struct UGearboxAccountData* Data; // 0x68 (0x4)
	int PlayerIndex; // 0x6C (0x4)
	struct TArray_FScriptDelegate SparkInitializedDelegates; // 0x70 (0xC)
	BOOL bPrimary :1 ; // 0x7C (0x4)
	BOOL ValidAccount :1 ; // 0x7C (0x4)
	const unsigned long: 0;
	struct FString AsyncTicket; // 0x80 (0xC)
};

struct USparkInitializationProcess {
	struct UObject_Data UObject;
	struct UGearboxProcess_Data UGearboxProcess;
	struct USparkInitializationProcess_Data USparkInitializationProcess;
};

// 0x4C 
struct ULeviathanService_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_ISparkUpdateCallback; // 0x3C (0x4)
	int EventBufferSize; // 0x40 (0x4)
	int StatBufferSize; // 0x44 (0x4)
	int AtomTableBufferSize; // 0x48 (0x4)
};

struct ULeviathanService {
	struct UObject_Data UObject;
	struct ULeviathanService_Data ULeviathanService;
};

// 0x3C 
struct USparkInterface_Data {
	// Last Offset: 0x3C
};

struct USparkInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct USparkInterface_Data USparkInterface;
};

// 0xDC 
struct USparkInterfaceImpl_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_ISparkInterface; // 0x3C (0x4)
	struct FPointer VfTable_FTickableObject; // 0x40 (0x4)
	struct USparkInitializationProcess* SparkInitialization; // 0x44 (0x4)
	struct USparkInitializationProcess* SecondaryInitialization; // 0x48 (0x4)
	struct TArray_UGearboxAccountDataPtr Accounts; // 0x4C (0xC)
	struct FString LeviathanServiceClassName; // 0x58 (0xC)
	struct ULeviathanService* LeviathanSvc; // 0x64 (0x4)
	int ReadBufferSize; // 0x68 (0x4)
	BOOL TmsInitComplete :1 ; // 0x6C (0x4)
	BOOL UpdateEmergencyMessage :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FString EmergencyMessage; // 0x70 (0xC)
	struct TArray_FSparkOutstandingRequest Requests; // 0x7C (0xC)
	int LastHttpRequestRetries; // 0x88 (0x4)
	float LastHttpRequestResponseTime; // 0x8C (0x4)
	int RecentHttpRequestFailures; // 0x90 (0x4)
	int InteractionMinWaitSeconds; // 0x94 (0x4)
	int InteractionGraceTries; // 0x98 (0x4)
	int InteractionPunishmentMinWaitSeconds; // 0x9C (0x4)
	int InteractionTries; // 0xA0 (0x4)
	struct USparkServiceConfiguration* TitleStorageService; // 0xA4 (0x4)
	struct FString TitleStorageUrl; // 0xA8 (0xC)
	struct USparkNews* NewsService; // 0xB4 (0x4)
	struct FScriptDelegate __OnSparkRequestComplete__Delegate; // 0xB8 (0xC)
	struct FScriptDelegate __OnSparkConfigReceived__Delegate; // 0xC4 (0xC)
	struct FScriptDelegate __OnSparkEmergencyMessageUpdated__Delegate; // 0xD0 (0xC)
};

struct USparkInterfaceImpl {
	struct UObject_Data UObject;
	struct USparkInterfaceImpl_Data USparkInterfaceImpl;
};

// 0x70 
struct USparkServiceConfiguration_Data {
	// Last Offset: 0x3C
	struct FName ServiceName; // 0x3C (0x8)
	struct FName ConfigurationGroup; // 0x44 (0x8)
	struct TArray_FString Keys; // 0x4C (0xC)
	struct TArray_FString Values; // 0x58 (0xC)
	struct FString OverrideUrl; // 0x64 (0xC)
};

struct USparkServiceConfiguration {
	struct UObject_Data UObject;
	struct USparkServiceConfiguration_Data USparkServiceConfiguration;
};

// 0x78 
struct USparkTypes_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnSparkRequestComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnSparkConfigReceived__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnSparkInitialized__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnSparkEmergencyMessageUpdated__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnEntitlementsUpdated__Delegate; // 0x6C (0xC)
};

struct USparkTypes {
	struct UObject_Data UObject;
	struct USparkTypes_Data USparkTypes;
};

// 0xAC 
struct UAction_ChangeRuleSet_Data {
	// Last Offset: 0xA8
	struct URuleSet* NewRuleSet; // 0xA8 (0x4)
};

struct UAction_ChangeRuleSet {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UAction_ChangeRuleSet_Data UAction_ChangeRuleSet;
};

// 0x3C 
struct URES_RuleSetChange_Data {
	// Last Offset: 0x3C
};

struct URES_RuleSetChange {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
	struct URES_RuleSetChange_Data URES_RuleSetChange;
};

// 0xB0 
struct UAction_FaceThreat_Data {
	// Last Offset: 0xB0
};

struct UAction_FaceThreat {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_FaceThreat_Data UAction_FaceThreat;
};

// 0x3C 
struct URES_FacingPolicy_Data {
	// Last Offset: 0x3C
};

struct URES_FacingPolicy {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
	struct URES_FacingPolicy_Data URES_FacingPolicy;
};

// 0xB0 
struct UAction_MoveRandom_Data {
	// Last Offset: 0xB0
};

struct UAction_MoveRandom {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_MoveRandom_Data UAction_MoveRandom;
};

// 0xB0 
struct UAction_MoveTo_Data {
	// Last Offset: 0xB0
};

struct UAction_MoveTo {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_MoveTo_Data UAction_MoveTo;
};

// 0x3C 
struct URES_Movement_Data {
	// Last Offset: 0x3C
};

struct URES_Movement {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
	struct URES_Movement_Data URES_Movement;
};

// 0xB0 
struct UAction_PopRuleSet_Data {
	// Last Offset: 0xB0
};

struct UAction_PopRuleSet {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_PopRuleSet_Data UAction_PopRuleSet;
};

// 0xB4 
struct UAction_PushRuleSet_Data {
	// Last Offset: 0xB0
	struct URuleSet* NewRuleSet; // 0xB0 (0x4)
};

struct UAction_PushRuleSet {
	struct UObject_Data UObject;
	struct UActionSequence_Data UActionSequence;
	struct UActionSequencePawn_Data UActionSequencePawn;
	struct UAction_PushRuleSet_Data UAction_PushRuleSet;
};

// 0x3C 
struct UActorAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UActorAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UActorAttributeContextResolver_Data UActorAttributeContextResolver;
};

// 0x3C 
struct UAIComponentAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UAIComponentAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UAIComponentAttributeContextResolver_Data UAIComponentAttributeContextResolver;
};

// 0x6C 
struct UAIStateBase_Data {
	// Last Offset: 0x6C
};

struct UAIStateBase {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UAIStateBase_Data UAIStateBase;
};

// 0x6C 
struct UAIState_Data {
	// Last Offset: 0x6C
};

struct UAIState {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UAIStateBase_Data UAIStateBase;
	struct UAIState_Data UAIState;
};

// 0x6C 
struct UAIState_Priority_Data {
	// Last Offset: 0x6C
};

struct UAIState_Priority {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UAIStateBase_Data UAIStateBase;
	struct UAIState_Priority_Data UAIState_Priority;
};

// 0x6C 
struct UAIState_Random_Data {
	// Last Offset: 0x6C
};

struct UAIState_Random {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UAIStateBase_Data UAIStateBase;
	struct UAIState_Random_Data UAIState_Random;
};

// 0x6C 
struct UAIState_Sequential_Data {
	// Last Offset: 0x6C
};

struct UAIState_Sequential {
	struct UObject_Data UObject;
	struct UGearboxEditorNode_Data UGearboxEditorNode;
	struct UAIStateBase_Data UAIStateBase;
	struct UAIState_Sequential_Data UAIState_Sequential;
};

// 0x56 
struct UBehavior_AIHold_Data {
	// Last Offset: 0x4C
	struct FName Reason; // 0x4C (0x8)
	unsigned char Action; // 0x54 (0x1) (Enum = AIHoldAction)
	unsigned char Type; // 0x55 (0x1) (Enum = AIHoldType)
};

struct UBehavior_AIHold {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_AIHold_Data UBehavior_AIHold;
};

// 0x60 
struct UBehavior_AIPriority_Data {
	// Last Offset: 0x4C
	float PriorityModifier; // 0x4C (0x4)
	struct FBehaviorContextData Target; // 0x50 (0x10)
};

struct UBehavior_AIPriority {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_AIPriority_Data UBehavior_AIPriority;
};

// 0x50 
struct UBehavior_AITargeting_Data {
	// Last Offset: 0x4C
	struct UTargetingDefinition* NewTargetingDefinition; // 0x4C (0x4)
};

struct UBehavior_AITargeting {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_AITargeting_Data UBehavior_AITargeting;
};

// 0x58 
struct UBehavior_ChangeAnyBehaviorSequenceState_Data {
	// Last Offset: 0x4C
	unsigned char Action; // 0x4C (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FName SequenceName; // 0x50 (0x8)
};

struct UBehavior_ChangeAnyBehaviorSequenceState {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeAnyBehaviorSequenceState_Data UBehavior_ChangeAnyBehaviorSequenceState;
};

// 0x58 
struct UBehavior_ChangeLocalBehaviorSequenceState_Data {
	// Last Offset: 0x4C
	unsigned char Action; // 0x4C (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FName SequenceName; // 0x50 (0x8)
};

struct UBehavior_ChangeLocalBehaviorSequenceState {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeLocalBehaviorSequenceState_Data UBehavior_ChangeLocalBehaviorSequenceState;
};

// 0x50 
struct UBehavior_CompareBool_Data {
	// Last Offset: 0x4C
	BOOL BoolValue :1 ; // 0x4C (0x4)
	const unsigned long: 0;
};

struct UBehavior_CompareBool {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_CompareBool_Data UBehavior_CompareBool;
};

// 0x7C 
struct UBehavior_CompareValues_Data {
	// Last Offset: 0x4C
	struct FAttributeInitializationData ValueA; // 0x4C (0x10)
	struct FBehaviorContextData ContextB; // 0x5C (0x10)
	struct FAttributeInitializationData ValueB; // 0x6C (0x10)
};

struct UBehavior_CompareValues {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_CompareValues_Data UBehavior_CompareValues;
};

// 0x54 
struct UBehavior_CustomEvent_Data {
	// Last Offset: 0x4C
	struct FName CustomEventName; // 0x4C (0x8)
};

struct UBehavior_CustomEvent {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_CustomEvent_Data UBehavior_CustomEvent;
};

// 0x50 
struct UBehavior_Delay_Data {
	// Last Offset: 0x4C
	float Delay; // 0x4C (0x4)
};

struct UBehavior_Delay {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_Delay_Data UBehavior_Delay;
};

// 0x54 
struct UBehavior_Gate_Data {
	// Last Offset: 0x4C
	int GateCount; // 0x4C (0x4)
	int ActivationCount; // 0x50 (0x4)
};

struct UBehavior_Gate {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_Gate_Data UBehavior_Gate;
};

// 0x58 
struct UBehavior_GetFloatParam_Data {
	// Last Offset: 0x58
};

struct UBehavior_GetFloatParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_GetFloatParam_Data UBehavior_GetFloatParam;
};

// 0x58 
struct UBehavior_GetObjectParam_Data {
	// Last Offset: 0x58
};

struct UBehavior_GetObjectParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_GetObjectParam_Data UBehavior_GetObjectParam;
};

// 0x5C 
struct UBehavior_GetVectorParam_Data {
	// Last Offset: 0x58
	BOOL bTreatAsVector :1 ; // 0x58 (0x4)
	const unsigned long: 0;
};

struct UBehavior_GetVectorParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_GetVectorParam_Data UBehavior_GetVectorParam;
};

// 0x5C 
struct UBehavior_InterpolateFloatOverTime_Data {
	// Last Offset: 0x4C
	float Duration; // 0x4C (0x4)
	float UpdateInterval; // 0x50 (0x4)
	float EndingValue; // 0x54 (0x4)
	float BeginningValue; // 0x58 (0x4)
};

struct UBehavior_InterpolateFloatOverTime {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_InterpolateFloatOverTime_Data UBehavior_InterpolateFloatOverTime;
};

// 0x60 
struct UBehavior_Metronome_Data {
	// Last Offset: 0x4C
	BOOL bUseTickCount :1 ; // 0x4C (0x4)
	BOOL bUseDuration :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	int MaxTickCount; // 0x50 (0x4)
	int CurrentTickCount; // 0x54 (0x4)
	float Duration; // 0x58 (0x4)
	float TickInterval; // 0x5C (0x4)
};

struct UBehavior_Metronome {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_Metronome_Data UBehavior_Metronome;
};

// 0x60 
struct UBehavior_ModifyTimer_Data {
	// Last Offset: 0x4C
	unsigned char TimerId; // 0x4C (0x1) (Enum = EBehaviorTimerID)
	unsigned char Operation; // 0x4D (0x1) (Enum = BehaviorTimerFunction)
	const unsigned char Unknown1[0x2]; // 0x4E (0x2) > LAST OFFSET
	struct FAttributeInitializationData NewTimerDelay; // 0x50 (0x10)
};

struct UBehavior_ModifyTimer {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ModifyTimer_Data UBehavior_ModifyTimer;
};

// 0x5C 
struct UBehavior_SetFloatParam_Data {
	// Last Offset: 0x58
	float Value; // 0x58 (0x4)
};

struct UBehavior_SetFloatParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_SetFloatParam_Data UBehavior_SetFloatParam;
};

// 0x5C 
struct UBehavior_SetObjectParam_Data {
	// Last Offset: 0x58
	struct UObject* Value; // 0x58 (0x4)
};

struct UBehavior_SetObjectParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_SetObjectParam_Data UBehavior_SetObjectParam;
};

// 0x6C 
struct UBehavior_SetVectorParam_Data {
	// Last Offset: 0x58
	float RValue; // 0x58 (0x4)
	float GValue; // 0x5C (0x4)
	float bValue; // 0x60 (0x4)
	float AValue; // 0x64 (0x4)
	BOOL bKeepR :1 ; // 0x68 (0x4)
	BOOL bKeepG :1 ; // 0x68 (0x4)
	BOOL bKeepB :1 ; // 0x68 (0x4)
	BOOL bKeepA :1 ; // 0x68 (0x4)
	BOOL bTreatAsVector :1 ; // 0x68 (0x4)
	const unsigned long: 0;
};

struct UBehavior_SetVectorParam {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
	struct UBehavior_SetVectorParam_Data UBehavior_SetVectorParam;
};

// 0x58 
struct UBehavior_SpecialMove_Data {
	// Last Offset: 0x4C
	struct USpecialMoveDefinition* SpecialMove; // 0x4C (0x4)
	BOOL bStopCurrentMove :1 ; // 0x50 (0x4)
	BOOL bQueueIfCannotPlay :1 ; // 0x50 (0x4)
	BOOL bLocal :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	float Duration; // 0x54 (0x4)
};

struct UBehavior_SpecialMove {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SpecialMove_Data UBehavior_SpecialMove;
};

// 0x50 
struct UBehavior_SpecialMoveStop_Data {
	// Last Offset: 0x4C
	struct USpecialMoveDefinition* SpecificMove; // 0x4C (0x4)
};

struct UBehavior_SpecialMoveStop {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SpecialMoveStop_Data UBehavior_SpecialMoveStop;
};

// 0x54 
struct UBehavior_StartAkAmbientSound_Data {
	// Last Offset: 0x4C
	struct UAkEvent* AkEvent; // 0x4C (0x4)
	struct AWwiseSoundGroup* SoundGroup; // 0x50 (0x4)
};

struct UBehavior_StartAkAmbientSound {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_StartAkAmbientSound_Data UBehavior_StartAkAmbientSound;
};

// 0x54 
struct UBehavior_StopAkAmbientSound_Data {
	// Last Offset: 0x4C
	struct UAkEvent* AkEvent; // 0x4C (0x4)
	struct AWwiseSoundGroup* SoundGroup; // 0x50 (0x4)
};

struct UBehavior_StopAkAmbientSound {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_StopAkAmbientSound_Data UBehavior_StopAkAmbientSound;
};

// 0x50 
struct UBehavior_StopDialog_Data {
	// Last Offset: 0x4C
	struct UGearboxDialogEventTag* EventTag; // 0x4C (0x4)
};

struct UBehavior_StopDialog {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_StopDialog_Data UBehavior_StopDialog;
};

// 0x4D 
struct UBehavior_ToggleDialog_Data {
	// Last Offset: 0x4C
	unsigned char Option; // 0x4C (0x1) (Enum = EToggleDialogOption)
};

struct UBehavior_ToggleDialog {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ToggleDialog_Data UBehavior_ToggleDialog;
};

// 0xA5 
struct UCameraModifierCrossfade_Data {
	// Last Offset: 0x8C
	struct UGearboxCameraModifier* ModifierA; // 0x8C (0x4)
	struct UGearboxCameraModifier* ModifierB; // 0x90 (0x4)
	int CurModifierNdx; // 0x94 (0x4)
	float CurBlendWeight; // 0x98 (0x4)
	float BlendSpeed; // 0x9C (0x4)
	int DebugInset; // 0xA0 (0x4)
	unsigned char LerpMode; // 0xA4 (0x1) (Enum = ECameraInterpolationMode)
};

struct UCameraModifierCrossfade {
	struct UObject_Data UObject;
	struct UCameraModifier_Data UCameraModifier;
	struct UGearboxCameraModifier_Data UGearboxCameraModifier;
	struct UCameraModifierCrossfade_Data UCameraModifierCrossfade;
};

// 0xC0 
struct UCameraModifierLookAt_Data {
	// Last Offset: 0x8C
	unsigned char LookAtMode; // 0x8C (0x1) (Enum = ECameraLookAtMode)
	const unsigned char Unknown1[0x3]; // 0x8D (0x3) > LAST OFFSET
	BOOL bActionFinished :1 ; // 0x90 (0x4)
	const unsigned long: 0;
	float Duration; // 0x94 (0x4)
	float TimeElapsed; // 0x98 (0x4)
	float ThirdPersonPullBackDistance; // 0x9C (0x4)
	float ThirdPersonPushSideDistance; // 0xA0 (0x4)
	float ThirdPersonRaiseUpDistance; // 0xA4 (0x4)
	float Zoom; // 0xA8 (0x4)
	float TransitionInTime; // 0xAC (0x4)
	float TransitionOutTime; // 0xB0 (0x4)
	struct AActor* LookAtTarget; // 0xB4 (0x4)
	struct FName LookAtBone; // 0xB8 (0x8)
};

struct UCameraModifierLookAt {
	struct UObject_Data UObject;
	struct UCameraModifier_Data UCameraModifier;
	struct UGearboxCameraModifier_Data UGearboxCameraModifier;
	struct UCameraModifierLookAt_Data UCameraModifierLookAt;
};

// 0x7C 
struct UDefinitionUITestCaseDefinition_Data {
	// Last Offset: 0x3C
	float ConstantFloat; // 0x3C (0x4)
	struct TArray_float ConstantFloatArray; // 0x40 (0xC)
	float Float; // 0x4C (0x4)
	struct TArray_float FloatArray; // 0x50 (0xC)
	struct UGBXDefinition* EditConstReferencedDefinition; // 0x5C (0x4)
	struct TArray_UGBXDefinitionPtr EditConstArrayOfReferences; // 0x60 (0xC)
	struct UGBXDefinition* ReferencedDefinition; // 0x6C (0x4)
	struct TArray_UGBXDefinitionPtr ArrayOfReferences; // 0x70 (0xC)
};

struct UDefinitionUITestCaseDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UDefinitionUITestCaseDefinition_Data UDefinitionUITestCaseDefinition;
};

// 0x54 
struct USparkNews_Data {
	// Last Offset: 0x3C
	struct TArray_FNewsArticle Articles; // 0x3C (0xC)
	struct FScriptDelegate __OnNewsRetrieved__Delegate; // 0x48 (0xC)
};

struct USparkNews {
	struct UObject_Data UObject;
	struct USparkNews_Data USparkNews;
};

// 0x64 
struct UGearboxAccountEntitlement_Data {
	// Last Offset: 0x3C
	struct FName Identifier; // 0x3C (0x8)
	int Id; // 0x44 (0x4)
	BOOL Consumable :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	int ConsumableAmount; // 0x4C (0x4)
	int Consumed; // 0x50 (0x4)
	struct FString Payload; // 0x54 (0xC)
	int LocallyConsumed; // 0x60 (0x4)
};

struct UGearboxAccountEntitlement {
	struct UObject_Data UObject;
	struct UGearboxAccountEntitlement_Data UGearboxAccountEntitlement;
};

// 0x68 
struct UGearboxAccountOffer_Data {
	// Last Offset: 0x3C
	struct FString TitleEfigs; // 0x3C (0xC)
	struct FString DescriptionEfigs; // 0x48 (0xC)
	int Id; // 0x54 (0x4)
	BOOL Notified :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	struct FString DateUnlocked; // 0x5C (0xC)
};

struct UGearboxAccountOffer {
	struct UObject_Data UObject;
	struct UGearboxAccountOffer_Data UGearboxAccountOffer;
};

// 0x194 
struct APatrolDestination_Data {
	// Last Offset: 0x188
	struct TArray_APatrolDestinationPtr NextPatrolPoints; // 0x188 (0xC)
};

struct APatrolDestination {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APatrolDestination_Data APatrolDestination;
};

// 0xB4 
struct UGearboxSeqAct_TargetPriority_Data {
	// Last Offset: 0xA4
	struct TArray_AActorPtr AITargets; // 0xA4 (0xC)
	float PriorityModifier; // 0xB0 (0x4)
};

struct UGearboxSeqAct_TargetPriority {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGearboxSeqAct_TargetPriority_Data UGearboxSeqAct_TargetPriority;
};

// 0xE8 
struct UGearboxSeqAct_CameraShake_Data {
	// Last Offset: 0xA4
	struct FGearboxViewShakeInfo CameraShake; // 0xA4 (0x44)
};

struct UGearboxSeqAct_CameraShake {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGearboxSeqAct_CameraShake_Data UGearboxSeqAct_CameraShake;
};

// 0xCC 
struct UGearboxSeqAct_PawnClonerLink_Data {
	// Last Offset: 0xB4
	BOOL bEnabled :1 ; // 0xB4 (0x4)
	BOOL bIsSpawning :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	struct TArray_AActorPtr ClonePoints; // 0xB8 (0xC)
	int SpawnedCount; // 0xC4 (0x4)
	float RemainingDelay; // 0xC8 (0x4)
};

struct UGearboxSeqAct_PawnClonerLink {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct UGearboxSeqAct_PawnClonerLink_Data UGearboxSeqAct_PawnClonerLink;
};

// 0x7C 
struct UGFxMovieDrawStyleInstanceData_Data {
	// Last Offset: 0x50
	struct FName ComponentIDName; // 0x50 (0x8)
	struct FName MatIndexName; // 0x58 (0x8)
	BOOL bAlwaysInstance :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	struct UMaterial* MatiSource; // 0x64 (0x4)
	struct FName TextureParameterName; // 0x68 (0x8)
	struct UMeshComponent* Component; // 0x70 (0x4)
	int MaterialIndex; // 0x74 (0x4)
	struct UMaterialInstanceConstant* Mati; // 0x78 (0x4)
};

struct UGFxMovieDrawStyleInstanceData {
	struct UObject_Data UObject;
	struct UGFxMovieDrawStyle_Data UGFxMovieDrawStyle;
	struct UGFxMovieDrawStyleRTT_Data UGFxMovieDrawStyleRTT;
	struct UGFxMovieDrawStyleInstanceData_Data UGFxMovieDrawStyleInstanceData;
};

// 0xC4 
struct USeqEvent_AllSpawned_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_AllSpawned {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_AllSpawned_Data USeqEvent_AllSpawned;
};

// 0x3C 
struct UPopulationMasterAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UPopulationMasterAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UPopulationMasterAttributeContextResolver_Data UPopulationMasterAttributeContextResolver;
};

// 0xC4 
struct USeqEvent_SinglePopulationDeath_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_SinglePopulationDeath {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_SinglePopulationDeath_Data USeqEvent_SinglePopulationDeath;
};

// 0x3C 
struct URES_Rotation_Data {
	// Last Offset: 0x3C
};

struct URES_Rotation {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
	struct URES_Rotation_Data URES_Rotation;
};

// 0x3C 
struct URES_SpecialMove_Data {
	// Last Offset: 0x3C
};

struct URES_SpecialMove {
	struct UObject_Data UObject;
	struct UActionResource_Data UActionResource;
	struct URES_SpecialMove_Data URES_SpecialMove;
};

// 0xC4 
struct USeqEvent_ArrivedAtMoveNode_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_ArrivedAtMoveNode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_ArrivedAtMoveNode_Data USeqEvent_ArrivedAtMoveNode;
};

// 0xC4 
struct USeqEvent_LeavingMoveNode_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_LeavingMoveNode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_LeavingMoveNode_Data USeqEvent_LeavingMoveNode;
};

// 0x3C 
struct UShowDebugHelpers_Data {
	// Last Offset: 0x3C
};

struct UShowDebugHelpers {
	struct UObject_Data UObject;
	struct UShowDebugHelpers_Data UShowDebugHelpers;
};

// 0x1CC 
struct ASkeletalMeshActorGBXMatinee_Data {
	// Last Offset: 0x1CC
};

struct ASkeletalMeshActorGBXMatinee {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshActorGBXMatinee_Data ASkeletalMeshActorGBXMatinee;
};

// 0x278 
struct UGearboxEULAGFxMovie_Data {
	// Last Offset: 0x254
	struct UGearboxEULAGFxObject* GearboxEULAObj; // 0x254 (0x4)
	unsigned char CurrentControllerId; // 0x258 (0x1)
	const unsigned char Unknown1[0x3]; // 0x259 (0x3) > LAST OFFSET
	struct TArray_FEULAData EULAs; // 0x25C (0xC)
	int EULAIndexToDisplay; // 0x268 (0x4)
	struct FScriptDelegate __OnEULAInteractionComplete__Delegate; // 0x26C (0xC)
};

struct UGearboxEULAGFxMovie {
	struct UObject_Data UObject;
	struct UGFxMoviePlayer_Data UGFxMoviePlayer;
	struct UGFxMovie_Data UGFxMovie;
	struct UGearboxGFxMovie_Data UGearboxGFxMovie;
	struct UGearboxEULAGFxMovie_Data UGearboxEULAGFxMovie;
};

// 0x78 
struct UGearboxEULAGFxObject_Data {
	// Last Offset: 0x78
};

struct UGearboxEULAGFxObject {
	struct UObject_Data UObject;
	struct UGFxObject_Data UGFxObject;
	struct UGearboxEULAGFxObject_Data UGearboxEULAGFxObject;
};
]]

table.insert(g_loadedClasses, { "UActorFactoryClone", 2910, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryWireTerminal", 2912, "UActorFactory" })
table.insert(g_loadedClasses, { "UAIDebugCamera", 2914, "UObject" })
table.insert(g_loadedClasses, { "UAITracker", 2916, "UObject" })
table.insert(g_loadedClasses, { "UAnimNodeSpecialMoveBlend", 2918, "UAnimNodeSlot" })
table.insert(g_loadedClasses, { "UAttributeExpressionEvaluator", 2920, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UBehavior_CallFunction", 2922, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeRemoteBehaviorSequenceState", 2924, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeTimer", 2926, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_IsSequenceEnabled", 2928, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_PostAkEvent", 2930, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehaviorHelpers", 2932, "UObject" })
table.insert(g_loadedClasses, { "UCompoundExpressionEvaluator", 2934, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UConditionalAttributeValueResolver", 2936, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UConstantAttributeValueResolver", 2938, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UConstraintAttributeValueResolver", 2940, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UFeatherBoneBlendDefinition", 2942, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGBXActorList", 2944, "UObject" })
table.insert(g_loadedClasses, { "UGBXObjectList", 2946, "UObject" })
table.insert(g_loadedClasses, { "AGearboxAIController", 2948, "AAIController" })
table.insert(g_loadedClasses, { "AGearboxAIMoveNode", 2950, "AActor" })
table.insert(g_loadedClasses, { "AGearboxCameraBasic", 2952, "ACamera" })
table.insert(g_loadedClasses, { "UGearboxCameraModifier", 2954, "UCameraModifier" })
table.insert(g_loadedClasses, { "UGearboxCheatManager", 2956, "UCheatManager" })
table.insert(g_loadedClasses, { "UGearboxDialogInterface", 2958, "UInterface" })
table.insert(g_loadedClasses, { "UGearboxEditorNode", 2960, "UObject" })
table.insert(g_loadedClasses, { "UGearboxEngine", 2962, "UGameEngine" })
table.insert(g_loadedClasses, { "AGearboxGameInfo", 2964, "AGameInfo" })
table.insert(g_loadedClasses, { "UGearboxGFxMovie", 2966, "UGFxMovie" })
table.insert(g_loadedClasses, { "UGFxMovie_StateParent", 2968, "UGearboxGFxMovie" })
table.insert(g_loadedClasses, { "UGearboxGlobals", 2970, "UGearboxEngineGlobals" })
table.insert(g_loadedClasses, { "UGearboxGlobalsDefinition", 2972, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxLocationRequest", 2974, "UObject" })
table.insert(g_loadedClasses, { "UPawnMoveLocationRequest", 2976, "UGearboxLocationRequest" })
table.insert(g_loadedClasses, { "AGearboxPawn", 2978, "AGamePawn" })
table.insert(g_loadedClasses, { "AGearboxPlayerController", 2980, "AGamePlayerController" })
table.insert(g_loadedClasses, { "UGearboxPlayerInput", 2982, "UPlayerInput" })
table.insert(g_loadedClasses, { "AGearboxPlayerReplicationInfo", 2984, "APlayerReplicationInfo" })
table.insert(g_loadedClasses, { "UGearboxProfileSettings", 2986, "UOnlineProfileSettings" })
table.insert(g_loadedClasses, { "UGearboxRenderTextureManager", 2988, "UObject" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_DestroyPopulationActors", 2990, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_ResetPopulationCount", 2992, "USequenceAction" })
table.insert(g_loadedClasses, { "UGearboxSkeletalMeshComponent", 2994, "USkeletalMeshComponent" })
table.insert(g_loadedClasses, { "UGearboxStaticMeshComponent", 2996, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "UGestaltSkeletalMeshDefinition", 2998, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGFxActorMoviePool", 3000, "UObject" })
table.insert(g_loadedClasses, { "UGFxMovieDefinition", 3002, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxEULAGFxMovieDefinition", 3004, "UGFxMovieDefinition" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyle", 3006, "UObject" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleHUD", 3008, "UGFxMovieDrawStyle" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleRTT", 3010, "UGFxMovieDrawStyle" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleComponent", 3012, "UGFxMovieDrawStyleRTT" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleMesh", 3014, "UGFxMovieDrawStyleComponent" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleSprite", 3016, "UGFxMovieDrawStyleComponent" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleSplitscreen", 3018, "UGFxMovieDrawStyle" })
table.insert(g_loadedClasses, { "UGFxMovieManager", 3020, "UObject" })
table.insert(g_loadedClasses, { "UGFxMovieState", 3022, "UObject" })
table.insert(g_loadedClasses, { "UGFxMovieStateCustom", 3024, "UGFxMovieState" })
table.insert(g_loadedClasses, { "UGFxMovieStateFlags", 3026, "UGFxMovieState" })
table.insert(g_loadedClasses, { "UGFxMovieStatePlayerAware", 3028, "UGFxMovieState" })
table.insert(g_loadedClasses, { "UIAIInterface", 3030, "UInterface" })
table.insert(g_loadedClasses, { "UIConstructObject", 3032, "UInterface" })
table.insert(g_loadedClasses, { "UIGFxActorMovie", 3034, "UInterface" })
table.insert(g_loadedClasses, { "UINounAttributeProvider", 3036, "UInterface" })
table.insert(g_loadedClasses, { "UInterfaceGearboxCamera", 3038, "UInterface" })
table.insert(g_loadedClasses, { "UIStreamingDataEvent", 3040, "UInterface" })
table.insert(g_loadedClasses, { "ULeviathanChannel", 3042, "UChannel" })
table.insert(g_loadedClasses, { "UNoContextNeededAttributeContextResolver", 3044, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UNounAttributeValueResolver", 3046, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UObjectFunctionAttributeValueResolver", 3048, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UObjectPropertyContextResolver", 3050, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UPhysicsStateExpressionEvaluator", 3052, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UPopulationAspect", 3054, "UObject" })
table.insert(g_loadedClasses, { "UPopulationBodyTag", 3056, "UGBXDefinition" })
table.insert(g_loadedClasses, { "APopulationEncounter", 3058, "AInfo" })
table.insert(g_loadedClasses, { "UPopulationEncounterRenderingComponent", 3060, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UPopulationOpportunityCombatRenderingComponent", 3062, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UPopulationSpawnedActorTagDefinition", 3064, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UPopUpDebugBarGraph", 3066, "UObject" })
table.insert(g_loadedClasses, { "URandomAttributeValueResolver", 3068, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "URegionDefinition", 3070, "UGBXDefinition" })
table.insert(g_loadedClasses, { "URootMotionDefinition", 3072, "UGBXDefinition" })
table.insert(g_loadedClasses, { "URuleEngineLoadBalanceManager", 3074, "UObject" })
table.insert(g_loadedClasses, { "UScreenSpaceManager", 3076, "UObject" })
table.insert(g_loadedClasses, { "USeqAct_AllPlayersInVolume", 3078, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqCond_CompareLocation", 3080, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_CompareString", 3082, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_GetLanguage", 3084, "USequenceCondition" })
table.insert(g_loadedClasses, { "USimpleMathValueResolver", 3086, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "USpecialMoveComponent", 3088, "UActorComponent" })
table.insert(g_loadedClasses, { "USpecialMoveDefinition", 3090, "UGBXDefinition" })
table.insert(g_loadedClasses, { "USpecialMoveExpressionList", 3092, "USpecialMoveDefinition" })
table.insert(g_loadedClasses, { "USpecialMoveRandom", 3094, "USpecialMoveDefinition" })
table.insert(g_loadedClasses, { "USpecialMoveInterface", 3096, "UInterface" })
table.insert(g_loadedClasses, { "UStateAttributeResolver", 3098, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UTimeValueResolver", 3100, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "AWireManager", 3102, "AActor" })
table.insert(g_loadedClasses, { "AWireTerminal", 3104, "AStaticMeshActor" })
table.insert(g_loadedClasses, { "AWiringActor", 3106, "AStaticMeshActor" })
table.insert(g_loadedClasses, { "UWiringMesh", 3108, "UStaticMesh" })
table.insert(g_loadedClasses, { "UActionResource", 3110, "UObject" })
table.insert(g_loadedClasses, { "UActionSequence", 3112, "UObject" })
table.insert(g_loadedClasses, { "UActionSequenceList", 3114, "UActionSequence" })
table.insert(g_loadedClasses, { "UActionSequencePawn", 3116, "UActionSequence" })
table.insert(g_loadedClasses, { "UAction_PawnMovementBase", 3118, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "UActionSequenceRandom", 3120, "UActionSequence" })
table.insert(g_loadedClasses, { "UAIComponent", 3122, "UActorComponent" })
table.insert(g_loadedClasses, { "UAICostExpressionEvaluator", 3124, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UAIFactoryBase", 3126, "UObject" })
table.insert(g_loadedClasses, { "UGearboxAIFactory", 3128, "UAIFactoryBase" })
table.insert(g_loadedClasses, { "UAIResource", 3130, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UAIResourceExpressionEvaluator", 3132, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UAllegianceExpressionEvaluator", 3134, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UAwarenessZoneCollectionDefinition", 3136, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UAwarenessZoneDefinition", 3138, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UBehavior_SendGbxMessage", 3140, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetFlag", 3142, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBestTargetAttributeContextResolver", 3144, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UCharacterClassMessageDefinition", 3146, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UCoverSearchCriteria", 3148, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UExposureUtilityBase", 3150, "UObject" })
table.insert(g_loadedClasses, { "UExposureUtilityBasicCaching", 3152, "UExposureUtilityBase" })
table.insert(g_loadedClasses, { "UExposureUtilityFixedCost", 3154, "UExposureUtilityBasicCaching" })
table.insert(g_loadedClasses, { "UExposureUtilityStrategy", 3156, "UObject" })
table.insert(g_loadedClasses, { "UFiringBehaviorDefinition", 3158, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UFiringBehaviorManager", 3160, "UObject" })
table.insert(g_loadedClasses, { "UFiringCondition", 3162, "UObject" })
table.insert(g_loadedClasses, { "UFireCond_IsPlayerTarget", 3164, "UFiringCondition" })
table.insert(g_loadedClasses, { "UFiringPattern", 3166, "UObject" })
table.insert(g_loadedClasses, { "UFirePatt_Cone", 3168, "UFiringPattern" })
table.insert(g_loadedClasses, { "UFirePatt_ShrinkingCone", 3170, "UFiringPattern" })
table.insert(g_loadedClasses, { "UFirePatt_StrafeOver", 3172, "UFiringPattern" })
table.insert(g_loadedClasses, { "UFiringZoneCollectionDefinition", 3174, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UFiringZoneDefinition", 3176, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UFlagDefinition", 3178, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UFlagExpressionEvaluator", 3180, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UFlagValueResolver", 3182, "UObject" })
table.insert(g_loadedClasses, { "UMultipleFlagValueResolver", 3184, "UFlagValueResolver" })
table.insert(g_loadedClasses, { "UObjectFunctionFlagValueResolver", 3186, "UFlagValueResolver" })
table.insert(g_loadedClasses, { "UObjectPropertyFlagValueResolver", 3188, "UFlagValueResolver" })
table.insert(g_loadedClasses, { "URuleEngineFlagValueResolver", 3190, "UFlagValueResolver" })
table.insert(g_loadedClasses, { "UGbxMessage", 3192, "UObject" })
table.insert(g_loadedClasses, { "UGbxMessageDefinition", 3194, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGbxMessageManager", 3196, "UObject" })
table.insert(g_loadedClasses, { "AGearboxMind", 3198, "AGearboxAIController" })
table.insert(g_loadedClasses, { "UGearboxAIMoveNodeRenderComponent", 3200, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UGearboxCoverStateManager", 3202, "UObject" })
table.insert(g_loadedClasses, { "UGearboxMindAttributeContextResolver", 3204, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UGearboxNavigationHandle", 3206, "UNavigationHandle" })
table.insert(g_loadedClasses, { "UIFlagProvider", 3208, "UInterface" })
table.insert(g_loadedClasses, { "UIFlagProviderGroup", 3210, "UInterface" })
table.insert(g_loadedClasses, { "UIGbxMessageListener", 3212, "UInterface" })
table.insert(g_loadedClasses, { "UIRuleEngineOwner", 3214, "UInterface" })
table.insert(g_loadedClasses, { "UKnowledgeRecord", 3216, "UObject" })
table.insert(g_loadedClasses, { "ULocationFilter", 3218, "UObject" })
table.insert(g_loadedClasses, { "ULocationFilter_MustHaveLOS", 3220, "ULocationFilter" })
table.insert(g_loadedClasses, { "ULocationFilter_MustNotHaveLOS", 3222, "ULocationFilter" })
table.insert(g_loadedClasses, { "UMindTargetInfo", 3224, "UObject" })
table.insert(g_loadedClasses, { "URule", 3226, "UObject" })
table.insert(g_loadedClasses, { "URuleContainer", 3228, "URule" })
table.insert(g_loadedClasses, { "URulePlaceholder", 3230, "URule" })
table.insert(g_loadedClasses, { "URuleEngine", 3232, "UObject" })
table.insert(g_loadedClasses, { "UGearboxRuleEngine", 3234, "URuleEngine" })
table.insert(g_loadedClasses, { "URuleEventDef", 3236, "UGBXDefinition" })
table.insert(g_loadedClasses, { "URuleSet", 3238, "UObject" })
table.insert(g_loadedClasses, { "UStateRuleSet", 3240, "URuleSet" })
table.insert(g_loadedClasses, { "USearchDirection", 3242, "UObject" })
table.insert(g_loadedClasses, { "USearchDirection_Any", 3244, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_AwayFromMe", 3246, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_AwayFromTarget", 3248, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_MyFacingDirection", 3250, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_OppositeMyFacingDirection", 3252, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_OppositeTargetsFacingDirection", 3254, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_RandomLeftOrRight", 3256, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_TargetsFacingDirection", 3258, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_ToMyLeft", 3260, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_ToMyRight", 3262, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_TowardMe", 3264, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchDirection_TowardTarget", 3266, "USearchDirection" })
table.insert(g_loadedClasses, { "USearchOrigin", 3268, "UObject" })
table.insert(g_loadedClasses, { "USearchOrigin_CurrentLocation", 3270, "USearchOrigin" })
table.insert(g_loadedClasses, { "USearchOrigin_ScriptedMoveTarget", 3272, "USearchOrigin" })
table.insert(g_loadedClasses, { "USearchOrigin_TargetLocation", 3274, "USearchOrigin" })
table.insert(g_loadedClasses, { "USnapshotRecord", 3276, "USnapshotInterface" })
table.insert(g_loadedClasses, { "UGearboxPawnSnapshotRecord", 3278, "USnapshotRecord" })
table.insert(g_loadedClasses, { "UTargetingDefinition", 3280, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UTargetIterator", 3282, "UObject" })
table.insert(g_loadedClasses, { "UTargetIteratorCalculateDistance", 3284, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorCalculateExposure", 3286, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorCheckAwareness", 3288, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorCheckRemoveTarget", 3290, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorForgetAboutTarget", 3292, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeTargetsIAmExposedTo", 3294, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTI_Calc", 3296, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTI_Prioritize", 3298, "UTargetIterator" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeExposedTargets", 3300, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeHumanTargets", 3302, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeNearbyTarget", 3304, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizePreviousTarget", 3306, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeTargetNotBeingShotAt", 3308, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTargetIteratorPrioritizeTargetWhoShootsAtMe", 3310, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTI_PrioritizeBonus", 3312, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UTI_PrioritizeConditional", 3314, "UTI_Prioritize" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_PopulationOpportunityLink", 3316, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "UIPopulationSpawnPoint", 3318, "UInterface" })
table.insert(g_loadedClasses, { "UPopulationDefinition", 3320, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UPopulationFactory", 3322, "UObject" })
table.insert(g_loadedClasses, { "UPopulationFactoryGeneric", 3324, "UPopulationFactory" })
table.insert(g_loadedClasses, { "UPopulationFactoryPopulationDefinition", 3326, "UPopulationFactory" })
table.insert(g_loadedClasses, { "UPopulationMaster", 3328, "UObject" })
table.insert(g_loadedClasses, { "APopulationOpportunity", 3330, "AInfo" })
table.insert(g_loadedClasses, { "APopulationOpportunityArea", 3332, "APopulationOpportunity" })
table.insert(g_loadedClasses, { "APopulationOpportunityCloner", 3334, "APopulationOpportunity" })
table.insert(g_loadedClasses, { "APopulationOpportunityCombat", 3336, "APopulationOpportunity" })
table.insert(g_loadedClasses, { "APopulationOpportunityPoint", 3338, "APopulationOpportunity" })
table.insert(g_loadedClasses, { "UPopulationOpportunityAreaRenderingComponent", 3340, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UPopulationOpportunityAttributeContextResolver", 3342, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UPopulationOpportunityPointRenderingComponent", 3344, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "APopulationPoint", 3346, "AActor" })
table.insert(g_loadedClasses, { "APopulationPoint_Dynamic", 3348, "APopulationPoint" })
table.insert(g_loadedClasses, { "UPopulationPointRenderingComponent", 3350, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "USeqEvent_EncounterWaveComplete", 3352, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_PopulatedActor", 3354, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_PopulatedPoint", 3356, "USequenceEvent" })
table.insert(g_loadedClasses, { "AGearboxHUD", 3358, "AHUD" })
table.insert(g_loadedClasses, { "UAIDefinition", 3360, "UObject" })
table.insert(g_loadedClasses, { "UBehaviorEventFilterBase", 3362, "UObject" })
table.insert(g_loadedClasses, { "UBehaviorKernel", 3364, "UObject" })
table.insert(g_loadedClasses, { "UBehaviorProviderDefinition", 3366, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UAIBehaviorProviderDefinition", 3368, "UBehaviorProviderDefinition" })
table.insert(g_loadedClasses, { "UBehaviorSequenceCustomEnableCondition", 3370, "UObject" })
table.insert(g_loadedClasses, { "UBehaviorSequenceEnableByMultipleConditions", 3372, "UBehaviorSequenceCustomEnableCondition" })
table.insert(g_loadedClasses, { "UIBehaviorConsumer", 3374, "UInterface" })
table.insert(g_loadedClasses, { "UIBehaviorProvider", 3376, "UInterface" })
table.insert(g_loadedClasses, { "UICustomEvent", 3378, "UInterface" })
table.insert(g_loadedClasses, { "UITimerBehavior", 3380, "UInterface" })
table.insert(g_loadedClasses, { "UGearboxAnimDefinition", 3382, "USpecialMoveDefinition" })
table.insert(g_loadedClasses, { "UBehavior_TriggerDialogEvent", 3384, "UBehaviorBase" })
table.insert(g_loadedClasses, { "AGearboxDialogActor", 3386, "AActor" })
table.insert(g_loadedClasses, { "UGearboxDialogComponent", 3388, "UActorComponent" })
table.insert(g_loadedClasses, { "UGearboxDialogEventData", 3390, "UObject" })
table.insert(g_loadedClasses, { "UGearboxDialogEventTag", 3392, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxDialogGlobalsDefinition", 3394, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxDialogGroup", 3396, "UObject" })
table.insert(g_loadedClasses, { "UGearboxDialogTemplateGroup", 3398, "UGearboxDialogGroup" })
table.insert(g_loadedClasses, { "UGearboxDialogManager", 3400, "UObject" })
table.insert(g_loadedClasses, { "UGearboxDialogNameTag", 3402, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxDialogPriority", 3404, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGearboxDialogNode", 3406, "UGearboxEditorNode" })
table.insert(g_loadedClasses, { "UGearboxDialogAction", 3408, "UGearboxDialogNode" })
table.insert(g_loadedClasses, { "UGearboxDialogAct_Chance", 3410, "UGearboxDialogAction" })
table.insert(g_loadedClasses, { "UGearboxDialogAct_Compare", 3412, "UGearboxDialogAction" })
table.insert(g_loadedClasses, { "UGearboxDialogAct_ObjectParameterSwitch", 3414, "UGearboxDialogAction" })
table.insert(g_loadedClasses, { "UGearboxDialogNonTemplateAction", 3416, "UGearboxDialogAction" })
table.insert(g_loadedClasses, { "UGearboxDialogAct_Talk", 3418, "UGearboxDialogNonTemplateAction" })
table.insert(g_loadedClasses, { "UGearboxDialogTemplateAction", 3420, "UGearboxDialogAction" })
table.insert(g_loadedClasses, { "UGearboxDialogAct_Trigger", 3422, "UGearboxDialogTemplateAction" })
table.insert(g_loadedClasses, { "UGearboxDialogEvent", 3424, "UGearboxDialogNode" })
table.insert(g_loadedClasses, { "UGearboxDialogTemplateEvent", 3426, "UGearboxDialogEvent" })
table.insert(g_loadedClasses, { "UGearboxDialogVariable", 3428, "UGearboxDialogNode" })
table.insert(g_loadedClasses, { "UGearboxDialogVar_Instigator", 3430, "UGearboxDialogVariable" })
table.insert(g_loadedClasses, { "UGearboxDialogVar_LastTalker", 3432, "UGearboxDialogVariable" })
table.insert(g_loadedClasses, { "UGearboxDialogVar_NameTag", 3434, "UGearboxDialogVariable" })
table.insert(g_loadedClasses, { "UGearboxDialogVar_Other", 3436, "UGearboxDialogVariable" })
table.insert(g_loadedClasses, { "UGearboxDialogVar_Random", 3438, "UGearboxDialogVariable" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_ToggleDialog", 3440, "USequenceAction" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_TriggerDialog", 3442, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_TriggerDialogName", 3444, "UGearboxSeqAct_TriggerDialog" })
table.insert(g_loadedClasses, { "UGearboxAccountActions", 3446, "UObject" })
table.insert(g_loadedClasses, { "UGearboxAccountData", 3448, "UObject" })
table.insert(g_loadedClasses, { "UGearboxProcess", 3450, "UObject" })
table.insert(g_loadedClasses, { "USparkInitializationProcess", 3452, "UGearboxProcess" })
table.insert(g_loadedClasses, { "ULeviathanService", 3454, "UObject" })
table.insert(g_loadedClasses, { "USparkInterface", 3456, "UInterface" })
table.insert(g_loadedClasses, { "USparkInterfaceImpl", 3458, "UObject" })
table.insert(g_loadedClasses, { "USparkServiceConfiguration", 3460, "UObject" })
table.insert(g_loadedClasses, { "USparkTypes", 3462, "UObject" })
table.insert(g_loadedClasses, { "UAction_ChangeRuleSet", 38896, "UActionSequence" })
table.insert(g_loadedClasses, { "URES_RuleSetChange", 38900, "UActionResource" })
table.insert(g_loadedClasses, { "UAction_FaceThreat", 38903, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "URES_FacingPolicy", 38910, "UActionResource" })
table.insert(g_loadedClasses, { "UAction_MoveRandom", 38911, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "UAction_MoveTo", 38913, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "URES_Movement", 39141, "UActionResource" })
table.insert(g_loadedClasses, { "UAction_PopRuleSet", 39142, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "UAction_PushRuleSet", 39145, "UActionSequencePawn" })
table.insert(g_loadedClasses, { "UActorAttributeContextResolver", 39163, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UAIComponentAttributeContextResolver", 39279, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UAIStateBase", 39598, "UGearboxEditorNode" })
table.insert(g_loadedClasses, { "UAIState", 39600, "UAIStateBase" })
table.insert(g_loadedClasses, { "UAIState_Priority", 39602, "UAIStateBase" })
table.insert(g_loadedClasses, { "UAIState_Random", 39604, "UAIStateBase" })
table.insert(g_loadedClasses, { "UAIState_Sequential", 39606, "UAIStateBase" })
table.insert(g_loadedClasses, { "UBehavior_AIHold", 39695, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_AIPriority", 39710, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_AITargeting", 39724, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeAnyBehaviorSequenceState", 39747, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeLocalBehaviorSequenceState", 39763, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_CompareBool", 39831, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_CompareValues", 39843, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_CustomEvent", 39856, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_Delay", 39870, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_Gate", 39880, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_GetFloatParam", 39892, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_GetObjectParam", 39906, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_GetVectorParam", 39920, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_InterpolateFloatOverTime", 39939, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_Metronome", 39970, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ModifyTimer", 39985, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetFloatParam", 40111, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetObjectParam", 40122, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetVectorParam", 40133, "UParameterBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SpecialMove", 40154, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SpecialMoveStop", 40188, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_StartAkAmbientSound", 40202, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_StopAkAmbientSound", 40216, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_StopDialog", 40230, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ToggleDialog", 40244, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UCameraModifierCrossfade", 40603, "UGearboxCameraModifier" })
table.insert(g_loadedClasses, { "UCameraModifierLookAt", 40645, "UGearboxCameraModifier" })
table.insert(g_loadedClasses, { "UDefinitionUITestCaseDefinition", 40759, "UGBXDefinition" })
table.insert(g_loadedClasses, { "USparkNews", 41098, "UObject" })
table.insert(g_loadedClasses, { "UGearboxAccountEntitlement", 41282, "UObject" })
table.insert(g_loadedClasses, { "UGearboxAccountOffer", 41299, "UObject" })
table.insert(g_loadedClasses, { "APatrolDestination", 41562, "AActor" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_TargetPriority", 42593, "USequenceAction" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_CameraShake", 43109, "USequenceAction" })
table.insert(g_loadedClasses, { "UGearboxSeqAct_PawnClonerLink", 43422, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "UGFxMovieDrawStyleInstanceData", 43595, "UGFxMovieDrawStyleRTT" })
table.insert(g_loadedClasses, { "USeqEvent_AllSpawned", 43899, "USequenceEvent" })
table.insert(g_loadedClasses, { "UPopulationMasterAttributeContextResolver", 44208, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "USeqEvent_SinglePopulationDeath", 44386, "USequenceEvent" })
table.insert(g_loadedClasses, { "URES_Rotation", 44539, "UActionResource" })
table.insert(g_loadedClasses, { "URES_SpecialMove", 44542, "UActionResource" })
table.insert(g_loadedClasses, { "USeqEvent_ArrivedAtMoveNode", 44620, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_LeavingMoveNode", 44625, "USequenceEvent" })
table.insert(g_loadedClasses, { "UShowDebugHelpers", 44642, "UObject" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorGBXMatinee", 44656, "ASkeletalMeshActor" })
table.insert(g_loadedClasses, { "UGearboxEULAGFxMovie", 45052, "UGearboxGFxMovie" })
table.insert(g_loadedClasses, { "UGearboxEULAGFxObject", 45060, "UGFxObject" })
