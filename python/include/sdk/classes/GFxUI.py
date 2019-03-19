from ctypes import *
import BL2SDK


class UGFxEngine_Data(Structure):
    pass


class UGFxEngine(Structure):
    pass


class UGFxFSCmdHandler_Data(Structure):
    pass


class UGFxFSCmdHandler(Structure):
    pass


class UGFxInteraction_Data(Structure):
    pass


class UGFxInteraction(Structure):
    pass


class UGFxManager_Data(Structure):
    pass


class UGFxManager(Structure):
    pass


class UGFxManagerDefinition_Data(Structure):
    pass


class UGFxManagerDefinition(Structure):
    pass


class UGFxMoviePlayer_Data(Structure):
    pass


class UGFxMoviePlayer(Structure):
    pass


class UGFxMovie_Data(Structure):
    pass


class UGFxMovie(Structure):
    pass


class UGFxObject_Data(Structure):
    pass


class UGFxObject(Structure):
    pass


class UGFxClikWidget_Data(Structure):
    pass


class UGFxClikWidget(Structure):
    pass


class UGFxRawData_Data(Structure):
    pass


class UGFxRawData(Structure):
    pass


class USwfMovie_Data(Structure):
    pass


class USwfMovie(Structure):
    pass


class UFlashMovie_Data(Structure):
    pass


class UFlashMovie(Structure):
    pass


class UGFxMovieInfo_Data(Structure):
    pass


class UGFxMovieInfo(Structure):
    pass


class UGFxValue_Data(Structure):
    pass


class UGFxValue(Structure):
    pass


class UGFxAction_CloseMovie_Data(Structure):
    pass


class UGFxAction_CloseMovie(Structure):
    pass


class UGFxAction_GetVariable_Data(Structure):
    pass


class UGFxAction_GetVariable(Structure):
    pass


class UGFxAction_Invoke_Data(Structure):
    pass


class UGFxAction_Invoke(Structure):
    pass


class UGFxAction_OpenMovie_Data(Structure):
    pass


class UGFxAction_OpenMovie(Structure):
    pass


class UGFxAction_SetCaptureKeys_Data(Structure):
    pass


class UGFxAction_SetCaptureKeys(Structure):
    pass


class UGFxAction_SetVariable_Data(Structure):
    pass


class UGFxAction_SetVariable(Structure):
    pass


class UGFxEvent_FSCommand_Data(Structure):
    pass


class UGFxEvent_FSCommand(Structure):
    pass


class UGFxFSCmdHandler_Kismet_Data(Structure):
    pass


class UGFxFSCmdHandler_Kismet(Structure):
    pass


class UGFxDataStoreSubscriber_Data(Structure):
    pass


class UGFxDataStoreSubscriber(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *


def init():

    UGFxEngine_Data._fields_ = [
        ("GCReferences", TArray_FGCReference),
        ("RefCount", c_int),
    ]

    UGFxEngine._fields_ = [("UObject", UObject_Data), ("UGFxEngine", UGFxEngine_Data)]

    UGFxFSCmdHandler_Data._fields_ = []

    UGFxFSCmdHandler._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxFSCmdHandler", UGFxFSCmdHandler_Data),
    ]

    UGFxInteraction_Data._fields_ = [("VfTable_FCallbackEventDevice", FPointer)]

    UGFxInteraction._fields_ = [
        ("UObject", UObject_Data),
        ("UUIRoot", UUIRoot_Data),
        ("UInteraction", UInteraction_Data),
        ("UGFxInteraction", UGFxInteraction_Data),
    ]

    UGFxManager_Data._fields_ = [("MyDefinition", POINTER(UGFxManagerDefinition))]

    UGFxManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxManager", UGFxManager_Data),
    ]

    UGFxManagerDefinition_Data._fields_ = [
        ("ManagerClass", POINTER(UClass)),
        ("GFxDialogBox", FScriptInterface),
        ("InteractionSounds", TArray_FAkEventResolver),
    ]

    UGFxManagerDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGFxManagerDefinition", UGFxManagerDefinition_Data),
    ]

    UGFxMoviePlayer_Data._fields_ = [
        ("pMovie", FPointer),
        ("pCaptureKeys", FPointer),
        ("pFocusIgnoreKeys", FPointer),
        ("Unknown1", c_ubyte * 0x3C),
        ("Unknown2", c_ubyte * 0x3C),
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
        ("Unknown3", c_ubyte * 0x3C),
        ("Unknown4", c_ubyte * 0x3C),
        ("SplitscreenLayoutObject", POINTER(UGFxObject)),
        ("SplitscreenLayoutYAdjust", c_int),
        ("DepthPriority", c_int),
        ("LastKeyInputTime", c_float),
        ("__OnPostAdvance__Delegate", FScriptDelegate),
        ("__OnInputKey__Delegate", FScriptDelegate),
    ]

    UGFxMoviePlayer._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
    ]

    UGFxMovie_Data._fields_ = []

    UGFxMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
    ]

    UGFxObject_Data._fields_ = [
        ("Value", c_int * 12),
        ("SubWidgetBindings", TArray_FGFxWidgetBinding),
    ]

    UGFxObject._fields_ = [("UObject", UObject_Data), ("UGFxObject", UGFxObject_Data)]

    UGFxClikWidget_Data._fields_ = [("__EventListener__Delegate", FScriptDelegate)]

    UGFxClikWidget._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxObject", UGFxObject_Data),
        ("UGFxClikWidget", UGFxClikWidget_Data),
    ]

    UGFxRawData_Data._fields_ = [
        ("RawData", TArray_unsigned_char),
        ("ReferencedSwfs", TArray_FString),
        ("References", TArray_UObjectPtr),
        ("UserReferences", TArray_UObjectPtr),
    ]

    UGFxRawData._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxRawData", UGFxRawData_Data),
    ]

    USwfMovie_Data._fields_ = [
        ("bUsesFontlib", c_bool, 1),
        ("bSetSRGBOnImportedTextures", c_bool, 1),
        ("bPackTextures", c_bool, 1),
        ("bPreload", c_bool, 1),
        ("bDoNotPlaceInVM", c_bool, 1),
        ("PackTextureSize", c_int),
        ("TextureRescale", c_ubyte),
        ("DesiredMemArena", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("TextureFormat", FString),
        ("RTTextures", c_int),
        ("RTVideoTextures", c_int),
        ("MovieInfo", c_int * 9),
        ("pMovieDef", FPointer),
    ]

    USwfMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxRawData", UGFxRawData_Data),
        ("USwfMovie", USwfMovie_Data),
    ]

    UFlashMovie_Data._fields_ = []

    UFlashMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxRawData", UGFxRawData_Data),
        ("USwfMovie", USwfMovie_Data),
        ("UFlashMovie", UFlashMovie_Data),
    ]

    UGFxMovieInfo_Data._fields_ = []

    UGFxMovieInfo._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxRawData", UGFxRawData_Data),
        ("USwfMovie", USwfMovie_Data),
        ("UGFxMovieInfo", UGFxMovieInfo_Data),
    ]

    UGFxValue_Data._fields_ = [("Value", c_int * 12)]

    UGFxValue._fields_ = [("UObject", UObject_Data), ("UGFxValue", UGFxValue_Data)]

    UGFxAction_CloseMovie_Data._fields_ = [
        ("Movie", POINTER(UGFxMoviePlayer)),
        ("bUnload", c_bool, 1),
    ]

    UGFxAction_CloseMovie._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_CloseMovie", UGFxAction_CloseMovie_Data),
    ]

    UGFxAction_GetVariable_Data._fields_ = [
        ("Movie", POINTER(UGFxMoviePlayer)),
        ("Variable", FString),
    ]

    UGFxAction_GetVariable._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_GetVariable", UGFxAction_GetVariable_Data),
    ]

    UGFxAction_Invoke_Data._fields_ = [
        ("Movie", POINTER(UGFxMoviePlayer)),
        ("MethodName", FString),
        ("Arguments", TArray_FASValue),
    ]

    UGFxAction_Invoke._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_Invoke", UGFxAction_Invoke_Data),
    ]

    UGFxAction_OpenMovie_Data._fields_ = [
        ("Movie", POINTER(USwfMovie)),
        ("MoviePlayerClass", POINTER(UClass)),
        ("MoviePlayer", POINTER(UGFxMoviePlayer)),
        ("LegacyMovieObject", POINTER(UGFxMoviePlayer)),
        ("bTakeFocus", c_bool, 1),
        ("bCaptureInput", c_bool, 1),
        ("bStartPaused", c_bool, 1),
        ("bEnableGammaCorrection", c_bool, 1),
        ("bDisplayWithHudOff", c_bool, 1),
        ("RenderTextureMode", c_ubyte),
        ("ScaleMode", c_ubyte),
        ("AlignMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("RenderTexture", POINTER(UTextureRenderTarget2D)),
        ("CaptureKeys", TArray_FName),
        ("FocusIgnoreKeys", TArray_FName),
    ]

    UGFxAction_OpenMovie._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_OpenMovie", UGFxAction_OpenMovie_Data),
    ]

    UGFxAction_SetCaptureKeys_Data._fields_ = [
        ("Movie", POINTER(UGFxMoviePlayer)),
        ("CaptureKeys", TArray_FName),
    ]

    UGFxAction_SetCaptureKeys._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_SetCaptureKeys", UGFxAction_SetCaptureKeys_Data),
    ]

    UGFxAction_SetVariable_Data._fields_ = [
        ("Movie", POINTER(UGFxMoviePlayer)),
        ("Variable", FString),
    ]

    UGFxAction_SetVariable._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGFxAction_SetVariable", UGFxAction_SetVariable_Data),
    ]

    UGFxEvent_FSCommand_Data._fields_ = [
        ("Movie", POINTER(USwfMovie)),
        ("FSCommand", FString),
        ("Handler", POINTER(UGFxFSCmdHandler_Kismet)),
    ]

    UGFxEvent_FSCommand._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("UGFxEvent_FSCommand", UGFxEvent_FSCommand_Data),
    ]

    UGFxFSCmdHandler_Kismet_Data._fields_ = []

    UGFxFSCmdHandler_Kismet._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxFSCmdHandler", UGFxFSCmdHandler_Data),
        ("UGFxFSCmdHandler_Kismet", UGFxFSCmdHandler_Kismet_Data),
    ]

    UGFxDataStoreSubscriber_Data._fields_ = [
        ("VfTable_IUIDataStorePublisher", FPointer),
        ("Movie", POINTER(UGFxMoviePlayer)),
    ]

    UGFxDataStoreSubscriber._fields_ = [
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
