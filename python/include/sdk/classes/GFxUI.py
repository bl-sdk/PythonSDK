
from ctypes import *
import BL2SDK





class  UGFxEngine_Data(Structure):
	_fields_ = [
		("GCReferences", TArray_FGCReference),
		("RefCount", c_int),
	]

class  UGFxEngine(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxEngine", UGFxEngine_Data),
	]


class  UGFxFSCmdHandler_Data(Structure):
	_fields_ = []

class  UGFxFSCmdHandler(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxFSCmdHandler", UGFxFSCmdHandler_Data),
	]


class  UGFxInteraction_Data(Structure):
	_fields_ = [
		("VfTable_FCallbackEventDevice", FPointer),
	]

class  UGFxInteraction(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UUIRoot", UUIRoot_Data),
		("UInteraction", UInteraction_Data),
		("UGFxInteraction", UGFxInteraction_Data),
	]


class  UGFxManager_Data(Structure):
	_fields_ = [
		("MyDefinition", POINTER(UGFxManagerDefinition)),
	]

class  UGFxManager(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxManager", UGFxManager_Data),
	]


class  UGFxManagerDefinition_Data(Structure):
	_fields_ = [
		("ManagerClass", POINTER(UClass)),
		("GFxDialogBox", FScriptInterface),
		("InteractionSounds", TArray_FAkEventResolver),
	]

class  UGFxManagerDefinition(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGBXDefinition", UGBXDefinition_Data),
		("UGFxManagerDefinition", UGFxManagerDefinition_Data),
	]


class  UGFxMoviePlayer_Data(Structure):
	_fields_ = [
		("pMovie", FPointer),
		("pCaptureKeys", FPointer),
		("pFocusIgnoreKeys", FPointer),
		("Unknown1", c_ubyte, 0x),
		("Unknown2", c_ubyte, 0x),
		("NextASUObject", c_int),
		("MovieInfo", POINTER(USwfMovie)),
		("bMovieIsOpen", c_bool, 1),
		("bDisplayWithHudOff", c_bool, 1),
		("bEnableGammaCorrection", c_bool, 1),
		("bWidgetsInitializedThisFrame", c_bool, 1),
		("bLogUnhandedWidgetInitializations", c_bool, 1),
		("bAllowInput", c_bool, 1),
		("bAllowFocus", c_bool, 1),
		("bAutoPlay", c_bool, 1),
		("bPauseGameWhileActive", c_bool, 1),
		("bCloseOnLevelChange", c_bool, 1),
		("bOnlyOwnerFocusable", c_bool, 1),
		("bForceFullViewport", c_bool, 1),
		("bDiscardNonOwnerInput", c_bool, 1),
		("bCaptureInput", c_bool, 1),
		("bIgnoreMouseInput", c_bool, 1),
		("bAcceptsUnregisteredInput", c_bool, 1),
		("bIsSplitscreenLayoutModified", c_bool, 1),
		("bInputAllKeys", c_bool, 1),
		("bInputOwnerOnly", c_bool, 1),
		("bKeepTopMost", c_bool, 1),
		("bBlurLesserMovies", c_bool, 1),
		("bHideLesserMovies", c_bool, 1),
		("bIsPriorityBlurred", c_bool, 1),
		("bIsPriorityHidden", c_bool, 1),
		("bIgnoreVisibilityEffect", c_bool, 1),
		("bIgnoreBlurEffect", c_bool, 1),
		("", c_ulong, 0),
		("RenderTexture", POINTER(UTextureRenderTarget2D)),
		("LocalPlayerOwnerIndex", c_int),
		("ExternalInterface", POINTER(UObject)),
		("CaptureKeys", TArray_FName),
		("FocusIgnoreKeys", TArray_FName),
		("SceneDPG", c_ubyte),
		("TimingMode", c_ubyte),
		("RenderTextureMode", c_ubyte),
		("Priority", c_ubyte),
		("ExternalTextures", TArray_FExternalTexture),
		("SoundThemes", TArray_FSoundThemeBinding),
		("DataStoreBindings", TArray_FGFxDataStoreBinding),
		("DataStoreSubscriber", POINTER(UGFxDataStoreSubscriber)),
		("WidgetBindings", TArray_FGFxWidgetBinding),
		("Unknown3", c_ubyte, 0x),
		("Unknown4", c_ubyte, 0x),
		("SplitscreenLayoutObject", POINTER(UGFxObject)),
		("SplitscreenLayoutYAdjust", c_int),
		("DepthPriority", c_int),
		("LastKeyInputTime", c_float),
		("__OnPostAdvance__Delegate", FScriptDelegate),
		("__OnInputKey__Delegate", FScriptDelegate),
	]

class  UGFxMoviePlayer(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxMoviePlayer", UGFxMoviePlayer_Data),
	]


class  UGFxMovie_Data(Structure):
	_fields_ = []

class  UGFxMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxMoviePlayer", UGFxMoviePlayer_Data),
		("UGFxMovie", UGFxMovie_Data),
	]


class  UGFxObject_Data(Structure):
	_fields_ = [
		("Value", int * 12),
		("SubWidgetBindings", TArray_FGFxWidgetBinding),
	]

class  UGFxObject(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxObject", UGFxObject_Data),
	]


class  UGFxClikWidget_Data(Structure):
	_fields_ = [
		("__EventListener__Delegate", FScriptDelegate),
	]

class  UGFxClikWidget(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxObject", UGFxObject_Data),
		("UGFxClikWidget", UGFxClikWidget_Data),
	]


class  UGFxRawData_Data(Structure):
	_fields_ = [
		("RawData", TArray_unsigned_char),
		("ReferencedSwfs", TArray_FString),
		("References", TArray_UObjectPtr),
		("UserReferences", TArray_UObjectPtr),
	]

class  UGFxRawData(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxRawData", UGFxRawData_Data),
	]


class  USwfMovie_Data(Structure):
	_fields_ = [
		("bUsesFontlib", c_bool, 1),
		("bSetSRGBOnImportedTextures", c_bool, 1),
		("bPackTextures", c_bool, 1),
		("bPreload", c_bool, 1),
		("bDoNotPlaceInVM", c_bool, 1),
		("", c_ulong, 0),
		("PackTextureSize", c_int),
		("TextureRescale", c_ubyte),
		("DesiredMemArena", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("TextureFormat", FString),
		("RTTextures", c_int),
		("RTVideoTextures", c_int),
		("MovieInfo", int * 9),
		("pMovieDef", FPointer),
	]

class  USwfMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxRawData", UGFxRawData_Data),
		("USwfMovie", USwfMovie_Data),
	]


class  UFlashMovie_Data(Structure):
	_fields_ = []

class  UFlashMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxRawData", UGFxRawData_Data),
		("USwfMovie", USwfMovie_Data),
		("UFlashMovie", UFlashMovie_Data),
	]


class  UGFxMovieInfo_Data(Structure):
	_fields_ = []

class  UGFxMovieInfo(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxRawData", UGFxRawData_Data),
		("USwfMovie", USwfMovie_Data),
		("UGFxMovieInfo", UGFxMovieInfo_Data),
	]


class  UGFxValue_Data(Structure):
	_fields_ = [
		("Value", int * 12),
	]

class  UGFxValue(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxValue", UGFxValue_Data),
	]


class  UGFxAction_CloseMovie_Data(Structure):
	_fields_ = [
		("Movie", POINTER(UGFxMoviePlayer)),
		("bUnload", c_bool, 1),
		("", c_ulong, 0),
	]

class  UGFxAction_CloseMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_CloseMovie", UGFxAction_CloseMovie_Data),
	]


class  UGFxAction_GetVariable_Data(Structure):
	_fields_ = [
		("Movie", POINTER(UGFxMoviePlayer)),
		("Variable", FString),
	]

class  UGFxAction_GetVariable(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_GetVariable", UGFxAction_GetVariable_Data),
	]


class  UGFxAction_Invoke_Data(Structure):
	_fields_ = [
		("Movie", POINTER(UGFxMoviePlayer)),
		("MethodName", FString),
		("Arguments", TArray_FASValue),
	]

class  UGFxAction_Invoke(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_Invoke", UGFxAction_Invoke_Data),
	]


class  UGFxAction_OpenMovie_Data(Structure):
	_fields_ = [
		("Movie", POINTER(USwfMovie)),
		("MoviePlayerClass", POINTER(UClass)),
		("MoviePlayer", POINTER(UGFxMoviePlayer)),
		("LegacyMovieObject", POINTER(UGFxMoviePlayer)),
		("bTakeFocus", c_bool, 1),
		("bCaptureInput", c_bool, 1),
		("bStartPaused", c_bool, 1),
		("bEnableGammaCorrection", c_bool, 1),
		("bDisplayWithHudOff", c_bool, 1),
		("", c_ulong, 0),
		("RenderTextureMode", c_ubyte),
		("ScaleMode", c_ubyte),
		("AlignMode", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("RenderTexture", POINTER(UTextureRenderTarget2D)),
		("CaptureKeys", TArray_FName),
		("FocusIgnoreKeys", TArray_FName),
	]

class  UGFxAction_OpenMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_OpenMovie", UGFxAction_OpenMovie_Data),
	]


class  UGFxAction_SetCaptureKeys_Data(Structure):
	_fields_ = [
		("Movie", POINTER(UGFxMoviePlayer)),
		("CaptureKeys", TArray_FName),
	]

class  UGFxAction_SetCaptureKeys(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_SetCaptureKeys", UGFxAction_SetCaptureKeys_Data),
	]


class  UGFxAction_SetVariable_Data(Structure):
	_fields_ = [
		("Movie", POINTER(UGFxMoviePlayer)),
		("Variable", FString),
	]

class  UGFxAction_SetVariable(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("UGFxAction_SetVariable", UGFxAction_SetVariable_Data),
	]


class  UGFxEvent_FSCommand_Data(Structure):
	_fields_ = [
		("Movie", POINTER(USwfMovie)),
		("FSCommand", FString),
		("Handler", POINTER(UGFxFSCmdHandler_Kismet)),
	]

class  UGFxEvent_FSCommand(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceEvent", USequenceEvent_Data),
		("UGFxEvent_FSCommand", UGFxEvent_FSCommand_Data),
	]


class  UGFxFSCmdHandler_Kismet_Data(Structure):
	_fields_ = []

class  UGFxFSCmdHandler_Kismet(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxFSCmdHandler", UGFxFSCmdHandler_Data),
		("UGFxFSCmdHandler_Kismet", UGFxFSCmdHandler_Kismet_Data),
	]


class  UGFxDataStoreSubscriber_Data(Structure):
	_fields_ = [
		("VfTable_IUIDataStorePublisher", FPointer),
		("Movie", POINTER(UGFxMoviePlayer)),
	]

class  UGFxDataStoreSubscriber(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGFxDataStoreSubscriber", UGFxDataStoreSubscriber_Data),
	]

BL2SDK.g_loadedClasses += [("UGFxEngine", 2863, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxFSCmdHandler", 2865, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxInteraction", 2867, "UInteraction")]
BL2SDK.g_loadedClasses += [("UGFxManager", 2869, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxManagerDefinition", 2871, "UGBXDefinition")]
BL2SDK.g_loadedClasses += [("UGFxMoviePlayer", 2873, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxMovie", 2875, "UGFxMoviePlayer")]
BL2SDK.g_loadedClasses += [("UGFxObject", 2877, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxClikWidget", 2879, "UGFxObject")]
BL2SDK.g_loadedClasses += [("UGFxRawData", 2881, "UObject")]
BL2SDK.g_loadedClasses += [("USwfMovie", 2883, "UGFxRawData")]
BL2SDK.g_loadedClasses += [("UFlashMovie", 2885, "USwfMovie")]
BL2SDK.g_loadedClasses += [("UGFxMovieInfo", 2887, "USwfMovie")]
BL2SDK.g_loadedClasses += [("UGFxValue", 2889, "UObject")]
BL2SDK.g_loadedClasses += [("UGFxAction_CloseMovie", 2891, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxAction_GetVariable", 2893, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxAction_Invoke", 2895, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxAction_OpenMovie", 2897, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxAction_SetCaptureKeys", 2899, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxAction_SetVariable", 2901, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGFxEvent_FSCommand", 2903, "USequenceEvent")]
BL2SDK.g_loadedClasses += [("UGFxFSCmdHandler_Kismet", 2905, "UGFxFSCmdHandler")]
BL2SDK.g_loadedClasses += [("UGFxDataStoreSubscriber", 2907, "UObject")]
