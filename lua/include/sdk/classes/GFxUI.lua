// 0x4C 
struct UGFxEngine_Data {
	// Last Offset: 0x3C
	struct TArray_FGCReference GCReferences; // 0x3C (0xC)
	int RefCount; // 0x48 (0x4)
};

struct UGFxEngine {
	struct UObject_Data UObject;
	struct UGFxEngine_Data UGFxEngine;
};

// 0x3C 
struct UGFxFSCmdHandler_Data {
	// Last Offset: 0x3C
};

struct UGFxFSCmdHandler {
	struct UObject_Data UObject;
	struct UGFxFSCmdHandler_Data UGFxFSCmdHandler;
};

// 0x7C 
struct UGFxInteraction_Data {
	// Last Offset: 0x78
	struct FPointer VfTable_FCallbackEventDevice; // 0x78 (0x4)
};

struct UGFxInteraction {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UGFxInteraction_Data UGFxInteraction;
};

// 0x40 
struct UGFxManager_Data {
	// Last Offset: 0x3C
	struct UGFxManagerDefinition* MyDefinition; // 0x3C (0x4)
};

struct UGFxManager {
	struct UObject_Data UObject;
	struct UGFxManager_Data UGFxManager;
};

// 0x54 
struct UGFxManagerDefinition_Data {
	// Last Offset: 0x3C
	struct UClass* ManagerClass; // 0x3C (0x4)
	struct FScriptInterface GFxDialogBox; // 0x40 (0x8)
	struct TArray_FAkEventResolver InteractionSounds; // 0x48 (0xC)
};

struct UGFxManagerDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGFxManagerDefinition_Data UGFxManagerDefinition;
};

// 0x1C8 
struct UGFxMoviePlayer_Data {
	// Last Offset: 0x3C
	struct FPointer pMovie; // 0x3C (0x4)
	struct FPointer pCaptureKeys; // 0x40 (0x4)
	struct FPointer pFocusIgnoreKeys; // 0x44 (0x4)
	const unsigned char Unknown1[0x3C]; // 0x48 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown2[0x3C]; // 0x84 (0x3C) UNKNOWN PROPERTY
	int NextASUObject; // 0xC0 (0x4)
	struct USwfMovie* MovieInfo; // 0xC4 (0x4)
	BOOL bMovieIsOpen :1 ; // 0xC8 (0x4)
	BOOL bDisplayWithHudOff :1 ; // 0xC8 (0x4)
	BOOL bEnableGammaCorrection :1 ; // 0xC8 (0x4)
	BOOL bWidgetsInitializedThisFrame :1 ; // 0xC8 (0x4)
	BOOL bLogUnhandedWidgetInitializations :1 ; // 0xC8 (0x4)
	BOOL bAllowInput :1 ; // 0xC8 (0x4)
	BOOL bAllowFocus :1 ; // 0xC8 (0x4)
	BOOL bAutoPlay :1 ; // 0xC8 (0x4)
	BOOL bPauseGameWhileActive :1 ; // 0xC8 (0x4)
	BOOL bCloseOnLevelChange :1 ; // 0xC8 (0x4)
	BOOL bOnlyOwnerFocusable :1 ; // 0xC8 (0x4)
	BOOL bForceFullViewport :1 ; // 0xC8 (0x4)
	BOOL bDiscardNonOwnerInput :1 ; // 0xC8 (0x4)
	BOOL bCaptureInput :1 ; // 0xC8 (0x4)
	BOOL bIgnoreMouseInput :1 ; // 0xC8 (0x4)
	BOOL bAcceptsUnregisteredInput :1 ; // 0xC8 (0x4)
	BOOL bIsSplitscreenLayoutModified :1 ; // 0xC8 (0x4)
	BOOL bInputAllKeys :1 ; // 0xC8 (0x4)
	BOOL bInputOwnerOnly :1 ; // 0xC8 (0x4)
	BOOL bKeepTopMost :1 ; // 0xC8 (0x4)
	BOOL bBlurLesserMovies :1 ; // 0xC8 (0x4)
	BOOL bHideLesserMovies :1 ; // 0xC8 (0x4)
	BOOL bIsPriorityBlurred :1 ; // 0xC8 (0x4)
	BOOL bIsPriorityHidden :1 ; // 0xC8 (0x4)
	BOOL bIgnoreVisibilityEffect :1 ; // 0xC8 (0x4)
	BOOL bIgnoreBlurEffect :1 ; // 0xC8 (0x4)
	const unsigned long: 0;
	struct UTextureRenderTarget2D* RenderTexture; // 0xCC (0x4)
	int LocalPlayerOwnerIndex; // 0xD0 (0x4)
	struct UObject* ExternalInterface; // 0xD4 (0x4)
	struct TArray_FName CaptureKeys; // 0xD8 (0xC)
	struct TArray_FName FocusIgnoreKeys; // 0xE4 (0xC)
	unsigned char SceneDPG; // 0xF0 (0x1) (Enum = ESceneDepthPriorityGroup)
	unsigned char TimingMode; // 0xF1 (0x1) (Enum = GFxTimingMode)
	unsigned char RenderTextureMode; // 0xF2 (0x1) (Enum = GFxRenderTextureMode)
	unsigned char Priority; // 0xF3 (0x1)
	struct TArray_FExternalTexture ExternalTextures; // 0xF4 (0xC)
	struct TArray_FSoundThemeBinding SoundThemes; // 0x100 (0xC)
	struct TArray_FGFxDataStoreBinding DataStoreBindings; // 0x10C (0xC)
	struct UGFxDataStoreSubscriber* DataStoreSubscriber; // 0x118 (0x4)
	struct TArray_FGFxWidgetBinding WidgetBindings; // 0x11C (0xC)
	const unsigned char Unknown3[0x3C]; // 0x128 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown4[0x3C]; // 0x164 (0x3C) UNKNOWN PROPERTY
	struct UGFxObject* SplitscreenLayoutObject; // 0x1A0 (0x4)
	int SplitscreenLayoutYAdjust; // 0x1A4 (0x4)
	int DepthPriority; // 0x1A8 (0x4)
	float LastKeyInputTime; // 0x1AC (0x4)
	struct FScriptDelegate __OnPostAdvance__Delegate; // 0x1B0 (0xC)
	struct FScriptDelegate __OnInputKey__Delegate; // 0x1BC (0xC)
};

struct UGFxMoviePlayer {
	struct UObject_Data UObject;
	struct UGFxMoviePlayer_Data UGFxMoviePlayer;
};

// 0x1C8 
struct UGFxMovie_Data {
	// Last Offset: 0x1C8
};

struct UGFxMovie {
	struct UObject_Data UObject;
	struct UGFxMoviePlayer_Data UGFxMoviePlayer;
	struct UGFxMovie_Data UGFxMovie;
};

// 0x78 
struct UGFxObject_Data {
	// Last Offset: 0x3C
	int Value[12]; // 0x3C (0x30)
	struct TArray_FGFxWidgetBinding SubWidgetBindings; // 0x6C (0xC)
};

struct UGFxObject {
	struct UObject_Data UObject;
	struct UGFxObject_Data UGFxObject;
};

// 0x84 
struct UGFxClikWidget_Data {
	// Last Offset: 0x78
	struct FScriptDelegate __EventListener__Delegate; // 0x78 (0xC)
};

struct UGFxClikWidget {
	struct UObject_Data UObject;
	struct UGFxObject_Data UGFxObject;
	struct UGFxClikWidget_Data UGFxClikWidget;
};

// 0x6C 
struct UGFxRawData_Data {
	// Last Offset: 0x3C
	struct TArray_unsigned_char RawData; // 0x3C (0xC)
	struct TArray_FString ReferencedSwfs; // 0x48 (0xC)
	struct TArray_UObjectPtr References; // 0x54 (0xC)
	struct TArray_UObjectPtr UserReferences; // 0x60 (0xC)
};

struct UGFxRawData {
	struct UObject_Data UObject;
	struct UGFxRawData_Data UGFxRawData;
};

// 0xB4 
struct USwfMovie_Data {
	// Last Offset: 0x6C
	BOOL bUsesFontlib :1 ; // 0x6C (0x4)
	BOOL bSetSRGBOnImportedTextures :1 ; // 0x6C (0x4)
	BOOL bPackTextures :1 ; // 0x6C (0x4)
	BOOL bPreload :1 ; // 0x6C (0x4)
	BOOL bDoNotPlaceInVM :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	int PackTextureSize; // 0x70 (0x4)
	unsigned char TextureRescale; // 0x74 (0x1) (Enum = FlashTextureRescale)
	unsigned char DesiredMemArena; // 0x75 (0x1) (Enum = SwfMovieArenas)
	const unsigned char Unknown1[0x2]; // 0x76 (0x2) > LAST OFFSET
	struct FString TextureFormat; // 0x78 (0xC)
	int RTTextures; // 0x84 (0x4)
	int RTVideoTextures; // 0x88 (0x4)
	int MovieInfo[9]; // 0x8C (0x24)
	struct FPointer pMovieDef; // 0xB0 (0x4)
};

struct USwfMovie {
	struct UObject_Data UObject;
	struct UGFxRawData_Data UGFxRawData;
	struct USwfMovie_Data USwfMovie;
};

// 0xB4 
struct UFlashMovie_Data {
	// Last Offset: 0xB4
};

struct UFlashMovie {
	struct UObject_Data UObject;
	struct UGFxRawData_Data UGFxRawData;
	struct USwfMovie_Data USwfMovie;
	struct UFlashMovie_Data UFlashMovie;
};

// 0xB4 
struct UGFxMovieInfo_Data {
	// Last Offset: 0xB4
};

struct UGFxMovieInfo {
	struct UObject_Data UObject;
	struct UGFxRawData_Data UGFxRawData;
	struct USwfMovie_Data USwfMovie;
	struct UGFxMovieInfo_Data UGFxMovieInfo;
};

// 0x6C 
struct UGFxValue_Data {
	// Last Offset: 0x3C
	int Value[12]; // 0x3C (0x30)
};

struct UGFxValue {
	struct UObject_Data UObject;
	struct UGFxValue_Data UGFxValue;
};

// 0xAC 
struct UGFxAction_CloseMovie_Data {
	// Last Offset: 0xA4
	struct UGFxMoviePlayer* Movie; // 0xA4 (0x4)
	BOOL bUnload :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
};

struct UGFxAction_CloseMovie {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_CloseMovie_Data UGFxAction_CloseMovie;
};

// 0xB4 
struct UGFxAction_GetVariable_Data {
	// Last Offset: 0xA4
	struct UGFxMoviePlayer* Movie; // 0xA4 (0x4)
	struct FString Variable; // 0xA8 (0xC)
};

struct UGFxAction_GetVariable {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_GetVariable_Data UGFxAction_GetVariable;
};

// 0xC0 
struct UGFxAction_Invoke_Data {
	// Last Offset: 0xA4
	struct UGFxMoviePlayer* Movie; // 0xA4 (0x4)
	struct FString MethodName; // 0xA8 (0xC)
	struct TArray_FASValue Arguments; // 0xB4 (0xC)
};

struct UGFxAction_Invoke {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_Invoke_Data UGFxAction_Invoke;
};

// 0xD8 
struct UGFxAction_OpenMovie_Data {
	// Last Offset: 0xA4
	struct USwfMovie* Movie; // 0xA4 (0x4)
	struct UClass* MoviePlayerClass; // 0xA8 (0x4)
	struct UGFxMoviePlayer* MoviePlayer; // 0xAC (0x4)
	struct UGFxMoviePlayer* LegacyMovieObject; // 0xB0 (0x4)
	BOOL bTakeFocus :1 ; // 0xB4 (0x4)
	BOOL bCaptureInput :1 ; // 0xB4 (0x4)
	BOOL bStartPaused :1 ; // 0xB4 (0x4)
	BOOL bEnableGammaCorrection :1 ; // 0xB4 (0x4)
	BOOL bDisplayWithHudOff :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	unsigned char RenderTextureMode; // 0xB8 (0x1) (Enum = GFxRenderTextureMode)
	unsigned char ScaleMode; // 0xB9 (0x1) (Enum = GFxScaleMode)
	unsigned char AlignMode; // 0xBA (0x1) (Enum = GFxAlign)
	const unsigned char Unknown1[0x1]; // 0xBB (0x1) > LAST OFFSET
	struct UTextureRenderTarget2D* RenderTexture; // 0xBC (0x4)
	struct TArray_FName CaptureKeys; // 0xC0 (0xC)
	struct TArray_FName FocusIgnoreKeys; // 0xCC (0xC)
};

struct UGFxAction_OpenMovie {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_OpenMovie_Data UGFxAction_OpenMovie;
};

// 0xB4 
struct UGFxAction_SetCaptureKeys_Data {
	// Last Offset: 0xA4
	struct UGFxMoviePlayer* Movie; // 0xA4 (0x4)
	struct TArray_FName CaptureKeys; // 0xA8 (0xC)
};

struct UGFxAction_SetCaptureKeys {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_SetCaptureKeys_Data UGFxAction_SetCaptureKeys;
};

// 0xB4 
struct UGFxAction_SetVariable_Data {
	// Last Offset: 0xA4
	struct UGFxMoviePlayer* Movie; // 0xA4 (0x4)
	struct FString Variable; // 0xA8 (0xC)
};

struct UGFxAction_SetVariable {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct UGFxAction_SetVariable_Data UGFxAction_SetVariable;
};

// 0xD8 
struct UGFxEvent_FSCommand_Data {
	// Last Offset: 0xC4
	struct USwfMovie* Movie; // 0xC4 (0x4)
	struct FString FSCommand; // 0xC8 (0xC)
	struct UGFxFSCmdHandler_Kismet* Handler; // 0xD4 (0x4)
};

struct UGFxEvent_FSCommand {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct UGFxEvent_FSCommand_Data UGFxEvent_FSCommand;
};

// 0x3C 
struct UGFxFSCmdHandler_Kismet_Data {
	// Last Offset: 0x3C
};

struct UGFxFSCmdHandler_Kismet {
	struct UObject_Data UObject;
	struct UGFxFSCmdHandler_Data UGFxFSCmdHandler;
	struct UGFxFSCmdHandler_Kismet_Data UGFxFSCmdHandler_Kismet;
};

// 0x44 
struct UGFxDataStoreSubscriber_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IUIDataStorePublisher; // 0x3C (0x4)
	struct UGFxMoviePlayer* Movie; // 0x40 (0x4)
};

struct UGFxDataStoreSubscriber {
	struct UObject_Data UObject;
	struct UGFxDataStoreSubscriber_Data UGFxDataStoreSubscriber;
};

table.insert(g_loadedClasses, { "UGFxEngine", 2863, "UObject" })
table.insert(g_loadedClasses, { "UGFxFSCmdHandler", 2865, "UObject" })
table.insert(g_loadedClasses, { "UGFxInteraction", 2867, "UInteraction" })
table.insert(g_loadedClasses, { "UGFxManager", 2869, "UObject" })
table.insert(g_loadedClasses, { "UGFxManagerDefinition", 2871, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGFxMoviePlayer", 2873, "UObject" })
table.insert(g_loadedClasses, { "UGFxMovie", 2875, "UGFxMoviePlayer" })
table.insert(g_loadedClasses, { "UGFxObject", 2877, "UObject" })
table.insert(g_loadedClasses, { "UGFxClikWidget", 2879, "UGFxObject" })
table.insert(g_loadedClasses, { "UGFxRawData", 2881, "UObject" })
table.insert(g_loadedClasses, { "USwfMovie", 2883, "UGFxRawData" })
table.insert(g_loadedClasses, { "UFlashMovie", 2885, "USwfMovie" })
table.insert(g_loadedClasses, { "UGFxMovieInfo", 2887, "USwfMovie" })
table.insert(g_loadedClasses, { "UGFxValue", 2889, "UObject" })
table.insert(g_loadedClasses, { "UGFxAction_CloseMovie", 2891, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxAction_GetVariable", 2893, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxAction_Invoke", 2895, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxAction_OpenMovie", 2897, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxAction_SetCaptureKeys", 2899, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxAction_SetVariable", 2901, "USequenceAction" })
table.insert(g_loadedClasses, { "UGFxEvent_FSCommand", 2903, "USequenceEvent" })
table.insert(g_loadedClasses, { "UGFxFSCmdHandler_Kismet", 2905, "UGFxFSCmdHandler" })
table.insert(g_loadedClasses, { "UGFxDataStoreSubscriber", 2907, "UObject" })
