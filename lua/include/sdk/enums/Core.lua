enum.MakeEnum("EDebugBreakType", {
	"DEBUGGER_NativeOnly",
	"DEBUGGER_ScriptOnly",
	"DEBUGGER_Both",
	"DEBUGGER_MAX"
})

enum.MakeEnum("EAutomatedRunResult", {
	"ARR_Unknown",
	"ARR_OOM",
	"ARR_Passed",
	"ARR_MAX"
})

enum.MakeEnum("EAspectRatioAxisConstraint", {
	"AspectRatio_MaintainYFOV",
	"AspectRatio_MaintainXFOV",
	"AspectRatio_MajorAxisFOV",
	"AspectRatio_MAX"
})

enum.MakeEnum("EInterpCurveMode", {
	"CIM_Linear",
	"CIM_CurveAuto",
	"CIM_Constant",
	"CIM_CurveUser",
	"CIM_CurveBreak",
	"CIM_CurveAutoClamped",
	"CIM_MAX"
})

enum.MakeEnum("EInterpMethodType", {
	"IMT_UseFixedTangentEvalAndNewAutoTangents",
	"IMT_UseFixedTangentEval",
	"IMT_UseBrokenTangentEval",
	"IMT_MAX"
})

enum.MakeEnum("EAxis", {
	"AXIS_NONE",
	"AXIS_X",
	"AXIS_Y",
	"AXIS_BLANK",
	"AXIS_Z",
	"AXIS_MAX"
})

enum.MakeEnum("ETickingGroup", {
	"TG_PreAsyncWork",
	"TG_DuringAsyncWork",
	"TG_PostAsyncWork",
	"TG_PostUpdateWork",
	"TG_EffectsUpdateWork",
	"TG_MAX"
})

enum.MakeEnum("EInputEvent", {
	"IE_Pressed",
	"IE_Released",
	"IE_Repeat",
	"IE_DoubleClick",
	"IE_Axis",
	"IE_MAX"
})

enum.MakeEnum("AlphaBlendType", {
	"ABT_Linear",
	"ABT_Cubic",
	"ABT_Sinusoidal",
	"ABT_EaseInOutExponent2",
	"ABT_EaseInOutExponent3",
	"ABT_EaseInOutExponent4",
	"ABT_EaseInOutExponent5",
	"ABT_MAX"
})

enum.MakeEnum("EModifierType", {
	"MT_Scale",
	"MT_PreAdd",
	"MT_PostAdd",
	"MT_MAX"
})

enum.MakeEnum("EDistributionVectorLockFlags", {
	"EDVLF_None",
	"EDVLF_XY",
	"EDVLF_XZ",
	"EDVLF_YZ",
	"EDVLF_XYZ",
	"EDVLF_MAX"
})

enum.MakeEnum("EDistributionVectorMirrorFlags", {
	"EDVMF_Same",
	"EDVMF_Different",
	"EDVMF_Mirror",
	"EDVMF_MAX"
})

