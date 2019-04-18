#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_classes(py::module &m)
{
	py::class_< UObject >(m, "UObject")
		.def_static("StaticClass", &UObject::StaticClass, py::return_value_policy::reference)
		.def_static("FindClass", &UObject::FindClass, py::return_value_policy::reference)
		.def_static("FindObjectsRegex", &UObject::FindObjectsRegex, py::return_value_policy::reference)
		.def_static("FindObjectsContaining", &UObject::FindObjectsContaining, py::return_value_policy::reference)
		.def_readwrite("HashNext", &UObject::HashNext, py::return_value_policy::reference)
		.def_readwrite("ObjectFlags", &UObject::ObjectFlags, py::return_value_policy::reference)
		.def_readwrite("HashOuterNext", &UObject::HashOuterNext, py::return_value_policy::reference)
		.def_readwrite("StateFrame", &UObject::StateFrame, py::return_value_policy::reference)
		.def_readwrite("Linker", &UObject::Linker, py::return_value_policy::reference)
		.def_readwrite("LinkerIndex", &UObject::LinkerIndex, py::return_value_policy::reference)
		.def_readwrite("ObjectInternalInteger", &UObject::ObjectInternalInteger)
		.def_readwrite("NetIndex", &UObject::NetIndex)
		.def_readwrite("Outer", &UObject::Outer, py::return_value_policy::reference)
		.def_readwrite("Name", &UObject::Name, py::return_value_policy::reference)
		.def_readwrite("Class", &UObject::Class, py::return_value_policy::reference)
		.def_readwrite("ObjectArchetype", &UObject::ObjectArchetype, py::return_value_policy::reference)
		.def_static("GObjects", &UObject::GObjects)
		.def("GetName", &UObject::GetName)
		.def("GetNameCPP", &UObject::GetNameCPP)
		.def("GetFullName", &UObject::GetFullName)
		.def("GetObjectName", &UObject::GetObjectName)
		.def("__repr__", &UObject::GetFullName)
		.def("GetAddress", [](UObject *self) { return (int)self; })
		.def("IsRelevantForDebugging", &UObject::IsRelevantForDebugging)
		.def("GetGlobalDebugTarget", &UObject::GetGlobalDebugTarget, py::return_value_policy::reference)
		.def("SetGlobalDebugTarget", &UObject::SetGlobalDebugTarget)
		.def("LogContentDebug", &UObject::LogContentDebug)
		.def_static("GetLanguage", &UObject::GetLanguage)
		.def("GetRandomOptionSumFrequency", &UObject::GetRandomOptionSumFrequency)
		.def_static("GetBuildChangelistNumber", &UObject::GetBuildChangelistNumber)
		.def_static("GetEngineVersion", &UObject::GetEngineVersion)
		.def("TimeStamp", &UObject::TimeStamp, py::return_value_policy::reference)
		.def("TransformVectorByRotation", &UObject::TransformVectorByRotation, py::return_value_policy::reference)
		.def("GetPackageName", &UObject::GetPackageName, py::return_value_policy::reference)
		.def("IsPendingKill", &UObject::IsPendingKill)
		.def("ByteToFloat", &UObject::ByteToFloat)
		.def("FloatToByte", &UObject::FloatToByte)
		.def_static("UnwindHeading", &UObject::UnwindHeading)
		.def_static("FindDeltaAngle", &UObject::FindDeltaAngle)
		.def_static("GetHeadingAngle", &UObject::GetHeadingAngle)
		.def_static("GetAngularDegreesFromRadians", &UObject::GetAngularDegreesFromRadians)
		.def_static("GetAngularFromDotDist", &UObject::GetAngularFromDotDist)
		.def_static("GetAngularDistance", &UObject::GetAngularDistance)
		.def_static("GetDotDistance", &UObject::GetDotDistance)
		.def_static("PointProjectToPlane", &UObject::PointProjectToPlane)
		.def("PointDistToPlane", &UObject::PointDistToPlane)
		.def("PointDistToSegment", &UObject::PointDistToSegment)
		.def("PointDistToLine", &UObject::PointDistToLine)
		.def_static("GetPerObjectConfigSections", &UObject::GetPerObjectConfigSections)
		.def_static("StaticSaveConfig", &UObject::StaticSaveConfig)
		.def("SaveConfig", &UObject::SaveConfig)
		.def("GetAttributeModiferDescriptor", &UObject::GetAttributeModiferDescriptor, py::return_value_policy::reference)
		.def("GetAttributeValueByName", &UObject::GetAttributeValueByName)
		.def("RemoveModifier", &UObject::RemoveModifier)
		.def("AddModifier", &UObject::AddModifier)
		.def_static("FindObject", &UObject::FindObject)
		.def_static("DynamicLoadObject", &UObject::DynamicLoadObject)
		.def_static("GetEnum", &UObject::GetEnum)
		.def("Disable", &UObject::Disable)
		.def("Enable", &UObject::Enable)
		.def("ContinuedState", &UObject::ContinuedState)
		.def("PausedState", &UObject::PausedState)
		.def("PoppedState", &UObject::PoppedState)
		.def("PushedState", &UObject::PushedState)
		.def("EndState", &UObject::EndState)
		.def("BeginState", &UObject::BeginState)
		.def("BreakPoint", &UObject::BreakPoint)
		.def("PrintScriptStack", &UObject::PrintScriptStack)
		.def("DumpStateStack", &UObject::DumpStateStack)
		.def("PopState", &UObject::PopState)
		.def("PushState", &UObject::PushState)
		.def("GetStateName", &UObject::GetStateName, py::return_value_policy::reference)
		.def("IsChildState", &UObject::IsChildState)
		.def("IsInState", &UObject::IsInState)
		.def("GotoState", &UObject::GotoState)
		.def_static("IsUTracing", &UObject::IsUTracing)
		.def_static("SetUTracing", &UObject::SetUTracing)
		.def_static("GetFuncName", &UObject::GetFuncName)
		.def_static("DebugBreak", &UObject::DebugBreak)
		.def_static("GetScriptTrace", &UObject::GetScriptTrace)
		.def_static("ScriptTrace", &UObject::ScriptTrace)
		.def_static("ParseLocalizedPropertyPath", &UObject::ParseLocalizedPropertyPath)
		.def_static("Localize", &UObject::Localize)
		.def_static("LogIndentedInternal", &UObject::LogIndentedInternal)
		.def_static("WarnInternal", &UObject::WarnInternal)
		.def_static("LogInternal", &UObject::LogInternal)
		.def_static("GetStringForNameBasedObjectPath", &UObject::GetStringForNameBasedObjectPath)
		.def_static("SetNameBasedObjectPath", &UObject::SetNameBasedObjectPath)
		.def("FlagHasBeenTrueFor", &UObject::FlagHasBeenTrueFor)
		.def("FlagTimeRemaining", &UObject::FlagTimeRemaining)
		.def("FlagTimeSinceRaised", &UObject::FlagTimeSinceRaised)
		.def("FlagSetValue", &UObject::FlagSetValue)
		.def("FlagIsLowered", &UObject::FlagIsLowered)
		.def("FlagIsRaised", &UObject::FlagIsRaised)
		.def("FlagIsFalse", &UObject::FlagIsFalse)
		.def("FlagIsTrue", &UObject::FlagIsTrue)
		.def("FlagSetTrueTimed", &UObject::FlagSetTrueTimed)
		.def("SmartVectTimeRemaining", &UObject::SmartVectTimeRemaining)
		.def("SmartVectTimeSinceSet", &UObject::SmartVectTimeSinceSet)
		.def("SmartVectGetVector", &UObject::SmartVectGetVector)
		.def("SmartVectIsSet", &UObject::SmartVectIsSet)
		.def("SmartVectSetVectorTimed", &UObject::SmartVectSetVectorTimed)
		.def("SmartVectValue", &UObject::SmartVectValue, py::return_value_policy::reference)
		.def("SmartVectReset", &UObject::SmartVectReset)
		.def("SmartVectSetVector", &UObject::SmartVectSetVector)
		.def_static("Subtract_LinearColorLinearColor", &UObject::Subtract_LinearColorLinearColor)
		.def_static("Multiply_LinearColorFloat", &UObject::Multiply_LinearColorFloat)
		.def_static("ColorToLinearColor", &UObject::ColorToLinearColor)
		.def_static("MakeLinearColor", &UObject::MakeLinearColor)
		.def_static("GetHTMLColor", &UObject::GetHTMLColor)
		.def_static("LerpColor", &UObject::LerpColor)
		.def_static("MakeColor", &UObject::MakeColor)
		.def_static("Add_ColorColor", &UObject::Add_ColorColor)
		.def_static("Multiply_ColorFloat", &UObject::Multiply_ColorFloat)
		.def_static("Multiply_FloatColor", &UObject::Multiply_FloatColor)
		.def_static("Subtract_ColorColor", &UObject::Subtract_ColorColor)
		.def("EvalInterpCurveVector2D", &UObject::EvalInterpCurveVector2D, py::return_value_policy::reference)
		.def("EvalInterpCurveVector", &UObject::EvalInterpCurveVector, py::return_value_policy::reference)
		.def("EvalInterpCurveFloat", &UObject::EvalInterpCurveFloat)
		.def_static("vect2d", &UObject::vect2d)
		.def_static("GetMappedRangeValue", &UObject::GetMappedRangeValue)
		.def_static("GetRangePctByValue", &UObject::GetRangePctByValue)
		.def_static("GetRangeValueByPct", &UObject::GetRangeValueByPct)
		.def_static("SubtractEqual_Vector2DVector2D", &UObject::SubtractEqual_Vector2DVector2D)
		.def_static("AddEqual_Vector2DVector2D", &UObject::AddEqual_Vector2DVector2D)
		.def_static("DivideEqual_Vector2DFloat", &UObject::DivideEqual_Vector2DFloat)
		.def_static("MultiplyEqual_Vector2DFloat", &UObject::MultiplyEqual_Vector2DFloat)
		.def_static("Divide_Vector2DFloat", &UObject::Divide_Vector2DFloat)
		.def_static("Multiply_Vector2DFloat", &UObject::Multiply_Vector2DFloat)
		.def_static("Subtract_Vector2DVector2D", &UObject::Subtract_Vector2DVector2D)
		.def_static("Add_Vector2DVector2D", &UObject::Add_Vector2DVector2D)
		.def_static("Subtract_QuatQuat", &UObject::Subtract_QuatQuat)
		.def_static("Add_QuatQuat", &UObject::Add_QuatQuat)
		.def_static("QuatSlerp", &UObject::QuatSlerp)
		.def_static("QuatToRotator", &UObject::QuatToRotator)
		.def_static("QuatFromRotator", &UObject::QuatFromRotator)
		.def_static("QuatFromAxisAndAngle", &UObject::QuatFromAxisAndAngle)
		.def_static("QuatFindBetween", &UObject::QuatFindBetween)
		.def_static("QuatRotateVector", &UObject::QuatRotateVector)
		.def_static("QuatInvert", &UObject::QuatInvert)
		.def_static("QuatDot", &UObject::QuatDot)
		.def_static("QuatProduct", &UObject::QuatProduct)
		.def_static("MatrixGetAxis", &UObject::MatrixGetAxis)
		.def_static("MatrixGetOrigin", &UObject::MatrixGetOrigin)
		.def_static("MatrixGetRotator", &UObject::MatrixGetRotator)
		.def_static("MakeRotationMatrix", &UObject::MakeRotationMatrix)
		.def_static("MakeRotationTranslationMatrix", &UObject::MakeRotationTranslationMatrix)
		.def_static("InverseTransformNormal", &UObject::InverseTransformNormal)
		.def_static("TransformNormal", &UObject::TransformNormal)
		.def_static("InverseTransformVector", &UObject::InverseTransformVector)
		.def_static("TransformVector", &UObject::TransformVector)
		.def_static("Multiply_MatrixMatrix", &UObject::Multiply_MatrixMatrix)
		.def_static("NotEqual_NameName", &UObject::NotEqual_NameName)
		.def_static("EqualEqual_NameName", &UObject::EqualEqual_NameName)
		.def("QueryInterface", &UObject::QueryInterface)
		.def_static("ClassIsChildOf", &UObject::ClassIsChildOf)
		.def_static("NotEqual_InterfaceInterface", &UObject::NotEqual_InterfaceInterface)
		.def_static("EqualEqual_InterfaceInterface", &UObject::EqualEqual_InterfaceInterface)
		.def_static("NotEqual_ObjectObject", &UObject::NotEqual_ObjectObject)
		.def_static("EqualEqual_ObjectObject", &UObject::EqualEqual_ObjectObject)
		.def_static("GuidToString", &UObject::GuidToString)
		.def_static("PathName", &UObject::PathName)
		.def_static("SplitString", &UObject::SplitString)
		.def_static("ParseStringIntoArray", &UObject::ParseStringIntoArray)
		.def_static("JoinArray", &UObject::JoinArray)
		.def_static("GetRightMost", &UObject::GetRightMost)
		.def_static("Split", &UObject::Split)
		.def_static("StringHash", &UObject::StringHash)
		.def_static("Repl", &UObject::Repl)
		.def_static("Asc", &UObject::Asc)
		.def_static("Chr", &UObject::Chr)
		.def_static("Locs", &UObject::Locs)
		.def_static("Caps", &UObject::Caps)
		.def_static("Right", &UObject::Right)
		.def_static("Left", &UObject::Left)
		.def_static("Mid", &UObject::Mid)
		.def_static("InStr", &UObject::InStr)
		.def_static("Len", &UObject::Len)
		.def_static("SubtractEqual_StrStr", &UObject::SubtractEqual_StrStr)
		.def_static("AtEqual_StrStr", &UObject::AtEqual_StrStr)
		.def_static("ConcatEqual_StrStr", &UObject::ConcatEqual_StrStr)
		.def_static("ComplementEqual_StrStr", &UObject::ComplementEqual_StrStr)
		.def_static("NotEqual_StrStr", &UObject::NotEqual_StrStr)
		.def_static("EqualEqual_StrStr", &UObject::EqualEqual_StrStr)
		.def_static("GreaterEqual_StrStr", &UObject::GreaterEqual_StrStr)
		.def_static("LessEqual_StrStr", &UObject::LessEqual_StrStr)
		.def_static("Greater_StrStr", &UObject::Greater_StrStr)
		.def_static("Less_StrStr", &UObject::Less_StrStr)
		.def_static("At_StrStr", &UObject::At_StrStr)
		.def_static("Concat_StrStr", &UObject::Concat_StrStr)
		.def_static("MakeRotator", &UObject::MakeRotator)
		.def_static("ClampRotAxisFromRange", &UObject::ClampRotAxisFromRange)
		.def_static("ClampRotAxisFromBase", &UObject::ClampRotAxisFromBase)
		.def_static("RSize", &UObject::RSize)
		.def_static("RDiff", &UObject::RDiff)
		.def_static("NormalizeRotAxis", &UObject::NormalizeRotAxis)
		.def_static("RInterpTo", &UObject::RInterpTo)
		.def_static("RTransform", &UObject::RTransform)
		.def_static("RLerp", &UObject::RLerp)
		.def_static("Normalize", &UObject::Normalize)
		.def_static("OrthoRotation", &UObject::OrthoRotation)
		.def_static("RotRand", &UObject::RotRand)
		.def_static("GetRotatorAxis", &UObject::GetRotatorAxis)
		.def_static("GetUnAxes", &UObject::GetUnAxes)
		.def_static("GetAxes", &UObject::GetAxes)
		.def_static("ClockwiseFrom_IntInt", &UObject::ClockwiseFrom_IntInt)
		.def_static("SubtractEqual_RotatorRotator", &UObject::SubtractEqual_RotatorRotator)
		.def_static("AddEqual_RotatorRotator", &UObject::AddEqual_RotatorRotator)
		.def_static("Subtract_RotatorRotator", &UObject::Subtract_RotatorRotator)
		.def_static("Add_RotatorRotator", &UObject::Add_RotatorRotator)
		.def_static("DivideEqual_RotatorFloat", &UObject::DivideEqual_RotatorFloat)
		.def_static("MultiplyEqual_RotatorFloat", &UObject::MultiplyEqual_RotatorFloat)
		.def_static("Divide_RotatorFloat", &UObject::Divide_RotatorFloat)
		.def_static("Multiply_FloatRotator", &UObject::Multiply_FloatRotator)
		.def_static("Multiply_RotatorFloat", &UObject::Multiply_RotatorFloat)
		.def_static("NotEqual_RotatorRotator", &UObject::NotEqual_RotatorRotator)
		.def_static("EqualEqual_RotatorRotator", &UObject::EqualEqual_RotatorRotator)
		.def("InCylinder", &UObject::InCylinder)
		.def_static("NoZDot", &UObject::NoZDot)
		.def_static("ClampLength", &UObject::ClampLength)
		.def_static("VInterpTo", &UObject::VInterpTo)
		.def_static("IsZero", &UObject::IsZero)
		.def_static("ProjectOnTo", &UObject::ProjectOnTo)
		.def_static("MirrorVectorByNormal", &UObject::MirrorVectorByNormal)
		.def_static("VRandCone2", &UObject::VRandCone2)
		.def_static("VRandCone", &UObject::VRandCone)
		.def_static("VRand", &UObject::VRand)
		.def_static("VLerp", &UObject::VLerp)
		.def_static("Normal", &UObject::Normal)
		.def_static("VSizeSq2D", &UObject::VSizeSq2D)
		.def_static("VSizeSq", &UObject::VSizeSq)
		.def_static("VSize2D", &UObject::VSize2D)
		.def_static("VSize", &UObject::VSize)
		.def_static("SubtractEqual_VectorVector", &UObject::SubtractEqual_VectorVector)
		.def_static("AddEqual_VectorVector", &UObject::AddEqual_VectorVector)
		.def_static("DivideEqual_VectorFloat", &UObject::DivideEqual_VectorFloat)
		.def_static("MultiplyEqual_VectorVector", &UObject::MultiplyEqual_VectorVector)
		.def_static("MultiplyEqual_VectorFloat", &UObject::MultiplyEqual_VectorFloat)
		.def_static("Cross_VectorVector", &UObject::Cross_VectorVector)
		.def_static("Dot_VectorVector", &UObject::Dot_VectorVector)
		.def_static("NotEqual_VectorVector", &UObject::NotEqual_VectorVector)
		.def_static("EqualEqual_VectorVector", &UObject::EqualEqual_VectorVector)
		.def_static("GreaterGreater_VectorRotator", &UObject::GreaterGreater_VectorRotator)
		.def_static("LessLess_VectorRotator", &UObject::LessLess_VectorRotator)
		.def_static("Subtract_VectorVector", &UObject::Subtract_VectorVector)
		.def_static("Add_VectorVector", &UObject::Add_VectorVector)
		.def_static("Divide_VectorFloat", &UObject::Divide_VectorFloat)
		.def_static("Multiply_VectorVector", &UObject::Multiply_VectorVector)
		.def_static("Multiply_FloatVector", &UObject::Multiply_FloatVector)
		.def_static("Multiply_VectorFloat", &UObject::Multiply_VectorFloat)
		.def_static("Subtract_PreVector", &UObject::Subtract_PreVector)
		.def_static("SmoothInterp", &UObject::SmoothInterp)
		.def_static("FInterpConstantTo", &UObject::FInterpConstantTo)
		.def_static("FInterpTo", &UObject::FInterpTo)
		.def_static("FPctByRange", &UObject::FPctByRange)
		.def_static("RandRange", &UObject::RandRange)
		.def_static("FInterpEaseInOut", &UObject::FInterpEaseInOut)
		.def_static("FInterpEaseOut", &UObject::FInterpEaseOut)
		.def_static("FInterpEaseIn", &UObject::FInterpEaseIn)
		.def_static("FCubicInterp", &UObject::FCubicInterp)
		.def_static("FCeil", &UObject::FCeil)
		.def_static("FFloor", &UObject::FFloor)
		.def_static("Round", &UObject::Round)
		.def_static("Lerp", &UObject::Lerp)
		.def_static("FClamp", &UObject::FClamp)
		.def_static("FMax", &UObject::FMax)
		.def_static("FMin", &UObject::FMin)
		.def_static("FRand", &UObject::FRand)
		.def_static("Square", &UObject::Square)
		.def_static("Sqrt", &UObject::Sqrt)
		.def_static("Loge", &UObject::Loge)
		.def_static("Exp", &UObject::Exp)
		.def_static("Atan2", &UObject::Atan2)
		.def_static("Atan", &UObject::Atan)
		.def_static("Tan", &UObject::Tan)
		.def_static("Acos", &UObject::Acos)
		.def_static("Cos", &UObject::Cos)
		.def_static("Asin", &UObject::Asin)
		.def_static("Sin", &UObject::Sin)
		.def_static("Abs", &UObject::Abs)
		.def_static("NotEqual_FloatFloat", &UObject::NotEqual_FloatFloat)
		.def_static("ComplementEqual_FloatFloat", &UObject::ComplementEqual_FloatFloat)
		.def_static("EqualEqual_FloatFloat", &UObject::EqualEqual_FloatFloat)
		.def_static("GreaterEqual_FloatFloat", &UObject::GreaterEqual_FloatFloat)
		.def_static("LessEqual_FloatFloat", &UObject::LessEqual_FloatFloat)
		.def_static("Greater_FloatFloat", &UObject::Greater_FloatFloat)
		.def_static("Less_FloatFloat", &UObject::Less_FloatFloat)
		.def_static("Subtract_FloatFloat", &UObject::Subtract_FloatFloat)
		.def_static("Add_FloatFloat", &UObject::Add_FloatFloat)
		.def_static("Percent_FloatFloat", &UObject::Percent_FloatFloat)
		.def_static("Divide_FloatFloat", &UObject::Divide_FloatFloat)
		.def_static("Multiply_FloatFloat", &UObject::Multiply_FloatFloat)
		.def_static("MultiplyMultiply_FloatFloat", &UObject::MultiplyMultiply_FloatFloat)
		.def_static("Subtract_PreFloat", &UObject::Subtract_PreFloat)
		.def_static("ToHex", &UObject::ToHex)
		.def_static("Clamp", &UObject::Clamp)
		.def_static("Max", &UObject::Max)
		.def_static("Min", &UObject::Min)
		.def_static("Rand", &UObject::Rand)
		.def_static("Or_IntInt", &UObject::Or_IntInt)
		.def_static("Xor_IntInt", &UObject::Xor_IntInt)
		.def_static("And_IntInt", &UObject::And_IntInt)
		.def_static("NotEqual_IntInt", &UObject::NotEqual_IntInt)
		.def_static("EqualEqual_IntInt", &UObject::EqualEqual_IntInt)
		.def_static("GreaterEqual_IntInt", &UObject::GreaterEqual_IntInt)
		.def_static("LessEqual_IntInt", &UObject::LessEqual_IntInt)
		.def_static("Greater_IntInt", &UObject::Greater_IntInt)
		.def_static("Less_IntInt", &UObject::Less_IntInt)
		.def_static("GreaterGreaterGreater_IntInt", &UObject::GreaterGreaterGreater_IntInt)
		.def_static("GreaterGreater_IntInt", &UObject::GreaterGreater_IntInt)
		.def_static("LessLess_IntInt", &UObject::LessLess_IntInt)
		.def_static("Subtract_IntInt", &UObject::Subtract_IntInt)
		.def_static("Add_IntInt", &UObject::Add_IntInt)
		.def_static("Percent_IntInt", &UObject::Percent_IntInt)
		.def_static("Divide_IntInt", &UObject::Divide_IntInt)
		.def_static("Multiply_IntInt", &UObject::Multiply_IntInt)
		.def_static("Subtract_PreInt", &UObject::Subtract_PreInt)
		.def_static("Complement_PreInt", &UObject::Complement_PreInt)
		.def_static("OrOr_BoolBool", &UObject::OrOr_BoolBool)
		.def_static("XorXor_BoolBool", &UObject::XorXor_BoolBool)
		.def_static("AndAnd_BoolBool", &UObject::AndAnd_BoolBool)
		.def_static("NotEqual_BoolBool", &UObject::NotEqual_BoolBool)
		.def_static("EqualEqual_BoolBool", &UObject::EqualEqual_BoolBool)
		.def_static("Not_PreBool", &UObject::Not_PreBool)
		.def("GetSystemTime", [](UObject &self ) { int* pyYear = (int*)malloc(sizeof(int)) ; int* pyMonth = (int*)malloc(sizeof(int)) ; int* pyDayOfWeek = (int*)malloc(sizeof(int)) ; int* pyDay = (int*)malloc(sizeof(int)) ; int* pyHour = (int*)malloc(sizeof(int)) ; int* pyMin = (int*)malloc(sizeof(int)) ; int* pySec = (int*)malloc(sizeof(int)) ; int* pyMSec = (int*)malloc(sizeof(int)) ;   self.GetSystemTime(pyYear, pyMonth, pyDayOfWeek, pyDay, pyHour, pyMin, pySec, pyMSec); return py::make_tuple(*pyYear, *pyMonth, *pyDayOfWeek, *pyDay, *pyHour, *pyMin, *pySec, *pyMSec); })
		.def_static("SClampRotAxis", [](float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed) { int* pyout_DeltaViewAxis = (int*)malloc(sizeof(int)) ;  static bool ret = UObject::SClampRotAxis(DeltaTime, ViewAxis, MaxLimit, MinLimit, InterpolationSpeed, pyout_DeltaViewAxis); return py::make_tuple(ret, *pyout_DeltaViewAxis); })
		.def_static("ClampRotAxis", [](int ViewAxis, int MaxLimit, int MinLimit) { int* pyout_DeltaViewAxis = (int*)malloc(sizeof(int)) ;UObject::ClampRotAxis(ViewAxis, MaxLimit, MinLimit, pyout_DeltaViewAxis); return py::make_tuple(*pyout_DeltaViewAxis); })
		.def_static("SubtractEqual_FloatFloat", [](float B) { float* pyA = (float*)malloc(sizeof(float)) ;  static float ret = UObject::SubtractEqual_FloatFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddEqual_FloatFloat", [](float B) { float* pyA = (float*)malloc(sizeof(float)) ;  static float ret = UObject::AddEqual_FloatFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("DivideEqual_FloatFloat", [](float B) { float* pyA = (float*)malloc(sizeof(float)) ;  static float ret = UObject::DivideEqual_FloatFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("MultiplyEqual_FloatFloat", [](float B) { float* pyA = (float*)malloc(sizeof(float)) ;  static float ret = UObject::MultiplyEqual_FloatFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractSubtract_Int", []() { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret =  UObject::SubtractSubtract_Int(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddAdd_Int", []() { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret =  UObject::AddAdd_Int(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractSubtract_PreInt", []() { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret =  UObject::SubtractSubtract_PreInt(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddAdd_PreInt", []() { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret =  UObject::AddAdd_PreInt(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractEqual_IntInt", [](int B) { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret = UObject::SubtractEqual_IntInt(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddEqual_IntInt", [](int B) { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret = UObject::AddEqual_IntInt(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("DivideEqual_IntFloat", [](float B) { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret = UObject::DivideEqual_IntFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("MultiplyEqual_IntFloat", [](float B) { int* pyA = (int*)malloc(sizeof(int)) ;  static int ret = UObject::MultiplyEqual_IntFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractSubtract_Byte", []() { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret =  UObject::SubtractSubtract_Byte(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddAdd_Byte", []() { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret =  UObject::AddAdd_Byte(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractSubtract_PreByte", []() { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret =  UObject::SubtractSubtract_PreByte(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddAdd_PreByte", []() { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret =  UObject::AddAdd_PreByte(pyA); return py::make_tuple(ret, *pyA); })
		.def_static("SubtractEqual_ByteByte", [](unsigned char B) { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret = UObject::SubtractEqual_ByteByte(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("AddEqual_ByteByte", [](unsigned char B) { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret = UObject::AddEqual_ByteByte(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("DivideEqual_ByteByte", [](unsigned char B) { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret = UObject::DivideEqual_ByteByte(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("MultiplyEqual_ByteFloat", [](float B) { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret = UObject::MultiplyEqual_ByteFloat(B, pyA); return py::make_tuple(ret, *pyA); })
		.def_static("MultiplyEqual_ByteByte", [](unsigned char B) { unsigned char* pyA = (unsigned char*)malloc(sizeof(unsigned char)) ;  static unsigned char ret = UObject::MultiplyEqual_ByteByte(B, pyA); return py::make_tuple(ret, *pyA); })
		;
	py::class_< UTextBuffer, UObject >(m, "UTextBuffer")
		;
	py::class_< USubsystem, UObject >(m, "USubsystem")
		.def_readwrite("VfTable_FExec", &USubsystem::VfTable_FExec, py::return_value_policy::reference)
		;
	py::class_< USystem, USubsystem >(m, "USystem")
		.def_readwrite("StaleCacheDays", &USystem::StaleCacheDays)
		.def_readwrite("MaxStaleCacheSize", &USystem::MaxStaleCacheSize)
		.def_readwrite("MaxOverallCacheSize", &USystem::MaxOverallCacheSize)
		.def_readwrite("PackageSizeSoftLimit", &USystem::PackageSizeSoftLimit)
		.def_readwrite("AsyncIOBandwidthLimit", &USystem::AsyncIOBandwidthLimit)
		.def_readwrite("SavePath", &USystem::SavePath, py::return_value_policy::reference)
		.def_readwrite("CachePath", &USystem::CachePath, py::return_value_policy::reference)
		.def_readwrite("CacheExt", &USystem::CacheExt, py::return_value_policy::reference)
		.def_readwrite("ScreenShotPath", &USystem::ScreenShotPath, py::return_value_policy::reference)
		.def_readwrite("Paths", &USystem::Paths, py::return_value_policy::reference)
		.def_readwrite("IgnoredPaths", &USystem::IgnoredPaths, py::return_value_policy::reference)
		.def_readwrite("SeekFreePCPaths", &USystem::SeekFreePCPaths, py::return_value_policy::reference)
		.def_readwrite("ScriptPaths", &USystem::ScriptPaths, py::return_value_policy::reference)
		.def_readwrite("FRScriptPaths", &USystem::FRScriptPaths, py::return_value_policy::reference)
		.def_readwrite("FRCheatScriptPaths", &USystem::FRCheatScriptPaths, py::return_value_policy::reference)
		.def_readwrite("CutdownPaths", &USystem::CutdownPaths, py::return_value_policy::reference)
		.def_readwrite("Suppress", &USystem::Suppress, py::return_value_policy::reference)
		.def_readwrite("Extensions", &USystem::Extensions, py::return_value_policy::reference)
		.def_readwrite("SeekFreePCExtensions", &USystem::SeekFreePCExtensions, py::return_value_policy::reference)
		.def_readwrite("LocalizationPaths", &USystem::LocalizationPaths, py::return_value_policy::reference)
		.def_readwrite("TextureFileCacheExtension", &USystem::TextureFileCacheExtension, py::return_value_policy::reference)
		.def_readwrite("AudioFileCacheExtension", &USystem::AudioFileCacheExtension, py::return_value_policy::reference)
		.def_readwrite("MissingRedirectClassName", &USystem::MissingRedirectClassName, py::return_value_policy::reference)
		.def_readwrite("MissingRedirectObjectName", &USystem::MissingRedirectObjectName, py::return_value_policy::reference)
		.def_readwrite("Unsuppress", &USystem::Unsuppress, py::return_value_policy::reference)
		;
	py::class_< UPackageMap, UObject >(m, "UPackageMap")
		;
	py::class_< UObjectSerializer, UObject >(m, "UObjectSerializer")
		;
	py::class_< UObjectRedirector, UObject >(m, "UObjectRedirector")
		;
	py::class_< UMetaData, UObject >(m, "UMetaData")
		;
	py::class_< ULinker, UObject >(m, "ULinker")
		;
	py::class_< ULinkerSave, ULinker >(m, "ULinkerSave")
		;
	py::class_< UInterface >(m, "UInterface")
		;
	py::class_< UField, UObject >(m, "UField")
		.def_readwrite("Next", &UField::Next, py::return_value_policy::reference)
		;
	py::class_< UStruct, UField >(m, "UStruct")
		.def_readwrite("SuperField", &UStruct::SuperField, py::return_value_policy::reference)
		.def_readwrite("Children", &UStruct::Children, py::return_value_policy::reference)
		.def_readwrite("PropertySize", &UStruct::PropertySize)
		;
	py::class_< UScriptStruct, UStruct >(m, "UScriptStruct")
		;
	py::class_< UFunction, UStruct >(m, "UFunction")
		.def_readwrite("FunctionFlags", &UFunction::FunctionFlags)
		.def_readwrite("iNative", &UFunction::iNative)
		.def_readwrite("RepOffset", &UFunction::RepOffset)
		.def_readwrite("FriendlyName", &UFunction::FriendlyName, py::return_value_policy::reference)
		.def_readwrite("Numparams", &UFunction::Numparams)
		.def_readwrite("paramsSize", &UFunction::paramsSize)
		.def_readwrite("ReturnValueOffset", &UFunction::ReturnValueOffset)
		.def_readwrite("Func", &UFunction::Func, py::return_value_policy::reference)
		;
	py::class_< UProperty, UField >(m, "UProperty")
		;
	py::class_< UStructProperty, UProperty >(m, "UStructProperty")
		;
	py::class_< UStrProperty >(m, "UStrProperty")
		;
	py::class_< UObjectProperty, UProperty >(m, "UObjectProperty")
		;
	py::class_< UComponentProperty >(m, "UComponentProperty")
		;
	py::class_< UClassProperty, UObjectProperty >(m, "UClassProperty")
		;
	py::class_< UNameProperty >(m, "UNameProperty")
		;
	py::class_< UMapProperty, UProperty >(m, "UMapProperty")
		;
	py::class_< UIntProperty >(m, "UIntProperty")
		;
	py::class_< UIntAttributeProperty, UIntProperty >(m, "UIntAttributeProperty")
		;
	py::class_< UInterfaceProperty, UProperty >(m, "UInterfaceProperty")
		;
	py::class_< UFloatProperty >(m, "UFloatProperty")
		;
	py::class_< UFloatAttributeProperty, UFloatProperty >(m, "UFloatAttributeProperty")
		;
	py::class_< UDelegateProperty, UProperty >(m, "UDelegateProperty")
		;
	py::class_< UByteProperty, UProperty >(m, "UByteProperty")
		;
	py::class_< UByteAttributeProperty, UByteProperty >(m, "UByteAttributeProperty")
		;
	py::class_< UBoolProperty, UProperty >(m, "UBoolProperty")
		;
	py::class_< UArrayProperty, UProperty >(m, "UArrayProperty")
		;
	py::class_< UEnum, UField >(m, "UEnum")
		;
	py::class_< UConst, UField >(m, "UConst")
		;
	py::class_< UFactory, UObject >(m, "UFactory")
		.def_property("bCreateNew", [](UFactory &self){return self.bCreateNew;}, [](UFactory &self, bool value){self.bCreateNew = value ? 1 : 0;})
		.def_property("bEditAfterNew", [](UFactory &self){return self.bEditAfterNew;}, [](UFactory &self, bool value){self.bEditAfterNew = value ? 1 : 0;})
		.def_property("bEditorImport", [](UFactory &self){return self.bEditorImport;}, [](UFactory &self, bool value){self.bEditorImport = value ? 1 : 0;})
		.def_property("bText", [](UFactory &self){return self.bText;}, [](UFactory &self, bool value){self.bText = value ? 1 : 0;})
		.def_readwrite("SupportedClass", &UFactory::SupportedClass, py::return_value_policy::reference)
		.def_readwrite("ContextClass", &UFactory::ContextClass, py::return_value_policy::reference)
		.def_readwrite("Description", &UFactory::Description, py::return_value_policy::reference)
		.def_readwrite("Formats", &UFactory::Formats, py::return_value_policy::reference)
		.def_readwrite("AutoPriority", &UFactory::AutoPriority)
		.def_readwrite("ValidGameNames", &UFactory::ValidGameNames, py::return_value_policy::reference)
		;
	py::class_< UTextBufferFactory >(m, "UTextBufferFactory")
		;
	py::class_< UExporter, UObject >(m, "UExporter")
		.def_readwrite("FormatExtension", &UExporter::FormatExtension, py::return_value_policy::reference)
		.def_readwrite("FormatDescription", &UExporter::FormatDescription, py::return_value_policy::reference)
		;
	py::class_< UComponent, UObject >(m, "UComponent")
		.def_readwrite("TemplateOwnerClass", &UComponent::TemplateOwnerClass, py::return_value_policy::reference)
		.def_readwrite("TemplateName", &UComponent::TemplateName, py::return_value_policy::reference)
		;
	py::class_< UDistributionVector, UComponent >(m, "UDistributionVector")
		.def_property("bCanBeBaked", [](UDistributionVector &self){return self.bCanBeBaked;}, [](UDistributionVector &self, bool value){self.bCanBeBaked = value ? 1 : 0;})
		.def_property("bIsDirty", [](UDistributionVector &self){return self.bIsDirty;}, [](UDistributionVector &self, bool value){self.bIsDirty = value ? 1 : 0;})
		.def_readwrite("VfTable_FCurveEdInterface", &UDistributionVector::VfTable_FCurveEdInterface, py::return_value_policy::reference)
		.def("GetVectorValue", &UDistributionVector::GetVectorValue, py::return_value_policy::reference)
		;
	py::class_< UDistributionFloat, UComponent >(m, "UDistributionFloat")
		.def_property("bCanBeBaked", [](UDistributionFloat &self){return self.bCanBeBaked;}, [](UDistributionFloat &self, bool value){self.bCanBeBaked = value ? 1 : 0;})
		.def_property("bIsDirty", [](UDistributionFloat &self){return self.bIsDirty;}, [](UDistributionFloat &self, bool value){self.bIsDirty = value ? 1 : 0;})
		.def_readwrite("VfTable_FCurveEdInterface", &UDistributionFloat::VfTable_FCurveEdInterface, py::return_value_policy::reference)
		.def("GetFloatValue", &UDistributionFloat::GetFloatValue)
		;
	py::class_< UCommandlet, UObject >(m, "UCommandlet")
		.def_property("IsServer", [](UCommandlet &self){return self.IsServer;}, [](UCommandlet &self, bool value){self.IsServer = value ? 1 : 0;})
		.def_property("IsClient", [](UCommandlet &self){return self.IsClient;}, [](UCommandlet &self, bool value){self.IsClient = value ? 1 : 0;})
		.def_property("IsEditor", [](UCommandlet &self){return self.IsEditor;}, [](UCommandlet &self, bool value){self.IsEditor = value ? 1 : 0;})
		.def_property("LogToConsole", [](UCommandlet &self){return self.LogToConsole;}, [](UCommandlet &self, bool value){self.LogToConsole = value ? 1 : 0;})
		.def_property("ShowErrorCount", [](UCommandlet &self){return self.ShowErrorCount;}, [](UCommandlet &self, bool value){self.ShowErrorCount = value ? 1 : 0;})
		.def_readwrite("HelpDescription", &UCommandlet::HelpDescription, py::return_value_policy::reference)
		.def_readwrite("HelpUsage", &UCommandlet::HelpUsage, py::return_value_policy::reference)
		.def_readwrite("HelpWebLink", &UCommandlet::HelpWebLink, py::return_value_policy::reference)
		.def_readwrite("HelpParamNames", &UCommandlet::HelpParamNames, py::return_value_policy::reference)
		.def_readwrite("HelpParamDescriptions", &UCommandlet::HelpParamDescriptions, py::return_value_policy::reference)
		.def("Main", &UCommandlet::Main)
		;
	py::class_< UHelpCommandlet, UCommandlet >(m, "UHelpCommandlet")
		.def("Main", &UHelpCommandlet::Main)
		;
	py::class_< UAttributeModifier, UObject >(m, "UAttributeModifier")
		.def_readwrite("Type", &UAttributeModifier::Type)
		.def_readwrite("Value", &UAttributeModifier::Value)
		;
	py::class_< UState, UStruct >(m, "UState")
		;
	py::class_< UPackage, UObject >(m, "UPackage")
		;
	py::class_< UClass, UState >(m, "UClass")
		.def_static("StaticClass", &UClass::StaticClass, py::return_value_policy::reference)
		.def_property("bCooked", [](UClass &self){return self.bCooked;}, [](UClass &self, bool value){self.bCooked = value ? 1 : 0;})
		.def_readwrite("ClassAddReferencedObjects", &UClass::ClassAddReferencedObjects)
		.def_readwrite("ClassCastFlags", &UClass::ClassCastFlags)
		.def_readwrite("ClassConfigName", &UClass::ClassConfigName)
		.def_readwrite("ClassConstructor", &UClass::ClassConstructor)
		.def_readwrite("ClassDefaultObject", &UClass::ClassDefaultObject, py::return_value_policy::reference)
		.def_readwrite("ClassFlags", &UClass::ClassFlags)
		;

}