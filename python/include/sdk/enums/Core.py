import BL2SDK

BL2SDK.g_enums["EDebugBreakType"] = [
    "DEBUGGER_NativeOnly",
    "DEBUGGER_ScriptOnly",
    "DEBUGGER_Both",
    "DEBUGGER_MAX",
]

BL2SDK.g_enums["EAutomatedRunResult"] = [
    "ARR_Unknown",
    "ARR_OOM",
    "ARR_Passed",
    "ARR_MAX",
]

BL2SDK.g_enums["EAspectRatioAxisConstraint"] = [
    "AspectRatio_MaintainYFOV",
    "AspectRatio_MaintainXFOV",
    "AspectRatio_MajorAxisFOV",
    "AspectRatio_MAX",
]

BL2SDK.g_enums["EInterpCurveMode"] = [
    "CIM_Linear",
    "CIM_CurveAuto",
    "CIM_Constant",
    "CIM_CurveUser",
    "CIM_CurveBreak",
    "CIM_CurveAutoClamped",
    "CIM_MAX",
]

BL2SDK.g_enums["EInterpMethodType"] = [
    "IMT_UseFixedTangentEvalAndNewAutoTangents",
    "IMT_UseFixedTangentEval",
    "IMT_UseBrokenTangentEval",
    "IMT_MAX",
]

BL2SDK.g_enums["EAxis"] = [
    "AXIS_NONE",
    "AXIS_X",
    "AXIS_Y",
    "AXIS_BLANK",
    "AXIS_Z",
    "AXIS_MAX",
]

BL2SDK.g_enums["ETickingGroup"] = [
    "TG_PreAsyncWork",
    "TG_DuringAsyncWork",
    "TG_PostAsyncWork",
    "TG_PostUpdateWork",
    "TG_EffectsUpdateWork",
    "TG_MAX",
]

BL2SDK.g_enums["EInputEvent"] = [
    "IE_Pressed",
    "IE_Released",
    "IE_Repeat",
    "IE_DoubleClick",
    "IE_Axis",
    "IE_MAX",
]

BL2SDK.g_enums["AlphaBlendType"] = [
    "ABT_Linear",
    "ABT_Cubic",
    "ABT_Sinusoidal",
    "ABT_EaseInOutExponent2",
    "ABT_EaseInOutExponent3",
    "ABT_EaseInOutExponent4",
    "ABT_EaseInOutExponent5",
    "ABT_MAX",
]

BL2SDK.g_enums["EModifierType"] = ["MT_Scale", "MT_PreAdd", "MT_PostAdd", "MT_MAX"]

BL2SDK.g_enums["EDistributionVectorLockFlags"] = [
    "EDVLF_None",
    "EDVLF_XY",
    "EDVLF_XZ",
    "EDVLF_YZ",
    "EDVLF_XYZ",
    "EDVLF_MAX",
]

BL2SDK.g_enums["EDistributionVectorMirrorFlags"] = [
    "EDVMF_Same",
    "EDVMF_Different",
    "EDVMF_Mirror",
    "EDVMF_MAX",
]
