#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_PerTrackCompression(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_PerTrackCompression,  UObject   >(m, "UAnimationCompressionAlgorithm_PerTrackCompression")
		.def_static("StaticClass", &UAnimationCompressionAlgorithm_PerTrackCompression::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxZeroingThreshold", &UAnimationCompressionAlgorithm_PerTrackCompression::MaxZeroingThreshold)
        .def_readwrite("MaxPosDiffBitwise", &UAnimationCompressionAlgorithm_PerTrackCompression::MaxPosDiffBitwise)
        .def_readwrite("MaxAngleDiffBitwise", &UAnimationCompressionAlgorithm_PerTrackCompression::MaxAngleDiffBitwise)
        .def_readwrite("AllowedRotationFormats", &UAnimationCompressionAlgorithm_PerTrackCompression::AllowedRotationFormats)
        .def_readwrite("AllowedTranslationFormats", &UAnimationCompressionAlgorithm_PerTrackCompression::AllowedTranslationFormats)
        .def_readwrite("ResampledFramerate", &UAnimationCompressionAlgorithm_PerTrackCompression::ResampledFramerate)
        .def_readwrite("MinKeysForResampling", &UAnimationCompressionAlgorithm_PerTrackCompression::MinKeysForResampling)
        .def_readwrite("TrackHeightBias", &UAnimationCompressionAlgorithm_PerTrackCompression::TrackHeightBias)
        .def_readwrite("ParentingDivisor", &UAnimationCompressionAlgorithm_PerTrackCompression::ParentingDivisor)
        .def_readwrite("ParentingDivisorExponent", &UAnimationCompressionAlgorithm_PerTrackCompression::ParentingDivisorExponent)
        .def_readwrite("RotationErrorSourceRatio", &UAnimationCompressionAlgorithm_PerTrackCompression::RotationErrorSourceRatio)
        .def_readwrite("TranslationErrorSourceRatio", &UAnimationCompressionAlgorithm_PerTrackCompression::TranslationErrorSourceRatio)
        .def_readwrite("MaxErrorPerTrackRatio", &UAnimationCompressionAlgorithm_PerTrackCompression::MaxErrorPerTrackRatio)
        .def_readwrite("PerturbationProbeSize", &UAnimationCompressionAlgorithm_PerTrackCompression::PerturbationProbeSize)
        .def_readwrite("PerReductionCachedData", &UAnimationCompressionAlgorithm_PerTrackCompression::PerReductionCachedData)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxAngleDiff)
        .def_readwrite("MaxEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxEffectorDiff)
        .def_readwrite("MinEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MinEffectorDiff)
        .def_readwrite("EffectorDiffSocket", &UAnimationCompressionAlgorithm_RemoveLinearKeys::EffectorDiffSocket)
        .def_readwrite("ParentKeyScale", &UAnimationCompressionAlgorithm_RemoveLinearKeys::ParentKeyScale)
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
          ;
}