import BL2SDK

BL2SDK.g_enums["FlashTextureRescale"] = [
    "FlashTextureScale_High",
    "FlashTextureScale_Low",
    "FlashTextureScale_NextLow",
    "FlashTextureScale_Mult4",
    "FlashTextureScale_None",
    "FlashTextureScale_MAX",
]

BL2SDK.g_enums["SwfMovieArenas"] = [
    "SWFARENA_Global",
    "SWFARENA_Default",
    "SWFARENA_HUD",
    "SWFARENA_StatusMenu",
    "SWFARENA_Menu",
    "SWFARENA_MAX",
]

BL2SDK.g_enums["ASType"] = [
    "AS_Undefined",
    "AS_Null",
    "AS_Number",
    "AS_String",
    "AS_Boolean",
    "AS_MAX",
]

BL2SDK.g_enums["GFxAlign"] = [
    "Align_Center",
    "Align_TopCenter",
    "Align_BottomCenter",
    "Align_CenterLeft",
    "Align_CenterRight",
    "Align_TopLeft",
    "Align_TopRight",
    "Align_BottomLeft",
    "Align_BottomRight",
    "Align_MAX",
]

BL2SDK.g_enums["GFxScaleMode"] = [
    "SM_NoScale",
    "SM_ShowAll",
    "SM_ExactFit",
    "SM_NoBorder",
    "SM_FitVertical",
    "SM_FitHorizontal",
    "SM_MAX",
]

BL2SDK.g_enums["GFxTimingMode"] = ["TM_Game", "TM_Real", "TM_MAX"]

BL2SDK.g_enums["GFxRenderTextureMode"] = [
    "RTM_Opaque",
    "RTM_Alpha",
    "RTM_AlphaComposite",
    "RTM_MAX",
]

BL2SDK.g_enums["EInputResult"] = ["IR_None", "IR_Handled", "IR_Consumed", "IR_MAX"]
